using System.Collections;
using System.Collections.Generic;
using UnityEngine;




public struct GameData 
{
    private  static string  Name;//사용자이름
    private static float Time;//시간
    private static int Selected=-1;//선택된캐릭터
    private static int Rank=0;

    public static string Name1="";//사용자이름
    public static float Time1=999;//시간
    public static int Selected1 =-1;//선택된캐릭터
 
    public static string Name2="";//사용자이름
    public static float Time2=999;//시간
    public static int Selected2 = -1;//선택된캐릭터

    public static string Name3="";//사용자이름
    public static float Time3=999;//시간
    public static int Selected3 = -1;//선택된캐릭터
    public static float G_TIME=0;
    public static bool isEnd = false ;
    public static float time
    {
        get
        {
            return Time;
        }
        set
        {
            Time = value;
        }
    }
    public static string name

    {
        get
        {
            return Name;
        }
        set
        {
            Name = value;
        }
    }
    public static int selected
    {
        get
        {
            return Selected;
        }
        set
        {
            Selected = value;
        }
    }
    public static int rank
    {
        get
        {
            return Rank;
        }
        set
        {
           Rank = value;
        }
    }
      

}
