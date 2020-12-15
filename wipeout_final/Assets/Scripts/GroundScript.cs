using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GroundScript : MonoBehaviour
{
    private GameObject Gate;
    private GateFunc GateScript;

    // Start is called before the first frame update
    void Start()
    {
        Gate = GameObject.FindWithTag("Gate");  //플레이어 캐릭터를 찾는다
        if (Gate)  //찾았으면 컴포넌트 수집
        {
            GateScript = Gate.GetComponent<GateFunc>();
        }
    }

    private void OnTriggerEnter(Collider coll)
    {
        if (coll.CompareTag("PlayerFoot"))
        {
            GateScript.playerCheck = false;
        }
    }
}
