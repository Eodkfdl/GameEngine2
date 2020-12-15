using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrampolineFunc : MonoBehaviour
{
    public bool playerCheck = false;
    private GameObject player;
    private PlayerController playerScript;
    private CharacterController playerCC;
    private Vector3 newPlayerPos;
    private float saveJumpPower;

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
            playerScript.JumpPower = 15.0f;
        }
    }

    private void OnTriggerEnter(Collider coll)
    {
        if (coll.CompareTag("PlayerFoot"))   //플레이어 발에 붙은 콜라이더
        {
            Debug.Log("캐릭터 발판 밟음");
            saveJumpPower = playerScript.JumpPower;
            playerCheck = true; //플레이어가 발판에 올라탐
        }
    }

    private void OnTriggerExit(Collider coll)
    {
        if (coll.CompareTag("PlayerFoot"))
        {
            Debug.Log("캐릭터 발판 떠남");
            playerScript.JumpPower = saveJumpPower;
            playerCheck = false;
        }
    }
}
