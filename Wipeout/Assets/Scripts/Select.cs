using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class Select : MonoBehaviour
{
    public Button a;
    public Button b;
    public Button c;
    public Button d;
    private float startTime = 0f;
    private bool isPressedStart = false;

    // Start is called before the first frame update
    void Start()
    {
        //startButton = GetComponent<Button>();
        //endButton = GetComponent<Button>();
        //// 스타트 버튼이 클릭되었을 때 유니티 메서드 호출
        a.onClick.AddListener(OnClickeda);
        b.onClick.AddListener(OnClickedb);
        c.onClick.AddListener(OnClickedc);
        d.onClick.AddListener(OnClickedd);
    }

    // Update is called once per frame
    void Update()
    {
        if (isPressedStart)
        {
            startTime += Time.deltaTime * 3f;
            if (startTime >= 3.5f)
            {
                SceneManager.LoadScene("Main");
            }
        }
    }

    //
    private void OnClickeda()
    {
        // loadScene();
        isPressedStart = true;
    }
    private void OnClickedb()
    {
        isPressedStart = true;
    }
    private void OnClickedc()
    {
        // loadScene();
        isPressedStart = true;
    }
    private void OnClickedd()
    {
        isPressedStart = true;
    }
}
