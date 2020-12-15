using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GateFunc : MonoBehaviour
{
    public bool playerCheck = false;
    private GameObject player;
    private PlayerController playerScript;
    private CharacterController playerCC;
    private Vector3 newPlayerPos;

    // Start is called before the first frame update
    void Start()
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
        if (playerCheck)
        {
            newPlayerPos = new Vector3(0, 20, 0);
            playerCC.Move(newPlayerPos * Time.deltaTime);    //이동후 좌표에서 이동 직전 좌표를 뺀만큼 플레이어를 이동
            //playerCC.Move(new Vector3(0, -5.0f * Time.deltaTime, 0));   //이걸 안해주면 isGrounded가 제대로 확인이 안됨

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
            //playerCheck = false; //플레이어가 발판을 떠남
        }
    }
}
