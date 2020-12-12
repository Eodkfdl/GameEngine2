using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    [SerializeField]
    float gravity = 9.81f;  //중력
    [SerializeField]
    float runSpeed = 5.0f;  //달리는 속도
    [SerializeField]
    float mouseSensitivity = 2.0f;  //카메라 마우스 감도
    [SerializeField]
    int JumpPower = 5;   //점프하는 힘

    Transform myTransform;
    Transform model;

    CharacterController cc;
    Animator anim;
    private Rigidbody rigid;

    private bool IsGround = true;

    Vector3 mouseMove;
    Vector3 move;
    Transform cameraParentTransform;
    Transform cameraTransform;

    void Start()
    {
        rigid = GetComponent<Rigidbody>();
    }

    void Awake()
    {
        myTransform = transform;
        cc = GetComponent<CharacterController>();
        model = transform.GetChild(0);
        anim = model.GetComponent<Animator>();
        cameraTransform = Camera.main.transform;
        cameraParentTransform = cameraTransform.parent;
    }

    void Update()
    {
        Balance();
        CameraDistanceCtrl();
        if(cc.isGrounded)
        {
            Jump();
            GradientCheck();
            MoveCalc(1.0f);
        }
        else
        {
            anim.SetBool("isGrounded", false); // 캐릭터에 낙하모션 같은걸 넣어야 하면 사용 지금은 쓸데 없음
            move.y -= gravity * Time.deltaTime;

            MoveCalc(0.01f);
        }

        cc.Move(move * Time.deltaTime);
    }

    void LateUpdate()
    {
        cameraParentTransform.position = myTransform.position + Vector3.up * 1.4f; //카메라 높이
        mouseMove += new Vector3(-Input.GetAxisRaw("Mouse Y") * mouseSensitivity, Input.GetAxisRaw("Mouse X") * mouseSensitivity, 0); //마우스 움직임
        if (mouseMove.x < -10)
            mouseMove.x = -10;  //마우스 회전각도 제한
        else if (30 < mouseMove.x)
            mouseMove.x = 30;

        cameraParentTransform.localEulerAngles = mouseMove;
    }

    void Balance()
    {
        if(myTransform.eulerAngles.x != 0 || myTransform.eulerAngles.z != 0) //캐릭터가 무언가에 의해 기울어지면 바로세움
        {
            myTransform.eulerAngles = new Vector3(0, myTransform.eulerAngles.y, 0);
        }
    }
    void CameraDistanceCtrl()
    {
        Camera.main.transform.localPosition += new Vector3(0, 0, Input.GetAxisRaw("Mouse ScrollWheel") * 2.0f); //마우스 휠로 카메라 거리 조절
        if (-1 < Camera.main.transform.localPosition.z)
            Camera.main.transform.localPosition = new Vector3(Camera.main.transform.localPosition.x, Camera.main.transform.localPosition.y, -1);    //최대로 가까운 수치
        else if (Camera.main.transform.localPosition.z < -5)
            Camera.main.transform.localPosition = new Vector3(Camera.main.transform.localPosition.x, Camera.main.transform.localPosition.y, -5);    //최대로 가까운 수치
    }

    void MoveCalc(float ratio)
    {
        float tempMoveY = move.y;
        move.y = 0; //이동에는 xz값만 필요하므로 제외
        Vector3 inputMoveXZ = new Vector3(Input.GetAxis("Horizontal"), 0, Input.GetAxis("Vertical"));
        // 대각선 이동이 루트2배의 속도를 갖는걸 막기위해 속도가 1 이상이되면 노멀라이즈 후 속도를 곱해 어느 방향이던 일정한 속도를 가지게 만듬
        float inputMoveXZMgnitude = inputMoveXZ.sqrMagnitude;
        inputMoveXZ = myTransform.TransformDirection(inputMoveXZ);

        if (inputMoveXZMgnitude <= 1)
            inputMoveXZ *= runSpeed;
        else
            inputMoveXZ = inputMoveXZ.normalized * runSpeed;

        // 조작 중에만 카메라 방향에 따라 캐릭터가 움직이도록 함
        if (Input.GetButton("Horizontal") || Input.GetButton("Vertical"))
        {
            Quaternion cameraRotation = cameraParentTransform.rotation;
            cameraRotation.x = cameraRotation.z = 0;    // y축만 필요하므로 나머지 값은 0으로
            // 부드러운 회전을 위해 Slerp를 이용
            myTransform.rotation = Quaternion.Slerp(myTransform.rotation, cameraRotation, 10.0f * Time.deltaTime);

            if (move != Vector3.zero)    // Quaternion.LookRotation는 (0,0,0)이 들어가면 경고를 내므로 예외처리
            {
                Quaternion characterRotation = Quaternion.LookRotation(move);
                characterRotation.x = characterRotation.z = 0;
                model.rotation = Quaternion.Slerp(model.rotation, characterRotation, 10.0f * Time.deltaTime);
            }

            // 관성을 위해 MoveToward를 활용해 서서히 이동
            move = Vector3.MoveTowards(move, inputMoveXZ, ratio * runSpeed);
        }
        else
        {
            // 조작이 없으면 서서히 멈춘다.
            move = Vector3.MoveTowards(move, Vector3.zero, (1 - inputMoveXZMgnitude) * runSpeed * ratio);

            //멈추는 애니메이션
            anim.SetTrigger("Stop");
        }
        float speed = move.sqrMagnitude;
        anim.SetFloat("MoveStart", speed);      
        //속도에 맞게 움직이게 해달란 의미인가??--> 움직이는 방향에 대해서도 궁금? 
        //방향에 따라 다른 애니메이션?(이미 만들어둠), 안쓴다면 어떻게?
        //블랜드 트리를 이용해서 속도에 따라 애니메이션 블랜딩 가능함, 그것 말고 45도 각도로 움직이는 것도 만들어둠.
  
        move.y = tempMoveY;    //y값 복구
    }

    void GradientCheck()
    {
        anim.SetBool("isGrounded", true);
        if (Physics.Raycast(myTransform.position, Vector3.down, 0.2f))
        // 경사로를 구분하기 위해 밑으로 레이를 쏘아 땅을 확인
        // CharacterController는 밑으로 지속적으로 move가 일어나야 땅을 체크하는데 -y값이 너무 낮으면 조금만 경사져도 공중에 뜨고 너무 높으면 절벽에서 떨어질때 추락하듯 바로 떨어짐
        // 캡슐 모양의 CharacterController에서 절벽에 떨어지기 직전엔 중앙에서 밑으로 쏘아지는 레이에 아무것도 닿지 않으므로 그때만 -y값을 낮추면 경사로에서도 잘다님
        {
            move.y = -5;
        }
        else
            move.y = -1;
    }

    void Jump()
    {
        if (Input.GetMouseButtonDown(0))
        {
            rigid.velocity = transform.up * JumpPower;
        }
    }

  
}
