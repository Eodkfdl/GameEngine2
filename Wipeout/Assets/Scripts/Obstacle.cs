using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Obstacle : MonoBehaviour
{
    public int flag;

    public int sign;

    public float speed;

    public float minX, maxX;

    public float minY, maxY;

    public float elapsedTime;
    bool isStart = false;

    // Start is called before the first frame update

    // Update is called once per frame
    void Update()
    {
        switch (flag)
        {
            case 1:
                transform.position += new Vector3(speed * Time.deltaTime * sign, 0, 0);
                if (transform.position.x <= minX || transform.position.x >= maxX)
                {
                    sign *= -1;
                }
                break;
            case 2:
                transform.position += new Vector3(0, speed * Time.deltaTime * sign, 0);
                if (transform.position.y <= minY || transform.position.y >= maxY)
                {
                    sign *= -1;
                }
                break;
            case 3:
                elapsedTime += Time.deltaTime;
                if (elapsedTime >= 1 && sign == 1)
                {
                    transform.position += new Vector3(0, -1000, 0);
                    sign *= -1;
                    elapsedTime = 0;
                }
                else if (elapsedTime >= 1 && sign == -1)
                {
                    transform.position += new Vector3(0, 1000, 0);
                    sign *= -1;
                    elapsedTime = 0;
                }
                break;

        }

    }

}
