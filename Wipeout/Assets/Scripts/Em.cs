using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;

public class Em : MonoBehaviour
{
    public GameObject obj1;
    public GameObject obj2;
    public GameObject obj3;
    public TextMeshProUGUI name1;
    public TextMeshProUGUI  name2;
    public TextMeshProUGUI  name3;
    public TextMeshProUGUI  time1;
    public TextMeshProUGUI  time2;
    public TextMeshProUGUI  time3;
    public float g_time;
    // Start is called before the first frame update
    void Start()
    {
        g_time = 0;
        Transform tr =obj1.transform.Find("0");
        tr.gameObject.SetActive(false);
        tr = obj1.transform.Find("1");
        tr.gameObject.SetActive(false);
        tr = obj1.transform.Find("2");
        tr.gameObject.SetActive(false);
        tr = obj1.transform.Find("3");
        tr.gameObject.SetActive(false);

        tr = obj2.transform.Find("0");
        tr.gameObject.SetActive(false);
        tr = obj2.transform.Find("1");
        tr.gameObject.SetActive(false);
        tr = obj2.transform.Find("2");
        tr.gameObject.SetActive(false);
        tr = obj2.transform.Find("3");
        tr.gameObject.SetActive(false);

        tr = obj3.transform.Find("0");
        tr.gameObject.SetActive(false);
        tr = obj3.transform.Find("1");
        tr.gameObject.SetActive(false);
        tr = obj3.transform.Find("2");
        tr.gameObject.SetActive(false);
        tr = obj3.transform.Find("3");
        tr.gameObject.SetActive(false);
        //플레이어의 랭크를 불러옴
        SetRank(GameData.rank);

        //랭킹 123등 불러와서 기록 , 이름 ,플레이한캐릭터 변경해주기
        if (GameData.Selected1 > -1)
        {
            //선택한 캐릭터모델만 보여주기
            tr = obj1.transform.Find(GameData.Selected1.ToString());
            tr.gameObject.SetActive(true);
            //저장된이름
            name1.text = GameData.Name1;
            time1.text = string.Format("{0:N2}", GameData.Time1);
        }
        if (GameData.Selected2 > -1)
        {
            //선택한 캐릭터모델만 보여주기
            tr = obj2.transform.Find(GameData.Selected2.ToString());
            tr.gameObject.SetActive(true);
            //저장된이름
            name2.text = GameData.Name2;
            time2.text = string.Format("{0:N2}", GameData.Time2);
        }
        if (GameData.Selected3 > -1)
        { //선택한 캐릭터모델만 보여주기
            tr = obj3.transform.Find(GameData.Selected3.ToString());
            tr.gameObject.SetActive(true);
            //저장된이름
            name3.text = GameData.Name3;
            time3.text = string.Format("{0:N2}", GameData.Time3);

        }
    }

    // Update is called once per frame
    void Update()
    {
        g_time += Time.deltaTime;
        if (g_time>10) {
            //랭킹저장해주기
            if (GameData.Selected1 > -1)
            {
                //저장된이름
                PlayerPrefs.SetString("1등이름", GameData.Name1);
                PlayerPrefs.SetFloat("1등시간",GameData.Time1);
                PlayerPrefs.SetInt("1등캐릭터", GameData.Selected1);
            }
            if (GameData.Selected2 > -1)
            {

                PlayerPrefs.SetString("2등이름", GameData.Name2);
                PlayerPrefs.SetFloat("2등시간", GameData.Time2);
                PlayerPrefs.SetInt("2등캐릭터", GameData.Selected2);
            }
            if (GameData.Selected3 > -1)
            {
            
                PlayerPrefs.SetString("3등이름", GameData.Name3);
                PlayerPrefs.SetFloat("3등시간", GameData.Time3);
                PlayerPrefs.SetInt("3등캐릭터", GameData.Selected3);

            }
            PlayerPrefs.Save();
            SceneManager.LoadScene(0);
        }
    }

    void SetRank(int rank)
    {
        switch (rank)
        {
            case 1:
                GameData.Name1 = GameData.name;
                GameData.Time1 = GameData.time;
                GameData.Selected1 = GameData.selected;
                break;
            case 2:
                GameData.Name2 = GameData.name;
                GameData.Time2 = GameData.time;
                GameData.Selected2 = GameData.selected;
                break;
            case 3:
                GameData.Name3 = GameData.name;
                GameData.Time3 = GameData.time;
                GameData.Selected3 = GameData.selected;
                break;
        }
    }
}
