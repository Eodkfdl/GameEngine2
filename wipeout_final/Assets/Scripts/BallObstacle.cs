using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallObstacle : MonoBehaviour
{
    
    public Vector3 origin;

    public Rigidbody rigidbody;

    private void Start()
    {
        rigidbody.velocity = new Vector3(0f, 0f, 0f);
    }
    // Update is called once per frame
    void Update()
    {
        if(transform.position.z <= 250.0)
        {
            rigidbody.velocity = new Vector3(0f, 0f, 0f);
            transform.position = origin;

            


        }
    }
}
