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
    public float power;

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
        //Debug.Log(playerCheck);
        if (playerCheck)
        {
            newPlayerPos = new Vector3(0, power, 0);
            playerCC.Move(newPlayerPos * Time.deltaTime);
        }
    }

    private void OnTriggerEnter(Collider coll)
    {
        if (coll.CompareTag("PlayerFoot"))   //플레이어 발에 붙은 콜라이더
        {
            playerCheck = true; 
        }
    }
}
