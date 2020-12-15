#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// AnimationScript
struct AnimationScript_t1DFBF920853C5C53C5B0D9CB72C39D82E6EED0EE;
// BallObstacle
struct BallObstacle_t14DB103C09CCA5FEC197DAB09D31A77093103FF9;
// Em
struct Em_t2FB906755A5C8B9E1A38CEE942BBE1477CA512F9;
// EventSubscriber
struct EventSubscriber_tE8F7072EC3A9ED03318D306EE0BFFB22D13F8431;
// GateFunc
struct GateFunc_tB1FC89C3AB042F4689002BB0DFDB74F00807BD3D;
// Gm
struct Gm_t048FF63D757797A66F07CA1383A099344589F7F9;
// Obstacle
struct Obstacle_t45A47093FD0D640DE4C85A2CB52665B5192A232E;
// PlayerController
struct PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85;
// Select
struct Select_tFB3AFACAA5693CCF92F3FE506F90133FAC4E2AA4;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A;
// System.Decimal[]
struct DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_t041AB6BBA06AC552F17A2D2F97B1728A58D16029;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t974D5AB2327337E73FB2126366C9513F1C075512;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_t3D406BC30294F6C79CA548107716A642055062CE;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t9FFF9E8A3B0E6A173F18EF9C847BCF27D1BF4ACB;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tABE518DC1E2361D29583B0048AF69206C12C9E1C;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652;
// TMPro.TMP_Character
struct TMP_Character_t1875AACA978396521498D6A699052C187903553D;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C;
// TMPro.TMP_InputField
struct TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB;
// TMPro.TMP_InputField/OnChangeEvent
struct OnChangeEvent_t1610FEF044826EE0837528C1E90FCDFC45B3D7AD;
// TMPro.TMP_InputField/OnValidateInput
struct OnValidateInput_t47FA5831345A245F5C6FD9C0E4F5CE43430C1863;
// TMPro.TMP_InputField/SelectionEvent
struct SelectionEvent_t346DD0E470654B452107A056EDE13F796AEAFD3A;
// TMPro.TMP_InputField/SubmitEvent
struct SubmitEvent_tD1BC174A4FE2411600541703750F0F03E991A9BC;
// TMPro.TMP_InputField/TextSelectionEvent
struct TextSelectionEvent_tD42FAD7CC0AA2E613884FC6E86A11EE59CDA3854;
// TMPro.TMP_InputField/TouchScreenKeyboardEvent
struct TouchScreenKeyboardEvent_tF41EB6E5E2B26213D1C0CE6573498CA6ACB3CA1F;
// TMPro.TMP_InputValidator
struct TMP_InputValidator_t4C673E12211AFB82AAF94D9DEA556FDC306E69CD;
// TMPro.TMP_ScrollbarEventHandler
struct TMP_ScrollbarEventHandler_t081C59DD8EC81899836C864E45E60977A40FBA83;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487;
// TMPro.TMP_Style
struct TMP_Style_t9FD01084B9E3F1D4B92E87114C454C98BA20FBAD;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_tC6C45E5B0EC8EF4BA7BB147712516656B0D26C04;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E;
// TMPro.TMP_Text
struct TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505;
// TMPro.TMP_TextElement
struct TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_tD40BE2C9C48281D1F72B04DDB85CBF15B89FCA29;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t799E5463E49BC0C14AE127D8821E83BA61F3A000;
// TrampolineFunc
struct TrampolineFunc_tFDEC9DE28330294ED72B9CA1C2260EB990A5A350;
// UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C;
// UnityEngine.Animator
struct Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.CharacterController
struct CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Event
struct Event_t187FF6A6B357447B83EC2064823EE0AEC5263210;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Material[]
struct MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Rigidbody
struct Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5;
// UnityEngine.UI.Button
struct Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.Graphic
struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t9E072B95DA6476C487C0B07A815291249025C0E4;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t8F8679D0EAFACBCBD603E6B0E741E6A783DB3389;
// UnityEngine.UI.Selectable
struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739;
// UnityTemplateProjects.SimpleCameraController
struct SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42;
// UnityTemplateProjects.SimpleCameraController/CameraState
struct CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7;

IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_t68A7070D2AD3860C3EE327C94F38270E49AFB489_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral003E8ECDAC1B420AE7FD1FE995FBD5D61CB5AE0C;
IL2CPP_EXTERN_C String_t* _stringLiteral03CDC6A1FBBF9BF1AEC6F0D6A0FE0F38646A6A1A;
IL2CPP_EXTERN_C String_t* _stringLiteral0D403041C4D7A0132F41447D88B2D68C8E5ED0A2;
IL2CPP_EXTERN_C String_t* _stringLiteral123A7F2FCC9AE7CBBBD7C7627A483853A9708DAB;
IL2CPP_EXTERN_C String_t* _stringLiteral1A4C20C7CB8910EE2B6AA319D550F38E907A046F;
IL2CPP_EXTERN_C String_t* _stringLiteral1E88AB05D76FF253F292B74866D32460BB3836E2;
IL2CPP_EXTERN_C String_t* _stringLiteral2006A0303B4C4B24D977E626015FB68076C54B1B;
IL2CPP_EXTERN_C String_t* _stringLiteral225319E943413D79E58FF96923165D4846E69D4F;
IL2CPP_EXTERN_C String_t* _stringLiteral294D359ECE148A430F19981912277E5154CA19E0;
IL2CPP_EXTERN_C String_t* _stringLiteral2967083730BC8A2461A7EFE981484A2852587540;
IL2CPP_EXTERN_C String_t* _stringLiteral2D2CB022BC3D26BD1407C4AA787D5E46E1AD4C3B;
IL2CPP_EXTERN_C String_t* _stringLiteral356A192B7913B04C54574D18C28D46E6395428AB;
IL2CPP_EXTERN_C String_t* _stringLiteral3EEFBD49BB55971FFF1BF13D5BD69D871C3021F8;
IL2CPP_EXTERN_C String_t* _stringLiteral400BCBFE6951DB76550026ADC0B604B4BEECE182;
IL2CPP_EXTERN_C String_t* _stringLiteral494706AB7775375C1D3052BA13CDEC4A12E6FAEC;
IL2CPP_EXTERN_C String_t* _stringLiteral4B937CC841D82F8936CEF1EFB88708AB5B0F1EE5;
IL2CPP_EXTERN_C String_t* _stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C;
IL2CPP_EXTERN_C String_t* _stringLiteral5701B5F6FEAA9AAAE618DD553ADC29893963CC1A;
IL2CPP_EXTERN_C String_t* _stringLiteral627A7387C8BDDC7ACFF00D342D3F799DC6C19A31;
IL2CPP_EXTERN_C String_t* _stringLiteral6B80223C8CAD5F4ADCCBE72838231F6CC621F8A8;
IL2CPP_EXTERN_C String_t* _stringLiteral6D5CF88A7EF83280C1CB830831189D9A37D8093F;
IL2CPP_EXTERN_C String_t* _stringLiteral77DE68DAECD823BABBB58EDB1C8E14D7106E83BB;
IL2CPP_EXTERN_C String_t* _stringLiteral9A0D4BA63F9F45564A58D1443A6CD311760763FC;
IL2CPP_EXTERN_C String_t* _stringLiteral9DD2993179F8F3A5AC7AA25125651716411C5AA2;
IL2CPP_EXTERN_C String_t* _stringLiteral9F8F83EA07374F8F9FEC9DA4A9042C3FBE8E5293;
IL2CPP_EXTERN_C String_t* _stringLiteral9FE00ACEBC106E4DBA1611CDD1D7DC308A244991;
IL2CPP_EXTERN_C String_t* _stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C;
IL2CPP_EXTERN_C String_t* _stringLiteralB7D4A7FC0E235D5840312386C3B17422DEEF6D76;
IL2CPP_EXTERN_C String_t* _stringLiteralD666DEA102FF035F02A4B5D1C43B9AE162A34FB0;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA4B9237BACCCDF19C0760CAB7AEC4A8359010B0;
IL2CPP_EXTERN_C String_t* _stringLiteralE0782BCFD03AC9698E803EB4C775843E22AE021F;
IL2CPP_EXTERN_C String_t* _stringLiteralE53407CFE1A5156B9F0D1EED3BAB5EF3AE75CFD8;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E_m1DCA6E99D55768E09085D1B6421BB963CFA4F7AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventSubscriber_OnClickedExit_mA1D5256B9C8D9C61B623242C59032394E0817806_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventSubscriber_OnClickedStart_m693E17381019C934B48ABF1CCB7CCCA982A33739_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E_mFEFA14BEB7F1347EB848907DD7F40F2DBDB2AEB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayerController_t4CE339054014370D89B89922EDC0EA2766589C85_mE97771A17F0DD6C17DECDDE26CC1D2D6B0C02C7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Select_OnClickedStart_m30A6F5C8C49466705A8736265EBB50E400505A6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Select_OnClickeda_mDB7973B1B41A2BC88F8EC577B48932AE6CFA86A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Select_OnClickedb_m268D97B2D508D3C5339C1216DBBF89593FE19CA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Select_OnClickedc_m1C9E19D14326357D6FBA59B2CC76A51000EED5B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Select_OnClickedd_m52B5D8AB7A06C1013568F936C651718F02214040_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t AnimationScript_Update_m9185E3C61E04D4446FA04A50ADF03CC0A9996CA2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraState_LerpTowards_m883AAF2D3C7F5045B64CAF655FB84EF0FC98F282_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraState_Translate_m76BCC104A48EA7F125D5A50D874A2DEEA7967247_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Em_SetRank_mD2E682562C2A02F62806C03AE5B123111715D21D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Em_Start_m72BE3D8532D75CE881F6469591B252C1943BBEF8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Em_Update_mB935BE2A07B6D376153680A922F37A215D992441_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EventSubscriber_Start_m646B42B22DE5875D98C531F17B9577D16F0FAA2F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EventSubscriber_Update_m94E9ED71C72B687FF3489A63718BA552EDBD352A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameData__cctor_mBF4CCD7D84C1DCC0BD138AB271A54DD8515E16F8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameData_get_name_mB797547A4AB5AF4C498AE31BA6ED18FDC83541B5AssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameData_get_name_mB797547A4AB5AF4C498AE31BA6ED18FDC83541B5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameData_get_rank_mAE1E8FBA1F2E3514282BEB903AA6ACECDDDB6E71AssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameData_get_rank_mAE1E8FBA1F2E3514282BEB903AA6ACECDDDB6E71_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameData_get_selected_m8E8BA8713A55BD9E2DFDCE4FC887392C79683943AssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameData_get_selected_m8E8BA8713A55BD9E2DFDCE4FC887392C79683943_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameData_get_time_m4E5B3140960E8C711FEF0BACBBE7AB88FDDA4271AssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameData_get_time_m4E5B3140960E8C711FEF0BACBBE7AB88FDDA4271_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameData_set_name_m822B2CAFFF7DDFFC6A44F2855F8F9A0272481B6DAssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameData_set_name_m822B2CAFFF7DDFFC6A44F2855F8F9A0272481B6D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameData_set_rank_m3FE835211C77E0133834346389ABD148910B1918AssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameData_set_rank_m3FE835211C77E0133834346389ABD148910B1918_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameData_set_selected_m0F16D2E8EDD1DE62BDBC13890DBB3C58B80A712DAssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameData_set_selected_m0F16D2E8EDD1DE62BDBC13890DBB3C58B80A712D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameData_set_time_mF61A5E4EA88301619784B34E77D1EDF721C915AEAssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameData_set_time_mF61A5E4EA88301619784B34E77D1EDF721C915AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GateFunc_OnTriggerEnter_m13AABC80E07A6BA4E60A50779DD04C64C0417109_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GateFunc_OnTriggerExit_mDBADF26AF87E5C15C00BA07A94942BDFF4554D8D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GateFunc_Start_m874C0289C7E5ADB2E09F42A3CA8A96BBA52C74A3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GateFunc_Update_m519EE5DD57F96C401B3171FAC91088BADA05FC57_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Gm_Start_m09CF4D669AB3C885BDF624B650A0C11CC431489B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Gm_Update_m95801C0741FBFC0EE2CEB6C6E2F761CCE8C0137C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Obstacle_Awake_mBB902A148BE45B6A355B48ED19D4C65FDAC26EB1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Obstacle_OnTriggerEnter_m9322D17FBF4BCF07FFC7B86FB37176062FC7000E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Obstacle_OnTriggerExit_m446BD1511ACFE5231C0D2465E9C5A30270091DEE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Obstacle_Update_m78945C15186A0FB74BCC90514333E8F2E67B5E12_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerController_Awake_m73685A351E62D9DE77A8415499A6E5B6E741189B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerController_CameraDistanceCtrl_m3E633FDCEFA7E7447A61B0F97BB4BCE2170F666F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerController_GradientCheck_mBFC461FBA9C7B778616637921255C38C751D8972_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerController_LateUpdate_m4483245C11B5D7C69E16CEDC9A1CAD600D5C5F6D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerController_MoveCalc_mB1DF947C3B9BC6D1F9A822592FF13183F0A51643_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerController_OnControllerColliderHit_m607D690769AFEFB1B0CDB25CC056DA176CC64E6A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerController_Update_mE64911CD78BC318BCCB0EDB3D9DF3BC1559C70FA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Select_OnClickedStart_m30A6F5C8C49466705A8736265EBB50E400505A6A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Select_OnClickeda_mDB7973B1B41A2BC88F8EC577B48932AE6CFA86A4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Select_OnClickedb_m268D97B2D508D3C5339C1216DBBF89593FE19CA3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Select_OnClickedc_m1C9E19D14326357D6FBA59B2CC76A51000EED5B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Select_OnClickedd_m52B5D8AB7A06C1013568F936C651718F02214040_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Select_Start_m6B304A8365D1B53530929E2C65D05C09E957FF86_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Select_Update_mC4F1DDACF689BAA630314CF9024A998871DD7AD6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleCameraController_GetInputTranslationDirection_m73C99DB69CEB467834BBA00A62415D1CEEF0CB47_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleCameraController_Update_mBCD24408A4A2C4053F2F98DB808BD6DE88CA998F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleCameraController__ctor_m8DE12FC1A6C31D2D60ED78F0B574CE3F864F546E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrampolineFunc_OnTriggerEnter_m7A4528BC4C94144A2C94B63EA8F2E8ECA3961916_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrampolineFunc_OnTriggerExit_mFA6428FB987528E3A6F359DAFCCD58F673C6FA24_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrampolineFunc_Start_m8CF91D9CA7B6F0C9C7EC15A93891F0A1DC3B82D9_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// UnityTemplateProjects.SimpleCameraController_CameraState
struct  CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7  : public RuntimeObject
{
public:
	// System.Single UnityTemplateProjects.SimpleCameraController_CameraState::yaw
	float ___yaw_0;
	// System.Single UnityTemplateProjects.SimpleCameraController_CameraState::pitch
	float ___pitch_1;
	// System.Single UnityTemplateProjects.SimpleCameraController_CameraState::roll
	float ___roll_2;
	// System.Single UnityTemplateProjects.SimpleCameraController_CameraState::x
	float ___x_3;
	// System.Single UnityTemplateProjects.SimpleCameraController_CameraState::y
	float ___y_4;
	// System.Single UnityTemplateProjects.SimpleCameraController_CameraState::z
	float ___z_5;

public:
	inline static int32_t get_offset_of_yaw_0() { return static_cast<int32_t>(offsetof(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7, ___yaw_0)); }
	inline float get_yaw_0() const { return ___yaw_0; }
	inline float* get_address_of_yaw_0() { return &___yaw_0; }
	inline void set_yaw_0(float value)
	{
		___yaw_0 = value;
	}

	inline static int32_t get_offset_of_pitch_1() { return static_cast<int32_t>(offsetof(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7, ___pitch_1)); }
	inline float get_pitch_1() const { return ___pitch_1; }
	inline float* get_address_of_pitch_1() { return &___pitch_1; }
	inline void set_pitch_1(float value)
	{
		___pitch_1 = value;
	}

	inline static int32_t get_offset_of_roll_2() { return static_cast<int32_t>(offsetof(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7, ___roll_2)); }
	inline float get_roll_2() const { return ___roll_2; }
	inline float* get_address_of_roll_2() { return &___roll_2; }
	inline void set_roll_2(float value)
	{
		___roll_2 = value;
	}

	inline static int32_t get_offset_of_x_3() { return static_cast<int32_t>(offsetof(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7, ___x_3)); }
	inline float get_x_3() const { return ___x_3; }
	inline float* get_address_of_x_3() { return &___x_3; }
	inline void set_x_3(float value)
	{
		___x_3 = value;
	}

	inline static int32_t get_offset_of_y_4() { return static_cast<int32_t>(offsetof(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7, ___y_4)); }
	inline float get_y_4() const { return ___y_4; }
	inline float* get_address_of_y_4() { return &___y_4; }
	inline void set_y_4(float value)
	{
		___y_4 = value;
	}

	inline static int32_t get_offset_of_z_5() { return static_cast<int32_t>(offsetof(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7, ___z_5)); }
	inline float get_z_5() const { return ___z_5; }
	inline float* get_address_of_z_5() { return &___z_5; }
	inline void set_z_5(float value)
	{
		___z_5 = value;
	}
};


// GameData
struct  GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408 
{
public:
	union
	{
		struct
		{
		};
		uint8_t GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408__padding[1];
	};

public:
};

struct GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields
{
public:
	// System.String GameData::Name
	String_t* ___Name_0;
	// System.Single GameData::Time
	float ___Time_1;
	// System.Int32 GameData::Selected
	int32_t ___Selected_2;
	// System.Int32 GameData::Rank
	int32_t ___Rank_3;
	// System.String GameData::Name1
	String_t* ___Name1_4;
	// System.Single GameData::Time1
	float ___Time1_5;
	// System.Int32 GameData::Selected1
	int32_t ___Selected1_6;
	// System.String GameData::Name2
	String_t* ___Name2_7;
	// System.Single GameData::Time2
	float ___Time2_8;
	// System.Int32 GameData::Selected2
	int32_t ___Selected2_9;
	// System.String GameData::Name3
	String_t* ___Name3_10;
	// System.Single GameData::Time3
	float ___Time3_11;
	// System.Int32 GameData::Selected3
	int32_t ___Selected3_12;
	// System.Single GameData::G_TIME
	float ___G_TIME_13;
	// System.Boolean GameData::isEnd
	bool ___isEnd_14;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Time_1() { return static_cast<int32_t>(offsetof(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields, ___Time_1)); }
	inline float get_Time_1() const { return ___Time_1; }
	inline float* get_address_of_Time_1() { return &___Time_1; }
	inline void set_Time_1(float value)
	{
		___Time_1 = value;
	}

	inline static int32_t get_offset_of_Selected_2() { return static_cast<int32_t>(offsetof(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields, ___Selected_2)); }
	inline int32_t get_Selected_2() const { return ___Selected_2; }
	inline int32_t* get_address_of_Selected_2() { return &___Selected_2; }
	inline void set_Selected_2(int32_t value)
	{
		___Selected_2 = value;
	}

	inline static int32_t get_offset_of_Rank_3() { return static_cast<int32_t>(offsetof(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields, ___Rank_3)); }
	inline int32_t get_Rank_3() const { return ___Rank_3; }
	inline int32_t* get_address_of_Rank_3() { return &___Rank_3; }
	inline void set_Rank_3(int32_t value)
	{
		___Rank_3 = value;
	}

	inline static int32_t get_offset_of_Name1_4() { return static_cast<int32_t>(offsetof(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields, ___Name1_4)); }
	inline String_t* get_Name1_4() const { return ___Name1_4; }
	inline String_t** get_address_of_Name1_4() { return &___Name1_4; }
	inline void set_Name1_4(String_t* value)
	{
		___Name1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name1_4), (void*)value);
	}

	inline static int32_t get_offset_of_Time1_5() { return static_cast<int32_t>(offsetof(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields, ___Time1_5)); }
	inline float get_Time1_5() const { return ___Time1_5; }
	inline float* get_address_of_Time1_5() { return &___Time1_5; }
	inline void set_Time1_5(float value)
	{
		___Time1_5 = value;
	}

	inline static int32_t get_offset_of_Selected1_6() { return static_cast<int32_t>(offsetof(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields, ___Selected1_6)); }
	inline int32_t get_Selected1_6() const { return ___Selected1_6; }
	inline int32_t* get_address_of_Selected1_6() { return &___Selected1_6; }
	inline void set_Selected1_6(int32_t value)
	{
		___Selected1_6 = value;
	}

	inline static int32_t get_offset_of_Name2_7() { return static_cast<int32_t>(offsetof(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields, ___Name2_7)); }
	inline String_t* get_Name2_7() const { return ___Name2_7; }
	inline String_t** get_address_of_Name2_7() { return &___Name2_7; }
	inline void set_Name2_7(String_t* value)
	{
		___Name2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name2_7), (void*)value);
	}

	inline static int32_t get_offset_of_Time2_8() { return static_cast<int32_t>(offsetof(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields, ___Time2_8)); }
	inline float get_Time2_8() const { return ___Time2_8; }
	inline float* get_address_of_Time2_8() { return &___Time2_8; }
	inline void set_Time2_8(float value)
	{
		___Time2_8 = value;
	}

	inline static int32_t get_offset_of_Selected2_9() { return static_cast<int32_t>(offsetof(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields, ___Selected2_9)); }
	inline int32_t get_Selected2_9() const { return ___Selected2_9; }
	inline int32_t* get_address_of_Selected2_9() { return &___Selected2_9; }
	inline void set_Selected2_9(int32_t value)
	{
		___Selected2_9 = value;
	}

	inline static int32_t get_offset_of_Name3_10() { return static_cast<int32_t>(offsetof(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields, ___Name3_10)); }
	inline String_t* get_Name3_10() const { return ___Name3_10; }
	inline String_t** get_address_of_Name3_10() { return &___Name3_10; }
	inline void set_Name3_10(String_t* value)
	{
		___Name3_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name3_10), (void*)value);
	}

	inline static int32_t get_offset_of_Time3_11() { return static_cast<int32_t>(offsetof(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields, ___Time3_11)); }
	inline float get_Time3_11() const { return ___Time3_11; }
	inline float* get_address_of_Time3_11() { return &___Time3_11; }
	inline void set_Time3_11(float value)
	{
		___Time3_11 = value;
	}

	inline static int32_t get_offset_of_Selected3_12() { return static_cast<int32_t>(offsetof(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields, ___Selected3_12)); }
	inline int32_t get_Selected3_12() const { return ___Selected3_12; }
	inline int32_t* get_address_of_Selected3_12() { return &___Selected3_12; }
	inline void set_Selected3_12(int32_t value)
	{
		___Selected3_12 = value;
	}

	inline static int32_t get_offset_of_G_TIME_13() { return static_cast<int32_t>(offsetof(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields, ___G_TIME_13)); }
	inline float get_G_TIME_13() const { return ___G_TIME_13; }
	inline float* get_address_of_G_TIME_13() { return &___G_TIME_13; }
	inline void set_G_TIME_13(float value)
	{
		___G_TIME_13 = value;
	}

	inline static int32_t get_offset_of_isEnd_14() { return static_cast<int32_t>(offsetof(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields, ___isEnd_14)); }
	inline bool get_isEnd_14() const { return ___isEnd_14; }
	inline bool* get_address_of_isEnd_14() { return &___isEnd_14; }
	inline void set_isEnd_14(bool value)
	{
		___isEnd_14 = value;
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// TMPro.MaterialReference
struct  MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F 
{
public:
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___fontAsset_1)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_spriteAsset_2() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___spriteAsset_2)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_spriteAsset_2() const { return ___spriteAsset_2; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_spriteAsset_2() { return &___spriteAsset_2; }
	inline void set_spriteAsset_2(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___spriteAsset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAsset_2), (void*)value);
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___material_3)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_material_3() const { return ___material_3; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_3), (void*)value);
	}

	inline static int32_t get_offset_of_isDefaultMaterial_4() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___isDefaultMaterial_4)); }
	inline bool get_isDefaultMaterial_4() const { return ___isDefaultMaterial_4; }
	inline bool* get_address_of_isDefaultMaterial_4() { return &___isDefaultMaterial_4; }
	inline void set_isDefaultMaterial_4(bool value)
	{
		___isDefaultMaterial_4 = value;
	}

	inline static int32_t get_offset_of_isFallbackMaterial_5() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___isFallbackMaterial_5)); }
	inline bool get_isFallbackMaterial_5() const { return ___isFallbackMaterial_5; }
	inline bool* get_address_of_isFallbackMaterial_5() { return &___isFallbackMaterial_5; }
	inline void set_isFallbackMaterial_5(bool value)
	{
		___isFallbackMaterial_5 = value;
	}

	inline static int32_t get_offset_of_fallbackMaterial_6() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___fallbackMaterial_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_fallbackMaterial_6() const { return ___fallbackMaterial_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_fallbackMaterial_6() { return &___fallbackMaterial_6; }
	inline void set_fallbackMaterial_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___fallbackMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallbackMaterial_6), (void*)value);
	}

	inline static int32_t get_offset_of_padding_7() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___padding_7)); }
	inline float get_padding_7() const { return ___padding_7; }
	inline float* get_address_of_padding_7() { return &___padding_7; }
	inline void set_padding_7(float value)
	{
		___padding_7 = value;
	}

	inline static int32_t get_offset_of_referenceCount_8() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___referenceCount_8)); }
	inline int32_t get_referenceCount_8() const { return ___referenceCount_8; }
	inline int32_t* get_address_of_referenceCount_8() { return &___referenceCount_8; }
	inline void set_referenceCount_8(int32_t value)
	{
		___referenceCount_8 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_2;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_2;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// TMPro.TMP_FontStyleStack
struct  TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84 
{
public:
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;

public:
	inline static int32_t get_offset_of_bold_0() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___bold_0)); }
	inline uint8_t get_bold_0() const { return ___bold_0; }
	inline uint8_t* get_address_of_bold_0() { return &___bold_0; }
	inline void set_bold_0(uint8_t value)
	{
		___bold_0 = value;
	}

	inline static int32_t get_offset_of_italic_1() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___italic_1)); }
	inline uint8_t get_italic_1() const { return ___italic_1; }
	inline uint8_t* get_address_of_italic_1() { return &___italic_1; }
	inline void set_italic_1(uint8_t value)
	{
		___italic_1 = value;
	}

	inline static int32_t get_offset_of_underline_2() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___underline_2)); }
	inline uint8_t get_underline_2() const { return ___underline_2; }
	inline uint8_t* get_address_of_underline_2() { return &___underline_2; }
	inline void set_underline_2(uint8_t value)
	{
		___underline_2 = value;
	}

	inline static int32_t get_offset_of_strikethrough_3() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___strikethrough_3)); }
	inline uint8_t get_strikethrough_3() const { return ___strikethrough_3; }
	inline uint8_t* get_address_of_strikethrough_3() { return &___strikethrough_3; }
	inline void set_strikethrough_3(uint8_t value)
	{
		___strikethrough_3 = value;
	}

	inline static int32_t get_offset_of_highlight_4() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___highlight_4)); }
	inline uint8_t get_highlight_4() const { return ___highlight_4; }
	inline uint8_t* get_address_of_highlight_4() { return &___highlight_4; }
	inline void set_highlight_4(uint8_t value)
	{
		___highlight_4 = value;
	}

	inline static int32_t get_offset_of_superscript_5() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___superscript_5)); }
	inline uint8_t get_superscript_5() const { return ___superscript_5; }
	inline uint8_t* get_address_of_superscript_5() { return &___superscript_5; }
	inline void set_superscript_5(uint8_t value)
	{
		___superscript_5 = value;
	}

	inline static int32_t get_offset_of_subscript_6() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___subscript_6)); }
	inline uint8_t get_subscript_6() const { return ___subscript_6; }
	inline uint8_t* get_address_of_subscript_6() { return &___subscript_6; }
	inline void set_subscript_6(uint8_t value)
	{
		___subscript_6 = value;
	}

	inline static int32_t get_offset_of_uppercase_7() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___uppercase_7)); }
	inline uint8_t get_uppercase_7() const { return ___uppercase_7; }
	inline uint8_t* get_address_of_uppercase_7() { return &___uppercase_7; }
	inline void set_uppercase_7(uint8_t value)
	{
		___uppercase_7 = value;
	}

	inline static int32_t get_offset_of_lowercase_8() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___lowercase_8)); }
	inline uint8_t get_lowercase_8() const { return ___lowercase_8; }
	inline uint8_t* get_address_of_lowercase_8() { return &___lowercase_8; }
	inline void set_lowercase_8(uint8_t value)
	{
		___lowercase_8 = value;
	}

	inline static int32_t get_offset_of_smallcaps_9() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___smallcaps_9)); }
	inline uint8_t get_smallcaps_9() const { return ___smallcaps_9; }
	inline uint8_t* get_address_of_smallcaps_9() { return &___smallcaps_9; }
	inline void set_smallcaps_9(uint8_t value)
	{
		___smallcaps_9 = value;
	}
};


// TMPro.TMP_Offset
struct  TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA 
{
public:
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;

public:
	inline static int32_t get_offset_of_m_Left_0() { return static_cast<int32_t>(offsetof(TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA, ___m_Left_0)); }
	inline float get_m_Left_0() const { return ___m_Left_0; }
	inline float* get_address_of_m_Left_0() { return &___m_Left_0; }
	inline void set_m_Left_0(float value)
	{
		___m_Left_0 = value;
	}

	inline static int32_t get_offset_of_m_Right_1() { return static_cast<int32_t>(offsetof(TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA, ___m_Right_1)); }
	inline float get_m_Right_1() const { return ___m_Right_1; }
	inline float* get_address_of_m_Right_1() { return &___m_Right_1; }
	inline void set_m_Right_1(float value)
	{
		___m_Right_1 = value;
	}

	inline static int32_t get_offset_of_m_Top_2() { return static_cast<int32_t>(offsetof(TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA, ___m_Top_2)); }
	inline float get_m_Top_2() const { return ___m_Top_2; }
	inline float* get_address_of_m_Top_2() { return &___m_Top_2; }
	inline void set_m_Top_2(float value)
	{
		___m_Top_2 = value;
	}

	inline static int32_t get_offset_of_m_Bottom_3() { return static_cast<int32_t>(offsetof(TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA, ___m_Bottom_3)); }
	inline float get_m_Bottom_3() const { return ___m_Bottom_3; }
	inline float* get_address_of_m_Bottom_3() { return &___m_Bottom_3; }
	inline void set_m_Bottom_3(float value)
	{
		___m_Bottom_3 = value;
	}
};

struct TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA_StaticFields
{
public:
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA  ___k_ZeroOffset_4;

public:
	inline static int32_t get_offset_of_k_ZeroOffset_4() { return static_cast<int32_t>(offsetof(TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA_StaticFields, ___k_ZeroOffset_4)); }
	inline TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA  get_k_ZeroOffset_4() const { return ___k_ZeroOffset_4; }
	inline TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA * get_address_of_k_ZeroOffset_4() { return &___k_ZeroOffset_4; }
	inline void set_k_ZeroOffset_4(TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA  value)
	{
		___k_ZeroOffset_4 = value;
	}
};


// TMPro.TMP_Text_SpecialCharacter
struct  SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF 
{
public:
	// TMPro.TMP_Character TMPro.TMP_Text_SpecialCharacter::character
	TMP_Character_t1875AACA978396521498D6A699052C187903553D * ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text_SpecialCharacter::fontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text_SpecialCharacter::material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_2;
	// System.Int32 TMPro.TMP_Text_SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;

public:
	inline static int32_t get_offset_of_character_0() { return static_cast<int32_t>(offsetof(SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF, ___character_0)); }
	inline TMP_Character_t1875AACA978396521498D6A699052C187903553D * get_character_0() const { return ___character_0; }
	inline TMP_Character_t1875AACA978396521498D6A699052C187903553D ** get_address_of_character_0() { return &___character_0; }
	inline void set_character_0(TMP_Character_t1875AACA978396521498D6A699052C187903553D * value)
	{
		___character_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_0), (void*)value);
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF, ___fontAsset_1)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_material_2() { return static_cast<int32_t>(offsetof(SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF, ___material_2)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_material_2() const { return ___material_2; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_material_2() { return &___material_2; }
	inline void set_material_2(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___material_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_2), (void*)value);
	}

	inline static int32_t get_offset_of_materialIndex_3() { return static_cast<int32_t>(offsetof(SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF, ___materialIndex_3)); }
	inline int32_t get_materialIndex_3() const { return ___materialIndex_3; }
	inline int32_t* get_address_of_materialIndex_3() { return &___materialIndex_3; }
	inline void set_materialIndex_3(int32_t value)
	{
		___materialIndex_3 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF_marshaled_pinvoke
{
	TMP_Character_t1875AACA978396521498D6A699052C187903553D * ___character_0;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF_marshaled_com
{
	TMP_Character_t1875AACA978396521498D6A699052C187903553D * ___character_0;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct  TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06, ___itemStack_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_itemStack_0() const { return ___itemStack_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<System.Single>
struct  TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA, ___itemStack_0)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_itemStack_0() const { return ___itemStack_0; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA, ___m_DefaultItem_2)); }
	inline float get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline float* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(float value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct  TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C, ___itemStack_0)); }
	inline TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C* get_itemStack_0() const { return ___itemStack_0; }
	inline TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C, ___m_DefaultItem_2)); }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 ** get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultItem_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct  Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.Events.UnityEvent
struct  UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Keyframe
struct  Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}

	inline static int32_t get_offset_of_m_WeightedMode_4() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_WeightedMode_4)); }
	inline int32_t get_m_WeightedMode_4() const { return ___m_WeightedMode_4; }
	inline int32_t* get_address_of_m_WeightedMode_4() { return &___m_WeightedMode_4; }
	inline void set_m_WeightedMode_4(int32_t value)
	{
		___m_WeightedMode_4 = value;
	}

	inline static int32_t get_offset_of_m_InWeight_5() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_InWeight_5)); }
	inline float get_m_InWeight_5() const { return ___m_InWeight_5; }
	inline float* get_address_of_m_InWeight_5() { return &___m_InWeight_5; }
	inline void set_m_InWeight_5(float value)
	{
		___m_InWeight_5 = value;
	}

	inline static int32_t get_offset_of_m_OutWeight_6() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_OutWeight_6)); }
	inline float get_m_OutWeight_6() const { return ___m_OutWeight_6; }
	inline float* get_address_of_m_OutWeight_6() { return &___m_OutWeight_6; }
	inline void set_m_OutWeight_6(float value)
	{
		___m_OutWeight_6 = value;
	}
};


// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct  Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.UI.SpriteState
struct  SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_HighlightedSprite_0)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_PressedSprite_1)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_SelectedSprite_2)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_DisabledSprite_3)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_pinvoke
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_com
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// TMPro.ColorMode
struct  ColorMode_tA3D65CECD3289ADB3A3C5A936DC23B41C364C4C3 
{
public:
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorMode_tA3D65CECD3289ADB3A3C5A936DC23B41C364C4C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.Extents
struct  Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 
{
public:
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___max_3;

public:
	inline static int32_t get_offset_of_min_2() { return static_cast<int32_t>(offsetof(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3, ___min_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_min_2() const { return ___min_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_min_2() { return &___min_2; }
	inline void set_min_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___min_2 = value;
	}

	inline static int32_t get_offset_of_max_3() { return static_cast<int32_t>(offsetof(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3, ___max_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_max_3() const { return ___max_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_max_3() { return &___max_3; }
	inline void set_max_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___max_3 = value;
	}
};

struct Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3_StaticFields
{
public:
	// TMPro.Extents TMPro.Extents::zero
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___uninitialized_1;

public:
	inline static int32_t get_offset_of_zero_0() { return static_cast<int32_t>(offsetof(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3_StaticFields, ___zero_0)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_zero_0() const { return ___zero_0; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_zero_0() { return &___zero_0; }
	inline void set_zero_0(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___zero_0 = value;
	}

	inline static int32_t get_offset_of_uninitialized_1() { return static_cast<int32_t>(offsetof(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3_StaticFields, ___uninitialized_1)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_uninitialized_1() const { return ___uninitialized_1; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_uninitialized_1() { return &___uninitialized_1; }
	inline void set_uninitialized_1(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___uninitialized_1 = value;
	}
};


// TMPro.FontStyles
struct  FontStyles_t31B880C817B2DF0BF3B60AC4D187A3E7BE5D8893 
{
public:
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontStyles_t31B880C817B2DF0BF3B60AC4D187A3E7BE5D8893, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.FontWeight
struct  FontWeight_tE551C56E6C7CCAFCC6519C65D03AAA340E9FF35C 
{
public:
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontWeight_tE551C56E6C7CCAFCC6519C65D03AAA340E9FF35C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.HighlightState
struct  HighlightState_t65D348DDC3395C23E09141E5067AEAC1CBAE9601 
{
public:
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA  ___padding_1;

public:
	inline static int32_t get_offset_of_color_0() { return static_cast<int32_t>(offsetof(HighlightState_t65D348DDC3395C23E09141E5067AEAC1CBAE9601, ___color_0)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_color_0() const { return ___color_0; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_color_0() { return &___color_0; }
	inline void set_color_0(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___color_0 = value;
	}

	inline static int32_t get_offset_of_padding_1() { return static_cast<int32_t>(offsetof(HighlightState_t65D348DDC3395C23E09141E5067AEAC1CBAE9601, ___padding_1)); }
	inline TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA  get_padding_1() const { return ___padding_1; }
	inline TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA * get_address_of_padding_1() { return &___padding_1; }
	inline void set_padding_1(TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA  value)
	{
		___padding_1 = value;
	}
};


// TMPro.HorizontalAlignmentOptions
struct  HorizontalAlignmentOptions_tC75AF4FA369C73A4CDEF3AA5C313BA8576DB516F 
{
public:
	// System.Int32 TMPro.HorizontalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HorizontalAlignmentOptions_tC75AF4FA369C73A4CDEF3AA5C313BA8576DB516F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_InputField_CharacterValidation
struct  CharacterValidation_t9F45E4CA4A1A77DE3E0F1D43A8A26DD6EEC2D12A 
{
public:
	// System.Int32 TMPro.TMP_InputField_CharacterValidation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharacterValidation_t9F45E4CA4A1A77DE3E0F1D43A8A26DD6EEC2D12A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_InputField_ContentType
struct  ContentType_t93262611CC15FC7196E42F1B77517D724602FE38 
{
public:
	// System.Int32 TMPro.TMP_InputField_ContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ContentType_t93262611CC15FC7196E42F1B77517D724602FE38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_InputField_InputType
struct  InputType_t002CCE2E41F03B7E05CA0F31EA1D57EA36631FD2 
{
public:
	// System.Int32 TMPro.TMP_InputField_InputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputType_t002CCE2E41F03B7E05CA0F31EA1D57EA36631FD2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_InputField_LineType
struct  LineType_t0ED2AC5DA81D1481A2072395E6A256EBE23140D7 
{
public:
	// System.Int32 TMPro.TMP_InputField_LineType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LineType_t0ED2AC5DA81D1481A2072395E6A256EBE23140D7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_Text_TextInputSources
struct  TextInputSources_t08C2D3664AE99CBF6ED41C9DB8F4E9E8FC8E54B4 
{
public:
	// System.Int32 TMPro.TMP_Text_TextInputSources::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextInputSources_t08C2D3664AE99CBF6ED41C9DB8F4E9E8FC8E54B4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextElementType
struct  TMP_TextElementType_tBF2553FA730CC21CF99473E591C33DC52360D509 
{
public:
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TMP_TextElementType_tBF2553FA730CC21CF99473E591C33DC52360D509, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct  TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A, ___itemStack_0)); }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* get_itemStack_0() const { return ___itemStack_0; }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A, ___m_DefaultItem_2)); }
	inline MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F  value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct  TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D, ___itemStack_0)); }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* get_itemStack_0() const { return ___itemStack_0; }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D, ___m_DefaultItem_2)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TextAlignmentOptions
struct  TextAlignmentOptions_t4BEB3BA6EE897B5127FFBABD7E36B1A024EE5337 
{
public:
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAlignmentOptions_t4BEB3BA6EE897B5127FFBABD7E36B1A024EE5337, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextOverflowModes
struct  TextOverflowModes_tC4F820014333ECAF4D52B02F75171FD9E52B9D76 
{
public:
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextOverflowModes_tC4F820014333ECAF4D52B02F75171FD9E52B9D76, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextRenderFlags
struct  TextRenderFlags_t29165355D5674BAEF40359B740631503FA9C0B56 
{
public:
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextRenderFlags_t29165355D5674BAEF40359B740631503FA9C0B56, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextureMappingOptions
struct  TextureMappingOptions_tAC77A218D6DF5F386DA38AEAF3D9C943F084BD10 
{
public:
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureMappingOptions_tAC77A218D6DF5F386DA38AEAF3D9C943F084BD10, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VertexGradient
struct  VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A 
{
public:
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___bottomRight_3;

public:
	inline static int32_t get_offset_of_topLeft_0() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___topLeft_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_topLeft_0() const { return ___topLeft_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_topLeft_0() { return &___topLeft_0; }
	inline void set_topLeft_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___topLeft_0 = value;
	}

	inline static int32_t get_offset_of_topRight_1() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___topRight_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_topRight_1() const { return ___topRight_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_topRight_1() { return &___topRight_1; }
	inline void set_topRight_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___topRight_1 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_2() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___bottomLeft_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_bottomLeft_2() const { return ___bottomLeft_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_bottomLeft_2() { return &___bottomLeft_2; }
	inline void set_bottomLeft_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___bottomLeft_2 = value;
	}

	inline static int32_t get_offset_of_bottomRight_3() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___bottomRight_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_bottomRight_3() const { return ___bottomRight_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_bottomRight_3() { return &___bottomRight_3; }
	inline void set_bottomRight_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___bottomRight_3 = value;
	}
};


// TMPro.VertexSortingOrder
struct  VertexSortingOrder_t2571FF911BB69CC1CC229DF12DE68568E3F850E5 
{
public:
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexSortingOrder_t2571FF911BB69CC1CC229DF12DE68568E3F850E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VerticalAlignmentOptions
struct  VerticalAlignmentOptions_t52EA4E859AFA2147B9B1433C87D5CE5FE568FFB6 
{
public:
	// System.Int32 TMPro.VerticalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VerticalAlignmentOptions_t52EA4E859AFA2147B9B1433C87D5CE5FE568FFB6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AnimationCurve
struct  AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.CollisionFlags
struct  CollisionFlags_t5638B0B2D65637D85403CB6FC2279DCBBB8AF63E 
{
public:
	// System.Int32 UnityEngine.CollisionFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CollisionFlags_t5638B0B2D65637D85403CB6FC2279DCBBB8AF63E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ControllerColliderHit
struct  ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968  : public RuntimeObject
{
public:
	// UnityEngine.CharacterController UnityEngine.ControllerColliderHit::m_Controller
	CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E * ___m_Controller_0;
	// UnityEngine.Collider UnityEngine.ControllerColliderHit::m_Collider
	Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___m_Collider_1;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Point
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Point_2;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_3;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_MoveDirection
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_MoveDirection_4;
	// System.Single UnityEngine.ControllerColliderHit::m_MoveLength
	float ___m_MoveLength_5;
	// System.Int32 UnityEngine.ControllerColliderHit::m_Push
	int32_t ___m_Push_6;

public:
	inline static int32_t get_offset_of_m_Controller_0() { return static_cast<int32_t>(offsetof(ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968, ___m_Controller_0)); }
	inline CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E * get_m_Controller_0() const { return ___m_Controller_0; }
	inline CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E ** get_address_of_m_Controller_0() { return &___m_Controller_0; }
	inline void set_m_Controller_0(CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E * value)
	{
		___m_Controller_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Controller_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Collider_1() { return static_cast<int32_t>(offsetof(ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968, ___m_Collider_1)); }
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * get_m_Collider_1() const { return ___m_Collider_1; }
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF ** get_address_of_m_Collider_1() { return &___m_Collider_1; }
	inline void set_m_Collider_1(Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * value)
	{
		___m_Collider_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Collider_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Point_2() { return static_cast<int32_t>(offsetof(ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968, ___m_Point_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Point_2() const { return ___m_Point_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Point_2() { return &___m_Point_2; }
	inline void set_m_Point_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Point_2 = value;
	}

	inline static int32_t get_offset_of_m_Normal_3() { return static_cast<int32_t>(offsetof(ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968, ___m_Normal_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Normal_3() const { return ___m_Normal_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Normal_3() { return &___m_Normal_3; }
	inline void set_m_Normal_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Normal_3 = value;
	}

	inline static int32_t get_offset_of_m_MoveDirection_4() { return static_cast<int32_t>(offsetof(ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968, ___m_MoveDirection_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_MoveDirection_4() const { return ___m_MoveDirection_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_MoveDirection_4() { return &___m_MoveDirection_4; }
	inline void set_m_MoveDirection_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_MoveDirection_4 = value;
	}

	inline static int32_t get_offset_of_m_MoveLength_5() { return static_cast<int32_t>(offsetof(ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968, ___m_MoveLength_5)); }
	inline float get_m_MoveLength_5() const { return ___m_MoveLength_5; }
	inline float* get_address_of_m_MoveLength_5() { return &___m_MoveLength_5; }
	inline void set_m_MoveLength_5(float value)
	{
		___m_MoveLength_5 = value;
	}

	inline static int32_t get_offset_of_m_Push_6() { return static_cast<int32_t>(offsetof(ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968, ___m_Push_6)); }
	inline int32_t get_m_Push_6() const { return ___m_Push_6; }
	inline int32_t* get_address_of_m_Push_6() { return &___m_Push_6; }
	inline void set_m_Push_6(int32_t value)
	{
		___m_Push_6 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968_marshaled_pinvoke
{
	CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E * ___m_Controller_0;
	Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___m_Collider_1;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Point_2;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_3;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
// Native definition for COM marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968_marshaled_com
{
	CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E * ___m_Controller_0;
	Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___m_Collider_1;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Point_2;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_3;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};

// UnityEngine.CursorLockMode
struct  CursorLockMode_tF9B28266D253124BE56C232B7ED2D9F7CC3D1E38 
{
public:
	// System.Int32 UnityEngine.CursorLockMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CursorLockMode_tF9B28266D253124BE56C232B7ED2D9F7CC3D1E38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct  KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.TouchScreenKeyboardType
struct  TouchScreenKeyboardType_tDD21D45735F3021BF4C6C7C1A660ABF03EBCE602 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_tDD21D45735F3021BF4C6C7C1A660ABF03EBCE602, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Button_ButtonClickedEvent
struct  ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB  : public UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F
{
public:

public:
};


// UnityEngine.UI.ColorBlock
struct  ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_NormalColor_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_HighlightedColor_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_PressedColor_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_SelectedColor_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_DisabledColor_4)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};


// UnityEngine.UI.Navigation_Mode
struct  Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26 
{
public:
	// System.Int32 UnityEngine.UI.Navigation_Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable_Transition
struct  Transition_tA9261C608B54C52324084A0B080E7A3E0548A181 
{
public:
	// System.Int32 UnityEngine.UI.Selectable_Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_tA9261C608B54C52324084A0B080E7A3E0548A181, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// TMPro.TMP_LineInfo
struct  TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442 
{
public:
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___lineExtents_19;

public:
	inline static int32_t get_offset_of_controlCharacterCount_0() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___controlCharacterCount_0)); }
	inline int32_t get_controlCharacterCount_0() const { return ___controlCharacterCount_0; }
	inline int32_t* get_address_of_controlCharacterCount_0() { return &___controlCharacterCount_0; }
	inline void set_controlCharacterCount_0(int32_t value)
	{
		___controlCharacterCount_0 = value;
	}

	inline static int32_t get_offset_of_characterCount_1() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___characterCount_1)); }
	inline int32_t get_characterCount_1() const { return ___characterCount_1; }
	inline int32_t* get_address_of_characterCount_1() { return &___characterCount_1; }
	inline void set_characterCount_1(int32_t value)
	{
		___characterCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCharacterCount_2() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___visibleCharacterCount_2)); }
	inline int32_t get_visibleCharacterCount_2() const { return ___visibleCharacterCount_2; }
	inline int32_t* get_address_of_visibleCharacterCount_2() { return &___visibleCharacterCount_2; }
	inline void set_visibleCharacterCount_2(int32_t value)
	{
		___visibleCharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_spaceCount_3() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___spaceCount_3)); }
	inline int32_t get_spaceCount_3() const { return ___spaceCount_3; }
	inline int32_t* get_address_of_spaceCount_3() { return &___spaceCount_3; }
	inline void set_spaceCount_3(int32_t value)
	{
		___spaceCount_3 = value;
	}

	inline static int32_t get_offset_of_wordCount_4() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___wordCount_4)); }
	inline int32_t get_wordCount_4() const { return ___wordCount_4; }
	inline int32_t* get_address_of_wordCount_4() { return &___wordCount_4; }
	inline void set_wordCount_4(int32_t value)
	{
		___wordCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharacterIndex_8() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lastVisibleCharacterIndex_8)); }
	inline int32_t get_lastVisibleCharacterIndex_8() const { return ___lastVisibleCharacterIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharacterIndex_8() { return &___lastVisibleCharacterIndex_8; }
	inline void set_lastVisibleCharacterIndex_8(int32_t value)
	{
		___lastVisibleCharacterIndex_8 = value;
	}

	inline static int32_t get_offset_of_length_9() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___length_9)); }
	inline float get_length_9() const { return ___length_9; }
	inline float* get_address_of_length_9() { return &___length_9; }
	inline void set_length_9(float value)
	{
		___length_9 = value;
	}

	inline static int32_t get_offset_of_lineHeight_10() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lineHeight_10)); }
	inline float get_lineHeight_10() const { return ___lineHeight_10; }
	inline float* get_address_of_lineHeight_10() { return &___lineHeight_10; }
	inline void set_lineHeight_10(float value)
	{
		___lineHeight_10 = value;
	}

	inline static int32_t get_offset_of_ascender_11() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___ascender_11)); }
	inline float get_ascender_11() const { return ___ascender_11; }
	inline float* get_address_of_ascender_11() { return &___ascender_11; }
	inline void set_ascender_11(float value)
	{
		___ascender_11 = value;
	}

	inline static int32_t get_offset_of_baseline_12() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___baseline_12)); }
	inline float get_baseline_12() const { return ___baseline_12; }
	inline float* get_address_of_baseline_12() { return &___baseline_12; }
	inline void set_baseline_12(float value)
	{
		___baseline_12 = value;
	}

	inline static int32_t get_offset_of_descender_13() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___descender_13)); }
	inline float get_descender_13() const { return ___descender_13; }
	inline float* get_address_of_descender_13() { return &___descender_13; }
	inline void set_descender_13(float value)
	{
		___descender_13 = value;
	}

	inline static int32_t get_offset_of_maxAdvance_14() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___maxAdvance_14)); }
	inline float get_maxAdvance_14() const { return ___maxAdvance_14; }
	inline float* get_address_of_maxAdvance_14() { return &___maxAdvance_14; }
	inline void set_maxAdvance_14(float value)
	{
		___maxAdvance_14 = value;
	}

	inline static int32_t get_offset_of_width_15() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___width_15)); }
	inline float get_width_15() const { return ___width_15; }
	inline float* get_address_of_width_15() { return &___width_15; }
	inline void set_width_15(float value)
	{
		___width_15 = value;
	}

	inline static int32_t get_offset_of_marginLeft_16() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___marginLeft_16)); }
	inline float get_marginLeft_16() const { return ___marginLeft_16; }
	inline float* get_address_of_marginLeft_16() { return &___marginLeft_16; }
	inline void set_marginLeft_16(float value)
	{
		___marginLeft_16 = value;
	}

	inline static int32_t get_offset_of_marginRight_17() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___marginRight_17)); }
	inline float get_marginRight_17() const { return ___marginRight_17; }
	inline float* get_address_of_marginRight_17() { return &___marginRight_17; }
	inline void set_marginRight_17(float value)
	{
		___marginRight_17 = value;
	}

	inline static int32_t get_offset_of_alignment_18() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___alignment_18)); }
	inline int32_t get_alignment_18() const { return ___alignment_18; }
	inline int32_t* get_address_of_alignment_18() { return &___alignment_18; }
	inline void set_alignment_18(int32_t value)
	{
		___alignment_18 = value;
	}

	inline static int32_t get_offset_of_lineExtents_19() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lineExtents_19)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_lineExtents_19() const { return ___lineExtents_19; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_lineExtents_19() { return &___lineExtents_19; }
	inline void set_lineExtents_19(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___lineExtents_19 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct  TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285, ___itemStack_0)); }
	inline FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446* get_itemStack_0() const { return ___itemStack_0; }
	inline FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct  TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_t3D406BC30294F6C79CA548107716A642055062CE* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_t65D348DDC3395C23E09141E5067AEAC1CBAE9601  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2, ___itemStack_0)); }
	inline HighlightStateU5BU5D_t3D406BC30294F6C79CA548107716A642055062CE* get_itemStack_0() const { return ___itemStack_0; }
	inline HighlightStateU5BU5D_t3D406BC30294F6C79CA548107716A642055062CE** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HighlightStateU5BU5D_t3D406BC30294F6C79CA548107716A642055062CE* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2, ___m_DefaultItem_2)); }
	inline HighlightState_t65D348DDC3395C23E09141E5067AEAC1CBAE9601  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline HighlightState_t65D348DDC3395C23E09141E5067AEAC1CBAE9601 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(HighlightState_t65D348DDC3395C23E09141E5067AEAC1CBAE9601  value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct  TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t9FFF9E8A3B0E6A173F18EF9C847BCF27D1BF4ACB* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7, ___itemStack_0)); }
	inline HorizontalAlignmentOptionsU5BU5D_t9FFF9E8A3B0E6A173F18EF9C847BCF27D1BF4ACB* get_itemStack_0() const { return ___itemStack_0; }
	inline HorizontalAlignmentOptionsU5BU5D_t9FFF9E8A3B0E6A173F18EF9C847BCF27D1BF4ACB** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HorizontalAlignmentOptionsU5BU5D_t9FFF9E8A3B0E6A173F18EF9C847BCF27D1BF4ACB* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.UI.Navigation
struct  Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 
{
public:
	// UnityEngine.UI.Navigation_Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnUp_1)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnDown_2)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnLeft_3)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnRight_4)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};

// TMPro.WordWrapState
struct  WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 
{
public:
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScale
	float ___fontScale_27;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_28;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_29;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_30;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_31;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_32;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_33;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_34;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_35;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___textInfo_36;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  ___lineInfo_37;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___vertexColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_40;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_41;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___basicStyleStack_42;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___italicAngleStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___colorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___underlineColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___strikethroughColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___highlightColorStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  ___highlightStateStack_48;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  ___colorGradientStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___sizeStack_50;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___indentStack_51;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  ___fontWeightStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___styleStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___baselineStack_54;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___actionStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  ___materialReferenceStack_56;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  ___lineJustificationStack_57;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_58;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___currentFontAsset_59;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___currentSpriteAsset_60;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___currentMaterial_61;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_62;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___meshExtents_63;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_64;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_65;

public:
	inline static int32_t get_offset_of_previous_WordBreak_0() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___previous_WordBreak_0)); }
	inline int32_t get_previous_WordBreak_0() const { return ___previous_WordBreak_0; }
	inline int32_t* get_address_of_previous_WordBreak_0() { return &___previous_WordBreak_0; }
	inline void set_previous_WordBreak_0(int32_t value)
	{
		___previous_WordBreak_0 = value;
	}

	inline static int32_t get_offset_of_total_CharacterCount_1() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___total_CharacterCount_1)); }
	inline int32_t get_total_CharacterCount_1() const { return ___total_CharacterCount_1; }
	inline int32_t* get_address_of_total_CharacterCount_1() { return &___total_CharacterCount_1; }
	inline void set_total_CharacterCount_1(int32_t value)
	{
		___total_CharacterCount_1 = value;
	}

	inline static int32_t get_offset_of_visible_CharacterCount_2() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___visible_CharacterCount_2)); }
	inline int32_t get_visible_CharacterCount_2() const { return ___visible_CharacterCount_2; }
	inline int32_t* get_address_of_visible_CharacterCount_2() { return &___visible_CharacterCount_2; }
	inline void set_visible_CharacterCount_2(int32_t value)
	{
		___visible_CharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_visible_SpriteCount_3() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___visible_SpriteCount_3)); }
	inline int32_t get_visible_SpriteCount_3() const { return ___visible_SpriteCount_3; }
	inline int32_t* get_address_of_visible_SpriteCount_3() { return &___visible_SpriteCount_3; }
	inline void set_visible_SpriteCount_3(int32_t value)
	{
		___visible_SpriteCount_3 = value;
	}

	inline static int32_t get_offset_of_visible_LinkCount_4() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___visible_LinkCount_4)); }
	inline int32_t get_visible_LinkCount_4() const { return ___visible_LinkCount_4; }
	inline int32_t* get_address_of_visible_LinkCount_4() { return &___visible_LinkCount_4; }
	inline void set_visible_LinkCount_4(int32_t value)
	{
		___visible_LinkCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharIndex_8() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lastVisibleCharIndex_8)); }
	inline int32_t get_lastVisibleCharIndex_8() const { return ___lastVisibleCharIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharIndex_8() { return &___lastVisibleCharIndex_8; }
	inline void set_lastVisibleCharIndex_8(int32_t value)
	{
		___lastVisibleCharIndex_8 = value;
	}

	inline static int32_t get_offset_of_lineNumber_9() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineNumber_9)); }
	inline int32_t get_lineNumber_9() const { return ___lineNumber_9; }
	inline int32_t* get_address_of_lineNumber_9() { return &___lineNumber_9; }
	inline void set_lineNumber_9(int32_t value)
	{
		___lineNumber_9 = value;
	}

	inline static int32_t get_offset_of_maxCapHeight_10() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxCapHeight_10)); }
	inline float get_maxCapHeight_10() const { return ___maxCapHeight_10; }
	inline float* get_address_of_maxCapHeight_10() { return &___maxCapHeight_10; }
	inline void set_maxCapHeight_10(float value)
	{
		___maxCapHeight_10 = value;
	}

	inline static int32_t get_offset_of_maxAscender_11() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxAscender_11)); }
	inline float get_maxAscender_11() const { return ___maxAscender_11; }
	inline float* get_address_of_maxAscender_11() { return &___maxAscender_11; }
	inline void set_maxAscender_11(float value)
	{
		___maxAscender_11 = value;
	}

	inline static int32_t get_offset_of_maxDescender_12() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxDescender_12)); }
	inline float get_maxDescender_12() const { return ___maxDescender_12; }
	inline float* get_address_of_maxDescender_12() { return &___maxDescender_12; }
	inline void set_maxDescender_12(float value)
	{
		___maxDescender_12 = value;
	}

	inline static int32_t get_offset_of_startOfLineAscender_13() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___startOfLineAscender_13)); }
	inline float get_startOfLineAscender_13() const { return ___startOfLineAscender_13; }
	inline float* get_address_of_startOfLineAscender_13() { return &___startOfLineAscender_13; }
	inline void set_startOfLineAscender_13(float value)
	{
		___startOfLineAscender_13 = value;
	}

	inline static int32_t get_offset_of_maxLineAscender_14() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxLineAscender_14)); }
	inline float get_maxLineAscender_14() const { return ___maxLineAscender_14; }
	inline float* get_address_of_maxLineAscender_14() { return &___maxLineAscender_14; }
	inline void set_maxLineAscender_14(float value)
	{
		___maxLineAscender_14 = value;
	}

	inline static int32_t get_offset_of_maxLineDescender_15() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxLineDescender_15)); }
	inline float get_maxLineDescender_15() const { return ___maxLineDescender_15; }
	inline float* get_address_of_maxLineDescender_15() { return &___maxLineDescender_15; }
	inline void set_maxLineDescender_15(float value)
	{
		___maxLineDescender_15 = value;
	}

	inline static int32_t get_offset_of_pageAscender_16() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___pageAscender_16)); }
	inline float get_pageAscender_16() const { return ___pageAscender_16; }
	inline float* get_address_of_pageAscender_16() { return &___pageAscender_16; }
	inline void set_pageAscender_16(float value)
	{
		___pageAscender_16 = value;
	}

	inline static int32_t get_offset_of_horizontalAlignment_17() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___horizontalAlignment_17)); }
	inline int32_t get_horizontalAlignment_17() const { return ___horizontalAlignment_17; }
	inline int32_t* get_address_of_horizontalAlignment_17() { return &___horizontalAlignment_17; }
	inline void set_horizontalAlignment_17(int32_t value)
	{
		___horizontalAlignment_17 = value;
	}

	inline static int32_t get_offset_of_marginLeft_18() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___marginLeft_18)); }
	inline float get_marginLeft_18() const { return ___marginLeft_18; }
	inline float* get_address_of_marginLeft_18() { return &___marginLeft_18; }
	inline void set_marginLeft_18(float value)
	{
		___marginLeft_18 = value;
	}

	inline static int32_t get_offset_of_marginRight_19() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___marginRight_19)); }
	inline float get_marginRight_19() const { return ___marginRight_19; }
	inline float* get_address_of_marginRight_19() { return &___marginRight_19; }
	inline void set_marginRight_19(float value)
	{
		___marginRight_19 = value;
	}

	inline static int32_t get_offset_of_xAdvance_20() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___xAdvance_20)); }
	inline float get_xAdvance_20() const { return ___xAdvance_20; }
	inline float* get_address_of_xAdvance_20() { return &___xAdvance_20; }
	inline void set_xAdvance_20(float value)
	{
		___xAdvance_20 = value;
	}

	inline static int32_t get_offset_of_preferredWidth_21() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___preferredWidth_21)); }
	inline float get_preferredWidth_21() const { return ___preferredWidth_21; }
	inline float* get_address_of_preferredWidth_21() { return &___preferredWidth_21; }
	inline void set_preferredWidth_21(float value)
	{
		___preferredWidth_21 = value;
	}

	inline static int32_t get_offset_of_preferredHeight_22() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___preferredHeight_22)); }
	inline float get_preferredHeight_22() const { return ___preferredHeight_22; }
	inline float* get_address_of_preferredHeight_22() { return &___preferredHeight_22; }
	inline void set_preferredHeight_22(float value)
	{
		___preferredHeight_22 = value;
	}

	inline static int32_t get_offset_of_previousLineScale_23() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___previousLineScale_23)); }
	inline float get_previousLineScale_23() const { return ___previousLineScale_23; }
	inline float* get_address_of_previousLineScale_23() { return &___previousLineScale_23; }
	inline void set_previousLineScale_23(float value)
	{
		___previousLineScale_23 = value;
	}

	inline static int32_t get_offset_of_wordCount_24() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___wordCount_24)); }
	inline int32_t get_wordCount_24() const { return ___wordCount_24; }
	inline int32_t* get_address_of_wordCount_24() { return &___wordCount_24; }
	inline void set_wordCount_24(int32_t value)
	{
		___wordCount_24 = value;
	}

	inline static int32_t get_offset_of_fontStyle_25() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontStyle_25)); }
	inline int32_t get_fontStyle_25() const { return ___fontStyle_25; }
	inline int32_t* get_address_of_fontStyle_25() { return &___fontStyle_25; }
	inline void set_fontStyle_25(int32_t value)
	{
		___fontStyle_25 = value;
	}

	inline static int32_t get_offset_of_italicAngle_26() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___italicAngle_26)); }
	inline int32_t get_italicAngle_26() const { return ___italicAngle_26; }
	inline int32_t* get_address_of_italicAngle_26() { return &___italicAngle_26; }
	inline void set_italicAngle_26(int32_t value)
	{
		___italicAngle_26 = value;
	}

	inline static int32_t get_offset_of_fontScale_27() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontScale_27)); }
	inline float get_fontScale_27() const { return ___fontScale_27; }
	inline float* get_address_of_fontScale_27() { return &___fontScale_27; }
	inline void set_fontScale_27(float value)
	{
		___fontScale_27 = value;
	}

	inline static int32_t get_offset_of_fontScaleMultiplier_28() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontScaleMultiplier_28)); }
	inline float get_fontScaleMultiplier_28() const { return ___fontScaleMultiplier_28; }
	inline float* get_address_of_fontScaleMultiplier_28() { return &___fontScaleMultiplier_28; }
	inline void set_fontScaleMultiplier_28(float value)
	{
		___fontScaleMultiplier_28 = value;
	}

	inline static int32_t get_offset_of_currentFontSize_29() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentFontSize_29)); }
	inline float get_currentFontSize_29() const { return ___currentFontSize_29; }
	inline float* get_address_of_currentFontSize_29() { return &___currentFontSize_29; }
	inline void set_currentFontSize_29(float value)
	{
		___currentFontSize_29 = value;
	}

	inline static int32_t get_offset_of_baselineOffset_30() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___baselineOffset_30)); }
	inline float get_baselineOffset_30() const { return ___baselineOffset_30; }
	inline float* get_address_of_baselineOffset_30() { return &___baselineOffset_30; }
	inline void set_baselineOffset_30(float value)
	{
		___baselineOffset_30 = value;
	}

	inline static int32_t get_offset_of_lineOffset_31() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineOffset_31)); }
	inline float get_lineOffset_31() const { return ___lineOffset_31; }
	inline float* get_address_of_lineOffset_31() { return &___lineOffset_31; }
	inline void set_lineOffset_31(float value)
	{
		___lineOffset_31 = value;
	}

	inline static int32_t get_offset_of_isDrivenLineSpacing_32() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___isDrivenLineSpacing_32)); }
	inline bool get_isDrivenLineSpacing_32() const { return ___isDrivenLineSpacing_32; }
	inline bool* get_address_of_isDrivenLineSpacing_32() { return &___isDrivenLineSpacing_32; }
	inline void set_isDrivenLineSpacing_32(bool value)
	{
		___isDrivenLineSpacing_32 = value;
	}

	inline static int32_t get_offset_of_glyphHorizontalAdvanceAdjustment_33() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___glyphHorizontalAdvanceAdjustment_33)); }
	inline float get_glyphHorizontalAdvanceAdjustment_33() const { return ___glyphHorizontalAdvanceAdjustment_33; }
	inline float* get_address_of_glyphHorizontalAdvanceAdjustment_33() { return &___glyphHorizontalAdvanceAdjustment_33; }
	inline void set_glyphHorizontalAdvanceAdjustment_33(float value)
	{
		___glyphHorizontalAdvanceAdjustment_33 = value;
	}

	inline static int32_t get_offset_of_cSpace_34() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___cSpace_34)); }
	inline float get_cSpace_34() const { return ___cSpace_34; }
	inline float* get_address_of_cSpace_34() { return &___cSpace_34; }
	inline void set_cSpace_34(float value)
	{
		___cSpace_34 = value;
	}

	inline static int32_t get_offset_of_mSpace_35() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___mSpace_35)); }
	inline float get_mSpace_35() const { return ___mSpace_35; }
	inline float* get_address_of_mSpace_35() { return &___mSpace_35; }
	inline void set_mSpace_35(float value)
	{
		___mSpace_35 = value;
	}

	inline static int32_t get_offset_of_textInfo_36() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___textInfo_36)); }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * get_textInfo_36() const { return ___textInfo_36; }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 ** get_address_of_textInfo_36() { return &___textInfo_36; }
	inline void set_textInfo_36(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * value)
	{
		___textInfo_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_36), (void*)value);
	}

	inline static int32_t get_offset_of_lineInfo_37() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineInfo_37)); }
	inline TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  get_lineInfo_37() const { return ___lineInfo_37; }
	inline TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442 * get_address_of_lineInfo_37() { return &___lineInfo_37; }
	inline void set_lineInfo_37(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  value)
	{
		___lineInfo_37 = value;
	}

	inline static int32_t get_offset_of_vertexColor_38() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___vertexColor_38)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_vertexColor_38() const { return ___vertexColor_38; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_vertexColor_38() { return &___vertexColor_38; }
	inline void set_vertexColor_38(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___vertexColor_38 = value;
	}

	inline static int32_t get_offset_of_underlineColor_39() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___underlineColor_39)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_underlineColor_39() const { return ___underlineColor_39; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_underlineColor_39() { return &___underlineColor_39; }
	inline void set_underlineColor_39(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___underlineColor_39 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_40() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___strikethroughColor_40)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_strikethroughColor_40() const { return ___strikethroughColor_40; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_strikethroughColor_40() { return &___strikethroughColor_40; }
	inline void set_strikethroughColor_40(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___strikethroughColor_40 = value;
	}

	inline static int32_t get_offset_of_highlightColor_41() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___highlightColor_41)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_highlightColor_41() const { return ___highlightColor_41; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_highlightColor_41() { return &___highlightColor_41; }
	inline void set_highlightColor_41(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___highlightColor_41 = value;
	}

	inline static int32_t get_offset_of_basicStyleStack_42() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___basicStyleStack_42)); }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  get_basicStyleStack_42() const { return ___basicStyleStack_42; }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84 * get_address_of_basicStyleStack_42() { return &___basicStyleStack_42; }
	inline void set_basicStyleStack_42(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  value)
	{
		___basicStyleStack_42 = value;
	}

	inline static int32_t get_offset_of_italicAngleStack_43() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___italicAngleStack_43)); }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  get_italicAngleStack_43() const { return ___italicAngleStack_43; }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06 * get_address_of_italicAngleStack_43() { return &___italicAngleStack_43; }
	inline void set_italicAngleStack_43(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  value)
	{
		___italicAngleStack_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___italicAngleStack_43))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorStack_44() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___colorStack_44)); }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  get_colorStack_44() const { return ___colorStack_44; }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D * get_address_of_colorStack_44() { return &___colorStack_44; }
	inline void set_colorStack_44(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  value)
	{
		___colorStack_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorStack_44))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_underlineColorStack_45() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___underlineColorStack_45)); }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  get_underlineColorStack_45() const { return ___underlineColorStack_45; }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D * get_address_of_underlineColorStack_45() { return &___underlineColorStack_45; }
	inline void set_underlineColorStack_45(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  value)
	{
		___underlineColorStack_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___underlineColorStack_45))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_strikethroughColorStack_46() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___strikethroughColorStack_46)); }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  get_strikethroughColorStack_46() const { return ___strikethroughColorStack_46; }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D * get_address_of_strikethroughColorStack_46() { return &___strikethroughColorStack_46; }
	inline void set_strikethroughColorStack_46(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  value)
	{
		___strikethroughColorStack_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightColorStack_47() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___highlightColorStack_47)); }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  get_highlightColorStack_47() const { return ___highlightColorStack_47; }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D * get_address_of_highlightColorStack_47() { return &___highlightColorStack_47; }
	inline void set_highlightColorStack_47(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  value)
	{
		___highlightColorStack_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightColorStack_47))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightStateStack_48() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___highlightStateStack_48)); }
	inline TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  get_highlightStateStack_48() const { return ___highlightStateStack_48; }
	inline TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2 * get_address_of_highlightStateStack_48() { return &___highlightStateStack_48; }
	inline void set_highlightStateStack_48(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  value)
	{
		___highlightStateStack_48 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightStateStack_48))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorGradientStack_49() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___colorGradientStack_49)); }
	inline TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  get_colorGradientStack_49() const { return ___colorGradientStack_49; }
	inline TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C * get_address_of_colorGradientStack_49() { return &___colorGradientStack_49; }
	inline void set_colorGradientStack_49(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  value)
	{
		___colorGradientStack_49 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_sizeStack_50() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___sizeStack_50)); }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  get_sizeStack_50() const { return ___sizeStack_50; }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA * get_address_of_sizeStack_50() { return &___sizeStack_50; }
	inline void set_sizeStack_50(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  value)
	{
		___sizeStack_50 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___sizeStack_50))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indentStack_51() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___indentStack_51)); }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  get_indentStack_51() const { return ___indentStack_51; }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA * get_address_of_indentStack_51() { return &___indentStack_51; }
	inline void set_indentStack_51(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  value)
	{
		___indentStack_51 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indentStack_51))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_fontWeightStack_52() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontWeightStack_52)); }
	inline TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  get_fontWeightStack_52() const { return ___fontWeightStack_52; }
	inline TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285 * get_address_of_fontWeightStack_52() { return &___fontWeightStack_52; }
	inline void set_fontWeightStack_52(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  value)
	{
		___fontWeightStack_52 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___fontWeightStack_52))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_styleStack_53() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___styleStack_53)); }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  get_styleStack_53() const { return ___styleStack_53; }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06 * get_address_of_styleStack_53() { return &___styleStack_53; }
	inline void set_styleStack_53(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  value)
	{
		___styleStack_53 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___styleStack_53))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_baselineStack_54() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___baselineStack_54)); }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  get_baselineStack_54() const { return ___baselineStack_54; }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA * get_address_of_baselineStack_54() { return &___baselineStack_54; }
	inline void set_baselineStack_54(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  value)
	{
		___baselineStack_54 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___baselineStack_54))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_actionStack_55() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___actionStack_55)); }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  get_actionStack_55() const { return ___actionStack_55; }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06 * get_address_of_actionStack_55() { return &___actionStack_55; }
	inline void set_actionStack_55(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  value)
	{
		___actionStack_55 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___actionStack_55))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_materialReferenceStack_56() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___materialReferenceStack_56)); }
	inline TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  get_materialReferenceStack_56() const { return ___materialReferenceStack_56; }
	inline TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A * get_address_of_materialReferenceStack_56() { return &___materialReferenceStack_56; }
	inline void set_materialReferenceStack_56(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  value)
	{
		___materialReferenceStack_56 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_lineJustificationStack_57() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineJustificationStack_57)); }
	inline TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  get_lineJustificationStack_57() const { return ___lineJustificationStack_57; }
	inline TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7 * get_address_of_lineJustificationStack_57() { return &___lineJustificationStack_57; }
	inline void set_lineJustificationStack_57(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  value)
	{
		___lineJustificationStack_57 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_spriteAnimationID_58() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___spriteAnimationID_58)); }
	inline int32_t get_spriteAnimationID_58() const { return ___spriteAnimationID_58; }
	inline int32_t* get_address_of_spriteAnimationID_58() { return &___spriteAnimationID_58; }
	inline void set_spriteAnimationID_58(int32_t value)
	{
		___spriteAnimationID_58 = value;
	}

	inline static int32_t get_offset_of_currentFontAsset_59() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentFontAsset_59)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_currentFontAsset_59() const { return ___currentFontAsset_59; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_currentFontAsset_59() { return &___currentFontAsset_59; }
	inline void set_currentFontAsset_59(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___currentFontAsset_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentFontAsset_59), (void*)value);
	}

	inline static int32_t get_offset_of_currentSpriteAsset_60() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentSpriteAsset_60)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_currentSpriteAsset_60() const { return ___currentSpriteAsset_60; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_currentSpriteAsset_60() { return &___currentSpriteAsset_60; }
	inline void set_currentSpriteAsset_60(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___currentSpriteAsset_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentSpriteAsset_60), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterial_61() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentMaterial_61)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_currentMaterial_61() const { return ___currentMaterial_61; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_currentMaterial_61() { return &___currentMaterial_61; }
	inline void set_currentMaterial_61(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___currentMaterial_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentMaterial_61), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterialIndex_62() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentMaterialIndex_62)); }
	inline int32_t get_currentMaterialIndex_62() const { return ___currentMaterialIndex_62; }
	inline int32_t* get_address_of_currentMaterialIndex_62() { return &___currentMaterialIndex_62; }
	inline void set_currentMaterialIndex_62(int32_t value)
	{
		___currentMaterialIndex_62 = value;
	}

	inline static int32_t get_offset_of_meshExtents_63() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___meshExtents_63)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_meshExtents_63() const { return ___meshExtents_63; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_meshExtents_63() { return &___meshExtents_63; }
	inline void set_meshExtents_63(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___meshExtents_63 = value;
	}

	inline static int32_t get_offset_of_tagNoParsing_64() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___tagNoParsing_64)); }
	inline bool get_tagNoParsing_64() const { return ___tagNoParsing_64; }
	inline bool* get_address_of_tagNoParsing_64() { return &___tagNoParsing_64; }
	inline void set_tagNoParsing_64(bool value)
	{
		___tagNoParsing_64 = value;
	}

	inline static int32_t get_offset_of_isNonBreakingSpace_65() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___isNonBreakingSpace_65)); }
	inline bool get_isNonBreakingSpace_65() const { return ___isNonBreakingSpace_65; }
	inline bool* get_address_of_isNonBreakingSpace_65() { return &___isNonBreakingSpace_65; }
	inline void set_isNonBreakingSpace_65(bool value)
	{
		___isNonBreakingSpace_65 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScale_27;
	float ___fontScaleMultiplier_28;
	float ___currentFontSize_29;
	float ___baselineOffset_30;
	float ___lineOffset_31;
	int32_t ___isDrivenLineSpacing_32;
	float ___glyphHorizontalAdvanceAdjustment_33;
	float ___cSpace_34;
	float ___mSpace_35;
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___textInfo_36;
	TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  ___lineInfo_37;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___vertexColor_38;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_39;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_40;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_41;
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___basicStyleStack_42;
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___italicAngleStack_43;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___colorStack_44;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___underlineColorStack_45;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___strikethroughColorStack_46;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___highlightColorStack_47;
	TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  ___highlightStateStack_48;
	TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  ___colorGradientStack_49;
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___sizeStack_50;
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___indentStack_51;
	TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  ___fontWeightStack_52;
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___styleStack_53;
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___baselineStack_54;
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___actionStack_55;
	TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  ___materialReferenceStack_56;
	TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  ___lineJustificationStack_57;
	int32_t ___spriteAnimationID_58;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___currentFontAsset_59;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___currentSpriteAsset_60;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___currentMaterial_61;
	int32_t ___currentMaterialIndex_62;
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___meshExtents_63;
	int32_t ___tagNoParsing_64;
	int32_t ___isNonBreakingSpace_65;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScale_27;
	float ___fontScaleMultiplier_28;
	float ___currentFontSize_29;
	float ___baselineOffset_30;
	float ___lineOffset_31;
	int32_t ___isDrivenLineSpacing_32;
	float ___glyphHorizontalAdvanceAdjustment_33;
	float ___cSpace_34;
	float ___mSpace_35;
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___textInfo_36;
	TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  ___lineInfo_37;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___vertexColor_38;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_39;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_40;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_41;
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___basicStyleStack_42;
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___italicAngleStack_43;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___colorStack_44;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___underlineColorStack_45;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___strikethroughColorStack_46;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___highlightColorStack_47;
	TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  ___highlightStateStack_48;
	TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  ___colorGradientStack_49;
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___sizeStack_50;
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___indentStack_51;
	TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  ___fontWeightStack_52;
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___styleStack_53;
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___baselineStack_54;
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___actionStack_55;
	TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  ___materialReferenceStack_56;
	TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  ___lineJustificationStack_57;
	int32_t ___spriteAnimationID_58;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___currentFontAsset_59;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___currentSpriteAsset_60;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___currentMaterial_61;
	int32_t ___currentMaterialIndex_62;
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___meshExtents_63;
	int32_t ___tagNoParsing_64;
	int32_t ___isNonBreakingSpace_65;
};

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct  UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Rigidbody
struct  Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct  TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t799E5463E49BC0C14AE127D8821E83BA61F3A000* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E, ___itemStack_0)); }
	inline WordWrapStateU5BU5D_t799E5463E49BC0C14AE127D8821E83BA61F3A000* get_itemStack_0() const { return ___itemStack_0; }
	inline WordWrapStateU5BU5D_t799E5463E49BC0C14AE127D8821E83BA61F3A000** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(WordWrapStateU5BU5D_t799E5463E49BC0C14AE127D8821E83BA61F3A000* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E, ___m_DefaultItem_2)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.Animator
struct  Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.CharacterController
struct  CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E  : public Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// AnimationScript
struct  AnimationScript_t1DFBF920853C5C53C5B0D9CB72C39D82E6EED0EE  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean AnimationScript::isAnimated
	bool ___isAnimated_4;
	// System.Boolean AnimationScript::isRotating
	bool ___isRotating_5;
	// System.Boolean AnimationScript::isFloating
	bool ___isFloating_6;
	// System.Boolean AnimationScript::isScaling
	bool ___isScaling_7;
	// UnityEngine.Vector3 AnimationScript::rotationAngle
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rotationAngle_8;
	// System.Single AnimationScript::rotationSpeed
	float ___rotationSpeed_9;
	// System.Single AnimationScript::floatSpeed
	float ___floatSpeed_10;
	// System.Boolean AnimationScript::goingUp
	bool ___goingUp_11;
	// System.Single AnimationScript::floatRate
	float ___floatRate_12;
	// System.Single AnimationScript::floatTimer
	float ___floatTimer_13;
	// UnityEngine.Vector3 AnimationScript::startScale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___startScale_14;
	// UnityEngine.Vector3 AnimationScript::endScale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___endScale_15;
	// System.Boolean AnimationScript::scalingUp
	bool ___scalingUp_16;
	// System.Single AnimationScript::scaleSpeed
	float ___scaleSpeed_17;
	// System.Single AnimationScript::scaleRate
	float ___scaleRate_18;
	// System.Single AnimationScript::scaleTimer
	float ___scaleTimer_19;

public:
	inline static int32_t get_offset_of_isAnimated_4() { return static_cast<int32_t>(offsetof(AnimationScript_t1DFBF920853C5C53C5B0D9CB72C39D82E6EED0EE, ___isAnimated_4)); }
	inline bool get_isAnimated_4() const { return ___isAnimated_4; }
	inline bool* get_address_of_isAnimated_4() { return &___isAnimated_4; }
	inline void set_isAnimated_4(bool value)
	{
		___isAnimated_4 = value;
	}

	inline static int32_t get_offset_of_isRotating_5() { return static_cast<int32_t>(offsetof(AnimationScript_t1DFBF920853C5C53C5B0D9CB72C39D82E6EED0EE, ___isRotating_5)); }
	inline bool get_isRotating_5() const { return ___isRotating_5; }
	inline bool* get_address_of_isRotating_5() { return &___isRotating_5; }
	inline void set_isRotating_5(bool value)
	{
		___isRotating_5 = value;
	}

	inline static int32_t get_offset_of_isFloating_6() { return static_cast<int32_t>(offsetof(AnimationScript_t1DFBF920853C5C53C5B0D9CB72C39D82E6EED0EE, ___isFloating_6)); }
	inline bool get_isFloating_6() const { return ___isFloating_6; }
	inline bool* get_address_of_isFloating_6() { return &___isFloating_6; }
	inline void set_isFloating_6(bool value)
	{
		___isFloating_6 = value;
	}

	inline static int32_t get_offset_of_isScaling_7() { return static_cast<int32_t>(offsetof(AnimationScript_t1DFBF920853C5C53C5B0D9CB72C39D82E6EED0EE, ___isScaling_7)); }
	inline bool get_isScaling_7() const { return ___isScaling_7; }
	inline bool* get_address_of_isScaling_7() { return &___isScaling_7; }
	inline void set_isScaling_7(bool value)
	{
		___isScaling_7 = value;
	}

	inline static int32_t get_offset_of_rotationAngle_8() { return static_cast<int32_t>(offsetof(AnimationScript_t1DFBF920853C5C53C5B0D9CB72C39D82E6EED0EE, ___rotationAngle_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rotationAngle_8() const { return ___rotationAngle_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rotationAngle_8() { return &___rotationAngle_8; }
	inline void set_rotationAngle_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rotationAngle_8 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_9() { return static_cast<int32_t>(offsetof(AnimationScript_t1DFBF920853C5C53C5B0D9CB72C39D82E6EED0EE, ___rotationSpeed_9)); }
	inline float get_rotationSpeed_9() const { return ___rotationSpeed_9; }
	inline float* get_address_of_rotationSpeed_9() { return &___rotationSpeed_9; }
	inline void set_rotationSpeed_9(float value)
	{
		___rotationSpeed_9 = value;
	}

	inline static int32_t get_offset_of_floatSpeed_10() { return static_cast<int32_t>(offsetof(AnimationScript_t1DFBF920853C5C53C5B0D9CB72C39D82E6EED0EE, ___floatSpeed_10)); }
	inline float get_floatSpeed_10() const { return ___floatSpeed_10; }
	inline float* get_address_of_floatSpeed_10() { return &___floatSpeed_10; }
	inline void set_floatSpeed_10(float value)
	{
		___floatSpeed_10 = value;
	}

	inline static int32_t get_offset_of_goingUp_11() { return static_cast<int32_t>(offsetof(AnimationScript_t1DFBF920853C5C53C5B0D9CB72C39D82E6EED0EE, ___goingUp_11)); }
	inline bool get_goingUp_11() const { return ___goingUp_11; }
	inline bool* get_address_of_goingUp_11() { return &___goingUp_11; }
	inline void set_goingUp_11(bool value)
	{
		___goingUp_11 = value;
	}

	inline static int32_t get_offset_of_floatRate_12() { return static_cast<int32_t>(offsetof(AnimationScript_t1DFBF920853C5C53C5B0D9CB72C39D82E6EED0EE, ___floatRate_12)); }
	inline float get_floatRate_12() const { return ___floatRate_12; }
	inline float* get_address_of_floatRate_12() { return &___floatRate_12; }
	inline void set_floatRate_12(float value)
	{
		___floatRate_12 = value;
	}

	inline static int32_t get_offset_of_floatTimer_13() { return static_cast<int32_t>(offsetof(AnimationScript_t1DFBF920853C5C53C5B0D9CB72C39D82E6EED0EE, ___floatTimer_13)); }
	inline float get_floatTimer_13() const { return ___floatTimer_13; }
	inline float* get_address_of_floatTimer_13() { return &___floatTimer_13; }
	inline void set_floatTimer_13(float value)
	{
		___floatTimer_13 = value;
	}

	inline static int32_t get_offset_of_startScale_14() { return static_cast<int32_t>(offsetof(AnimationScript_t1DFBF920853C5C53C5B0D9CB72C39D82E6EED0EE, ___startScale_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_startScale_14() const { return ___startScale_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_startScale_14() { return &___startScale_14; }
	inline void set_startScale_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___startScale_14 = value;
	}

	inline static int32_t get_offset_of_endScale_15() { return static_cast<int32_t>(offsetof(AnimationScript_t1DFBF920853C5C53C5B0D9CB72C39D82E6EED0EE, ___endScale_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_endScale_15() const { return ___endScale_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_endScale_15() { return &___endScale_15; }
	inline void set_endScale_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___endScale_15 = value;
	}

	inline static int32_t get_offset_of_scalingUp_16() { return static_cast<int32_t>(offsetof(AnimationScript_t1DFBF920853C5C53C5B0D9CB72C39D82E6EED0EE, ___scalingUp_16)); }
	inline bool get_scalingUp_16() const { return ___scalingUp_16; }
	inline bool* get_address_of_scalingUp_16() { return &___scalingUp_16; }
	inline void set_scalingUp_16(bool value)
	{
		___scalingUp_16 = value;
	}

	inline static int32_t get_offset_of_scaleSpeed_17() { return static_cast<int32_t>(offsetof(AnimationScript_t1DFBF920853C5C53C5B0D9CB72C39D82E6EED0EE, ___scaleSpeed_17)); }
	inline float get_scaleSpeed_17() const { return ___scaleSpeed_17; }
	inline float* get_address_of_scaleSpeed_17() { return &___scaleSpeed_17; }
	inline void set_scaleSpeed_17(float value)
	{
		___scaleSpeed_17 = value;
	}

	inline static int32_t get_offset_of_scaleRate_18() { return static_cast<int32_t>(offsetof(AnimationScript_t1DFBF920853C5C53C5B0D9CB72C39D82E6EED0EE, ___scaleRate_18)); }
	inline float get_scaleRate_18() const { return ___scaleRate_18; }
	inline float* get_address_of_scaleRate_18() { return &___scaleRate_18; }
	inline void set_scaleRate_18(float value)
	{
		___scaleRate_18 = value;
	}

	inline static int32_t get_offset_of_scaleTimer_19() { return static_cast<int32_t>(offsetof(AnimationScript_t1DFBF920853C5C53C5B0D9CB72C39D82E6EED0EE, ___scaleTimer_19)); }
	inline float get_scaleTimer_19() const { return ___scaleTimer_19; }
	inline float* get_address_of_scaleTimer_19() { return &___scaleTimer_19; }
	inline void set_scaleTimer_19(float value)
	{
		___scaleTimer_19 = value;
	}
};


// BallObstacle
struct  BallObstacle_t14DB103C09CCA5FEC197DAB09D31A77093103FF9  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Vector3 BallObstacle::origin
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin_4;
	// UnityEngine.Rigidbody BallObstacle::rigidbody
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ___rigidbody_5;

public:
	inline static int32_t get_offset_of_origin_4() { return static_cast<int32_t>(offsetof(BallObstacle_t14DB103C09CCA5FEC197DAB09D31A77093103FF9, ___origin_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_origin_4() const { return ___origin_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_origin_4() { return &___origin_4; }
	inline void set_origin_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___origin_4 = value;
	}

	inline static int32_t get_offset_of_rigidbody_5() { return static_cast<int32_t>(offsetof(BallObstacle_t14DB103C09CCA5FEC197DAB09D31A77093103FF9, ___rigidbody_5)); }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * get_rigidbody_5() const { return ___rigidbody_5; }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 ** get_address_of_rigidbody_5() { return &___rigidbody_5; }
	inline void set_rigidbody_5(Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * value)
	{
		___rigidbody_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rigidbody_5), (void*)value);
	}
};


// Em
struct  Em_t2FB906755A5C8B9E1A38CEE942BBE1477CA512F9  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject Em::obj1
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___obj1_4;
	// UnityEngine.GameObject Em::obj2
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___obj2_5;
	// UnityEngine.GameObject Em::obj3
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___obj3_6;
	// TMPro.TextMeshProUGUI Em::name1
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___name1_7;
	// TMPro.TextMeshProUGUI Em::name2
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___name2_8;
	// TMPro.TextMeshProUGUI Em::name3
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___name3_9;
	// TMPro.TextMeshProUGUI Em::time1
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___time1_10;
	// TMPro.TextMeshProUGUI Em::time2
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___time2_11;
	// TMPro.TextMeshProUGUI Em::time3
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___time3_12;
	// System.Single Em::g_time
	float ___g_time_13;

public:
	inline static int32_t get_offset_of_obj1_4() { return static_cast<int32_t>(offsetof(Em_t2FB906755A5C8B9E1A38CEE942BBE1477CA512F9, ___obj1_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_obj1_4() const { return ___obj1_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_obj1_4() { return &___obj1_4; }
	inline void set_obj1_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___obj1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___obj1_4), (void*)value);
	}

	inline static int32_t get_offset_of_obj2_5() { return static_cast<int32_t>(offsetof(Em_t2FB906755A5C8B9E1A38CEE942BBE1477CA512F9, ___obj2_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_obj2_5() const { return ___obj2_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_obj2_5() { return &___obj2_5; }
	inline void set_obj2_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___obj2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___obj2_5), (void*)value);
	}

	inline static int32_t get_offset_of_obj3_6() { return static_cast<int32_t>(offsetof(Em_t2FB906755A5C8B9E1A38CEE942BBE1477CA512F9, ___obj3_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_obj3_6() const { return ___obj3_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_obj3_6() { return &___obj3_6; }
	inline void set_obj3_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___obj3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___obj3_6), (void*)value);
	}

	inline static int32_t get_offset_of_name1_7() { return static_cast<int32_t>(offsetof(Em_t2FB906755A5C8B9E1A38CEE942BBE1477CA512F9, ___name1_7)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_name1_7() const { return ___name1_7; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_name1_7() { return &___name1_7; }
	inline void set_name1_7(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___name1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name1_7), (void*)value);
	}

	inline static int32_t get_offset_of_name2_8() { return static_cast<int32_t>(offsetof(Em_t2FB906755A5C8B9E1A38CEE942BBE1477CA512F9, ___name2_8)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_name2_8() const { return ___name2_8; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_name2_8() { return &___name2_8; }
	inline void set_name2_8(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___name2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name2_8), (void*)value);
	}

	inline static int32_t get_offset_of_name3_9() { return static_cast<int32_t>(offsetof(Em_t2FB906755A5C8B9E1A38CEE942BBE1477CA512F9, ___name3_9)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_name3_9() const { return ___name3_9; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_name3_9() { return &___name3_9; }
	inline void set_name3_9(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___name3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name3_9), (void*)value);
	}

	inline static int32_t get_offset_of_time1_10() { return static_cast<int32_t>(offsetof(Em_t2FB906755A5C8B9E1A38CEE942BBE1477CA512F9, ___time1_10)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_time1_10() const { return ___time1_10; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_time1_10() { return &___time1_10; }
	inline void set_time1_10(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___time1_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___time1_10), (void*)value);
	}

	inline static int32_t get_offset_of_time2_11() { return static_cast<int32_t>(offsetof(Em_t2FB906755A5C8B9E1A38CEE942BBE1477CA512F9, ___time2_11)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_time2_11() const { return ___time2_11; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_time2_11() { return &___time2_11; }
	inline void set_time2_11(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___time2_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___time2_11), (void*)value);
	}

	inline static int32_t get_offset_of_time3_12() { return static_cast<int32_t>(offsetof(Em_t2FB906755A5C8B9E1A38CEE942BBE1477CA512F9, ___time3_12)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_time3_12() const { return ___time3_12; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_time3_12() { return &___time3_12; }
	inline void set_time3_12(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___time3_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___time3_12), (void*)value);
	}

	inline static int32_t get_offset_of_g_time_13() { return static_cast<int32_t>(offsetof(Em_t2FB906755A5C8B9E1A38CEE942BBE1477CA512F9, ___g_time_13)); }
	inline float get_g_time_13() const { return ___g_time_13; }
	inline float* get_address_of_g_time_13() { return &___g_time_13; }
	inline void set_g_time_13(float value)
	{
		___g_time_13 = value;
	}
};


// EventSubscriber
struct  EventSubscriber_tE8F7072EC3A9ED03318D306EE0BFFB22D13F8431  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Button EventSubscriber::startButton
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___startButton_4;
	// UnityEngine.UI.Button EventSubscriber::endButton
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___endButton_5;
	// System.Single EventSubscriber::startTime
	float ___startTime_6;
	// System.Boolean EventSubscriber::isPressedStart
	bool ___isPressedStart_7;

public:
	inline static int32_t get_offset_of_startButton_4() { return static_cast<int32_t>(offsetof(EventSubscriber_tE8F7072EC3A9ED03318D306EE0BFFB22D13F8431, ___startButton_4)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_startButton_4() const { return ___startButton_4; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_startButton_4() { return &___startButton_4; }
	inline void set_startButton_4(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___startButton_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startButton_4), (void*)value);
	}

	inline static int32_t get_offset_of_endButton_5() { return static_cast<int32_t>(offsetof(EventSubscriber_tE8F7072EC3A9ED03318D306EE0BFFB22D13F8431, ___endButton_5)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_endButton_5() const { return ___endButton_5; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_endButton_5() { return &___endButton_5; }
	inline void set_endButton_5(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___endButton_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endButton_5), (void*)value);
	}

	inline static int32_t get_offset_of_startTime_6() { return static_cast<int32_t>(offsetof(EventSubscriber_tE8F7072EC3A9ED03318D306EE0BFFB22D13F8431, ___startTime_6)); }
	inline float get_startTime_6() const { return ___startTime_6; }
	inline float* get_address_of_startTime_6() { return &___startTime_6; }
	inline void set_startTime_6(float value)
	{
		___startTime_6 = value;
	}

	inline static int32_t get_offset_of_isPressedStart_7() { return static_cast<int32_t>(offsetof(EventSubscriber_tE8F7072EC3A9ED03318D306EE0BFFB22D13F8431, ___isPressedStart_7)); }
	inline bool get_isPressedStart_7() const { return ___isPressedStart_7; }
	inline bool* get_address_of_isPressedStart_7() { return &___isPressedStart_7; }
	inline void set_isPressedStart_7(bool value)
	{
		___isPressedStart_7 = value;
	}
};


// GateFunc
struct  GateFunc_tB1FC89C3AB042F4689002BB0DFDB74F00807BD3D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean GateFunc::playerCheck
	bool ___playerCheck_4;
	// UnityEngine.GameObject GateFunc::player
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___player_5;
	// PlayerController GateFunc::playerScript
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * ___playerScript_6;
	// UnityEngine.CharacterController GateFunc::playerCC
	CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E * ___playerCC_7;
	// UnityEngine.Vector3 GateFunc::newPlayerPos
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___newPlayerPos_8;

public:
	inline static int32_t get_offset_of_playerCheck_4() { return static_cast<int32_t>(offsetof(GateFunc_tB1FC89C3AB042F4689002BB0DFDB74F00807BD3D, ___playerCheck_4)); }
	inline bool get_playerCheck_4() const { return ___playerCheck_4; }
	inline bool* get_address_of_playerCheck_4() { return &___playerCheck_4; }
	inline void set_playerCheck_4(bool value)
	{
		___playerCheck_4 = value;
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(GateFunc_tB1FC89C3AB042F4689002BB0DFDB74F00807BD3D, ___player_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_player_5() const { return ___player_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_5), (void*)value);
	}

	inline static int32_t get_offset_of_playerScript_6() { return static_cast<int32_t>(offsetof(GateFunc_tB1FC89C3AB042F4689002BB0DFDB74F00807BD3D, ___playerScript_6)); }
	inline PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * get_playerScript_6() const { return ___playerScript_6; }
	inline PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 ** get_address_of_playerScript_6() { return &___playerScript_6; }
	inline void set_playerScript_6(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * value)
	{
		___playerScript_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerScript_6), (void*)value);
	}

	inline static int32_t get_offset_of_playerCC_7() { return static_cast<int32_t>(offsetof(GateFunc_tB1FC89C3AB042F4689002BB0DFDB74F00807BD3D, ___playerCC_7)); }
	inline CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E * get_playerCC_7() const { return ___playerCC_7; }
	inline CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E ** get_address_of_playerCC_7() { return &___playerCC_7; }
	inline void set_playerCC_7(CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E * value)
	{
		___playerCC_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerCC_7), (void*)value);
	}

	inline static int32_t get_offset_of_newPlayerPos_8() { return static_cast<int32_t>(offsetof(GateFunc_tB1FC89C3AB042F4689002BB0DFDB74F00807BD3D, ___newPlayerPos_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_newPlayerPos_8() const { return ___newPlayerPos_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_newPlayerPos_8() { return &___newPlayerPos_8; }
	inline void set_newPlayerPos_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___newPlayerPos_8 = value;
	}
};


// Gm
struct  Gm_t048FF63D757797A66F07CA1383A099344589F7F9  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single Gm::G_time
	float ___G_time_4;
	// System.Single Gm::P_time
	float ___P_time_5;
	// System.Int32 Gm::GameStatus
	int32_t ___GameStatus_6;
	// UnityEngine.GameObject Gm::obj
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___obj_7;
	// TMPro.TextMeshProUGUI Gm::t_time
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___t_time_8;
	// TMPro.TextMeshProUGUI Gm::r_time
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___r_time_9;
	// System.Int32 Gm::selected
	int32_t ___selected_10;
	// System.String Gm::u_name
	String_t* ___u_name_11;

public:
	inline static int32_t get_offset_of_G_time_4() { return static_cast<int32_t>(offsetof(Gm_t048FF63D757797A66F07CA1383A099344589F7F9, ___G_time_4)); }
	inline float get_G_time_4() const { return ___G_time_4; }
	inline float* get_address_of_G_time_4() { return &___G_time_4; }
	inline void set_G_time_4(float value)
	{
		___G_time_4 = value;
	}

	inline static int32_t get_offset_of_P_time_5() { return static_cast<int32_t>(offsetof(Gm_t048FF63D757797A66F07CA1383A099344589F7F9, ___P_time_5)); }
	inline float get_P_time_5() const { return ___P_time_5; }
	inline float* get_address_of_P_time_5() { return &___P_time_5; }
	inline void set_P_time_5(float value)
	{
		___P_time_5 = value;
	}

	inline static int32_t get_offset_of_GameStatus_6() { return static_cast<int32_t>(offsetof(Gm_t048FF63D757797A66F07CA1383A099344589F7F9, ___GameStatus_6)); }
	inline int32_t get_GameStatus_6() const { return ___GameStatus_6; }
	inline int32_t* get_address_of_GameStatus_6() { return &___GameStatus_6; }
	inline void set_GameStatus_6(int32_t value)
	{
		___GameStatus_6 = value;
	}

	inline static int32_t get_offset_of_obj_7() { return static_cast<int32_t>(offsetof(Gm_t048FF63D757797A66F07CA1383A099344589F7F9, ___obj_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_obj_7() const { return ___obj_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_obj_7() { return &___obj_7; }
	inline void set_obj_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___obj_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___obj_7), (void*)value);
	}

	inline static int32_t get_offset_of_t_time_8() { return static_cast<int32_t>(offsetof(Gm_t048FF63D757797A66F07CA1383A099344589F7F9, ___t_time_8)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_t_time_8() const { return ___t_time_8; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_t_time_8() { return &___t_time_8; }
	inline void set_t_time_8(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___t_time_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_time_8), (void*)value);
	}

	inline static int32_t get_offset_of_r_time_9() { return static_cast<int32_t>(offsetof(Gm_t048FF63D757797A66F07CA1383A099344589F7F9, ___r_time_9)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_r_time_9() const { return ___r_time_9; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_r_time_9() { return &___r_time_9; }
	inline void set_r_time_9(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___r_time_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___r_time_9), (void*)value);
	}

	inline static int32_t get_offset_of_selected_10() { return static_cast<int32_t>(offsetof(Gm_t048FF63D757797A66F07CA1383A099344589F7F9, ___selected_10)); }
	inline int32_t get_selected_10() const { return ___selected_10; }
	inline int32_t* get_address_of_selected_10() { return &___selected_10; }
	inline void set_selected_10(int32_t value)
	{
		___selected_10 = value;
	}

	inline static int32_t get_offset_of_u_name_11() { return static_cast<int32_t>(offsetof(Gm_t048FF63D757797A66F07CA1383A099344589F7F9, ___u_name_11)); }
	inline String_t* get_u_name_11() const { return ___u_name_11; }
	inline String_t** get_address_of_u_name_11() { return &___u_name_11; }
	inline void set_u_name_11(String_t* value)
	{
		___u_name_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___u_name_11), (void*)value);
	}
};


// Obstacle
struct  Obstacle_t45A47093FD0D640DE4C85A2CB52665B5192A232E  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 Obstacle::sign
	int32_t ___sign_4;
	// System.Single Obstacle::speed
	float ___speed_5;
	// System.Single Obstacle::minX
	float ___minX_6;
	// System.Single Obstacle::maxX
	float ___maxX_7;
	// System.Boolean Obstacle::playerCheck
	bool ___playerCheck_8;
	// UnityEngine.GameObject Obstacle::player
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___player_9;
	// PlayerController Obstacle::playerScript
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * ___playerScript_10;
	// UnityEngine.CharacterController Obstacle::playerCC
	CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E * ___playerCC_11;
	// UnityEngine.Vector3 Obstacle::newPlayerPos
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___newPlayerPos_12;
	// System.Int32 Obstacle::flag
	int32_t ___flag_13;
	// System.Single Obstacle::minY
	float ___minY_14;
	// System.Single Obstacle::maxY
	float ___maxY_15;
	// System.Single Obstacle::elapsedTime
	float ___elapsedTime_16;
	// System.Boolean Obstacle::isStart
	bool ___isStart_17;

public:
	inline static int32_t get_offset_of_sign_4() { return static_cast<int32_t>(offsetof(Obstacle_t45A47093FD0D640DE4C85A2CB52665B5192A232E, ___sign_4)); }
	inline int32_t get_sign_4() const { return ___sign_4; }
	inline int32_t* get_address_of_sign_4() { return &___sign_4; }
	inline void set_sign_4(int32_t value)
	{
		___sign_4 = value;
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(Obstacle_t45A47093FD0D640DE4C85A2CB52665B5192A232E, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_minX_6() { return static_cast<int32_t>(offsetof(Obstacle_t45A47093FD0D640DE4C85A2CB52665B5192A232E, ___minX_6)); }
	inline float get_minX_6() const { return ___minX_6; }
	inline float* get_address_of_minX_6() { return &___minX_6; }
	inline void set_minX_6(float value)
	{
		___minX_6 = value;
	}

	inline static int32_t get_offset_of_maxX_7() { return static_cast<int32_t>(offsetof(Obstacle_t45A47093FD0D640DE4C85A2CB52665B5192A232E, ___maxX_7)); }
	inline float get_maxX_7() const { return ___maxX_7; }
	inline float* get_address_of_maxX_7() { return &___maxX_7; }
	inline void set_maxX_7(float value)
	{
		___maxX_7 = value;
	}

	inline static int32_t get_offset_of_playerCheck_8() { return static_cast<int32_t>(offsetof(Obstacle_t45A47093FD0D640DE4C85A2CB52665B5192A232E, ___playerCheck_8)); }
	inline bool get_playerCheck_8() const { return ___playerCheck_8; }
	inline bool* get_address_of_playerCheck_8() { return &___playerCheck_8; }
	inline void set_playerCheck_8(bool value)
	{
		___playerCheck_8 = value;
	}

	inline static int32_t get_offset_of_player_9() { return static_cast<int32_t>(offsetof(Obstacle_t45A47093FD0D640DE4C85A2CB52665B5192A232E, ___player_9)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_player_9() const { return ___player_9; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_player_9() { return &___player_9; }
	inline void set_player_9(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___player_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_9), (void*)value);
	}

	inline static int32_t get_offset_of_playerScript_10() { return static_cast<int32_t>(offsetof(Obstacle_t45A47093FD0D640DE4C85A2CB52665B5192A232E, ___playerScript_10)); }
	inline PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * get_playerScript_10() const { return ___playerScript_10; }
	inline PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 ** get_address_of_playerScript_10() { return &___playerScript_10; }
	inline void set_playerScript_10(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * value)
	{
		___playerScript_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerScript_10), (void*)value);
	}

	inline static int32_t get_offset_of_playerCC_11() { return static_cast<int32_t>(offsetof(Obstacle_t45A47093FD0D640DE4C85A2CB52665B5192A232E, ___playerCC_11)); }
	inline CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E * get_playerCC_11() const { return ___playerCC_11; }
	inline CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E ** get_address_of_playerCC_11() { return &___playerCC_11; }
	inline void set_playerCC_11(CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E * value)
	{
		___playerCC_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerCC_11), (void*)value);
	}

	inline static int32_t get_offset_of_newPlayerPos_12() { return static_cast<int32_t>(offsetof(Obstacle_t45A47093FD0D640DE4C85A2CB52665B5192A232E, ___newPlayerPos_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_newPlayerPos_12() const { return ___newPlayerPos_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_newPlayerPos_12() { return &___newPlayerPos_12; }
	inline void set_newPlayerPos_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___newPlayerPos_12 = value;
	}

	inline static int32_t get_offset_of_flag_13() { return static_cast<int32_t>(offsetof(Obstacle_t45A47093FD0D640DE4C85A2CB52665B5192A232E, ___flag_13)); }
	inline int32_t get_flag_13() const { return ___flag_13; }
	inline int32_t* get_address_of_flag_13() { return &___flag_13; }
	inline void set_flag_13(int32_t value)
	{
		___flag_13 = value;
	}

	inline static int32_t get_offset_of_minY_14() { return static_cast<int32_t>(offsetof(Obstacle_t45A47093FD0D640DE4C85A2CB52665B5192A232E, ___minY_14)); }
	inline float get_minY_14() const { return ___minY_14; }
	inline float* get_address_of_minY_14() { return &___minY_14; }
	inline void set_minY_14(float value)
	{
		___minY_14 = value;
	}

	inline static int32_t get_offset_of_maxY_15() { return static_cast<int32_t>(offsetof(Obstacle_t45A47093FD0D640DE4C85A2CB52665B5192A232E, ___maxY_15)); }
	inline float get_maxY_15() const { return ___maxY_15; }
	inline float* get_address_of_maxY_15() { return &___maxY_15; }
	inline void set_maxY_15(float value)
	{
		___maxY_15 = value;
	}

	inline static int32_t get_offset_of_elapsedTime_16() { return static_cast<int32_t>(offsetof(Obstacle_t45A47093FD0D640DE4C85A2CB52665B5192A232E, ___elapsedTime_16)); }
	inline float get_elapsedTime_16() const { return ___elapsedTime_16; }
	inline float* get_address_of_elapsedTime_16() { return &___elapsedTime_16; }
	inline void set_elapsedTime_16(float value)
	{
		___elapsedTime_16 = value;
	}

	inline static int32_t get_offset_of_isStart_17() { return static_cast<int32_t>(offsetof(Obstacle_t45A47093FD0D640DE4C85A2CB52665B5192A232E, ___isStart_17)); }
	inline bool get_isStart_17() const { return ___isStart_17; }
	inline bool* get_address_of_isStart_17() { return &___isStart_17; }
	inline void set_isStart_17(bool value)
	{
		___isStart_17 = value;
	}
};


// PlayerController
struct  PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single PlayerController::gravity
	float ___gravity_4;
	// System.Single PlayerController::runSpeed
	float ___runSpeed_5;
	// System.Single PlayerController::mouseSensitivity
	float ___mouseSensitivity_6;
	// System.Single PlayerController::JumpPower
	float ___JumpPower_7;
	// UnityEngine.Transform PlayerController::myTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___myTransform_8;
	// UnityEngine.Transform PlayerController::model
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___model_9;
	// UnityEngine.GameObject PlayerController::flatform
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___flatform_10;
	// Obstacle PlayerController::flatformScript
	Obstacle_t45A47093FD0D640DE4C85A2CB52665B5192A232E * ___flatformScript_11;
	// UnityEngine.CharacterController PlayerController::cc
	CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E * ___cc_12;
	// UnityEngine.Animator PlayerController::ani
	Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___ani_13;
	// UnityEngine.Rigidbody PlayerController::rigid
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ___rigid_14;
	// UnityEngine.Vector3 PlayerController::mouseMove
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mouseMove_15;
	// UnityEngine.Vector3 PlayerController::move
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___move_16;
	// UnityEngine.Vector3 PlayerController::moveDir
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___moveDir_17;
	// UnityEngine.Transform PlayerController::cameraParentTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___cameraParentTransform_18;
	// UnityEngine.Transform PlayerController::cameraTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___cameraTransform_19;
	// System.Single PlayerController::verticalVelocity
	float ___verticalVelocity_20;

public:
	inline static int32_t get_offset_of_gravity_4() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___gravity_4)); }
	inline float get_gravity_4() const { return ___gravity_4; }
	inline float* get_address_of_gravity_4() { return &___gravity_4; }
	inline void set_gravity_4(float value)
	{
		___gravity_4 = value;
	}

	inline static int32_t get_offset_of_runSpeed_5() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___runSpeed_5)); }
	inline float get_runSpeed_5() const { return ___runSpeed_5; }
	inline float* get_address_of_runSpeed_5() { return &___runSpeed_5; }
	inline void set_runSpeed_5(float value)
	{
		___runSpeed_5 = value;
	}

	inline static int32_t get_offset_of_mouseSensitivity_6() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___mouseSensitivity_6)); }
	inline float get_mouseSensitivity_6() const { return ___mouseSensitivity_6; }
	inline float* get_address_of_mouseSensitivity_6() { return &___mouseSensitivity_6; }
	inline void set_mouseSensitivity_6(float value)
	{
		___mouseSensitivity_6 = value;
	}

	inline static int32_t get_offset_of_JumpPower_7() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___JumpPower_7)); }
	inline float get_JumpPower_7() const { return ___JumpPower_7; }
	inline float* get_address_of_JumpPower_7() { return &___JumpPower_7; }
	inline void set_JumpPower_7(float value)
	{
		___JumpPower_7 = value;
	}

	inline static int32_t get_offset_of_myTransform_8() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___myTransform_8)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_myTransform_8() const { return ___myTransform_8; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_myTransform_8() { return &___myTransform_8; }
	inline void set_myTransform_8(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___myTransform_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myTransform_8), (void*)value);
	}

	inline static int32_t get_offset_of_model_9() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___model_9)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_model_9() const { return ___model_9; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_model_9() { return &___model_9; }
	inline void set_model_9(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___model_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___model_9), (void*)value);
	}

	inline static int32_t get_offset_of_flatform_10() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___flatform_10)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_flatform_10() const { return ___flatform_10; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_flatform_10() { return &___flatform_10; }
	inline void set_flatform_10(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___flatform_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___flatform_10), (void*)value);
	}

	inline static int32_t get_offset_of_flatformScript_11() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___flatformScript_11)); }
	inline Obstacle_t45A47093FD0D640DE4C85A2CB52665B5192A232E * get_flatformScript_11() const { return ___flatformScript_11; }
	inline Obstacle_t45A47093FD0D640DE4C85A2CB52665B5192A232E ** get_address_of_flatformScript_11() { return &___flatformScript_11; }
	inline void set_flatformScript_11(Obstacle_t45A47093FD0D640DE4C85A2CB52665B5192A232E * value)
	{
		___flatformScript_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___flatformScript_11), (void*)value);
	}

	inline static int32_t get_offset_of_cc_12() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___cc_12)); }
	inline CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E * get_cc_12() const { return ___cc_12; }
	inline CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E ** get_address_of_cc_12() { return &___cc_12; }
	inline void set_cc_12(CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E * value)
	{
		___cc_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cc_12), (void*)value);
	}

	inline static int32_t get_offset_of_ani_13() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___ani_13)); }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * get_ani_13() const { return ___ani_13; }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A ** get_address_of_ani_13() { return &___ani_13; }
	inline void set_ani_13(Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * value)
	{
		___ani_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ani_13), (void*)value);
	}

	inline static int32_t get_offset_of_rigid_14() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___rigid_14)); }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * get_rigid_14() const { return ___rigid_14; }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 ** get_address_of_rigid_14() { return &___rigid_14; }
	inline void set_rigid_14(Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * value)
	{
		___rigid_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rigid_14), (void*)value);
	}

	inline static int32_t get_offset_of_mouseMove_15() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___mouseMove_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_mouseMove_15() const { return ___mouseMove_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_mouseMove_15() { return &___mouseMove_15; }
	inline void set_mouseMove_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___mouseMove_15 = value;
	}

	inline static int32_t get_offset_of_move_16() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___move_16)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_move_16() const { return ___move_16; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_move_16() { return &___move_16; }
	inline void set_move_16(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___move_16 = value;
	}

	inline static int32_t get_offset_of_moveDir_17() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___moveDir_17)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_moveDir_17() const { return ___moveDir_17; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_moveDir_17() { return &___moveDir_17; }
	inline void set_moveDir_17(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___moveDir_17 = value;
	}

	inline static int32_t get_offset_of_cameraParentTransform_18() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___cameraParentTransform_18)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_cameraParentTransform_18() const { return ___cameraParentTransform_18; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_cameraParentTransform_18() { return &___cameraParentTransform_18; }
	inline void set_cameraParentTransform_18(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___cameraParentTransform_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraParentTransform_18), (void*)value);
	}

	inline static int32_t get_offset_of_cameraTransform_19() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___cameraTransform_19)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_cameraTransform_19() const { return ___cameraTransform_19; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_cameraTransform_19() { return &___cameraTransform_19; }
	inline void set_cameraTransform_19(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___cameraTransform_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraTransform_19), (void*)value);
	}

	inline static int32_t get_offset_of_verticalVelocity_20() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___verticalVelocity_20)); }
	inline float get_verticalVelocity_20() const { return ___verticalVelocity_20; }
	inline float* get_address_of_verticalVelocity_20() { return &___verticalVelocity_20; }
	inline void set_verticalVelocity_20(float value)
	{
		___verticalVelocity_20 = value;
	}
};


// Select
struct  Select_tFB3AFACAA5693CCF92F3FE506F90133FAC4E2AA4  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Button Select::a
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___a_4;
	// UnityEngine.UI.Button Select::b
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___b_5;
	// UnityEngine.UI.Button Select::c
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___c_6;
	// UnityEngine.UI.Button Select::d
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___d_7;
	// TMPro.TMP_InputField Select::input
	TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB * ___input_8;
	// UnityEngine.UI.Button Select::start
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___start_9;
	// System.Int32 Select::sel
	int32_t ___sel_10;
	// System.Int32 Select::textlen
	int32_t ___textlen_11;
	// System.Single Select::startTime
	float ___startTime_12;
	// System.Boolean Select::isPressedStart
	bool ___isPressedStart_13;

public:
	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Select_tFB3AFACAA5693CCF92F3FE506F90133FAC4E2AA4, ___a_4)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_a_4() const { return ___a_4; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___a_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___a_4), (void*)value);
	}

	inline static int32_t get_offset_of_b_5() { return static_cast<int32_t>(offsetof(Select_tFB3AFACAA5693CCF92F3FE506F90133FAC4E2AA4, ___b_5)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_b_5() const { return ___b_5; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_b_5() { return &___b_5; }
	inline void set_b_5(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___b_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___b_5), (void*)value);
	}

	inline static int32_t get_offset_of_c_6() { return static_cast<int32_t>(offsetof(Select_tFB3AFACAA5693CCF92F3FE506F90133FAC4E2AA4, ___c_6)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_c_6() const { return ___c_6; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_c_6() { return &___c_6; }
	inline void set_c_6(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___c_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_6), (void*)value);
	}

	inline static int32_t get_offset_of_d_7() { return static_cast<int32_t>(offsetof(Select_tFB3AFACAA5693CCF92F3FE506F90133FAC4E2AA4, ___d_7)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_d_7() const { return ___d_7; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_d_7() { return &___d_7; }
	inline void set_d_7(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___d_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___d_7), (void*)value);
	}

	inline static int32_t get_offset_of_input_8() { return static_cast<int32_t>(offsetof(Select_tFB3AFACAA5693CCF92F3FE506F90133FAC4E2AA4, ___input_8)); }
	inline TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB * get_input_8() const { return ___input_8; }
	inline TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB ** get_address_of_input_8() { return &___input_8; }
	inline void set_input_8(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB * value)
	{
		___input_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___input_8), (void*)value);
	}

	inline static int32_t get_offset_of_start_9() { return static_cast<int32_t>(offsetof(Select_tFB3AFACAA5693CCF92F3FE506F90133FAC4E2AA4, ___start_9)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_start_9() const { return ___start_9; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_start_9() { return &___start_9; }
	inline void set_start_9(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___start_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___start_9), (void*)value);
	}

	inline static int32_t get_offset_of_sel_10() { return static_cast<int32_t>(offsetof(Select_tFB3AFACAA5693CCF92F3FE506F90133FAC4E2AA4, ___sel_10)); }
	inline int32_t get_sel_10() const { return ___sel_10; }
	inline int32_t* get_address_of_sel_10() { return &___sel_10; }
	inline void set_sel_10(int32_t value)
	{
		___sel_10 = value;
	}

	inline static int32_t get_offset_of_textlen_11() { return static_cast<int32_t>(offsetof(Select_tFB3AFACAA5693CCF92F3FE506F90133FAC4E2AA4, ___textlen_11)); }
	inline int32_t get_textlen_11() const { return ___textlen_11; }
	inline int32_t* get_address_of_textlen_11() { return &___textlen_11; }
	inline void set_textlen_11(int32_t value)
	{
		___textlen_11 = value;
	}

	inline static int32_t get_offset_of_startTime_12() { return static_cast<int32_t>(offsetof(Select_tFB3AFACAA5693CCF92F3FE506F90133FAC4E2AA4, ___startTime_12)); }
	inline float get_startTime_12() const { return ___startTime_12; }
	inline float* get_address_of_startTime_12() { return &___startTime_12; }
	inline void set_startTime_12(float value)
	{
		___startTime_12 = value;
	}

	inline static int32_t get_offset_of_isPressedStart_13() { return static_cast<int32_t>(offsetof(Select_tFB3AFACAA5693CCF92F3FE506F90133FAC4E2AA4, ___isPressedStart_13)); }
	inline bool get_isPressedStart_13() const { return ___isPressedStart_13; }
	inline bool* get_address_of_isPressedStart_13() { return &___isPressedStart_13; }
	inline void set_isPressedStart_13(bool value)
	{
		___isPressedStart_13 = value;
	}
};


// TrampolineFunc
struct  TrampolineFunc_tFDEC9DE28330294ED72B9CA1C2260EB990A5A350  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean TrampolineFunc::playerCheck
	bool ___playerCheck_4;
	// UnityEngine.GameObject TrampolineFunc::player
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___player_5;
	// PlayerController TrampolineFunc::playerScript
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * ___playerScript_6;
	// UnityEngine.CharacterController TrampolineFunc::playerCC
	CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E * ___playerCC_7;
	// UnityEngine.Vector3 TrampolineFunc::newPlayerPos
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___newPlayerPos_8;
	// System.Single TrampolineFunc::saveJumpPower
	float ___saveJumpPower_9;

public:
	inline static int32_t get_offset_of_playerCheck_4() { return static_cast<int32_t>(offsetof(TrampolineFunc_tFDEC9DE28330294ED72B9CA1C2260EB990A5A350, ___playerCheck_4)); }
	inline bool get_playerCheck_4() const { return ___playerCheck_4; }
	inline bool* get_address_of_playerCheck_4() { return &___playerCheck_4; }
	inline void set_playerCheck_4(bool value)
	{
		___playerCheck_4 = value;
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(TrampolineFunc_tFDEC9DE28330294ED72B9CA1C2260EB990A5A350, ___player_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_player_5() const { return ___player_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_5), (void*)value);
	}

	inline static int32_t get_offset_of_playerScript_6() { return static_cast<int32_t>(offsetof(TrampolineFunc_tFDEC9DE28330294ED72B9CA1C2260EB990A5A350, ___playerScript_6)); }
	inline PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * get_playerScript_6() const { return ___playerScript_6; }
	inline PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 ** get_address_of_playerScript_6() { return &___playerScript_6; }
	inline void set_playerScript_6(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * value)
	{
		___playerScript_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerScript_6), (void*)value);
	}

	inline static int32_t get_offset_of_playerCC_7() { return static_cast<int32_t>(offsetof(TrampolineFunc_tFDEC9DE28330294ED72B9CA1C2260EB990A5A350, ___playerCC_7)); }
	inline CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E * get_playerCC_7() const { return ___playerCC_7; }
	inline CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E ** get_address_of_playerCC_7() { return &___playerCC_7; }
	inline void set_playerCC_7(CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E * value)
	{
		___playerCC_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerCC_7), (void*)value);
	}

	inline static int32_t get_offset_of_newPlayerPos_8() { return static_cast<int32_t>(offsetof(TrampolineFunc_tFDEC9DE28330294ED72B9CA1C2260EB990A5A350, ___newPlayerPos_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_newPlayerPos_8() const { return ___newPlayerPos_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_newPlayerPos_8() { return &___newPlayerPos_8; }
	inline void set_newPlayerPos_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___newPlayerPos_8 = value;
	}

	inline static int32_t get_offset_of_saveJumpPower_9() { return static_cast<int32_t>(offsetof(TrampolineFunc_tFDEC9DE28330294ED72B9CA1C2260EB990A5A350, ___saveJumpPower_9)); }
	inline float get_saveJumpPower_9() const { return ___saveJumpPower_9; }
	inline float* get_address_of_saveJumpPower_9() { return &___saveJumpPower_9; }
	inline void set_saveJumpPower_9(float value)
	{
		___saveJumpPower_9 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityTemplateProjects.SimpleCameraController
struct  SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityTemplateProjects.SimpleCameraController_CameraState UnityTemplateProjects.SimpleCameraController::m_TargetCameraState
	CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * ___m_TargetCameraState_4;
	// UnityTemplateProjects.SimpleCameraController_CameraState UnityTemplateProjects.SimpleCameraController::m_InterpolatingCameraState
	CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * ___m_InterpolatingCameraState_5;
	// System.Single UnityTemplateProjects.SimpleCameraController::boost
	float ___boost_6;
	// System.Single UnityTemplateProjects.SimpleCameraController::positionLerpTime
	float ___positionLerpTime_7;
	// UnityEngine.AnimationCurve UnityTemplateProjects.SimpleCameraController::mouseSensitivityCurve
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___mouseSensitivityCurve_8;
	// System.Single UnityTemplateProjects.SimpleCameraController::rotationLerpTime
	float ___rotationLerpTime_9;
	// System.Boolean UnityTemplateProjects.SimpleCameraController::invertY
	bool ___invertY_10;

public:
	inline static int32_t get_offset_of_m_TargetCameraState_4() { return static_cast<int32_t>(offsetof(SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42, ___m_TargetCameraState_4)); }
	inline CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * get_m_TargetCameraState_4() const { return ___m_TargetCameraState_4; }
	inline CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 ** get_address_of_m_TargetCameraState_4() { return &___m_TargetCameraState_4; }
	inline void set_m_TargetCameraState_4(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * value)
	{
		___m_TargetCameraState_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetCameraState_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_InterpolatingCameraState_5() { return static_cast<int32_t>(offsetof(SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42, ___m_InterpolatingCameraState_5)); }
	inline CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * get_m_InterpolatingCameraState_5() const { return ___m_InterpolatingCameraState_5; }
	inline CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 ** get_address_of_m_InterpolatingCameraState_5() { return &___m_InterpolatingCameraState_5; }
	inline void set_m_InterpolatingCameraState_5(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * value)
	{
		___m_InterpolatingCameraState_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InterpolatingCameraState_5), (void*)value);
	}

	inline static int32_t get_offset_of_boost_6() { return static_cast<int32_t>(offsetof(SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42, ___boost_6)); }
	inline float get_boost_6() const { return ___boost_6; }
	inline float* get_address_of_boost_6() { return &___boost_6; }
	inline void set_boost_6(float value)
	{
		___boost_6 = value;
	}

	inline static int32_t get_offset_of_positionLerpTime_7() { return static_cast<int32_t>(offsetof(SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42, ___positionLerpTime_7)); }
	inline float get_positionLerpTime_7() const { return ___positionLerpTime_7; }
	inline float* get_address_of_positionLerpTime_7() { return &___positionLerpTime_7; }
	inline void set_positionLerpTime_7(float value)
	{
		___positionLerpTime_7 = value;
	}

	inline static int32_t get_offset_of_mouseSensitivityCurve_8() { return static_cast<int32_t>(offsetof(SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42, ___mouseSensitivityCurve_8)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_mouseSensitivityCurve_8() const { return ___mouseSensitivityCurve_8; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_mouseSensitivityCurve_8() { return &___mouseSensitivityCurve_8; }
	inline void set_mouseSensitivityCurve_8(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___mouseSensitivityCurve_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mouseSensitivityCurve_8), (void*)value);
	}

	inline static int32_t get_offset_of_rotationLerpTime_9() { return static_cast<int32_t>(offsetof(SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42, ___rotationLerpTime_9)); }
	inline float get_rotationLerpTime_9() const { return ___rotationLerpTime_9; }
	inline float* get_address_of_rotationLerpTime_9() { return &___rotationLerpTime_9; }
	inline void set_rotationLerpTime_9(float value)
	{
		___rotationLerpTime_9 = value;
	}

	inline static int32_t get_offset_of_invertY_10() { return static_cast<int32_t>(offsetof(SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42, ___invertY_10)); }
	inline bool get_invertY_10() const { return ___invertY_10; }
	inline bool* get_address_of_invertY_10() { return &___invertY_10; }
	inline void set_invertY_10(bool value)
	{
		___invertY_10 = value;
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  ___m_Navigation_7;
	// UnityEngine.UI.Selectable_Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Navigation_7)); }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Colors_9)); }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_SpriteState_10)); }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_TargetGraphic_13)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CanvasGroupCache_19)); }
	inline List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// TMPro.TMP_InputField
struct  TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.TouchScreenKeyboard TMPro.TMP_InputField::m_SoftKeyboard
	TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 * ___m_SoftKeyboard_20;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_22;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextViewport
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_TextViewport_23;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextComponentRectMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_TextComponentRectMask_24;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextViewportRectMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_TextViewportRectMask_25;
	// UnityEngine.Rect TMPro.TMP_InputField::m_CachedViewportRect
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___m_CachedViewportRect_26;
	// TMPro.TMP_Text TMPro.TMP_InputField::m_TextComponent
	TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___m_TextComponent_27;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextComponentRectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_TextComponentRectTransform_28;
	// UnityEngine.UI.Graphic TMPro.TMP_InputField::m_Placeholder
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___m_Placeholder_29;
	// UnityEngine.UI.Scrollbar TMPro.TMP_InputField::m_VerticalScrollbar
	Scrollbar_t8F8679D0EAFACBCBD603E6B0E741E6A783DB3389 * ___m_VerticalScrollbar_30;
	// TMPro.TMP_ScrollbarEventHandler TMPro.TMP_InputField::m_VerticalScrollbarEventHandler
	TMP_ScrollbarEventHandler_t081C59DD8EC81899836C864E45E60977A40FBA83 * ___m_VerticalScrollbarEventHandler_31;
	// System.Boolean TMPro.TMP_InputField::m_IsDrivenByLayoutComponents
	bool ___m_IsDrivenByLayoutComponents_32;
	// UnityEngine.UI.LayoutGroup TMPro.TMP_InputField::m_LayoutGroup
	LayoutGroup_t9E072B95DA6476C487C0B07A815291249025C0E4 * ___m_LayoutGroup_33;
	// System.Single TMPro.TMP_InputField::m_ScrollPosition
	float ___m_ScrollPosition_34;
	// System.Single TMPro.TMP_InputField::m_ScrollSensitivity
	float ___m_ScrollSensitivity_35;
	// TMPro.TMP_InputField_ContentType TMPro.TMP_InputField::m_ContentType
	int32_t ___m_ContentType_36;
	// TMPro.TMP_InputField_InputType TMPro.TMP_InputField::m_InputType
	int32_t ___m_InputType_37;
	// System.Char TMPro.TMP_InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_38;
	// UnityEngine.TouchScreenKeyboardType TMPro.TMP_InputField::m_KeyboardType
	int32_t ___m_KeyboardType_39;
	// TMPro.TMP_InputField_LineType TMPro.TMP_InputField::m_LineType
	int32_t ___m_LineType_40;
	// System.Boolean TMPro.TMP_InputField::m_HideMobileInput
	bool ___m_HideMobileInput_41;
	// System.Boolean TMPro.TMP_InputField::m_HideSoftKeyboard
	bool ___m_HideSoftKeyboard_42;
	// TMPro.TMP_InputField_CharacterValidation TMPro.TMP_InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_43;
	// System.String TMPro.TMP_InputField::m_RegexValue
	String_t* ___m_RegexValue_44;
	// System.Single TMPro.TMP_InputField::m_GlobalPointSize
	float ___m_GlobalPointSize_45;
	// System.Int32 TMPro.TMP_InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_46;
	// TMPro.TMP_InputField_SubmitEvent TMPro.TMP_InputField::m_OnEndEdit
	SubmitEvent_tD1BC174A4FE2411600541703750F0F03E991A9BC * ___m_OnEndEdit_47;
	// TMPro.TMP_InputField_SubmitEvent TMPro.TMP_InputField::m_OnSubmit
	SubmitEvent_tD1BC174A4FE2411600541703750F0F03E991A9BC * ___m_OnSubmit_48;
	// TMPro.TMP_InputField_SelectionEvent TMPro.TMP_InputField::m_OnSelect
	SelectionEvent_t346DD0E470654B452107A056EDE13F796AEAFD3A * ___m_OnSelect_49;
	// TMPro.TMP_InputField_SelectionEvent TMPro.TMP_InputField::m_OnDeselect
	SelectionEvent_t346DD0E470654B452107A056EDE13F796AEAFD3A * ___m_OnDeselect_50;
	// TMPro.TMP_InputField_TextSelectionEvent TMPro.TMP_InputField::m_OnTextSelection
	TextSelectionEvent_tD42FAD7CC0AA2E613884FC6E86A11EE59CDA3854 * ___m_OnTextSelection_51;
	// TMPro.TMP_InputField_TextSelectionEvent TMPro.TMP_InputField::m_OnEndTextSelection
	TextSelectionEvent_tD42FAD7CC0AA2E613884FC6E86A11EE59CDA3854 * ___m_OnEndTextSelection_52;
	// TMPro.TMP_InputField_OnChangeEvent TMPro.TMP_InputField::m_OnValueChanged
	OnChangeEvent_t1610FEF044826EE0837528C1E90FCDFC45B3D7AD * ___m_OnValueChanged_53;
	// TMPro.TMP_InputField_TouchScreenKeyboardEvent TMPro.TMP_InputField::m_OnTouchScreenKeyboardStatusChanged
	TouchScreenKeyboardEvent_tF41EB6E5E2B26213D1C0CE6573498CA6ACB3CA1F * ___m_OnTouchScreenKeyboardStatusChanged_54;
	// TMPro.TMP_InputField_OnValidateInput TMPro.TMP_InputField::m_OnValidateInput
	OnValidateInput_t47FA5831345A245F5C6FD9C0E4F5CE43430C1863 * ___m_OnValidateInput_55;
	// UnityEngine.Color TMPro.TMP_InputField::m_CaretColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_CaretColor_56;
	// System.Boolean TMPro.TMP_InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_57;
	// UnityEngine.Color TMPro.TMP_InputField::m_SelectionColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_SelectionColor_58;
	// System.String TMPro.TMP_InputField::m_Text
	String_t* ___m_Text_59;
	// System.Single TMPro.TMP_InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_60;
	// System.Int32 TMPro.TMP_InputField::m_CaretWidth
	int32_t ___m_CaretWidth_61;
	// System.Boolean TMPro.TMP_InputField::m_ReadOnly
	bool ___m_ReadOnly_62;
	// System.Boolean TMPro.TMP_InputField::m_RichText
	bool ___m_RichText_63;
	// System.Int32 TMPro.TMP_InputField::m_StringPosition
	int32_t ___m_StringPosition_64;
	// System.Int32 TMPro.TMP_InputField::m_StringSelectPosition
	int32_t ___m_StringSelectPosition_65;
	// System.Int32 TMPro.TMP_InputField::m_CaretPosition
	int32_t ___m_CaretPosition_66;
	// System.Int32 TMPro.TMP_InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_67;
	// UnityEngine.RectTransform TMPro.TMP_InputField::caretRectTrans
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___caretRectTrans_68;
	// UnityEngine.UIVertex[] TMPro.TMP_InputField::m_CursorVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_CursorVerts_69;
	// UnityEngine.CanvasRenderer TMPro.TMP_InputField::m_CachedInputRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CachedInputRenderer_70;
	// UnityEngine.Vector2 TMPro.TMP_InputField::m_LastPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_LastPosition_71;
	// UnityEngine.Mesh TMPro.TMP_InputField::m_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_Mesh_72;
	// System.Boolean TMPro.TMP_InputField::m_AllowInput
	bool ___m_AllowInput_73;
	// System.Boolean TMPro.TMP_InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_74;
	// System.Boolean TMPro.TMP_InputField::m_UpdateDrag
	bool ___m_UpdateDrag_75;
	// System.Boolean TMPro.TMP_InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_76;
	// System.Boolean TMPro.TMP_InputField::m_CaretVisible
	bool ___m_CaretVisible_79;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_BlinkCoroutine
	Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___m_BlinkCoroutine_80;
	// System.Single TMPro.TMP_InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_81;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_DragCoroutine
	Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___m_DragCoroutine_82;
	// System.String TMPro.TMP_InputField::m_OriginalText
	String_t* ___m_OriginalText_83;
	// System.Boolean TMPro.TMP_InputField::m_WasCanceled
	bool ___m_WasCanceled_84;
	// System.Boolean TMPro.TMP_InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_85;
	// UnityEngine.WaitForSecondsRealtime TMPro.TMP_InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * ___m_WaitForSecondsRealtime_86;
	// System.Boolean TMPro.TMP_InputField::m_PreventCallback
	bool ___m_PreventCallback_87;
	// System.Boolean TMPro.TMP_InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_88;
	// System.Boolean TMPro.TMP_InputField::m_IsTextComponentUpdateRequired
	bool ___m_IsTextComponentUpdateRequired_89;
	// System.Boolean TMPro.TMP_InputField::m_IsScrollbarUpdateRequired
	bool ___m_IsScrollbarUpdateRequired_90;
	// System.Boolean TMPro.TMP_InputField::m_IsUpdatingScrollbarValues
	bool ___m_IsUpdatingScrollbarValues_91;
	// System.Boolean TMPro.TMP_InputField::m_isLastKeyBackspace
	bool ___m_isLastKeyBackspace_92;
	// System.Single TMPro.TMP_InputField::m_PointerDownClickStartTime
	float ___m_PointerDownClickStartTime_93;
	// System.Single TMPro.TMP_InputField::m_KeyDownStartTime
	float ___m_KeyDownStartTime_94;
	// System.Single TMPro.TMP_InputField::m_DoubleClickDelay
	float ___m_DoubleClickDelay_95;
	// System.Boolean TMPro.TMP_InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_97;
	// System.Boolean TMPro.TMP_InputField::m_ShouldUpdateIMEWindowPosition
	bool ___m_ShouldUpdateIMEWindowPosition_98;
	// System.Int32 TMPro.TMP_InputField::m_PreviousIMEInsertionLine
	int32_t ___m_PreviousIMEInsertionLine_99;
	// TMPro.TMP_FontAsset TMPro.TMP_InputField::m_GlobalFontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___m_GlobalFontAsset_100;
	// System.Boolean TMPro.TMP_InputField::m_OnFocusSelectAll
	bool ___m_OnFocusSelectAll_101;
	// System.Boolean TMPro.TMP_InputField::m_isSelectAll
	bool ___m_isSelectAll_102;
	// System.Boolean TMPro.TMP_InputField::m_ResetOnDeActivation
	bool ___m_ResetOnDeActivation_103;
	// System.Boolean TMPro.TMP_InputField::m_SelectionStillActive
	bool ___m_SelectionStillActive_104;
	// System.Boolean TMPro.TMP_InputField::m_ReleaseSelection
	bool ___m_ReleaseSelection_105;
	// UnityEngine.GameObject TMPro.TMP_InputField::m_PreviouslySelectedObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_PreviouslySelectedObject_106;
	// System.Boolean TMPro.TMP_InputField::m_RestoreOriginalTextOnEscape
	bool ___m_RestoreOriginalTextOnEscape_107;
	// System.Boolean TMPro.TMP_InputField::m_isRichTextEditingAllowed
	bool ___m_isRichTextEditingAllowed_108;
	// System.Int32 TMPro.TMP_InputField::m_LineLimit
	int32_t ___m_LineLimit_109;
	// TMPro.TMP_InputValidator TMPro.TMP_InputField::m_InputValidator
	TMP_InputValidator_t4C673E12211AFB82AAF94D9DEA556FDC306E69CD * ___m_InputValidator_110;
	// System.Boolean TMPro.TMP_InputField::m_isSelected
	bool ___m_isSelected_111;
	// System.Boolean TMPro.TMP_InputField::m_IsStringPositionDirty
	bool ___m_IsStringPositionDirty_112;
	// System.Boolean TMPro.TMP_InputField::m_IsCaretPositionDirty
	bool ___m_IsCaretPositionDirty_113;
	// System.Boolean TMPro.TMP_InputField::m_forceRectTransformAdjustment
	bool ___m_forceRectTransformAdjustment_114;
	// UnityEngine.Event TMPro.TMP_InputField::m_ProcessingEvent
	Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___m_ProcessingEvent_115;

public:
	inline static int32_t get_offset_of_m_SoftKeyboard_20() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_SoftKeyboard_20)); }
	inline TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 * get_m_SoftKeyboard_20() const { return ___m_SoftKeyboard_20; }
	inline TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 ** get_address_of_m_SoftKeyboard_20() { return &___m_SoftKeyboard_20; }
	inline void set_m_SoftKeyboard_20(TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 * value)
	{
		___m_SoftKeyboard_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SoftKeyboard_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_RectTransform_22() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_RectTransform_22)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_22() const { return ___m_RectTransform_22; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_22() { return &___m_RectTransform_22; }
	inline void set_m_RectTransform_22(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextViewport_23() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_TextViewport_23)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_TextViewport_23() const { return ___m_TextViewport_23; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_TextViewport_23() { return &___m_TextViewport_23; }
	inline void set_m_TextViewport_23(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_TextViewport_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextViewport_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextComponentRectMask_24() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_TextComponentRectMask_24)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_TextComponentRectMask_24() const { return ___m_TextComponentRectMask_24; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_TextComponentRectMask_24() { return &___m_TextComponentRectMask_24; }
	inline void set_m_TextComponentRectMask_24(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_TextComponentRectMask_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponentRectMask_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextViewportRectMask_25() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_TextViewportRectMask_25)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_TextViewportRectMask_25() const { return ___m_TextViewportRectMask_25; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_TextViewportRectMask_25() { return &___m_TextViewportRectMask_25; }
	inline void set_m_TextViewportRectMask_25(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_TextViewportRectMask_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextViewportRectMask_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedViewportRect_26() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_CachedViewportRect_26)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_m_CachedViewportRect_26() const { return ___m_CachedViewportRect_26; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_m_CachedViewportRect_26() { return &___m_CachedViewportRect_26; }
	inline void set_m_CachedViewportRect_26(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___m_CachedViewportRect_26 = value;
	}

	inline static int32_t get_offset_of_m_TextComponent_27() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_TextComponent_27)); }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * get_m_TextComponent_27() const { return ___m_TextComponent_27; }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 ** get_address_of_m_TextComponent_27() { return &___m_TextComponent_27; }
	inline void set_m_TextComponent_27(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * value)
	{
		___m_TextComponent_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextComponentRectTransform_28() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_TextComponentRectTransform_28)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_TextComponentRectTransform_28() const { return ___m_TextComponentRectTransform_28; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_TextComponentRectTransform_28() { return &___m_TextComponentRectTransform_28; }
	inline void set_m_TextComponentRectTransform_28(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_TextComponentRectTransform_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponentRectTransform_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Placeholder_29() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_Placeholder_29)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_m_Placeholder_29() const { return ___m_Placeholder_29; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_m_Placeholder_29() { return &___m_Placeholder_29; }
	inline void set_m_Placeholder_29(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___m_Placeholder_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Placeholder_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalScrollbar_30() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_VerticalScrollbar_30)); }
	inline Scrollbar_t8F8679D0EAFACBCBD603E6B0E741E6A783DB3389 * get_m_VerticalScrollbar_30() const { return ___m_VerticalScrollbar_30; }
	inline Scrollbar_t8F8679D0EAFACBCBD603E6B0E741E6A783DB3389 ** get_address_of_m_VerticalScrollbar_30() { return &___m_VerticalScrollbar_30; }
	inline void set_m_VerticalScrollbar_30(Scrollbar_t8F8679D0EAFACBCBD603E6B0E741E6A783DB3389 * value)
	{
		___m_VerticalScrollbar_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalScrollbar_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarEventHandler_31() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_VerticalScrollbarEventHandler_31)); }
	inline TMP_ScrollbarEventHandler_t081C59DD8EC81899836C864E45E60977A40FBA83 * get_m_VerticalScrollbarEventHandler_31() const { return ___m_VerticalScrollbarEventHandler_31; }
	inline TMP_ScrollbarEventHandler_t081C59DD8EC81899836C864E45E60977A40FBA83 ** get_address_of_m_VerticalScrollbarEventHandler_31() { return &___m_VerticalScrollbarEventHandler_31; }
	inline void set_m_VerticalScrollbarEventHandler_31(TMP_ScrollbarEventHandler_t081C59DD8EC81899836C864E45E60977A40FBA83 * value)
	{
		___m_VerticalScrollbarEventHandler_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalScrollbarEventHandler_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsDrivenByLayoutComponents_32() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_IsDrivenByLayoutComponents_32)); }
	inline bool get_m_IsDrivenByLayoutComponents_32() const { return ___m_IsDrivenByLayoutComponents_32; }
	inline bool* get_address_of_m_IsDrivenByLayoutComponents_32() { return &___m_IsDrivenByLayoutComponents_32; }
	inline void set_m_IsDrivenByLayoutComponents_32(bool value)
	{
		___m_IsDrivenByLayoutComponents_32 = value;
	}

	inline static int32_t get_offset_of_m_LayoutGroup_33() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_LayoutGroup_33)); }
	inline LayoutGroup_t9E072B95DA6476C487C0B07A815291249025C0E4 * get_m_LayoutGroup_33() const { return ___m_LayoutGroup_33; }
	inline LayoutGroup_t9E072B95DA6476C487C0B07A815291249025C0E4 ** get_address_of_m_LayoutGroup_33() { return &___m_LayoutGroup_33; }
	inline void set_m_LayoutGroup_33(LayoutGroup_t9E072B95DA6476C487C0B07A815291249025C0E4 * value)
	{
		___m_LayoutGroup_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LayoutGroup_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScrollPosition_34() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_ScrollPosition_34)); }
	inline float get_m_ScrollPosition_34() const { return ___m_ScrollPosition_34; }
	inline float* get_address_of_m_ScrollPosition_34() { return &___m_ScrollPosition_34; }
	inline void set_m_ScrollPosition_34(float value)
	{
		___m_ScrollPosition_34 = value;
	}

	inline static int32_t get_offset_of_m_ScrollSensitivity_35() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_ScrollSensitivity_35)); }
	inline float get_m_ScrollSensitivity_35() const { return ___m_ScrollSensitivity_35; }
	inline float* get_address_of_m_ScrollSensitivity_35() { return &___m_ScrollSensitivity_35; }
	inline void set_m_ScrollSensitivity_35(float value)
	{
		___m_ScrollSensitivity_35 = value;
	}

	inline static int32_t get_offset_of_m_ContentType_36() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_ContentType_36)); }
	inline int32_t get_m_ContentType_36() const { return ___m_ContentType_36; }
	inline int32_t* get_address_of_m_ContentType_36() { return &___m_ContentType_36; }
	inline void set_m_ContentType_36(int32_t value)
	{
		___m_ContentType_36 = value;
	}

	inline static int32_t get_offset_of_m_InputType_37() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_InputType_37)); }
	inline int32_t get_m_InputType_37() const { return ___m_InputType_37; }
	inline int32_t* get_address_of_m_InputType_37() { return &___m_InputType_37; }
	inline void set_m_InputType_37(int32_t value)
	{
		___m_InputType_37 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_38() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_AsteriskChar_38)); }
	inline Il2CppChar get_m_AsteriskChar_38() const { return ___m_AsteriskChar_38; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_38() { return &___m_AsteriskChar_38; }
	inline void set_m_AsteriskChar_38(Il2CppChar value)
	{
		___m_AsteriskChar_38 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_39() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_KeyboardType_39)); }
	inline int32_t get_m_KeyboardType_39() const { return ___m_KeyboardType_39; }
	inline int32_t* get_address_of_m_KeyboardType_39() { return &___m_KeyboardType_39; }
	inline void set_m_KeyboardType_39(int32_t value)
	{
		___m_KeyboardType_39 = value;
	}

	inline static int32_t get_offset_of_m_LineType_40() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_LineType_40)); }
	inline int32_t get_m_LineType_40() const { return ___m_LineType_40; }
	inline int32_t* get_address_of_m_LineType_40() { return &___m_LineType_40; }
	inline void set_m_LineType_40(int32_t value)
	{
		___m_LineType_40 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_41() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_HideMobileInput_41)); }
	inline bool get_m_HideMobileInput_41() const { return ___m_HideMobileInput_41; }
	inline bool* get_address_of_m_HideMobileInput_41() { return &___m_HideMobileInput_41; }
	inline void set_m_HideMobileInput_41(bool value)
	{
		___m_HideMobileInput_41 = value;
	}

	inline static int32_t get_offset_of_m_HideSoftKeyboard_42() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_HideSoftKeyboard_42)); }
	inline bool get_m_HideSoftKeyboard_42() const { return ___m_HideSoftKeyboard_42; }
	inline bool* get_address_of_m_HideSoftKeyboard_42() { return &___m_HideSoftKeyboard_42; }
	inline void set_m_HideSoftKeyboard_42(bool value)
	{
		___m_HideSoftKeyboard_42 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_43() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_CharacterValidation_43)); }
	inline int32_t get_m_CharacterValidation_43() const { return ___m_CharacterValidation_43; }
	inline int32_t* get_address_of_m_CharacterValidation_43() { return &___m_CharacterValidation_43; }
	inline void set_m_CharacterValidation_43(int32_t value)
	{
		___m_CharacterValidation_43 = value;
	}

	inline static int32_t get_offset_of_m_RegexValue_44() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_RegexValue_44)); }
	inline String_t* get_m_RegexValue_44() const { return ___m_RegexValue_44; }
	inline String_t** get_address_of_m_RegexValue_44() { return &___m_RegexValue_44; }
	inline void set_m_RegexValue_44(String_t* value)
	{
		___m_RegexValue_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RegexValue_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_GlobalPointSize_45() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_GlobalPointSize_45)); }
	inline float get_m_GlobalPointSize_45() const { return ___m_GlobalPointSize_45; }
	inline float* get_address_of_m_GlobalPointSize_45() { return &___m_GlobalPointSize_45; }
	inline void set_m_GlobalPointSize_45(float value)
	{
		___m_GlobalPointSize_45 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_46() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_CharacterLimit_46)); }
	inline int32_t get_m_CharacterLimit_46() const { return ___m_CharacterLimit_46; }
	inline int32_t* get_address_of_m_CharacterLimit_46() { return &___m_CharacterLimit_46; }
	inline void set_m_CharacterLimit_46(int32_t value)
	{
		___m_CharacterLimit_46 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_47() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_OnEndEdit_47)); }
	inline SubmitEvent_tD1BC174A4FE2411600541703750F0F03E991A9BC * get_m_OnEndEdit_47() const { return ___m_OnEndEdit_47; }
	inline SubmitEvent_tD1BC174A4FE2411600541703750F0F03E991A9BC ** get_address_of_m_OnEndEdit_47() { return &___m_OnEndEdit_47; }
	inline void set_m_OnEndEdit_47(SubmitEvent_tD1BC174A4FE2411600541703750F0F03E991A9BC * value)
	{
		___m_OnEndEdit_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEndEdit_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnSubmit_48() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_OnSubmit_48)); }
	inline SubmitEvent_tD1BC174A4FE2411600541703750F0F03E991A9BC * get_m_OnSubmit_48() const { return ___m_OnSubmit_48; }
	inline SubmitEvent_tD1BC174A4FE2411600541703750F0F03E991A9BC ** get_address_of_m_OnSubmit_48() { return &___m_OnSubmit_48; }
	inline void set_m_OnSubmit_48(SubmitEvent_tD1BC174A4FE2411600541703750F0F03E991A9BC * value)
	{
		___m_OnSubmit_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnSubmit_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnSelect_49() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_OnSelect_49)); }
	inline SelectionEvent_t346DD0E470654B452107A056EDE13F796AEAFD3A * get_m_OnSelect_49() const { return ___m_OnSelect_49; }
	inline SelectionEvent_t346DD0E470654B452107A056EDE13F796AEAFD3A ** get_address_of_m_OnSelect_49() { return &___m_OnSelect_49; }
	inline void set_m_OnSelect_49(SelectionEvent_t346DD0E470654B452107A056EDE13F796AEAFD3A * value)
	{
		___m_OnSelect_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnSelect_49), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDeselect_50() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_OnDeselect_50)); }
	inline SelectionEvent_t346DD0E470654B452107A056EDE13F796AEAFD3A * get_m_OnDeselect_50() const { return ___m_OnDeselect_50; }
	inline SelectionEvent_t346DD0E470654B452107A056EDE13F796AEAFD3A ** get_address_of_m_OnDeselect_50() { return &___m_OnDeselect_50; }
	inline void set_m_OnDeselect_50(SelectionEvent_t346DD0E470654B452107A056EDE13F796AEAFD3A * value)
	{
		___m_OnDeselect_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDeselect_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnTextSelection_51() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_OnTextSelection_51)); }
	inline TextSelectionEvent_tD42FAD7CC0AA2E613884FC6E86A11EE59CDA3854 * get_m_OnTextSelection_51() const { return ___m_OnTextSelection_51; }
	inline TextSelectionEvent_tD42FAD7CC0AA2E613884FC6E86A11EE59CDA3854 ** get_address_of_m_OnTextSelection_51() { return &___m_OnTextSelection_51; }
	inline void set_m_OnTextSelection_51(TextSelectionEvent_tD42FAD7CC0AA2E613884FC6E86A11EE59CDA3854 * value)
	{
		___m_OnTextSelection_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnTextSelection_51), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnEndTextSelection_52() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_OnEndTextSelection_52)); }
	inline TextSelectionEvent_tD42FAD7CC0AA2E613884FC6E86A11EE59CDA3854 * get_m_OnEndTextSelection_52() const { return ___m_OnEndTextSelection_52; }
	inline TextSelectionEvent_tD42FAD7CC0AA2E613884FC6E86A11EE59CDA3854 ** get_address_of_m_OnEndTextSelection_52() { return &___m_OnEndTextSelection_52; }
	inline void set_m_OnEndTextSelection_52(TextSelectionEvent_tD42FAD7CC0AA2E613884FC6E86A11EE59CDA3854 * value)
	{
		___m_OnEndTextSelection_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEndTextSelection_52), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_53() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_OnValueChanged_53)); }
	inline OnChangeEvent_t1610FEF044826EE0837528C1E90FCDFC45B3D7AD * get_m_OnValueChanged_53() const { return ___m_OnValueChanged_53; }
	inline OnChangeEvent_t1610FEF044826EE0837528C1E90FCDFC45B3D7AD ** get_address_of_m_OnValueChanged_53() { return &___m_OnValueChanged_53; }
	inline void set_m_OnValueChanged_53(OnChangeEvent_t1610FEF044826EE0837528C1E90FCDFC45B3D7AD * value)
	{
		___m_OnValueChanged_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_53), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnTouchScreenKeyboardStatusChanged_54() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_OnTouchScreenKeyboardStatusChanged_54)); }
	inline TouchScreenKeyboardEvent_tF41EB6E5E2B26213D1C0CE6573498CA6ACB3CA1F * get_m_OnTouchScreenKeyboardStatusChanged_54() const { return ___m_OnTouchScreenKeyboardStatusChanged_54; }
	inline TouchScreenKeyboardEvent_tF41EB6E5E2B26213D1C0CE6573498CA6ACB3CA1F ** get_address_of_m_OnTouchScreenKeyboardStatusChanged_54() { return &___m_OnTouchScreenKeyboardStatusChanged_54; }
	inline void set_m_OnTouchScreenKeyboardStatusChanged_54(TouchScreenKeyboardEvent_tF41EB6E5E2B26213D1C0CE6573498CA6ACB3CA1F * value)
	{
		___m_OnTouchScreenKeyboardStatusChanged_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnTouchScreenKeyboardStatusChanged_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_55() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_OnValidateInput_55)); }
	inline OnValidateInput_t47FA5831345A245F5C6FD9C0E4F5CE43430C1863 * get_m_OnValidateInput_55() const { return ___m_OnValidateInput_55; }
	inline OnValidateInput_t47FA5831345A245F5C6FD9C0E4F5CE43430C1863 ** get_address_of_m_OnValidateInput_55() { return &___m_OnValidateInput_55; }
	inline void set_m_OnValidateInput_55(OnValidateInput_t47FA5831345A245F5C6FD9C0E4F5CE43430C1863 * value)
	{
		___m_OnValidateInput_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValidateInput_55), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretColor_56() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_CaretColor_56)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_CaretColor_56() const { return ___m_CaretColor_56; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_CaretColor_56() { return &___m_CaretColor_56; }
	inline void set_m_CaretColor_56(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_CaretColor_56 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_57() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_CustomCaretColor_57)); }
	inline bool get_m_CustomCaretColor_57() const { return ___m_CustomCaretColor_57; }
	inline bool* get_address_of_m_CustomCaretColor_57() { return &___m_CustomCaretColor_57; }
	inline void set_m_CustomCaretColor_57(bool value)
	{
		___m_CustomCaretColor_57 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_58() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_SelectionColor_58)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_SelectionColor_58() const { return ___m_SelectionColor_58; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_SelectionColor_58() { return &___m_SelectionColor_58; }
	inline void set_m_SelectionColor_58(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_SelectionColor_58 = value;
	}

	inline static int32_t get_offset_of_m_Text_59() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_Text_59)); }
	inline String_t* get_m_Text_59() const { return ___m_Text_59; }
	inline String_t** get_address_of_m_Text_59() { return &___m_Text_59; }
	inline void set_m_Text_59(String_t* value)
	{
		___m_Text_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_59), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_60() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_CaretBlinkRate_60)); }
	inline float get_m_CaretBlinkRate_60() const { return ___m_CaretBlinkRate_60; }
	inline float* get_address_of_m_CaretBlinkRate_60() { return &___m_CaretBlinkRate_60; }
	inline void set_m_CaretBlinkRate_60(float value)
	{
		___m_CaretBlinkRate_60 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_61() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_CaretWidth_61)); }
	inline int32_t get_m_CaretWidth_61() const { return ___m_CaretWidth_61; }
	inline int32_t* get_address_of_m_CaretWidth_61() { return &___m_CaretWidth_61; }
	inline void set_m_CaretWidth_61(int32_t value)
	{
		___m_CaretWidth_61 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_62() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_ReadOnly_62)); }
	inline bool get_m_ReadOnly_62() const { return ___m_ReadOnly_62; }
	inline bool* get_address_of_m_ReadOnly_62() { return &___m_ReadOnly_62; }
	inline void set_m_ReadOnly_62(bool value)
	{
		___m_ReadOnly_62 = value;
	}

	inline static int32_t get_offset_of_m_RichText_63() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_RichText_63)); }
	inline bool get_m_RichText_63() const { return ___m_RichText_63; }
	inline bool* get_address_of_m_RichText_63() { return &___m_RichText_63; }
	inline void set_m_RichText_63(bool value)
	{
		___m_RichText_63 = value;
	}

	inline static int32_t get_offset_of_m_StringPosition_64() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_StringPosition_64)); }
	inline int32_t get_m_StringPosition_64() const { return ___m_StringPosition_64; }
	inline int32_t* get_address_of_m_StringPosition_64() { return &___m_StringPosition_64; }
	inline void set_m_StringPosition_64(int32_t value)
	{
		___m_StringPosition_64 = value;
	}

	inline static int32_t get_offset_of_m_StringSelectPosition_65() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_StringSelectPosition_65)); }
	inline int32_t get_m_StringSelectPosition_65() const { return ___m_StringSelectPosition_65; }
	inline int32_t* get_address_of_m_StringSelectPosition_65() { return &___m_StringSelectPosition_65; }
	inline void set_m_StringSelectPosition_65(int32_t value)
	{
		___m_StringSelectPosition_65 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_66() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_CaretPosition_66)); }
	inline int32_t get_m_CaretPosition_66() const { return ___m_CaretPosition_66; }
	inline int32_t* get_address_of_m_CaretPosition_66() { return &___m_CaretPosition_66; }
	inline void set_m_CaretPosition_66(int32_t value)
	{
		___m_CaretPosition_66 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_67() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_CaretSelectPosition_67)); }
	inline int32_t get_m_CaretSelectPosition_67() const { return ___m_CaretSelectPosition_67; }
	inline int32_t* get_address_of_m_CaretSelectPosition_67() { return &___m_CaretSelectPosition_67; }
	inline void set_m_CaretSelectPosition_67(int32_t value)
	{
		___m_CaretSelectPosition_67 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_68() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___caretRectTrans_68)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_caretRectTrans_68() const { return ___caretRectTrans_68; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_caretRectTrans_68() { return &___caretRectTrans_68; }
	inline void set_caretRectTrans_68(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___caretRectTrans_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caretRectTrans_68), (void*)value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_69() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_CursorVerts_69)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_CursorVerts_69() const { return ___m_CursorVerts_69; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_CursorVerts_69() { return &___m_CursorVerts_69; }
	inline void set_m_CursorVerts_69(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_CursorVerts_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CursorVerts_69), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_70() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_CachedInputRenderer_70)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CachedInputRenderer_70() const { return ___m_CachedInputRenderer_70; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CachedInputRenderer_70() { return &___m_CachedInputRenderer_70; }
	inline void set_m_CachedInputRenderer_70(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CachedInputRenderer_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedInputRenderer_70), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastPosition_71() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_LastPosition_71)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_LastPosition_71() const { return ___m_LastPosition_71; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_LastPosition_71() { return &___m_LastPosition_71; }
	inline void set_m_LastPosition_71(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_LastPosition_71 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_72() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_Mesh_72)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_Mesh_72() const { return ___m_Mesh_72; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_Mesh_72() { return &___m_Mesh_72; }
	inline void set_m_Mesh_72(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_Mesh_72 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mesh_72), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllowInput_73() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_AllowInput_73)); }
	inline bool get_m_AllowInput_73() const { return ___m_AllowInput_73; }
	inline bool* get_address_of_m_AllowInput_73() { return &___m_AllowInput_73; }
	inline void set_m_AllowInput_73(bool value)
	{
		___m_AllowInput_73 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_74() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_ShouldActivateNextUpdate_74)); }
	inline bool get_m_ShouldActivateNextUpdate_74() const { return ___m_ShouldActivateNextUpdate_74; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_74() { return &___m_ShouldActivateNextUpdate_74; }
	inline void set_m_ShouldActivateNextUpdate_74(bool value)
	{
		___m_ShouldActivateNextUpdate_74 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_75() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_UpdateDrag_75)); }
	inline bool get_m_UpdateDrag_75() const { return ___m_UpdateDrag_75; }
	inline bool* get_address_of_m_UpdateDrag_75() { return &___m_UpdateDrag_75; }
	inline void set_m_UpdateDrag_75(bool value)
	{
		___m_UpdateDrag_75 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_76() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_DragPositionOutOfBounds_76)); }
	inline bool get_m_DragPositionOutOfBounds_76() const { return ___m_DragPositionOutOfBounds_76; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_76() { return &___m_DragPositionOutOfBounds_76; }
	inline void set_m_DragPositionOutOfBounds_76(bool value)
	{
		___m_DragPositionOutOfBounds_76 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_79() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_CaretVisible_79)); }
	inline bool get_m_CaretVisible_79() const { return ___m_CaretVisible_79; }
	inline bool* get_address_of_m_CaretVisible_79() { return &___m_CaretVisible_79; }
	inline void set_m_CaretVisible_79(bool value)
	{
		___m_CaretVisible_79 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_80() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_BlinkCoroutine_80)); }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * get_m_BlinkCoroutine_80() const { return ___m_BlinkCoroutine_80; }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC ** get_address_of_m_BlinkCoroutine_80() { return &___m_BlinkCoroutine_80; }
	inline void set_m_BlinkCoroutine_80(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * value)
	{
		___m_BlinkCoroutine_80 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlinkCoroutine_80), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_81() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_BlinkStartTime_81)); }
	inline float get_m_BlinkStartTime_81() const { return ___m_BlinkStartTime_81; }
	inline float* get_address_of_m_BlinkStartTime_81() { return &___m_BlinkStartTime_81; }
	inline void set_m_BlinkStartTime_81(float value)
	{
		___m_BlinkStartTime_81 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_82() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_DragCoroutine_82)); }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * get_m_DragCoroutine_82() const { return ___m_DragCoroutine_82; }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC ** get_address_of_m_DragCoroutine_82() { return &___m_DragCoroutine_82; }
	inline void set_m_DragCoroutine_82(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * value)
	{
		___m_DragCoroutine_82 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DragCoroutine_82), (void*)value);
	}

	inline static int32_t get_offset_of_m_OriginalText_83() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_OriginalText_83)); }
	inline String_t* get_m_OriginalText_83() const { return ___m_OriginalText_83; }
	inline String_t** get_address_of_m_OriginalText_83() { return &___m_OriginalText_83; }
	inline void set_m_OriginalText_83(String_t* value)
	{
		___m_OriginalText_83 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OriginalText_83), (void*)value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_84() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_WasCanceled_84)); }
	inline bool get_m_WasCanceled_84() const { return ___m_WasCanceled_84; }
	inline bool* get_address_of_m_WasCanceled_84() { return &___m_WasCanceled_84; }
	inline void set_m_WasCanceled_84(bool value)
	{
		___m_WasCanceled_84 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_85() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_HasDoneFocusTransition_85)); }
	inline bool get_m_HasDoneFocusTransition_85() const { return ___m_HasDoneFocusTransition_85; }
	inline bool* get_address_of_m_HasDoneFocusTransition_85() { return &___m_HasDoneFocusTransition_85; }
	inline void set_m_HasDoneFocusTransition_85(bool value)
	{
		___m_HasDoneFocusTransition_85 = value;
	}

	inline static int32_t get_offset_of_m_WaitForSecondsRealtime_86() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_WaitForSecondsRealtime_86)); }
	inline WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * get_m_WaitForSecondsRealtime_86() const { return ___m_WaitForSecondsRealtime_86; }
	inline WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 ** get_address_of_m_WaitForSecondsRealtime_86() { return &___m_WaitForSecondsRealtime_86; }
	inline void set_m_WaitForSecondsRealtime_86(WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * value)
	{
		___m_WaitForSecondsRealtime_86 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitForSecondsRealtime_86), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreventCallback_87() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_PreventCallback_87)); }
	inline bool get_m_PreventCallback_87() const { return ___m_PreventCallback_87; }
	inline bool* get_address_of_m_PreventCallback_87() { return &___m_PreventCallback_87; }
	inline void set_m_PreventCallback_87(bool value)
	{
		___m_PreventCallback_87 = value;
	}

	inline static int32_t get_offset_of_m_TouchKeyboardAllowsInPlaceEditing_88() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_TouchKeyboardAllowsInPlaceEditing_88)); }
	inline bool get_m_TouchKeyboardAllowsInPlaceEditing_88() const { return ___m_TouchKeyboardAllowsInPlaceEditing_88; }
	inline bool* get_address_of_m_TouchKeyboardAllowsInPlaceEditing_88() { return &___m_TouchKeyboardAllowsInPlaceEditing_88; }
	inline void set_m_TouchKeyboardAllowsInPlaceEditing_88(bool value)
	{
		___m_TouchKeyboardAllowsInPlaceEditing_88 = value;
	}

	inline static int32_t get_offset_of_m_IsTextComponentUpdateRequired_89() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_IsTextComponentUpdateRequired_89)); }
	inline bool get_m_IsTextComponentUpdateRequired_89() const { return ___m_IsTextComponentUpdateRequired_89; }
	inline bool* get_address_of_m_IsTextComponentUpdateRequired_89() { return &___m_IsTextComponentUpdateRequired_89; }
	inline void set_m_IsTextComponentUpdateRequired_89(bool value)
	{
		___m_IsTextComponentUpdateRequired_89 = value;
	}

	inline static int32_t get_offset_of_m_IsScrollbarUpdateRequired_90() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_IsScrollbarUpdateRequired_90)); }
	inline bool get_m_IsScrollbarUpdateRequired_90() const { return ___m_IsScrollbarUpdateRequired_90; }
	inline bool* get_address_of_m_IsScrollbarUpdateRequired_90() { return &___m_IsScrollbarUpdateRequired_90; }
	inline void set_m_IsScrollbarUpdateRequired_90(bool value)
	{
		___m_IsScrollbarUpdateRequired_90 = value;
	}

	inline static int32_t get_offset_of_m_IsUpdatingScrollbarValues_91() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_IsUpdatingScrollbarValues_91)); }
	inline bool get_m_IsUpdatingScrollbarValues_91() const { return ___m_IsUpdatingScrollbarValues_91; }
	inline bool* get_address_of_m_IsUpdatingScrollbarValues_91() { return &___m_IsUpdatingScrollbarValues_91; }
	inline void set_m_IsUpdatingScrollbarValues_91(bool value)
	{
		___m_IsUpdatingScrollbarValues_91 = value;
	}

	inline static int32_t get_offset_of_m_isLastKeyBackspace_92() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_isLastKeyBackspace_92)); }
	inline bool get_m_isLastKeyBackspace_92() const { return ___m_isLastKeyBackspace_92; }
	inline bool* get_address_of_m_isLastKeyBackspace_92() { return &___m_isLastKeyBackspace_92; }
	inline void set_m_isLastKeyBackspace_92(bool value)
	{
		___m_isLastKeyBackspace_92 = value;
	}

	inline static int32_t get_offset_of_m_PointerDownClickStartTime_93() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_PointerDownClickStartTime_93)); }
	inline float get_m_PointerDownClickStartTime_93() const { return ___m_PointerDownClickStartTime_93; }
	inline float* get_address_of_m_PointerDownClickStartTime_93() { return &___m_PointerDownClickStartTime_93; }
	inline void set_m_PointerDownClickStartTime_93(float value)
	{
		___m_PointerDownClickStartTime_93 = value;
	}

	inline static int32_t get_offset_of_m_KeyDownStartTime_94() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_KeyDownStartTime_94)); }
	inline float get_m_KeyDownStartTime_94() const { return ___m_KeyDownStartTime_94; }
	inline float* get_address_of_m_KeyDownStartTime_94() { return &___m_KeyDownStartTime_94; }
	inline void set_m_KeyDownStartTime_94(float value)
	{
		___m_KeyDownStartTime_94 = value;
	}

	inline static int32_t get_offset_of_m_DoubleClickDelay_95() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_DoubleClickDelay_95)); }
	inline float get_m_DoubleClickDelay_95() const { return ___m_DoubleClickDelay_95; }
	inline float* get_address_of_m_DoubleClickDelay_95() { return &___m_DoubleClickDelay_95; }
	inline void set_m_DoubleClickDelay_95(float value)
	{
		___m_DoubleClickDelay_95 = value;
	}

	inline static int32_t get_offset_of_m_IsCompositionActive_97() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_IsCompositionActive_97)); }
	inline bool get_m_IsCompositionActive_97() const { return ___m_IsCompositionActive_97; }
	inline bool* get_address_of_m_IsCompositionActive_97() { return &___m_IsCompositionActive_97; }
	inline void set_m_IsCompositionActive_97(bool value)
	{
		___m_IsCompositionActive_97 = value;
	}

	inline static int32_t get_offset_of_m_ShouldUpdateIMEWindowPosition_98() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_ShouldUpdateIMEWindowPosition_98)); }
	inline bool get_m_ShouldUpdateIMEWindowPosition_98() const { return ___m_ShouldUpdateIMEWindowPosition_98; }
	inline bool* get_address_of_m_ShouldUpdateIMEWindowPosition_98() { return &___m_ShouldUpdateIMEWindowPosition_98; }
	inline void set_m_ShouldUpdateIMEWindowPosition_98(bool value)
	{
		___m_ShouldUpdateIMEWindowPosition_98 = value;
	}

	inline static int32_t get_offset_of_m_PreviousIMEInsertionLine_99() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_PreviousIMEInsertionLine_99)); }
	inline int32_t get_m_PreviousIMEInsertionLine_99() const { return ___m_PreviousIMEInsertionLine_99; }
	inline int32_t* get_address_of_m_PreviousIMEInsertionLine_99() { return &___m_PreviousIMEInsertionLine_99; }
	inline void set_m_PreviousIMEInsertionLine_99(int32_t value)
	{
		___m_PreviousIMEInsertionLine_99 = value;
	}

	inline static int32_t get_offset_of_m_GlobalFontAsset_100() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_GlobalFontAsset_100)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_m_GlobalFontAsset_100() const { return ___m_GlobalFontAsset_100; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_m_GlobalFontAsset_100() { return &___m_GlobalFontAsset_100; }
	inline void set_m_GlobalFontAsset_100(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___m_GlobalFontAsset_100 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GlobalFontAsset_100), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFocusSelectAll_101() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_OnFocusSelectAll_101)); }
	inline bool get_m_OnFocusSelectAll_101() const { return ___m_OnFocusSelectAll_101; }
	inline bool* get_address_of_m_OnFocusSelectAll_101() { return &___m_OnFocusSelectAll_101; }
	inline void set_m_OnFocusSelectAll_101(bool value)
	{
		___m_OnFocusSelectAll_101 = value;
	}

	inline static int32_t get_offset_of_m_isSelectAll_102() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_isSelectAll_102)); }
	inline bool get_m_isSelectAll_102() const { return ___m_isSelectAll_102; }
	inline bool* get_address_of_m_isSelectAll_102() { return &___m_isSelectAll_102; }
	inline void set_m_isSelectAll_102(bool value)
	{
		___m_isSelectAll_102 = value;
	}

	inline static int32_t get_offset_of_m_ResetOnDeActivation_103() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_ResetOnDeActivation_103)); }
	inline bool get_m_ResetOnDeActivation_103() const { return ___m_ResetOnDeActivation_103; }
	inline bool* get_address_of_m_ResetOnDeActivation_103() { return &___m_ResetOnDeActivation_103; }
	inline void set_m_ResetOnDeActivation_103(bool value)
	{
		___m_ResetOnDeActivation_103 = value;
	}

	inline static int32_t get_offset_of_m_SelectionStillActive_104() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_SelectionStillActive_104)); }
	inline bool get_m_SelectionStillActive_104() const { return ___m_SelectionStillActive_104; }
	inline bool* get_address_of_m_SelectionStillActive_104() { return &___m_SelectionStillActive_104; }
	inline void set_m_SelectionStillActive_104(bool value)
	{
		___m_SelectionStillActive_104 = value;
	}

	inline static int32_t get_offset_of_m_ReleaseSelection_105() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_ReleaseSelection_105)); }
	inline bool get_m_ReleaseSelection_105() const { return ___m_ReleaseSelection_105; }
	inline bool* get_address_of_m_ReleaseSelection_105() { return &___m_ReleaseSelection_105; }
	inline void set_m_ReleaseSelection_105(bool value)
	{
		___m_ReleaseSelection_105 = value;
	}

	inline static int32_t get_offset_of_m_PreviouslySelectedObject_106() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_PreviouslySelectedObject_106)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_PreviouslySelectedObject_106() const { return ___m_PreviouslySelectedObject_106; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_PreviouslySelectedObject_106() { return &___m_PreviouslySelectedObject_106; }
	inline void set_m_PreviouslySelectedObject_106(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_PreviouslySelectedObject_106 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PreviouslySelectedObject_106), (void*)value);
	}

	inline static int32_t get_offset_of_m_RestoreOriginalTextOnEscape_107() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_RestoreOriginalTextOnEscape_107)); }
	inline bool get_m_RestoreOriginalTextOnEscape_107() const { return ___m_RestoreOriginalTextOnEscape_107; }
	inline bool* get_address_of_m_RestoreOriginalTextOnEscape_107() { return &___m_RestoreOriginalTextOnEscape_107; }
	inline void set_m_RestoreOriginalTextOnEscape_107(bool value)
	{
		___m_RestoreOriginalTextOnEscape_107 = value;
	}

	inline static int32_t get_offset_of_m_isRichTextEditingAllowed_108() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_isRichTextEditingAllowed_108)); }
	inline bool get_m_isRichTextEditingAllowed_108() const { return ___m_isRichTextEditingAllowed_108; }
	inline bool* get_address_of_m_isRichTextEditingAllowed_108() { return &___m_isRichTextEditingAllowed_108; }
	inline void set_m_isRichTextEditingAllowed_108(bool value)
	{
		___m_isRichTextEditingAllowed_108 = value;
	}

	inline static int32_t get_offset_of_m_LineLimit_109() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_LineLimit_109)); }
	inline int32_t get_m_LineLimit_109() const { return ___m_LineLimit_109; }
	inline int32_t* get_address_of_m_LineLimit_109() { return &___m_LineLimit_109; }
	inline void set_m_LineLimit_109(int32_t value)
	{
		___m_LineLimit_109 = value;
	}

	inline static int32_t get_offset_of_m_InputValidator_110() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_InputValidator_110)); }
	inline TMP_InputValidator_t4C673E12211AFB82AAF94D9DEA556FDC306E69CD * get_m_InputValidator_110() const { return ___m_InputValidator_110; }
	inline TMP_InputValidator_t4C673E12211AFB82AAF94D9DEA556FDC306E69CD ** get_address_of_m_InputValidator_110() { return &___m_InputValidator_110; }
	inline void set_m_InputValidator_110(TMP_InputValidator_t4C673E12211AFB82AAF94D9DEA556FDC306E69CD * value)
	{
		___m_InputValidator_110 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputValidator_110), (void*)value);
	}

	inline static int32_t get_offset_of_m_isSelected_111() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_isSelected_111)); }
	inline bool get_m_isSelected_111() const { return ___m_isSelected_111; }
	inline bool* get_address_of_m_isSelected_111() { return &___m_isSelected_111; }
	inline void set_m_isSelected_111(bool value)
	{
		___m_isSelected_111 = value;
	}

	inline static int32_t get_offset_of_m_IsStringPositionDirty_112() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_IsStringPositionDirty_112)); }
	inline bool get_m_IsStringPositionDirty_112() const { return ___m_IsStringPositionDirty_112; }
	inline bool* get_address_of_m_IsStringPositionDirty_112() { return &___m_IsStringPositionDirty_112; }
	inline void set_m_IsStringPositionDirty_112(bool value)
	{
		___m_IsStringPositionDirty_112 = value;
	}

	inline static int32_t get_offset_of_m_IsCaretPositionDirty_113() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_IsCaretPositionDirty_113)); }
	inline bool get_m_IsCaretPositionDirty_113() const { return ___m_IsCaretPositionDirty_113; }
	inline bool* get_address_of_m_IsCaretPositionDirty_113() { return &___m_IsCaretPositionDirty_113; }
	inline void set_m_IsCaretPositionDirty_113(bool value)
	{
		___m_IsCaretPositionDirty_113 = value;
	}

	inline static int32_t get_offset_of_m_forceRectTransformAdjustment_114() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_forceRectTransformAdjustment_114)); }
	inline bool get_m_forceRectTransformAdjustment_114() const { return ___m_forceRectTransformAdjustment_114; }
	inline bool* get_address_of_m_forceRectTransformAdjustment_114() { return &___m_forceRectTransformAdjustment_114; }
	inline void set_m_forceRectTransformAdjustment_114(bool value)
	{
		___m_forceRectTransformAdjustment_114 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_115() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB, ___m_ProcessingEvent_115)); }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * get_m_ProcessingEvent_115() const { return ___m_ProcessingEvent_115; }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 ** get_address_of_m_ProcessingEvent_115() { return &___m_ProcessingEvent_115; }
	inline void set_m_ProcessingEvent_115(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * value)
	{
		___m_ProcessingEvent_115 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProcessingEvent_115), (void*)value);
	}
};

struct TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB_StaticFields
{
public:
	// System.Char[] TMPro.TMP_InputField::kSeparators
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___kSeparators_21;

public:
	inline static int32_t get_offset_of_kSeparators_21() { return static_cast<int32_t>(offsetof(TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB_StaticFields, ___kSeparators_21)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_kSeparators_21() const { return ___kSeparators_21; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_kSeparators_21() { return &___kSeparators_21; }
	inline void set_kSeparators_21(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___kSeparators_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kSeparators_21), (void*)value);
	}
};


// UnityEngine.UI.Button
struct  Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.UI.Button_ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B, ___m_OnClick_20)); }
	inline ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_30;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_32;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_33;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_34;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IsMaskingGraphic_29)); }
	inline bool get_m_IsMaskingGraphic_29() const { return ___m_IsMaskingGraphic_29; }
	inline bool* get_address_of_m_IsMaskingGraphic_29() { return &___m_IsMaskingGraphic_29; }
	inline void set_m_IsMaskingGraphic_29(bool value)
	{
		___m_IsMaskingGraphic_29 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_30)); }
	inline bool get_m_IncludeForMasking_30() const { return ___m_IncludeForMasking_30; }
	inline bool* get_address_of_m_IncludeForMasking_30() { return &___m_IncludeForMasking_30; }
	inline void set_m_IncludeForMasking_30(bool value)
	{
		___m_IncludeForMasking_30 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_31)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_31() const { return ___m_OnCullStateChanged_31; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_31() { return &___m_OnCullStateChanged_31; }
	inline void set_m_OnCullStateChanged_31(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_32)); }
	inline bool get_m_ShouldRecalculate_32() const { return ___m_ShouldRecalculate_32; }
	inline bool* get_address_of_m_ShouldRecalculate_32() { return &___m_ShouldRecalculate_32; }
	inline void set_m_ShouldRecalculate_32(bool value)
	{
		___m_ShouldRecalculate_32 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_33)); }
	inline int32_t get_m_StencilValue_33() const { return ___m_StencilValue_33; }
	inline int32_t* get_address_of_m_StencilValue_33() { return &___m_StencilValue_33; }
	inline void set_m_StencilValue_33(int32_t value)
	{
		___m_StencilValue_33 = value;
	}

	inline static int32_t get_offset_of_m_Corners_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_34)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_34() const { return ___m_Corners_34; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_34() { return &___m_Corners_34; }
	inline void set_m_Corners_34(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_34), (void*)value);
	}
};


// TMPro.TMP_Text
struct  TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_35;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_36;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_37;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___m_fontAsset_38;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___m_currentFontAsset_39;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_40;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_sharedMaterial_41;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_currentMaterial_42;
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* ___m_materialReferences_43;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F * ___m_materialReferenceIndexLookup_44;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  ___m_materialReferenceStack_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_46;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* ___m_fontSharedMaterials_47;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_fontMaterial_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* ___m_fontMaterials_49;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_50;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_fontColor32_51;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_fontColor_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_underlineColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_strikethroughColor_55;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_56;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_57;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A  ___m_fontColorGradient_58;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * ___m_fontColorGradientPreset_59;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___m_spriteAsset_60;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_61;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_62;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_spriteColor_63;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_tC6C45E5B0EC8EF4BA7BB147712516656B0D26C04 * ___m_StyleSheet_64;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_t9FD01084B9E3F1D4B92E87114C454C98BA20FBAD * ___m_TextStyle_65;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_66;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_67;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_faceColor_68;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_outlineColor_69;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_70;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_71;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_72;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_73;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___m_sizeStack_74;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_75;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_76;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  ___m_FontWeightStack_77;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_78;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_79;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_80;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_81;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_82;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_83;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_84;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_85;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_86;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_87;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___m_fontStyleStack_88;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_89;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_90;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_91;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_93;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  ___m_lineJustificationStack_94;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_textContainerLocalCorners_95;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_96;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_97;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_98;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_99;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_100;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_101;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_102;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_104;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_105;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_106;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_107;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_108;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_109;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_110;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_111;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_112;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_113;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_114;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___m_linkedTextComponent_115;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___parentLinkedComponent_116;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_117;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_118;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_119;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_120;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_121;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_122;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_123;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_124;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_125;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_126;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_127;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_128;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_129;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_130;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_131;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_132;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_133;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_134;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_135;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_136;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_137;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_138;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_140;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_141;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_142;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_143;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___m_margin_144;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_145;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_146;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_147;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_148;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_149;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___m_textInfo_150;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_151;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_152;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_transform_153;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_rectTransform_154;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_PreviousRectTransformSize_155;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_PreviousPivotPosition_156;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_157;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_158;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_mesh_159;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_160;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD * ___OnPreRenderText_163;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 * ___m_spriteAnimator_164;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_165;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_166;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_167;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_168;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_169;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_170;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B * ___m_LayoutElement_171;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_172;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_173;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_174;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_175;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_177;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_178;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_179;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_181;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_182;
	// System.Boolean TMPro.TMP_Text::m_isInputParsingRequired
	bool ___m_isInputParsingRequired_183;
	// TMPro.TMP_Text_TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_184;
	// System.Single TMPro.TMP_Text::m_fontScale
	float ___m_fontScale_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___m_attributeParameterValues_189;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text_UnicodeChar[] TMPro.TMP_Text::m_InternalParsingBuffer
	UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505* ___m_InternalParsingBuffer_197;
	// System.Int32 TMPro.TMP_Text::m_InternalParsingBufferSize
	int32_t ___m_InternalParsingBufferSize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* ___m_internalCharacterInfo_199;
	// System.Char[] TMPro.TMP_Text::m_input_CharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_input_CharArray_200;
	// System.Int32 TMPro.TMP_Text::m_charArray_Length
	int32_t ___m_charArray_Length_201;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedWordWrapState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedLineState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedEllipsisState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedLastValidState_206;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedSoftLineBreakState_207;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E  ___m_EllipsisInsertionCandidateStack_208;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_209;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_213;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_214;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_215;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_216;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_217;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_218;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_219;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_220;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_221;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_222;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_224;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_225;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_226;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___m_meshExtents_227;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_htmlColor_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___m_colorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___m_underlineColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___m_strikethroughColorStack_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  ___m_HighlightStateStack_232;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * ___m_colorGradientPreset_233;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  ___m_colorGradientStack_234;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_235;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_236;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_tD40BE2C9C48281D1F72B04DDB85CBF15B89FCA29* ___m_TextStyleStacks_238;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___m_ItalicAngleStack_240;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_241;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___m_actionStack_242;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_243;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_244;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___m_baselineOffsetStack_245;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_246;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_247;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * ___m_cached_TextElement_248;
	// TMPro.TMP_Text_SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF  ___m_Ellipsis_249;
	// TMPro.TMP_Text_SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF  ___m_Underline_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___m_defaultSpriteAsset_251;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___m_currentSpriteAsset_252;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_253;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_254;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_255;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F* ___k_Power_257;

public:
	inline static int32_t get_offset_of_m_text_35() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_text_35)); }
	inline String_t* get_m_text_35() const { return ___m_text_35; }
	inline String_t** get_address_of_m_text_35() { return &___m_text_35; }
	inline void set_m_text_35(String_t* value)
	{
		___m_text_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_text_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextPreprocessor_36() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_TextPreprocessor_36)); }
	inline RuntimeObject* get_m_TextPreprocessor_36() const { return ___m_TextPreprocessor_36; }
	inline RuntimeObject** get_address_of_m_TextPreprocessor_36() { return &___m_TextPreprocessor_36; }
	inline void set_m_TextPreprocessor_36(RuntimeObject* value)
	{
		___m_TextPreprocessor_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextPreprocessor_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_isRightToLeft_37() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isRightToLeft_37)); }
	inline bool get_m_isRightToLeft_37() const { return ___m_isRightToLeft_37; }
	inline bool* get_address_of_m_isRightToLeft_37() { return &___m_isRightToLeft_37; }
	inline void set_m_isRightToLeft_37(bool value)
	{
		___m_isRightToLeft_37 = value;
	}

	inline static int32_t get_offset_of_m_fontAsset_38() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontAsset_38)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_m_fontAsset_38() const { return ___m_fontAsset_38; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_m_fontAsset_38() { return &___m_fontAsset_38; }
	inline void set_m_fontAsset_38(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___m_fontAsset_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontAsset_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentFontAsset_39() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentFontAsset_39)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_m_currentFontAsset_39() const { return ___m_currentFontAsset_39; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_m_currentFontAsset_39() { return &___m_currentFontAsset_39; }
	inline void set_m_currentFontAsset_39(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___m_currentFontAsset_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentFontAsset_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_isSDFShader_40() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isSDFShader_40)); }
	inline bool get_m_isSDFShader_40() const { return ___m_isSDFShader_40; }
	inline bool* get_address_of_m_isSDFShader_40() { return &___m_isSDFShader_40; }
	inline void set_m_isSDFShader_40(bool value)
	{
		___m_isSDFShader_40 = value;
	}

	inline static int32_t get_offset_of_m_sharedMaterial_41() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_sharedMaterial_41)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_sharedMaterial_41() const { return ___m_sharedMaterial_41; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_sharedMaterial_41() { return &___m_sharedMaterial_41; }
	inline void set_m_sharedMaterial_41(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_sharedMaterial_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_sharedMaterial_41), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentMaterial_42() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentMaterial_42)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_currentMaterial_42() const { return ___m_currentMaterial_42; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_currentMaterial_42() { return &___m_currentMaterial_42; }
	inline void set_m_currentMaterial_42(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_currentMaterial_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentMaterial_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferences_43() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_materialReferences_43)); }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* get_m_materialReferences_43() const { return ___m_materialReferences_43; }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B** get_address_of_m_materialReferences_43() { return &___m_materialReferences_43; }
	inline void set_m_materialReferences_43(MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* value)
	{
		___m_materialReferences_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferences_43), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceIndexLookup_44() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_materialReferenceIndexLookup_44)); }
	inline Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F * get_m_materialReferenceIndexLookup_44() const { return ___m_materialReferenceIndexLookup_44; }
	inline Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F ** get_address_of_m_materialReferenceIndexLookup_44() { return &___m_materialReferenceIndexLookup_44; }
	inline void set_m_materialReferenceIndexLookup_44(Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F * value)
	{
		___m_materialReferenceIndexLookup_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferenceIndexLookup_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceStack_45() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_materialReferenceStack_45)); }
	inline TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  get_m_materialReferenceStack_45() const { return ___m_materialReferenceStack_45; }
	inline TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A * get_address_of_m_materialReferenceStack_45() { return &___m_materialReferenceStack_45; }
	inline void set_m_materialReferenceStack_45(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  value)
	{
		___m_materialReferenceStack_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_materialReferenceStack_45))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_45))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_45))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_45))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_45))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_currentMaterialIndex_46() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentMaterialIndex_46)); }
	inline int32_t get_m_currentMaterialIndex_46() const { return ___m_currentMaterialIndex_46; }
	inline int32_t* get_address_of_m_currentMaterialIndex_46() { return &___m_currentMaterialIndex_46; }
	inline void set_m_currentMaterialIndex_46(int32_t value)
	{
		___m_currentMaterialIndex_46 = value;
	}

	inline static int32_t get_offset_of_m_fontSharedMaterials_47() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSharedMaterials_47)); }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* get_m_fontSharedMaterials_47() const { return ___m_fontSharedMaterials_47; }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398** get_address_of_m_fontSharedMaterials_47() { return &___m_fontSharedMaterials_47; }
	inline void set_m_fontSharedMaterials_47(MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* value)
	{
		___m_fontSharedMaterials_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontSharedMaterials_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterial_48() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontMaterial_48)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_fontMaterial_48() const { return ___m_fontMaterial_48; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_fontMaterial_48() { return &___m_fontMaterial_48; }
	inline void set_m_fontMaterial_48(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_fontMaterial_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterial_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterials_49() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontMaterials_49)); }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* get_m_fontMaterials_49() const { return ___m_fontMaterials_49; }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398** get_address_of_m_fontMaterials_49() { return &___m_fontMaterials_49; }
	inline void set_m_fontMaterials_49(MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* value)
	{
		___m_fontMaterials_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterials_49), (void*)value);
	}

	inline static int32_t get_offset_of_m_isMaterialDirty_50() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isMaterialDirty_50)); }
	inline bool get_m_isMaterialDirty_50() const { return ___m_isMaterialDirty_50; }
	inline bool* get_address_of_m_isMaterialDirty_50() { return &___m_isMaterialDirty_50; }
	inline void set_m_isMaterialDirty_50(bool value)
	{
		___m_isMaterialDirty_50 = value;
	}

	inline static int32_t get_offset_of_m_fontColor32_51() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColor32_51)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_fontColor32_51() const { return ___m_fontColor32_51; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_fontColor32_51() { return &___m_fontColor32_51; }
	inline void set_m_fontColor32_51(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_fontColor32_51 = value;
	}

	inline static int32_t get_offset_of_m_fontColor_52() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColor_52)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_fontColor_52() const { return ___m_fontColor_52; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_fontColor_52() { return &___m_fontColor_52; }
	inline void set_m_fontColor_52(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_fontColor_52 = value;
	}

	inline static int32_t get_offset_of_m_underlineColor_54() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_underlineColor_54)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_underlineColor_54() const { return ___m_underlineColor_54; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_underlineColor_54() { return &___m_underlineColor_54; }
	inline void set_m_underlineColor_54(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_underlineColor_54 = value;
	}

	inline static int32_t get_offset_of_m_strikethroughColor_55() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_strikethroughColor_55)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_strikethroughColor_55() const { return ___m_strikethroughColor_55; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_strikethroughColor_55() { return &___m_strikethroughColor_55; }
	inline void set_m_strikethroughColor_55(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_strikethroughColor_55 = value;
	}

	inline static int32_t get_offset_of_m_enableVertexGradient_56() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableVertexGradient_56)); }
	inline bool get_m_enableVertexGradient_56() const { return ___m_enableVertexGradient_56; }
	inline bool* get_address_of_m_enableVertexGradient_56() { return &___m_enableVertexGradient_56; }
	inline void set_m_enableVertexGradient_56(bool value)
	{
		___m_enableVertexGradient_56 = value;
	}

	inline static int32_t get_offset_of_m_colorMode_57() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorMode_57)); }
	inline int32_t get_m_colorMode_57() const { return ___m_colorMode_57; }
	inline int32_t* get_address_of_m_colorMode_57() { return &___m_colorMode_57; }
	inline void set_m_colorMode_57(int32_t value)
	{
		___m_colorMode_57 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradient_58() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColorGradient_58)); }
	inline VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A  get_m_fontColorGradient_58() const { return ___m_fontColorGradient_58; }
	inline VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A * get_address_of_m_fontColorGradient_58() { return &___m_fontColorGradient_58; }
	inline void set_m_fontColorGradient_58(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A  value)
	{
		___m_fontColorGradient_58 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradientPreset_59() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColorGradientPreset_59)); }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * get_m_fontColorGradientPreset_59() const { return ___m_fontColorGradientPreset_59; }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 ** get_address_of_m_fontColorGradientPreset_59() { return &___m_fontColorGradientPreset_59; }
	inline void set_m_fontColorGradientPreset_59(TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * value)
	{
		___m_fontColorGradientPreset_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontColorGradientPreset_59), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAsset_60() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteAsset_60)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_m_spriteAsset_60() const { return ___m_spriteAsset_60; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_m_spriteAsset_60() { return &___m_spriteAsset_60; }
	inline void set_m_spriteAsset_60(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___m_spriteAsset_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAsset_60), (void*)value);
	}

	inline static int32_t get_offset_of_m_tintAllSprites_61() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_tintAllSprites_61)); }
	inline bool get_m_tintAllSprites_61() const { return ___m_tintAllSprites_61; }
	inline bool* get_address_of_m_tintAllSprites_61() { return &___m_tintAllSprites_61; }
	inline void set_m_tintAllSprites_61(bool value)
	{
		___m_tintAllSprites_61 = value;
	}

	inline static int32_t get_offset_of_m_tintSprite_62() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_tintSprite_62)); }
	inline bool get_m_tintSprite_62() const { return ___m_tintSprite_62; }
	inline bool* get_address_of_m_tintSprite_62() { return &___m_tintSprite_62; }
	inline void set_m_tintSprite_62(bool value)
	{
		___m_tintSprite_62 = value;
	}

	inline static int32_t get_offset_of_m_spriteColor_63() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteColor_63)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_spriteColor_63() const { return ___m_spriteColor_63; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_spriteColor_63() { return &___m_spriteColor_63; }
	inline void set_m_spriteColor_63(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_spriteColor_63 = value;
	}

	inline static int32_t get_offset_of_m_StyleSheet_64() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_StyleSheet_64)); }
	inline TMP_StyleSheet_tC6C45E5B0EC8EF4BA7BB147712516656B0D26C04 * get_m_StyleSheet_64() const { return ___m_StyleSheet_64; }
	inline TMP_StyleSheet_tC6C45E5B0EC8EF4BA7BB147712516656B0D26C04 ** get_address_of_m_StyleSheet_64() { return &___m_StyleSheet_64; }
	inline void set_m_StyleSheet_64(TMP_StyleSheet_tC6C45E5B0EC8EF4BA7BB147712516656B0D26C04 * value)
	{
		___m_StyleSheet_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StyleSheet_64), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyle_65() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_TextStyle_65)); }
	inline TMP_Style_t9FD01084B9E3F1D4B92E87114C454C98BA20FBAD * get_m_TextStyle_65() const { return ___m_TextStyle_65; }
	inline TMP_Style_t9FD01084B9E3F1D4B92E87114C454C98BA20FBAD ** get_address_of_m_TextStyle_65() { return &___m_TextStyle_65; }
	inline void set_m_TextStyle_65(TMP_Style_t9FD01084B9E3F1D4B92E87114C454C98BA20FBAD * value)
	{
		___m_TextStyle_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyle_65), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleHashCode_66() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_TextStyleHashCode_66)); }
	inline int32_t get_m_TextStyleHashCode_66() const { return ___m_TextStyleHashCode_66; }
	inline int32_t* get_address_of_m_TextStyleHashCode_66() { return &___m_TextStyleHashCode_66; }
	inline void set_m_TextStyleHashCode_66(int32_t value)
	{
		___m_TextStyleHashCode_66 = value;
	}

	inline static int32_t get_offset_of_m_overrideHtmlColors_67() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_overrideHtmlColors_67)); }
	inline bool get_m_overrideHtmlColors_67() const { return ___m_overrideHtmlColors_67; }
	inline bool* get_address_of_m_overrideHtmlColors_67() { return &___m_overrideHtmlColors_67; }
	inline void set_m_overrideHtmlColors_67(bool value)
	{
		___m_overrideHtmlColors_67 = value;
	}

	inline static int32_t get_offset_of_m_faceColor_68() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_faceColor_68)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_faceColor_68() const { return ___m_faceColor_68; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_faceColor_68() { return &___m_faceColor_68; }
	inline void set_m_faceColor_68(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_faceColor_68 = value;
	}

	inline static int32_t get_offset_of_m_outlineColor_69() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_outlineColor_69)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_outlineColor_69() const { return ___m_outlineColor_69; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_outlineColor_69() { return &___m_outlineColor_69; }
	inline void set_m_outlineColor_69(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_outlineColor_69 = value;
	}

	inline static int32_t get_offset_of_m_outlineWidth_70() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_outlineWidth_70)); }
	inline float get_m_outlineWidth_70() const { return ___m_outlineWidth_70; }
	inline float* get_address_of_m_outlineWidth_70() { return &___m_outlineWidth_70; }
	inline void set_m_outlineWidth_70(float value)
	{
		___m_outlineWidth_70 = value;
	}

	inline static int32_t get_offset_of_m_fontSize_71() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSize_71)); }
	inline float get_m_fontSize_71() const { return ___m_fontSize_71; }
	inline float* get_address_of_m_fontSize_71() { return &___m_fontSize_71; }
	inline void set_m_fontSize_71(float value)
	{
		___m_fontSize_71 = value;
	}

	inline static int32_t get_offset_of_m_currentFontSize_72() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentFontSize_72)); }
	inline float get_m_currentFontSize_72() const { return ___m_currentFontSize_72; }
	inline float* get_address_of_m_currentFontSize_72() { return &___m_currentFontSize_72; }
	inline void set_m_currentFontSize_72(float value)
	{
		___m_currentFontSize_72 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeBase_73() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSizeBase_73)); }
	inline float get_m_fontSizeBase_73() const { return ___m_fontSizeBase_73; }
	inline float* get_address_of_m_fontSizeBase_73() { return &___m_fontSizeBase_73; }
	inline void set_m_fontSizeBase_73(float value)
	{
		___m_fontSizeBase_73 = value;
	}

	inline static int32_t get_offset_of_m_sizeStack_74() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_sizeStack_74)); }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  get_m_sizeStack_74() const { return ___m_sizeStack_74; }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA * get_address_of_m_sizeStack_74() { return &___m_sizeStack_74; }
	inline void set_m_sizeStack_74(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  value)
	{
		___m_sizeStack_74 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_sizeStack_74))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_fontWeight_75() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontWeight_75)); }
	inline int32_t get_m_fontWeight_75() const { return ___m_fontWeight_75; }
	inline int32_t* get_address_of_m_fontWeight_75() { return &___m_fontWeight_75; }
	inline void set_m_fontWeight_75(int32_t value)
	{
		___m_fontWeight_75 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightInternal_76() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FontWeightInternal_76)); }
	inline int32_t get_m_FontWeightInternal_76() const { return ___m_FontWeightInternal_76; }
	inline int32_t* get_address_of_m_FontWeightInternal_76() { return &___m_FontWeightInternal_76; }
	inline void set_m_FontWeightInternal_76(int32_t value)
	{
		___m_FontWeightInternal_76 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightStack_77() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FontWeightStack_77)); }
	inline TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  get_m_FontWeightStack_77() const { return ___m_FontWeightStack_77; }
	inline TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285 * get_address_of_m_FontWeightStack_77() { return &___m_FontWeightStack_77; }
	inline void set_m_FontWeightStack_77(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  value)
	{
		___m_FontWeightStack_77 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_FontWeightStack_77))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_enableAutoSizing_78() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableAutoSizing_78)); }
	inline bool get_m_enableAutoSizing_78() const { return ___m_enableAutoSizing_78; }
	inline bool* get_address_of_m_enableAutoSizing_78() { return &___m_enableAutoSizing_78; }
	inline void set_m_enableAutoSizing_78(bool value)
	{
		___m_enableAutoSizing_78 = value;
	}

	inline static int32_t get_offset_of_m_maxFontSize_79() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxFontSize_79)); }
	inline float get_m_maxFontSize_79() const { return ___m_maxFontSize_79; }
	inline float* get_address_of_m_maxFontSize_79() { return &___m_maxFontSize_79; }
	inline void set_m_maxFontSize_79(float value)
	{
		___m_maxFontSize_79 = value;
	}

	inline static int32_t get_offset_of_m_minFontSize_80() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_minFontSize_80)); }
	inline float get_m_minFontSize_80() const { return ___m_minFontSize_80; }
	inline float* get_address_of_m_minFontSize_80() { return &___m_minFontSize_80; }
	inline void set_m_minFontSize_80(float value)
	{
		___m_minFontSize_80 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeIterationCount_81() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_AutoSizeIterationCount_81)); }
	inline int32_t get_m_AutoSizeIterationCount_81() const { return ___m_AutoSizeIterationCount_81; }
	inline int32_t* get_address_of_m_AutoSizeIterationCount_81() { return &___m_AutoSizeIterationCount_81; }
	inline void set_m_AutoSizeIterationCount_81(int32_t value)
	{
		___m_AutoSizeIterationCount_81 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeMaxIterationCount_82() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_AutoSizeMaxIterationCount_82)); }
	inline int32_t get_m_AutoSizeMaxIterationCount_82() const { return ___m_AutoSizeMaxIterationCount_82; }
	inline int32_t* get_address_of_m_AutoSizeMaxIterationCount_82() { return &___m_AutoSizeMaxIterationCount_82; }
	inline void set_m_AutoSizeMaxIterationCount_82(int32_t value)
	{
		___m_AutoSizeMaxIterationCount_82 = value;
	}

	inline static int32_t get_offset_of_m_IsAutoSizePointSizeSet_83() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_IsAutoSizePointSizeSet_83)); }
	inline bool get_m_IsAutoSizePointSizeSet_83() const { return ___m_IsAutoSizePointSizeSet_83; }
	inline bool* get_address_of_m_IsAutoSizePointSizeSet_83() { return &___m_IsAutoSizePointSizeSet_83; }
	inline void set_m_IsAutoSizePointSizeSet_83(bool value)
	{
		___m_IsAutoSizePointSizeSet_83 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMin_84() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSizeMin_84)); }
	inline float get_m_fontSizeMin_84() const { return ___m_fontSizeMin_84; }
	inline float* get_address_of_m_fontSizeMin_84() { return &___m_fontSizeMin_84; }
	inline void set_m_fontSizeMin_84(float value)
	{
		___m_fontSizeMin_84 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMax_85() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSizeMax_85)); }
	inline float get_m_fontSizeMax_85() const { return ___m_fontSizeMax_85; }
	inline float* get_address_of_m_fontSizeMax_85() { return &___m_fontSizeMax_85; }
	inline void set_m_fontSizeMax_85(float value)
	{
		___m_fontSizeMax_85 = value;
	}

	inline static int32_t get_offset_of_m_fontStyle_86() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontStyle_86)); }
	inline int32_t get_m_fontStyle_86() const { return ___m_fontStyle_86; }
	inline int32_t* get_address_of_m_fontStyle_86() { return &___m_fontStyle_86; }
	inline void set_m_fontStyle_86(int32_t value)
	{
		___m_fontStyle_86 = value;
	}

	inline static int32_t get_offset_of_m_FontStyleInternal_87() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FontStyleInternal_87)); }
	inline int32_t get_m_FontStyleInternal_87() const { return ___m_FontStyleInternal_87; }
	inline int32_t* get_address_of_m_FontStyleInternal_87() { return &___m_FontStyleInternal_87; }
	inline void set_m_FontStyleInternal_87(int32_t value)
	{
		___m_FontStyleInternal_87 = value;
	}

	inline static int32_t get_offset_of_m_fontStyleStack_88() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontStyleStack_88)); }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  get_m_fontStyleStack_88() const { return ___m_fontStyleStack_88; }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84 * get_address_of_m_fontStyleStack_88() { return &___m_fontStyleStack_88; }
	inline void set_m_fontStyleStack_88(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  value)
	{
		___m_fontStyleStack_88 = value;
	}

	inline static int32_t get_offset_of_m_isUsingBold_89() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isUsingBold_89)); }
	inline bool get_m_isUsingBold_89() const { return ___m_isUsingBold_89; }
	inline bool* get_address_of_m_isUsingBold_89() { return &___m_isUsingBold_89; }
	inline void set_m_isUsingBold_89(bool value)
	{
		___m_isUsingBold_89 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalAlignment_90() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_HorizontalAlignment_90)); }
	inline int32_t get_m_HorizontalAlignment_90() const { return ___m_HorizontalAlignment_90; }
	inline int32_t* get_address_of_m_HorizontalAlignment_90() { return &___m_HorizontalAlignment_90; }
	inline void set_m_HorizontalAlignment_90(int32_t value)
	{
		___m_HorizontalAlignment_90 = value;
	}

	inline static int32_t get_offset_of_m_VerticalAlignment_91() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_VerticalAlignment_91)); }
	inline int32_t get_m_VerticalAlignment_91() const { return ___m_VerticalAlignment_91; }
	inline int32_t* get_address_of_m_VerticalAlignment_91() { return &___m_VerticalAlignment_91; }
	inline void set_m_VerticalAlignment_91(int32_t value)
	{
		___m_VerticalAlignment_91 = value;
	}

	inline static int32_t get_offset_of_m_textAlignment_92() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textAlignment_92)); }
	inline int32_t get_m_textAlignment_92() const { return ___m_textAlignment_92; }
	inline int32_t* get_address_of_m_textAlignment_92() { return &___m_textAlignment_92; }
	inline void set_m_textAlignment_92(int32_t value)
	{
		___m_textAlignment_92 = value;
	}

	inline static int32_t get_offset_of_m_lineJustification_93() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineJustification_93)); }
	inline int32_t get_m_lineJustification_93() const { return ___m_lineJustification_93; }
	inline int32_t* get_address_of_m_lineJustification_93() { return &___m_lineJustification_93; }
	inline void set_m_lineJustification_93(int32_t value)
	{
		___m_lineJustification_93 = value;
	}

	inline static int32_t get_offset_of_m_lineJustificationStack_94() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineJustificationStack_94)); }
	inline TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  get_m_lineJustificationStack_94() const { return ___m_lineJustificationStack_94; }
	inline TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7 * get_address_of_m_lineJustificationStack_94() { return &___m_lineJustificationStack_94; }
	inline void set_m_lineJustificationStack_94(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  value)
	{
		___m_lineJustificationStack_94 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_lineJustificationStack_94))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_textContainerLocalCorners_95() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textContainerLocalCorners_95)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_textContainerLocalCorners_95() const { return ___m_textContainerLocalCorners_95; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_textContainerLocalCorners_95() { return &___m_textContainerLocalCorners_95; }
	inline void set_m_textContainerLocalCorners_95(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_textContainerLocalCorners_95 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textContainerLocalCorners_95), (void*)value);
	}

	inline static int32_t get_offset_of_m_characterSpacing_96() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_characterSpacing_96)); }
	inline float get_m_characterSpacing_96() const { return ___m_characterSpacing_96; }
	inline float* get_address_of_m_characterSpacing_96() { return &___m_characterSpacing_96; }
	inline void set_m_characterSpacing_96(float value)
	{
		___m_characterSpacing_96 = value;
	}

	inline static int32_t get_offset_of_m_cSpacing_97() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_cSpacing_97)); }
	inline float get_m_cSpacing_97() const { return ___m_cSpacing_97; }
	inline float* get_address_of_m_cSpacing_97() { return &___m_cSpacing_97; }
	inline void set_m_cSpacing_97(float value)
	{
		___m_cSpacing_97 = value;
	}

	inline static int32_t get_offset_of_m_monoSpacing_98() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_monoSpacing_98)); }
	inline float get_m_monoSpacing_98() const { return ___m_monoSpacing_98; }
	inline float* get_address_of_m_monoSpacing_98() { return &___m_monoSpacing_98; }
	inline void set_m_monoSpacing_98(float value)
	{
		___m_monoSpacing_98 = value;
	}

	inline static int32_t get_offset_of_m_wordSpacing_99() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_wordSpacing_99)); }
	inline float get_m_wordSpacing_99() const { return ___m_wordSpacing_99; }
	inline float* get_address_of_m_wordSpacing_99() { return &___m_wordSpacing_99; }
	inline void set_m_wordSpacing_99(float value)
	{
		___m_wordSpacing_99 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacing_100() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineSpacing_100)); }
	inline float get_m_lineSpacing_100() const { return ___m_lineSpacing_100; }
	inline float* get_address_of_m_lineSpacing_100() { return &___m_lineSpacing_100; }
	inline void set_m_lineSpacing_100(float value)
	{
		___m_lineSpacing_100 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingDelta_101() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineSpacingDelta_101)); }
	inline float get_m_lineSpacingDelta_101() const { return ___m_lineSpacingDelta_101; }
	inline float* get_address_of_m_lineSpacingDelta_101() { return &___m_lineSpacingDelta_101; }
	inline void set_m_lineSpacingDelta_101(float value)
	{
		___m_lineSpacingDelta_101 = value;
	}

	inline static int32_t get_offset_of_m_lineHeight_102() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineHeight_102)); }
	inline float get_m_lineHeight_102() const { return ___m_lineHeight_102; }
	inline float* get_address_of_m_lineHeight_102() { return &___m_lineHeight_102; }
	inline void set_m_lineHeight_102(float value)
	{
		___m_lineHeight_102 = value;
	}

	inline static int32_t get_offset_of_m_IsDrivenLineSpacing_103() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_IsDrivenLineSpacing_103)); }
	inline bool get_m_IsDrivenLineSpacing_103() const { return ___m_IsDrivenLineSpacing_103; }
	inline bool* get_address_of_m_IsDrivenLineSpacing_103() { return &___m_IsDrivenLineSpacing_103; }
	inline void set_m_IsDrivenLineSpacing_103(bool value)
	{
		___m_IsDrivenLineSpacing_103 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingMax_104() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineSpacingMax_104)); }
	inline float get_m_lineSpacingMax_104() const { return ___m_lineSpacingMax_104; }
	inline float* get_address_of_m_lineSpacingMax_104() { return &___m_lineSpacingMax_104; }
	inline void set_m_lineSpacingMax_104(float value)
	{
		___m_lineSpacingMax_104 = value;
	}

	inline static int32_t get_offset_of_m_paragraphSpacing_105() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_paragraphSpacing_105)); }
	inline float get_m_paragraphSpacing_105() const { return ___m_paragraphSpacing_105; }
	inline float* get_address_of_m_paragraphSpacing_105() { return &___m_paragraphSpacing_105; }
	inline void set_m_paragraphSpacing_105(float value)
	{
		___m_paragraphSpacing_105 = value;
	}

	inline static int32_t get_offset_of_m_charWidthMaxAdj_106() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_charWidthMaxAdj_106)); }
	inline float get_m_charWidthMaxAdj_106() const { return ___m_charWidthMaxAdj_106; }
	inline float* get_address_of_m_charWidthMaxAdj_106() { return &___m_charWidthMaxAdj_106; }
	inline void set_m_charWidthMaxAdj_106(float value)
	{
		___m_charWidthMaxAdj_106 = value;
	}

	inline static int32_t get_offset_of_m_charWidthAdjDelta_107() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_charWidthAdjDelta_107)); }
	inline float get_m_charWidthAdjDelta_107() const { return ___m_charWidthAdjDelta_107; }
	inline float* get_address_of_m_charWidthAdjDelta_107() { return &___m_charWidthAdjDelta_107; }
	inline void set_m_charWidthAdjDelta_107(float value)
	{
		___m_charWidthAdjDelta_107 = value;
	}

	inline static int32_t get_offset_of_m_enableWordWrapping_108() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableWordWrapping_108)); }
	inline bool get_m_enableWordWrapping_108() const { return ___m_enableWordWrapping_108; }
	inline bool* get_address_of_m_enableWordWrapping_108() { return &___m_enableWordWrapping_108; }
	inline void set_m_enableWordWrapping_108(bool value)
	{
		___m_enableWordWrapping_108 = value;
	}

	inline static int32_t get_offset_of_m_isCharacterWrappingEnabled_109() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCharacterWrappingEnabled_109)); }
	inline bool get_m_isCharacterWrappingEnabled_109() const { return ___m_isCharacterWrappingEnabled_109; }
	inline bool* get_address_of_m_isCharacterWrappingEnabled_109() { return &___m_isCharacterWrappingEnabled_109; }
	inline void set_m_isCharacterWrappingEnabled_109(bool value)
	{
		___m_isCharacterWrappingEnabled_109 = value;
	}

	inline static int32_t get_offset_of_m_isNonBreakingSpace_110() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isNonBreakingSpace_110)); }
	inline bool get_m_isNonBreakingSpace_110() const { return ___m_isNonBreakingSpace_110; }
	inline bool* get_address_of_m_isNonBreakingSpace_110() { return &___m_isNonBreakingSpace_110; }
	inline void set_m_isNonBreakingSpace_110(bool value)
	{
		___m_isNonBreakingSpace_110 = value;
	}

	inline static int32_t get_offset_of_m_isIgnoringAlignment_111() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isIgnoringAlignment_111)); }
	inline bool get_m_isIgnoringAlignment_111() const { return ___m_isIgnoringAlignment_111; }
	inline bool* get_address_of_m_isIgnoringAlignment_111() { return &___m_isIgnoringAlignment_111; }
	inline void set_m_isIgnoringAlignment_111(bool value)
	{
		___m_isIgnoringAlignment_111 = value;
	}

	inline static int32_t get_offset_of_m_wordWrappingRatios_112() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_wordWrappingRatios_112)); }
	inline float get_m_wordWrappingRatios_112() const { return ___m_wordWrappingRatios_112; }
	inline float* get_address_of_m_wordWrappingRatios_112() { return &___m_wordWrappingRatios_112; }
	inline void set_m_wordWrappingRatios_112(float value)
	{
		___m_wordWrappingRatios_112 = value;
	}

	inline static int32_t get_offset_of_m_overflowMode_113() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_overflowMode_113)); }
	inline int32_t get_m_overflowMode_113() const { return ___m_overflowMode_113; }
	inline int32_t* get_address_of_m_overflowMode_113() { return &___m_overflowMode_113; }
	inline void set_m_overflowMode_113(int32_t value)
	{
		___m_overflowMode_113 = value;
	}

	inline static int32_t get_offset_of_m_firstOverflowCharacterIndex_114() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstOverflowCharacterIndex_114)); }
	inline int32_t get_m_firstOverflowCharacterIndex_114() const { return ___m_firstOverflowCharacterIndex_114; }
	inline int32_t* get_address_of_m_firstOverflowCharacterIndex_114() { return &___m_firstOverflowCharacterIndex_114; }
	inline void set_m_firstOverflowCharacterIndex_114(int32_t value)
	{
		___m_firstOverflowCharacterIndex_114 = value;
	}

	inline static int32_t get_offset_of_m_linkedTextComponent_115() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_linkedTextComponent_115)); }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * get_m_linkedTextComponent_115() const { return ___m_linkedTextComponent_115; }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 ** get_address_of_m_linkedTextComponent_115() { return &___m_linkedTextComponent_115; }
	inline void set_m_linkedTextComponent_115(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * value)
	{
		___m_linkedTextComponent_115 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkedTextComponent_115), (void*)value);
	}

	inline static int32_t get_offset_of_parentLinkedComponent_116() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___parentLinkedComponent_116)); }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * get_parentLinkedComponent_116() const { return ___parentLinkedComponent_116; }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 ** get_address_of_parentLinkedComponent_116() { return &___parentLinkedComponent_116; }
	inline void set_parentLinkedComponent_116(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * value)
	{
		___parentLinkedComponent_116 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentLinkedComponent_116), (void*)value);
	}

	inline static int32_t get_offset_of_m_isTextTruncated_117() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isTextTruncated_117)); }
	inline bool get_m_isTextTruncated_117() const { return ___m_isTextTruncated_117; }
	inline bool* get_address_of_m_isTextTruncated_117() { return &___m_isTextTruncated_117; }
	inline void set_m_isTextTruncated_117(bool value)
	{
		___m_isTextTruncated_117 = value;
	}

	inline static int32_t get_offset_of_m_enableKerning_118() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableKerning_118)); }
	inline bool get_m_enableKerning_118() const { return ___m_enableKerning_118; }
	inline bool* get_address_of_m_enableKerning_118() { return &___m_enableKerning_118; }
	inline void set_m_enableKerning_118(bool value)
	{
		___m_enableKerning_118 = value;
	}

	inline static int32_t get_offset_of_m_GlyphHorizontalAdvanceAdjustment_119() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_GlyphHorizontalAdvanceAdjustment_119)); }
	inline float get_m_GlyphHorizontalAdvanceAdjustment_119() const { return ___m_GlyphHorizontalAdvanceAdjustment_119; }
	inline float* get_address_of_m_GlyphHorizontalAdvanceAdjustment_119() { return &___m_GlyphHorizontalAdvanceAdjustment_119; }
	inline void set_m_GlyphHorizontalAdvanceAdjustment_119(float value)
	{
		___m_GlyphHorizontalAdvanceAdjustment_119 = value;
	}

	inline static int32_t get_offset_of_m_enableExtraPadding_120() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableExtraPadding_120)); }
	inline bool get_m_enableExtraPadding_120() const { return ___m_enableExtraPadding_120; }
	inline bool* get_address_of_m_enableExtraPadding_120() { return &___m_enableExtraPadding_120; }
	inline void set_m_enableExtraPadding_120(bool value)
	{
		___m_enableExtraPadding_120 = value;
	}

	inline static int32_t get_offset_of_checkPaddingRequired_121() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___checkPaddingRequired_121)); }
	inline bool get_checkPaddingRequired_121() const { return ___checkPaddingRequired_121; }
	inline bool* get_address_of_checkPaddingRequired_121() { return &___checkPaddingRequired_121; }
	inline void set_checkPaddingRequired_121(bool value)
	{
		___checkPaddingRequired_121 = value;
	}

	inline static int32_t get_offset_of_m_isRichText_122() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isRichText_122)); }
	inline bool get_m_isRichText_122() const { return ___m_isRichText_122; }
	inline bool* get_address_of_m_isRichText_122() { return &___m_isRichText_122; }
	inline void set_m_isRichText_122(bool value)
	{
		___m_isRichText_122 = value;
	}

	inline static int32_t get_offset_of_m_parseCtrlCharacters_123() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_parseCtrlCharacters_123)); }
	inline bool get_m_parseCtrlCharacters_123() const { return ___m_parseCtrlCharacters_123; }
	inline bool* get_address_of_m_parseCtrlCharacters_123() { return &___m_parseCtrlCharacters_123; }
	inline void set_m_parseCtrlCharacters_123(bool value)
	{
		___m_parseCtrlCharacters_123 = value;
	}

	inline static int32_t get_offset_of_m_isOverlay_124() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isOverlay_124)); }
	inline bool get_m_isOverlay_124() const { return ___m_isOverlay_124; }
	inline bool* get_address_of_m_isOverlay_124() { return &___m_isOverlay_124; }
	inline void set_m_isOverlay_124(bool value)
	{
		___m_isOverlay_124 = value;
	}

	inline static int32_t get_offset_of_m_isOrthographic_125() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isOrthographic_125)); }
	inline bool get_m_isOrthographic_125() const { return ___m_isOrthographic_125; }
	inline bool* get_address_of_m_isOrthographic_125() { return &___m_isOrthographic_125; }
	inline void set_m_isOrthographic_125(bool value)
	{
		___m_isOrthographic_125 = value;
	}

	inline static int32_t get_offset_of_m_isCullingEnabled_126() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCullingEnabled_126)); }
	inline bool get_m_isCullingEnabled_126() const { return ___m_isCullingEnabled_126; }
	inline bool* get_address_of_m_isCullingEnabled_126() { return &___m_isCullingEnabled_126; }
	inline void set_m_isCullingEnabled_126(bool value)
	{
		___m_isCullingEnabled_126 = value;
	}

	inline static int32_t get_offset_of_m_isMaskingEnabled_127() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isMaskingEnabled_127)); }
	inline bool get_m_isMaskingEnabled_127() const { return ___m_isMaskingEnabled_127; }
	inline bool* get_address_of_m_isMaskingEnabled_127() { return &___m_isMaskingEnabled_127; }
	inline void set_m_isMaskingEnabled_127(bool value)
	{
		___m_isMaskingEnabled_127 = value;
	}

	inline static int32_t get_offset_of_isMaskUpdateRequired_128() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___isMaskUpdateRequired_128)); }
	inline bool get_isMaskUpdateRequired_128() const { return ___isMaskUpdateRequired_128; }
	inline bool* get_address_of_isMaskUpdateRequired_128() { return &___isMaskUpdateRequired_128; }
	inline void set_isMaskUpdateRequired_128(bool value)
	{
		___isMaskUpdateRequired_128 = value;
	}

	inline static int32_t get_offset_of_m_ignoreCulling_129() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ignoreCulling_129)); }
	inline bool get_m_ignoreCulling_129() const { return ___m_ignoreCulling_129; }
	inline bool* get_address_of_m_ignoreCulling_129() { return &___m_ignoreCulling_129; }
	inline void set_m_ignoreCulling_129(bool value)
	{
		___m_ignoreCulling_129 = value;
	}

	inline static int32_t get_offset_of_m_horizontalMapping_130() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_horizontalMapping_130)); }
	inline int32_t get_m_horizontalMapping_130() const { return ___m_horizontalMapping_130; }
	inline int32_t* get_address_of_m_horizontalMapping_130() { return &___m_horizontalMapping_130; }
	inline void set_m_horizontalMapping_130(int32_t value)
	{
		___m_horizontalMapping_130 = value;
	}

	inline static int32_t get_offset_of_m_verticalMapping_131() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_verticalMapping_131)); }
	inline int32_t get_m_verticalMapping_131() const { return ___m_verticalMapping_131; }
	inline int32_t* get_address_of_m_verticalMapping_131() { return &___m_verticalMapping_131; }
	inline void set_m_verticalMapping_131(int32_t value)
	{
		___m_verticalMapping_131 = value;
	}

	inline static int32_t get_offset_of_m_uvLineOffset_132() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_uvLineOffset_132)); }
	inline float get_m_uvLineOffset_132() const { return ___m_uvLineOffset_132; }
	inline float* get_address_of_m_uvLineOffset_132() { return &___m_uvLineOffset_132; }
	inline void set_m_uvLineOffset_132(float value)
	{
		___m_uvLineOffset_132 = value;
	}

	inline static int32_t get_offset_of_m_renderMode_133() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_renderMode_133)); }
	inline int32_t get_m_renderMode_133() const { return ___m_renderMode_133; }
	inline int32_t* get_address_of_m_renderMode_133() { return &___m_renderMode_133; }
	inline void set_m_renderMode_133(int32_t value)
	{
		___m_renderMode_133 = value;
	}

	inline static int32_t get_offset_of_m_geometrySortingOrder_134() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_geometrySortingOrder_134)); }
	inline int32_t get_m_geometrySortingOrder_134() const { return ___m_geometrySortingOrder_134; }
	inline int32_t* get_address_of_m_geometrySortingOrder_134() { return &___m_geometrySortingOrder_134; }
	inline void set_m_geometrySortingOrder_134(int32_t value)
	{
		___m_geometrySortingOrder_134 = value;
	}

	inline static int32_t get_offset_of_m_IsTextObjectScaleStatic_135() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_IsTextObjectScaleStatic_135)); }
	inline bool get_m_IsTextObjectScaleStatic_135() const { return ___m_IsTextObjectScaleStatic_135; }
	inline bool* get_address_of_m_IsTextObjectScaleStatic_135() { return &___m_IsTextObjectScaleStatic_135; }
	inline void set_m_IsTextObjectScaleStatic_135(bool value)
	{
		___m_IsTextObjectScaleStatic_135 = value;
	}

	inline static int32_t get_offset_of_m_VertexBufferAutoSizeReduction_136() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_VertexBufferAutoSizeReduction_136)); }
	inline bool get_m_VertexBufferAutoSizeReduction_136() const { return ___m_VertexBufferAutoSizeReduction_136; }
	inline bool* get_address_of_m_VertexBufferAutoSizeReduction_136() { return &___m_VertexBufferAutoSizeReduction_136; }
	inline void set_m_VertexBufferAutoSizeReduction_136(bool value)
	{
		___m_VertexBufferAutoSizeReduction_136 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacter_137() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstVisibleCharacter_137)); }
	inline int32_t get_m_firstVisibleCharacter_137() const { return ___m_firstVisibleCharacter_137; }
	inline int32_t* get_address_of_m_firstVisibleCharacter_137() { return &___m_firstVisibleCharacter_137; }
	inline void set_m_firstVisibleCharacter_137(int32_t value)
	{
		___m_firstVisibleCharacter_137 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleCharacters_138() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxVisibleCharacters_138)); }
	inline int32_t get_m_maxVisibleCharacters_138() const { return ___m_maxVisibleCharacters_138; }
	inline int32_t* get_address_of_m_maxVisibleCharacters_138() { return &___m_maxVisibleCharacters_138; }
	inline void set_m_maxVisibleCharacters_138(int32_t value)
	{
		___m_maxVisibleCharacters_138 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleWords_139() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxVisibleWords_139)); }
	inline int32_t get_m_maxVisibleWords_139() const { return ___m_maxVisibleWords_139; }
	inline int32_t* get_address_of_m_maxVisibleWords_139() { return &___m_maxVisibleWords_139; }
	inline void set_m_maxVisibleWords_139(int32_t value)
	{
		___m_maxVisibleWords_139 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleLines_140() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxVisibleLines_140)); }
	inline int32_t get_m_maxVisibleLines_140() const { return ___m_maxVisibleLines_140; }
	inline int32_t* get_address_of_m_maxVisibleLines_140() { return &___m_maxVisibleLines_140; }
	inline void set_m_maxVisibleLines_140(int32_t value)
	{
		___m_maxVisibleLines_140 = value;
	}

	inline static int32_t get_offset_of_m_useMaxVisibleDescender_141() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_useMaxVisibleDescender_141)); }
	inline bool get_m_useMaxVisibleDescender_141() const { return ___m_useMaxVisibleDescender_141; }
	inline bool* get_address_of_m_useMaxVisibleDescender_141() { return &___m_useMaxVisibleDescender_141; }
	inline void set_m_useMaxVisibleDescender_141(bool value)
	{
		___m_useMaxVisibleDescender_141 = value;
	}

	inline static int32_t get_offset_of_m_pageToDisplay_142() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_pageToDisplay_142)); }
	inline int32_t get_m_pageToDisplay_142() const { return ___m_pageToDisplay_142; }
	inline int32_t* get_address_of_m_pageToDisplay_142() { return &___m_pageToDisplay_142; }
	inline void set_m_pageToDisplay_142(int32_t value)
	{
		___m_pageToDisplay_142 = value;
	}

	inline static int32_t get_offset_of_m_isNewPage_143() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isNewPage_143)); }
	inline bool get_m_isNewPage_143() const { return ___m_isNewPage_143; }
	inline bool* get_address_of_m_isNewPage_143() { return &___m_isNewPage_143; }
	inline void set_m_isNewPage_143(bool value)
	{
		___m_isNewPage_143 = value;
	}

	inline static int32_t get_offset_of_m_margin_144() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_margin_144)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_m_margin_144() const { return ___m_margin_144; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_m_margin_144() { return &___m_margin_144; }
	inline void set_m_margin_144(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___m_margin_144 = value;
	}

	inline static int32_t get_offset_of_m_marginLeft_145() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginLeft_145)); }
	inline float get_m_marginLeft_145() const { return ___m_marginLeft_145; }
	inline float* get_address_of_m_marginLeft_145() { return &___m_marginLeft_145; }
	inline void set_m_marginLeft_145(float value)
	{
		___m_marginLeft_145 = value;
	}

	inline static int32_t get_offset_of_m_marginRight_146() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginRight_146)); }
	inline float get_m_marginRight_146() const { return ___m_marginRight_146; }
	inline float* get_address_of_m_marginRight_146() { return &___m_marginRight_146; }
	inline void set_m_marginRight_146(float value)
	{
		___m_marginRight_146 = value;
	}

	inline static int32_t get_offset_of_m_marginWidth_147() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginWidth_147)); }
	inline float get_m_marginWidth_147() const { return ___m_marginWidth_147; }
	inline float* get_address_of_m_marginWidth_147() { return &___m_marginWidth_147; }
	inline void set_m_marginWidth_147(float value)
	{
		___m_marginWidth_147 = value;
	}

	inline static int32_t get_offset_of_m_marginHeight_148() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginHeight_148)); }
	inline float get_m_marginHeight_148() const { return ___m_marginHeight_148; }
	inline float* get_address_of_m_marginHeight_148() { return &___m_marginHeight_148; }
	inline void set_m_marginHeight_148(float value)
	{
		___m_marginHeight_148 = value;
	}

	inline static int32_t get_offset_of_m_width_149() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_width_149)); }
	inline float get_m_width_149() const { return ___m_width_149; }
	inline float* get_address_of_m_width_149() { return &___m_width_149; }
	inline void set_m_width_149(float value)
	{
		___m_width_149 = value;
	}

	inline static int32_t get_offset_of_m_textInfo_150() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textInfo_150)); }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * get_m_textInfo_150() const { return ___m_textInfo_150; }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 ** get_address_of_m_textInfo_150() { return &___m_textInfo_150; }
	inline void set_m_textInfo_150(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * value)
	{
		___m_textInfo_150 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textInfo_150), (void*)value);
	}

	inline static int32_t get_offset_of_m_havePropertiesChanged_151() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_havePropertiesChanged_151)); }
	inline bool get_m_havePropertiesChanged_151() const { return ___m_havePropertiesChanged_151; }
	inline bool* get_address_of_m_havePropertiesChanged_151() { return &___m_havePropertiesChanged_151; }
	inline void set_m_havePropertiesChanged_151(bool value)
	{
		___m_havePropertiesChanged_151 = value;
	}

	inline static int32_t get_offset_of_m_isUsingLegacyAnimationComponent_152() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isUsingLegacyAnimationComponent_152)); }
	inline bool get_m_isUsingLegacyAnimationComponent_152() const { return ___m_isUsingLegacyAnimationComponent_152; }
	inline bool* get_address_of_m_isUsingLegacyAnimationComponent_152() { return &___m_isUsingLegacyAnimationComponent_152; }
	inline void set_m_isUsingLegacyAnimationComponent_152(bool value)
	{
		___m_isUsingLegacyAnimationComponent_152 = value;
	}

	inline static int32_t get_offset_of_m_transform_153() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_transform_153)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_transform_153() const { return ___m_transform_153; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_transform_153() { return &___m_transform_153; }
	inline void set_m_transform_153(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_transform_153 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_transform_153), (void*)value);
	}

	inline static int32_t get_offset_of_m_rectTransform_154() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_rectTransform_154)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_rectTransform_154() const { return ___m_rectTransform_154; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_rectTransform_154() { return &___m_rectTransform_154; }
	inline void set_m_rectTransform_154(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_rectTransform_154 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_rectTransform_154), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreviousRectTransformSize_155() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_PreviousRectTransformSize_155)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_PreviousRectTransformSize_155() const { return ___m_PreviousRectTransformSize_155; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_PreviousRectTransformSize_155() { return &___m_PreviousRectTransformSize_155; }
	inline void set_m_PreviousRectTransformSize_155(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_PreviousRectTransformSize_155 = value;
	}

	inline static int32_t get_offset_of_m_PreviousPivotPosition_156() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_PreviousPivotPosition_156)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_PreviousPivotPosition_156() const { return ___m_PreviousPivotPosition_156; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_PreviousPivotPosition_156() { return &___m_PreviousPivotPosition_156; }
	inline void set_m_PreviousPivotPosition_156(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_PreviousPivotPosition_156 = value;
	}

	inline static int32_t get_offset_of_U3CautoSizeTextContainerU3Ek__BackingField_157() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___U3CautoSizeTextContainerU3Ek__BackingField_157)); }
	inline bool get_U3CautoSizeTextContainerU3Ek__BackingField_157() const { return ___U3CautoSizeTextContainerU3Ek__BackingField_157; }
	inline bool* get_address_of_U3CautoSizeTextContainerU3Ek__BackingField_157() { return &___U3CautoSizeTextContainerU3Ek__BackingField_157; }
	inline void set_U3CautoSizeTextContainerU3Ek__BackingField_157(bool value)
	{
		___U3CautoSizeTextContainerU3Ek__BackingField_157 = value;
	}

	inline static int32_t get_offset_of_m_autoSizeTextContainer_158() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_autoSizeTextContainer_158)); }
	inline bool get_m_autoSizeTextContainer_158() const { return ___m_autoSizeTextContainer_158; }
	inline bool* get_address_of_m_autoSizeTextContainer_158() { return &___m_autoSizeTextContainer_158; }
	inline void set_m_autoSizeTextContainer_158(bool value)
	{
		___m_autoSizeTextContainer_158 = value;
	}

	inline static int32_t get_offset_of_m_mesh_159() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_mesh_159)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_mesh_159() const { return ___m_mesh_159; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_mesh_159() { return &___m_mesh_159; }
	inline void set_m_mesh_159(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_mesh_159 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_mesh_159), (void*)value);
	}

	inline static int32_t get_offset_of_m_isVolumetricText_160() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isVolumetricText_160)); }
	inline bool get_m_isVolumetricText_160() const { return ___m_isVolumetricText_160; }
	inline bool* get_address_of_m_isVolumetricText_160() { return &___m_isVolumetricText_160; }
	inline void set_m_isVolumetricText_160(bool value)
	{
		___m_isVolumetricText_160 = value;
	}

	inline static int32_t get_offset_of_OnPreRenderText_163() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___OnPreRenderText_163)); }
	inline Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD * get_OnPreRenderText_163() const { return ___OnPreRenderText_163; }
	inline Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD ** get_address_of_OnPreRenderText_163() { return &___OnPreRenderText_163; }
	inline void set_OnPreRenderText_163(Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD * value)
	{
		___OnPreRenderText_163 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreRenderText_163), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAnimator_164() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteAnimator_164)); }
	inline TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 * get_m_spriteAnimator_164() const { return ___m_spriteAnimator_164; }
	inline TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 ** get_address_of_m_spriteAnimator_164() { return &___m_spriteAnimator_164; }
	inline void set_m_spriteAnimator_164(TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 * value)
	{
		___m_spriteAnimator_164 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAnimator_164), (void*)value);
	}

	inline static int32_t get_offset_of_m_flexibleHeight_165() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_flexibleHeight_165)); }
	inline float get_m_flexibleHeight_165() const { return ___m_flexibleHeight_165; }
	inline float* get_address_of_m_flexibleHeight_165() { return &___m_flexibleHeight_165; }
	inline void set_m_flexibleHeight_165(float value)
	{
		___m_flexibleHeight_165 = value;
	}

	inline static int32_t get_offset_of_m_flexibleWidth_166() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_flexibleWidth_166)); }
	inline float get_m_flexibleWidth_166() const { return ___m_flexibleWidth_166; }
	inline float* get_address_of_m_flexibleWidth_166() { return &___m_flexibleWidth_166; }
	inline void set_m_flexibleWidth_166(float value)
	{
		___m_flexibleWidth_166 = value;
	}

	inline static int32_t get_offset_of_m_minWidth_167() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_minWidth_167)); }
	inline float get_m_minWidth_167() const { return ___m_minWidth_167; }
	inline float* get_address_of_m_minWidth_167() { return &___m_minWidth_167; }
	inline void set_m_minWidth_167(float value)
	{
		___m_minWidth_167 = value;
	}

	inline static int32_t get_offset_of_m_minHeight_168() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_minHeight_168)); }
	inline float get_m_minHeight_168() const { return ___m_minHeight_168; }
	inline float* get_address_of_m_minHeight_168() { return &___m_minHeight_168; }
	inline void set_m_minHeight_168(float value)
	{
		___m_minHeight_168 = value;
	}

	inline static int32_t get_offset_of_m_maxWidth_169() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxWidth_169)); }
	inline float get_m_maxWidth_169() const { return ___m_maxWidth_169; }
	inline float* get_address_of_m_maxWidth_169() { return &___m_maxWidth_169; }
	inline void set_m_maxWidth_169(float value)
	{
		___m_maxWidth_169 = value;
	}

	inline static int32_t get_offset_of_m_maxHeight_170() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxHeight_170)); }
	inline float get_m_maxHeight_170() const { return ___m_maxHeight_170; }
	inline float* get_address_of_m_maxHeight_170() { return &___m_maxHeight_170; }
	inline void set_m_maxHeight_170(float value)
	{
		___m_maxHeight_170 = value;
	}

	inline static int32_t get_offset_of_m_LayoutElement_171() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_LayoutElement_171)); }
	inline LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B * get_m_LayoutElement_171() const { return ___m_LayoutElement_171; }
	inline LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B ** get_address_of_m_LayoutElement_171() { return &___m_LayoutElement_171; }
	inline void set_m_LayoutElement_171(LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B * value)
	{
		___m_LayoutElement_171 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LayoutElement_171), (void*)value);
	}

	inline static int32_t get_offset_of_m_preferredWidth_172() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_preferredWidth_172)); }
	inline float get_m_preferredWidth_172() const { return ___m_preferredWidth_172; }
	inline float* get_address_of_m_preferredWidth_172() { return &___m_preferredWidth_172; }
	inline void set_m_preferredWidth_172(float value)
	{
		___m_preferredWidth_172 = value;
	}

	inline static int32_t get_offset_of_m_renderedWidth_173() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_renderedWidth_173)); }
	inline float get_m_renderedWidth_173() const { return ___m_renderedWidth_173; }
	inline float* get_address_of_m_renderedWidth_173() { return &___m_renderedWidth_173; }
	inline void set_m_renderedWidth_173(float value)
	{
		___m_renderedWidth_173 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredWidthDirty_174() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isPreferredWidthDirty_174)); }
	inline bool get_m_isPreferredWidthDirty_174() const { return ___m_isPreferredWidthDirty_174; }
	inline bool* get_address_of_m_isPreferredWidthDirty_174() { return &___m_isPreferredWidthDirty_174; }
	inline void set_m_isPreferredWidthDirty_174(bool value)
	{
		___m_isPreferredWidthDirty_174 = value;
	}

	inline static int32_t get_offset_of_m_preferredHeight_175() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_preferredHeight_175)); }
	inline float get_m_preferredHeight_175() const { return ___m_preferredHeight_175; }
	inline float* get_address_of_m_preferredHeight_175() { return &___m_preferredHeight_175; }
	inline void set_m_preferredHeight_175(float value)
	{
		___m_preferredHeight_175 = value;
	}

	inline static int32_t get_offset_of_m_renderedHeight_176() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_renderedHeight_176)); }
	inline float get_m_renderedHeight_176() const { return ___m_renderedHeight_176; }
	inline float* get_address_of_m_renderedHeight_176() { return &___m_renderedHeight_176; }
	inline void set_m_renderedHeight_176(float value)
	{
		___m_renderedHeight_176 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredHeightDirty_177() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isPreferredHeightDirty_177)); }
	inline bool get_m_isPreferredHeightDirty_177() const { return ___m_isPreferredHeightDirty_177; }
	inline bool* get_address_of_m_isPreferredHeightDirty_177() { return &___m_isPreferredHeightDirty_177; }
	inline void set_m_isPreferredHeightDirty_177(bool value)
	{
		___m_isPreferredHeightDirty_177 = value;
	}

	inline static int32_t get_offset_of_m_isCalculatingPreferredValues_178() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCalculatingPreferredValues_178)); }
	inline bool get_m_isCalculatingPreferredValues_178() const { return ___m_isCalculatingPreferredValues_178; }
	inline bool* get_address_of_m_isCalculatingPreferredValues_178() { return &___m_isCalculatingPreferredValues_178; }
	inline void set_m_isCalculatingPreferredValues_178(bool value)
	{
		___m_isCalculatingPreferredValues_178 = value;
	}

	inline static int32_t get_offset_of_m_layoutPriority_179() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_layoutPriority_179)); }
	inline int32_t get_m_layoutPriority_179() const { return ___m_layoutPriority_179; }
	inline int32_t* get_address_of_m_layoutPriority_179() { return &___m_layoutPriority_179; }
	inline void set_m_layoutPriority_179(int32_t value)
	{
		___m_layoutPriority_179 = value;
	}

	inline static int32_t get_offset_of_m_isLayoutDirty_180() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isLayoutDirty_180)); }
	inline bool get_m_isLayoutDirty_180() const { return ___m_isLayoutDirty_180; }
	inline bool* get_address_of_m_isLayoutDirty_180() { return &___m_isLayoutDirty_180; }
	inline void set_m_isLayoutDirty_180(bool value)
	{
		___m_isLayoutDirty_180 = value;
	}

	inline static int32_t get_offset_of_m_isAwake_181() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isAwake_181)); }
	inline bool get_m_isAwake_181() const { return ___m_isAwake_181; }
	inline bool* get_address_of_m_isAwake_181() { return &___m_isAwake_181; }
	inline void set_m_isAwake_181(bool value)
	{
		___m_isAwake_181 = value;
	}

	inline static int32_t get_offset_of_m_isWaitingOnResourceLoad_182() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isWaitingOnResourceLoad_182)); }
	inline bool get_m_isWaitingOnResourceLoad_182() const { return ___m_isWaitingOnResourceLoad_182; }
	inline bool* get_address_of_m_isWaitingOnResourceLoad_182() { return &___m_isWaitingOnResourceLoad_182; }
	inline void set_m_isWaitingOnResourceLoad_182(bool value)
	{
		___m_isWaitingOnResourceLoad_182 = value;
	}

	inline static int32_t get_offset_of_m_isInputParsingRequired_183() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isInputParsingRequired_183)); }
	inline bool get_m_isInputParsingRequired_183() const { return ___m_isInputParsingRequired_183; }
	inline bool* get_address_of_m_isInputParsingRequired_183() { return &___m_isInputParsingRequired_183; }
	inline void set_m_isInputParsingRequired_183(bool value)
	{
		___m_isInputParsingRequired_183 = value;
	}

	inline static int32_t get_offset_of_m_inputSource_184() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_inputSource_184)); }
	inline int32_t get_m_inputSource_184() const { return ___m_inputSource_184; }
	inline int32_t* get_address_of_m_inputSource_184() { return &___m_inputSource_184; }
	inline void set_m_inputSource_184(int32_t value)
	{
		___m_inputSource_184 = value;
	}

	inline static int32_t get_offset_of_m_fontScale_185() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontScale_185)); }
	inline float get_m_fontScale_185() const { return ___m_fontScale_185; }
	inline float* get_address_of_m_fontScale_185() { return &___m_fontScale_185; }
	inline void set_m_fontScale_185(float value)
	{
		___m_fontScale_185 = value;
	}

	inline static int32_t get_offset_of_m_fontScaleMultiplier_186() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontScaleMultiplier_186)); }
	inline float get_m_fontScaleMultiplier_186() const { return ___m_fontScaleMultiplier_186; }
	inline float* get_address_of_m_fontScaleMultiplier_186() { return &___m_fontScaleMultiplier_186; }
	inline void set_m_fontScaleMultiplier_186(float value)
	{
		___m_fontScaleMultiplier_186 = value;
	}

	inline static int32_t get_offset_of_m_htmlTag_187() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_htmlTag_187)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_htmlTag_187() const { return ___m_htmlTag_187; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_htmlTag_187() { return &___m_htmlTag_187; }
	inline void set_m_htmlTag_187(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_htmlTag_187 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_htmlTag_187), (void*)value);
	}

	inline static int32_t get_offset_of_m_xmlAttribute_188() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_xmlAttribute_188)); }
	inline RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652* get_m_xmlAttribute_188() const { return ___m_xmlAttribute_188; }
	inline RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652** get_address_of_m_xmlAttribute_188() { return &___m_xmlAttribute_188; }
	inline void set_m_xmlAttribute_188(RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652* value)
	{
		___m_xmlAttribute_188 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_xmlAttribute_188), (void*)value);
	}

	inline static int32_t get_offset_of_m_attributeParameterValues_189() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_attributeParameterValues_189)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_m_attributeParameterValues_189() const { return ___m_attributeParameterValues_189; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_m_attributeParameterValues_189() { return &___m_attributeParameterValues_189; }
	inline void set_m_attributeParameterValues_189(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___m_attributeParameterValues_189 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_attributeParameterValues_189), (void*)value);
	}

	inline static int32_t get_offset_of_tag_LineIndent_190() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___tag_LineIndent_190)); }
	inline float get_tag_LineIndent_190() const { return ___tag_LineIndent_190; }
	inline float* get_address_of_tag_LineIndent_190() { return &___tag_LineIndent_190; }
	inline void set_tag_LineIndent_190(float value)
	{
		___tag_LineIndent_190 = value;
	}

	inline static int32_t get_offset_of_tag_Indent_191() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___tag_Indent_191)); }
	inline float get_tag_Indent_191() const { return ___tag_Indent_191; }
	inline float* get_address_of_tag_Indent_191() { return &___tag_Indent_191; }
	inline void set_tag_Indent_191(float value)
	{
		___tag_Indent_191 = value;
	}

	inline static int32_t get_offset_of_m_indentStack_192() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_indentStack_192)); }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  get_m_indentStack_192() const { return ___m_indentStack_192; }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA * get_address_of_m_indentStack_192() { return &___m_indentStack_192; }
	inline void set_m_indentStack_192(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  value)
	{
		___m_indentStack_192 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_indentStack_192))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_tag_NoParsing_193() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___tag_NoParsing_193)); }
	inline bool get_tag_NoParsing_193() const { return ___tag_NoParsing_193; }
	inline bool* get_address_of_tag_NoParsing_193() { return &___tag_NoParsing_193; }
	inline void set_tag_NoParsing_193(bool value)
	{
		___tag_NoParsing_193 = value;
	}

	inline static int32_t get_offset_of_m_isParsingText_194() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isParsingText_194)); }
	inline bool get_m_isParsingText_194() const { return ___m_isParsingText_194; }
	inline bool* get_address_of_m_isParsingText_194() { return &___m_isParsingText_194; }
	inline void set_m_isParsingText_194(bool value)
	{
		___m_isParsingText_194 = value;
	}

	inline static int32_t get_offset_of_m_FXMatrix_195() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FXMatrix_195)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_m_FXMatrix_195() const { return ___m_FXMatrix_195; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_m_FXMatrix_195() { return &___m_FXMatrix_195; }
	inline void set_m_FXMatrix_195(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___m_FXMatrix_195 = value;
	}

	inline static int32_t get_offset_of_m_isFXMatrixSet_196() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isFXMatrixSet_196)); }
	inline bool get_m_isFXMatrixSet_196() const { return ___m_isFXMatrixSet_196; }
	inline bool* get_address_of_m_isFXMatrixSet_196() { return &___m_isFXMatrixSet_196; }
	inline void set_m_isFXMatrixSet_196(bool value)
	{
		___m_isFXMatrixSet_196 = value;
	}

	inline static int32_t get_offset_of_m_InternalParsingBuffer_197() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_InternalParsingBuffer_197)); }
	inline UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505* get_m_InternalParsingBuffer_197() const { return ___m_InternalParsingBuffer_197; }
	inline UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505** get_address_of_m_InternalParsingBuffer_197() { return &___m_InternalParsingBuffer_197; }
	inline void set_m_InternalParsingBuffer_197(UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505* value)
	{
		___m_InternalParsingBuffer_197 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InternalParsingBuffer_197), (void*)value);
	}

	inline static int32_t get_offset_of_m_InternalParsingBufferSize_198() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_InternalParsingBufferSize_198)); }
	inline int32_t get_m_InternalParsingBufferSize_198() const { return ___m_InternalParsingBufferSize_198; }
	inline int32_t* get_address_of_m_InternalParsingBufferSize_198() { return &___m_InternalParsingBufferSize_198; }
	inline void set_m_InternalParsingBufferSize_198(int32_t value)
	{
		___m_InternalParsingBufferSize_198 = value;
	}

	inline static int32_t get_offset_of_m_internalCharacterInfo_199() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_internalCharacterInfo_199)); }
	inline TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* get_m_internalCharacterInfo_199() const { return ___m_internalCharacterInfo_199; }
	inline TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604** get_address_of_m_internalCharacterInfo_199() { return &___m_internalCharacterInfo_199; }
	inline void set_m_internalCharacterInfo_199(TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* value)
	{
		___m_internalCharacterInfo_199 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_internalCharacterInfo_199), (void*)value);
	}

	inline static int32_t get_offset_of_m_input_CharArray_200() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_input_CharArray_200)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_input_CharArray_200() const { return ___m_input_CharArray_200; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_input_CharArray_200() { return &___m_input_CharArray_200; }
	inline void set_m_input_CharArray_200(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_input_CharArray_200 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_input_CharArray_200), (void*)value);
	}

	inline static int32_t get_offset_of_m_charArray_Length_201() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_charArray_Length_201)); }
	inline int32_t get_m_charArray_Length_201() const { return ___m_charArray_Length_201; }
	inline int32_t* get_address_of_m_charArray_Length_201() { return &___m_charArray_Length_201; }
	inline void set_m_charArray_Length_201(int32_t value)
	{
		___m_charArray_Length_201 = value;
	}

	inline static int32_t get_offset_of_m_totalCharacterCount_202() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_totalCharacterCount_202)); }
	inline int32_t get_m_totalCharacterCount_202() const { return ___m_totalCharacterCount_202; }
	inline int32_t* get_address_of_m_totalCharacterCount_202() { return &___m_totalCharacterCount_202; }
	inline void set_m_totalCharacterCount_202(int32_t value)
	{
		___m_totalCharacterCount_202 = value;
	}

	inline static int32_t get_offset_of_m_SavedWordWrapState_203() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_SavedWordWrapState_203)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedWordWrapState_203() const { return ___m_SavedWordWrapState_203; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedWordWrapState_203() { return &___m_SavedWordWrapState_203; }
	inline void set_m_SavedWordWrapState_203(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedWordWrapState_203 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_203))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_203))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_203))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_203))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_203))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_203))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_203))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_203))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLineState_204() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_SavedLineState_204)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedLineState_204() const { return ___m_SavedLineState_204; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedLineState_204() { return &___m_SavedLineState_204; }
	inline void set_m_SavedLineState_204(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedLineState_204 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_204))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_204))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_204))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_204))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_204))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_204))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_204))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_204))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedEllipsisState_205() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_SavedEllipsisState_205)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedEllipsisState_205() const { return ___m_SavedEllipsisState_205; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedEllipsisState_205() { return &___m_SavedEllipsisState_205; }
	inline void set_m_SavedEllipsisState_205(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedEllipsisState_205 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_205))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_205))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_205))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_205))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_205))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_205))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_205))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_205))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLastValidState_206() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_SavedLastValidState_206)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedLastValidState_206() const { return ___m_SavedLastValidState_206; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedLastValidState_206() { return &___m_SavedLastValidState_206; }
	inline void set_m_SavedLastValidState_206(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedLastValidState_206 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_206))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_206))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_206))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_206))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_206))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_206))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_206))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_206))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedSoftLineBreakState_207() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_SavedSoftLineBreakState_207)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedSoftLineBreakState_207() const { return ___m_SavedSoftLineBreakState_207; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedSoftLineBreakState_207() { return &___m_SavedSoftLineBreakState_207; }
	inline void set_m_SavedSoftLineBreakState_207(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedSoftLineBreakState_207 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_207))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_207))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_207))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_207))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_207))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_207))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_207))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_207))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_EllipsisInsertionCandidateStack_208() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_EllipsisInsertionCandidateStack_208)); }
	inline TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E  get_m_EllipsisInsertionCandidateStack_208() const { return ___m_EllipsisInsertionCandidateStack_208; }
	inline TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E * get_address_of_m_EllipsisInsertionCandidateStack_208() { return &___m_EllipsisInsertionCandidateStack_208; }
	inline void set_m_EllipsisInsertionCandidateStack_208(TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E  value)
	{
		___m_EllipsisInsertionCandidateStack_208 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_EllipsisInsertionCandidateStack_208))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___textInfo_36), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_characterCount_209() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_characterCount_209)); }
	inline int32_t get_m_characterCount_209() const { return ___m_characterCount_209; }
	inline int32_t* get_address_of_m_characterCount_209() { return &___m_characterCount_209; }
	inline void set_m_characterCount_209(int32_t value)
	{
		___m_characterCount_209 = value;
	}

	inline static int32_t get_offset_of_m_firstCharacterOfLine_210() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstCharacterOfLine_210)); }
	inline int32_t get_m_firstCharacterOfLine_210() const { return ___m_firstCharacterOfLine_210; }
	inline int32_t* get_address_of_m_firstCharacterOfLine_210() { return &___m_firstCharacterOfLine_210; }
	inline void set_m_firstCharacterOfLine_210(int32_t value)
	{
		___m_firstCharacterOfLine_210 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacterOfLine_211() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstVisibleCharacterOfLine_211)); }
	inline int32_t get_m_firstVisibleCharacterOfLine_211() const { return ___m_firstVisibleCharacterOfLine_211; }
	inline int32_t* get_address_of_m_firstVisibleCharacterOfLine_211() { return &___m_firstVisibleCharacterOfLine_211; }
	inline void set_m_firstVisibleCharacterOfLine_211(int32_t value)
	{
		___m_firstVisibleCharacterOfLine_211 = value;
	}

	inline static int32_t get_offset_of_m_lastCharacterOfLine_212() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lastCharacterOfLine_212)); }
	inline int32_t get_m_lastCharacterOfLine_212() const { return ___m_lastCharacterOfLine_212; }
	inline int32_t* get_address_of_m_lastCharacterOfLine_212() { return &___m_lastCharacterOfLine_212; }
	inline void set_m_lastCharacterOfLine_212(int32_t value)
	{
		___m_lastCharacterOfLine_212 = value;
	}

	inline static int32_t get_offset_of_m_lastVisibleCharacterOfLine_213() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lastVisibleCharacterOfLine_213)); }
	inline int32_t get_m_lastVisibleCharacterOfLine_213() const { return ___m_lastVisibleCharacterOfLine_213; }
	inline int32_t* get_address_of_m_lastVisibleCharacterOfLine_213() { return &___m_lastVisibleCharacterOfLine_213; }
	inline void set_m_lastVisibleCharacterOfLine_213(int32_t value)
	{
		___m_lastVisibleCharacterOfLine_213 = value;
	}

	inline static int32_t get_offset_of_m_lineNumber_214() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineNumber_214)); }
	inline int32_t get_m_lineNumber_214() const { return ___m_lineNumber_214; }
	inline int32_t* get_address_of_m_lineNumber_214() { return &___m_lineNumber_214; }
	inline void set_m_lineNumber_214(int32_t value)
	{
		___m_lineNumber_214 = value;
	}

	inline static int32_t get_offset_of_m_lineVisibleCharacterCount_215() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineVisibleCharacterCount_215)); }
	inline int32_t get_m_lineVisibleCharacterCount_215() const { return ___m_lineVisibleCharacterCount_215; }
	inline int32_t* get_address_of_m_lineVisibleCharacterCount_215() { return &___m_lineVisibleCharacterCount_215; }
	inline void set_m_lineVisibleCharacterCount_215(int32_t value)
	{
		___m_lineVisibleCharacterCount_215 = value;
	}

	inline static int32_t get_offset_of_m_pageNumber_216() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_pageNumber_216)); }
	inline int32_t get_m_pageNumber_216() const { return ___m_pageNumber_216; }
	inline int32_t* get_address_of_m_pageNumber_216() { return &___m_pageNumber_216; }
	inline void set_m_pageNumber_216(int32_t value)
	{
		___m_pageNumber_216 = value;
	}

	inline static int32_t get_offset_of_m_PageAscender_217() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_PageAscender_217)); }
	inline float get_m_PageAscender_217() const { return ___m_PageAscender_217; }
	inline float* get_address_of_m_PageAscender_217() { return &___m_PageAscender_217; }
	inline void set_m_PageAscender_217(float value)
	{
		___m_PageAscender_217 = value;
	}

	inline static int32_t get_offset_of_m_maxTextAscender_218() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxTextAscender_218)); }
	inline float get_m_maxTextAscender_218() const { return ___m_maxTextAscender_218; }
	inline float* get_address_of_m_maxTextAscender_218() { return &___m_maxTextAscender_218; }
	inline void set_m_maxTextAscender_218(float value)
	{
		___m_maxTextAscender_218 = value;
	}

	inline static int32_t get_offset_of_m_maxCapHeight_219() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxCapHeight_219)); }
	inline float get_m_maxCapHeight_219() const { return ___m_maxCapHeight_219; }
	inline float* get_address_of_m_maxCapHeight_219() { return &___m_maxCapHeight_219; }
	inline void set_m_maxCapHeight_219(float value)
	{
		___m_maxCapHeight_219 = value;
	}

	inline static int32_t get_offset_of_m_ElementAscender_220() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ElementAscender_220)); }
	inline float get_m_ElementAscender_220() const { return ___m_ElementAscender_220; }
	inline float* get_address_of_m_ElementAscender_220() { return &___m_ElementAscender_220; }
	inline void set_m_ElementAscender_220(float value)
	{
		___m_ElementAscender_220 = value;
	}

	inline static int32_t get_offset_of_m_ElementDescender_221() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ElementDescender_221)); }
	inline float get_m_ElementDescender_221() const { return ___m_ElementDescender_221; }
	inline float* get_address_of_m_ElementDescender_221() { return &___m_ElementDescender_221; }
	inline void set_m_ElementDescender_221(float value)
	{
		___m_ElementDescender_221 = value;
	}

	inline static int32_t get_offset_of_m_maxLineAscender_222() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxLineAscender_222)); }
	inline float get_m_maxLineAscender_222() const { return ___m_maxLineAscender_222; }
	inline float* get_address_of_m_maxLineAscender_222() { return &___m_maxLineAscender_222; }
	inline void set_m_maxLineAscender_222(float value)
	{
		___m_maxLineAscender_222 = value;
	}

	inline static int32_t get_offset_of_m_maxLineDescender_223() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxLineDescender_223)); }
	inline float get_m_maxLineDescender_223() const { return ___m_maxLineDescender_223; }
	inline float* get_address_of_m_maxLineDescender_223() { return &___m_maxLineDescender_223; }
	inline void set_m_maxLineDescender_223(float value)
	{
		___m_maxLineDescender_223 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineAscender_224() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_startOfLineAscender_224)); }
	inline float get_m_startOfLineAscender_224() const { return ___m_startOfLineAscender_224; }
	inline float* get_address_of_m_startOfLineAscender_224() { return &___m_startOfLineAscender_224; }
	inline void set_m_startOfLineAscender_224(float value)
	{
		___m_startOfLineAscender_224 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineDescender_225() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_startOfLineDescender_225)); }
	inline float get_m_startOfLineDescender_225() const { return ___m_startOfLineDescender_225; }
	inline float* get_address_of_m_startOfLineDescender_225() { return &___m_startOfLineDescender_225; }
	inline void set_m_startOfLineDescender_225(float value)
	{
		___m_startOfLineDescender_225 = value;
	}

	inline static int32_t get_offset_of_m_lineOffset_226() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineOffset_226)); }
	inline float get_m_lineOffset_226() const { return ___m_lineOffset_226; }
	inline float* get_address_of_m_lineOffset_226() { return &___m_lineOffset_226; }
	inline void set_m_lineOffset_226(float value)
	{
		___m_lineOffset_226 = value;
	}

	inline static int32_t get_offset_of_m_meshExtents_227() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_meshExtents_227)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_m_meshExtents_227() const { return ___m_meshExtents_227; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_m_meshExtents_227() { return &___m_meshExtents_227; }
	inline void set_m_meshExtents_227(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___m_meshExtents_227 = value;
	}

	inline static int32_t get_offset_of_m_htmlColor_228() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_htmlColor_228)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_htmlColor_228() const { return ___m_htmlColor_228; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_htmlColor_228() { return &___m_htmlColor_228; }
	inline void set_m_htmlColor_228(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_htmlColor_228 = value;
	}

	inline static int32_t get_offset_of_m_colorStack_229() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorStack_229)); }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  get_m_colorStack_229() const { return ___m_colorStack_229; }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D * get_address_of_m_colorStack_229() { return &___m_colorStack_229; }
	inline void set_m_colorStack_229(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  value)
	{
		___m_colorStack_229 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorStack_229))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_underlineColorStack_230() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_underlineColorStack_230)); }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  get_m_underlineColorStack_230() const { return ___m_underlineColorStack_230; }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D * get_address_of_m_underlineColorStack_230() { return &___m_underlineColorStack_230; }
	inline void set_m_underlineColorStack_230(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  value)
	{
		___m_underlineColorStack_230 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_underlineColorStack_230))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_strikethroughColorStack_231() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_strikethroughColorStack_231)); }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  get_m_strikethroughColorStack_231() const { return ___m_strikethroughColorStack_231; }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D * get_address_of_m_strikethroughColorStack_231() { return &___m_strikethroughColorStack_231; }
	inline void set_m_strikethroughColorStack_231(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  value)
	{
		___m_strikethroughColorStack_231 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_strikethroughColorStack_231))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_HighlightStateStack_232() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_HighlightStateStack_232)); }
	inline TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  get_m_HighlightStateStack_232() const { return ___m_HighlightStateStack_232; }
	inline TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2 * get_address_of_m_HighlightStateStack_232() { return &___m_HighlightStateStack_232; }
	inline void set_m_HighlightStateStack_232(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  value)
	{
		___m_HighlightStateStack_232 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_HighlightStateStack_232))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_colorGradientPreset_233() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorGradientPreset_233)); }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * get_m_colorGradientPreset_233() const { return ___m_colorGradientPreset_233; }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 ** get_address_of_m_colorGradientPreset_233() { return &___m_colorGradientPreset_233; }
	inline void set_m_colorGradientPreset_233(TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * value)
	{
		___m_colorGradientPreset_233 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_colorGradientPreset_233), (void*)value);
	}

	inline static int32_t get_offset_of_m_colorGradientStack_234() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorGradientStack_234)); }
	inline TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  get_m_colorGradientStack_234() const { return ___m_colorGradientStack_234; }
	inline TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C * get_address_of_m_colorGradientStack_234() { return &___m_colorGradientStack_234; }
	inline void set_m_colorGradientStack_234(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  value)
	{
		___m_colorGradientStack_234 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_234))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_234))->___m_DefaultItem_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_colorGradientPresetIsTinted_235() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorGradientPresetIsTinted_235)); }
	inline bool get_m_colorGradientPresetIsTinted_235() const { return ___m_colorGradientPresetIsTinted_235; }
	inline bool* get_address_of_m_colorGradientPresetIsTinted_235() { return &___m_colorGradientPresetIsTinted_235; }
	inline void set_m_colorGradientPresetIsTinted_235(bool value)
	{
		___m_colorGradientPresetIsTinted_235 = value;
	}

	inline static int32_t get_offset_of_m_tabSpacing_236() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_tabSpacing_236)); }
	inline float get_m_tabSpacing_236() const { return ___m_tabSpacing_236; }
	inline float* get_address_of_m_tabSpacing_236() { return &___m_tabSpacing_236; }
	inline void set_m_tabSpacing_236(float value)
	{
		___m_tabSpacing_236 = value;
	}

	inline static int32_t get_offset_of_m_spacing_237() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spacing_237)); }
	inline float get_m_spacing_237() const { return ___m_spacing_237; }
	inline float* get_address_of_m_spacing_237() { return &___m_spacing_237; }
	inline void set_m_spacing_237(float value)
	{
		___m_spacing_237 = value;
	}

	inline static int32_t get_offset_of_m_TextStyleStacks_238() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_TextStyleStacks_238)); }
	inline TMP_TextProcessingStack_1U5BU5D_tD40BE2C9C48281D1F72B04DDB85CBF15B89FCA29* get_m_TextStyleStacks_238() const { return ___m_TextStyleStacks_238; }
	inline TMP_TextProcessingStack_1U5BU5D_tD40BE2C9C48281D1F72B04DDB85CBF15B89FCA29** get_address_of_m_TextStyleStacks_238() { return &___m_TextStyleStacks_238; }
	inline void set_m_TextStyleStacks_238(TMP_TextProcessingStack_1U5BU5D_tD40BE2C9C48281D1F72B04DDB85CBF15B89FCA29* value)
	{
		___m_TextStyleStacks_238 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyleStacks_238), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleStackDepth_239() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_TextStyleStackDepth_239)); }
	inline int32_t get_m_TextStyleStackDepth_239() const { return ___m_TextStyleStackDepth_239; }
	inline int32_t* get_address_of_m_TextStyleStackDepth_239() { return &___m_TextStyleStackDepth_239; }
	inline void set_m_TextStyleStackDepth_239(int32_t value)
	{
		___m_TextStyleStackDepth_239 = value;
	}

	inline static int32_t get_offset_of_m_ItalicAngleStack_240() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ItalicAngleStack_240)); }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  get_m_ItalicAngleStack_240() const { return ___m_ItalicAngleStack_240; }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06 * get_address_of_m_ItalicAngleStack_240() { return &___m_ItalicAngleStack_240; }
	inline void set_m_ItalicAngleStack_240(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  value)
	{
		___m_ItalicAngleStack_240 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ItalicAngleStack_240))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_ItalicAngle_241() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ItalicAngle_241)); }
	inline int32_t get_m_ItalicAngle_241() const { return ___m_ItalicAngle_241; }
	inline int32_t* get_address_of_m_ItalicAngle_241() { return &___m_ItalicAngle_241; }
	inline void set_m_ItalicAngle_241(int32_t value)
	{
		___m_ItalicAngle_241 = value;
	}

	inline static int32_t get_offset_of_m_actionStack_242() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_actionStack_242)); }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  get_m_actionStack_242() const { return ___m_actionStack_242; }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06 * get_address_of_m_actionStack_242() { return &___m_actionStack_242; }
	inline void set_m_actionStack_242(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  value)
	{
		___m_actionStack_242 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_actionStack_242))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_padding_243() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_padding_243)); }
	inline float get_m_padding_243() const { return ___m_padding_243; }
	inline float* get_address_of_m_padding_243() { return &___m_padding_243; }
	inline void set_m_padding_243(float value)
	{
		___m_padding_243 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffset_244() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_baselineOffset_244)); }
	inline float get_m_baselineOffset_244() const { return ___m_baselineOffset_244; }
	inline float* get_address_of_m_baselineOffset_244() { return &___m_baselineOffset_244; }
	inline void set_m_baselineOffset_244(float value)
	{
		___m_baselineOffset_244 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffsetStack_245() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_baselineOffsetStack_245)); }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  get_m_baselineOffsetStack_245() const { return ___m_baselineOffsetStack_245; }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA * get_address_of_m_baselineOffsetStack_245() { return &___m_baselineOffsetStack_245; }
	inline void set_m_baselineOffsetStack_245(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  value)
	{
		___m_baselineOffsetStack_245 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_baselineOffsetStack_245))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_xAdvance_246() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_xAdvance_246)); }
	inline float get_m_xAdvance_246() const { return ___m_xAdvance_246; }
	inline float* get_address_of_m_xAdvance_246() { return &___m_xAdvance_246; }
	inline void set_m_xAdvance_246(float value)
	{
		___m_xAdvance_246 = value;
	}

	inline static int32_t get_offset_of_m_textElementType_247() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textElementType_247)); }
	inline int32_t get_m_textElementType_247() const { return ___m_textElementType_247; }
	inline int32_t* get_address_of_m_textElementType_247() { return &___m_textElementType_247; }
	inline void set_m_textElementType_247(int32_t value)
	{
		___m_textElementType_247 = value;
	}

	inline static int32_t get_offset_of_m_cached_TextElement_248() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_cached_TextElement_248)); }
	inline TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * get_m_cached_TextElement_248() const { return ___m_cached_TextElement_248; }
	inline TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 ** get_address_of_m_cached_TextElement_248() { return &___m_cached_TextElement_248; }
	inline void set_m_cached_TextElement_248(TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * value)
	{
		___m_cached_TextElement_248 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cached_TextElement_248), (void*)value);
	}

	inline static int32_t get_offset_of_m_Ellipsis_249() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_Ellipsis_249)); }
	inline SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF  get_m_Ellipsis_249() const { return ___m_Ellipsis_249; }
	inline SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF * get_address_of_m_Ellipsis_249() { return &___m_Ellipsis_249; }
	inline void set_m_Ellipsis_249(SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF  value)
	{
		___m_Ellipsis_249 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_249))->___character_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_249))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_249))->___material_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Underline_250() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_Underline_250)); }
	inline SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF  get_m_Underline_250() const { return ___m_Underline_250; }
	inline SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF * get_address_of_m_Underline_250() { return &___m_Underline_250; }
	inline void set_m_Underline_250(SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF  value)
	{
		___m_Underline_250 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_250))->___character_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_250))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_250))->___material_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_defaultSpriteAsset_251() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_defaultSpriteAsset_251)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_m_defaultSpriteAsset_251() const { return ___m_defaultSpriteAsset_251; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_m_defaultSpriteAsset_251() { return &___m_defaultSpriteAsset_251; }
	inline void set_m_defaultSpriteAsset_251(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___m_defaultSpriteAsset_251 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultSpriteAsset_251), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentSpriteAsset_252() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentSpriteAsset_252)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_m_currentSpriteAsset_252() const { return ___m_currentSpriteAsset_252; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_m_currentSpriteAsset_252() { return &___m_currentSpriteAsset_252; }
	inline void set_m_currentSpriteAsset_252(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___m_currentSpriteAsset_252 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentSpriteAsset_252), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteCount_253() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteCount_253)); }
	inline int32_t get_m_spriteCount_253() const { return ___m_spriteCount_253; }
	inline int32_t* get_address_of_m_spriteCount_253() { return &___m_spriteCount_253; }
	inline void set_m_spriteCount_253(int32_t value)
	{
		___m_spriteCount_253 = value;
	}

	inline static int32_t get_offset_of_m_spriteIndex_254() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteIndex_254)); }
	inline int32_t get_m_spriteIndex_254() const { return ___m_spriteIndex_254; }
	inline int32_t* get_address_of_m_spriteIndex_254() { return &___m_spriteIndex_254; }
	inline void set_m_spriteIndex_254(int32_t value)
	{
		___m_spriteIndex_254 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimationID_255() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteAnimationID_255)); }
	inline int32_t get_m_spriteAnimationID_255() const { return ___m_spriteAnimationID_255; }
	inline int32_t* get_address_of_m_spriteAnimationID_255() { return &___m_spriteAnimationID_255; }
	inline void set_m_spriteAnimationID_255(int32_t value)
	{
		___m_spriteAnimationID_255 = value;
	}

	inline static int32_t get_offset_of_m_ignoreActiveState_256() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ignoreActiveState_256)); }
	inline bool get_m_ignoreActiveState_256() const { return ___m_ignoreActiveState_256; }
	inline bool* get_address_of_m_ignoreActiveState_256() { return &___m_ignoreActiveState_256; }
	inline void set_m_ignoreActiveState_256(bool value)
	{
		___m_ignoreActiveState_256 = value;
	}

	inline static int32_t get_offset_of_k_Power_257() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___k_Power_257)); }
	inline DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F* get_k_Power_257() const { return ___k_Power_257; }
	inline DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F** get_address_of_k_Power_257() { return &___k_Power_257; }
	inline void set_k_Power_257(DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F* value)
	{
		___k_Power_257 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Power_257), (void*)value);
	}
};

struct TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields
{
public:
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___s_colorWhite_53;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_t041AB6BBA06AC552F17A2D2F97B1728A58D16029 * ___OnFontAssetRequest_161;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t974D5AB2327337E73FB2126366C9513F1C075512 * ___OnSpriteAssetRequest_162;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___k_LargePositiveVector2_258;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___k_LargeNegativeVector2_259;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_260;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_261;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_262;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_263;

public:
	inline static int32_t get_offset_of_s_colorWhite_53() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___s_colorWhite_53)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_s_colorWhite_53() const { return ___s_colorWhite_53; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_s_colorWhite_53() { return &___s_colorWhite_53; }
	inline void set_s_colorWhite_53(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___s_colorWhite_53 = value;
	}

	inline static int32_t get_offset_of_OnFontAssetRequest_161() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___OnFontAssetRequest_161)); }
	inline Func_3_t041AB6BBA06AC552F17A2D2F97B1728A58D16029 * get_OnFontAssetRequest_161() const { return ___OnFontAssetRequest_161; }
	inline Func_3_t041AB6BBA06AC552F17A2D2F97B1728A58D16029 ** get_address_of_OnFontAssetRequest_161() { return &___OnFontAssetRequest_161; }
	inline void set_OnFontAssetRequest_161(Func_3_t041AB6BBA06AC552F17A2D2F97B1728A58D16029 * value)
	{
		___OnFontAssetRequest_161 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFontAssetRequest_161), (void*)value);
	}

	inline static int32_t get_offset_of_OnSpriteAssetRequest_162() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___OnSpriteAssetRequest_162)); }
	inline Func_3_t974D5AB2327337E73FB2126366C9513F1C075512 * get_OnSpriteAssetRequest_162() const { return ___OnSpriteAssetRequest_162; }
	inline Func_3_t974D5AB2327337E73FB2126366C9513F1C075512 ** get_address_of_OnSpriteAssetRequest_162() { return &___OnSpriteAssetRequest_162; }
	inline void set_OnSpriteAssetRequest_162(Func_3_t974D5AB2327337E73FB2126366C9513F1C075512 * value)
	{
		___OnSpriteAssetRequest_162 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSpriteAssetRequest_162), (void*)value);
	}

	inline static int32_t get_offset_of_k_LargePositiveVector2_258() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargePositiveVector2_258)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_k_LargePositiveVector2_258() const { return ___k_LargePositiveVector2_258; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_k_LargePositiveVector2_258() { return &___k_LargePositiveVector2_258; }
	inline void set_k_LargePositiveVector2_258(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___k_LargePositiveVector2_258 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeVector2_259() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargeNegativeVector2_259)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_k_LargeNegativeVector2_259() const { return ___k_LargeNegativeVector2_259; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_k_LargeNegativeVector2_259() { return &___k_LargeNegativeVector2_259; }
	inline void set_k_LargeNegativeVector2_259(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___k_LargeNegativeVector2_259 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveFloat_260() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargePositiveFloat_260)); }
	inline float get_k_LargePositiveFloat_260() const { return ___k_LargePositiveFloat_260; }
	inline float* get_address_of_k_LargePositiveFloat_260() { return &___k_LargePositiveFloat_260; }
	inline void set_k_LargePositiveFloat_260(float value)
	{
		___k_LargePositiveFloat_260 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeFloat_261() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargeNegativeFloat_261)); }
	inline float get_k_LargeNegativeFloat_261() const { return ___k_LargeNegativeFloat_261; }
	inline float* get_address_of_k_LargeNegativeFloat_261() { return &___k_LargeNegativeFloat_261; }
	inline void set_k_LargeNegativeFloat_261(float value)
	{
		___k_LargeNegativeFloat_261 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveInt_262() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargePositiveInt_262)); }
	inline int32_t get_k_LargePositiveInt_262() const { return ___k_LargePositiveInt_262; }
	inline int32_t* get_address_of_k_LargePositiveInt_262() { return &___k_LargePositiveInt_262; }
	inline void set_k_LargePositiveInt_262(int32_t value)
	{
		___k_LargePositiveInt_262 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeInt_263() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargeNegativeInt_263)); }
	inline int32_t get_k_LargeNegativeInt_263() const { return ___k_LargeNegativeInt_263; }
	inline int32_t* get_address_of_k_LargeNegativeInt_263() { return &___k_LargeNegativeInt_263; }
	inline void set_k_LargeNegativeInt_263(int32_t value)
	{
		___k_LargeNegativeInt_263 = value;
	}
};


// TMPro.TextMeshProUGUI
struct  TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438  : public TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7
{
public:
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_264;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E* ___m_subTextObjects_265;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_266;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_RectTransformCorners_267;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_canvasRenderer_268;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_canvas_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_270;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_271;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_baseMaterial_272;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_273;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___m_maskOffset_274;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_EnvMapMatrix_275;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_276;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_277;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___m_DelayedGraphicRebuild_278;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___m_DelayedMaterialRebuild_279;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___m_ClipRect_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_281;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD * ___OnPreRenderText_282;

public:
	inline static int32_t get_offset_of_m_hasFontAssetChanged_264() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_hasFontAssetChanged_264)); }
	inline bool get_m_hasFontAssetChanged_264() const { return ___m_hasFontAssetChanged_264; }
	inline bool* get_address_of_m_hasFontAssetChanged_264() { return &___m_hasFontAssetChanged_264; }
	inline void set_m_hasFontAssetChanged_264(bool value)
	{
		___m_hasFontAssetChanged_264 = value;
	}

	inline static int32_t get_offset_of_m_subTextObjects_265() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_subTextObjects_265)); }
	inline TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E* get_m_subTextObjects_265() const { return ___m_subTextObjects_265; }
	inline TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E** get_address_of_m_subTextObjects_265() { return &___m_subTextObjects_265; }
	inline void set_m_subTextObjects_265(TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E* value)
	{
		___m_subTextObjects_265 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subTextObjects_265), (void*)value);
	}

	inline static int32_t get_offset_of_m_previousLossyScaleY_266() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_previousLossyScaleY_266)); }
	inline float get_m_previousLossyScaleY_266() const { return ___m_previousLossyScaleY_266; }
	inline float* get_address_of_m_previousLossyScaleY_266() { return &___m_previousLossyScaleY_266; }
	inline void set_m_previousLossyScaleY_266(float value)
	{
		___m_previousLossyScaleY_266 = value;
	}

	inline static int32_t get_offset_of_m_RectTransformCorners_267() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_RectTransformCorners_267)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_RectTransformCorners_267() const { return ___m_RectTransformCorners_267; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_RectTransformCorners_267() { return &___m_RectTransformCorners_267; }
	inline void set_m_RectTransformCorners_267(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_RectTransformCorners_267 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransformCorners_267), (void*)value);
	}

	inline static int32_t get_offset_of_m_canvasRenderer_268() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_canvasRenderer_268)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_canvasRenderer_268() const { return ___m_canvasRenderer_268; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_canvasRenderer_268() { return &___m_canvasRenderer_268; }
	inline void set_m_canvasRenderer_268(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_canvasRenderer_268 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_canvasRenderer_268), (void*)value);
	}

	inline static int32_t get_offset_of_m_canvas_269() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_canvas_269)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_canvas_269() const { return ___m_canvas_269; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_canvas_269() { return &___m_canvas_269; }
	inline void set_m_canvas_269(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_canvas_269 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_canvas_269), (void*)value);
	}

	inline static int32_t get_offset_of_m_isFirstAllocation_270() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isFirstAllocation_270)); }
	inline bool get_m_isFirstAllocation_270() const { return ___m_isFirstAllocation_270; }
	inline bool* get_address_of_m_isFirstAllocation_270() { return &___m_isFirstAllocation_270; }
	inline void set_m_isFirstAllocation_270(bool value)
	{
		___m_isFirstAllocation_270 = value;
	}

	inline static int32_t get_offset_of_m_max_characters_271() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_max_characters_271)); }
	inline int32_t get_m_max_characters_271() const { return ___m_max_characters_271; }
	inline int32_t* get_address_of_m_max_characters_271() { return &___m_max_characters_271; }
	inline void set_m_max_characters_271(int32_t value)
	{
		___m_max_characters_271 = value;
	}

	inline static int32_t get_offset_of_m_baseMaterial_272() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_baseMaterial_272)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_baseMaterial_272() const { return ___m_baseMaterial_272; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_baseMaterial_272() { return &___m_baseMaterial_272; }
	inline void set_m_baseMaterial_272(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_baseMaterial_272 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_baseMaterial_272), (void*)value);
	}

	inline static int32_t get_offset_of_m_isScrollRegionSet_273() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isScrollRegionSet_273)); }
	inline bool get_m_isScrollRegionSet_273() const { return ___m_isScrollRegionSet_273; }
	inline bool* get_address_of_m_isScrollRegionSet_273() { return &___m_isScrollRegionSet_273; }
	inline void set_m_isScrollRegionSet_273(bool value)
	{
		___m_isScrollRegionSet_273 = value;
	}

	inline static int32_t get_offset_of_m_maskOffset_274() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_maskOffset_274)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_m_maskOffset_274() const { return ___m_maskOffset_274; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_m_maskOffset_274() { return &___m_maskOffset_274; }
	inline void set_m_maskOffset_274(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___m_maskOffset_274 = value;
	}

	inline static int32_t get_offset_of_m_EnvMapMatrix_275() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_EnvMapMatrix_275)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_m_EnvMapMatrix_275() const { return ___m_EnvMapMatrix_275; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_m_EnvMapMatrix_275() { return &___m_EnvMapMatrix_275; }
	inline void set_m_EnvMapMatrix_275(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___m_EnvMapMatrix_275 = value;
	}

	inline static int32_t get_offset_of_m_isRegisteredForEvents_276() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isRegisteredForEvents_276)); }
	inline bool get_m_isRegisteredForEvents_276() const { return ___m_isRegisteredForEvents_276; }
	inline bool* get_address_of_m_isRegisteredForEvents_276() { return &___m_isRegisteredForEvents_276; }
	inline void set_m_isRegisteredForEvents_276(bool value)
	{
		___m_isRegisteredForEvents_276 = value;
	}

	inline static int32_t get_offset_of_m_isRebuildingLayout_277() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isRebuildingLayout_277)); }
	inline bool get_m_isRebuildingLayout_277() const { return ___m_isRebuildingLayout_277; }
	inline bool* get_address_of_m_isRebuildingLayout_277() { return &___m_isRebuildingLayout_277; }
	inline void set_m_isRebuildingLayout_277(bool value)
	{
		___m_isRebuildingLayout_277 = value;
	}

	inline static int32_t get_offset_of_m_DelayedGraphicRebuild_278() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_DelayedGraphicRebuild_278)); }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * get_m_DelayedGraphicRebuild_278() const { return ___m_DelayedGraphicRebuild_278; }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC ** get_address_of_m_DelayedGraphicRebuild_278() { return &___m_DelayedGraphicRebuild_278; }
	inline void set_m_DelayedGraphicRebuild_278(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * value)
	{
		___m_DelayedGraphicRebuild_278 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelayedGraphicRebuild_278), (void*)value);
	}

	inline static int32_t get_offset_of_m_DelayedMaterialRebuild_279() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_DelayedMaterialRebuild_279)); }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * get_m_DelayedMaterialRebuild_279() const { return ___m_DelayedMaterialRebuild_279; }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC ** get_address_of_m_DelayedMaterialRebuild_279() { return &___m_DelayedMaterialRebuild_279; }
	inline void set_m_DelayedMaterialRebuild_279(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * value)
	{
		___m_DelayedMaterialRebuild_279 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelayedMaterialRebuild_279), (void*)value);
	}

	inline static int32_t get_offset_of_m_ClipRect_280() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_ClipRect_280)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_m_ClipRect_280() const { return ___m_ClipRect_280; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_m_ClipRect_280() { return &___m_ClipRect_280; }
	inline void set_m_ClipRect_280(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___m_ClipRect_280 = value;
	}

	inline static int32_t get_offset_of_m_ValidRect_281() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_ValidRect_281)); }
	inline bool get_m_ValidRect_281() const { return ___m_ValidRect_281; }
	inline bool* get_address_of_m_ValidRect_281() { return &___m_ValidRect_281; }
	inline void set_m_ValidRect_281(bool value)
	{
		___m_ValidRect_281 = value;
	}

	inline static int32_t get_offset_of_OnPreRenderText_282() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___OnPreRenderText_282)); }
	inline Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD * get_OnPreRenderText_282() const { return ___OnPreRenderText_282; }
	inline Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD ** get_address_of_OnPreRenderText_282() { return &___OnPreRenderText_282; }
	inline void set_OnPreRenderText_282(Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD * value)
	{
		___OnPreRenderText_282 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreRenderText_282), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  m_Items[1];

public:
	inline Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m610B6793DCC2F987290D328942E649B5B7DE0F9A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___eulers0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m0F354939D5084DDFF6B9902E62D3DCA7A3B53EA3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___translation0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_m8D129E88E62AD02AB81CFC8BE694C4A5A2B2B380 (Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_Find_m673797B6329C2669A543904532ABA1680DA4EAD1 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, String_t* ___n0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 GameData::get_rank()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t GameData_get_rank_mAE1E8FBA1F2E3514282BEB903AA6ACECDDDB6E71_inline (const RuntimeMethod* method);
// System.Void Em::SetRank(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Em_SetRank_mD2E682562C2A02F62806C03AE5B123111715D21D (Em_t2FB906755A5C8B9E1A38CEE942BBE1477CA512F9 * __this, int32_t ___rank0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_m7AC4E332A5DCA04E0AD91544AF836744BA8C2583 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetFloat_mA58D5A6903B002A03BDEF35B34063E96C8483A35 (String_t* ___key0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_mBF4101DF829B4738CCC293E1C2D173AEE45EFE62 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m6CC1FE22D4B10AC819F55802D725BE17EA2AD37B (const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.String GameData::get_name()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* GameData_get_name_mB797547A4AB5AF4C498AE31BA6ED18FDC83541B5_inline (const RuntimeMethod* method);
// System.Single GameData::get_time()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float GameData_get_time_m4E5B3140960E8C711FEF0BACBBE7AB88FDDA4271_inline (const RuntimeMethod* method);
// System.Int32 GameData::get_selected()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t GameData_get_selected_m8E8BA8713A55BD9E2DFDCE4FC887392C79683943_inline (const RuntimeMethod* method);
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline (Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9 (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * __this, UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mA005EB22CB989AC3794334754F15E1C0D2FF1C95 (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::FindWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_FindWithTag_mF188C0A7A5DAC355AB020E2964B155F355237CB5 (String_t* ___tag0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___exists0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<PlayerController>()
inline PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * GameObject_GetComponent_TisPlayerController_t4CE339054014370D89B89922EDC0EA2766589C85_mE97771A17F0DD6C17DECDDE26CC1D2D6B0C02C7E (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.CharacterController>()
inline CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E * GameObject_GetComponent_TisCharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E_mFEFA14BEB7F1347EB848907DD7F40F2DBDB2AEB4 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterController_Move_m31D77B4E934015FE3D6CE04BF8017A1DD0487434 (CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___motion0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mD074608D7FEC96A53C57A456BA613EE01C31D4B7 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, String_t* ___tag0, const RuntimeMethod* method);
// System.Void TMPro.TMP_Text::set_alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_alpha_mC48AF8C211E3FA0E5ADDEA71D8ACFA2AA7BD2271 (TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * __this, float ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void GameData::set_time(System.Single)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GameData_set_time_mF61A5E4EA88301619784B34E77D1EDF721C915AE_inline (float ___value0, const RuntimeMethod* method);
// System.Void GameData::set_rank(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GameData_set_rank_m3FE835211C77E0133834346389ABD148910B1918_inline (int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_m019E27A0FE021A28A1C672801416ACA5E770933F (int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_mDB51E60B3D7B14873A6F5FBE5E0A432D4A46C431 (bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
inline CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E * Component_GetComponent_TisCharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E_m1DCA6E99D55768E09085D1B6421BB963CFA4F7AB (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void PlayerController::Balance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Balance_mB5FC97919AF2346FEC58CD5CA31A559E2D319A4F (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, const RuntimeMethod* method);
// System.Void PlayerController::CameraDistanceCtrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_CameraDistanceCtrl_m3E633FDCEFA7E7447A61B0F97BB4BCE2170F666F (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.CharacterController::get_isGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterController_get_isGrounded_m5BB5A50DD5942ED9AEF9F3A97CF52913591E077B (CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E * __this, const RuntimeMethod* method);
// System.Void PlayerController::GradientCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_GradientCheck_mBFC461FBA9C7B778616637921255C38C751D8972 (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, const RuntimeMethod* method);
// System.Void PlayerController::MoveCalc(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_MoveCalc_mB1DF947C3B9BC6D1F9A822592FF13183F0A51643 (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, float ___ratio0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m497805BA217139E42808899782FA05C15BC9879E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m5AD76E22AA839706219AD86A4E0BE5276AF8E28A (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.ControllerColliderHit::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ControllerColliderHit_get_gameObject_m5629F6FD1A1547625030EA17C0FDA3FE3F3BDF31 (ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Physics::get_gravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Physics_get_gravity_mC0F44371C49C1DD1455D6ADEC824BAE35E1E104B (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_mC68301A9D93702F0C393E45C6337348062EACE21 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_mC5E92A989DD8B2E7B854F9D84B528A34AEAA1A17 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m4B2B374C0B089A7ED0B522A3A4C56FA868992685 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_TransformDirection_m85FC1D7E1322E94F65DA59AEF3B1166850B183EF (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_m19CFAF3A6E1A65EE44FB197020F11AA502DF468D (String_t* ___buttonName0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___a0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forward0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_MoveTowards_mA288BB5AA73DDA9CA76EDC11F339BAFDA1E4FF45 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___current0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_mE4C29F6980EBBBD954637721E6E13A0BE2B13C43 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_down_m3F76A48E5B7C82B35EE047375538AFD91A305F55 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m0583CCAA9E2F3BD031F12FA080837E9A48EEC16D (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction1, float ___maxDistance2, const RuntimeMethod* method);
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_mD87D3051ACE7EC6F5B54F4FC9E18572C917CA0D1 (String_t* ___key0, const RuntimeMethod* method);
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_m3031AD2D5DEAB97677A9EF629618541437F079F1 (String_t* ___key0, const RuntimeMethod* method);
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_m254A03CC8DCA9E12EE09A016B64EDB7AB9938957 (String_t* ___key0, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m318D2B42E0FCAF179BF86D6C2353B38A58089BAD (String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::DeleteAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_DeleteAll_m7889B3CBD8B243DEC40D308C264F23EB098B7682 (const RuntimeMethod* method);
// System.String TMPro.TMP_InputField::get_text()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_m586F8E3FFBB52A125B2D77D3FBBCC1185EDC920C_inline (TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.Void GameData::set_selected(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GameData_set_selected_m0F16D2E8EDD1DE62BDBC13890DBB3C58B80A712D_inline (int32_t ___value0, const RuntimeMethod* method);
// System.Void GameData::set_name(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GameData_set_name_m822B2CAFFF7DDFFC6A44F2855F8F9A0272481B6D_inline (String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::SetFromTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_SetFromTransform_m6467352ED87301E5F4A76456060A765CAB96AF3E (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___t0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784 (int32_t ___key0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_back_mE7EF8625637E6F8B9E6B42A6AE140777C51E02F7 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_left_m74B52D8CFD8C62138067B2EB6846B6E9E51B7C20 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m4899272EB31D43EC4A3A1A115843CD3D9AA2C4EC (int32_t ___button0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m43C68DE93C7D990E875BA53C4DEC9CA6230C8B79 (int32_t ___button0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m51CAA6B1C54B7EF44FE4D74B422C1DA1FA6F8776 (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * __this, float ___time0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityTemplateProjects.SimpleCameraController::GetInputTranslationDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SimpleCameraController_GetInputTranslationDirection_m73C99DB69CEB467834BBA00A62415D1CEEF0CB47 (SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Input_get_mouseScrollDelta_m66F785090C429CE7DCDEF09C92CDBDD08FCDE98D (const RuntimeMethod* method);
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_Translate_m76BCC104A48EA7F125D5A50D874A2DEEA7967247 (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___translation0, const RuntimeMethod* method);
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::LerpTowards(UnityTemplateProjects.SimpleCameraController/CameraState,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_LerpTowards_m883AAF2D3C7F5045B64CAF655FB84EF0FC98F282 (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * ___target0, float ___positionLerpPct1, float ___rotationLerpPct2, const RuntimeMethod* method);
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::UpdateTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_UpdateTransform_mE3349362276789C1617C01276F7DE533BBA22623 (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___t0, const RuntimeMethod* method);
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState__ctor_m4A83DF36C7D280050EA1B101E61B7E345C31A322 (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_m10FFFE5FE1213C3AE88359375398F213B24F18D5 (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * __this, float ___time0, float ___value1, float ___inTangent2, float ___outTangent3, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mE9462D171C06A2A746B9DA1B0A6B0F4FC7DB94CF (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * __this, KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* ___keys0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AnimationScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationScript_Start_m0F6B8F84A29487881DA126F150E7FB7CFF6B55F0 (AnimationScript_t1DFBF920853C5C53C5B0D9CB72C39D82E6EED0EE * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void AnimationScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationScript_Update_m9185E3C61E04D4446FA04A50ADF03CC0A9996CA2 (AnimationScript_t1DFBF920853C5C53C5B0D9CB72C39D82E6EED0EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationScript_Update_m9185E3C61E04D4446FA04A50ADF03CC0A9996CA2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(isAnimated)
		bool L_0 = __this->get_isAnimated_4();
		if (!L_0)
		{
			goto IL_01a6;
		}
	}
	{
		// if(isRotating)
		bool L_1 = __this->get_isRotating_5();
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		// transform.Rotate(rotationAngle * rotationSpeed * Time.deltaTime);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = __this->get_rotationAngle_8();
		float L_4 = __this->get_rotationSpeed_9();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_3, L_4, /*hidden argument*/NULL);
		float L_6 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_Rotate_m610B6793DCC2F987290D328942E649B5B7DE0F9A(L_2, L_7, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// if(isFloating)
		bool L_8 = __this->get_isFloating_6();
		if (!L_8)
		{
			goto IL_00e4;
		}
	}
	{
		// floatTimer += Time.deltaTime;
		float L_9 = __this->get_floatTimer_13();
		float L_10 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_floatTimer_13(((float)il2cpp_codegen_add((float)L_9, (float)L_10)));
		// Vector3 moveDir = new Vector3(0.0f, 0.0f, floatSpeed);
		float L_11 = __this->get_floatSpeed_10();
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), (0.0f), (0.0f), L_11, /*hidden argument*/NULL);
		// transform.Translate(moveDir);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = V_0;
		NullCheck(L_12);
		Transform_Translate_m0F354939D5084DDFF6B9902E62D3DCA7A3B53EA3(L_12, L_13, /*hidden argument*/NULL);
		// if (goingUp && floatTimer >= floatRate)
		bool L_14 = __this->get_goingUp_11();
		if (!L_14)
		{
			goto IL_00b0;
		}
	}
	{
		float L_15 = __this->get_floatTimer_13();
		float L_16 = __this->get_floatRate_12();
		if ((!(((float)L_15) >= ((float)L_16))))
		{
			goto IL_00b0;
		}
	}
	{
		// goingUp = false;
		__this->set_goingUp_11((bool)0);
		// floatTimer = 0;
		__this->set_floatTimer_13((0.0f));
		// floatSpeed = -floatSpeed;
		float L_17 = __this->get_floatSpeed_10();
		__this->set_floatSpeed_10(((-L_17)));
		// }
		goto IL_00e4;
	}

IL_00b0:
	{
		// else if(!goingUp && floatTimer >= floatRate)
		bool L_18 = __this->get_goingUp_11();
		if (L_18)
		{
			goto IL_00e4;
		}
	}
	{
		float L_19 = __this->get_floatTimer_13();
		float L_20 = __this->get_floatRate_12();
		if ((!(((float)L_19) >= ((float)L_20))))
		{
			goto IL_00e4;
		}
	}
	{
		// goingUp = true;
		__this->set_goingUp_11((bool)1);
		// floatTimer = 0;
		__this->set_floatTimer_13((0.0f));
		// floatSpeed = +floatSpeed;
		float L_21 = __this->get_floatSpeed_10();
		__this->set_floatSpeed_10(L_21);
	}

IL_00e4:
	{
		// if(isScaling)
		bool L_22 = __this->get_isScaling_7();
		if (!L_22)
		{
			goto IL_01a6;
		}
	}
	{
		// scaleTimer += Time.deltaTime;
		float L_23 = __this->get_scaleTimer_19();
		float L_24 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_scaleTimer_19(((float)il2cpp_codegen_add((float)L_23, (float)L_24)));
		// if (scalingUp)
		bool L_25 = __this->get_scalingUp_16();
		if (!L_25)
		{
			goto IL_0138;
		}
	}
	{
		// transform.localScale = Vector3.Lerp(transform.localScale, endScale, scaleSpeed * Time.deltaTime);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_26 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_27 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_27, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = __this->get_endScale_15();
		float L_30 = __this->get_scaleSpeed_17();
		float L_31 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_28, L_29, ((float)il2cpp_codegen_multiply((float)L_30, (float)L_31)), /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_26, L_32, /*hidden argument*/NULL);
		// }
		goto IL_016d;
	}

IL_0138:
	{
		// else if (!scalingUp)
		bool L_33 = __this->get_scalingUp_16();
		if (L_33)
		{
			goto IL_016d;
		}
	}
	{
		// transform.localScale = Vector3.Lerp(transform.localScale, startScale, scaleSpeed * Time.deltaTime);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_34 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_35 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_35, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = __this->get_startScale_14();
		float L_38 = __this->get_scaleSpeed_17();
		float L_39 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_36, L_37, ((float)il2cpp_codegen_multiply((float)L_38, (float)L_39)), /*hidden argument*/NULL);
		NullCheck(L_34);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_34, L_40, /*hidden argument*/NULL);
	}

IL_016d:
	{
		// if(scaleTimer >= scaleRate)
		float L_41 = __this->get_scaleTimer_19();
		float L_42 = __this->get_scaleRate_18();
		if ((!(((float)L_41) >= ((float)L_42))))
		{
			goto IL_01a6;
		}
	}
	{
		// if (scalingUp) { scalingUp = false; }
		bool L_43 = __this->get_scalingUp_16();
		if (!L_43)
		{
			goto IL_018c;
		}
	}
	{
		// if (scalingUp) { scalingUp = false; }
		__this->set_scalingUp_16((bool)0);
		// if (scalingUp) { scalingUp = false; }
		goto IL_019b;
	}

IL_018c:
	{
		// else if (!scalingUp) { scalingUp = true; }
		bool L_44 = __this->get_scalingUp_16();
		if (L_44)
		{
			goto IL_019b;
		}
	}
	{
		// else if (!scalingUp) { scalingUp = true; }
		__this->set_scalingUp_16((bool)1);
	}

IL_019b:
	{
		// scaleTimer = 0;
		__this->set_scaleTimer_19((0.0f));
	}

IL_01a6:
	{
		// }
		return;
	}
}
// System.Void AnimationScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationScript__ctor_m537B068A59960E3B124C66659A31DC914C2AB7DC (AnimationScript_t1DFBF920853C5C53C5B0D9CB72C39D82E6EED0EE * __this, const RuntimeMethod* method)
{
	{
		// private bool goingUp = true;
		__this->set_goingUp_11((bool)1);
		// private bool scalingUp = true;
		__this->set_scalingUp_16((bool)1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BallObstacle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallObstacle_Start_m686896D8D54A9D300343AE4D0B490C7638293E57 (BallObstacle_t14DB103C09CCA5FEC197DAB09D31A77093103FF9 * __this, const RuntimeMethod* method)
{
	{
		// rigidbody.velocity = new Vector3(0f, 0f, 0f);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_0 = __this->get_rigidbody_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_1), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody_set_velocity_m8D129E88E62AD02AB81CFC8BE694C4A5A2B2B380(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BallObstacle::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallObstacle_Update_m6B69A857DA2CEBD08CB768348E80512643658EC5 (BallObstacle_t14DB103C09CCA5FEC197DAB09D31A77093103FF9 * __this, const RuntimeMethod* method)
{
	{
		// if(transform.position.z <= 250.0)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_z_4();
		if ((!(((double)(((double)((double)L_2)))) <= ((double)(250.0)))))
		{
			goto IL_004c;
		}
	}
	{
		// rigidbody.velocity = new Vector3(0f, 0f, 0f);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_3 = __this->get_rigidbody_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_4), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Rigidbody_set_velocity_m8D129E88E62AD02AB81CFC8BE694C4A5A2B2B380(L_3, L_4, /*hidden argument*/NULL);
		// transform.position = origin;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = __this->get_origin_4();
		NullCheck(L_5);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_5, L_6, /*hidden argument*/NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void BallObstacle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallObstacle__ctor_m2AA77C995D8A7CD33C2E2FD8DB59A757BA1D38F7 (BallObstacle_t14DB103C09CCA5FEC197DAB09D31A77093103FF9 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Em::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Em_Start_m72BE3D8532D75CE881F6469591B252C1943BBEF8 (Em_t2FB906755A5C8B9E1A38CEE942BBE1477CA512F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Em_Start_m72BE3D8532D75CE881F6469591B252C1943BBEF8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// g_time = 0;
		__this->set_g_time_13((0.0f));
		// Transform tr =obj1.transform.Find("0");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_obj1_4();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Transform_Find_m673797B6329C2669A543904532ABA1680DA4EAD1(L_1, _stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C, /*hidden argument*/NULL);
		// tr.gameObject.SetActive(false);
		NullCheck(L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_3, (bool)0, /*hidden argument*/NULL);
		// tr = obj1.transform.Find("1");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_obj1_4();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Transform_Find_m673797B6329C2669A543904532ABA1680DA4EAD1(L_5, _stringLiteral356A192B7913B04C54574D18C28D46E6395428AB, /*hidden argument*/NULL);
		// tr.gameObject.SetActive(false);
		NullCheck(L_6);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_7, (bool)0, /*hidden argument*/NULL);
		// tr = obj1.transform.Find("2");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_obj1_4();
		NullCheck(L_8);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Transform_Find_m673797B6329C2669A543904532ABA1680DA4EAD1(L_9, _stringLiteralDA4B9237BACCCDF19C0760CAB7AEC4A8359010B0, /*hidden argument*/NULL);
		// tr.gameObject.SetActive(false);
		NullCheck(L_10);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_11, (bool)0, /*hidden argument*/NULL);
		// tr = obj1.transform.Find("3");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = __this->get_obj1_4();
		NullCheck(L_12);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = Transform_Find_m673797B6329C2669A543904532ABA1680DA4EAD1(L_13, _stringLiteral77DE68DAECD823BABBB58EDB1C8E14D7106E83BB, /*hidden argument*/NULL);
		// tr.gameObject.SetActive(false);
		NullCheck(L_14);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_15, (bool)0, /*hidden argument*/NULL);
		// tr = obj2.transform.Find("0");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = __this->get_obj2_5();
		NullCheck(L_16);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = Transform_Find_m673797B6329C2669A543904532ABA1680DA4EAD1(L_17, _stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C, /*hidden argument*/NULL);
		// tr.gameObject.SetActive(false);
		NullCheck(L_18);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_19 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_19, (bool)0, /*hidden argument*/NULL);
		// tr = obj2.transform.Find("1");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_20 = __this->get_obj2_5();
		NullCheck(L_20);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_21 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = Transform_Find_m673797B6329C2669A543904532ABA1680DA4EAD1(L_21, _stringLiteral356A192B7913B04C54574D18C28D46E6395428AB, /*hidden argument*/NULL);
		// tr.gameObject.SetActive(false);
		NullCheck(L_22);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_23 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_23, (bool)0, /*hidden argument*/NULL);
		// tr = obj2.transform.Find("2");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_24 = __this->get_obj2_5();
		NullCheck(L_24);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_26 = Transform_Find_m673797B6329C2669A543904532ABA1680DA4EAD1(L_25, _stringLiteralDA4B9237BACCCDF19C0760CAB7AEC4A8359010B0, /*hidden argument*/NULL);
		// tr.gameObject.SetActive(false);
		NullCheck(L_26);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_27 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_27, (bool)0, /*hidden argument*/NULL);
		// tr = obj2.transform.Find("3");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_28 = __this->get_obj2_5();
		NullCheck(L_28);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_30 = Transform_Find_m673797B6329C2669A543904532ABA1680DA4EAD1(L_29, _stringLiteral77DE68DAECD823BABBB58EDB1C8E14D7106E83BB, /*hidden argument*/NULL);
		// tr.gameObject.SetActive(false);
		NullCheck(L_30);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_31 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_31, (bool)0, /*hidden argument*/NULL);
		// tr = obj3.transform.Find("0");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_32 = __this->get_obj3_6();
		NullCheck(L_32);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_33 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_34 = Transform_Find_m673797B6329C2669A543904532ABA1680DA4EAD1(L_33, _stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C, /*hidden argument*/NULL);
		// tr.gameObject.SetActive(false);
		NullCheck(L_34);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_35 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_34, /*hidden argument*/NULL);
		NullCheck(L_35);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_35, (bool)0, /*hidden argument*/NULL);
		// tr = obj3.transform.Find("1");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_36 = __this->get_obj3_6();
		NullCheck(L_36);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_37 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_38 = Transform_Find_m673797B6329C2669A543904532ABA1680DA4EAD1(L_37, _stringLiteral356A192B7913B04C54574D18C28D46E6395428AB, /*hidden argument*/NULL);
		// tr.gameObject.SetActive(false);
		NullCheck(L_38);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_39 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_38, /*hidden argument*/NULL);
		NullCheck(L_39);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_39, (bool)0, /*hidden argument*/NULL);
		// tr = obj3.transform.Find("2");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_40 = __this->get_obj3_6();
		NullCheck(L_40);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_41 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_42 = Transform_Find_m673797B6329C2669A543904532ABA1680DA4EAD1(L_41, _stringLiteralDA4B9237BACCCDF19C0760CAB7AEC4A8359010B0, /*hidden argument*/NULL);
		// tr.gameObject.SetActive(false);
		NullCheck(L_42);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_43 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_42, /*hidden argument*/NULL);
		NullCheck(L_43);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_43, (bool)0, /*hidden argument*/NULL);
		// tr = obj3.transform.Find("3");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_44 = __this->get_obj3_6();
		NullCheck(L_44);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_45 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_44, /*hidden argument*/NULL);
		NullCheck(L_45);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_46 = Transform_Find_m673797B6329C2669A543904532ABA1680DA4EAD1(L_45, _stringLiteral77DE68DAECD823BABBB58EDB1C8E14D7106E83BB, /*hidden argument*/NULL);
		// tr.gameObject.SetActive(false);
		NullCheck(L_46);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_47 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_47, (bool)0, /*hidden argument*/NULL);
		// SetRank(GameData.rank);
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		int32_t L_48 = GameData_get_rank_mAE1E8FBA1F2E3514282BEB903AA6ACECDDDB6E71_inline(/*hidden argument*/NULL);
		Em_SetRank_mD2E682562C2A02F62806C03AE5B123111715D21D(__this, L_48, /*hidden argument*/NULL);
		// if (GameData.Selected1 > -1)
		int32_t L_49 = ((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_Selected1_6();
		if ((((int32_t)L_49) <= ((int32_t)(-1))))
		{
			goto IL_01f2;
		}
	}
	{
		// tr = obj1.transform.Find(GameData.Selected1.ToString());
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_50 = __this->get_obj1_4();
		NullCheck(L_50);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_51 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_50, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		String_t* L_52 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_address_of_Selected1_6()), /*hidden argument*/NULL);
		NullCheck(L_51);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_53 = Transform_Find_m673797B6329C2669A543904532ABA1680DA4EAD1(L_51, L_52, /*hidden argument*/NULL);
		// tr.gameObject.SetActive(true);
		NullCheck(L_53);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_54 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_53, /*hidden argument*/NULL);
		NullCheck(L_54);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_54, (bool)1, /*hidden argument*/NULL);
		// name1.text = GameData.Name1;
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_55 = __this->get_name1_7();
		String_t* L_56 = ((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_Name1_4();
		NullCheck(L_55);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_55, L_56);
		// time1.text = string.Format("{0:N2}", GameData.Time1);
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_57 = __this->get_time1_10();
		float L_58 = ((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_Time1_5();
		float L_59 = L_58;
		RuntimeObject * L_60 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_59);
		String_t* L_61 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral1A4C20C7CB8910EE2B6AA319D550F38E907A046F, L_60, /*hidden argument*/NULL);
		NullCheck(L_57);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_57, L_61);
	}

IL_01f2:
	{
		// if (GameData.Selected2 > -1)
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		int32_t L_62 = ((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_Selected2_9();
		if ((((int32_t)L_62) <= ((int32_t)(-1))))
		{
			goto IL_024e;
		}
	}
	{
		// tr = obj2.transform.Find(GameData.Selected2.ToString());
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_63 = __this->get_obj2_5();
		NullCheck(L_63);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_64 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_63, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		String_t* L_65 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_address_of_Selected2_9()), /*hidden argument*/NULL);
		NullCheck(L_64);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_66 = Transform_Find_m673797B6329C2669A543904532ABA1680DA4EAD1(L_64, L_65, /*hidden argument*/NULL);
		// tr.gameObject.SetActive(true);
		NullCheck(L_66);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_67 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_66, /*hidden argument*/NULL);
		NullCheck(L_67);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_67, (bool)1, /*hidden argument*/NULL);
		// name2.text = GameData.Name2;
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_68 = __this->get_name2_8();
		String_t* L_69 = ((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_Name2_7();
		NullCheck(L_68);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_68, L_69);
		// time2.text = string.Format("{0:N2}", GameData.Time2);
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_70 = __this->get_time2_11();
		float L_71 = ((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_Time2_8();
		float L_72 = L_71;
		RuntimeObject * L_73 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_72);
		String_t* L_74 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral1A4C20C7CB8910EE2B6AA319D550F38E907A046F, L_73, /*hidden argument*/NULL);
		NullCheck(L_70);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_70, L_74);
	}

IL_024e:
	{
		// if (GameData.Selected3 > -1)
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		int32_t L_75 = ((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_Selected3_12();
		if ((((int32_t)L_75) <= ((int32_t)(-1))))
		{
			goto IL_02aa;
		}
	}
	{
		// tr = obj3.transform.Find(GameData.Selected3.ToString());
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_76 = __this->get_obj3_6();
		NullCheck(L_76);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_77 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_76, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		String_t* L_78 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_address_of_Selected3_12()), /*hidden argument*/NULL);
		NullCheck(L_77);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_79 = Transform_Find_m673797B6329C2669A543904532ABA1680DA4EAD1(L_77, L_78, /*hidden argument*/NULL);
		// tr.gameObject.SetActive(true);
		NullCheck(L_79);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_80 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_79, /*hidden argument*/NULL);
		NullCheck(L_80);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_80, (bool)1, /*hidden argument*/NULL);
		// name3.text = GameData.Name3;
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_81 = __this->get_name3_9();
		String_t* L_82 = ((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_Name3_10();
		NullCheck(L_81);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_81, L_82);
		// time3.text = string.Format("{0:N2}", GameData.Time3);
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_83 = __this->get_time3_12();
		float L_84 = ((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_Time3_11();
		float L_85 = L_84;
		RuntimeObject * L_86 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_85);
		String_t* L_87 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral1A4C20C7CB8910EE2B6AA319D550F38E907A046F, L_86, /*hidden argument*/NULL);
		NullCheck(L_83);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_83, L_87);
	}

IL_02aa:
	{
		// }
		return;
	}
}
// System.Void Em::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Em_Update_mB935BE2A07B6D376153680A922F37A215D992441 (Em_t2FB906755A5C8B9E1A38CEE942BBE1477CA512F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Em_Update_mB935BE2A07B6D376153680A922F37A215D992441_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// g_time += Time.deltaTime;
		float L_0 = __this->get_g_time_13();
		float L_1 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_g_time_13(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// if (g_time>5) {
		float L_2 = __this->get_g_time_13();
		if ((!(((float)L_2) > ((float)(5.0f)))))
		{
			goto IL_00cc;
		}
	}
	{
		// if (GameData.Selected1 > -1)
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		int32_t L_3 = ((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_Selected1_6();
		if ((((int32_t)L_3) <= ((int32_t)(-1))))
		{
			goto IL_0057;
		}
	}
	{
		// PlayerPrefs.SetString("1???", GameData.Name1);
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		String_t* L_4 = ((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_Name1_4();
		PlayerPrefs_SetString_m7AC4E332A5DCA04E0AD91544AF836744BA8C2583(_stringLiteral9A0D4BA63F9F45564A58D1443A6CD311760763FC, L_4, /*hidden argument*/NULL);
		// PlayerPrefs.SetFloat("1???",GameData.Time1);
		float L_5 = ((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_Time1_5();
		PlayerPrefs_SetFloat_mA58D5A6903B002A03BDEF35B34063E96C8483A35(_stringLiteral9DD2993179F8F3A5AC7AA25125651716411C5AA2, L_5, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("1????", GameData.Selected1);
		int32_t L_6 = ((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_Selected1_6();
		PlayerPrefs_SetInt_mBF4101DF829B4738CCC293E1C2D173AEE45EFE62(_stringLiteral0D403041C4D7A0132F41447D88B2D68C8E5ED0A2, L_6, /*hidden argument*/NULL);
	}

IL_0057:
	{
		// if (GameData.Selected2 > -1)
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		int32_t L_7 = ((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_Selected2_9();
		if ((((int32_t)L_7) <= ((int32_t)(-1))))
		{
			goto IL_008c;
		}
	}
	{
		// PlayerPrefs.SetString("2???", GameData.Name2);
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		String_t* L_8 = ((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_Name2_7();
		PlayerPrefs_SetString_m7AC4E332A5DCA04E0AD91544AF836744BA8C2583(_stringLiteral3EEFBD49BB55971FFF1BF13D5BD69D871C3021F8, L_8, /*hidden argument*/NULL);
		// PlayerPrefs.SetFloat("2???", GameData.Time2);
		float L_9 = ((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_Time2_8();
		PlayerPrefs_SetFloat_mA58D5A6903B002A03BDEF35B34063E96C8483A35(_stringLiteral9F8F83EA07374F8F9FEC9DA4A9042C3FBE8E5293, L_9, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("2????", GameData.Selected2);
		int32_t L_10 = ((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_Selected2_9();
		PlayerPrefs_SetInt_mBF4101DF829B4738CCC293E1C2D173AEE45EFE62(_stringLiteral6D5CF88A7EF83280C1CB830831189D9A37D8093F, L_10, /*hidden argument*/NULL);
	}

IL_008c:
	{
		// if (GameData.Selected3 > -1)
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		int32_t L_11 = ((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_Selected3_12();
		if ((((int32_t)L_11) <= ((int32_t)(-1))))
		{
			goto IL_00c1;
		}
	}
	{
		// PlayerPrefs.SetString("3???", GameData.Name3);
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		String_t* L_12 = ((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_Name3_10();
		PlayerPrefs_SetString_m7AC4E332A5DCA04E0AD91544AF836744BA8C2583(_stringLiteral400BCBFE6951DB76550026ADC0B604B4BEECE182, L_12, /*hidden argument*/NULL);
		// PlayerPrefs.SetFloat("3???", GameData.Time3);
		float L_13 = ((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_Time3_11();
		PlayerPrefs_SetFloat_mA58D5A6903B002A03BDEF35B34063E96C8483A35(_stringLiteral03CDC6A1FBBF9BF1AEC6F0D6A0FE0F38646A6A1A, L_13, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("3????", GameData.Selected3);
		int32_t L_14 = ((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_Selected3_12();
		PlayerPrefs_SetInt_mBF4101DF829B4738CCC293E1C2D173AEE45EFE62(_stringLiteralD666DEA102FF035F02A4B5D1C43B9AE162A34FB0, L_14, /*hidden argument*/NULL);
	}

IL_00c1:
	{
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m6CC1FE22D4B10AC819F55802D725BE17EA2AD37B(/*hidden argument*/NULL);
		// SceneManager.LoadScene(0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_t68A7070D2AD3860C3EE327C94F38270E49AFB489_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(0, /*hidden argument*/NULL);
	}

IL_00cc:
	{
		// }
		return;
	}
}
// System.Void Em::SetRank(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Em_SetRank_mD2E682562C2A02F62806C03AE5B123111715D21D (Em_t2FB906755A5C8B9E1A38CEE942BBE1477CA512F9 * __this, int32_t ___rank0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Em_SetRank_mD2E682562C2A02F62806C03AE5B123111715D21D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// switch (rank)
		int32_t L_0 = ___rank0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0015;
			}
			case 1:
			{
				goto IL_0034;
			}
			case 2:
			{
				goto IL_0053;
			}
		}
	}
	{
		return;
	}

IL_0015:
	{
		// GameData.Name1 = GameData.name;
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		String_t* L_1 = GameData_get_name_mB797547A4AB5AF4C498AE31BA6ED18FDC83541B5_inline(/*hidden argument*/NULL);
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Name1_4(L_1);
		// GameData.Time1 = GameData.time;
		float L_2 = GameData_get_time_m4E5B3140960E8C711FEF0BACBBE7AB88FDDA4271_inline(/*hidden argument*/NULL);
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Time1_5(L_2);
		// GameData.Selected1 = GameData.selected;
		int32_t L_3 = GameData_get_selected_m8E8BA8713A55BD9E2DFDCE4FC887392C79683943_inline(/*hidden argument*/NULL);
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Selected1_6(L_3);
		// break;
		return;
	}

IL_0034:
	{
		// GameData.Name2 = GameData.name;
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		String_t* L_4 = GameData_get_name_mB797547A4AB5AF4C498AE31BA6ED18FDC83541B5_inline(/*hidden argument*/NULL);
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Name2_7(L_4);
		// GameData.Time2 = GameData.time;
		float L_5 = GameData_get_time_m4E5B3140960E8C711FEF0BACBBE7AB88FDDA4271_inline(/*hidden argument*/NULL);
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Time2_8(L_5);
		// GameData.Selected2 = GameData.selected;
		int32_t L_6 = GameData_get_selected_m8E8BA8713A55BD9E2DFDCE4FC887392C79683943_inline(/*hidden argument*/NULL);
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Selected2_9(L_6);
		// break;
		return;
	}

IL_0053:
	{
		// GameData.Name3 = GameData.name;
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		String_t* L_7 = GameData_get_name_mB797547A4AB5AF4C498AE31BA6ED18FDC83541B5_inline(/*hidden argument*/NULL);
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Name3_10(L_7);
		// GameData.Time3 = GameData.time;
		float L_8 = GameData_get_time_m4E5B3140960E8C711FEF0BACBBE7AB88FDDA4271_inline(/*hidden argument*/NULL);
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Time3_11(L_8);
		// GameData.Selected3 = GameData.selected;
		int32_t L_9 = GameData_get_selected_m8E8BA8713A55BD9E2DFDCE4FC887392C79683943_inline(/*hidden argument*/NULL);
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Selected3_12(L_9);
		// }
		return;
	}
}
// System.Void Em::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Em__ctor_mA76022A443FEC12909A25EA9B1BFE7FF4713F2C9 (Em_t2FB906755A5C8B9E1A38CEE942BBE1477CA512F9 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EventSubscriber::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSubscriber_Start_m646B42B22DE5875D98C531F17B9577D16F0FAA2F (EventSubscriber_tE8F7072EC3A9ED03318D306EE0BFFB22D13F8431 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventSubscriber_Start_m646B42B22DE5875D98C531F17B9577D16F0FAA2F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// startButton.onClick.AddListener(OnClickedStart);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_0 = __this->get_startButton_4();
		NullCheck(L_0);
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_1 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline(L_0, /*hidden argument*/NULL);
		UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_2 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
		UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_2, __this, (intptr_t)((intptr_t)EventSubscriber_OnClickedStart_m693E17381019C934B48ABF1CCB7CCCA982A33739_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9(L_1, L_2, /*hidden argument*/NULL);
		// endButton.onClick.AddListener(OnClickedExit);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_3 = __this->get_endButton_5();
		NullCheck(L_3);
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_4 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline(L_3, /*hidden argument*/NULL);
		UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_5 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
		UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_5, __this, (intptr_t)((intptr_t)EventSubscriber_OnClickedExit_mA1D5256B9C8D9C61B623242C59032394E0817806_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EventSubscriber::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSubscriber_Update_m94E9ED71C72B687FF3489A63718BA552EDBD352A (EventSubscriber_tE8F7072EC3A9ED03318D306EE0BFFB22D13F8431 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventSubscriber_Update_m94E9ED71C72B687FF3489A63718BA552EDBD352A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isPressedStart)
		bool L_0 = __this->get_isPressedStart_7();
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		// startTime += Time.deltaTime * 3f;
		float L_1 = __this->get_startTime_6();
		float L_2 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_startTime_6(((float)il2cpp_codegen_add((float)L_1, (float)((float)il2cpp_codegen_multiply((float)L_2, (float)(3.0f))))));
		// if (startTime >= 3.5f)
		float L_3 = __this->get_startTime_6();
		if ((!(((float)L_3) >= ((float)(3.5f)))))
		{
			goto IL_0033;
		}
	}
	{
		// SceneManager.LoadScene(1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_t68A7070D2AD3860C3EE327C94F38270E49AFB489_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(1, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void EventSubscriber::OnClickedStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSubscriber_OnClickedStart_m693E17381019C934B48ABF1CCB7CCCA982A33739 (EventSubscriber_tE8F7072EC3A9ED03318D306EE0BFFB22D13F8431 * __this, const RuntimeMethod* method)
{
	{
		// isPressedStart = true;
		__this->set_isPressedStart_7((bool)1);
		// }
		return;
	}
}
// System.Void EventSubscriber::OnClickedExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSubscriber_OnClickedExit_mA1D5256B9C8D9C61B623242C59032394E0817806 (EventSubscriber_tE8F7072EC3A9ED03318D306EE0BFFB22D13F8431 * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_mA005EB22CB989AC3794334754F15E1C0D2FF1C95(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EventSubscriber::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSubscriber__ctor_m82EA545DC517DFEEF1639757E955F725377F0C60 (EventSubscriber_tE8F7072EC3A9ED03318D306EE0BFFB22D13F8431 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single GameData::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameData_get_time_m4E5B3140960E8C711FEF0BACBBE7AB88FDDA4271 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameData_get_time_m4E5B3140960E8C711FEF0BACBBE7AB88FDDA4271_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Time;
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		float L_0 = ((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_Time_1();
		return L_0;
	}
}
// System.Void GameData::set_time(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameData_set_time_mF61A5E4EA88301619784B34E77D1EDF721C915AE (float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameData_set_time_mF61A5E4EA88301619784B34E77D1EDF721C915AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time = value;
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Time_1(L_0);
		// }
		return;
	}
}
// System.String GameData::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameData_get_name_mB797547A4AB5AF4C498AE31BA6ED18FDC83541B5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameData_get_name_mB797547A4AB5AF4C498AE31BA6ED18FDC83541B5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Name;
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		String_t* L_0 = ((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_Name_0();
		return L_0;
	}
}
// System.Void GameData::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameData_set_name_m822B2CAFFF7DDFFC6A44F2855F8F9A0272481B6D (String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameData_set_name_m822B2CAFFF7DDFFC6A44F2855F8F9A0272481B6D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Name = value;
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Name_0(L_0);
		// }
		return;
	}
}
// System.Int32 GameData::get_selected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameData_get_selected_m8E8BA8713A55BD9E2DFDCE4FC887392C79683943 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameData_get_selected_m8E8BA8713A55BD9E2DFDCE4FC887392C79683943_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Selected;
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_Selected_2();
		return L_0;
	}
}
// System.Void GameData::set_selected(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameData_set_selected_m0F16D2E8EDD1DE62BDBC13890DBB3C58B80A712D (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameData_set_selected_m0F16D2E8EDD1DE62BDBC13890DBB3C58B80A712D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Selected = value;
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Selected_2(L_0);
		// }
		return;
	}
}
// System.Int32 GameData::get_rank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameData_get_rank_mAE1E8FBA1F2E3514282BEB903AA6ACECDDDB6E71 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameData_get_rank_mAE1E8FBA1F2E3514282BEB903AA6ACECDDDB6E71_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Rank;
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_Rank_3();
		return L_0;
	}
}
// System.Void GameData::set_rank(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameData_set_rank_m3FE835211C77E0133834346389ABD148910B1918 (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameData_set_rank_m3FE835211C77E0133834346389ABD148910B1918_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Rank = value;
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Rank_3(L_0);
		// }
		return;
	}
}
// System.Void GameData::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameData__cctor_mBF4CCD7D84C1DCC0BD138AB271A54DD8515E16F8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameData__cctor_mBF4CCD7D84C1DCC0BD138AB271A54DD8515E16F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static int Selected=-1;
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Selected_2((-1));
		// private static int Rank=0;
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Rank_3(0);
		// public static string Name1="";
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Name1_4(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public static float Time1=999;
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Time1_5((999.0f));
		// public static int Selected1 =-1;
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Selected1_6((-1));
		// public static string Name2="";
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Name2_7(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public static float Time2=999;
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Time2_8((999.0f));
		// public static int Selected2 = -1;
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Selected2_9((-1));
		// public static string Name3="";
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Name3_10(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public static float Time3=999;
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Time3_11((999.0f));
		// public static int Selected3 = -1;
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Selected3_12((-1));
		// public static float G_TIME=0;
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_G_TIME_13((0.0f));
		// public static bool isEnd = false ;
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_isEnd_14((bool)0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GateFunc::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GateFunc_Start_m874C0289C7E5ADB2E09F42A3CA8A96BBA52C74A3 (GateFunc_tB1FC89C3AB042F4689002BB0DFDB74F00807BD3D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GateFunc_Start_m874C0289C7E5ADB2E09F42A3CA8A96BBA52C74A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.FindWithTag("Player");  
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_FindWithTag_mF188C0A7A5DAC355AB020E2964B155F355237CB5(_stringLiteralE53407CFE1A5156B9F0D1EED3BAB5EF3AE75CFD8, /*hidden argument*/NULL);
		__this->set_player_5(L_0);
		// if (player)  
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_player_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		// playerScript = player.GetComponent<PlayerController>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_player_5();
		NullCheck(L_3);
		PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * L_4 = GameObject_GetComponent_TisPlayerController_t4CE339054014370D89B89922EDC0EA2766589C85_mE97771A17F0DD6C17DECDDE26CC1D2D6B0C02C7E(L_3, /*hidden argument*/GameObject_GetComponent_TisPlayerController_t4CE339054014370D89B89922EDC0EA2766589C85_mE97771A17F0DD6C17DECDDE26CC1D2D6B0C02C7E_RuntimeMethod_var);
		__this->set_playerScript_6(L_4);
		// playerCC = player.GetComponent<CharacterController>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_player_5();
		NullCheck(L_5);
		CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E * L_6 = GameObject_GetComponent_TisCharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E_mFEFA14BEB7F1347EB848907DD7F40F2DBDB2AEB4(L_5, /*hidden argument*/GameObject_GetComponent_TisCharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E_mFEFA14BEB7F1347EB848907DD7F40F2DBDB2AEB4_RuntimeMethod_var);
		__this->set_playerCC_7(L_6);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void GateFunc::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GateFunc_Update_m519EE5DD57F96C401B3171FAC91088BADA05FC57 (GateFunc_tB1FC89C3AB042F4689002BB0DFDB74F00807BD3D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GateFunc_Update_m519EE5DD57F96C401B3171FAC91088BADA05FC57_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (playerCheck)
		bool L_0 = __this->get_playerCheck_4();
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		// newPlayerPos = new Vector3(0, 20, 0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_1), (0.0f), (20.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_newPlayerPos_8(L_1);
		// playerCC.Move(newPlayerPos * Time.deltaTime);    
		CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E * L_2 = __this->get_playerCC_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = __this->get_newPlayerPos_8();
		float L_4 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		CharacterController_Move_m31D77B4E934015FE3D6CE04BF8017A1DD0487434(L_2, L_5, /*hidden argument*/NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void GateFunc::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GateFunc_OnTriggerEnter_m13AABC80E07A6BA4E60A50779DD04C64C0417109 (GateFunc_tB1FC89C3AB042F4689002BB0DFDB74F00807BD3D * __this, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___coll0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GateFunc_OnTriggerEnter_m13AABC80E07A6BA4E60A50779DD04C64C0417109_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (coll.CompareTag("PlayerFoot"))   
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_0 = ___coll0;
		NullCheck(L_0);
		bool L_1 = Component_CompareTag_mD074608D7FEC96A53C57A456BA613EE01C31D4B7(L_0, _stringLiteral225319E943413D79E58FF96923165D4846E69D4F, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// playerCheck = true; 
		__this->set_playerCheck_4((bool)1);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void GateFunc::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GateFunc_OnTriggerExit_mDBADF26AF87E5C15C00BA07A94942BDFF4554D8D (GateFunc_tB1FC89C3AB042F4689002BB0DFDB74F00807BD3D * __this, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___coll0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GateFunc_OnTriggerExit_mDBADF26AF87E5C15C00BA07A94942BDFF4554D8D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (coll.CompareTag("PlayerFoot"))
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_0 = ___coll0;
		NullCheck(L_0);
		Component_CompareTag_mD074608D7FEC96A53C57A456BA613EE01C31D4B7(L_0, _stringLiteral225319E943413D79E58FF96923165D4846E69D4F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GateFunc::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GateFunc__ctor_m6B7AAAB051D4454800F202B516FDEAF6DC93B3A0 (GateFunc_tB1FC89C3AB042F4689002BB0DFDB74F00807BD3D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Gm::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gm_Start_m09CF4D669AB3C885BDF624B650A0C11CC431489B (Gm_t048FF63D757797A66F07CA1383A099344589F7F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Gm_Start_m09CF4D669AB3C885BDF624B650A0C11CC431489B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// GameData.isEnd = false;
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_isEnd_14((bool)0);
		// GameData.G_TIME = 0;
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_G_TIME_13((0.0f));
		// u_name = GameData.name;
		String_t* L_0 = GameData_get_name_mB797547A4AB5AF4C498AE31BA6ED18FDC83541B5_inline(/*hidden argument*/NULL);
		__this->set_u_name_11(L_0);
		// selected= GameData.selected;
		int32_t L_1 = GameData_get_selected_m8E8BA8713A55BD9E2DFDCE4FC887392C79683943_inline(/*hidden argument*/NULL);
		__this->set_selected_10(L_1);
		// G_time = 0;
		__this->set_G_time_4((0.0f));
		// P_time = 0;
		__this->set_P_time_5((0.0f));
		// GameStatus = 0;
		__this->set_GameStatus_6(0);
		// Transform tr = obj.transform.Find("0");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_obj_7();
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Transform_Find_m673797B6329C2669A543904532ABA1680DA4EAD1(L_3, _stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C, /*hidden argument*/NULL);
		// tr.gameObject.SetActive(false);
		NullCheck(L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_5, (bool)0, /*hidden argument*/NULL);
		// tr = obj.transform.Find("1");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_obj_7();
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Transform_Find_m673797B6329C2669A543904532ABA1680DA4EAD1(L_7, _stringLiteral356A192B7913B04C54574D18C28D46E6395428AB, /*hidden argument*/NULL);
		// tr.gameObject.SetActive(false);
		NullCheck(L_8);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_9, (bool)0, /*hidden argument*/NULL);
		// tr = obj.transform.Find("2");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = __this->get_obj_7();
		NullCheck(L_10);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = Transform_Find_m673797B6329C2669A543904532ABA1680DA4EAD1(L_11, _stringLiteralDA4B9237BACCCDF19C0760CAB7AEC4A8359010B0, /*hidden argument*/NULL);
		// tr.gameObject.SetActive(false);
		NullCheck(L_12);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_13, (bool)0, /*hidden argument*/NULL);
		// tr = obj.transform.Find("3");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = __this->get_obj_7();
		NullCheck(L_14);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = Transform_Find_m673797B6329C2669A543904532ABA1680DA4EAD1(L_15, _stringLiteral77DE68DAECD823BABBB58EDB1C8E14D7106E83BB, /*hidden argument*/NULL);
		// tr.gameObject.SetActive(false);
		NullCheck(L_16);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_17, (bool)0, /*hidden argument*/NULL);
		// switch (selected)
		int32_t L_18 = __this->get_selected_10();
		V_0 = L_18;
		int32_t L_19 = V_0;
		switch (L_19)
		{
			case 0:
			{
				goto IL_00e1;
			}
			case 1:
			{
				goto IL_0102;
			}
			case 2:
			{
				goto IL_0123;
			}
			case 3:
			{
				goto IL_0144;
			}
		}
	}
	{
		return;
	}

IL_00e1:
	{
		// tr = obj.transform.Find("0");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_20 = __this->get_obj_7();
		NullCheck(L_20);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_21 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = Transform_Find_m673797B6329C2669A543904532ABA1680DA4EAD1(L_21, _stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C, /*hidden argument*/NULL);
		// tr.gameObject.SetActive(true);
		NullCheck(L_22);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_23 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_23, (bool)1, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0102:
	{
		// tr = obj.transform.Find("1");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_24 = __this->get_obj_7();
		NullCheck(L_24);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_26 = Transform_Find_m673797B6329C2669A543904532ABA1680DA4EAD1(L_25, _stringLiteral356A192B7913B04C54574D18C28D46E6395428AB, /*hidden argument*/NULL);
		// tr.gameObject.SetActive(true);
		NullCheck(L_26);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_27 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_27, (bool)1, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0123:
	{
		// tr = obj.transform.Find("2");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_28 = __this->get_obj_7();
		NullCheck(L_28);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_30 = Transform_Find_m673797B6329C2669A543904532ABA1680DA4EAD1(L_29, _stringLiteralDA4B9237BACCCDF19C0760CAB7AEC4A8359010B0, /*hidden argument*/NULL);
		// tr.gameObject.SetActive(true);
		NullCheck(L_30);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_31 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_31, (bool)1, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0144:
	{
		// tr = obj.transform.Find("3");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_32 = __this->get_obj_7();
		NullCheck(L_32);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_33 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_34 = Transform_Find_m673797B6329C2669A543904532ABA1680DA4EAD1(L_33, _stringLiteral77DE68DAECD823BABBB58EDB1C8E14D7106E83BB, /*hidden argument*/NULL);
		// tr.gameObject.SetActive(true);
		NullCheck(L_34);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_35 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_34, /*hidden argument*/NULL);
		NullCheck(L_35);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_35, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gm::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gm_Update_m95801C0741FBFC0EE2CEB6C6E2F761CCE8C0137C (Gm_t048FF63D757797A66F07CA1383A099344589F7F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Gm_Update_m95801C0741FBFC0EE2CEB6C6E2F761CCE8C0137C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// G_time += Time.deltaTime;
		float L_0 = __this->get_G_time_4();
		float L_1 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_G_time_4(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// GameData.G_TIME = G_time;
		float L_2 = __this->get_G_time_4();
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_G_TIME_13(L_2);
		// switch(GameStatus) {
		int32_t L_3 = __this->get_GameStatus_6();
		V_0 = L_3;
		int32_t L_4 = V_0;
		switch (L_4)
		{
			case 0:
			{
				goto IL_003f;
			}
			case 1:
			{
				goto IL_0085;
			}
			case 2:
			{
				goto IL_00d7;
			}
			case 3:
			{
				goto IL_00d7;
			}
		}
	}
	{
		goto IL_00d7;
	}

IL_003f:
	{
		// if (G_time > 3) {
		float L_5 = __this->get_G_time_4();
		if ((!(((float)L_5) > ((float)(3.0f)))))
		{
			goto IL_0063;
		}
	}
	{
		// r_time.alpha = 0 ;
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_6 = __this->get_r_time_9();
		NullCheck(L_6);
		TMP_Text_set_alpha_mC48AF8C211E3FA0E5ADDEA71D8ACFA2AA7BD2271(L_6, (0.0f), /*hidden argument*/NULL);
		// GameStatus = 1;
		__this->set_GameStatus_6(1);
	}

IL_0063:
	{
		// r_time.text = string.Format("{0:N0}", G_time);
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_7 = __this->get_r_time_9();
		float L_8 = __this->get_G_time_4();
		float L_9 = L_8;
		RuntimeObject * L_10 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral6B80223C8CAD5F4ADCCBE72838231F6CC621F8A8, L_10, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_11);
		// break;
		goto IL_00d7;
	}

IL_0085:
	{
		// P_time += Time.deltaTime;
		float L_12 = __this->get_P_time_5();
		float L_13 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_P_time_5(((float)il2cpp_codegen_add((float)L_12, (float)L_13)));
		// t_time.text = string.Format("{0:N2}", P_time);
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_14 = __this->get_t_time_8();
		float L_15 = __this->get_P_time_5();
		float L_16 = L_15;
		RuntimeObject * L_17 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_16);
		String_t* L_18 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral1A4C20C7CB8910EE2B6AA319D550F38E907A046F, L_17, /*hidden argument*/NULL);
		NullCheck(L_14);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_14, L_18);
		// t_time.text = t_time.text + "'s";
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_19 = __this->get_t_time_8();
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_20 = __this->get_t_time_8();
		NullCheck(L_20);
		String_t* L_21 = VirtFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_20);
		String_t* L_22 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_21, _stringLiteral003E8ECDAC1B420AE7FD1FE995FBD5D61CB5AE0C, /*hidden argument*/NULL);
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_19, L_22);
	}

IL_00d7:
	{
		// if (GameData.isEnd) {
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		bool L_23 = ((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_isEnd_14();
		if (!L_23)
		{
			goto IL_0125;
		}
	}
	{
		// GameData.time=P_time;
		float L_24 = __this->get_P_time_5();
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		GameData_set_time_mF61A5E4EA88301619784B34E77D1EDF721C915AE_inline(L_24, /*hidden argument*/NULL);
		// if (GameData.Time3 > GameData.time)
		float L_25 = ((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_Time3_11();
		float L_26 = GameData_get_time_m4E5B3140960E8C711FEF0BACBBE7AB88FDDA4271_inline(/*hidden argument*/NULL);
		if ((!(((float)L_25) > ((float)L_26))))
		{
			goto IL_00fb;
		}
	}
	{
		// GameData.rank = 3;
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		GameData_set_rank_m3FE835211C77E0133834346389ABD148910B1918_inline(3, /*hidden argument*/NULL);
	}

IL_00fb:
	{
		// if (GameData.Time2 > GameData.time)
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		float L_27 = ((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_Time2_8();
		float L_28 = GameData_get_time_m4E5B3140960E8C711FEF0BACBBE7AB88FDDA4271_inline(/*hidden argument*/NULL);
		if ((!(((float)L_27) > ((float)L_28))))
		{
			goto IL_010d;
		}
	}
	{
		// GameData.rank = 2;
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		GameData_set_rank_m3FE835211C77E0133834346389ABD148910B1918_inline(2, /*hidden argument*/NULL);
	}

IL_010d:
	{
		// if (GameData.Time1 > GameData.time)
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		float L_29 = ((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_Time1_5();
		float L_30 = GameData_get_time_m4E5B3140960E8C711FEF0BACBBE7AB88FDDA4271_inline(/*hidden argument*/NULL);
		if ((!(((float)L_29) > ((float)L_30))))
		{
			goto IL_011f;
		}
	}
	{
		// GameData.rank = 1;
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		GameData_set_rank_m3FE835211C77E0133834346389ABD148910B1918_inline(1, /*hidden argument*/NULL);
	}

IL_011f:
	{
		// SceneManager.LoadScene(3);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_t68A7070D2AD3860C3EE327C94F38270E49AFB489_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(3, /*hidden argument*/NULL);
	}

IL_0125:
	{
		// }
		return;
	}
}
// System.Void Gm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gm__ctor_m2F1C288E6BC1F75B9BB4AE26E63B1C64E17F6F73 (Gm_t048FF63D757797A66F07CA1383A099344589F7F9 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Obstacle::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Obstacle_Awake_mBB902A148BE45B6A355B48ED19D4C65FDAC26EB1 (Obstacle_t45A47093FD0D640DE4C85A2CB52665B5192A232E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Obstacle_Awake_mBB902A148BE45B6A355B48ED19D4C65FDAC26EB1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.FindWithTag("Player");  
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_FindWithTag_mF188C0A7A5DAC355AB020E2964B155F355237CB5(_stringLiteralE53407CFE1A5156B9F0D1EED3BAB5EF3AE75CFD8, /*hidden argument*/NULL);
		__this->set_player_9(L_0);
		// if (player)  
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_player_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		// playerScript = player.GetComponent<PlayerController>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_player_9();
		NullCheck(L_3);
		PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * L_4 = GameObject_GetComponent_TisPlayerController_t4CE339054014370D89B89922EDC0EA2766589C85_mE97771A17F0DD6C17DECDDE26CC1D2D6B0C02C7E(L_3, /*hidden argument*/GameObject_GetComponent_TisPlayerController_t4CE339054014370D89B89922EDC0EA2766589C85_mE97771A17F0DD6C17DECDDE26CC1D2D6B0C02C7E_RuntimeMethod_var);
		__this->set_playerScript_10(L_4);
		// playerCC = player.GetComponent<CharacterController>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_player_9();
		NullCheck(L_5);
		CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E * L_6 = GameObject_GetComponent_TisCharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E_mFEFA14BEB7F1347EB848907DD7F40F2DBDB2AEB4(L_5, /*hidden argument*/GameObject_GetComponent_TisCharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E_mFEFA14BEB7F1347EB848907DD7F40F2DBDB2AEB4_RuntimeMethod_var);
		__this->set_playerCC_11(L_6);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void Obstacle::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Obstacle_Update_m78945C15186A0FB74BCC90514333E8F2E67B5E12 (Obstacle_t45A47093FD0D640DE4C85A2CB52665B5192A232E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Obstacle_Update_m78945C15186A0FB74BCC90514333E8F2E67B5E12_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (flag)
		int32_t L_0 = __this->get_flag_13();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))
		{
			case 0:
			{
				goto IL_001c;
			}
			case 1:
			{
				goto IL_014f;
			}
			case 2:
			{
				goto IL_0282;
			}
		}
	}
	{
		return;
	}

IL_001c:
	{
		// transform.position += new Vector3(speed * Time.deltaTime * sign, 0, 0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = L_2;
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_speed_5();
		float L_6 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		int32_t L_7 = __this->get_sign_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_8), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)), (float)(((float)((float)L_7))))), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_4, L_8, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_3, L_9, /*hidden argument*/NULL);
		// if (playerCheck)
		bool L_10 = __this->get_playerCheck_8();
		if (!L_10)
		{
			goto IL_010d;
		}
	}
	{
		// if (playerScript.move.y < 0 && playerScript.move.x == 0 && playerScript.move.z == 0) 
		PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * L_11 = __this->get_playerScript_10();
		NullCheck(L_11);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_12 = L_11->get_address_of_move_16();
		float L_13 = L_12->get_y_3();
		if ((!(((float)L_13) < ((float)(0.0f)))))
		{
			goto IL_010d;
		}
	}
	{
		PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * L_14 = __this->get_playerScript_10();
		NullCheck(L_14);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_15 = L_14->get_address_of_move_16();
		float L_16 = L_15->get_x_2();
		if ((!(((float)L_16) == ((float)(0.0f)))))
		{
			goto IL_010d;
		}
	}
	{
		PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * L_17 = __this->get_playerScript_10();
		NullCheck(L_17);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_18 = L_17->get_address_of_move_16();
		float L_19 = L_18->get_z_4();
		if ((!(((float)L_19) == ((float)(0.0f)))))
		{
			goto IL_010d;
		}
	}
	{
		// newPlayerPos = new Vector3(speed * sign, 0, 0);
		float L_20 = __this->get_speed_5();
		int32_t L_21 = __this->get_sign_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_22), ((float)il2cpp_codegen_multiply((float)L_20, (float)(((float)((float)L_21))))), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_newPlayerPos_12(L_22);
		// playerCC.Move(newPlayerPos * Time.deltaTime);    
		CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E * L_23 = __this->get_playerCC_11();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = __this->get_newPlayerPos_12();
		float L_25 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_24, L_25, /*hidden argument*/NULL);
		NullCheck(L_23);
		CharacterController_Move_m31D77B4E934015FE3D6CE04BF8017A1DD0487434(L_23, L_26, /*hidden argument*/NULL);
		// playerCC.Move(new Vector3(0, -5.0f * Time.deltaTime, 0));   
		CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E * L_27 = __this->get_playerCC_11();
		float L_28 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_29), (0.0f), ((float)il2cpp_codegen_multiply((float)(-5.0f), (float)L_28)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_27);
		CharacterController_Move_m31D77B4E934015FE3D6CE04BF8017A1DD0487434(L_27, L_29, /*hidden argument*/NULL);
	}

IL_010d:
	{
		// if (transform.position.x <= minX || transform.position.x >= maxX)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_30 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_x_2();
		float L_33 = __this->get_minX_6();
		if ((((float)L_32) <= ((float)L_33)))
		{
			goto IL_0140;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_34 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_34, /*hidden argument*/NULL);
		float L_36 = L_35.get_x_2();
		float L_37 = __this->get_maxX_7();
		if ((!(((float)L_36) >= ((float)L_37))))
		{
			goto IL_0347;
		}
	}

IL_0140:
	{
		// sign *= -1;
		int32_t L_38 = __this->get_sign_4();
		__this->set_sign_4(((int32_t)il2cpp_codegen_multiply((int32_t)L_38, (int32_t)(-1))));
		// break;
		return;
	}

IL_014f:
	{
		// transform.position += new Vector3(0, speed * Time.deltaTime * sign, 0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_39 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_40 = L_39;
		NullCheck(L_40);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_40, /*hidden argument*/NULL);
		float L_42 = __this->get_speed_5();
		float L_43 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		int32_t L_44 = __this->get_sign_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45;
		memset((&L_45), 0, sizeof(L_45));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_45), (0.0f), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_42, (float)L_43)), (float)(((float)((float)L_44))))), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_41, L_45, /*hidden argument*/NULL);
		NullCheck(L_40);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_40, L_46, /*hidden argument*/NULL);
		// if (playerCheck)
		bool L_47 = __this->get_playerCheck_8();
		if (!L_47)
		{
			goto IL_0240;
		}
	}
	{
		// if (playerScript.move.y < 0 && playerScript.move.x == 0 && playerScript.move.z == 0) 
		PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * L_48 = __this->get_playerScript_10();
		NullCheck(L_48);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_49 = L_48->get_address_of_move_16();
		float L_50 = L_49->get_y_3();
		if ((!(((float)L_50) < ((float)(0.0f)))))
		{
			goto IL_0240;
		}
	}
	{
		PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * L_51 = __this->get_playerScript_10();
		NullCheck(L_51);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_52 = L_51->get_address_of_move_16();
		float L_53 = L_52->get_x_2();
		if ((!(((float)L_53) == ((float)(0.0f)))))
		{
			goto IL_0240;
		}
	}
	{
		PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * L_54 = __this->get_playerScript_10();
		NullCheck(L_54);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_55 = L_54->get_address_of_move_16();
		float L_56 = L_55->get_z_4();
		if ((!(((float)L_56) == ((float)(0.0f)))))
		{
			goto IL_0240;
		}
	}
	{
		// newPlayerPos = new Vector3(0, speed * sign, 0);
		float L_57 = __this->get_speed_5();
		int32_t L_58 = __this->get_sign_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_59;
		memset((&L_59), 0, sizeof(L_59));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_59), (0.0f), ((float)il2cpp_codegen_multiply((float)L_57, (float)(((float)((float)L_58))))), (0.0f), /*hidden argument*/NULL);
		__this->set_newPlayerPos_12(L_59);
		// playerCC.Move(newPlayerPos * Time.deltaTime);    
		CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E * L_60 = __this->get_playerCC_11();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_61 = __this->get_newPlayerPos_12();
		float L_62 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_63 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_61, L_62, /*hidden argument*/NULL);
		NullCheck(L_60);
		CharacterController_Move_m31D77B4E934015FE3D6CE04BF8017A1DD0487434(L_60, L_63, /*hidden argument*/NULL);
		// playerCC.Move(new Vector3(0, -5.0f * Time.deltaTime, 0));   
		CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E * L_64 = __this->get_playerCC_11();
		float L_65 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_66;
		memset((&L_66), 0, sizeof(L_66));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_66), (0.0f), ((float)il2cpp_codegen_multiply((float)(-5.0f), (float)L_65)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_64);
		CharacterController_Move_m31D77B4E934015FE3D6CE04BF8017A1DD0487434(L_64, L_66, /*hidden argument*/NULL);
	}

IL_0240:
	{
		// if (transform.position.y <= minY || transform.position.y >= maxY)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_67 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_67);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_68 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_67, /*hidden argument*/NULL);
		float L_69 = L_68.get_y_3();
		float L_70 = __this->get_minY_14();
		if ((((float)L_69) <= ((float)L_70)))
		{
			goto IL_0273;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_71 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_71);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_72 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_71, /*hidden argument*/NULL);
		float L_73 = L_72.get_y_3();
		float L_74 = __this->get_maxY_15();
		if ((!(((float)L_73) >= ((float)L_74))))
		{
			goto IL_0347;
		}
	}

IL_0273:
	{
		// sign *= -1;
		int32_t L_75 = __this->get_sign_4();
		__this->set_sign_4(((int32_t)il2cpp_codegen_multiply((int32_t)L_75, (int32_t)(-1))));
		// break;
		return;
	}

IL_0282:
	{
		// elapsedTime += Time.deltaTime;
		float L_76 = __this->get_elapsedTime_16();
		float L_77 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_elapsedTime_16(((float)il2cpp_codegen_add((float)L_76, (float)L_77)));
		// if (elapsedTime >= 1 && sign == 1)
		float L_78 = __this->get_elapsedTime_16();
		if ((!(((float)L_78) >= ((float)(1.0f)))))
		{
			goto IL_02ee;
		}
	}
	{
		int32_t L_79 = __this->get_sign_4();
		if ((!(((uint32_t)L_79) == ((uint32_t)1))))
		{
			goto IL_02ee;
		}
	}
	{
		// transform.position += new Vector3(0, -1000, 0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_80 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_81 = L_80;
		NullCheck(L_81);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_82 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_81, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_83;
		memset((&L_83), 0, sizeof(L_83));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_83), (0.0f), (-1000.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_84 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_82, L_83, /*hidden argument*/NULL);
		NullCheck(L_81);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_81, L_84, /*hidden argument*/NULL);
		// sign *= -1;
		int32_t L_85 = __this->get_sign_4();
		__this->set_sign_4(((int32_t)il2cpp_codegen_multiply((int32_t)L_85, (int32_t)(-1))));
		// elapsedTime = 0;
		__this->set_elapsedTime_16((0.0f));
		// }
		return;
	}

IL_02ee:
	{
		// else if (elapsedTime >= 1 && sign == -1)
		float L_86 = __this->get_elapsedTime_16();
		if ((!(((float)L_86) >= ((float)(1.0f)))))
		{
			goto IL_0347;
		}
	}
	{
		int32_t L_87 = __this->get_sign_4();
		if ((!(((uint32_t)L_87) == ((uint32_t)(-1)))))
		{
			goto IL_0347;
		}
	}
	{
		// transform.position += new Vector3(0, 1000, 0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_88 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_89 = L_88;
		NullCheck(L_89);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_90 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_89, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_91;
		memset((&L_91), 0, sizeof(L_91));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_91), (0.0f), (1000.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_92 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_90, L_91, /*hidden argument*/NULL);
		NullCheck(L_89);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_89, L_92, /*hidden argument*/NULL);
		// sign *= -1;
		int32_t L_93 = __this->get_sign_4();
		__this->set_sign_4(((int32_t)il2cpp_codegen_multiply((int32_t)L_93, (int32_t)(-1))));
		// elapsedTime = 0;
		__this->set_elapsedTime_16((0.0f));
	}

IL_0347:
	{
		// }
		return;
	}
}
// System.Void Obstacle::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Obstacle_OnTriggerEnter_m9322D17FBF4BCF07FFC7B86FB37176062FC7000E (Obstacle_t45A47093FD0D640DE4C85A2CB52665B5192A232E * __this, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___coll0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Obstacle_OnTriggerEnter_m9322D17FBF4BCF07FFC7B86FB37176062FC7000E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (coll.CompareTag("PlayerFoot"))   
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_0 = ___coll0;
		NullCheck(L_0);
		bool L_1 = Component_CompareTag_mD074608D7FEC96A53C57A456BA613EE01C31D4B7(L_0, _stringLiteral225319E943413D79E58FF96923165D4846E69D4F, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// playerCheck = true; 
		__this->set_playerCheck_8((bool)1);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void Obstacle::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Obstacle_OnTriggerExit_m446BD1511ACFE5231C0D2465E9C5A30270091DEE (Obstacle_t45A47093FD0D640DE4C85A2CB52665B5192A232E * __this, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___coll0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Obstacle_OnTriggerExit_m446BD1511ACFE5231C0D2465E9C5A30270091DEE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (coll.CompareTag("PlayerFoot"))
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_0 = ___coll0;
		NullCheck(L_0);
		bool L_1 = Component_CompareTag_mD074608D7FEC96A53C57A456BA613EE01C31D4B7(L_0, _stringLiteral225319E943413D79E58FF96923165D4846E69D4F, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// playerCheck = false; 
		__this->set_playerCheck_8((bool)0);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void Obstacle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Obstacle__ctor_m2A721D4A6D3CB0FB812FC38AFCAE3E86AB2EB0F3 (Obstacle_t45A47093FD0D640DE4C85A2CB52665B5192A232E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Awake_m73685A351E62D9DE77A8415499A6E5B6E741189B (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Awake_m73685A351E62D9DE77A8415499A6E5B6E741189B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_m019E27A0FE021A28A1C672801416ACA5E770933F(1, /*hidden argument*/NULL);
		// Cursor.visible = false;
		Cursor_set_visible_mDB51E60B3D7B14873A6F5FBE5E0A432D4A46C431((bool)0, /*hidden argument*/NULL);
		// flatform = GameObject.FindWithTag("Platform");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_FindWithTag_mF188C0A7A5DAC355AB020E2964B155F355237CB5(_stringLiteral123A7F2FCC9AE7CBBBD7C7627A483853A9708DAB, /*hidden argument*/NULL);
		__this->set_flatform_10(L_0);
		// rigid = GetComponent<Rigidbody>();
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_1 = Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C_RuntimeMethod_var);
		__this->set_rigid_14(L_1);
		// myTransform = transform;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		__this->set_myTransform_8(L_2);
		// cc = GetComponent<CharacterController>();
		CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E * L_3 = Component_GetComponent_TisCharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E_m1DCA6E99D55768E09085D1B6421BB963CFA4F7AB(__this, /*hidden argument*/Component_GetComponent_TisCharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E_m1DCA6E99D55768E09085D1B6421BB963CFA4F7AB_RuntimeMethod_var);
		__this->set_cc_12(L_3);
		// model = transform.GetChild(0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_4, 0, /*hidden argument*/NULL);
		__this->set_model_9(L_5);
		// ani = model.GetComponent<Animator>();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = __this->get_model_9();
		NullCheck(L_6);
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_7 = Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719(L_6, /*hidden argument*/Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719_RuntimeMethod_var);
		__this->set_ani_13(L_7);
		// cameraTransform = Camera.main.transform;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_8 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_8, /*hidden argument*/NULL);
		__this->set_cameraTransform_19(L_9);
		// cameraParentTransform = cameraTransform.parent;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = __this->get_cameraTransform_19();
		NullCheck(L_10);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_10, /*hidden argument*/NULL);
		__this->set_cameraParentTransform_18(L_11);
		// }
		return;
	}
}
// System.Void PlayerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Update_mE64911CD78BC318BCCB0EDB3D9DF3BC1559C70FA (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Update_mE64911CD78BC318BCCB0EDB3D9DF3BC1559C70FA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GameData.G_TIME > 3)
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		float L_0 = ((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_G_TIME_13();
		if ((!(((float)L_0) > ((float)(3.0f)))))
		{
			goto IL_00c4;
		}
	}
	{
		// Balance();
		PlayerController_Balance_mB5FC97919AF2346FEC58CD5CA31A559E2D319A4F(__this, /*hidden argument*/NULL);
		// CameraDistanceCtrl();
		PlayerController_CameraDistanceCtrl_m3E633FDCEFA7E7447A61B0F97BB4BCE2170F666F(__this, /*hidden argument*/NULL);
		// Debug.Log("???:" + JumpPower);
		float L_1 = __this->get_JumpPower_7();
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral2006A0303B4C4B24D977E626015FB68076C54B1B, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_4, /*hidden argument*/NULL);
		// if (cc.isGrounded)
		CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E * L_5 = __this->get_cc_12();
		NullCheck(L_5);
		bool L_6 = CharacterController_get_isGrounded_m5BB5A50DD5942ED9AEF9F3A97CF52913591E077B(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		// GradientCheck();
		PlayerController_GradientCheck_mBFC461FBA9C7B778616637921255C38C751D8972(__this, /*hidden argument*/NULL);
		// MoveCalc(1.0f);
		PlayerController_MoveCalc_mB1DF947C3B9BC6D1F9A822592FF13183F0A51643(__this, (1.0f), /*hidden argument*/NULL);
		// }
		goto IL_009a;
	}

IL_0055:
	{
		// if (flatformScript != null)
		Obstacle_t45A47093FD0D640DE4C85A2CB52665B5192A232E * L_7 = __this->get_flatformScript_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_7, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0074;
		}
	}
	{
		// ani.SetBool("isGrounded", false);
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_9 = __this->get_ani_13();
		NullCheck(L_9);
		Animator_SetBool_m497805BA217139E42808899782FA05C15BC9879E(L_9, _stringLiteral2967083730BC8A2461A7EFE981484A2852587540, (bool)0, /*hidden argument*/NULL);
	}

IL_0074:
	{
		// move.y -= gravity * Time.deltaTime;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_10 = __this->get_address_of_move_16();
		float* L_11 = L_10->get_address_of_y_3();
		float* L_12 = L_11;
		float L_13 = *((float*)L_12);
		float L_14 = __this->get_gravity_4();
		float L_15 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		*((float*)L_12) = (float)((float)il2cpp_codegen_subtract((float)L_13, (float)((float)il2cpp_codegen_multiply((float)L_14, (float)L_15))));
		// MoveCalc(0.01f);
		PlayerController_MoveCalc_mB1DF947C3B9BC6D1F9A822592FF13183F0A51643(__this, (0.01f), /*hidden argument*/NULL);
	}

IL_009a:
	{
		// cc.Move(move * Time.deltaTime);
		CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E * L_16 = __this->get_cc_12();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = __this->get_move_16();
		float L_18 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_17, L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		CharacterController_Move_m31D77B4E934015FE3D6CE04BF8017A1DD0487434(L_16, L_19, /*hidden argument*/NULL);
		// if (Input.GetMouseButtonDown(1)) GameData.isEnd = true;
		bool L_20 = Input_GetMouseButtonDown_m5AD76E22AA839706219AD86A4E0BE5276AF8E28A(1, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00c4;
		}
	}
	{
		// if (Input.GetMouseButtonDown(1)) GameData.isEnd = true;
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_isEnd_14((bool)1);
	}

IL_00c4:
	{
		// }
		return;
	}
}
// System.Void PlayerController::OnControllerColliderHit(UnityEngine.ControllerColliderHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnControllerColliderHit_m607D690769AFEFB1B0CDB25CC056DA176CC64E6A (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968 * ___coll0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_OnControllerColliderHit_m607D690769AFEFB1B0CDB25CC056DA176CC64E6A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (coll.gameObject.tag == "Gate")  
		ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968 * L_0 = ___coll0;
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = ControllerColliderHit_get_gameObject_m5629F6FD1A1547625030EA17C0FDA3FE3F3BDF31(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275(L_1, /*hidden argument*/NULL);
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_2, _stringLiteral5701B5F6FEAA9AAAE618DD553ADC29893963CC1A, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_005a;
		}
	}
	{
		// Debug.Log("??? ??");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralE0782BCFD03AC9698E803EB4C775843E22AE021F, /*hidden argument*/NULL);
		// verticalVelocity = 30;
		__this->set_verticalVelocity_20((30.0f));
		// verticalVelocity += Physics.gravity.y * Time.deltaTime;
		float L_4 = __this->get_verticalVelocity_20();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Physics_get_gravity_mC0F44371C49C1DD1455D6ADEC824BAE35E1E104B(/*hidden argument*/NULL);
		float L_6 = L_5.get_y_3();
		float L_7 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_verticalVelocity_20(((float)il2cpp_codegen_add((float)L_4, (float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)))));
		// move.y = verticalVelocity;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_8 = __this->get_address_of_move_16();
		float L_9 = __this->get_verticalVelocity_20();
		L_8->set_y_3(L_9);
	}

IL_005a:
	{
		// if(coll.gameObject.tag== "Goal")
		ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968 * L_10 = ___coll0;
		NullCheck(L_10);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = ControllerColliderHit_get_gameObject_m5629F6FD1A1547625030EA17C0FDA3FE3F3BDF31(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12 = GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275(L_11, /*hidden argument*/NULL);
		bool L_13 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_12, _stringLiteral9FE00ACEBC106E4DBA1611CDD1D7DC308A244991, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0077;
		}
	}
	{
		// GameData.isEnd = true;
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_isEnd_14((bool)1);
	}

IL_0077:
	{
		// }
		return;
	}
}
// System.Void PlayerController::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_LateUpdate_m4483245C11B5D7C69E16CEDC9A1CAD600D5C5F6D (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_LateUpdate_m4483245C11B5D7C69E16CEDC9A1CAD600D5C5F6D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cameraParentTransform.position = myTransform.position + Vector3.up * 1.4f;  
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_cameraParentTransform_18();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = __this->get_myTransform_8();
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_3, (1.4f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_2, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_0, L_5, /*hidden argument*/NULL);
		// mouseMove += new Vector3(-Input.GetAxisRaw("Mouse Y") * mouseSensitivity, Input.GetAxisRaw("Mouse X") * mouseSensitivity, 0);   
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = __this->get_mouseMove_15();
		float L_7 = Input_GetAxisRaw_mC68301A9D93702F0C393E45C6337348062EACE21(_stringLiteral1E88AB05D76FF253F292B74866D32460BB3836E2, /*hidden argument*/NULL);
		float L_8 = __this->get_mouseSensitivity_6();
		float L_9 = Input_GetAxisRaw_mC68301A9D93702F0C393E45C6337348062EACE21(_stringLiteral294D359ECE148A430F19981912277E5154CA19E0, /*hidden argument*/NULL);
		float L_10 = __this->get_mouseSensitivity_6();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_11), ((float)il2cpp_codegen_multiply((float)((-L_7)), (float)L_8)), ((float)il2cpp_codegen_multiply((float)L_9, (float)L_10)), (0.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_6, L_11, /*hidden argument*/NULL);
		__this->set_mouseMove_15(L_12);
		// if (mouseMove.x < -10)  
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_13 = __this->get_address_of_mouseMove_15();
		float L_14 = L_13->get_x_2();
		if ((!(((float)L_14) < ((float)(-10.0f)))))
		{
			goto IL_008c;
		}
	}
	{
		// mouseMove.x = -10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_15 = __this->get_address_of_mouseMove_15();
		L_15->set_x_2((-10.0f));
		goto IL_00ae;
	}

IL_008c:
	{
		// else if (30 < mouseMove.x)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_16 = __this->get_address_of_mouseMove_15();
		float L_17 = L_16->get_x_2();
		if ((!(((float)(30.0f)) < ((float)L_17))))
		{
			goto IL_00ae;
		}
	}
	{
		// mouseMove.x = 30;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_18 = __this->get_address_of_mouseMove_15();
		L_18->set_x_2((30.0f));
	}

IL_00ae:
	{
		// cameraParentTransform.localEulerAngles = mouseMove;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = __this->get_cameraParentTransform_18();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = __this->get_mouseMove_15();
		NullCheck(L_19);
		Transform_set_localEulerAngles_mC5E92A989DD8B2E7B854F9D84B528A34AEAA1A17(L_19, L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerController::Balance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Balance_mB5FC97919AF2346FEC58CD5CA31A559E2D319A4F (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, const RuntimeMethod* method)
{
	{
		// if (myTransform.eulerAngles.x != 0 || myTransform.eulerAngles.z != 0)   
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_myTransform_8();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		if ((!(((float)L_2) == ((float)(0.0f)))))
		{
			goto IL_002e;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = __this->get_myTransform_8();
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_z_4();
		if ((((float)L_5) == ((float)(0.0f))))
		{
			goto IL_0058;
		}
	}

IL_002e:
	{
		// myTransform.eulerAngles = new Vector3(0, myTransform.eulerAngles.y, 0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = __this->get_myTransform_8();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = __this->get_myTransform_8();
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_10), (0.0f), L_9, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_eulerAngles_m4B2B374C0B089A7ED0B522A3A4C56FA868992685(L_6, L_10, /*hidden argument*/NULL);
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void PlayerController::CameraDistanceCtrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_CameraDistanceCtrl_m3E633FDCEFA7E7447A61B0F97BB4BCE2170F666F (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_CameraDistanceCtrl_m3E633FDCEFA7E7447A61B0F97BB4BCE2170F666F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Camera.main.transform.localPosition += new Vector3(0, 0, Input.GetAxisRaw("Mouse ScrollWheel") * 2.0f); 
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_0, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = L_1;
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_2, /*hidden argument*/NULL);
		float L_4 = Input_GetAxisRaw_mC68301A9D93702F0C393E45C6337348062EACE21(_stringLiteral627A7387C8BDDC7ACFF00D342D3F799DC6C19A31, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_5), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)L_4, (float)(2.0f))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_3, L_5, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_2, L_6, /*hidden argument*/NULL);
		// if (-1 < Camera.main.transform.localPosition.z)
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_7 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_z_4();
		if ((!(((float)(-1.0f)) < ((float)L_10))))
		{
			goto IL_0096;
		}
	}
	{
		// Camera.main.transform.localPosition = new Vector3(Camera.main.transform.localPosition.x, Camera.main.transform.localPosition.y, -1);    
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_11 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_11, /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_13 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_x_2();
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_17 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_21), L_16, L_20, (-1.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_12, L_21, /*hidden argument*/NULL);
		return;
	}

IL_0096:
	{
		// else if (Camera.main.transform.localPosition.z < -5)
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_22 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_23 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_23, /*hidden argument*/NULL);
		float L_25 = L_24.get_z_4();
		if ((!(((float)L_25) < ((float)(-5.0f)))))
		{
			goto IL_00f2;
		}
	}
	{
		// Camera.main.transform.localPosition = new Vector3(Camera.main.transform.localPosition.x, Camera.main.transform.localPosition.y, -5);    
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_26 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_27 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_26, /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_28 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_29, /*hidden argument*/NULL);
		float L_31 = L_30.get_x_2();
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_32 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		NullCheck(L_32);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_33 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_33, /*hidden argument*/NULL);
		float L_35 = L_34.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_36), L_31, L_35, (-5.0f), /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_27, L_36, /*hidden argument*/NULL);
	}

IL_00f2:
	{
		// }
		return;
	}
}
// System.Void PlayerController::MoveCalc(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_MoveCalc_mB1DF947C3B9BC6D1F9A822592FF13183F0A51643 (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, float ___ratio0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_MoveCalc_mB1DF947C3B9BC6D1F9A822592FF13183F0A51643_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// float tempMoveY = move.y;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_0 = __this->get_address_of_move_16();
		float L_1 = L_0->get_y_3();
		V_0 = L_1;
		// move.y = 0; 
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_2 = __this->get_address_of_move_16();
		L_2->set_y_3((0.0f));
		// Vector3 inputMoveXZ = new Vector3(Input.GetAxis("Horizontal"), 0, Input.GetAxis("Vertical"));
		float L_3 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C, /*hidden argument*/NULL);
		float L_4 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral4B937CC841D82F8936CEF1EFB88708AB5B0F1EE5, /*hidden argument*/NULL);
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), L_3, (0.0f), L_4, /*hidden argument*/NULL);
		// float inputMoveXZMgnitude = inputMoveXZ.sqrMagnitude; 
		float L_5 = Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_5;
		// inputMoveXZ = myTransform.TransformDirection(inputMoveXZ);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = __this->get_myTransform_8();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = V_1;
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_TransformDirection_m85FC1D7E1322E94F65DA59AEF3B1166850B183EF(L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// if (inputMoveXZMgnitude <= 1)
		float L_9 = V_2;
		if ((!(((float)L_9) <= ((float)(1.0f)))))
		{
			goto IL_0068;
		}
	}
	{
		// inputMoveXZ *= runSpeed;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_1;
		float L_11 = __this->get_runSpeed_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_10, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		goto IL_007b;
	}

IL_0068:
	{
		// inputMoveXZ = inputMoveXZ.normalized * runSpeed;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), /*hidden argument*/NULL);
		float L_14 = __this->get_runSpeed_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_13, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
	}

IL_007b:
	{
		// if (Input.GetButton("Horizontal") || Input.GetButton("Vertical"))
		bool L_16 = Input_GetButton_m19CFAF3A6E1A65EE44FB197020F11AA502DF468D(_stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_0096;
		}
	}
	{
		bool L_17 = Input_GetButton_m19CFAF3A6E1A65EE44FB197020F11AA502DF468D(_stringLiteral4B937CC841D82F8936CEF1EFB88708AB5B0F1EE5, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_015e;
		}
	}

IL_0096:
	{
		// Quaternion cameraRotation = cameraParentTransform.rotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = __this->get_cameraParentTransform_18();
		NullCheck(L_18);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_18, /*hidden argument*/NULL);
		V_4 = L_19;
		// cameraRotation.x = cameraRotation.z = 0;    
		float L_20 = (0.0f);
		V_5 = L_20;
		(&V_4)->set_z_2(L_20);
		float L_21 = V_5;
		(&V_4)->set_x_0(L_21);
		// myTransform.rotation = Quaternion.Slerp(myTransform.rotation, cameraRotation, 10.0f * Time.deltaTime);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = __this->get_myTransform_8();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_23 = __this->get_myTransform_8();
		NullCheck(L_23);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_24 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_23, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_25 = V_4;
		float L_26 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_27 = Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756(L_24, L_25, ((float)il2cpp_codegen_multiply((float)(10.0f), (float)L_26)), /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_22, L_27, /*hidden argument*/NULL);
		// if (move != Vector3.zero)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = __this->get_move_16();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		bool L_30 = Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E(L_28, L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0142;
		}
	}
	{
		// Quaternion characterRotation = Quaternion.LookRotation(move);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = __this->get_move_16();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_32 = Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F(L_31, /*hidden argument*/NULL);
		V_6 = L_32;
		// characterRotation.x = characterRotation.z = 0;
		float L_33 = (0.0f);
		V_5 = L_33;
		(&V_6)->set_z_2(L_33);
		float L_34 = V_5;
		(&V_6)->set_x_0(L_34);
		// model.rotation = Quaternion.Slerp(model.rotation, characterRotation, 10.0f * Time.deltaTime);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_35 = __this->get_model_9();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_36 = __this->get_model_9();
		NullCheck(L_36);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_37 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_36, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_38 = V_6;
		float L_39 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_40 = Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756(L_37, L_38, ((float)il2cpp_codegen_multiply((float)(10.0f), (float)L_39)), /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_35, L_40, /*hidden argument*/NULL);
	}

IL_0142:
	{
		// move = Vector3.MoveTowards(move, inputMoveXZ, ratio * runSpeed);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = __this->get_move_16();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = V_1;
		float L_43 = ___ratio0;
		float L_44 = __this->get_runSpeed_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = Vector3_MoveTowards_mA288BB5AA73DDA9CA76EDC11F339BAFDA1E4FF45(L_41, L_42, ((float)il2cpp_codegen_multiply((float)L_43, (float)L_44)), /*hidden argument*/NULL);
		__this->set_move_16(L_45);
		// }
		goto IL_0184;
	}

IL_015e:
	{
		// move = Vector3.MoveTowards(move, Vector3.zero, (1 - inputMoveXZMgnitude) * runSpeed * ratio);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = __this->get_move_16();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		float L_48 = V_2;
		float L_49 = __this->get_runSpeed_5();
		float L_50 = ___ratio0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_51 = Vector3_MoveTowards_mA288BB5AA73DDA9CA76EDC11F339BAFDA1E4FF45(L_46, L_47, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_48)), (float)L_49)), (float)L_50)), /*hidden argument*/NULL);
		__this->set_move_16(L_51);
	}

IL_0184:
	{
		// float speed = move.sqrMagnitude;    
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_52 = __this->get_address_of_move_16();
		float L_53 = Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_52, /*hidden argument*/NULL);
		V_3 = L_53;
		// ani.SetFloat("Speed", speed);
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_54 = __this->get_ani_13();
		float L_55 = V_3;
		NullCheck(L_54);
		Animator_SetFloat_mE4C29F6980EBBBD954637721E6E13A0BE2B13C43(L_54, _stringLiteral2D2CB022BC3D26BD1407C4AA787D5E46E1AD4C3B, L_55, /*hidden argument*/NULL);
		// move.y = tempMoveY; 
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_56 = __this->get_address_of_move_16();
		float L_57 = V_0;
		L_56->set_y_3(L_57);
		// if (Input.GetMouseButtonDown(0) && cc.isGrounded)    
		bool L_58 = Input_GetMouseButtonDown_m5AD76E22AA839706219AD86A4E0BE5276AF8E28A(0, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_01fc;
		}
	}
	{
		CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E * L_59 = __this->get_cc_12();
		NullCheck(L_59);
		bool L_60 = CharacterController_get_isGrounded_m5BB5A50DD5942ED9AEF9F3A97CF52913591E077B(L_59, /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_01fc;
		}
	}
	{
		// verticalVelocity = JumpPower;
		float L_61 = __this->get_JumpPower_7();
		__this->set_verticalVelocity_20(L_61);
		// verticalVelocity += Physics.gravity.y * Time.deltaTime;
		float L_62 = __this->get_verticalVelocity_20();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_63 = Physics_get_gravity_mC0F44371C49C1DD1455D6ADEC824BAE35E1E104B(/*hidden argument*/NULL);
		float L_64 = L_63.get_y_3();
		float L_65 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_verticalVelocity_20(((float)il2cpp_codegen_add((float)L_62, (float)((float)il2cpp_codegen_multiply((float)L_64, (float)L_65)))));
		// move.y = verticalVelocity;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_66 = __this->get_address_of_move_16();
		float L_67 = __this->get_verticalVelocity_20();
		L_66->set_y_3(L_67);
	}

IL_01fc:
	{
		// }
		return;
	}
}
// System.Void PlayerController::GradientCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_GradientCheck_mBFC461FBA9C7B778616637921255C38C751D8972 (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_GradientCheck_mBFC461FBA9C7B778616637921255C38C751D8972_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ani.SetBool("isGrounded", true);
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_0 = __this->get_ani_13();
		NullCheck(L_0);
		Animator_SetBool_m497805BA217139E42808899782FA05C15BC9879E(L_0, _stringLiteral2967083730BC8A2461A7EFE981484A2852587540, (bool)1, /*hidden argument*/NULL);
		// if (Physics.Raycast(myTransform.position, Vector3.down, 0.2f))
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = __this->get_myTransform_8();
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_down_m3F76A48E5B7C82B35EE047375538AFD91A305F55(/*hidden argument*/NULL);
		bool L_4 = Physics_Raycast_m0583CCAA9E2F3BD031F12FA080837E9A48EEC16D(L_2, L_3, (0.2f), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		// move.y = -5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_5 = __this->get_address_of_move_16();
		L_5->set_y_3((-5.0f));
		// }
		return;
	}

IL_003e:
	{
		// move.y = -1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_6 = __this->get_address_of_move_16();
		L_6->set_y_3((-1.0f));
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mF66473FEFF2DFEB0325A4D9C917C27C6CE4B22F7 (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, const RuntimeMethod* method)
{
	{
		// float gravity = 9.81f;      
		__this->set_gravity_4((9.81f));
		// float runSpeed = 5.0f;      
		__this->set_runSpeed_5((5.0f));
		// float mouseSensitivity = 2.0f;  
		__this->set_mouseSensitivity_6((2.0f));
		// public float JumpPower = 10.0f;    
		__this->set_JumpPower_7((10.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Select::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Select_Start_m6B304A8365D1B53530929E2C65D05C09E957FF86 (Select_tFB3AFACAA5693CCF92F3FE506F90133FAC4E2AA4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Select_Start_m6B304A8365D1B53530929E2C65D05C09E957FF86_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// a.onClick.AddListener(OnClickeda);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_0 = __this->get_a_4();
		NullCheck(L_0);
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_1 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline(L_0, /*hidden argument*/NULL);
		UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_2 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
		UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_2, __this, (intptr_t)((intptr_t)Select_OnClickeda_mDB7973B1B41A2BC88F8EC577B48932AE6CFA86A4_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9(L_1, L_2, /*hidden argument*/NULL);
		// b.onClick.AddListener(OnClickedb);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_3 = __this->get_b_5();
		NullCheck(L_3);
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_4 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline(L_3, /*hidden argument*/NULL);
		UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_5 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
		UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_5, __this, (intptr_t)((intptr_t)Select_OnClickedb_m268D97B2D508D3C5339C1216DBBF89593FE19CA3_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9(L_4, L_5, /*hidden argument*/NULL);
		// c.onClick.AddListener(OnClickedc);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_6 = __this->get_c_6();
		NullCheck(L_6);
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_7 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline(L_6, /*hidden argument*/NULL);
		UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_8 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
		UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_8, __this, (intptr_t)((intptr_t)Select_OnClickedc_m1C9E19D14326357D6FBA59B2CC76A51000EED5B3_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9(L_7, L_8, /*hidden argument*/NULL);
		// d.onClick.AddListener(OnClickedd);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_9 = __this->get_d_7();
		NullCheck(L_9);
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_10 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline(L_9, /*hidden argument*/NULL);
		UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_11 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
		UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_11, __this, (intptr_t)((intptr_t)Select_OnClickedd_m52B5D8AB7A06C1013568F936C651718F02214040_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9(L_10, L_11, /*hidden argument*/NULL);
		// start.onClick.AddListener(OnClickedStart);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_12 = __this->get_start_9();
		NullCheck(L_12);
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_13 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline(L_12, /*hidden argument*/NULL);
		UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_14 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
		UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_14, __this, (intptr_t)((intptr_t)Select_OnClickedStart_m30A6F5C8C49466705A8736265EBB50E400505A6A_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_13);
		UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9(L_13, L_14, /*hidden argument*/NULL);
		// if(PlayerPrefs.HasKey("1???"))
		bool L_15 = PlayerPrefs_HasKey_mD87D3051ACE7EC6F5B54F4FC9E18572C917CA0D1(_stringLiteral9A0D4BA63F9F45564A58D1443A6CD311760763FC, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00c5;
		}
	}
	{
		// GameData.Name1= PlayerPrefs.GetString("1???");
		String_t* L_16 = PlayerPrefs_GetString_m3031AD2D5DEAB97677A9EF629618541437F079F1(_stringLiteral9A0D4BA63F9F45564A58D1443A6CD311760763FC, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Name1_4(L_16);
		// GameData.Time1 =PlayerPrefs.GetFloat("1???");
		float L_17 = PlayerPrefs_GetFloat_m254A03CC8DCA9E12EE09A016B64EDB7AB9938957(_stringLiteral9DD2993179F8F3A5AC7AA25125651716411C5AA2, /*hidden argument*/NULL);
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Time1_5(L_17);
		// GameData.Selected1 =PlayerPrefs.GetInt("1????");
		int32_t L_18 = PlayerPrefs_GetInt_m318D2B42E0FCAF179BF86D6C2353B38A58089BAD(_stringLiteral0D403041C4D7A0132F41447D88B2D68C8E5ED0A2, /*hidden argument*/NULL);
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Selected1_6(L_18);
	}

IL_00c5:
	{
		// if (PlayerPrefs.HasKey("2???"))
		bool L_19 = PlayerPrefs_HasKey_mD87D3051ACE7EC6F5B54F4FC9E18572C917CA0D1(_stringLiteral3EEFBD49BB55971FFF1BF13D5BD69D871C3021F8, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00fe;
		}
	}
	{
		// GameData.Name2 = PlayerPrefs.GetString("2???");
		String_t* L_20 = PlayerPrefs_GetString_m3031AD2D5DEAB97677A9EF629618541437F079F1(_stringLiteral3EEFBD49BB55971FFF1BF13D5BD69D871C3021F8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Name2_7(L_20);
		// GameData.Time2 = PlayerPrefs.GetFloat("2???");
		float L_21 = PlayerPrefs_GetFloat_m254A03CC8DCA9E12EE09A016B64EDB7AB9938957(_stringLiteral9F8F83EA07374F8F9FEC9DA4A9042C3FBE8E5293, /*hidden argument*/NULL);
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Time2_8(L_21);
		// GameData.Selected2 = PlayerPrefs.GetInt("2????");
		int32_t L_22 = PlayerPrefs_GetInt_m318D2B42E0FCAF179BF86D6C2353B38A58089BAD(_stringLiteral6D5CF88A7EF83280C1CB830831189D9A37D8093F, /*hidden argument*/NULL);
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Selected2_9(L_22);
	}

IL_00fe:
	{
		// if (PlayerPrefs.HasKey("3???"))
		bool L_23 = PlayerPrefs_HasKey_mD87D3051ACE7EC6F5B54F4FC9E18572C917CA0D1(_stringLiteral400BCBFE6951DB76550026ADC0B604B4BEECE182, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0137;
		}
	}
	{
		// GameData.Name3 = PlayerPrefs.GetString("3???");
		String_t* L_24 = PlayerPrefs_GetString_m3031AD2D5DEAB97677A9EF629618541437F079F1(_stringLiteral400BCBFE6951DB76550026ADC0B604B4BEECE182, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Name3_10(L_24);
		// GameData.Time3 = PlayerPrefs.GetFloat("3???");
		float L_25 = PlayerPrefs_GetFloat_m254A03CC8DCA9E12EE09A016B64EDB7AB9938957(_stringLiteral03CDC6A1FBBF9BF1AEC6F0D6A0FE0F38646A6A1A, /*hidden argument*/NULL);
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Time3_11(L_25);
		// GameData.Selected3 = PlayerPrefs.GetInt("3????");
		int32_t L_26 = PlayerPrefs_GetInt_m318D2B42E0FCAF179BF86D6C2353B38A58089BAD(_stringLiteralD666DEA102FF035F02A4B5D1C43B9AE162A34FB0, /*hidden argument*/NULL);
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Selected3_12(L_26);
	}

IL_0137:
	{
		// PlayerPrefs.DeleteAll();
		PlayerPrefs_DeleteAll_m7889B3CBD8B243DEC40D308C264F23EB098B7682(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Select::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Select_Update_mC4F1DDACF689BAA630314CF9024A998871DD7AD6 (Select_tFB3AFACAA5693CCF92F3FE506F90133FAC4E2AA4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Select_Update_mC4F1DDACF689BAA630314CF9024A998871DD7AD6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textlen = input.text.Length;
		TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB * L_0 = __this->get_input_8();
		NullCheck(L_0);
		String_t* L_1 = TMP_InputField_get_text_m586F8E3FFBB52A125B2D77D3FBBCC1185EDC920C_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_1, /*hidden argument*/NULL);
		__this->set_textlen_11(L_2);
		// if (isPressedStart)
		bool L_3 = __this->get_isPressedStart_13();
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// SceneManager.LoadScene(2);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_t68A7070D2AD3860C3EE327C94F38270E49AFB489_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(2, /*hidden argument*/NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Select::OnClickeda()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Select_OnClickeda_mDB7973B1B41A2BC88F8EC577B48932AE6CFA86A4 (Select_tFB3AFACAA5693CCF92F3FE506F90133FAC4E2AA4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Select_OnClickeda_mDB7973B1B41A2BC88F8EC577B48932AE6CFA86A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sel = 0;
		__this->set_sel_10(0);
		// GameData.selected = 0;
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		GameData_set_selected_m0F16D2E8EDD1DE62BDBC13890DBB3C58B80A712D_inline(0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Select::OnClickedb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Select_OnClickedb_m268D97B2D508D3C5339C1216DBBF89593FE19CA3 (Select_tFB3AFACAA5693CCF92F3FE506F90133FAC4E2AA4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Select_OnClickedb_m268D97B2D508D3C5339C1216DBBF89593FE19CA3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sel = 2;
		__this->set_sel_10(2);
		// GameData.selected = 2;
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		GameData_set_selected_m0F16D2E8EDD1DE62BDBC13890DBB3C58B80A712D_inline(2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Select::OnClickedc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Select_OnClickedc_m1C9E19D14326357D6FBA59B2CC76A51000EED5B3 (Select_tFB3AFACAA5693CCF92F3FE506F90133FAC4E2AA4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Select_OnClickedc_m1C9E19D14326357D6FBA59B2CC76A51000EED5B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sel = 1;
		__this->set_sel_10(1);
		// GameData.selected = 1;
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		GameData_set_selected_m0F16D2E8EDD1DE62BDBC13890DBB3C58B80A712D_inline(1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Select::OnClickedd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Select_OnClickedd_m52B5D8AB7A06C1013568F936C651718F02214040 (Select_tFB3AFACAA5693CCF92F3FE506F90133FAC4E2AA4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Select_OnClickedd_m52B5D8AB7A06C1013568F936C651718F02214040_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sel = 3;
		__this->set_sel_10(3);
		// GameData.selected = 3;
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		GameData_set_selected_m0F16D2E8EDD1DE62BDBC13890DBB3C58B80A712D_inline(3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Select::OnClickedStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Select_OnClickedStart_m30A6F5C8C49466705A8736265EBB50E400505A6A (Select_tFB3AFACAA5693CCF92F3FE506F90133FAC4E2AA4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Select_OnClickedStart_m30A6F5C8C49466705A8736265EBB50E400505A6A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GameData.selected > -1&&input.text.Length>0) {
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		int32_t L_0 = GameData_get_selected_m8E8BA8713A55BD9E2DFDCE4FC887392C79683943_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)(-1))))
		{
			goto IL_0032;
		}
	}
	{
		TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB * L_1 = __this->get_input_8();
		NullCheck(L_1);
		String_t* L_2 = TMP_InputField_get_text_m586F8E3FFBB52A125B2D77D3FBBCC1185EDC920C_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0032;
		}
	}
	{
		// isPressedStart = true;
		__this->set_isPressedStart_13((bool)1);
		// GameData.name = input.text;
		TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB * L_4 = __this->get_input_8();
		NullCheck(L_4);
		String_t* L_5 = TMP_InputField_get_text_m586F8E3FFBB52A125B2D77D3FBBCC1185EDC920C_inline(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		GameData_set_name_m822B2CAFFF7DDFFC6A44F2855F8F9A0272481B6D_inline(L_5, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Select::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Select__ctor_m14B5726A0566CC992E23574040E099DE39F705B2 (Select_tFB3AFACAA5693CCF92F3FE506F90133FAC4E2AA4 * __this, const RuntimeMethod* method)
{
	{
		// public int sel = -1;
		__this->set_sel_10((-1));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TrampolineFunc::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrampolineFunc_Start_m8CF91D9CA7B6F0C9C7EC15A93891F0A1DC3B82D9 (TrampolineFunc_tFDEC9DE28330294ED72B9CA1C2260EB990A5A350 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrampolineFunc_Start_m8CF91D9CA7B6F0C9C7EC15A93891F0A1DC3B82D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.FindWithTag("Player");  
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_FindWithTag_mF188C0A7A5DAC355AB020E2964B155F355237CB5(_stringLiteralE53407CFE1A5156B9F0D1EED3BAB5EF3AE75CFD8, /*hidden argument*/NULL);
		__this->set_player_5(L_0);
		// if (player)  
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_player_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		// playerScript = player.GetComponent<PlayerController>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_player_5();
		NullCheck(L_3);
		PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * L_4 = GameObject_GetComponent_TisPlayerController_t4CE339054014370D89B89922EDC0EA2766589C85_mE97771A17F0DD6C17DECDDE26CC1D2D6B0C02C7E(L_3, /*hidden argument*/GameObject_GetComponent_TisPlayerController_t4CE339054014370D89B89922EDC0EA2766589C85_mE97771A17F0DD6C17DECDDE26CC1D2D6B0C02C7E_RuntimeMethod_var);
		__this->set_playerScript_6(L_4);
		// playerCC = player.GetComponent<CharacterController>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_player_5();
		NullCheck(L_5);
		CharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E * L_6 = GameObject_GetComponent_TisCharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E_mFEFA14BEB7F1347EB848907DD7F40F2DBDB2AEB4(L_5, /*hidden argument*/GameObject_GetComponent_TisCharacterController_t0ED98F461DBB7AC5B189C190153D83D5888BF93E_mFEFA14BEB7F1347EB848907DD7F40F2DBDB2AEB4_RuntimeMethod_var);
		__this->set_playerCC_7(L_6);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void TrampolineFunc::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrampolineFunc_Update_m300A2794FD30F4EC9A002E1DB28FD695FC979214 (TrampolineFunc_tFDEC9DE28330294ED72B9CA1C2260EB990A5A350 * __this, const RuntimeMethod* method)
{
	{
		// if (playerCheck)
		bool L_0 = __this->get_playerCheck_4();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// playerScript.JumpPower = 15.0f;
		PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * L_1 = __this->get_playerScript_6();
		NullCheck(L_1);
		L_1->set_JumpPower_7((15.0f));
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void TrampolineFunc::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrampolineFunc_OnTriggerEnter_m7A4528BC4C94144A2C94B63EA8F2E8ECA3961916 (TrampolineFunc_tFDEC9DE28330294ED72B9CA1C2260EB990A5A350 * __this, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___coll0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrampolineFunc_OnTriggerEnter_m7A4528BC4C94144A2C94B63EA8F2E8ECA3961916_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (coll.CompareTag("PlayerFoot"))   
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_0 = ___coll0;
		NullCheck(L_0);
		bool L_1 = Component_CompareTag_mD074608D7FEC96A53C57A456BA613EE01C31D4B7(L_0, _stringLiteral225319E943413D79E58FF96923165D4846E69D4F, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		// Debug.Log("??? ?? ??");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral494706AB7775375C1D3052BA13CDEC4A12E6FAEC, /*hidden argument*/NULL);
		// saveJumpPower = playerScript.JumpPower;
		PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * L_2 = __this->get_playerScript_6();
		NullCheck(L_2);
		float L_3 = L_2->get_JumpPower_7();
		__this->set_saveJumpPower_9(L_3);
		// playerCheck = true; 
		__this->set_playerCheck_4((bool)1);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void TrampolineFunc::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrampolineFunc_OnTriggerExit_mFA6428FB987528E3A6F359DAFCCD58F673C6FA24 (TrampolineFunc_tFDEC9DE28330294ED72B9CA1C2260EB990A5A350 * __this, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___coll0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrampolineFunc_OnTriggerExit_mFA6428FB987528E3A6F359DAFCCD58F673C6FA24_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (coll.CompareTag("PlayerFoot"))
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_0 = ___coll0;
		NullCheck(L_0);
		bool L_1 = Component_CompareTag_mD074608D7FEC96A53C57A456BA613EE01C31D4B7(L_0, _stringLiteral225319E943413D79E58FF96923165D4846E69D4F, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		// Debug.Log("??? ?? ??");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralB7D4A7FC0E235D5840312386C3B17422DEEF6D76, /*hidden argument*/NULL);
		// playerScript.JumpPower = saveJumpPower;
		PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * L_2 = __this->get_playerScript_6();
		float L_3 = __this->get_saveJumpPower_9();
		NullCheck(L_2);
		L_2->set_JumpPower_7(L_3);
		// playerCheck = false;
		__this->set_playerCheck_4((bool)0);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void TrampolineFunc::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrampolineFunc__ctor_m13D2B96CA83BADC29738A8E8A973BEFCA348D236 (TrampolineFunc_tFDEC9DE28330294ED72B9CA1C2260EB990A5A350 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityTemplateProjects.SimpleCameraController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCameraController_OnEnable_mE3D6E47455F101F2DEEBC2A58D09A97CF38E80B8 (SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42 * __this, const RuntimeMethod* method)
{
	{
		// m_TargetCameraState.SetFromTransform(transform);
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_0 = __this->get_m_TargetCameraState_4();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		CameraState_SetFromTransform_m6467352ED87301E5F4A76456060A765CAB96AF3E(L_0, L_1, /*hidden argument*/NULL);
		// m_InterpolatingCameraState.SetFromTransform(transform);
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_2 = __this->get_m_InterpolatingCameraState_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		CameraState_SetFromTransform_m6467352ED87301E5F4A76456060A765CAB96AF3E(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 UnityTemplateProjects.SimpleCameraController::GetInputTranslationDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SimpleCameraController_GetInputTranslationDirection_m73C99DB69CEB467834BBA00A62415D1CEEF0CB47 (SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleCameraController_GetInputTranslationDirection_m73C99DB69CEB467834BBA00A62415D1CEEF0CB47_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 direction = new Vector3();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 ));
		// if (Input.GetKey(KeyCode.W))
		bool L_0 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)119), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// direction += Vector3.forward;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_001d:
	{
		// if (Input.GetKey(KeyCode.S))
		bool L_4 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)115), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// direction += Vector3.back;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_back_mE7EF8625637E6F8B9E6B42A6AE140777C51E02F7(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
	}

IL_0032:
	{
		// if (Input.GetKey(KeyCode.A))
		bool L_8 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)97), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		// direction += Vector3.left;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_get_left_m74B52D8CFD8C62138067B2EB6846B6E9E51B7C20(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_9, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
	}

IL_0047:
	{
		// if (Input.GetKey(KeyCode.D))
		bool L_12 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)100), /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_005c;
		}
	}
	{
		// direction += Vector3.right;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_13, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
	}

IL_005c:
	{
		// if (Input.GetKey(KeyCode.Q))
		bool L_16 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)113), /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0071;
		}
	}
	{
		// direction += Vector3.down;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_get_down_m3F76A48E5B7C82B35EE047375538AFD91A305F55(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_17, L_18, /*hidden argument*/NULL);
		V_0 = L_19;
	}

IL_0071:
	{
		// if (Input.GetKey(KeyCode.E))
		bool L_20 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)101), /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0086;
		}
	}
	{
		// direction += Vector3.up;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_21, L_22, /*hidden argument*/NULL);
		V_0 = L_23;
	}

IL_0086:
	{
		// return direction;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = V_0;
		return L_24;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCameraController_Update_mBCD24408A4A2C4053F2F98DB808BD6DE88CA998F (SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleCameraController_Update_mBCD24408A4A2C4053F2F98DB808BD6DE88CA998F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * G_B9_2 = NULL;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * G_B8_2 = NULL;
	int32_t G_B10_0 = 0;
	float G_B10_1 = 0.0f;
	float G_B10_2 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * G_B10_3 = NULL;
	{
		// Vector3 translation = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (Input.GetKey(KeyCode.Escape))
		bool L_1 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)27), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Application.Quit();
		Application_Quit_mA005EB22CB989AC3794334754F15E1C0D2FF1C95(/*hidden argument*/NULL);
	}

IL_0014:
	{
		// if (Input.GetMouseButtonDown(1))
		bool L_2 = Input_GetMouseButtonDown_m5AD76E22AA839706219AD86A4E0BE5276AF8E28A(1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_m019E27A0FE021A28A1C672801416ACA5E770933F(1, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// if (Input.GetMouseButtonUp(1))
		bool L_3 = Input_GetMouseButtonUp_m4899272EB31D43EC4A3A1A115843CD3D9AA2C4EC(1, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// Cursor.visible = true;
		Cursor_set_visible_mDB51E60B3D7B14873A6F5FBE5E0A432D4A46C431((bool)1, /*hidden argument*/NULL);
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_m019E27A0FE021A28A1C672801416ACA5E770933F(0, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// if (Input.GetMouseButton(1))
		bool L_4 = Input_GetMouseButton_m43C68DE93C7D990E875BA53C4DEC9CA6230C8B79(1, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_00b1;
		}
	}
	{
		// var mouseMovement = new Vector2(Input.GetAxis("Mouse X"), Input.GetAxis("Mouse Y") * (invertY ? 1 : -1));
		float L_5 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral294D359ECE148A430F19981912277E5154CA19E0, /*hidden argument*/NULL);
		float L_6 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral1E88AB05D76FF253F292B74866D32460BB3836E2, /*hidden argument*/NULL);
		bool L_7 = __this->get_invertY_10();
		G_B8_0 = L_6;
		G_B8_1 = L_5;
		G_B8_2 = (&V_3);
		if (L_7)
		{
			G_B9_0 = L_6;
			G_B9_1 = L_5;
			G_B9_2 = (&V_3);
			goto IL_005f;
		}
	}
	{
		G_B10_0 = (-1);
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		G_B10_3 = G_B8_2;
		goto IL_0060;
	}

IL_005f:
	{
		G_B10_0 = 1;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
		G_B10_3 = G_B9_2;
	}

IL_0060:
	{
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)G_B10_3, G_B10_2, ((float)il2cpp_codegen_multiply((float)G_B10_1, (float)(((float)((float)G_B10_0))))), /*hidden argument*/NULL);
		// var mouseSensitivityFactor = mouseSensitivityCurve.Evaluate(mouseMovement.magnitude);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_8 = __this->get_mouseSensitivityCurve_8();
		float L_9 = Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_8);
		float L_10 = AnimationCurve_Evaluate_m51CAA6B1C54B7EF44FE4D74B422C1DA1FA6F8776(L_8, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		// m_TargetCameraState.yaw += mouseMovement.x * mouseSensitivityFactor;
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_11 = __this->get_m_TargetCameraState_4();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_12 = L_11;
		NullCheck(L_12);
		float L_13 = L_12->get_yaw_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = V_3;
		float L_15 = L_14.get_x_0();
		float L_16 = V_4;
		NullCheck(L_12);
		L_12->set_yaw_0(((float)il2cpp_codegen_add((float)L_13, (float)((float)il2cpp_codegen_multiply((float)L_15, (float)L_16)))));
		// m_TargetCameraState.pitch += mouseMovement.y * mouseSensitivityFactor;
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_17 = __this->get_m_TargetCameraState_4();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_18 = L_17;
		NullCheck(L_18);
		float L_19 = L_18->get_pitch_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_20 = V_3;
		float L_21 = L_20.get_y_1();
		float L_22 = V_4;
		NullCheck(L_18);
		L_18->set_pitch_1(((float)il2cpp_codegen_add((float)L_19, (float)((float)il2cpp_codegen_multiply((float)L_21, (float)L_22)))));
	}

IL_00b1:
	{
		// translation = GetInputTranslationDirection() * Time.deltaTime;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = SimpleCameraController_GetInputTranslationDirection_m73C99DB69CEB467834BBA00A62415D1CEEF0CB47(__this, /*hidden argument*/NULL);
		float L_24 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_23, L_24, /*hidden argument*/NULL);
		V_0 = L_25;
		// if (Input.GetKey(KeyCode.LeftShift))
		bool L_26 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)304), /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00da;
		}
	}
	{
		// translation *= 10.0f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_27, (10.0f), /*hidden argument*/NULL);
		V_0 = L_28;
	}

IL_00da:
	{
		// boost += Input.mouseScrollDelta.y * 0.2f;
		float L_29 = __this->get_boost_6();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_30 = Input_get_mouseScrollDelta_m66F785090C429CE7DCDEF09C92CDBDD08FCDE98D(/*hidden argument*/NULL);
		float L_31 = L_30.get_y_1();
		__this->set_boost_6(((float)il2cpp_codegen_add((float)L_29, (float)((float)il2cpp_codegen_multiply((float)L_31, (float)(0.2f))))));
		// translation *= Mathf.Pow(2.0f, boost);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = V_0;
		float L_33 = __this->get_boost_6();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_34 = powf((2.0f), L_33);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_32, L_34, /*hidden argument*/NULL);
		V_0 = L_35;
		// m_TargetCameraState.Translate(translation);
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_36 = __this->get_m_TargetCameraState_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = V_0;
		NullCheck(L_36);
		CameraState_Translate_m76BCC104A48EA7F125D5A50D874A2DEEA7967247(L_36, L_37, /*hidden argument*/NULL);
		// var positionLerpPct = 1f - Mathf.Exp((Mathf.Log(1f - 0.99f) / positionLerpTime) * Time.deltaTime);
		float L_38 = logf((0.00999999f));
		float L_39 = __this->get_positionLerpTime_7();
		float L_40 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_41 = expf(((float)il2cpp_codegen_multiply((float)((float)((float)L_38/(float)L_39)), (float)L_40)));
		V_1 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_41));
		// var rotationLerpPct = 1f - Mathf.Exp((Mathf.Log(1f - 0.99f) / rotationLerpTime) * Time.deltaTime);
		float L_42 = logf((0.00999999f));
		float L_43 = __this->get_rotationLerpTime_9();
		float L_44 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_45 = expf(((float)il2cpp_codegen_multiply((float)((float)((float)L_42/(float)L_43)), (float)L_44)));
		V_2 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_45));
		// m_InterpolatingCameraState.LerpTowards(m_TargetCameraState, positionLerpPct, rotationLerpPct);
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_46 = __this->get_m_InterpolatingCameraState_5();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_47 = __this->get_m_TargetCameraState_4();
		float L_48 = V_1;
		float L_49 = V_2;
		NullCheck(L_46);
		CameraState_LerpTowards_m883AAF2D3C7F5045B64CAF655FB84EF0FC98F282(L_46, L_47, L_48, L_49, /*hidden argument*/NULL);
		// m_InterpolatingCameraState.UpdateTransform(transform);
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_50 = __this->get_m_InterpolatingCameraState_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_51 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_50);
		CameraState_UpdateTransform_mE3349362276789C1617C01276F7DE533BBA22623(L_50, L_51, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCameraController__ctor_m8DE12FC1A6C31D2D60ED78F0B574CE3F864F546E (SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleCameraController__ctor_m8DE12FC1A6C31D2D60ED78F0B574CE3F864F546E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CameraState m_TargetCameraState = new CameraState();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_0 = (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 *)il2cpp_codegen_object_new(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7_il2cpp_TypeInfo_var);
		CameraState__ctor_m4A83DF36C7D280050EA1B101E61B7E345C31A322(L_0, /*hidden argument*/NULL);
		__this->set_m_TargetCameraState_4(L_0);
		// CameraState m_InterpolatingCameraState = new CameraState();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_1 = (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 *)il2cpp_codegen_object_new(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7_il2cpp_TypeInfo_var);
		CameraState__ctor_m4A83DF36C7D280050EA1B101E61B7E345C31A322(L_1, /*hidden argument*/NULL);
		__this->set_m_InterpolatingCameraState_5(L_1);
		// public float boost = 3.5f;
		__this->set_boost_6((3.5f));
		// public float positionLerpTime = 0.2f;
		__this->set_positionLerpTime_7((0.2f));
		// public AnimationCurve mouseSensitivityCurve = new AnimationCurve(new Keyframe(0f, 0.5f, 0f, 5f), new Keyframe(1f, 2.5f, 0f, 0f));
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_2 = (KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D*)(KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D*)SZArrayNew(KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_3 = L_2;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_m10FFFE5FE1213C3AE88359375398F213B24F18D5((&L_4), (0.0f), (0.5f), (0.0f), (5.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_4);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_5 = L_3;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Keyframe__ctor_m10FFFE5FE1213C3AE88359375398F213B24F18D5((&L_6), (1.0f), (2.5f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_6);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_7 = (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C *)il2cpp_codegen_object_new(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mE9462D171C06A2A746B9DA1B0A6B0F4FC7DB94CF(L_7, L_5, /*hidden argument*/NULL);
		__this->set_mouseSensitivityCurve_8(L_7);
		// public float rotationLerpTime = 0.01f;
		__this->set_rotationLerpTime_9((0.01f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityTemplateProjects.SimpleCameraController_CameraState::SetFromTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_SetFromTransform_m6467352ED87301E5F4A76456060A765CAB96AF3E (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___t0, const RuntimeMethod* method)
{
	{
		// pitch = t.eulerAngles.x;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___t0;
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		__this->set_pitch_1(L_2);
		// yaw = t.eulerAngles.y;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = ___t0;
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		__this->set_yaw_0(L_5);
		// roll = t.eulerAngles.z;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = ___t0;
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_z_4();
		__this->set_roll_2(L_8);
		// x = t.position.x;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = ___t0;
		NullCheck(L_9);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_x_2();
		__this->set_x_3(L_11);
		// y = t.position.y;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = ___t0;
		NullCheck(L_12);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_y_3();
		__this->set_y_4(L_14);
		// z = t.position.z;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = ___t0;
		NullCheck(L_15);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_z_4();
		__this->set_z_5(L_17);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController_CameraState::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_Translate_m76BCC104A48EA7F125D5A50D874A2DEEA7967247 (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___translation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraState_Translate_m76BCC104A48EA7F125D5A50D874A2DEEA7967247_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 rotatedTranslation = Quaternion.Euler(pitch, yaw, roll) * translation;
		float L_0 = __this->get_pitch_1();
		float L_1 = __this->get_yaw_0();
		float L_2 = __this->get_roll_2();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05(L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___translation0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// x += rotatedTranslation.x;
		float L_6 = __this->get_x_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = V_0;
		float L_8 = L_7.get_x_2();
		__this->set_x_3(((float)il2cpp_codegen_add((float)L_6, (float)L_8)));
		// y += rotatedTranslation.y;
		float L_9 = __this->get_y_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_0;
		float L_11 = L_10.get_y_3();
		__this->set_y_4(((float)il2cpp_codegen_add((float)L_9, (float)L_11)));
		// z += rotatedTranslation.z;
		float L_12 = __this->get_z_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = V_0;
		float L_14 = L_13.get_z_4();
		__this->set_z_5(((float)il2cpp_codegen_add((float)L_12, (float)L_14)));
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController_CameraState::LerpTowards(UnityTemplateProjects.SimpleCameraController_CameraState,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_LerpTowards_m883AAF2D3C7F5045B64CAF655FB84EF0FC98F282 (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * ___target0, float ___positionLerpPct1, float ___rotationLerpPct2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraState_LerpTowards_m883AAF2D3C7F5045B64CAF655FB84EF0FC98F282_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// yaw = Mathf.Lerp(yaw, target.yaw, rotationLerpPct);
		float L_0 = __this->get_yaw_0();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_1 = ___target0;
		NullCheck(L_1);
		float L_2 = L_1->get_yaw_0();
		float L_3 = ___rotationLerpPct2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_4 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_0, L_2, L_3, /*hidden argument*/NULL);
		__this->set_yaw_0(L_4);
		// pitch = Mathf.Lerp(pitch, target.pitch, rotationLerpPct);
		float L_5 = __this->get_pitch_1();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_6 = ___target0;
		NullCheck(L_6);
		float L_7 = L_6->get_pitch_1();
		float L_8 = ___rotationLerpPct2;
		float L_9 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_5, L_7, L_8, /*hidden argument*/NULL);
		__this->set_pitch_1(L_9);
		// roll = Mathf.Lerp(roll, target.roll, rotationLerpPct);
		float L_10 = __this->get_roll_2();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_11 = ___target0;
		NullCheck(L_11);
		float L_12 = L_11->get_roll_2();
		float L_13 = ___rotationLerpPct2;
		float L_14 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_10, L_12, L_13, /*hidden argument*/NULL);
		__this->set_roll_2(L_14);
		// x = Mathf.Lerp(x, target.x, positionLerpPct);
		float L_15 = __this->get_x_3();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_16 = ___target0;
		NullCheck(L_16);
		float L_17 = L_16->get_x_3();
		float L_18 = ___positionLerpPct1;
		float L_19 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_15, L_17, L_18, /*hidden argument*/NULL);
		__this->set_x_3(L_19);
		// y = Mathf.Lerp(y, target.y, positionLerpPct);
		float L_20 = __this->get_y_4();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_21 = ___target0;
		NullCheck(L_21);
		float L_22 = L_21->get_y_4();
		float L_23 = ___positionLerpPct1;
		float L_24 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_20, L_22, L_23, /*hidden argument*/NULL);
		__this->set_y_4(L_24);
		// z = Mathf.Lerp(z, target.z, positionLerpPct);
		float L_25 = __this->get_z_5();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_26 = ___target0;
		NullCheck(L_26);
		float L_27 = L_26->get_z_5();
		float L_28 = ___positionLerpPct1;
		float L_29 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_25, L_27, L_28, /*hidden argument*/NULL);
		__this->set_z_5(L_29);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController_CameraState::UpdateTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_UpdateTransform_mE3349362276789C1617C01276F7DE533BBA22623 (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___t0, const RuntimeMethod* method)
{
	{
		// t.eulerAngles = new Vector3(pitch, yaw, roll);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___t0;
		float L_1 = __this->get_pitch_1();
		float L_2 = __this->get_yaw_0();
		float L_3 = __this->get_roll_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_4), L_1, L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_eulerAngles_m4B2B374C0B089A7ED0B522A3A4C56FA868992685(L_0, L_4, /*hidden argument*/NULL);
		// t.position = new Vector3(x, y, z);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = ___t0;
		float L_6 = __this->get_x_3();
		float L_7 = __this->get_y_4();
		float L_8 = __this->get_z_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_9), L_6, L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_5, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController_CameraState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState__ctor_m4A83DF36C7D280050EA1B101E61B7E345C31A322 (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t GameData_get_rank_mAE1E8FBA1F2E3514282BEB903AA6ACECDDDB6E71_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameData_get_rank_mAE1E8FBA1F2E3514282BEB903AA6ACECDDDB6E71AssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Rank;
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_Rank_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* GameData_get_name_mB797547A4AB5AF4C498AE31BA6ED18FDC83541B5_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameData_get_name_mB797547A4AB5AF4C498AE31BA6ED18FDC83541B5AssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Name;
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		String_t* L_0 = ((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_Name_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float GameData_get_time_m4E5B3140960E8C711FEF0BACBBE7AB88FDDA4271_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameData_get_time_m4E5B3140960E8C711FEF0BACBBE7AB88FDDA4271AssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Time;
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		float L_0 = ((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_Time_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t GameData_get_selected_m8E8BA8713A55BD9E2DFDCE4FC887392C79683943_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameData_get_selected_m8E8BA8713A55BD9E2DFDCE4FC887392C79683943AssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Selected;
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->get_Selected_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline (Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GameData_set_time_mF61A5E4EA88301619784B34E77D1EDF721C915AE_inline (float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameData_set_time_mF61A5E4EA88301619784B34E77D1EDF721C915AEAssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time = value;
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Time_1(L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GameData_set_rank_m3FE835211C77E0133834346389ABD148910B1918_inline (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameData_set_rank_m3FE835211C77E0133834346389ABD148910B1918AssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Rank = value;
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Rank_3(L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_m586F8E3FFBB52A125B2D77D3FBBCC1185EDC920C_inline (TMP_InputField_tC3C57E697A57232E8A855D39600CF06CFDA8F6CB * __this, const RuntimeMethod* method)
{
	{
		// return m_Text;
		String_t* L_0 = __this->get_m_Text_59();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GameData_set_selected_m0F16D2E8EDD1DE62BDBC13890DBB3C58B80A712D_inline (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameData_set_selected_m0F16D2E8EDD1DE62BDBC13890DBB3C58B80A712DAssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Selected = value;
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Selected_2(L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GameData_set_name_m822B2CAFFF7DDFFC6A44F2855F8F9A0272481B6D_inline (String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameData_set_name_m822B2CAFFF7DDFFC6A44F2855F8F9A0272481B6DAssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Name = value;
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var);
		((GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t99ACF3CAB2EA29546484E671BE6CFF259710A408_il2cpp_TypeInfo_var))->set_Name_0(L_0);
		// }
		return;
	}
}
