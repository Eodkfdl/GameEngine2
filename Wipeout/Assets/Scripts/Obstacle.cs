using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Obstacle : MonoBehaviour
{
    public int sign;

    public float speed;

    public float minX, maxX;

    // 캐릭터를 태우기 위한 부분 구현
    public bool playerCheck = false;
private GameObject player;
private PlayerController playerScript;
private CharacterController playerCC;
private Vector3 newPlayerPos;


// Start is called before the first frame update
void Awake()
{
    player = GameObject.FindWithTag("Player");  //플레이어 캐릭터를 찾는다
    if (player)  //찾았으면 컴포넌트 수집
    {
        playerScript = player.GetComponent<PlayerController>();
        playerCC = player.GetComponent<CharacterController>();
    }
}

// Update is called once per frame
void Update()
{
    Vector3 prevPos = transform.position;   //이동 직전 좌표를 저장

    transform.position += new Vector3(speed * Time.deltaTime * sign, 0, 0);
    if (playerCheck)
    {
        if (playerScript.move.y < 0 && playerScript.move.x == 0 && playerScript.move.z == 0) //플레이어가 점프상태가 아니고 움직이지 않으면
        {
            newPlayerPos = new Vector3(speed * sign, 0, 0);
            playerCC.Move(newPlayerPos * Time.deltaTime);    //이동후 좌표에서 이동 직전 좌표를 뺀만큼 플레이어를 이동
            playerCC.Move(new Vector3(0, -5.0f * Time.deltaTime, 0));   //이걸 안해주면 isGrounded가 제대로 확인이 안됨
        }
    }
    if (transform.position.x <= minX || transform.position.x >= maxX)
    {
        sign *= -1;
    }
}

private void OnTriggerEnter(Collider coll)
{
    if (coll.CompareTag("PlayerFoot"))   //플레이어 발에 붙은 콜라이더
    {
        playerCheck = true; //플레이어가 발판에 올라탐
    }
}

private void OnTriggerExit(Collider coll)
{
    if (coll.CompareTag("PlayerFoot"))
    {
        playerCheck = false; //플레이어가 발판을 떠남
    }
}
    
}
