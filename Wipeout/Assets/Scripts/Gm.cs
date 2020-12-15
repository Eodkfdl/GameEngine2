using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;

public class Gm : MonoBehaviour
{
    public float G_time;//글로벌타임
    public float P_time;//시작되고 플레이된시간
    public int GameStatus;
    public GameObject obj;
    public TextMeshProUGUI t_time;
    public TextMeshProUGUI r_time;
    public int selected;//선택된캐릭터 인티져형으로저장
    public string u_name;//유저이름 저장해두었다가 명예의전당올려주자.
   
    // Start is called before the first frame update
    void Start()
    {
        u_name = GameData.name;
        selected= GameData.selected;
        G_time = 0;
        P_time = 0;
        GameStatus = 0;
        Transform tr = obj.transform.Find("0");
        tr.gameObject.SetActive(false);
        tr = obj.transform.Find("1");
        tr.gameObject.SetActive(false);
        tr = obj.transform.Find("2");
        tr.gameObject.SetActive(false);
        tr = obj.transform.Find("3");
        tr.gameObject.SetActive(false);
        //    obj = GameObject.Find("timer");
        //t_time = obj.GetComponent<TextMeshProUGUI>();
        // obj = GameObject.Find("r_timer");
        //  r_time = obj.GetComponent<TextMeshProUGUI>();
        switch (selected)
        {
            case 0://무스타
                tr = obj.transform.Find("0");
                tr.gameObject.SetActive(true);
                break;
            case 1://포린
                tr = obj.transform.Find("1");
                tr.gameObject.SetActive(true);
                break;
            case 2://셰리
                tr = obj.transform.Find("2");
                tr.gameObject.SetActive(true);
                break;
            case 3://이비
                tr = obj.transform.Find("3");
                tr.gameObject.SetActive(true);
                break;
        }
    }

    // Update is called once per frame
    void Update()
    {
        G_time += Time.deltaTime;
        switch(GameStatus) {
            case 0:
                if (G_time > 3) {
                    r_time.alpha = 0 ;
                    GameStatus = 1;
                }
                r_time.text = string.Format("{0:N0}", G_time);
                break;
            case 1://게임시작상태
                P_time += Time.deltaTime;
                t_time.text = string.Format("{0:N2}", P_time);
                t_time.text = t_time.text + "'s";
                break;
            case 2://게임멈춤

                break;
            case 3://끝난상태

                break;
        }
        if (G_time > 5) {//종료조건 여기다 넣어주기
            GameData.time=P_time;

            if (GameData.Time3 > GameData.time)
            {
                GameData.rank = 3;
            }
            if (GameData.Time2 > GameData.time)
            {
                GameData.rank = 2;
            }
            if (GameData.Time1 > GameData.time)
            {
                GameData.rank = 1;
            }
            SceneManager.LoadScene("Ending");
        } 
    }


}
