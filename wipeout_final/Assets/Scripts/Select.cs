using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using TMPro;

public class Select : MonoBehaviour
{
    public Button a;
    public Button b;
    public Button c;
    public Button d;
    public  TMP_InputField input;
    public Button start;
    public int sel = -1;
    public int textlen = 0;
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
        start.onClick.AddListener(OnClickedStart);
        //키값으로저장
       if(PlayerPrefs.HasKey("1등이름"))
        {
           GameData.Name1= PlayerPrefs.GetString("1등이름");
           GameData.Time1 =PlayerPrefs.GetFloat("1등시간");
         GameData.Selected1 =PlayerPrefs.GetInt("1등캐릭터");
        }
        if (PlayerPrefs.HasKey("2등이름"))
        {
            GameData.Name2 = PlayerPrefs.GetString("2등이름");
            GameData.Time2 = PlayerPrefs.GetFloat("2등시간");
            GameData.Selected2 = PlayerPrefs.GetInt("2등캐릭터");
        }
        if (PlayerPrefs.HasKey("3등이름"))
        {
            GameData.Name3 = PlayerPrefs.GetString("3등이름");
            GameData.Time3 = PlayerPrefs.GetFloat("3등시간");
            GameData.Selected3 = PlayerPrefs.GetInt("3등캐릭터");
        }
        //불러왔으면 저장되있는정보는 다지워둔다
        PlayerPrefs.DeleteAll();
    }

    // Update is called once per frame
    void Update()
    {
        textlen = input.text.Length;
        if (isPressedStart)
        {
          
                SceneManager.LoadScene(2);
           
        }
    }

    //
    private void OnClickeda()
    {
        // loadScene();
        sel = 0;
        GameData.selected = 0;
    }
    private void OnClickedb()
    {
        sel = 2;
        GameData.selected = 2;
    }
    private void OnClickedc()
    {
        // loadScene();
        sel = 1;
        GameData.selected = 1;
    }
    private void OnClickedd()
    {
        sel = 3;
        GameData.selected = 3;
    }
    private void OnClickedStart()
    {
        if (GameData.selected > -1&&input.text.Length>0) {
            isPressedStart = true;
            GameData.name = input.text;
        }
    }
}
