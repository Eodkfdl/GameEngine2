using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Obstacle : MonoBehaviour
{
    public int sign;

    public float speed;

    public float minX, maxX;

    // Start is called before the first frame update

    // Update is called once per frame
    void Update()
    {
        transform.position += new Vector3(speed * Time.deltaTime * sign,0,0);
        if(transform.position.x <= minX || transform.position.x >= maxX)
        {
            sign *= -1;
        }
    }

}
