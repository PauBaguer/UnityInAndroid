#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<Enemy>
struct List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C;
// System.Collections.Generic.List`1<Completed.Enemy>
struct List_1_t4B15F5BE07D169BC8ECAA69E8495524C4CF45663;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Enemy[]
struct EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0;
// Completed.Enemy[]
struct EnemyU5BU5D_t5907421EA4190F70791C1BE5709AA3F8ADF09F98;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.Touch[]
struct TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// Readme/Section[]
struct SectionU5BU5D_t013C5C59593F9D61D69A33E91B8C1450419ED659;
// AndroidBackButton
struct AndroidBackButton_tD0A5485B0C55A1C3B179F02EF0B681369A3CDD05;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioListener
struct AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// BoardManager
struct BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91;
// Completed.BoardManager
struct BoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627;
// Completed.Enemy
struct Enemy_tA07E200A067AE652E45412372BA529A68E2DDAC6;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// Completed.GameManager
struct GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Loader
struct Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182;
// Completed.Loader
struct Loader_tE235FAB0403EFDC312901F5718E600E2813E8675;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// MovingObject
struct MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C;
// Completed.MovingObject
struct MovingObject_tE52CA43A917730F49A992474C77FDF2C97A1E024;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F;
// Completed.Player
struct Player_t9765AA53EA79B78F740AAE0F25EE2647584E717C;
// Readme
struct Readme_tD58D22679F01C9AD66EA323B2DE68BFF6DBDCEE7;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// SoundManager
struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62;
// Completed.SoundManager
struct SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.UI.Toggle
struct Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// TutorialInfo
struct TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// Wall
struct Wall_t75B0B5D0D103AF52A80C03FFB000620BD9005D4C;
// Completed.Wall
struct Wall_t0AF988C8A447343CA324CC5DA0FD95C75E7CB412;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// BoardManager/Count
struct Count_t43FD08C05C3123E7D601E60282485C59D5F2C038;
// Completed.BoardManager/Count
struct Count_t8DC7E1AC3171CF8B35A55F124D85FE4282E82E37;
// GameManager/<MoveEnemies>d__19
struct U3CMoveEnemiesU3Ed__19_tAA067E6A4E7E5C2077BAE3EA8F957DD7052EB5EB;
// Completed.GameManager/<MoveEnemies>d__20
struct U3CMoveEnemiesU3Ed__20_tEB7D40440BA47032AB3D9CB8A0E9B33A9A6EB317;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// MovingObject/<SmoothMovement>d__7
struct U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823;
// Completed.MovingObject/<SmoothMovement>d__8
struct U3CSmoothMovementU3Ed__8_t0DB90D1365DE00F6486A3948E33911675EAFE307;
// Readme/Section
struct Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075;

IL2CPP_EXTERN_C RuntimeClass* AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Count_t43FD08C05C3123E7D601E60282485C59D5F2C038_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Count_t8DC7E1AC3171CF8B35A55F124D85FE4282E82E37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4B15F5BE07D169BC8ECAA69E8495524C4CF45663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMoveEnemiesU3Ed__19_tAA067E6A4E7E5C2077BAE3EA8F957DD7052EB5EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMoveEnemiesU3Ed__20_tEB7D40440BA47032AB3D9CB8A0E9B33A9A6EB317_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSmoothMovementU3Ed__8_t0DB90D1365DE00F6486A3948E33911675EAFE307_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0ADF18071E31ABDFC28ACBB5EB626FB20984EB9D;
IL2CPP_EXTERN_C String_t* _stringLiteral15AA2B97826EC4EE3E63BF8B0119089EC201E31C;
IL2CPP_EXTERN_C String_t* _stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral406571F3CE85E4DDA59A9AEAAEFAB85852D1CC08;
IL2CPP_EXTERN_C String_t* _stringLiteral432640E3BCCFBDDB088EC8A3AE94E2C2995F96EA;
IL2CPP_EXTERN_C String_t* _stringLiteral5A135CD2AD82D069CD3A4AF0011DF7A9E307A55E;
IL2CPP_EXTERN_C String_t* _stringLiteral687D9BA523E32A2B8A4FEAD5E5EAE89D357E1420;
IL2CPP_EXTERN_C String_t* _stringLiteral729AAAB7476A9A79F6553A6C4B43D3BBDC045178;
IL2CPP_EXTERN_C String_t* _stringLiteral838E394589B5693706685699154545855BEAE0B2;
IL2CPP_EXTERN_C String_t* _stringLiteral908221B36A67B730DB9A759C8B7A77FE8D4283C2;
IL2CPP_EXTERN_C String_t* _stringLiteral95D7F28AC82AF9DC3FFC83E8E3CB141475CE1A86;
IL2CPP_EXTERN_C String_t* _stringLiteralB1179CA563495DAD3C4398E39ED24AC0BDB025A4;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B;
IL2CPP_EXTERN_C String_t* _stringLiteralE38CC4C1D409C9107F8E8C4C622F91CC499C2511;
IL2CPP_EXTERN_C String_t* _stringLiteralF117C6985226D7151C8D72C310304BE920887ADC;
IL2CPP_EXTERN_C String_t* _stringLiteralF8E67B30F63D09C6F3CA44E5BC634472183C61EC;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoardManager_t3985DB311F238FF4878376C70A779A0C07933F91_mBA60C5C71DBB87AD63980EFFB0ACED510ADFE67A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6_m782989E200A4283B4E8E1EFDAA0E03C35E787FB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManager_OnSceneLoaded_m9F2D532AFFB248F9D521BD8FEEA6B9400783EA6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m51152AE1B99DCCA528E426B5AB47C84CA9CE03BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF62C152B3AA6E5CAFA4D2FA96E98091E8B7929A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m61F957FEB6659515C4F68682524D31F7D9C5DA2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC40F2C3BA437A485D033403FC1AA748D5C70CD8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m0281A01E9C859E2B8073312D41BB9005662EF2DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1F185561D8333E252EDC12EE74D083A255B3AB19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m264424C12AE2901EAD718720F579BDA200FCC721_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m3F9A1F65655B1DBD5D5E52C91D4597B7FE7FB3F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m99FAEDD9C024582566F281EF9D4051695FBDB0A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3E90AE762FA32F7597154FA3C1E3F8FE491C51AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m5EA1A9570746D05CD09E123011A17979A5FB3A56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MovingObject_AttemptMove_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_mF48FBD63D30F7F9C88F7D3216DFB0FF1214227CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MovingObject_AttemptMove_TisPlayer_t9765AA53EA79B78F740AAE0F25EE2647584E717C_mE61BB4A3C502DE50BFAF56851F96E7614C9E2D6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MovingObject_AttemptMove_TisWall_t0AF988C8A447343CA324CC5DA0FD95C75E7CB412_m173FA952B01525D9D4A90677E894DC298275D05E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MovingObject_AttemptMove_TisWall_t75B0B5D0D103AF52A80C03FFB000620BD9005D4C_m659FBCF546070DE383A553AC2689F33446747539_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMoveEnemiesU3Ed__19_System_Collections_IEnumerator_Reset_m7B57DD4F9610E2D7520113BC4643EE0D4D9EC64A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMoveEnemiesU3Ed__20_System_Collections_IEnumerator_Reset_mD8436F04D397A42BBA48794D660CC14839AF5945_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSmoothMovementU3Ed__7_System_Collections_IEnumerator_Reset_m0E8B1FC6C9C001B9EB5ABA32422DD3DF5EABDFD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSmoothMovementU3Ed__8_System_Collections_IEnumerator_Reset_m3524EF31D4D3574039D256804CC546FE80D96369_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<Enemy>
struct List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C, ____items_1)); }
	inline EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* get__items_1() const { return ____items_1; }
	inline EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C_StaticFields, ____emptyArray_5)); }
	inline EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* get__emptyArray_5() const { return ____emptyArray_5; }
	inline EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Completed.Enemy>
struct List_1_t4B15F5BE07D169BC8ECAA69E8495524C4CF45663  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	EnemyU5BU5D_t5907421EA4190F70791C1BE5709AA3F8ADF09F98* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4B15F5BE07D169BC8ECAA69E8495524C4CF45663, ____items_1)); }
	inline EnemyU5BU5D_t5907421EA4190F70791C1BE5709AA3F8ADF09F98* get__items_1() const { return ____items_1; }
	inline EnemyU5BU5D_t5907421EA4190F70791C1BE5709AA3F8ADF09F98** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(EnemyU5BU5D_t5907421EA4190F70791C1BE5709AA3F8ADF09F98* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4B15F5BE07D169BC8ECAA69E8495524C4CF45663, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4B15F5BE07D169BC8ECAA69E8495524C4CF45663, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4B15F5BE07D169BC8ECAA69E8495524C4CF45663, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4B15F5BE07D169BC8ECAA69E8495524C4CF45663_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	EnemyU5BU5D_t5907421EA4190F70791C1BE5709AA3F8ADF09F98* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4B15F5BE07D169BC8ECAA69E8495524C4CF45663_StaticFields, ____emptyArray_5)); }
	inline EnemyU5BU5D_t5907421EA4190F70791C1BE5709AA3F8ADF09F98* get__emptyArray_5() const { return ____emptyArray_5; }
	inline EnemyU5BU5D_t5907421EA4190F70791C1BE5709AA3F8ADF09F98** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(EnemyU5BU5D_t5907421EA4190F70791C1BE5709AA3F8ADF09F98* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____items_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
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
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// BoardManager/Count
struct Count_t43FD08C05C3123E7D601E60282485C59D5F2C038  : public RuntimeObject
{
public:
	// System.Int32 BoardManager/Count::minimum
	int32_t ___minimum_0;
	// System.Int32 BoardManager/Count::maximum
	int32_t ___maximum_1;

public:
	inline static int32_t get_offset_of_minimum_0() { return static_cast<int32_t>(offsetof(Count_t43FD08C05C3123E7D601E60282485C59D5F2C038, ___minimum_0)); }
	inline int32_t get_minimum_0() const { return ___minimum_0; }
	inline int32_t* get_address_of_minimum_0() { return &___minimum_0; }
	inline void set_minimum_0(int32_t value)
	{
		___minimum_0 = value;
	}

	inline static int32_t get_offset_of_maximum_1() { return static_cast<int32_t>(offsetof(Count_t43FD08C05C3123E7D601E60282485C59D5F2C038, ___maximum_1)); }
	inline int32_t get_maximum_1() const { return ___maximum_1; }
	inline int32_t* get_address_of_maximum_1() { return &___maximum_1; }
	inline void set_maximum_1(int32_t value)
	{
		___maximum_1 = value;
	}
};


// Completed.BoardManager/Count
struct Count_t8DC7E1AC3171CF8B35A55F124D85FE4282E82E37  : public RuntimeObject
{
public:
	// System.Int32 Completed.BoardManager/Count::minimum
	int32_t ___minimum_0;
	// System.Int32 Completed.BoardManager/Count::maximum
	int32_t ___maximum_1;

public:
	inline static int32_t get_offset_of_minimum_0() { return static_cast<int32_t>(offsetof(Count_t8DC7E1AC3171CF8B35A55F124D85FE4282E82E37, ___minimum_0)); }
	inline int32_t get_minimum_0() const { return ___minimum_0; }
	inline int32_t* get_address_of_minimum_0() { return &___minimum_0; }
	inline void set_minimum_0(int32_t value)
	{
		___minimum_0 = value;
	}

	inline static int32_t get_offset_of_maximum_1() { return static_cast<int32_t>(offsetof(Count_t8DC7E1AC3171CF8B35A55F124D85FE4282E82E37, ___maximum_1)); }
	inline int32_t get_maximum_1() const { return ___maximum_1; }
	inline int32_t* get_address_of_maximum_1() { return &___maximum_1; }
	inline void set_maximum_1(int32_t value)
	{
		___maximum_1 = value;
	}
};


// GameManager/<MoveEnemies>d__19
struct U3CMoveEnemiesU3Ed__19_tAA067E6A4E7E5C2077BAE3EA8F957DD7052EB5EB  : public RuntimeObject
{
public:
	// System.Int32 GameManager/<MoveEnemies>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<MoveEnemies>d__19::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GameManager GameManager/<MoveEnemies>d__19::<>4__this
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___U3CU3E4__this_2;
	// System.Int32 GameManager/<MoveEnemies>d__19::<i>5__1
	int32_t ___U3CiU3E5__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CMoveEnemiesU3Ed__19_tAA067E6A4E7E5C2077BAE3EA8F957DD7052EB5EB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CMoveEnemiesU3Ed__19_tAA067E6A4E7E5C2077BAE3EA8F957DD7052EB5EB, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CMoveEnemiesU3Ed__19_tAA067E6A4E7E5C2077BAE3EA8F957DD7052EB5EB, ___U3CU3E4__this_2)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CMoveEnemiesU3Ed__19_tAA067E6A4E7E5C2077BAE3EA8F957DD7052EB5EB, ___U3CiU3E5__1_3)); }
	inline int32_t get_U3CiU3E5__1_3() const { return ___U3CiU3E5__1_3; }
	inline int32_t* get_address_of_U3CiU3E5__1_3() { return &___U3CiU3E5__1_3; }
	inline void set_U3CiU3E5__1_3(int32_t value)
	{
		___U3CiU3E5__1_3 = value;
	}
};


// Completed.GameManager/<MoveEnemies>d__20
struct U3CMoveEnemiesU3Ed__20_tEB7D40440BA47032AB3D9CB8A0E9B33A9A6EB317  : public RuntimeObject
{
public:
	// System.Int32 Completed.GameManager/<MoveEnemies>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Completed.GameManager/<MoveEnemies>d__20::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Completed.GameManager Completed.GameManager/<MoveEnemies>d__20::<>4__this
	GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * ___U3CU3E4__this_2;
	// System.Int32 Completed.GameManager/<MoveEnemies>d__20::<i>5__1
	int32_t ___U3CiU3E5__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CMoveEnemiesU3Ed__20_tEB7D40440BA47032AB3D9CB8A0E9B33A9A6EB317, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CMoveEnemiesU3Ed__20_tEB7D40440BA47032AB3D9CB8A0E9B33A9A6EB317, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CMoveEnemiesU3Ed__20_tEB7D40440BA47032AB3D9CB8A0E9B33A9A6EB317, ___U3CU3E4__this_2)); }
	inline GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CMoveEnemiesU3Ed__20_tEB7D40440BA47032AB3D9CB8A0E9B33A9A6EB317, ___U3CiU3E5__1_3)); }
	inline int32_t get_U3CiU3E5__1_3() const { return ___U3CiU3E5__1_3; }
	inline int32_t* get_address_of_U3CiU3E5__1_3() { return &___U3CiU3E5__1_3; }
	inline void set_U3CiU3E5__1_3(int32_t value)
	{
		___U3CiU3E5__1_3 = value;
	}
};


// Readme/Section
struct Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D  : public RuntimeObject
{
public:
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;

public:
	inline static int32_t get_offset_of_heading_0() { return static_cast<int32_t>(offsetof(Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D, ___heading_0)); }
	inline String_t* get_heading_0() const { return ___heading_0; }
	inline String_t** get_address_of_heading_0() { return &___heading_0; }
	inline void set_heading_0(String_t* value)
	{
		___heading_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heading_0), (void*)value);
	}

	inline static int32_t get_offset_of_text_1() { return static_cast<int32_t>(offsetof(Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D, ___text_1)); }
	inline String_t* get_text_1() const { return ___text_1; }
	inline String_t** get_address_of_text_1() { return &___text_1; }
	inline void set_text_1(String_t* value)
	{
		___text_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_1), (void*)value);
	}

	inline static int32_t get_offset_of_linkText_2() { return static_cast<int32_t>(offsetof(Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D, ___linkText_2)); }
	inline String_t* get_linkText_2() const { return ___linkText_2; }
	inline String_t** get_address_of_linkText_2() { return &___linkText_2; }
	inline void set_linkText_2(String_t* value)
	{
		___linkText_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___linkText_2), (void*)value);
	}

	inline static int32_t get_offset_of_url_3() { return static_cast<int32_t>(offsetof(Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D, ___url_3)); }
	inline String_t* get_url_3() const { return ___url_3; }
	inline String_t** get_address_of_url_3() { return &___url_3; }
	inline void set_url_3(String_t* value)
	{
		___url_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SceneManagement.LoadSceneMode
struct LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Centroid_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Point_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Normal_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.RuntimePlatform
struct RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchPhase
struct TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MovingObject/<SmoothMovement>d__7
struct U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823  : public RuntimeObject
{
public:
	// System.Int32 MovingObject/<SmoothMovement>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MovingObject/<SmoothMovement>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.Vector3 MovingObject/<SmoothMovement>d__7::end
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end_2;
	// MovingObject MovingObject/<SmoothMovement>d__7::<>4__this
	MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C * ___U3CU3E4__this_3;
	// System.Single MovingObject/<SmoothMovement>d__7::<sqrRemainingDistance>5__1
	float ___U3CsqrRemainingDistanceU3E5__1_4;
	// UnityEngine.Vector3 MovingObject/<SmoothMovement>d__7::<newPostion>5__2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CnewPostionU3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_end_2() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823, ___end_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_end_2() const { return ___end_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_end_2() { return &___end_2; }
	inline void set_end_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___end_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823, ___U3CU3E4__this_3)); }
	inline MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsqrRemainingDistanceU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823, ___U3CsqrRemainingDistanceU3E5__1_4)); }
	inline float get_U3CsqrRemainingDistanceU3E5__1_4() const { return ___U3CsqrRemainingDistanceU3E5__1_4; }
	inline float* get_address_of_U3CsqrRemainingDistanceU3E5__1_4() { return &___U3CsqrRemainingDistanceU3E5__1_4; }
	inline void set_U3CsqrRemainingDistanceU3E5__1_4(float value)
	{
		___U3CsqrRemainingDistanceU3E5__1_4 = value;
	}

	inline static int32_t get_offset_of_U3CnewPostionU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823, ___U3CnewPostionU3E5__2_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CnewPostionU3E5__2_5() const { return ___U3CnewPostionU3E5__2_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CnewPostionU3E5__2_5() { return &___U3CnewPostionU3E5__2_5; }
	inline void set_U3CnewPostionU3E5__2_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CnewPostionU3E5__2_5 = value;
	}
};


// Completed.MovingObject/<SmoothMovement>d__8
struct U3CSmoothMovementU3Ed__8_t0DB90D1365DE00F6486A3948E33911675EAFE307  : public RuntimeObject
{
public:
	// System.Int32 Completed.MovingObject/<SmoothMovement>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Completed.MovingObject/<SmoothMovement>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.Vector3 Completed.MovingObject/<SmoothMovement>d__8::end
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end_2;
	// Completed.MovingObject Completed.MovingObject/<SmoothMovement>d__8::<>4__this
	MovingObject_tE52CA43A917730F49A992474C77FDF2C97A1E024 * ___U3CU3E4__this_3;
	// System.Single Completed.MovingObject/<SmoothMovement>d__8::<sqrRemainingDistance>5__1
	float ___U3CsqrRemainingDistanceU3E5__1_4;
	// UnityEngine.Vector3 Completed.MovingObject/<SmoothMovement>d__8::<newPostion>5__2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CnewPostionU3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ed__8_t0DB90D1365DE00F6486A3948E33911675EAFE307, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ed__8_t0DB90D1365DE00F6486A3948E33911675EAFE307, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_end_2() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ed__8_t0DB90D1365DE00F6486A3948E33911675EAFE307, ___end_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_end_2() const { return ___end_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_end_2() { return &___end_2; }
	inline void set_end_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___end_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ed__8_t0DB90D1365DE00F6486A3948E33911675EAFE307, ___U3CU3E4__this_3)); }
	inline MovingObject_tE52CA43A917730F49A992474C77FDF2C97A1E024 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline MovingObject_tE52CA43A917730F49A992474C77FDF2C97A1E024 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(MovingObject_tE52CA43A917730F49A992474C77FDF2C97A1E024 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsqrRemainingDistanceU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ed__8_t0DB90D1365DE00F6486A3948E33911675EAFE307, ___U3CsqrRemainingDistanceU3E5__1_4)); }
	inline float get_U3CsqrRemainingDistanceU3E5__1_4() const { return ___U3CsqrRemainingDistanceU3E5__1_4; }
	inline float* get_address_of_U3CsqrRemainingDistanceU3E5__1_4() { return &___U3CsqrRemainingDistanceU3E5__1_4; }
	inline void set_U3CsqrRemainingDistanceU3E5__1_4(float value)
	{
		___U3CsqrRemainingDistanceU3E5__1_4 = value;
	}

	inline static int32_t get_offset_of_U3CnewPostionU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ed__8_t0DB90D1365DE00F6486A3948E33911675EAFE307, ___U3CnewPostionU3E5__2_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CnewPostionU3E5__2_5() const { return ___U3CnewPostionU3E5__2_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CnewPostionU3E5__2_5() { return &___U3CnewPostionU3E5__2_5; }
	inline void set_U3CnewPostionU3E5__2_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CnewPostionU3E5__2_5 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Toggle/ToggleTransition
struct ToggleTransition_t4D1AA30F2BA24242EB9D1DD2E3DF839F0BAC5167 
{
public:
	// System.Int32 UnityEngine.UI.Toggle/ToggleTransition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ToggleTransition_t4D1AA30F2BA24242EB9D1DD2E3DF839F0BAC5167, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
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

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Touch
struct Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Position_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RawPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_PositionDelta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Readme
struct Readme_tD58D22679F01C9AD66EA323B2DE68BFF6DBDCEE7  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.Texture2D Readme::icon
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___icon_4;
	// System.String Readme::title
	String_t* ___title_5;
	// Readme/Section[] Readme::sections
	SectionU5BU5D_t013C5C59593F9D61D69A33E91B8C1450419ED659* ___sections_6;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_7;

public:
	inline static int32_t get_offset_of_icon_4() { return static_cast<int32_t>(offsetof(Readme_tD58D22679F01C9AD66EA323B2DE68BFF6DBDCEE7, ___icon_4)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_icon_4() const { return ___icon_4; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_icon_4() { return &___icon_4; }
	inline void set_icon_4(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___icon_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___icon_4), (void*)value);
	}

	inline static int32_t get_offset_of_title_5() { return static_cast<int32_t>(offsetof(Readme_tD58D22679F01C9AD66EA323B2DE68BFF6DBDCEE7, ___title_5)); }
	inline String_t* get_title_5() const { return ___title_5; }
	inline String_t** get_address_of_title_5() { return &___title_5; }
	inline void set_title_5(String_t* value)
	{
		___title_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___title_5), (void*)value);
	}

	inline static int32_t get_offset_of_sections_6() { return static_cast<int32_t>(offsetof(Readme_tD58D22679F01C9AD66EA323B2DE68BFF6DBDCEE7, ___sections_6)); }
	inline SectionU5BU5D_t013C5C59593F9D61D69A33E91B8C1450419ED659* get_sections_6() const { return ___sections_6; }
	inline SectionU5BU5D_t013C5C59593F9D61D69A33E91B8C1450419ED659** get_address_of_sections_6() { return &___sections_6; }
	inline void set_sections_6(SectionU5BU5D_t013C5C59593F9D61D69A33E91B8C1450419ED659* value)
	{
		___sections_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sections_6), (void*)value);
	}

	inline static int32_t get_offset_of_loadedLayout_7() { return static_cast<int32_t>(offsetof(Readme_tD58D22679F01C9AD66EA323B2DE68BFF6DBDCEE7, ___loadedLayout_7)); }
	inline bool get_loadedLayout_7() const { return ___loadedLayout_7; }
	inline bool* get_address_of_loadedLayout_7() { return &___loadedLayout_7; }
	inline void set_loadedLayout_7(bool value)
	{
		___loadedLayout_7 = value;
	}
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// AndroidBackButton
struct AndroidBackButton_tD0A5485B0C55A1C3B179F02EF0B681369A3CDD05  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.AudioListener
struct AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// BoardManager
struct BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 BoardManager::columns
	int32_t ___columns_4;
	// System.Int32 BoardManager::rows
	int32_t ___rows_5;
	// BoardManager/Count BoardManager::wallCount
	Count_t43FD08C05C3123E7D601E60282485C59D5F2C038 * ___wallCount_6;
	// BoardManager/Count BoardManager::foodCount
	Count_t43FD08C05C3123E7D601E60282485C59D5F2C038 * ___foodCount_7;
	// UnityEngine.GameObject BoardManager::exit
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___exit_8;
	// UnityEngine.GameObject[] BoardManager::floorTiles
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___floorTiles_9;
	// UnityEngine.GameObject[] BoardManager::wallTiles
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___wallTiles_10;
	// UnityEngine.GameObject[] BoardManager::foodTiles
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___foodTiles_11;
	// UnityEngine.GameObject[] BoardManager::enemyTiles
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___enemyTiles_12;
	// UnityEngine.GameObject[] BoardManager::outerWallTiles
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___outerWallTiles_13;
	// UnityEngine.Transform BoardManager::boardHolder
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___boardHolder_14;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> BoardManager::gridPositions
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___gridPositions_15;

public:
	inline static int32_t get_offset_of_columns_4() { return static_cast<int32_t>(offsetof(BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91, ___columns_4)); }
	inline int32_t get_columns_4() const { return ___columns_4; }
	inline int32_t* get_address_of_columns_4() { return &___columns_4; }
	inline void set_columns_4(int32_t value)
	{
		___columns_4 = value;
	}

	inline static int32_t get_offset_of_rows_5() { return static_cast<int32_t>(offsetof(BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91, ___rows_5)); }
	inline int32_t get_rows_5() const { return ___rows_5; }
	inline int32_t* get_address_of_rows_5() { return &___rows_5; }
	inline void set_rows_5(int32_t value)
	{
		___rows_5 = value;
	}

	inline static int32_t get_offset_of_wallCount_6() { return static_cast<int32_t>(offsetof(BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91, ___wallCount_6)); }
	inline Count_t43FD08C05C3123E7D601E60282485C59D5F2C038 * get_wallCount_6() const { return ___wallCount_6; }
	inline Count_t43FD08C05C3123E7D601E60282485C59D5F2C038 ** get_address_of_wallCount_6() { return &___wallCount_6; }
	inline void set_wallCount_6(Count_t43FD08C05C3123E7D601E60282485C59D5F2C038 * value)
	{
		___wallCount_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wallCount_6), (void*)value);
	}

	inline static int32_t get_offset_of_foodCount_7() { return static_cast<int32_t>(offsetof(BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91, ___foodCount_7)); }
	inline Count_t43FD08C05C3123E7D601E60282485C59D5F2C038 * get_foodCount_7() const { return ___foodCount_7; }
	inline Count_t43FD08C05C3123E7D601E60282485C59D5F2C038 ** get_address_of_foodCount_7() { return &___foodCount_7; }
	inline void set_foodCount_7(Count_t43FD08C05C3123E7D601E60282485C59D5F2C038 * value)
	{
		___foodCount_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foodCount_7), (void*)value);
	}

	inline static int32_t get_offset_of_exit_8() { return static_cast<int32_t>(offsetof(BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91, ___exit_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_exit_8() const { return ___exit_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_exit_8() { return &___exit_8; }
	inline void set_exit_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___exit_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exit_8), (void*)value);
	}

	inline static int32_t get_offset_of_floorTiles_9() { return static_cast<int32_t>(offsetof(BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91, ___floorTiles_9)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_floorTiles_9() const { return ___floorTiles_9; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_floorTiles_9() { return &___floorTiles_9; }
	inline void set_floorTiles_9(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___floorTiles_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___floorTiles_9), (void*)value);
	}

	inline static int32_t get_offset_of_wallTiles_10() { return static_cast<int32_t>(offsetof(BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91, ___wallTiles_10)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_wallTiles_10() const { return ___wallTiles_10; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_wallTiles_10() { return &___wallTiles_10; }
	inline void set_wallTiles_10(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___wallTiles_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wallTiles_10), (void*)value);
	}

	inline static int32_t get_offset_of_foodTiles_11() { return static_cast<int32_t>(offsetof(BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91, ___foodTiles_11)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_foodTiles_11() const { return ___foodTiles_11; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_foodTiles_11() { return &___foodTiles_11; }
	inline void set_foodTiles_11(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___foodTiles_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foodTiles_11), (void*)value);
	}

	inline static int32_t get_offset_of_enemyTiles_12() { return static_cast<int32_t>(offsetof(BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91, ___enemyTiles_12)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_enemyTiles_12() const { return ___enemyTiles_12; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_enemyTiles_12() { return &___enemyTiles_12; }
	inline void set_enemyTiles_12(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___enemyTiles_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyTiles_12), (void*)value);
	}

	inline static int32_t get_offset_of_outerWallTiles_13() { return static_cast<int32_t>(offsetof(BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91, ___outerWallTiles_13)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_outerWallTiles_13() const { return ___outerWallTiles_13; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_outerWallTiles_13() { return &___outerWallTiles_13; }
	inline void set_outerWallTiles_13(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___outerWallTiles_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outerWallTiles_13), (void*)value);
	}

	inline static int32_t get_offset_of_boardHolder_14() { return static_cast<int32_t>(offsetof(BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91, ___boardHolder_14)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_boardHolder_14() const { return ___boardHolder_14; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_boardHolder_14() { return &___boardHolder_14; }
	inline void set_boardHolder_14(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___boardHolder_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boardHolder_14), (void*)value);
	}

	inline static int32_t get_offset_of_gridPositions_15() { return static_cast<int32_t>(offsetof(BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91, ___gridPositions_15)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_gridPositions_15() const { return ___gridPositions_15; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_gridPositions_15() { return &___gridPositions_15; }
	inline void set_gridPositions_15(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___gridPositions_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gridPositions_15), (void*)value);
	}
};


// Completed.BoardManager
struct BoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Completed.BoardManager::columns
	int32_t ___columns_4;
	// System.Int32 Completed.BoardManager::rows
	int32_t ___rows_5;
	// Completed.BoardManager/Count Completed.BoardManager::wallCount
	Count_t8DC7E1AC3171CF8B35A55F124D85FE4282E82E37 * ___wallCount_6;
	// Completed.BoardManager/Count Completed.BoardManager::foodCount
	Count_t8DC7E1AC3171CF8B35A55F124D85FE4282E82E37 * ___foodCount_7;
	// UnityEngine.GameObject Completed.BoardManager::exit
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___exit_8;
	// UnityEngine.GameObject[] Completed.BoardManager::floorTiles
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___floorTiles_9;
	// UnityEngine.GameObject[] Completed.BoardManager::wallTiles
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___wallTiles_10;
	// UnityEngine.GameObject[] Completed.BoardManager::foodTiles
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___foodTiles_11;
	// UnityEngine.GameObject[] Completed.BoardManager::enemyTiles
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___enemyTiles_12;
	// UnityEngine.GameObject[] Completed.BoardManager::outerWallTiles
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___outerWallTiles_13;
	// UnityEngine.Transform Completed.BoardManager::boardHolder
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___boardHolder_14;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Completed.BoardManager::gridPositions
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___gridPositions_15;

public:
	inline static int32_t get_offset_of_columns_4() { return static_cast<int32_t>(offsetof(BoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6, ___columns_4)); }
	inline int32_t get_columns_4() const { return ___columns_4; }
	inline int32_t* get_address_of_columns_4() { return &___columns_4; }
	inline void set_columns_4(int32_t value)
	{
		___columns_4 = value;
	}

	inline static int32_t get_offset_of_rows_5() { return static_cast<int32_t>(offsetof(BoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6, ___rows_5)); }
	inline int32_t get_rows_5() const { return ___rows_5; }
	inline int32_t* get_address_of_rows_5() { return &___rows_5; }
	inline void set_rows_5(int32_t value)
	{
		___rows_5 = value;
	}

	inline static int32_t get_offset_of_wallCount_6() { return static_cast<int32_t>(offsetof(BoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6, ___wallCount_6)); }
	inline Count_t8DC7E1AC3171CF8B35A55F124D85FE4282E82E37 * get_wallCount_6() const { return ___wallCount_6; }
	inline Count_t8DC7E1AC3171CF8B35A55F124D85FE4282E82E37 ** get_address_of_wallCount_6() { return &___wallCount_6; }
	inline void set_wallCount_6(Count_t8DC7E1AC3171CF8B35A55F124D85FE4282E82E37 * value)
	{
		___wallCount_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wallCount_6), (void*)value);
	}

	inline static int32_t get_offset_of_foodCount_7() { return static_cast<int32_t>(offsetof(BoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6, ___foodCount_7)); }
	inline Count_t8DC7E1AC3171CF8B35A55F124D85FE4282E82E37 * get_foodCount_7() const { return ___foodCount_7; }
	inline Count_t8DC7E1AC3171CF8B35A55F124D85FE4282E82E37 ** get_address_of_foodCount_7() { return &___foodCount_7; }
	inline void set_foodCount_7(Count_t8DC7E1AC3171CF8B35A55F124D85FE4282E82E37 * value)
	{
		___foodCount_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foodCount_7), (void*)value);
	}

	inline static int32_t get_offset_of_exit_8() { return static_cast<int32_t>(offsetof(BoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6, ___exit_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_exit_8() const { return ___exit_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_exit_8() { return &___exit_8; }
	inline void set_exit_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___exit_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exit_8), (void*)value);
	}

	inline static int32_t get_offset_of_floorTiles_9() { return static_cast<int32_t>(offsetof(BoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6, ___floorTiles_9)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_floorTiles_9() const { return ___floorTiles_9; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_floorTiles_9() { return &___floorTiles_9; }
	inline void set_floorTiles_9(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___floorTiles_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___floorTiles_9), (void*)value);
	}

	inline static int32_t get_offset_of_wallTiles_10() { return static_cast<int32_t>(offsetof(BoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6, ___wallTiles_10)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_wallTiles_10() const { return ___wallTiles_10; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_wallTiles_10() { return &___wallTiles_10; }
	inline void set_wallTiles_10(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___wallTiles_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wallTiles_10), (void*)value);
	}

	inline static int32_t get_offset_of_foodTiles_11() { return static_cast<int32_t>(offsetof(BoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6, ___foodTiles_11)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_foodTiles_11() const { return ___foodTiles_11; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_foodTiles_11() { return &___foodTiles_11; }
	inline void set_foodTiles_11(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___foodTiles_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foodTiles_11), (void*)value);
	}

	inline static int32_t get_offset_of_enemyTiles_12() { return static_cast<int32_t>(offsetof(BoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6, ___enemyTiles_12)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_enemyTiles_12() const { return ___enemyTiles_12; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_enemyTiles_12() { return &___enemyTiles_12; }
	inline void set_enemyTiles_12(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___enemyTiles_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyTiles_12), (void*)value);
	}

	inline static int32_t get_offset_of_outerWallTiles_13() { return static_cast<int32_t>(offsetof(BoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6, ___outerWallTiles_13)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_outerWallTiles_13() const { return ___outerWallTiles_13; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_outerWallTiles_13() { return &___outerWallTiles_13; }
	inline void set_outerWallTiles_13(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___outerWallTiles_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outerWallTiles_13), (void*)value);
	}

	inline static int32_t get_offset_of_boardHolder_14() { return static_cast<int32_t>(offsetof(BoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6, ___boardHolder_14)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_boardHolder_14() const { return ___boardHolder_14; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_boardHolder_14() { return &___boardHolder_14; }
	inline void set_boardHolder_14(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___boardHolder_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boardHolder_14), (void*)value);
	}

	inline static int32_t get_offset_of_gridPositions_15() { return static_cast<int32_t>(offsetof(BoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6, ___gridPositions_15)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_gridPositions_15() const { return ___gridPositions_15; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_gridPositions_15() { return &___gridPositions_15; }
	inline void set_gridPositions_15(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___gridPositions_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gridPositions_15), (void*)value);
	}
};


// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9  : public Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722
{
public:

public:
};


// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single GameManager::levelStartDelay
	float ___levelStartDelay_4;
	// UnityEngine.UI.Text GameManager::levelText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___levelText_5;
	// UnityEngine.GameObject GameManager::levelImage
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___levelImage_6;
	// System.Boolean GameManager::doingSetup
	bool ___doingSetup_7;
	// BoardManager GameManager::boardScript
	BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * ___boardScript_9;
	// System.Single GameManager::turnDelay
	float ___turnDelay_10;
	// System.Collections.Generic.List`1<Enemy> GameManager::enemies
	List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * ___enemies_11;
	// System.Boolean GameManager::enemiesMoving
	bool ___enemiesMoving_12;
	// System.Int32 GameManager::playerFoodPoints
	int32_t ___playerFoodPoints_13;
	// System.Boolean GameManager::playersTurn
	bool ___playersTurn_14;
	// System.Int32 GameManager::level
	int32_t ___level_15;

public:
	inline static int32_t get_offset_of_levelStartDelay_4() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___levelStartDelay_4)); }
	inline float get_levelStartDelay_4() const { return ___levelStartDelay_4; }
	inline float* get_address_of_levelStartDelay_4() { return &___levelStartDelay_4; }
	inline void set_levelStartDelay_4(float value)
	{
		___levelStartDelay_4 = value;
	}

	inline static int32_t get_offset_of_levelText_5() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___levelText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_levelText_5() const { return ___levelText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_levelText_5() { return &___levelText_5; }
	inline void set_levelText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___levelText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelText_5), (void*)value);
	}

	inline static int32_t get_offset_of_levelImage_6() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___levelImage_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_levelImage_6() const { return ___levelImage_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_levelImage_6() { return &___levelImage_6; }
	inline void set_levelImage_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___levelImage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelImage_6), (void*)value);
	}

	inline static int32_t get_offset_of_doingSetup_7() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___doingSetup_7)); }
	inline bool get_doingSetup_7() const { return ___doingSetup_7; }
	inline bool* get_address_of_doingSetup_7() { return &___doingSetup_7; }
	inline void set_doingSetup_7(bool value)
	{
		___doingSetup_7 = value;
	}

	inline static int32_t get_offset_of_boardScript_9() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___boardScript_9)); }
	inline BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * get_boardScript_9() const { return ___boardScript_9; }
	inline BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 ** get_address_of_boardScript_9() { return &___boardScript_9; }
	inline void set_boardScript_9(BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * value)
	{
		___boardScript_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boardScript_9), (void*)value);
	}

	inline static int32_t get_offset_of_turnDelay_10() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___turnDelay_10)); }
	inline float get_turnDelay_10() const { return ___turnDelay_10; }
	inline float* get_address_of_turnDelay_10() { return &___turnDelay_10; }
	inline void set_turnDelay_10(float value)
	{
		___turnDelay_10 = value;
	}

	inline static int32_t get_offset_of_enemies_11() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___enemies_11)); }
	inline List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * get_enemies_11() const { return ___enemies_11; }
	inline List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C ** get_address_of_enemies_11() { return &___enemies_11; }
	inline void set_enemies_11(List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * value)
	{
		___enemies_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemies_11), (void*)value);
	}

	inline static int32_t get_offset_of_enemiesMoving_12() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___enemiesMoving_12)); }
	inline bool get_enemiesMoving_12() const { return ___enemiesMoving_12; }
	inline bool* get_address_of_enemiesMoving_12() { return &___enemiesMoving_12; }
	inline void set_enemiesMoving_12(bool value)
	{
		___enemiesMoving_12 = value;
	}

	inline static int32_t get_offset_of_playerFoodPoints_13() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___playerFoodPoints_13)); }
	inline int32_t get_playerFoodPoints_13() const { return ___playerFoodPoints_13; }
	inline int32_t* get_address_of_playerFoodPoints_13() { return &___playerFoodPoints_13; }
	inline void set_playerFoodPoints_13(int32_t value)
	{
		___playerFoodPoints_13 = value;
	}

	inline static int32_t get_offset_of_playersTurn_14() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___playersTurn_14)); }
	inline bool get_playersTurn_14() const { return ___playersTurn_14; }
	inline bool* get_address_of_playersTurn_14() { return &___playersTurn_14; }
	inline void set_playersTurn_14(bool value)
	{
		___playersTurn_14 = value;
	}

	inline static int32_t get_offset_of_level_15() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___level_15)); }
	inline int32_t get_level_15() const { return ___level_15; }
	inline int32_t* get_address_of_level_15() { return &___level_15; }
	inline void set_level_15(int32_t value)
	{
		___level_15 = value;
	}
};

struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields
{
public:
	// GameManager GameManager::instance
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___instance_8;

public:
	inline static int32_t get_offset_of_instance_8() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___instance_8)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_instance_8() const { return ___instance_8; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_instance_8() { return &___instance_8; }
	inline void set_instance_8(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___instance_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_8), (void*)value);
	}
};


// Completed.GameManager
struct GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Completed.GameManager::levelStartDelay
	float ___levelStartDelay_4;
	// System.Single Completed.GameManager::turnDelay
	float ___turnDelay_5;
	// System.Int32 Completed.GameManager::playerFoodPoints
	int32_t ___playerFoodPoints_6;
	// System.Boolean Completed.GameManager::playersTurn
	bool ___playersTurn_8;
	// UnityEngine.UI.Text Completed.GameManager::levelText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___levelText_9;
	// UnityEngine.GameObject Completed.GameManager::levelImage
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___levelImage_10;
	// Completed.BoardManager Completed.GameManager::boardScript
	BoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6 * ___boardScript_11;
	// System.Int32 Completed.GameManager::level
	int32_t ___level_12;
	// System.Collections.Generic.List`1<Completed.Enemy> Completed.GameManager::enemies
	List_1_t4B15F5BE07D169BC8ECAA69E8495524C4CF45663 * ___enemies_13;
	// System.Boolean Completed.GameManager::enemiesMoving
	bool ___enemiesMoving_14;
	// System.Boolean Completed.GameManager::doingSetup
	bool ___doingSetup_15;

public:
	inline static int32_t get_offset_of_levelStartDelay_4() { return static_cast<int32_t>(offsetof(GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447, ___levelStartDelay_4)); }
	inline float get_levelStartDelay_4() const { return ___levelStartDelay_4; }
	inline float* get_address_of_levelStartDelay_4() { return &___levelStartDelay_4; }
	inline void set_levelStartDelay_4(float value)
	{
		___levelStartDelay_4 = value;
	}

	inline static int32_t get_offset_of_turnDelay_5() { return static_cast<int32_t>(offsetof(GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447, ___turnDelay_5)); }
	inline float get_turnDelay_5() const { return ___turnDelay_5; }
	inline float* get_address_of_turnDelay_5() { return &___turnDelay_5; }
	inline void set_turnDelay_5(float value)
	{
		___turnDelay_5 = value;
	}

	inline static int32_t get_offset_of_playerFoodPoints_6() { return static_cast<int32_t>(offsetof(GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447, ___playerFoodPoints_6)); }
	inline int32_t get_playerFoodPoints_6() const { return ___playerFoodPoints_6; }
	inline int32_t* get_address_of_playerFoodPoints_6() { return &___playerFoodPoints_6; }
	inline void set_playerFoodPoints_6(int32_t value)
	{
		___playerFoodPoints_6 = value;
	}

	inline static int32_t get_offset_of_playersTurn_8() { return static_cast<int32_t>(offsetof(GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447, ___playersTurn_8)); }
	inline bool get_playersTurn_8() const { return ___playersTurn_8; }
	inline bool* get_address_of_playersTurn_8() { return &___playersTurn_8; }
	inline void set_playersTurn_8(bool value)
	{
		___playersTurn_8 = value;
	}

	inline static int32_t get_offset_of_levelText_9() { return static_cast<int32_t>(offsetof(GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447, ___levelText_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_levelText_9() const { return ___levelText_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_levelText_9() { return &___levelText_9; }
	inline void set_levelText_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___levelText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelText_9), (void*)value);
	}

	inline static int32_t get_offset_of_levelImage_10() { return static_cast<int32_t>(offsetof(GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447, ___levelImage_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_levelImage_10() const { return ___levelImage_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_levelImage_10() { return &___levelImage_10; }
	inline void set_levelImage_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___levelImage_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelImage_10), (void*)value);
	}

	inline static int32_t get_offset_of_boardScript_11() { return static_cast<int32_t>(offsetof(GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447, ___boardScript_11)); }
	inline BoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6 * get_boardScript_11() const { return ___boardScript_11; }
	inline BoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6 ** get_address_of_boardScript_11() { return &___boardScript_11; }
	inline void set_boardScript_11(BoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6 * value)
	{
		___boardScript_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boardScript_11), (void*)value);
	}

	inline static int32_t get_offset_of_level_12() { return static_cast<int32_t>(offsetof(GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447, ___level_12)); }
	inline int32_t get_level_12() const { return ___level_12; }
	inline int32_t* get_address_of_level_12() { return &___level_12; }
	inline void set_level_12(int32_t value)
	{
		___level_12 = value;
	}

	inline static int32_t get_offset_of_enemies_13() { return static_cast<int32_t>(offsetof(GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447, ___enemies_13)); }
	inline List_1_t4B15F5BE07D169BC8ECAA69E8495524C4CF45663 * get_enemies_13() const { return ___enemies_13; }
	inline List_1_t4B15F5BE07D169BC8ECAA69E8495524C4CF45663 ** get_address_of_enemies_13() { return &___enemies_13; }
	inline void set_enemies_13(List_1_t4B15F5BE07D169BC8ECAA69E8495524C4CF45663 * value)
	{
		___enemies_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemies_13), (void*)value);
	}

	inline static int32_t get_offset_of_enemiesMoving_14() { return static_cast<int32_t>(offsetof(GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447, ___enemiesMoving_14)); }
	inline bool get_enemiesMoving_14() const { return ___enemiesMoving_14; }
	inline bool* get_address_of_enemiesMoving_14() { return &___enemiesMoving_14; }
	inline void set_enemiesMoving_14(bool value)
	{
		___enemiesMoving_14 = value;
	}

	inline static int32_t get_offset_of_doingSetup_15() { return static_cast<int32_t>(offsetof(GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447, ___doingSetup_15)); }
	inline bool get_doingSetup_15() const { return ___doingSetup_15; }
	inline bool* get_address_of_doingSetup_15() { return &___doingSetup_15; }
	inline void set_doingSetup_15(bool value)
	{
		___doingSetup_15 = value;
	}
};

struct GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_StaticFields
{
public:
	// Completed.GameManager Completed.GameManager::instance
	GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * ___instance_7;

public:
	inline static int32_t get_offset_of_instance_7() { return static_cast<int32_t>(offsetof(GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_StaticFields, ___instance_7)); }
	inline GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * get_instance_7() const { return ___instance_7; }
	inline GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 ** get_address_of_instance_7() { return &___instance_7; }
	inline void set_instance_7(GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * value)
	{
		___instance_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_7), (void*)value);
	}
};


// Loader
struct Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Loader::gameManager
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameManager_4;
	// UnityEngine.GameObject Loader::soundManager
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___soundManager_5;

public:
	inline static int32_t get_offset_of_gameManager_4() { return static_cast<int32_t>(offsetof(Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182, ___gameManager_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameManager_4() const { return ___gameManager_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameManager_4() { return &___gameManager_4; }
	inline void set_gameManager_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_soundManager_5() { return static_cast<int32_t>(offsetof(Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182, ___soundManager_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_soundManager_5() const { return ___soundManager_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_soundManager_5() { return &___soundManager_5; }
	inline void set_soundManager_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___soundManager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundManager_5), (void*)value);
	}
};


// Completed.Loader
struct Loader_tE235FAB0403EFDC312901F5718E600E2813E8675  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Completed.Loader::gameManager
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameManager_4;
	// UnityEngine.GameObject Completed.Loader::soundManager
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___soundManager_5;

public:
	inline static int32_t get_offset_of_gameManager_4() { return static_cast<int32_t>(offsetof(Loader_tE235FAB0403EFDC312901F5718E600E2813E8675, ___gameManager_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameManager_4() const { return ___gameManager_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameManager_4() { return &___gameManager_4; }
	inline void set_gameManager_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_soundManager_5() { return static_cast<int32_t>(offsetof(Loader_tE235FAB0403EFDC312901F5718E600E2813E8675, ___soundManager_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_soundManager_5() const { return ___soundManager_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_soundManager_5() { return &___soundManager_5; }
	inline void set_soundManager_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___soundManager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundManager_5), (void*)value);
	}
};


// MovingObject
struct MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single MovingObject::moveTime
	float ___moveTime_4;
	// UnityEngine.LayerMask MovingObject::blockingLayer
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___blockingLayer_5;
	// UnityEngine.BoxCollider2D MovingObject::boxCollider
	BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * ___boxCollider_6;
	// UnityEngine.Rigidbody2D MovingObject::rb2D
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb2D_7;
	// System.Single MovingObject::inverseMoveTime
	float ___inverseMoveTime_8;

public:
	inline static int32_t get_offset_of_moveTime_4() { return static_cast<int32_t>(offsetof(MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C, ___moveTime_4)); }
	inline float get_moveTime_4() const { return ___moveTime_4; }
	inline float* get_address_of_moveTime_4() { return &___moveTime_4; }
	inline void set_moveTime_4(float value)
	{
		___moveTime_4 = value;
	}

	inline static int32_t get_offset_of_blockingLayer_5() { return static_cast<int32_t>(offsetof(MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C, ___blockingLayer_5)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_blockingLayer_5() const { return ___blockingLayer_5; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_blockingLayer_5() { return &___blockingLayer_5; }
	inline void set_blockingLayer_5(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___blockingLayer_5 = value;
	}

	inline static int32_t get_offset_of_boxCollider_6() { return static_cast<int32_t>(offsetof(MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C, ___boxCollider_6)); }
	inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * get_boxCollider_6() const { return ___boxCollider_6; }
	inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 ** get_address_of_boxCollider_6() { return &___boxCollider_6; }
	inline void set_boxCollider_6(BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * value)
	{
		___boxCollider_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boxCollider_6), (void*)value);
	}

	inline static int32_t get_offset_of_rb2D_7() { return static_cast<int32_t>(offsetof(MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C, ___rb2D_7)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb2D_7() const { return ___rb2D_7; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb2D_7() { return &___rb2D_7; }
	inline void set_rb2D_7(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb2D_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb2D_7), (void*)value);
	}

	inline static int32_t get_offset_of_inverseMoveTime_8() { return static_cast<int32_t>(offsetof(MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C, ___inverseMoveTime_8)); }
	inline float get_inverseMoveTime_8() const { return ___inverseMoveTime_8; }
	inline float* get_address_of_inverseMoveTime_8() { return &___inverseMoveTime_8; }
	inline void set_inverseMoveTime_8(float value)
	{
		___inverseMoveTime_8 = value;
	}
};


// Completed.MovingObject
struct MovingObject_tE52CA43A917730F49A992474C77FDF2C97A1E024  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Completed.MovingObject::moveTime
	float ___moveTime_4;
	// UnityEngine.LayerMask Completed.MovingObject::blockingLayer
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___blockingLayer_5;
	// UnityEngine.BoxCollider2D Completed.MovingObject::boxCollider
	BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * ___boxCollider_6;
	// UnityEngine.Rigidbody2D Completed.MovingObject::rb2D
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb2D_7;
	// System.Single Completed.MovingObject::inverseMoveTime
	float ___inverseMoveTime_8;
	// System.Boolean Completed.MovingObject::isMoving
	bool ___isMoving_9;

public:
	inline static int32_t get_offset_of_moveTime_4() { return static_cast<int32_t>(offsetof(MovingObject_tE52CA43A917730F49A992474C77FDF2C97A1E024, ___moveTime_4)); }
	inline float get_moveTime_4() const { return ___moveTime_4; }
	inline float* get_address_of_moveTime_4() { return &___moveTime_4; }
	inline void set_moveTime_4(float value)
	{
		___moveTime_4 = value;
	}

	inline static int32_t get_offset_of_blockingLayer_5() { return static_cast<int32_t>(offsetof(MovingObject_tE52CA43A917730F49A992474C77FDF2C97A1E024, ___blockingLayer_5)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_blockingLayer_5() const { return ___blockingLayer_5; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_blockingLayer_5() { return &___blockingLayer_5; }
	inline void set_blockingLayer_5(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___blockingLayer_5 = value;
	}

	inline static int32_t get_offset_of_boxCollider_6() { return static_cast<int32_t>(offsetof(MovingObject_tE52CA43A917730F49A992474C77FDF2C97A1E024, ___boxCollider_6)); }
	inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * get_boxCollider_6() const { return ___boxCollider_6; }
	inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 ** get_address_of_boxCollider_6() { return &___boxCollider_6; }
	inline void set_boxCollider_6(BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * value)
	{
		___boxCollider_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boxCollider_6), (void*)value);
	}

	inline static int32_t get_offset_of_rb2D_7() { return static_cast<int32_t>(offsetof(MovingObject_tE52CA43A917730F49A992474C77FDF2C97A1E024, ___rb2D_7)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb2D_7() const { return ___rb2D_7; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb2D_7() { return &___rb2D_7; }
	inline void set_rb2D_7(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb2D_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb2D_7), (void*)value);
	}

	inline static int32_t get_offset_of_inverseMoveTime_8() { return static_cast<int32_t>(offsetof(MovingObject_tE52CA43A917730F49A992474C77FDF2C97A1E024, ___inverseMoveTime_8)); }
	inline float get_inverseMoveTime_8() const { return ___inverseMoveTime_8; }
	inline float* get_address_of_inverseMoveTime_8() { return &___inverseMoveTime_8; }
	inline void set_inverseMoveTime_8(float value)
	{
		___inverseMoveTime_8 = value;
	}

	inline static int32_t get_offset_of_isMoving_9() { return static_cast<int32_t>(offsetof(MovingObject_tE52CA43A917730F49A992474C77FDF2C97A1E024, ___isMoving_9)); }
	inline bool get_isMoving_9() const { return ___isMoving_9; }
	inline bool* get_address_of_isMoving_9() { return &___isMoving_9; }
	inline void set_isMoving_9(bool value)
	{
		___isMoving_9 = value;
	}
};


// SoundManager
struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioSource SoundManager::efxSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___efxSource_4;
	// UnityEngine.AudioSource SoundManager::musicSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___musicSource_5;
	// System.Single SoundManager::lowPitchRange
	float ___lowPitchRange_7;
	// System.Single SoundManager::highPitchRange
	float ___highPitchRange_8;

public:
	inline static int32_t get_offset_of_efxSource_4() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___efxSource_4)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_efxSource_4() const { return ___efxSource_4; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_efxSource_4() { return &___efxSource_4; }
	inline void set_efxSource_4(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___efxSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___efxSource_4), (void*)value);
	}

	inline static int32_t get_offset_of_musicSource_5() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___musicSource_5)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_musicSource_5() const { return ___musicSource_5; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_musicSource_5() { return &___musicSource_5; }
	inline void set_musicSource_5(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___musicSource_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___musicSource_5), (void*)value);
	}

	inline static int32_t get_offset_of_lowPitchRange_7() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___lowPitchRange_7)); }
	inline float get_lowPitchRange_7() const { return ___lowPitchRange_7; }
	inline float* get_address_of_lowPitchRange_7() { return &___lowPitchRange_7; }
	inline void set_lowPitchRange_7(float value)
	{
		___lowPitchRange_7 = value;
	}

	inline static int32_t get_offset_of_highPitchRange_8() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___highPitchRange_8)); }
	inline float get_highPitchRange_8() const { return ___highPitchRange_8; }
	inline float* get_address_of_highPitchRange_8() { return &___highPitchRange_8; }
	inline void set_highPitchRange_8(float value)
	{
		___highPitchRange_8 = value;
	}
};

struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields
{
public:
	// SoundManager SoundManager::instance
	SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * ___instance_6;

public:
	inline static int32_t get_offset_of_instance_6() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields, ___instance_6)); }
	inline SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * get_instance_6() const { return ___instance_6; }
	inline SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 ** get_address_of_instance_6() { return &___instance_6; }
	inline void set_instance_6(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * value)
	{
		___instance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_6), (void*)value);
	}
};


// Completed.SoundManager
struct SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioSource Completed.SoundManager::efxSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___efxSource_4;
	// UnityEngine.AudioSource Completed.SoundManager::musicSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___musicSource_5;
	// System.Single Completed.SoundManager::lowPitchRange
	float ___lowPitchRange_7;
	// System.Single Completed.SoundManager::highPitchRange
	float ___highPitchRange_8;

public:
	inline static int32_t get_offset_of_efxSource_4() { return static_cast<int32_t>(offsetof(SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51, ___efxSource_4)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_efxSource_4() const { return ___efxSource_4; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_efxSource_4() { return &___efxSource_4; }
	inline void set_efxSource_4(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___efxSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___efxSource_4), (void*)value);
	}

	inline static int32_t get_offset_of_musicSource_5() { return static_cast<int32_t>(offsetof(SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51, ___musicSource_5)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_musicSource_5() const { return ___musicSource_5; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_musicSource_5() { return &___musicSource_5; }
	inline void set_musicSource_5(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___musicSource_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___musicSource_5), (void*)value);
	}

	inline static int32_t get_offset_of_lowPitchRange_7() { return static_cast<int32_t>(offsetof(SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51, ___lowPitchRange_7)); }
	inline float get_lowPitchRange_7() const { return ___lowPitchRange_7; }
	inline float* get_address_of_lowPitchRange_7() { return &___lowPitchRange_7; }
	inline void set_lowPitchRange_7(float value)
	{
		___lowPitchRange_7 = value;
	}

	inline static int32_t get_offset_of_highPitchRange_8() { return static_cast<int32_t>(offsetof(SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51, ___highPitchRange_8)); }
	inline float get_highPitchRange_8() const { return ___highPitchRange_8; }
	inline float* get_address_of_highPitchRange_8() { return &___highPitchRange_8; }
	inline void set_highPitchRange_8(float value)
	{
		___highPitchRange_8 = value;
	}
};

struct SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_StaticFields
{
public:
	// Completed.SoundManager Completed.SoundManager::instance
	SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51 * ___instance_6;

public:
	inline static int32_t get_offset_of_instance_6() { return static_cast<int32_t>(offsetof(SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_StaticFields, ___instance_6)); }
	inline SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51 * get_instance_6() const { return ___instance_6; }
	inline SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51 ** get_address_of_instance_6() { return &___instance_6; }
	inline void set_instance_6(SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51 * value)
	{
		___instance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_6), (void*)value);
	}
};


// TutorialInfo
struct TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean TutorialInfo::showAtStart
	bool ___showAtStart_4;
	// System.String TutorialInfo::url
	String_t* ___url_5;
	// UnityEngine.GameObject TutorialInfo::overlay
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___overlay_6;
	// UnityEngine.AudioListener TutorialInfo::mainListener
	AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * ___mainListener_7;
	// UnityEngine.UI.Toggle TutorialInfo::showAtStartToggle
	Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * ___showAtStartToggle_8;

public:
	inline static int32_t get_offset_of_showAtStart_4() { return static_cast<int32_t>(offsetof(TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485, ___showAtStart_4)); }
	inline bool get_showAtStart_4() const { return ___showAtStart_4; }
	inline bool* get_address_of_showAtStart_4() { return &___showAtStart_4; }
	inline void set_showAtStart_4(bool value)
	{
		___showAtStart_4 = value;
	}

	inline static int32_t get_offset_of_url_5() { return static_cast<int32_t>(offsetof(TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485, ___url_5)); }
	inline String_t* get_url_5() const { return ___url_5; }
	inline String_t** get_address_of_url_5() { return &___url_5; }
	inline void set_url_5(String_t* value)
	{
		___url_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_5), (void*)value);
	}

	inline static int32_t get_offset_of_overlay_6() { return static_cast<int32_t>(offsetof(TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485, ___overlay_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_overlay_6() const { return ___overlay_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_overlay_6() { return &___overlay_6; }
	inline void set_overlay_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___overlay_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overlay_6), (void*)value);
	}

	inline static int32_t get_offset_of_mainListener_7() { return static_cast<int32_t>(offsetof(TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485, ___mainListener_7)); }
	inline AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * get_mainListener_7() const { return ___mainListener_7; }
	inline AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 ** get_address_of_mainListener_7() { return &___mainListener_7; }
	inline void set_mainListener_7(AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * value)
	{
		___mainListener_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainListener_7), (void*)value);
	}

	inline static int32_t get_offset_of_showAtStartToggle_8() { return static_cast<int32_t>(offsetof(TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485, ___showAtStartToggle_8)); }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * get_showAtStartToggle_8() const { return ___showAtStartToggle_8; }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E ** get_address_of_showAtStartToggle_8() { return &___showAtStartToggle_8; }
	inline void set_showAtStartToggle_8(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * value)
	{
		___showAtStartToggle_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___showAtStartToggle_8), (void*)value);
	}
};

struct TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485_StaticFields
{
public:
	// System.String TutorialInfo::showAtStartPrefsKey
	String_t* ___showAtStartPrefsKey_9;
	// System.Boolean TutorialInfo::alreadyShownThisSession
	bool ___alreadyShownThisSession_10;

public:
	inline static int32_t get_offset_of_showAtStartPrefsKey_9() { return static_cast<int32_t>(offsetof(TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485_StaticFields, ___showAtStartPrefsKey_9)); }
	inline String_t* get_showAtStartPrefsKey_9() const { return ___showAtStartPrefsKey_9; }
	inline String_t** get_address_of_showAtStartPrefsKey_9() { return &___showAtStartPrefsKey_9; }
	inline void set_showAtStartPrefsKey_9(String_t* value)
	{
		___showAtStartPrefsKey_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___showAtStartPrefsKey_9), (void*)value);
	}

	inline static int32_t get_offset_of_alreadyShownThisSession_10() { return static_cast<int32_t>(offsetof(TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485_StaticFields, ___alreadyShownThisSession_10)); }
	inline bool get_alreadyShownThisSession_10() const { return ___alreadyShownThisSession_10; }
	inline bool* get_address_of_alreadyShownThisSession_10() { return &___alreadyShownThisSession_10; }
	inline void set_alreadyShownThisSession_10(bool value)
	{
		___alreadyShownThisSession_10 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Wall
struct Wall_t75B0B5D0D103AF52A80C03FFB000620BD9005D4C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioClip Wall::chopSound1
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___chopSound1_4;
	// UnityEngine.AudioClip Wall::chopSound2
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___chopSound2_5;
	// UnityEngine.Sprite Wall::dmgSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___dmgSprite_6;
	// System.Int32 Wall::hp
	int32_t ___hp_7;
	// UnityEngine.SpriteRenderer Wall::spriteRenderer
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___spriteRenderer_8;

public:
	inline static int32_t get_offset_of_chopSound1_4() { return static_cast<int32_t>(offsetof(Wall_t75B0B5D0D103AF52A80C03FFB000620BD9005D4C, ___chopSound1_4)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_chopSound1_4() const { return ___chopSound1_4; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_chopSound1_4() { return &___chopSound1_4; }
	inline void set_chopSound1_4(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___chopSound1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chopSound1_4), (void*)value);
	}

	inline static int32_t get_offset_of_chopSound2_5() { return static_cast<int32_t>(offsetof(Wall_t75B0B5D0D103AF52A80C03FFB000620BD9005D4C, ___chopSound2_5)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_chopSound2_5() const { return ___chopSound2_5; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_chopSound2_5() { return &___chopSound2_5; }
	inline void set_chopSound2_5(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___chopSound2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chopSound2_5), (void*)value);
	}

	inline static int32_t get_offset_of_dmgSprite_6() { return static_cast<int32_t>(offsetof(Wall_t75B0B5D0D103AF52A80C03FFB000620BD9005D4C, ___dmgSprite_6)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_dmgSprite_6() const { return ___dmgSprite_6; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_dmgSprite_6() { return &___dmgSprite_6; }
	inline void set_dmgSprite_6(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___dmgSprite_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dmgSprite_6), (void*)value);
	}

	inline static int32_t get_offset_of_hp_7() { return static_cast<int32_t>(offsetof(Wall_t75B0B5D0D103AF52A80C03FFB000620BD9005D4C, ___hp_7)); }
	inline int32_t get_hp_7() const { return ___hp_7; }
	inline int32_t* get_address_of_hp_7() { return &___hp_7; }
	inline void set_hp_7(int32_t value)
	{
		___hp_7 = value;
	}

	inline static int32_t get_offset_of_spriteRenderer_8() { return static_cast<int32_t>(offsetof(Wall_t75B0B5D0D103AF52A80C03FFB000620BD9005D4C, ___spriteRenderer_8)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_spriteRenderer_8() const { return ___spriteRenderer_8; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_spriteRenderer_8() { return &___spriteRenderer_8; }
	inline void set_spriteRenderer_8(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___spriteRenderer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteRenderer_8), (void*)value);
	}
};


// Completed.Wall
struct Wall_t0AF988C8A447343CA324CC5DA0FD95C75E7CB412  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioClip Completed.Wall::chopSound1
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___chopSound1_4;
	// UnityEngine.AudioClip Completed.Wall::chopSound2
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___chopSound2_5;
	// UnityEngine.Sprite Completed.Wall::dmgSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___dmgSprite_6;
	// System.Int32 Completed.Wall::hp
	int32_t ___hp_7;
	// UnityEngine.SpriteRenderer Completed.Wall::spriteRenderer
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___spriteRenderer_8;

public:
	inline static int32_t get_offset_of_chopSound1_4() { return static_cast<int32_t>(offsetof(Wall_t0AF988C8A447343CA324CC5DA0FD95C75E7CB412, ___chopSound1_4)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_chopSound1_4() const { return ___chopSound1_4; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_chopSound1_4() { return &___chopSound1_4; }
	inline void set_chopSound1_4(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___chopSound1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chopSound1_4), (void*)value);
	}

	inline static int32_t get_offset_of_chopSound2_5() { return static_cast<int32_t>(offsetof(Wall_t0AF988C8A447343CA324CC5DA0FD95C75E7CB412, ___chopSound2_5)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_chopSound2_5() const { return ___chopSound2_5; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_chopSound2_5() { return &___chopSound2_5; }
	inline void set_chopSound2_5(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___chopSound2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chopSound2_5), (void*)value);
	}

	inline static int32_t get_offset_of_dmgSprite_6() { return static_cast<int32_t>(offsetof(Wall_t0AF988C8A447343CA324CC5DA0FD95C75E7CB412, ___dmgSprite_6)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_dmgSprite_6() const { return ___dmgSprite_6; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_dmgSprite_6() { return &___dmgSprite_6; }
	inline void set_dmgSprite_6(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___dmgSprite_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dmgSprite_6), (void*)value);
	}

	inline static int32_t get_offset_of_hp_7() { return static_cast<int32_t>(offsetof(Wall_t0AF988C8A447343CA324CC5DA0FD95C75E7CB412, ___hp_7)); }
	inline int32_t get_hp_7() const { return ___hp_7; }
	inline int32_t* get_address_of_hp_7() { return &___hp_7; }
	inline void set_hp_7(int32_t value)
	{
		___hp_7 = value;
	}

	inline static int32_t get_offset_of_spriteRenderer_8() { return static_cast<int32_t>(offsetof(Wall_t0AF988C8A447343CA324CC5DA0FD95C75E7CB412, ___spriteRenderer_8)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_spriteRenderer_8() const { return ___spriteRenderer_8; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_spriteRenderer_8() { return &___spriteRenderer_8; }
	inline void set_spriteRenderer_8(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___spriteRenderer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteRenderer_8), (void*)value);
	}
};


// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627  : public MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C
{
public:
	// System.Int32 Enemy::playerDamage
	int32_t ___playerDamage_9;
	// UnityEngine.Animator Enemy::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_10;
	// UnityEngine.Transform Enemy::target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_11;
	// System.Boolean Enemy::skipMove
	bool ___skipMove_12;
	// UnityEngine.AudioClip Enemy::enemyAttack1
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___enemyAttack1_13;
	// UnityEngine.AudioClip Enemy::enemyAttack2
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___enemyAttack2_14;

public:
	inline static int32_t get_offset_of_playerDamage_9() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___playerDamage_9)); }
	inline int32_t get_playerDamage_9() const { return ___playerDamage_9; }
	inline int32_t* get_address_of_playerDamage_9() { return &___playerDamage_9; }
	inline void set_playerDamage_9(int32_t value)
	{
		___playerDamage_9 = value;
	}

	inline static int32_t get_offset_of_animator_10() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___animator_10)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_10() const { return ___animator_10; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_10() { return &___animator_10; }
	inline void set_animator_10(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_10), (void*)value);
	}

	inline static int32_t get_offset_of_target_11() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___target_11)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_target_11() const { return ___target_11; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_target_11() { return &___target_11; }
	inline void set_target_11(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___target_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_11), (void*)value);
	}

	inline static int32_t get_offset_of_skipMove_12() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___skipMove_12)); }
	inline bool get_skipMove_12() const { return ___skipMove_12; }
	inline bool* get_address_of_skipMove_12() { return &___skipMove_12; }
	inline void set_skipMove_12(bool value)
	{
		___skipMove_12 = value;
	}

	inline static int32_t get_offset_of_enemyAttack1_13() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___enemyAttack1_13)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_enemyAttack1_13() const { return ___enemyAttack1_13; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_enemyAttack1_13() { return &___enemyAttack1_13; }
	inline void set_enemyAttack1_13(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___enemyAttack1_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyAttack1_13), (void*)value);
	}

	inline static int32_t get_offset_of_enemyAttack2_14() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___enemyAttack2_14)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_enemyAttack2_14() const { return ___enemyAttack2_14; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_enemyAttack2_14() { return &___enemyAttack2_14; }
	inline void set_enemyAttack2_14(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___enemyAttack2_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyAttack2_14), (void*)value);
	}
};


// Completed.Enemy
struct Enemy_tA07E200A067AE652E45412372BA529A68E2DDAC6  : public MovingObject_tE52CA43A917730F49A992474C77FDF2C97A1E024
{
public:
	// System.Int32 Completed.Enemy::playerDamage
	int32_t ___playerDamage_10;
	// UnityEngine.AudioClip Completed.Enemy::attackSound1
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___attackSound1_11;
	// UnityEngine.AudioClip Completed.Enemy::attackSound2
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___attackSound2_12;
	// UnityEngine.Animator Completed.Enemy::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_13;
	// UnityEngine.Transform Completed.Enemy::target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_14;
	// System.Boolean Completed.Enemy::skipMove
	bool ___skipMove_15;

public:
	inline static int32_t get_offset_of_playerDamage_10() { return static_cast<int32_t>(offsetof(Enemy_tA07E200A067AE652E45412372BA529A68E2DDAC6, ___playerDamage_10)); }
	inline int32_t get_playerDamage_10() const { return ___playerDamage_10; }
	inline int32_t* get_address_of_playerDamage_10() { return &___playerDamage_10; }
	inline void set_playerDamage_10(int32_t value)
	{
		___playerDamage_10 = value;
	}

	inline static int32_t get_offset_of_attackSound1_11() { return static_cast<int32_t>(offsetof(Enemy_tA07E200A067AE652E45412372BA529A68E2DDAC6, ___attackSound1_11)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_attackSound1_11() const { return ___attackSound1_11; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_attackSound1_11() { return &___attackSound1_11; }
	inline void set_attackSound1_11(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___attackSound1_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attackSound1_11), (void*)value);
	}

	inline static int32_t get_offset_of_attackSound2_12() { return static_cast<int32_t>(offsetof(Enemy_tA07E200A067AE652E45412372BA529A68E2DDAC6, ___attackSound2_12)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_attackSound2_12() const { return ___attackSound2_12; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_attackSound2_12() { return &___attackSound2_12; }
	inline void set_attackSound2_12(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___attackSound2_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attackSound2_12), (void*)value);
	}

	inline static int32_t get_offset_of_animator_13() { return static_cast<int32_t>(offsetof(Enemy_tA07E200A067AE652E45412372BA529A68E2DDAC6, ___animator_13)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_13() const { return ___animator_13; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_13() { return &___animator_13; }
	inline void set_animator_13(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_13), (void*)value);
	}

	inline static int32_t get_offset_of_target_14() { return static_cast<int32_t>(offsetof(Enemy_tA07E200A067AE652E45412372BA529A68E2DDAC6, ___target_14)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_target_14() const { return ___target_14; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_target_14() { return &___target_14; }
	inline void set_target_14(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___target_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_14), (void*)value);
	}

	inline static int32_t get_offset_of_skipMove_15() { return static_cast<int32_t>(offsetof(Enemy_tA07E200A067AE652E45412372BA529A68E2DDAC6, ___skipMove_15)); }
	inline bool get_skipMove_15() const { return ___skipMove_15; }
	inline bool* get_address_of_skipMove_15() { return &___skipMove_15; }
	inline void set_skipMove_15(bool value)
	{
		___skipMove_15 = value;
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F  : public MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C
{
public:
	// System.Single Player::restartLevelDelay
	float ___restartLevelDelay_9;
	// System.Int32 Player::pointsPerFood
	int32_t ___pointsPerFood_10;
	// System.Int32 Player::pointsPerSoda
	int32_t ___pointsPerSoda_11;
	// System.Int32 Player::wallDamage
	int32_t ___wallDamage_12;
	// UnityEngine.Animator Player::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_13;
	// System.Int32 Player::food
	int32_t ___food_14;
	// UnityEngine.UI.Text Player::foodText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___foodText_15;
	// UnityEngine.AudioClip Player::moveSound1
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___moveSound1_16;
	// UnityEngine.AudioClip Player::moveSound2
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___moveSound2_17;
	// UnityEngine.AudioClip Player::eatSound1
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___eatSound1_18;
	// UnityEngine.AudioClip Player::eatSound2
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___eatSound2_19;
	// UnityEngine.AudioClip Player::drinkSound1
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___drinkSound1_20;
	// UnityEngine.AudioClip Player::drinkSound2
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___drinkSound2_21;
	// UnityEngine.AudioClip Player::gameOverSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___gameOverSound_22;
	// UnityEngine.Vector2 Player::touchOrigin
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___touchOrigin_23;

public:
	inline static int32_t get_offset_of_restartLevelDelay_9() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___restartLevelDelay_9)); }
	inline float get_restartLevelDelay_9() const { return ___restartLevelDelay_9; }
	inline float* get_address_of_restartLevelDelay_9() { return &___restartLevelDelay_9; }
	inline void set_restartLevelDelay_9(float value)
	{
		___restartLevelDelay_9 = value;
	}

	inline static int32_t get_offset_of_pointsPerFood_10() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___pointsPerFood_10)); }
	inline int32_t get_pointsPerFood_10() const { return ___pointsPerFood_10; }
	inline int32_t* get_address_of_pointsPerFood_10() { return &___pointsPerFood_10; }
	inline void set_pointsPerFood_10(int32_t value)
	{
		___pointsPerFood_10 = value;
	}

	inline static int32_t get_offset_of_pointsPerSoda_11() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___pointsPerSoda_11)); }
	inline int32_t get_pointsPerSoda_11() const { return ___pointsPerSoda_11; }
	inline int32_t* get_address_of_pointsPerSoda_11() { return &___pointsPerSoda_11; }
	inline void set_pointsPerSoda_11(int32_t value)
	{
		___pointsPerSoda_11 = value;
	}

	inline static int32_t get_offset_of_wallDamage_12() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___wallDamage_12)); }
	inline int32_t get_wallDamage_12() const { return ___wallDamage_12; }
	inline int32_t* get_address_of_wallDamage_12() { return &___wallDamage_12; }
	inline void set_wallDamage_12(int32_t value)
	{
		___wallDamage_12 = value;
	}

	inline static int32_t get_offset_of_animator_13() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___animator_13)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_13() const { return ___animator_13; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_13() { return &___animator_13; }
	inline void set_animator_13(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_13), (void*)value);
	}

	inline static int32_t get_offset_of_food_14() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___food_14)); }
	inline int32_t get_food_14() const { return ___food_14; }
	inline int32_t* get_address_of_food_14() { return &___food_14; }
	inline void set_food_14(int32_t value)
	{
		___food_14 = value;
	}

	inline static int32_t get_offset_of_foodText_15() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___foodText_15)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_foodText_15() const { return ___foodText_15; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_foodText_15() { return &___foodText_15; }
	inline void set_foodText_15(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___foodText_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foodText_15), (void*)value);
	}

	inline static int32_t get_offset_of_moveSound1_16() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___moveSound1_16)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_moveSound1_16() const { return ___moveSound1_16; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_moveSound1_16() { return &___moveSound1_16; }
	inline void set_moveSound1_16(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___moveSound1_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moveSound1_16), (void*)value);
	}

	inline static int32_t get_offset_of_moveSound2_17() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___moveSound2_17)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_moveSound2_17() const { return ___moveSound2_17; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_moveSound2_17() { return &___moveSound2_17; }
	inline void set_moveSound2_17(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___moveSound2_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moveSound2_17), (void*)value);
	}

	inline static int32_t get_offset_of_eatSound1_18() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___eatSound1_18)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_eatSound1_18() const { return ___eatSound1_18; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_eatSound1_18() { return &___eatSound1_18; }
	inline void set_eatSound1_18(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___eatSound1_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eatSound1_18), (void*)value);
	}

	inline static int32_t get_offset_of_eatSound2_19() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___eatSound2_19)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_eatSound2_19() const { return ___eatSound2_19; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_eatSound2_19() { return &___eatSound2_19; }
	inline void set_eatSound2_19(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___eatSound2_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eatSound2_19), (void*)value);
	}

	inline static int32_t get_offset_of_drinkSound1_20() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___drinkSound1_20)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_drinkSound1_20() const { return ___drinkSound1_20; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_drinkSound1_20() { return &___drinkSound1_20; }
	inline void set_drinkSound1_20(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___drinkSound1_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___drinkSound1_20), (void*)value);
	}

	inline static int32_t get_offset_of_drinkSound2_21() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___drinkSound2_21)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_drinkSound2_21() const { return ___drinkSound2_21; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_drinkSound2_21() { return &___drinkSound2_21; }
	inline void set_drinkSound2_21(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___drinkSound2_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___drinkSound2_21), (void*)value);
	}

	inline static int32_t get_offset_of_gameOverSound_22() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___gameOverSound_22)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_gameOverSound_22() const { return ___gameOverSound_22; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_gameOverSound_22() { return &___gameOverSound_22; }
	inline void set_gameOverSound_22(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___gameOverSound_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOverSound_22), (void*)value);
	}

	inline static int32_t get_offset_of_touchOrigin_23() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___touchOrigin_23)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_touchOrigin_23() const { return ___touchOrigin_23; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_touchOrigin_23() { return &___touchOrigin_23; }
	inline void set_touchOrigin_23(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___touchOrigin_23 = value;
	}
};


// Completed.Player
struct Player_t9765AA53EA79B78F740AAE0F25EE2647584E717C  : public MovingObject_tE52CA43A917730F49A992474C77FDF2C97A1E024
{
public:
	// System.Single Completed.Player::restartLevelDelay
	float ___restartLevelDelay_10;
	// System.Int32 Completed.Player::pointsPerFood
	int32_t ___pointsPerFood_11;
	// System.Int32 Completed.Player::pointsPerSoda
	int32_t ___pointsPerSoda_12;
	// System.Int32 Completed.Player::wallDamage
	int32_t ___wallDamage_13;
	// UnityEngine.UI.Text Completed.Player::foodText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___foodText_14;
	// UnityEngine.AudioClip Completed.Player::moveSound1
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___moveSound1_15;
	// UnityEngine.AudioClip Completed.Player::moveSound2
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___moveSound2_16;
	// UnityEngine.AudioClip Completed.Player::eatSound1
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___eatSound1_17;
	// UnityEngine.AudioClip Completed.Player::eatSound2
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___eatSound2_18;
	// UnityEngine.AudioClip Completed.Player::drinkSound1
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___drinkSound1_19;
	// UnityEngine.AudioClip Completed.Player::drinkSound2
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___drinkSound2_20;
	// UnityEngine.AudioClip Completed.Player::gameOverSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___gameOverSound_21;
	// UnityEngine.Animator Completed.Player::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_22;
	// System.Int32 Completed.Player::food
	int32_t ___food_23;
	// UnityEngine.Vector2 Completed.Player::touchOrigin
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___touchOrigin_24;

public:
	inline static int32_t get_offset_of_restartLevelDelay_10() { return static_cast<int32_t>(offsetof(Player_t9765AA53EA79B78F740AAE0F25EE2647584E717C, ___restartLevelDelay_10)); }
	inline float get_restartLevelDelay_10() const { return ___restartLevelDelay_10; }
	inline float* get_address_of_restartLevelDelay_10() { return &___restartLevelDelay_10; }
	inline void set_restartLevelDelay_10(float value)
	{
		___restartLevelDelay_10 = value;
	}

	inline static int32_t get_offset_of_pointsPerFood_11() { return static_cast<int32_t>(offsetof(Player_t9765AA53EA79B78F740AAE0F25EE2647584E717C, ___pointsPerFood_11)); }
	inline int32_t get_pointsPerFood_11() const { return ___pointsPerFood_11; }
	inline int32_t* get_address_of_pointsPerFood_11() { return &___pointsPerFood_11; }
	inline void set_pointsPerFood_11(int32_t value)
	{
		___pointsPerFood_11 = value;
	}

	inline static int32_t get_offset_of_pointsPerSoda_12() { return static_cast<int32_t>(offsetof(Player_t9765AA53EA79B78F740AAE0F25EE2647584E717C, ___pointsPerSoda_12)); }
	inline int32_t get_pointsPerSoda_12() const { return ___pointsPerSoda_12; }
	inline int32_t* get_address_of_pointsPerSoda_12() { return &___pointsPerSoda_12; }
	inline void set_pointsPerSoda_12(int32_t value)
	{
		___pointsPerSoda_12 = value;
	}

	inline static int32_t get_offset_of_wallDamage_13() { return static_cast<int32_t>(offsetof(Player_t9765AA53EA79B78F740AAE0F25EE2647584E717C, ___wallDamage_13)); }
	inline int32_t get_wallDamage_13() const { return ___wallDamage_13; }
	inline int32_t* get_address_of_wallDamage_13() { return &___wallDamage_13; }
	inline void set_wallDamage_13(int32_t value)
	{
		___wallDamage_13 = value;
	}

	inline static int32_t get_offset_of_foodText_14() { return static_cast<int32_t>(offsetof(Player_t9765AA53EA79B78F740AAE0F25EE2647584E717C, ___foodText_14)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_foodText_14() const { return ___foodText_14; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_foodText_14() { return &___foodText_14; }
	inline void set_foodText_14(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___foodText_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foodText_14), (void*)value);
	}

	inline static int32_t get_offset_of_moveSound1_15() { return static_cast<int32_t>(offsetof(Player_t9765AA53EA79B78F740AAE0F25EE2647584E717C, ___moveSound1_15)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_moveSound1_15() const { return ___moveSound1_15; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_moveSound1_15() { return &___moveSound1_15; }
	inline void set_moveSound1_15(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___moveSound1_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moveSound1_15), (void*)value);
	}

	inline static int32_t get_offset_of_moveSound2_16() { return static_cast<int32_t>(offsetof(Player_t9765AA53EA79B78F740AAE0F25EE2647584E717C, ___moveSound2_16)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_moveSound2_16() const { return ___moveSound2_16; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_moveSound2_16() { return &___moveSound2_16; }
	inline void set_moveSound2_16(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___moveSound2_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moveSound2_16), (void*)value);
	}

	inline static int32_t get_offset_of_eatSound1_17() { return static_cast<int32_t>(offsetof(Player_t9765AA53EA79B78F740AAE0F25EE2647584E717C, ___eatSound1_17)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_eatSound1_17() const { return ___eatSound1_17; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_eatSound1_17() { return &___eatSound1_17; }
	inline void set_eatSound1_17(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___eatSound1_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eatSound1_17), (void*)value);
	}

	inline static int32_t get_offset_of_eatSound2_18() { return static_cast<int32_t>(offsetof(Player_t9765AA53EA79B78F740AAE0F25EE2647584E717C, ___eatSound2_18)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_eatSound2_18() const { return ___eatSound2_18; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_eatSound2_18() { return &___eatSound2_18; }
	inline void set_eatSound2_18(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___eatSound2_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eatSound2_18), (void*)value);
	}

	inline static int32_t get_offset_of_drinkSound1_19() { return static_cast<int32_t>(offsetof(Player_t9765AA53EA79B78F740AAE0F25EE2647584E717C, ___drinkSound1_19)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_drinkSound1_19() const { return ___drinkSound1_19; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_drinkSound1_19() { return &___drinkSound1_19; }
	inline void set_drinkSound1_19(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___drinkSound1_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___drinkSound1_19), (void*)value);
	}

	inline static int32_t get_offset_of_drinkSound2_20() { return static_cast<int32_t>(offsetof(Player_t9765AA53EA79B78F740AAE0F25EE2647584E717C, ___drinkSound2_20)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_drinkSound2_20() const { return ___drinkSound2_20; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_drinkSound2_20() { return &___drinkSound2_20; }
	inline void set_drinkSound2_20(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___drinkSound2_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___drinkSound2_20), (void*)value);
	}

	inline static int32_t get_offset_of_gameOverSound_21() { return static_cast<int32_t>(offsetof(Player_t9765AA53EA79B78F740AAE0F25EE2647584E717C, ___gameOverSound_21)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_gameOverSound_21() const { return ___gameOverSound_21; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_gameOverSound_21() { return &___gameOverSound_21; }
	inline void set_gameOverSound_21(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___gameOverSound_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOverSound_21), (void*)value);
	}

	inline static int32_t get_offset_of_animator_22() { return static_cast<int32_t>(offsetof(Player_t9765AA53EA79B78F740AAE0F25EE2647584E717C, ___animator_22)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_22() const { return ___animator_22; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_22() { return &___animator_22; }
	inline void set_animator_22(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_22), (void*)value);
	}

	inline static int32_t get_offset_of_food_23() { return static_cast<int32_t>(offsetof(Player_t9765AA53EA79B78F740AAE0F25EE2647584E717C, ___food_23)); }
	inline int32_t get_food_23() const { return ___food_23; }
	inline int32_t* get_address_of_food_23() { return &___food_23; }
	inline void set_food_23(int32_t value)
	{
		___food_23 = value;
	}

	inline static int32_t get_offset_of_touchOrigin_24() { return static_cast<int32_t>(offsetof(Player_t9765AA53EA79B78F740AAE0F25EE2647584E717C, ___touchOrigin_24)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_touchOrigin_24() const { return ___touchOrigin_24; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_touchOrigin_24() { return &___touchOrigin_24; }
	inline void set_touchOrigin_24(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___touchOrigin_24 = value;
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
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
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
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

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Toggle
struct Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;

public:
	inline static int32_t get_offset_of_toggleTransition_20() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___toggleTransition_20)); }
	inline int32_t get_toggleTransition_20() const { return ___toggleTransition_20; }
	inline int32_t* get_address_of_toggleTransition_20() { return &___toggleTransition_20; }
	inline void set_toggleTransition_20(int32_t value)
	{
		___toggleTransition_20 = value;
	}

	inline static int32_t get_offset_of_graphic_21() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___graphic_21)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_graphic_21() const { return ___graphic_21; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_graphic_21() { return &___graphic_21; }
	inline void set_graphic_21(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___graphic_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphic_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Group_22() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___m_Group_22)); }
	inline ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * get_m_Group_22() const { return ___m_Group_22; }
	inline ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 ** get_address_of_m_Group_22() { return &___m_Group_22; }
	inline void set_m_Group_22(ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * value)
	{
		___m_Group_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Group_22), (void*)value);
	}

	inline static int32_t get_offset_of_onValueChanged_23() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___onValueChanged_23)); }
	inline ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * get_onValueChanged_23() const { return ___onValueChanged_23; }
	inline ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 ** get_address_of_onValueChanged_23() { return &___onValueChanged_23; }
	inline void set_onValueChanged_23(ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * value)
	{
		___onValueChanged_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onValueChanged_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsOn_24() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___m_IsOn_24)); }
	inline bool get_m_IsOn_24() const { return ___m_IsOn_24; }
	inline bool* get_address_of_m_IsOn_24() { return &___m_IsOn_24; }
	inline void set_m_IsOn_24(bool value)
	{
		___m_IsOn_24 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Touch[]
struct TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  m_Items[1];

public:
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * m_Items[1];

public:
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m0281A01E9C859E2B8073312D41BB9005662EF2DA_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m50E7B823E46CB327D49A2D55A761F57472037634_gshared (UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);

// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
inline void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, int32_t, const RuntimeMethod*))List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m0281A01E9C859E2B8073312D41BB9005662EF2DA (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m0281A01E9C859E2B8073312D41BB9005662EF2DA_gshared)(__this, ___index0, method);
}
// UnityEngine.Vector3 BoardManager::RandomPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BoardManager_RandomPosition_m935B2ED4B94CF71E5B64FED0F31502651685BA92 (BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * __this, const RuntimeMethod* method);
// System.Void BoardManager::BoardSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_BoardSetup_m99C9EEF2A55C2CDD7EF142DD274CFDB55F37844D (BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * __this, const RuntimeMethod* method);
// System.Void BoardManager::InitialiseList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_InitialiseList_m24DA11637120310A6E6C59FAC739DE7266F9DCC9 (BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * __this, const RuntimeMethod* method);
// System.Void BoardManager::LayoutObjectAtRandom(UnityEngine.GameObject[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_LayoutObjectAtRandom_mC7D9C9AD82D1EC0A9A5B1693DA62D05AA9AEFBB0 (BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * __this, GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___tileArray0, int32_t ___minimum1, int32_t ___maximum2, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Log(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Log_mF7F3624FA030AB57AD8C1F4CAF084B2DCC99897A (float ___f0, float ___p1, const RuntimeMethod* method);
// System.Void BoardManager/Count::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Count__ctor_m5875DFC4DC21CCF8D66E8D3389296B63F07A1028 (Count_t43FD08C05C3123E7D601E60282485C59D5F2C038 * __this, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared)(__this, method);
}
// UnityEngine.Vector3 Completed.BoardManager::RandomPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BoardManager_RandomPosition_m94E45E447C772DDA91B84C335C062A0F559172CD (BoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6 * __this, const RuntimeMethod* method);
// System.Void Completed.BoardManager::BoardSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_BoardSetup_m0B876AFCBC29A9DBB024DEEC5B67657F377801EB (BoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6 * __this, const RuntimeMethod* method);
// System.Void Completed.BoardManager::InitialiseList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_InitialiseList_mB61F0296455ED775465B50D9C188143007304B10 (BoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6 * __this, const RuntimeMethod* method);
// System.Void Completed.BoardManager::LayoutObjectAtRandom(UnityEngine.GameObject[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_LayoutObjectAtRandom_mD3780B6E37D154F3540A85ECB119E57537D74806 (BoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6 * __this, GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___tileArray0, int32_t ___minimum1, int32_t ___maximum2, const RuntimeMethod* method);
// System.Void Completed.BoardManager/Count::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Count__ctor_mDA70BD2AD95CC83F1FA79C115B7DCCEC5B57BD43 (Count_t8DC7E1AC3171CF8B35A55F124D85FE4282E82E37 * __this, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method);
// System.Void GameManager::AddEnemyToList(Enemy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_AddEnemyToList_mA112B59DD65068F09ACF0CC996EEBABB1C165025 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * ___script0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F (String_t* ___tag0, const RuntimeMethod* method);
// System.Void MovingObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingObject_Start_m8CFA40B703119CCC5B0EC7C40D7E78783A34EA5F (MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void MovingObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingObject__ctor_m38E8072FE2E1134B90E1687C927B3CE128B221A1 (MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C * __this, const RuntimeMethod* method);
// System.Void Completed.GameManager::AddEnemyToList(Completed.Enemy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_AddEnemyToList_m3D23C9F8E5367DE9CD7D06D1F04913730A3FEA15 (GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * __this, Enemy_tA07E200A067AE652E45412372BA529A68E2DDAC6 * ___script0, const RuntimeMethod* method);
// System.Void Completed.MovingObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingObject_Start_m89A6C77020948513DB11F517F4940B03829CFB5F (MovingObject_tE52CA43A917730F49A992474C77FDF2C97A1E024 * __this, const RuntimeMethod* method);
// System.Void Completed.MovingObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingObject__ctor_m7161BC828CFE34CC18C6334031F588A1141EA8E2 (MovingObject_tE52CA43A917730F49A992474C77FDF2C97A1E024 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Enemy>::.ctor()
inline void List_1__ctor_m264424C12AE2901EAD718720F579BDA200FCC721 (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<BoardManager>()
inline BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * Component_GetComponent_TisBoardManager_t3985DB311F238FF4878376C70A779A0C07933F91_mBA60C5C71DBB87AD63980EFFB0ACED510ADFE67A (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void GameManager::InitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_InitGame_m4E4EDB5C15F37DFFC40895B4980CA7CCEAB3407D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Enemy>::Clear()
inline void List_1_Clear_m61F957FEB6659515C4F68682524D31F7D9C5DA2A (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void BoardManager::SetupScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_SetupScene_mFB52812FBF77FFF6DCFB23B3C2C921FD7303C47C (BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * __this, int32_t ___level0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator GameManager::MoveEnemies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_MoveEnemies_m37D946D3F0876B1701A271210C51921850CFA930 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Enemy>::Add(!0)
inline void List_1_Add_m51152AE1B99DCCA528E426B5AB47C84CA9CE03BC (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * __this, Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C *, Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void GameManager/<MoveEnemies>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveEnemiesU3Ed__19__ctor_mDBB02CB501620C9E826CFE75B4A931B5FACF3458 (U3CMoveEnemiesU3Ed__19_tAA067E6A4E7E5C2077BAE3EA8F957DD7052EB5EB * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Completed.Enemy>::.ctor()
inline void List_1__ctor_m1F185561D8333E252EDC12EE74D083A255B3AB19 (List_1_t4B15F5BE07D169BC8ECAA69E8495524C4CF45663 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4B15F5BE07D169BC8ECAA69E8495524C4CF45663 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<Completed.BoardManager>()
inline BoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6 * Component_GetComponent_TisBoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6_m782989E200A4283B4E8E1EFDAA0E03C35E787FB7 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  BoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void Completed.GameManager::InitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_InitGame_mED4A7BEFA32AFE6C9665E4122CA20BE03848D03A (GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0 (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m50E7B823E46CB327D49A2D55A761F57472037634_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::add_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_add_sceneLoaded_m54990A485E2E66739E31090BDC3A4C01EF7729BA (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Completed.Enemy>::Clear()
inline void List_1_Clear_mC40F2C3BA437A485D033403FC1AA748D5C70CD8E (List_1_t4B15F5BE07D169BC8ECAA69E8495524C4CF45663 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4B15F5BE07D169BC8ECAA69E8495524C4CF45663 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void Completed.BoardManager::SetupScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_SetupScene_mA22B43BE74DBA41AEF9A95E168ED37903E7EFBAD (BoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6 * __this, int32_t ___level0, const RuntimeMethod* method);
// System.Collections.IEnumerator Completed.GameManager::MoveEnemies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_MoveEnemies_m99DCFD3AB7869DBCF7CC816E9CB3E509A818799C (GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Completed.Enemy>::Add(!0)
inline void List_1_Add_mF62C152B3AA6E5CAFA4D2FA96E98091E8B7929A2 (List_1_t4B15F5BE07D169BC8ECAA69E8495524C4CF45663 * __this, Enemy_tA07E200A067AE652E45412372BA529A68E2DDAC6 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4B15F5BE07D169BC8ECAA69E8495524C4CF45663 *, Enemy_tA07E200A067AE652E45412372BA529A68E2DDAC6 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void Completed.GameManager/<MoveEnemies>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveEnemiesU3Ed__20__ctor_m560576D693B2C84EB2D4E5BA3F37B256357DF668 (U3CMoveEnemiesU3Ed__20_tEB7D40440BA47032AB3D9CB8A0E9B33A9A6EB317 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Linecast(UnityEngine.Vector2,UnityEngine.Vector2,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  Physics2D_Linecast_mD982886413BF081441FDFA937E83B5E661C3B622 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___start0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___end1, int32_t ___layerMask2, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864 (RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Collections.IEnumerator MovingObject::SmoothMovement(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MovingObject_SmoothMovement_m94963AEBAA322DAA3E29C157E1C213961D9BF8CD (MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end0, const RuntimeMethod* method);
// System.Void MovingObject/<SmoothMovement>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSmoothMovementU3Ed__7__ctor_mBFA2F4D47B7E7DFF0F4897DE7AA3CE9D51B86026 (U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator Completed.MovingObject::SmoothMovement(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MovingObject_SmoothMovement_m2D62BD48456CA5441A084F5C0CACA939ECB7C743 (MovingObject_tE52CA43A917730F49A992474C77FDF2C97A1E024 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end0, const RuntimeMethod* method);
// System.Void Completed.MovingObject/<SmoothMovement>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSmoothMovementU3Ed__8__ctor_m422A03A963E8A43B290676741C2DDAD02F22B341 (U3CSmoothMovementU3Ed__8_t0DB90D1365DE00F6486A3948E33911675EAFE307 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6 (const RuntimeMethod* method);
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* Input_get_touches_m26E3034CAE32931E59A480327A3CF4BFC2045E8F (const RuntimeMethod* method);
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void SoundManager::RandomizeSfx(UnityEngine.AudioClip[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_RandomizeSfx_m25C53C31752018BD583EA0DD984D9FD6574C0E58 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ___clips0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Player::CheckIfGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_CheckIfGameOver_mA83BFDA28FA68BC063E0EDD2BF9377CAD9FDBD4D (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Void SoundManager::PlaySingle(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlaySingle_m355DE88CFDD1EB81E9682CF4327DE765E35A01A4 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void GameManager::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameOver_m402A112370B58EBA3B2171FABC09467E1ED28E9A (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_one_m9B2AFD26404B6DD0F520D19FC7F79371C5C18B42 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_UnaryNegation(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_UnaryNegation_mA3AA3A53CD43237B0BA7AC57C09A0468A940D7C5_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, const RuntimeMethod* method);
// System.Void Completed.SoundManager::RandomizeSfx(UnityEngine.AudioClip[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_RandomizeSfx_m11F9CD2046548F5F8A61B9DD698E7A94195C9A29 (SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51 * __this, AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ___clips0, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m62031BCEF9B3C7179B005B8EA825989F696E6B76 (int32_t ___sceneBuildIndex0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void Completed.Player::CheckIfGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_CheckIfGameOver_m093FC524330A71569B5AEDA9B2D0244EAE822328 (Player_t9765AA53EA79B78F740AAE0F25EE2647584E717C * __this, const RuntimeMethod* method);
// System.Void Completed.SoundManager::PlaySingle(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlaySingle_m392B140F5DDF3591EA6033B7EEFD462F01031AA1 (SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51 * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method);
// System.Void Completed.GameManager::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameOver_m1F3FCA54C6303ECDEB2FC323055E0839C4F20803 (GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_m9E9EEFADFAB44ADEC656573425CF34D0069A0CBC (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Void TutorialInfo::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialInfo_StartGame_m0114F75E4E0E26D2F7429A2C38DF25CCEBB81341 (TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92 (String_t* ___key0, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986 (String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_mB018B9F410D7236AAB71D6D1A5BACC64C891F507 (Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * __this, bool ___value0, const RuntimeMethod* method);
// System.Void TutorialInfo::ShowLaunchScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialInfo_ShowLaunchScreen_mDCDB9714506CFEB0BD014AB9174060E74FED4C21 (TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_m4AED08D5321E5395FAC8D91C2C428DBE60C5FD4E (String_t* ___url0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C (Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Enemy>::get_Count()
inline int32_t List_1_get_Count_m99FAEDD9C024582566F281EF9D4051695FBDB0A5_inline (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<Enemy>::get_Item(System.Int32)
inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * List_1_get_Item_m3E90AE762FA32F7597154FA3C1E3F8FE491C51AD_inline (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * (*) (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void Enemy::MoveEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_MoveEnemy_m97D831D3D5C6924EA6E4477F8C5F0BB4D26468A5 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Completed.Enemy>::get_Count()
inline int32_t List_1_get_Count_m3F9A1F65655B1DBD5D5E52C91D4597B7FE7FB3F7_inline (List_1_t4B15F5BE07D169BC8ECAA69E8495524C4CF45663 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4B15F5BE07D169BC8ECAA69E8495524C4CF45663 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<Completed.Enemy>::get_Item(System.Int32)
inline Enemy_tA07E200A067AE652E45412372BA529A68E2DDAC6 * List_1_get_Item_m5EA1A9570746D05CD09E123011A17979A5FB3A56_inline (List_1_t4B15F5BE07D169BC8ECAA69E8495524C4CF45663 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Enemy_tA07E200A067AE652E45412372BA529A68E2DDAC6 * (*) (List_1_t4B15F5BE07D169BC8ECAA69E8495524C4CF45663 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void Completed.Enemy::MoveEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_MoveEnemy_m9DDBFC877A56D5D0AA6AB488D44F4E1511D6A325 (Enemy_tA07E200A067AE652E45412372BA529A68E2DDAC6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::MovePosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void AndroidBackButton::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBackButton_FixedUpdate_m58E0488399FA314C9F877A7D7B92CCC735679605 (AndroidBackButton_tD0A5485B0C55A1C3B179F02EF0B681369A3CDD05 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)((int32_t)11)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// if (Input.GetKey(KeyCode.Escape))
		bool L_2;
		L_2 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)27), /*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
	}

IL_0022:
	{
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void AndroidBackButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBackButton__ctor_mDDC5E51D05314ADAF6DDA291F0D0A67D756EFE47 (AndroidBackButton_tD0A5485B0C55A1C3B179F02EF0B681369A3CDD05 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void BoardManager::InitialiseList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_InitialiseList_m24DA11637120310A6E6C59FAC739DE7266F9DCC9 (BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		// gridPositions.Clear ();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = __this->get_gridPositions_15();
		NullCheck(L_0);
		List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702(L_0, /*hidden argument*/List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
		// for(int x = 1; x < columns-1; x++)
		V_0 = 1;
		goto IL_004a;
	}

IL_0011:
	{
		// for(int y = 1; y < rows-1; y++)
		V_1 = 1;
		goto IL_0036;
	}

IL_0016:
	{
		// gridPositions.Add (new Vector3(x, y, 0f));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_1 = __this->get_gridPositions_15();
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), ((float)((float)L_2)), ((float)((float)L_3)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_1, L_4, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// for(int y = 1; y < rows-1; y++)
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0036:
	{
		// for(int y = 1; y < rows-1; y++)
		int32_t L_6 = V_1;
		int32_t L_7 = __this->get_rows_5();
		V_2 = (bool)((((int32_t)L_6) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1))))? 1 : 0);
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_0016;
		}
	}
	{
		// for(int x = 1; x < columns-1; x++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_004a:
	{
		// for(int x = 1; x < columns-1; x++)
		int32_t L_10 = V_0;
		int32_t L_11 = __this->get_columns_4();
		V_3 = (bool)((((int32_t)L_10) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1))))? 1 : 0);
		bool L_12 = V_3;
		if (L_12)
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BoardManager::BoardSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_BoardSetup_m99C9EEF2A55C2CDD7EF142DD274CFDB55F37844D (BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A135CD2AD82D069CD3A4AF0011DF7A9E307A55E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	{
		// boardHolder = new GameObject ("Board").transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_0, _stringLiteral5A135CD2AD82D069CD3A4AF0011DF7A9E307A55E, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		__this->set_boardHolder_14(L_1);
		// for(int x = -1; x < columns + 1; x++)
		V_0 = (-1);
		goto IL_00bf;
	}

IL_001d:
	{
		// for(int y = -1; y < rows + 1; y++)
		V_1 = (-1);
		goto IL_00a6;
	}

IL_0025:
	{
		// GameObject toInstantiate = floorTiles[Random.Range (0,floorTiles.Length)];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2 = __this->get_floorTiles_9();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = __this->get_floorTiles_9();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))), /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_5 = L_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// if(x == -1 || x == columns || y == -1 || y == rows)
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_8 = V_0;
		int32_t L_9 = __this->get_columns_4();
		if ((((int32_t)L_8) == ((int32_t)L_9)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = __this->get_rows_5();
		G_B7_0 = ((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
		goto IL_0059;
	}

IL_0058:
	{
		G_B7_0 = 1;
	}

IL_0059:
	{
		V_4 = (bool)G_B7_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0075;
		}
	}
	{
		// toInstantiate = outerWallTiles [Random.Range (0, outerWallTiles.Length)];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14 = __this->get_outerWallTiles_13();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_15 = __this->get_outerWallTiles_13();
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))), /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_17 = L_16;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_2 = L_18;
	}

IL_0075:
	{
		// GameObject instance = Instantiate (toInstantiate, new Vector3 (x, y, 0f), Quaternion.identity) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = V_2;
		int32_t L_20 = V_0;
		int32_t L_21 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_22), ((float)((float)L_20)), ((float)((float)L_21)), (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23;
		L_23 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_19, L_22, L_23, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		V_3 = L_24;
		// instance.transform.SetParent (boardHolder);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = V_3;
		NullCheck(L_25);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_25, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = __this->get_boardHolder_14();
		NullCheck(L_26);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_26, L_27, /*hidden argument*/NULL);
		// for(int y = -1; y < rows + 1; y++)
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00a6:
	{
		// for(int y = -1; y < rows + 1; y++)
		int32_t L_29 = V_1;
		int32_t L_30 = __this->get_rows_5();
		V_5 = (bool)((((int32_t)L_29) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1))))? 1 : 0);
		bool L_31 = V_5;
		if (L_31)
		{
			goto IL_0025;
		}
	}
	{
		// for(int x = -1; x < columns + 1; x++)
		int32_t L_32 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00bf:
	{
		// for(int x = -1; x < columns + 1; x++)
		int32_t L_33 = V_0;
		int32_t L_34 = __this->get_columns_4();
		V_6 = (bool)((((int32_t)L_33) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1))))? 1 : 0);
		bool L_35 = V_6;
		if (L_35)
		{
			goto IL_001d;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 BoardManager::RandomPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BoardManager_RandomPosition_m935B2ED4B94CF71E5B64FED0F31502651685BA92 (BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m0281A01E9C859E2B8073312D41BB9005662EF2DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// int randomIndex = Random.Range (0, gridPositions.Count);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = __this->get_gridPositions_15();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_inline(L_0, /*hidden argument*/List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// Vector3 randomPosition = gridPositions[randomIndex];
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_3 = __this->get_gridPositions_15();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		V_1 = L_5;
		// gridPositions.RemoveAt (randomIndex);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_6 = __this->get_gridPositions_15();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		List_1_RemoveAt_m0281A01E9C859E2B8073312D41BB9005662EF2DA(L_6, L_7, /*hidden argument*/List_1_RemoveAt_m0281A01E9C859E2B8073312D41BB9005662EF2DA_RuntimeMethod_var);
		// return randomPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_1;
		V_2 = L_8;
		goto IL_0031;
	}

IL_0031:
	{
		// }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_2;
		return L_9;
	}
}
// System.Void BoardManager::LayoutObjectAtRandom(UnityEngine.GameObject[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_LayoutObjectAtRandom_mC7D9C9AD82D1EC0A9A5B1693DA62D05AA9AEFBB0 (BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * __this, GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___tileArray0, int32_t ___minimum1, int32_t ___maximum2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	bool V_4 = false;
	{
		// int objectCount = Random.Range (minimum, maximum+1);
		int32_t L_0 = ___minimum1;
		int32_t L_1 = ___maximum2;
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(L_0, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_2;
		// for(int i = 0; i < objectCount; i++)
		V_1 = 0;
		goto IL_0035;
	}

IL_000f:
	{
		// Vector3 randomPosition = RandomPosition();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = BoardManager_RandomPosition_m935B2ED4B94CF71E5B64FED0F31502651685BA92(__this, /*hidden argument*/NULL);
		V_2 = L_3;
		// GameObject tileChoice = tileArray[Random.Range (0, tileArray.Length)];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4 = ___tileArray0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5 = ___tileArray0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_7 = L_6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		// Instantiate(tileChoice, randomPosition, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_9, L_10, L_11, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// for(int i = 0; i < objectCount; i++)
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0035:
	{
		// for(int i = 0; i < objectCount; i++)
		int32_t L_14 = V_1;
		int32_t L_15 = V_0;
		V_4 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_4;
		if (L_16)
		{
			goto IL_000f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BoardManager::SetupScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_SetupScene_mFB52812FBF77FFF6DCFB23B3C2C921FD7303C47C (BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * __this, int32_t ___level0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// BoardSetup ();
		BoardManager_BoardSetup_m99C9EEF2A55C2CDD7EF142DD274CFDB55F37844D(__this, /*hidden argument*/NULL);
		// InitialiseList ();
		BoardManager_InitialiseList_m24DA11637120310A6E6C59FAC739DE7266F9DCC9(__this, /*hidden argument*/NULL);
		// LayoutObjectAtRandom (wallTiles, wallCount.minimum, wallCount.maximum);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_wallTiles_10();
		Count_t43FD08C05C3123E7D601E60282485C59D5F2C038 * L_1 = __this->get_wallCount_6();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_minimum_0();
		Count_t43FD08C05C3123E7D601E60282485C59D5F2C038 * L_3 = __this->get_wallCount_6();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_maximum_1();
		BoardManager_LayoutObjectAtRandom_mC7D9C9AD82D1EC0A9A5B1693DA62D05AA9AEFBB0(__this, L_0, L_2, L_4, /*hidden argument*/NULL);
		// LayoutObjectAtRandom (foodTiles, foodCount.minimum, foodCount.maximum);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5 = __this->get_foodTiles_11();
		Count_t43FD08C05C3123E7D601E60282485C59D5F2C038 * L_6 = __this->get_foodCount_7();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_minimum_0();
		Count_t43FD08C05C3123E7D601E60282485C59D5F2C038 * L_8 = __this->get_foodCount_7();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_maximum_1();
		BoardManager_LayoutObjectAtRandom_mC7D9C9AD82D1EC0A9A5B1693DA62D05AA9AEFBB0(__this, L_5, L_7, L_9, /*hidden argument*/NULL);
		// int enemyCount = (int)Mathf.Log(level, 2f);
		int32_t L_10 = ___level0;
		float L_11;
		L_11 = Mathf_Log_mF7F3624FA030AB57AD8C1F4CAF084B2DCC99897A(((float)((float)L_10)), (2.0f), /*hidden argument*/NULL);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_11);
		// LayoutObjectAtRandom (enemyTiles, enemyCount, enemyCount);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_12 = __this->get_enemyTiles_12();
		int32_t L_13 = V_0;
		int32_t L_14 = V_0;
		BoardManager_LayoutObjectAtRandom_mC7D9C9AD82D1EC0A9A5B1693DA62D05AA9AEFBB0(__this, L_12, L_13, L_14, /*hidden argument*/NULL);
		// Instantiate (exit, new Vector3 (columns - 1, rows - 1, 0f), Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_exit_8();
		int32_t L_16 = __this->get_columns_4();
		int32_t L_17 = __this->get_rows_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_18), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)))), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1)))), (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19;
		L_19 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_15, L_18, L_19, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BoardManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager__ctor_mEE21DAFF293EDBF41BDA217EBFD09B19F245B60C (BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Count_t43FD08C05C3123E7D601E60282485C59D5F2C038_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int columns = 8;             //Number of columns in our game board.
		__this->set_columns_4(8);
		// public int rows = 8;                //Number of rows in our game board.
		__this->set_rows_5(8);
		// public Count wallCount = new Count (5, 9);
		Count_t43FD08C05C3123E7D601E60282485C59D5F2C038 * L_0 = (Count_t43FD08C05C3123E7D601E60282485C59D5F2C038 *)il2cpp_codegen_object_new(Count_t43FD08C05C3123E7D601E60282485C59D5F2C038_il2cpp_TypeInfo_var);
		Count__ctor_m5875DFC4DC21CCF8D66E8D3389296B63F07A1028(L_0, 5, ((int32_t)9), /*hidden argument*/NULL);
		__this->set_wallCount_6(L_0);
		// public Count foodCount = new Count (1, 5);
		Count_t43FD08C05C3123E7D601E60282485C59D5F2C038 * L_1 = (Count_t43FD08C05C3123E7D601E60282485C59D5F2C038 *)il2cpp_codegen_object_new(Count_t43FD08C05C3123E7D601E60282485C59D5F2C038_il2cpp_TypeInfo_var);
		Count__ctor_m5875DFC4DC21CCF8D66E8D3389296B63F07A1028(L_1, 1, 5, /*hidden argument*/NULL);
		__this->set_foodCount_7(L_1);
		// private List <Vector3> gridPositions = new List <Vector3> ();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_2 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)il2cpp_codegen_object_new(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		List_1__ctor_mF8F23D572031748AD428623AE16803455997E297(L_2, /*hidden argument*/List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		__this->set_gridPositions_15(L_2);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Completed.BoardManager::InitialiseList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_InitialiseList_mB61F0296455ED775465B50D9C188143007304B10 (BoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		// gridPositions.Clear ();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = __this->get_gridPositions_15();
		NullCheck(L_0);
		List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702(L_0, /*hidden argument*/List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
		// for(int x = 1; x < columns-1; x++)
		V_0 = 1;
		goto IL_004a;
	}

IL_0011:
	{
		// for(int y = 1; y < rows-1; y++)
		V_1 = 1;
		goto IL_0036;
	}

IL_0016:
	{
		// gridPositions.Add (new Vector3(x, y, 0f));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_1 = __this->get_gridPositions_15();
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), ((float)((float)L_2)), ((float)((float)L_3)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_1, L_4, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// for(int y = 1; y < rows-1; y++)
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0036:
	{
		// for(int y = 1; y < rows-1; y++)
		int32_t L_6 = V_1;
		int32_t L_7 = __this->get_rows_5();
		V_2 = (bool)((((int32_t)L_6) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1))))? 1 : 0);
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_0016;
		}
	}
	{
		// for(int x = 1; x < columns-1; x++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_004a:
	{
		// for(int x = 1; x < columns-1; x++)
		int32_t L_10 = V_0;
		int32_t L_11 = __this->get_columns_4();
		V_3 = (bool)((((int32_t)L_10) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1))))? 1 : 0);
		bool L_12 = V_3;
		if (L_12)
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Completed.BoardManager::BoardSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_BoardSetup_m0B876AFCBC29A9DBB024DEEC5B67657F377801EB (BoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A135CD2AD82D069CD3A4AF0011DF7A9E307A55E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	{
		// boardHolder = new GameObject ("Board").transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_0, _stringLiteral5A135CD2AD82D069CD3A4AF0011DF7A9E307A55E, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		__this->set_boardHolder_14(L_1);
		// for(int x = -1; x < columns + 1; x++)
		V_0 = (-1);
		goto IL_00bf;
	}

IL_001d:
	{
		// for(int y = -1; y < rows + 1; y++)
		V_1 = (-1);
		goto IL_00a6;
	}

IL_0025:
	{
		// GameObject toInstantiate = floorTiles[Random.Range (0,floorTiles.Length)];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2 = __this->get_floorTiles_9();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = __this->get_floorTiles_9();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))), /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_5 = L_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// if(x == -1 || x == columns || y == -1 || y == rows)
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_8 = V_0;
		int32_t L_9 = __this->get_columns_4();
		if ((((int32_t)L_8) == ((int32_t)L_9)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = __this->get_rows_5();
		G_B7_0 = ((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
		goto IL_0059;
	}

IL_0058:
	{
		G_B7_0 = 1;
	}

IL_0059:
	{
		V_4 = (bool)G_B7_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0075;
		}
	}
	{
		// toInstantiate = outerWallTiles [Random.Range (0, outerWallTiles.Length)];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14 = __this->get_outerWallTiles_13();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_15 = __this->get_outerWallTiles_13();
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))), /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_17 = L_16;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_2 = L_18;
	}

IL_0075:
	{
		// GameObject instance =
		//     Instantiate (toInstantiate, new Vector3 (x, y, 0f), Quaternion.identity) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = V_2;
		int32_t L_20 = V_0;
		int32_t L_21 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_22), ((float)((float)L_20)), ((float)((float)L_21)), (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23;
		L_23 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_19, L_22, L_23, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		V_3 = L_24;
		// instance.transform.SetParent (boardHolder);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = V_3;
		NullCheck(L_25);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_25, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = __this->get_boardHolder_14();
		NullCheck(L_26);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_26, L_27, /*hidden argument*/NULL);
		// for(int y = -1; y < rows + 1; y++)
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00a6:
	{
		// for(int y = -1; y < rows + 1; y++)
		int32_t L_29 = V_1;
		int32_t L_30 = __this->get_rows_5();
		V_5 = (bool)((((int32_t)L_29) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1))))? 1 : 0);
		bool L_31 = V_5;
		if (L_31)
		{
			goto IL_0025;
		}
	}
	{
		// for(int x = -1; x < columns + 1; x++)
		int32_t L_32 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00bf:
	{
		// for(int x = -1; x < columns + 1; x++)
		int32_t L_33 = V_0;
		int32_t L_34 = __this->get_columns_4();
		V_6 = (bool)((((int32_t)L_33) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1))))? 1 : 0);
		bool L_35 = V_6;
		if (L_35)
		{
			goto IL_001d;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Completed.BoardManager::RandomPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BoardManager_RandomPosition_m94E45E447C772DDA91B84C335C062A0F559172CD (BoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m0281A01E9C859E2B8073312D41BB9005662EF2DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// int randomIndex = Random.Range (0, gridPositions.Count);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = __this->get_gridPositions_15();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_inline(L_0, /*hidden argument*/List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// Vector3 randomPosition = gridPositions[randomIndex];
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_3 = __this->get_gridPositions_15();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		V_1 = L_5;
		// gridPositions.RemoveAt (randomIndex);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_6 = __this->get_gridPositions_15();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		List_1_RemoveAt_m0281A01E9C859E2B8073312D41BB9005662EF2DA(L_6, L_7, /*hidden argument*/List_1_RemoveAt_m0281A01E9C859E2B8073312D41BB9005662EF2DA_RuntimeMethod_var);
		// return randomPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_1;
		V_2 = L_8;
		goto IL_0031;
	}

IL_0031:
	{
		// }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_2;
		return L_9;
	}
}
// System.Void Completed.BoardManager::LayoutObjectAtRandom(UnityEngine.GameObject[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_LayoutObjectAtRandom_mD3780B6E37D154F3540A85ECB119E57537D74806 (BoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6 * __this, GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___tileArray0, int32_t ___minimum1, int32_t ___maximum2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	bool V_4 = false;
	{
		// int objectCount = Random.Range (minimum, maximum+1);
		int32_t L_0 = ___minimum1;
		int32_t L_1 = ___maximum2;
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(L_0, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_2;
		// for(int i = 0; i < objectCount; i++)
		V_1 = 0;
		goto IL_0035;
	}

IL_000f:
	{
		// Vector3 randomPosition = RandomPosition();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = BoardManager_RandomPosition_m94E45E447C772DDA91B84C335C062A0F559172CD(__this, /*hidden argument*/NULL);
		V_2 = L_3;
		// GameObject tileChoice = tileArray[Random.Range (0, tileArray.Length)];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4 = ___tileArray0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5 = ___tileArray0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_7 = L_6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		// Instantiate(tileChoice, randomPosition, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_9, L_10, L_11, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// for(int i = 0; i < objectCount; i++)
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0035:
	{
		// for(int i = 0; i < objectCount; i++)
		int32_t L_14 = V_1;
		int32_t L_15 = V_0;
		V_4 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_4;
		if (L_16)
		{
			goto IL_000f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Completed.BoardManager::SetupScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_SetupScene_mA22B43BE74DBA41AEF9A95E168ED37903E7EFBAD (BoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6 * __this, int32_t ___level0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// BoardSetup ();
		BoardManager_BoardSetup_m0B876AFCBC29A9DBB024DEEC5B67657F377801EB(__this, /*hidden argument*/NULL);
		// InitialiseList ();
		BoardManager_InitialiseList_mB61F0296455ED775465B50D9C188143007304B10(__this, /*hidden argument*/NULL);
		// LayoutObjectAtRandom (wallTiles, wallCount.minimum, wallCount.maximum);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_wallTiles_10();
		Count_t8DC7E1AC3171CF8B35A55F124D85FE4282E82E37 * L_1 = __this->get_wallCount_6();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_minimum_0();
		Count_t8DC7E1AC3171CF8B35A55F124D85FE4282E82E37 * L_3 = __this->get_wallCount_6();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_maximum_1();
		BoardManager_LayoutObjectAtRandom_mD3780B6E37D154F3540A85ECB119E57537D74806(__this, L_0, L_2, L_4, /*hidden argument*/NULL);
		// LayoutObjectAtRandom (foodTiles, foodCount.minimum, foodCount.maximum);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5 = __this->get_foodTiles_11();
		Count_t8DC7E1AC3171CF8B35A55F124D85FE4282E82E37 * L_6 = __this->get_foodCount_7();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_minimum_0();
		Count_t8DC7E1AC3171CF8B35A55F124D85FE4282E82E37 * L_8 = __this->get_foodCount_7();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_maximum_1();
		BoardManager_LayoutObjectAtRandom_mD3780B6E37D154F3540A85ECB119E57537D74806(__this, L_5, L_7, L_9, /*hidden argument*/NULL);
		// int enemyCount = (int)Mathf.Log(level, 2f);
		int32_t L_10 = ___level0;
		float L_11;
		L_11 = Mathf_Log_mF7F3624FA030AB57AD8C1F4CAF084B2DCC99897A(((float)((float)L_10)), (2.0f), /*hidden argument*/NULL);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_11);
		// LayoutObjectAtRandom (enemyTiles, enemyCount, enemyCount);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_12 = __this->get_enemyTiles_12();
		int32_t L_13 = V_0;
		int32_t L_14 = V_0;
		BoardManager_LayoutObjectAtRandom_mD3780B6E37D154F3540A85ECB119E57537D74806(__this, L_12, L_13, L_14, /*hidden argument*/NULL);
		// Instantiate (exit, new Vector3 (columns - 1, rows - 1, 0f), Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_exit_8();
		int32_t L_16 = __this->get_columns_4();
		int32_t L_17 = __this->get_rows_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_18), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)))), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1)))), (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19;
		L_19 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_15, L_18, L_19, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Completed.BoardManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager__ctor_m4D3550F0304C79A00089FC7D3FB41BB615F8276B (BoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Count_t8DC7E1AC3171CF8B35A55F124D85FE4282E82E37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int columns = 8;                                         //Number of columns in our game board.
		__this->set_columns_4(8);
		// public int rows = 8;                                            //Number of rows in our game board.
		__this->set_rows_5(8);
		// public Count wallCount = new Count (5, 9);                        //Lower and upper limit for our random number of walls per level.
		Count_t8DC7E1AC3171CF8B35A55F124D85FE4282E82E37 * L_0 = (Count_t8DC7E1AC3171CF8B35A55F124D85FE4282E82E37 *)il2cpp_codegen_object_new(Count_t8DC7E1AC3171CF8B35A55F124D85FE4282E82E37_il2cpp_TypeInfo_var);
		Count__ctor_mDA70BD2AD95CC83F1FA79C115B7DCCEC5B57BD43(L_0, 5, ((int32_t)9), /*hidden argument*/NULL);
		__this->set_wallCount_6(L_0);
		// public Count foodCount = new Count (1, 5);                        //Lower and upper limit for our random number of food items per level.
		Count_t8DC7E1AC3171CF8B35A55F124D85FE4282E82E37 * L_1 = (Count_t8DC7E1AC3171CF8B35A55F124D85FE4282E82E37 *)il2cpp_codegen_object_new(Count_t8DC7E1AC3171CF8B35A55F124D85FE4282E82E37_il2cpp_TypeInfo_var);
		Count__ctor_mDA70BD2AD95CC83F1FA79C115B7DCCEC5B57BD43(L_1, 1, 5, /*hidden argument*/NULL);
		__this->set_foodCount_7(L_1);
		// private List <Vector3> gridPositions = new List <Vector3> ();    //A list of possible locations to place tiles.
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_2 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)il2cpp_codegen_object_new(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		List_1__ctor_mF8F23D572031748AD428623AE16803455997E297(L_2, /*hidden argument*/List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		__this->set_gridPositions_15(L_2);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Enemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Start_m9FA35B427F2B9FDFD390E9812C2556775C62CB02 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.instance.AddEnemyToList (this);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_8();
		NullCheck(L_0);
		GameManager_AddEnemyToList_mA112B59DD65068F09ACF0CC996EEBABB1C165025(L_0, __this, /*hidden argument*/NULL);
		// animator = GetComponent<Animator> ();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1;
		L_1 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_animator_10(L_1);
		// target = GameObject.FindGameObjectWithTag ("Player").transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		__this->set_target_11(L_3);
		// base.Start ();
		MovingObject_Start_m8CFA40B703119CCC5B0EC7C40D7E78783A34EA5F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::MoveEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_MoveEnemy_m97D831D3D5C6924EA6E4477F8C5F0BB4D26468A5 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MovingObject_AttemptMove_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_mF48FBD63D30F7F9C88F7D3216DFB0FF1214227CD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// int xDir = 0;
		V_0 = 0;
		// int yDir = 0;
		V_1 = 0;
		// if(Mathf.Abs (target.position.x - transform.position.x) < float.Epsilon)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_target_11();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		float L_6;
		L_6 = fabsf(((float)il2cpp_codegen_subtract((float)L_2, (float)L_5)));
		V_2 = (bool)((((float)L_6) < ((float)(1.40129846E-45f)))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_005f;
		}
	}
	{
		// yDir = target.position.y > transform.position.y ? 1 : -1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = __this->get_target_11();
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_y_3();
		if ((((float)L_10) > ((float)L_13)))
		{
			goto IL_005b;
		}
	}
	{
		G_B4_0 = (-1);
		goto IL_005c;
	}

IL_005b:
	{
		G_B4_0 = 1;
	}

IL_005c:
	{
		V_1 = G_B4_0;
		goto IL_0086;
	}

IL_005f:
	{
		// xDir = target.position.x > transform.position.x ? 1 : -1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = __this->get_target_11();
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_x_2();
		if ((((float)L_16) > ((float)L_19)))
		{
			goto IL_0084;
		}
	}
	{
		G_B8_0 = (-1);
		goto IL_0085;
	}

IL_0084:
	{
		G_B8_0 = 1;
	}

IL_0085:
	{
		V_0 = G_B8_0;
	}

IL_0086:
	{
		// AttemptMove <Player> (xDir, yDir);
		int32_t L_20 = V_0;
		int32_t L_21 = V_1;
		GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(MovingObject_AttemptMove_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_mF48FBD63D30F7F9C88F7D3216DFB0FF1214227CD_RuntimeMethod_var, __this, L_20, L_21);
		// }
		return;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_m3C82F8269DE4132408E15B523907244771640734 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		MovingObject__ctor_m38E8072FE2E1134B90E1687C927B3CE128B221A1(__this, /*hidden argument*/NULL);
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
// System.Void Completed.Enemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Start_m981A4BB40B7E6793F99A5F20A72BE078E3AFF86D (Enemy_tA07E200A067AE652E45412372BA529A68E2DDAC6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.instance.AddEnemyToList (this);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_il2cpp_TypeInfo_var);
		GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * L_0 = ((GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_il2cpp_TypeInfo_var))->get_instance_7();
		NullCheck(L_0);
		GameManager_AddEnemyToList_m3D23C9F8E5367DE9CD7D06D1F04913730A3FEA15(L_0, __this, /*hidden argument*/NULL);
		// animator = GetComponent<Animator> ();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1;
		L_1 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_animator_13(L_1);
		// target = GameObject.FindGameObjectWithTag ("Player").transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		__this->set_target_14(L_3);
		// base.Start ();
		MovingObject_Start_m89A6C77020948513DB11F517F4940B03829CFB5F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Completed.Enemy::MoveEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_MoveEnemy_m9DDBFC877A56D5D0AA6AB488D44F4E1511D6A325 (Enemy_tA07E200A067AE652E45412372BA529A68E2DDAC6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MovingObject_AttemptMove_TisPlayer_t9765AA53EA79B78F740AAE0F25EE2647584E717C_mE61BB4A3C502DE50BFAF56851F96E7614C9E2D6D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// int xDir = 0;
		V_0 = 0;
		// int yDir = 0;
		V_1 = 0;
		// if(Mathf.Abs (target.position.x - transform.position.x) < float.Epsilon)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_target_14();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		float L_6;
		L_6 = fabsf(((float)il2cpp_codegen_subtract((float)L_2, (float)L_5)));
		V_2 = (bool)((((float)L_6) < ((float)(1.40129846E-45f)))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_005f;
		}
	}
	{
		// yDir = target.position.y > transform.position.y ? 1 : -1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = __this->get_target_14();
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_y_3();
		if ((((float)L_10) > ((float)L_13)))
		{
			goto IL_005b;
		}
	}
	{
		G_B4_0 = (-1);
		goto IL_005c;
	}

IL_005b:
	{
		G_B4_0 = 1;
	}

IL_005c:
	{
		V_1 = G_B4_0;
		goto IL_0086;
	}

IL_005f:
	{
		// xDir = target.position.x > transform.position.x ? 1 : -1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = __this->get_target_14();
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_x_2();
		if ((((float)L_16) > ((float)L_19)))
		{
			goto IL_0084;
		}
	}
	{
		G_B8_0 = (-1);
		goto IL_0085;
	}

IL_0084:
	{
		G_B8_0 = 1;
	}

IL_0085:
	{
		V_0 = G_B8_0;
	}

IL_0086:
	{
		// AttemptMove <Player> (xDir, yDir);
		int32_t L_20 = V_0;
		int32_t L_21 = V_1;
		GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(MovingObject_AttemptMove_TisPlayer_t9765AA53EA79B78F740AAE0F25EE2647584E717C_mE61BB4A3C502DE50BFAF56851F96E7614C9E2D6D_RuntimeMethod_var, __this, L_20, L_21);
		// }
		return;
	}
}
// System.Void Completed.Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_m91B78A7A526F4246F37B75D3D6FE4F299CCD0A36 (Enemy_tA07E200A067AE652E45412372BA529A68E2DDAC6 * __this, const RuntimeMethod* method)
{
	{
		MovingObject__ctor_m7161BC828CFE34CC18C6334031F588A1141EA8E2(__this, /*hidden argument*/NULL);
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
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m22F42B2A82708B10F652CAD8F2E0A4767110FF30 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoardManager_t3985DB311F238FF4878376C70A779A0C07933F91_mBA60C5C71DBB87AD63980EFFB0ACED510ADFE67A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m264424C12AE2901EAD718720F579BDA200FCC721_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (instance == null)
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// instance = this;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_instance_8(__this);
		goto IL_0033;
	}

IL_0018:
	{
		// else if (instance != this)
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_3 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, __this, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_6, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_7, /*hidden argument*/NULL);
		// enemies = new List<Enemy>();
		List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * L_8 = (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C *)il2cpp_codegen_object_new(List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C_il2cpp_TypeInfo_var);
		List_1__ctor_m264424C12AE2901EAD718720F579BDA200FCC721(L_8, /*hidden argument*/List_1__ctor_m264424C12AE2901EAD718720F579BDA200FCC721_RuntimeMethod_var);
		__this->set_enemies_11(L_8);
		// boardScript = GetComponent<BoardManager>();
		BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * L_9;
		L_9 = Component_GetComponent_TisBoardManager_t3985DB311F238FF4878376C70A779A0C07933F91_mBA60C5C71DBB87AD63980EFFB0ACED510ADFE67A(__this, /*hidden argument*/Component_GetComponent_TisBoardManager_t3985DB311F238FF4878376C70A779A0C07933F91_mBA60C5C71DBB87AD63980EFFB0ACED510ADFE67A_RuntimeMethod_var);
		__this->set_boardScript_9(L_9);
		// InitGame();
		GameManager_InitGame_m4E4EDB5C15F37DFFC40895B4980CA7CCEAB3407D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::OnLevelWasLoaded(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnLevelWasLoaded_m46304DC255D38F490D62A708F1E5E152883A4FE6 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// level++;
		int32_t L_0 = __this->get_level_15();
		__this->set_level_15(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// InitGame();
		GameManager_InitGame_m4E4EDB5C15F37DFFC40895B4980CA7CCEAB3407D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::InitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_InitGame_m4E4EDB5C15F37DFFC40895B4980CA7CCEAB3407D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m61F957FEB6659515C4F68682524D31F7D9C5DA2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral406571F3CE85E4DDA59A9AEAAEFAB85852D1CC08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral432640E3BCCFBDDB088EC8A3AE94E2C2995F96EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral908221B36A67B730DB9A759C8B7A77FE8D4283C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1179CA563495DAD3C4398E39ED24AC0BDB025A4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// doingSetup = true;
		__this->set_doingSetup_7((bool)1);
		// levelImage = GameObject.Find("LevelImage");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral406571F3CE85E4DDA59A9AEAAEFAB85852D1CC08, /*hidden argument*/NULL);
		__this->set_levelImage_6(L_0);
		// levelText = GameObject.Find("LevelText").GetComponent<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral908221B36A67B730DB9A759C8B7A77FE8D4283C2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2;
		L_2 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_1, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		__this->set_levelText_5(L_2);
		// levelText.text = "Day " + level;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_levelText_5();
		int32_t* L_4 = __this->get_address_of_level_15();
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral432640E3BCCFBDDB088EC8A3AE94E2C2995F96EA, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_6);
		// levelImage.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_levelImage_6();
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)1, /*hidden argument*/NULL);
		// Invoke("HideLevelImage", levelStartDelay);
		float L_8 = __this->get_levelStartDelay_4();
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralB1179CA563495DAD3C4398E39ED24AC0BDB025A4, L_8, /*hidden argument*/NULL);
		// enemies.Clear();
		List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * L_9 = __this->get_enemies_11();
		NullCheck(L_9);
		List_1_Clear_m61F957FEB6659515C4F68682524D31F7D9C5DA2A(L_9, /*hidden argument*/List_1_Clear_m61F957FEB6659515C4F68682524D31F7D9C5DA2A_RuntimeMethod_var);
		// boardScript.SetupScene(level);
		BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * L_10 = __this->get_boardScript_9();
		int32_t L_11 = __this->get_level_15();
		NullCheck(L_10);
		BoardManager_SetupScene_mFB52812FBF77FFF6DCFB23B3C2C921FD7303C47C(L_10, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::HideLevelImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_HideLevelImage_m6B50848F46798A4C7E12D4401DD88847ECD3D7CD (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// levelImage.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_levelImage_6();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// doingSetup = false;
		__this->set_doingSetup_7((bool)0);
		// }
		return;
	}
}
// System.Void GameManager::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameOver_m402A112370B58EBA3B2171FABC09467E1ED28E9A (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral729AAAB7476A9A79F6553A6C4B43D3BBDC045178);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8E67B30F63D09C6F3CA44E5BC634472183C61EC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// levelText.text = "After " + level + " days, you starved.";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_levelText_5();
		int32_t* L_1 = __this->get_address_of_level_15();
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_1, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral729AAAB7476A9A79F6553A6C4B43D3BBDC045178, L_2, _stringLiteralF8E67B30F63D09C6F3CA44E5BC634472183C61EC, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// levelImage.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_levelImage_6();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// enabled = false;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_mC9303BA7C3117BD861F49F8E36151CC52117E6C1 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		// if (playersTurn || enemiesMoving || doingSetup)
		bool L_0 = __this->get_playersTurn_14();
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		bool L_1 = __this->get_enemiesMoving_12();
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		bool L_2 = __this->get_doingSetup_7();
		G_B4_0 = ((int32_t)(L_2));
		goto IL_001a;
	}

IL_0019:
	{
		G_B4_0 = 1;
	}

IL_001a:
	{
		V_0 = (bool)G_B4_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// return;
		goto IL_002d;
	}

IL_0020:
	{
		// StartCoroutine(MoveEnemies());
		RuntimeObject* L_4;
		L_4 = GameManager_MoveEnemies_m37D946D3F0876B1701A271210C51921850CFA930(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5;
		L_5 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_4, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void GameManager::AddEnemyToList(Enemy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_AddEnemyToList_mA112B59DD65068F09ACF0CC996EEBABB1C165025 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * ___script0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m51152AE1B99DCCA528E426B5AB47C84CA9CE03BC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enemies.Add(script);
		List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * L_0 = __this->get_enemies_11();
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_1 = ___script0;
		NullCheck(L_0);
		List_1_Add_m51152AE1B99DCCA528E426B5AB47C84CA9CE03BC(L_0, L_1, /*hidden argument*/List_1_Add_m51152AE1B99DCCA528E426B5AB47C84CA9CE03BC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::MoveEnemies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_MoveEnemies_m37D946D3F0876B1701A271210C51921850CFA930 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMoveEnemiesU3Ed__19_tAA067E6A4E7E5C2077BAE3EA8F957DD7052EB5EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMoveEnemiesU3Ed__19_tAA067E6A4E7E5C2077BAE3EA8F957DD7052EB5EB * L_0 = (U3CMoveEnemiesU3Ed__19_tAA067E6A4E7E5C2077BAE3EA8F957DD7052EB5EB *)il2cpp_codegen_object_new(U3CMoveEnemiesU3Ed__19_tAA067E6A4E7E5C2077BAE3EA8F957DD7052EB5EB_il2cpp_TypeInfo_var);
		U3CMoveEnemiesU3Ed__19__ctor_mDBB02CB501620C9E826CFE75B4A931B5FACF3458(L_0, 0, /*hidden argument*/NULL);
		U3CMoveEnemiesU3Ed__19_tAA067E6A4E7E5C2077BAE3EA8F957DD7052EB5EB * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// public float levelStartDelay = 2f;
		__this->set_levelStartDelay_4((2.0f));
		// public float turnDelay = .1f;
		__this->set_turnDelay_10((0.100000001f));
		// public int playerFoodPoints = 100;
		__this->set_playerFoodPoints_13(((int32_t)100));
		// [HideInInspector] public bool playersTurn = true;
		__this->set_playersTurn_14((bool)1);
		// private int level = 1;
		__this->set_level_15(1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__cctor_m0872BB5B2E20B9183F004EB81D5129608114D285 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GameManager instance = null;
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_instance_8((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 *)NULL);
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
// System.Void Completed.GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m24ECD77376E9D81564AC0A24A012C52FEB536ADC (GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6_m782989E200A4283B4E8E1EFDAA0E03C35E787FB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1F185561D8333E252EDC12EE74D083A255B3AB19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4B15F5BE07D169BC8ECAA69E8495524C4CF45663_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (instance == null)
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_il2cpp_TypeInfo_var);
		GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * L_0 = ((GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_il2cpp_TypeInfo_var))->get_instance_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// instance = this;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_il2cpp_TypeInfo_var);
		((GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_il2cpp_TypeInfo_var))->set_instance_7(__this);
		goto IL_0033;
	}

IL_0018:
	{
		// else if (instance != this)
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_il2cpp_TypeInfo_var);
		GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * L_3 = ((GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_il2cpp_TypeInfo_var))->get_instance_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, __this, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_6, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_7, /*hidden argument*/NULL);
		// enemies = new List<Enemy>();
		List_1_t4B15F5BE07D169BC8ECAA69E8495524C4CF45663 * L_8 = (List_1_t4B15F5BE07D169BC8ECAA69E8495524C4CF45663 *)il2cpp_codegen_object_new(List_1_t4B15F5BE07D169BC8ECAA69E8495524C4CF45663_il2cpp_TypeInfo_var);
		List_1__ctor_m1F185561D8333E252EDC12EE74D083A255B3AB19(L_8, /*hidden argument*/List_1__ctor_m1F185561D8333E252EDC12EE74D083A255B3AB19_RuntimeMethod_var);
		__this->set_enemies_13(L_8);
		// boardScript = GetComponent<BoardManager>();
		BoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6 * L_9;
		L_9 = Component_GetComponent_TisBoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6_m782989E200A4283B4E8E1EFDAA0E03C35E787FB7(__this, /*hidden argument*/Component_GetComponent_TisBoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6_m782989E200A4283B4E8E1EFDAA0E03C35E787FB7_RuntimeMethod_var);
		__this->set_boardScript_11(L_9);
		// InitGame();
		GameManager_InitGame_mED4A7BEFA32AFE6C9665E4122CA20BE03848D03A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Completed.GameManager::CallbackInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CallbackInitialization_m9331EE5EED2AF372A2A5FC5C7A078AC6BA746173 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_OnSceneLoaded_m9F2D532AFFB248F9D521BD8FEEA6B9400783EA6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.sceneLoaded += OnSceneLoaded;
		UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * L_0 = (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 *)il2cpp_codegen_object_new(UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0(L_0, NULL, (intptr_t)((intptr_t)GameManager_OnSceneLoaded_m9F2D532AFFB248F9D521BD8FEEA6B9400783EA6F_RuntimeMethod_var), /*hidden argument*/UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_add_sceneLoaded_m54990A485E2E66739E31090BDC3A4C01EF7729BA(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Completed.GameManager::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnSceneLoaded_m9F2D532AFFB248F9D521BD8FEEA6B9400783EA6F (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg00, int32_t ___arg11, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance.level++;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_il2cpp_TypeInfo_var);
		GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * L_0 = ((GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_il2cpp_TypeInfo_var))->get_instance_7();
		GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->get_level_12();
		NullCheck(L_1);
		L_1->set_level_12(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		// instance.InitGame();
		GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * L_3 = ((GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_il2cpp_TypeInfo_var))->get_instance_7();
		NullCheck(L_3);
		GameManager_InitGame_mED4A7BEFA32AFE6C9665E4122CA20BE03848D03A(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Completed.GameManager::InitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_InitGame_mED4A7BEFA32AFE6C9665E4122CA20BE03848D03A (GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC40F2C3BA437A485D033403FC1AA748D5C70CD8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral406571F3CE85E4DDA59A9AEAAEFAB85852D1CC08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral432640E3BCCFBDDB088EC8A3AE94E2C2995F96EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral908221B36A67B730DB9A759C8B7A77FE8D4283C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1179CA563495DAD3C4398E39ED24AC0BDB025A4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// doingSetup = true;
		__this->set_doingSetup_15((bool)1);
		// levelImage = GameObject.Find("LevelImage");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral406571F3CE85E4DDA59A9AEAAEFAB85852D1CC08, /*hidden argument*/NULL);
		__this->set_levelImage_10(L_0);
		// levelText = GameObject.Find("LevelText").GetComponent<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral908221B36A67B730DB9A759C8B7A77FE8D4283C2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2;
		L_2 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_1, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		__this->set_levelText_9(L_2);
		// levelText.text = "Day " + level;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_levelText_9();
		int32_t* L_4 = __this->get_address_of_level_12();
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral432640E3BCCFBDDB088EC8A3AE94E2C2995F96EA, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_6);
		// levelImage.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_levelImage_10();
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)1, /*hidden argument*/NULL);
		// Invoke("HideLevelImage", levelStartDelay);
		float L_8 = __this->get_levelStartDelay_4();
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralB1179CA563495DAD3C4398E39ED24AC0BDB025A4, L_8, /*hidden argument*/NULL);
		// enemies.Clear();
		List_1_t4B15F5BE07D169BC8ECAA69E8495524C4CF45663 * L_9 = __this->get_enemies_13();
		NullCheck(L_9);
		List_1_Clear_mC40F2C3BA437A485D033403FC1AA748D5C70CD8E(L_9, /*hidden argument*/List_1_Clear_mC40F2C3BA437A485D033403FC1AA748D5C70CD8E_RuntimeMethod_var);
		// boardScript.SetupScene(level);
		BoardManager_t5C8E811DDF5189AB818EC6EF4E9AF16DD2B66ED6 * L_10 = __this->get_boardScript_11();
		int32_t L_11 = __this->get_level_12();
		NullCheck(L_10);
		BoardManager_SetupScene_mA22B43BE74DBA41AEF9A95E168ED37903E7EFBAD(L_10, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Completed.GameManager::HideLevelImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_HideLevelImage_mCB203EB55053927FCF9FB9F37D1C9BD0B505EC0F (GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * __this, const RuntimeMethod* method)
{
	{
		// levelImage.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_levelImage_10();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// doingSetup = false;
		__this->set_doingSetup_15((bool)0);
		// }
		return;
	}
}
// System.Void Completed.GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_m5FC5399566531AC3843D16460C75B69B9870D81A (GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		// if(playersTurn || enemiesMoving || doingSetup)
		bool L_0 = __this->get_playersTurn_8();
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		bool L_1 = __this->get_enemiesMoving_14();
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		bool L_2 = __this->get_doingSetup_15();
		G_B4_0 = ((int32_t)(L_2));
		goto IL_001a;
	}

IL_0019:
	{
		G_B4_0 = 1;
	}

IL_001a:
	{
		V_0 = (bool)G_B4_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// return;
		goto IL_002d;
	}

IL_0020:
	{
		// StartCoroutine (MoveEnemies ());
		RuntimeObject* L_4;
		L_4 = GameManager_MoveEnemies_m99DCFD3AB7869DBCF7CC816E9CB3E509A818799C(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5;
		L_5 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_4, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Completed.GameManager::AddEnemyToList(Completed.Enemy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_AddEnemyToList_m3D23C9F8E5367DE9CD7D06D1F04913730A3FEA15 (GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * __this, Enemy_tA07E200A067AE652E45412372BA529A68E2DDAC6 * ___script0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF62C152B3AA6E5CAFA4D2FA96E98091E8B7929A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enemies.Add(script);
		List_1_t4B15F5BE07D169BC8ECAA69E8495524C4CF45663 * L_0 = __this->get_enemies_13();
		Enemy_tA07E200A067AE652E45412372BA529A68E2DDAC6 * L_1 = ___script0;
		NullCheck(L_0);
		List_1_Add_mF62C152B3AA6E5CAFA4D2FA96E98091E8B7929A2(L_0, L_1, /*hidden argument*/List_1_Add_mF62C152B3AA6E5CAFA4D2FA96E98091E8B7929A2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Completed.GameManager::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameOver_m1F3FCA54C6303ECDEB2FC323055E0839C4F20803 (GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral729AAAB7476A9A79F6553A6C4B43D3BBDC045178);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8E67B30F63D09C6F3CA44E5BC634472183C61EC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// levelText.text = "After " + level + " days, you starved.";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_levelText_9();
		int32_t* L_1 = __this->get_address_of_level_12();
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_1, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral729AAAB7476A9A79F6553A6C4B43D3BBDC045178, L_2, _stringLiteralF8E67B30F63D09C6F3CA44E5BC634472183C61EC, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// levelImage.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_levelImage_10();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// enabled = false;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Completed.GameManager::MoveEnemies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_MoveEnemies_m99DCFD3AB7869DBCF7CC816E9CB3E509A818799C (GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMoveEnemiesU3Ed__20_tEB7D40440BA47032AB3D9CB8A0E9B33A9A6EB317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMoveEnemiesU3Ed__20_tEB7D40440BA47032AB3D9CB8A0E9B33A9A6EB317 * L_0 = (U3CMoveEnemiesU3Ed__20_tEB7D40440BA47032AB3D9CB8A0E9B33A9A6EB317 *)il2cpp_codegen_object_new(U3CMoveEnemiesU3Ed__20_tEB7D40440BA47032AB3D9CB8A0E9B33A9A6EB317_il2cpp_TypeInfo_var);
		U3CMoveEnemiesU3Ed__20__ctor_m560576D693B2C84EB2D4E5BA3F37B256357DF668(L_0, 0, /*hidden argument*/NULL);
		U3CMoveEnemiesU3Ed__20_tEB7D40440BA47032AB3D9CB8A0E9B33A9A6EB317 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Completed.GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_m215997B55E169BE129636C834296CC4A4B03F321 (GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * __this, const RuntimeMethod* method)
{
	{
		// public float levelStartDelay = 2f;                        //Time to wait before starting level, in seconds.
		__this->set_levelStartDelay_4((2.0f));
		// public float turnDelay = 0.1f;                            //Delay between each Player turn.
		__this->set_turnDelay_5((0.100000001f));
		// public int playerFoodPoints = 100;                        //Starting value for Player food points.
		__this->set_playerFoodPoints_6(((int32_t)100));
		// [HideInInspector] public bool playersTurn = true;        //Boolean to check if it's players turn, hidden in inspector but public.
		__this->set_playersTurn_8((bool)1);
		// private int level = 1;                                    //Current level number, expressed in game as "Day 1".
		__this->set_level_12(1);
		// private bool doingSetup = true;                            //Boolean to check if we're setting up board, prevent Player from moving during setup.
		__this->set_doingSetup_15((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Completed.GameManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__cctor_m5F1A73F33DA373B78268472679DA8EF8770A377A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GameManager instance = null;                //Static instance of GameManager which allows it to be accessed by any other script.
		((GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_il2cpp_TypeInfo_var))->set_instance_7((GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 *)NULL);
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
// System.Void Loader::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loader_Awake_mE57C5BB0D9E4488680DA44DE586C1C1710006748 (Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (GameManager.instance == null)
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// Instantiate(gameManager);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_gameManager_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_3, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void Loader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loader__ctor_m15D78DFE09D5A9C562B7E58B0D4C392427D1E674 (Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Completed.Loader::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loader_Awake_m150B9DEDCA9E8A841D17AB5333E80F6ED3BE4C85 (Loader_tE235FAB0403EFDC312901F5718E600E2813E8675 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (GameManager.instance == null)
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_il2cpp_TypeInfo_var);
		GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * L_0 = ((GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_il2cpp_TypeInfo_var))->get_instance_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// Instantiate(gameManager);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_gameManager_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_3, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
	}

IL_001c:
	{
		// if (SoundManager.instance == null)
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_il2cpp_TypeInfo_var);
		SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51 * L_5 = ((SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_il2cpp_TypeInfo_var))->get_instance_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		// Instantiate(soundManager);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_soundManager_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_8, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void Completed.Loader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loader__ctor_m5DD9918211A08B35183D72BFBBE865D1F6EE4F4C (Loader_tE235FAB0403EFDC312901F5718E600E2813E8675 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MovingObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingObject_Start_m8CFA40B703119CCC5B0EC7C40D7E78783A34EA5F (MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// boxCollider = GetComponent <BoxCollider2D> ();
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_0;
		L_0 = Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		__this->set_boxCollider_6(L_0);
		// rb2D = GetComponent <Rigidbody2D> ();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_1;
		L_1 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rb2D_7(L_1);
		// inverseMoveTime = 1f / moveTime;
		float L_2 = __this->get_moveTime_4();
		__this->set_inverseMoveTime_8(((float)((float)(1.0f)/(float)L_2)));
		// }
		return;
	}
}
// System.Boolean MovingObject::Move(System.Int32,System.Int32,UnityEngine.RaycastHit2D&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MovingObject_Move_mE513C0E1FDD7D75E65E07EB7E7DEF31FD664088D (MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C * __this, int32_t ___xDir0, int32_t ___yDir1, RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * ___hit2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	{
		// Vector2 start = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// Vector2 end = start + new Vector2 (xDir, yDir);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = V_0;
		int32_t L_4 = ___xDir0;
		int32_t L_5 = ___yDir1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)((float)L_4)), ((float)((float)L_5)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_3, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// boxCollider.enabled = false;
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_8 = __this->get_boxCollider_6();
		NullCheck(L_8);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_8, (bool)0, /*hidden argument*/NULL);
		// hit = Physics2D.Linecast (start, end, blockingLayer);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * L_9 = ___hit2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = V_1;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_12 = __this->get_blockingLayer_5();
		int32_t L_13;
		L_13 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_14;
		L_14 = Physics2D_Linecast_mD982886413BF081441FDFA937E83B5E661C3B622(L_10, L_11, L_13, /*hidden argument*/NULL);
		*(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)L_9 = L_14;
		// boxCollider.enabled = true;
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_15 = __this->get_boxCollider_6();
		NullCheck(L_15);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_15, (bool)1, /*hidden argument*/NULL);
		// if(hit.transform == null)
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * L_16 = ___hit2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_17, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_2 = L_18;
		bool L_19 = V_2;
		if (!L_19)
		{
			goto IL_007c;
		}
	}
	{
		// StartCoroutine (SmoothMovement (end));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_20, /*hidden argument*/NULL);
		RuntimeObject* L_22;
		L_22 = MovingObject_SmoothMovement_m94963AEBAA322DAA3E29C157E1C213961D9BF8CD(__this, L_21, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_23;
		L_23 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_22, /*hidden argument*/NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_0080;
	}

IL_007c:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_0080;
	}

IL_0080:
	{
		// }
		bool L_24 = V_3;
		return L_24;
	}
}
// System.Collections.IEnumerator MovingObject::SmoothMovement(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MovingObject_SmoothMovement_m94963AEBAA322DAA3E29C157E1C213961D9BF8CD (MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823 * L_0 = (U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823 *)il2cpp_codegen_object_new(U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823_il2cpp_TypeInfo_var);
		U3CSmoothMovementU3Ed__7__ctor_mBFA2F4D47B7E7DFF0F4897DE7AA3CE9D51B86026(L_0, 0, /*hidden argument*/NULL);
		U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823 * L_2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___end0;
		NullCheck(L_2);
		L_2->set_end_2(L_3);
		return L_2;
	}
}
// System.Void MovingObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingObject__ctor_m38E8072FE2E1134B90E1687C927B3CE128B221A1 (MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C * __this, const RuntimeMethod* method)
{
	{
		// public float moveTime = 0.1f;       //Time it will take object to move, in seconds.
		__this->set_moveTime_4((0.100000001f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Completed.MovingObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingObject_Start_m89A6C77020948513DB11F517F4940B03829CFB5F (MovingObject_tE52CA43A917730F49A992474C77FDF2C97A1E024 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// boxCollider = GetComponent <BoxCollider2D> ();
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_0;
		L_0 = Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		__this->set_boxCollider_6(L_0);
		// rb2D = GetComponent <Rigidbody2D> ();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_1;
		L_1 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rb2D_7(L_1);
		// inverseMoveTime = 1f / moveTime;
		float L_2 = __this->get_moveTime_4();
		__this->set_inverseMoveTime_8(((float)((float)(1.0f)/(float)L_2)));
		// }
		return;
	}
}
// System.Boolean Completed.MovingObject::Move(System.Int32,System.Int32,UnityEngine.RaycastHit2D&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MovingObject_Move_mC10CF0C856FF793737DC60BF156889D9573FC96D (MovingObject_tE52CA43A917730F49A992474C77FDF2C97A1E024 * __this, int32_t ___xDir0, int32_t ___yDir1, RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * ___hit2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	{
		// Vector2 start = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// Vector2 end = start + new Vector2 (xDir, yDir);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = V_0;
		int32_t L_4 = ___xDir0;
		int32_t L_5 = ___yDir1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)((float)L_4)), ((float)((float)L_5)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_3, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// boxCollider.enabled = false;
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_8 = __this->get_boxCollider_6();
		NullCheck(L_8);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_8, (bool)0, /*hidden argument*/NULL);
		// hit = Physics2D.Linecast (start, end, blockingLayer);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * L_9 = ___hit2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = V_1;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_12 = __this->get_blockingLayer_5();
		int32_t L_13;
		L_13 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_14;
		L_14 = Physics2D_Linecast_mD982886413BF081441FDFA937E83B5E661C3B622(L_10, L_11, L_13, /*hidden argument*/NULL);
		*(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)L_9 = L_14;
		// boxCollider.enabled = true;
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_15 = __this->get_boxCollider_6();
		NullCheck(L_15);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_15, (bool)1, /*hidden argument*/NULL);
		// if(hit.transform == null && !isMoving)
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * L_16 = ___hit2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_17, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_006d;
		}
	}
	{
		bool L_19 = __this->get_isMoving_9();
		G_B3_0 = ((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		goto IL_006e;
	}

IL_006d:
	{
		G_B3_0 = 0;
	}

IL_006e:
	{
		V_2 = (bool)G_B3_0;
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_008a;
		}
	}
	{
		// StartCoroutine (SmoothMovement (end));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_21, /*hidden argument*/NULL);
		RuntimeObject* L_23;
		L_23 = MovingObject_SmoothMovement_m2D62BD48456CA5441A084F5C0CACA939ECB7C743(__this, L_22, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_24;
		L_24 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_23, /*hidden argument*/NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_008e;
	}

IL_008a:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_008e;
	}

IL_008e:
	{
		// }
		bool L_25 = V_3;
		return L_25;
	}
}
// System.Collections.IEnumerator Completed.MovingObject::SmoothMovement(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MovingObject_SmoothMovement_m2D62BD48456CA5441A084F5C0CACA939ECB7C743 (MovingObject_tE52CA43A917730F49A992474C77FDF2C97A1E024 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSmoothMovementU3Ed__8_t0DB90D1365DE00F6486A3948E33911675EAFE307_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSmoothMovementU3Ed__8_t0DB90D1365DE00F6486A3948E33911675EAFE307 * L_0 = (U3CSmoothMovementU3Ed__8_t0DB90D1365DE00F6486A3948E33911675EAFE307 *)il2cpp_codegen_object_new(U3CSmoothMovementU3Ed__8_t0DB90D1365DE00F6486A3948E33911675EAFE307_il2cpp_TypeInfo_var);
		U3CSmoothMovementU3Ed__8__ctor_m422A03A963E8A43B290676741C2DDAD02F22B341(L_0, 0, /*hidden argument*/NULL);
		U3CSmoothMovementU3Ed__8_t0DB90D1365DE00F6486A3948E33911675EAFE307 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CSmoothMovementU3Ed__8_t0DB90D1365DE00F6486A3948E33911675EAFE307 * L_2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___end0;
		NullCheck(L_2);
		L_2->set_end_2(L_3);
		return L_2;
	}
}
// System.Void Completed.MovingObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingObject__ctor_m7161BC828CFE34CC18C6334031F588A1141EA8E2 (MovingObject_tE52CA43A917730F49A992474C77FDF2C97A1E024 * __this, const RuntimeMethod* method)
{
	{
		// public float moveTime = 0.1f;            //Time it will take object to move, in seconds.
		__this->set_moveTime_4((0.100000001f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mBD692B64AAC791B93A589E7D3596F36787EAF021 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE38CC4C1D409C9107F8E8C4C622F91CC499C2511);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0;
		L_0 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_animator_13(L_0);
		// food = GameManager.instance.playerFoodPoints;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_8();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_playerFoodPoints_13();
		__this->set_food_14(L_2);
		// foodText.text = "Food: " + food;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_foodText_15();
		int32_t* L_4 = __this->get_address_of_food_14();
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralE38CC4C1D409C9107F8E8C4C622F91CC499C2511, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_6);
		// base.Start ();
		MovingObject_Start_m8CFA40B703119CCC5B0EC7C40D7E78783A34EA5F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnDisable_m30E8EBBA16912F424FA6070B69F7D9C73770E3AC (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.instance.playerFoodPoints = food;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_8();
		int32_t L_1 = __this->get_food_14();
		NullCheck(L_0);
		L_0->set_playerFoodPoints_13(L_1);
		// }
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_mBA04F1D6FE3C18037EA95DFAEEAA9977BFD49CD3 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MovingObject_AttemptMove_TisWall_t75B0B5D0D103AF52A80C03FFB000620BD9005D4C_m659FBCF546070DE383A553AC2689F33446747539_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	bool V_10 = false;
	bool V_11 = false;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B23_0 = 0;
	{
		// if(!GameManager.instance.playersTurn) return;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_8();
		NullCheck(L_0);
		bool L_1 = L_0->get_playersTurn_14();
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// if(!GameManager.instance.playersTurn) return;
		goto IL_0119;
	}

IL_0017:
	{
		// int horizontal = 0;      //Used to store the horizontal move direction.
		V_0 = 0;
		// int vertical = 0;        //Used to store the vertical move direction.
		V_1 = 0;
		// if (Input.touchCount > 0)
		int32_t L_3;
		L_3 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_00fe;
		}
	}
	{
		// Touch myTouch = Input.touches[0];
		TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* L_5;
		L_5 = Input_get_touches_m26E3034CAE32931E59A480327A3CF4BFC2045E8F(/*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = 0;
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = L_7;
		// if (myTouch.phase == TouchPhase.Began)
		int32_t L_8;
		L_8 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_4), /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_005c;
		}
	}
	{
		// touchOrigin = myTouch.position;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		L_10 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_4), /*hidden argument*/NULL);
		__this->set_touchOrigin_23(L_10);
		goto IL_00fd;
	}

IL_005c:
	{
		// else if (myTouch.phase == TouchPhase.Ended && touchOrigin.x >= 0)
		int32_t L_11;
		L_11 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_4), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)3))))
		{
			goto IL_007d;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_12 = __this->get_address_of_touchOrigin_23();
		float L_13 = L_12->get_x_0();
		G_B8_0 = ((((int32_t)((!(((float)L_13) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_007e;
	}

IL_007d:
	{
		G_B8_0 = 0;
	}

IL_007e:
	{
		V_6 = (bool)G_B8_0;
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_00fd;
		}
	}
	{
		// Vector2 touchEnd = myTouch.position;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15;
		L_15 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_4), /*hidden argument*/NULL);
		V_7 = L_15;
		// float x = touchEnd.x - touchOrigin.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16 = V_7;
		float L_17 = L_16.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_18 = __this->get_address_of_touchOrigin_23();
		float L_19 = L_18->get_x_0();
		V_8 = ((float)il2cpp_codegen_subtract((float)L_17, (float)L_19));
		// float y = touchEnd.y - touchOrigin.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20 = V_7;
		float L_21 = L_20.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_22 = __this->get_address_of_touchOrigin_23();
		float L_23 = L_22->get_y_1();
		V_9 = ((float)il2cpp_codegen_subtract((float)L_21, (float)L_23));
		// touchOrigin.x = -1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_24 = __this->get_address_of_touchOrigin_23();
		L_24->set_x_0((-1.0f));
		// if (Mathf.Abs(x) > Mathf.Abs(y))
		float L_25 = V_8;
		float L_26;
		L_26 = fabsf(L_25);
		float L_27 = V_9;
		float L_28;
		L_28 = fabsf(L_27);
		V_10 = (bool)((((float)L_26) > ((float)L_28))? 1 : 0);
		bool L_29 = V_10;
		if (!L_29)
		{
			goto IL_00ee;
		}
	}
	{
		// horizontal = x > 0 ? 1 : -1;
		float L_30 = V_8;
		if ((((float)L_30) > ((float)(0.0f))))
		{
			goto IL_00ea;
		}
	}
	{
		G_B13_0 = (-1);
		goto IL_00eb;
	}

IL_00ea:
	{
		G_B13_0 = 1;
	}

IL_00eb:
	{
		V_0 = G_B13_0;
		goto IL_00fc;
	}

IL_00ee:
	{
		// vertical = y > 0 ? 1 : -1;
		float L_31 = V_9;
		if ((((float)L_31) > ((float)(0.0f))))
		{
			goto IL_00fa;
		}
	}
	{
		G_B17_0 = (-1);
		goto IL_00fb;
	}

IL_00fa:
	{
		G_B17_0 = 1;
	}

IL_00fb:
	{
		V_1 = G_B17_0;
	}

IL_00fc:
	{
	}

IL_00fd:
	{
	}

IL_00fe:
	{
		// if(horizontal != 0 || vertical != 0)
		int32_t L_32 = V_0;
		if (L_32)
		{
			goto IL_0107;
		}
	}
	{
		int32_t L_33 = V_1;
		G_B23_0 = ((!(((uint32_t)L_33) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0108;
	}

IL_0107:
	{
		G_B23_0 = 1;
	}

IL_0108:
	{
		V_11 = (bool)G_B23_0;
		bool L_34 = V_11;
		if (!L_34)
		{
			goto IL_0119;
		}
	}
	{
		// AttemptMove<Wall> (horizontal, vertical);
		int32_t L_35 = V_0;
		int32_t L_36 = V_1;
		GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(MovingObject_AttemptMove_TisWall_t75B0B5D0D103AF52A80C03FFB000620BD9005D4C_m659FBCF546070DE383A553AC2689F33446747539_RuntimeMethod_var, __this, L_35, L_36);
	}

IL_0119:
	{
		// }
		return;
	}
}
// System.Void Player::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnTriggerEnter2D_mAF357F7244427CB9EADB81B5A6C4F0AF481641D0 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ADF18071E31ABDFC28ACBB5EB626FB20984EB9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral687D9BA523E32A2B8A4FEAD5E5EAE89D357E1420);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral838E394589B5693706685699154545855BEAE0B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF117C6985226D7151C8D72C310304BE920887ADC);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if(other.tag == "Exit")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteral687D9BA523E32A2B8A4FEAD5E5EAE89D357E1420, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// Invoke ("Restart", restartLevelDelay);
		float L_4 = __this->get_restartLevelDelay_9();
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral838E394589B5693706685699154545855BEAE0B2, L_4, /*hidden argument*/NULL);
		// enabled = false;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
		goto IL_014f;
	}

IL_0036:
	{
		// else if(other.tag == "Food")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_5 = ___other0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, _stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B, /*hidden argument*/NULL);
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_00c5;
		}
	}
	{
		// food += pointsPerFood;
		int32_t L_9 = __this->get_food_14();
		int32_t L_10 = __this->get_pointsPerFood_10();
		__this->set_food_14(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10)));
		// foodText.text = "+" + pointsPerFood + " Food: " + food;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11 = __this->get_foodText_15();
		int32_t* L_12 = __this->get_address_of_pointsPerFood_10();
		String_t* L_13;
		L_13 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_12, /*hidden argument*/NULL);
		int32_t* L_14 = __this->get_address_of_food_14();
		String_t* L_15;
		L_15 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_14, /*hidden argument*/NULL);
		String_t* L_16;
		L_16 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952, L_13, _stringLiteral0ADF18071E31ABDFC28ACBB5EB626FB20984EB9D, L_15, /*hidden argument*/NULL);
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_16);
		// SoundManager.instance.RandomizeSfx(eatSound1, eatSound2);
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_17 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_6();
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_18 = (AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE*)(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE*)SZArrayNew(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE_il2cpp_TypeInfo_var, (uint32_t)2);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_19 = L_18;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_20 = __this->get_eatSound1_18();
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)L_20);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_21 = L_19;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_22 = __this->get_eatSound2_19();
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)L_22);
		NullCheck(L_17);
		SoundManager_RandomizeSfx_m25C53C31752018BD583EA0DD984D9FD6574C0E58(L_17, L_21, /*hidden argument*/NULL);
		// other.gameObject.SetActive (false);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_23 = ___other0;
		NullCheck(L_23);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_24, (bool)0, /*hidden argument*/NULL);
		goto IL_014f;
	}

IL_00c5:
	{
		// else if(other.tag == "Soda")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_25 = ___other0;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_25, /*hidden argument*/NULL);
		bool L_27;
		L_27 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_26, _stringLiteralF117C6985226D7151C8D72C310304BE920887ADC, /*hidden argument*/NULL);
		V_2 = L_27;
		bool L_28 = V_2;
		if (!L_28)
		{
			goto IL_014f;
		}
	}
	{
		// food += pointsPerSoda;
		int32_t L_29 = __this->get_food_14();
		int32_t L_30 = __this->get_pointsPerSoda_11();
		__this->set_food_14(((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)L_30)));
		// foodText.text = "+" + pointsPerSoda + " Food: " + food;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_31 = __this->get_foodText_15();
		int32_t* L_32 = __this->get_address_of_pointsPerSoda_11();
		String_t* L_33;
		L_33 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_32, /*hidden argument*/NULL);
		int32_t* L_34 = __this->get_address_of_food_14();
		String_t* L_35;
		L_35 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_34, /*hidden argument*/NULL);
		String_t* L_36;
		L_36 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952, L_33, _stringLiteral0ADF18071E31ABDFC28ACBB5EB626FB20984EB9D, L_35, /*hidden argument*/NULL);
		NullCheck(L_31);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_31, L_36);
		// SoundManager.instance.RandomizeSfx(drinkSound1, drinkSound2);
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_37 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_6();
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_38 = (AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE*)(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE*)SZArrayNew(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE_il2cpp_TypeInfo_var, (uint32_t)2);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_39 = L_38;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_40 = __this->get_drinkSound1_20();
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_40);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(0), (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)L_40);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_41 = L_39;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_42 = __this->get_drinkSound2_21();
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(1), (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)L_42);
		NullCheck(L_37);
		SoundManager_RandomizeSfx_m25C53C31752018BD583EA0DD984D9FD6574C0E58(L_37, L_41, /*hidden argument*/NULL);
		// other.gameObject.SetActive (false);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_43 = ___other0;
		NullCheck(L_43);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44;
		L_44 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_44, (bool)0, /*hidden argument*/NULL);
	}

IL_014f:
	{
		// }
		return;
	}
}
// System.Void Player::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Restart_m15741E06AD3DACE54BCAD43EAAF35E81CB40D0AB (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene (0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::LoseFood(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_LoseFood_m7F7B7C59BDDC47BE041FC76FBDC0F9B86B63C57A (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, int32_t ___loss0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ADF18071E31ABDFC28ACBB5EB626FB20984EB9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15AA2B97826EC4EE3E63BF8B0119089EC201E31C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetTrigger ("playerHit");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_animator_13();
		NullCheck(L_0);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_0, _stringLiteral15AA2B97826EC4EE3E63BF8B0119089EC201E31C, /*hidden argument*/NULL);
		// food -= loss;
		int32_t L_1 = __this->get_food_14();
		int32_t L_2 = ___loss0;
		__this->set_food_14(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2)));
		// foodText.text = "-" + loss + " Food: " + food;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_foodText_15();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___loss0), /*hidden argument*/NULL);
		int32_t* L_5 = __this->get_address_of_food_14();
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_5, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, L_4, _stringLiteral0ADF18071E31ABDFC28ACBB5EB626FB20984EB9D, L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_7);
		// CheckIfGameOver ();
		Player_CheckIfGameOver_mA83BFDA28FA68BC063E0EDD2BF9377CAD9FDBD4D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::CheckIfGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_CheckIfGameOver_mA83BFDA28FA68BC063E0EDD2BF9377CAD9FDBD4D (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (food <= 0)
		int32_t L_0 = __this->get_food_14();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		// SoundManager.instance.PlaySingle(gameOverSound);
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_2 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_6();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_3 = __this->get_gameOverSound_22();
		NullCheck(L_2);
		SoundManager_PlaySingle_m355DE88CFDD1EB81E9682CF4327DE765E35A01A4(L_2, L_3, /*hidden argument*/NULL);
		// SoundManager.instance.musicSource.Stop();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_4 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_6();
		NullCheck(L_4);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5 = L_4->get_musicSource_5();
		NullCheck(L_5);
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_5, /*hidden argument*/NULL);
		// GameManager.instance.GameOver ();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_6 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_8();
		NullCheck(L_6);
		GameManager_GameOver_m402A112370B58EBA3B2171FABC09467E1ED28E9A(L_6, /*hidden argument*/NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_mDE8EB5B351975D4E7E24DE341B8B49B8A29CC2B7 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// public float restartLevelDelay = 1f;
		__this->set_restartLevelDelay_9((1.0f));
		// public int pointsPerFood = 10;
		__this->set_pointsPerFood_10(((int32_t)10));
		// public int pointsPerSoda = 20;
		__this->set_pointsPerSoda_11(((int32_t)20));
		// public int wallDamage = 1;
		__this->set_wallDamage_12(1);
		// private Vector2 touchOrigin = -Vector2.one;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Vector2_get_one_m9B2AFD26404B6DD0F520D19FC7F79371C5C18B42(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Vector2_op_UnaryNegation_mA3AA3A53CD43237B0BA7AC57C09A0468A940D7C5_inline(L_0, /*hidden argument*/NULL);
		__this->set_touchOrigin_23(L_1);
		MovingObject__ctor_m38E8072FE2E1134B90E1687C927B3CE128B221A1(__this, /*hidden argument*/NULL);
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
// System.Void Completed.Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mD1341F9391CBC5B961F62BA993DF708C65E93FE3 (Player_t9765AA53EA79B78F740AAE0F25EE2647584E717C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE38CC4C1D409C9107F8E8C4C622F91CC499C2511);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0;
		L_0 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_animator_22(L_0);
		// food = GameManager.instance.playerFoodPoints;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_il2cpp_TypeInfo_var);
		GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * L_1 = ((GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_il2cpp_TypeInfo_var))->get_instance_7();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_playerFoodPoints_6();
		__this->set_food_23(L_2);
		// foodText.text = "Food: " + food;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_foodText_14();
		int32_t* L_4 = __this->get_address_of_food_23();
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralE38CC4C1D409C9107F8E8C4C622F91CC499C2511, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_6);
		// base.Start ();
		MovingObject_Start_m89A6C77020948513DB11F517F4940B03829CFB5F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Completed.Player::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnDisable_m686FB5F551A8685AF874864591E0794999C4876D (Player_t9765AA53EA79B78F740AAE0F25EE2647584E717C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.instance.playerFoodPoints = food;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_il2cpp_TypeInfo_var);
		GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * L_0 = ((GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_il2cpp_TypeInfo_var))->get_instance_7();
		int32_t L_1 = __this->get_food_23();
		NullCheck(L_0);
		L_0->set_playerFoodPoints_6(L_1);
		// }
		return;
	}
}
// System.Void Completed.Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_m76AE205484F4B3767C569EDC362CF59B882221BB (Player_t9765AA53EA79B78F740AAE0F25EE2647584E717C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MovingObject_AttemptMove_TisWall_t0AF988C8A447343CA324CC5DA0FD95C75E7CB412_m173FA952B01525D9D4A90677E894DC298275D05E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	bool V_10 = false;
	bool V_11 = false;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B23_0 = 0;
	{
		// if(!GameManager.instance.playersTurn) return;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_il2cpp_TypeInfo_var);
		GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * L_0 = ((GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_il2cpp_TypeInfo_var))->get_instance_7();
		NullCheck(L_0);
		bool L_1 = L_0->get_playersTurn_8();
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// if(!GameManager.instance.playersTurn) return;
		goto IL_0119;
	}

IL_0017:
	{
		// int horizontal = 0;      //Used to store the horizontal move direction.
		V_0 = 0;
		// int vertical = 0;        //Used to store the vertical move direction.
		V_1 = 0;
		// if (Input.touchCount > 0)
		int32_t L_3;
		L_3 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_00fe;
		}
	}
	{
		// Touch myTouch = Input.touches[0];
		TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* L_5;
		L_5 = Input_get_touches_m26E3034CAE32931E59A480327A3CF4BFC2045E8F(/*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = 0;
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = L_7;
		// if (myTouch.phase == TouchPhase.Began)
		int32_t L_8;
		L_8 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_4), /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_005c;
		}
	}
	{
		// touchOrigin = myTouch.position;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		L_10 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_4), /*hidden argument*/NULL);
		__this->set_touchOrigin_24(L_10);
		goto IL_00fd;
	}

IL_005c:
	{
		// else if (myTouch.phase == TouchPhase.Ended && touchOrigin.x >= 0)
		int32_t L_11;
		L_11 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_4), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)3))))
		{
			goto IL_007d;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_12 = __this->get_address_of_touchOrigin_24();
		float L_13 = L_12->get_x_0();
		G_B8_0 = ((((int32_t)((!(((float)L_13) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_007e;
	}

IL_007d:
	{
		G_B8_0 = 0;
	}

IL_007e:
	{
		V_6 = (bool)G_B8_0;
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_00fd;
		}
	}
	{
		// Vector2 touchEnd = myTouch.position;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15;
		L_15 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_4), /*hidden argument*/NULL);
		V_7 = L_15;
		// float x = touchEnd.x - touchOrigin.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16 = V_7;
		float L_17 = L_16.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_18 = __this->get_address_of_touchOrigin_24();
		float L_19 = L_18->get_x_0();
		V_8 = ((float)il2cpp_codegen_subtract((float)L_17, (float)L_19));
		// float y = touchEnd.y - touchOrigin.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20 = V_7;
		float L_21 = L_20.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_22 = __this->get_address_of_touchOrigin_24();
		float L_23 = L_22->get_y_1();
		V_9 = ((float)il2cpp_codegen_subtract((float)L_21, (float)L_23));
		// touchOrigin.x = -1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_24 = __this->get_address_of_touchOrigin_24();
		L_24->set_x_0((-1.0f));
		// if (Mathf.Abs(x) > Mathf.Abs(y))
		float L_25 = V_8;
		float L_26;
		L_26 = fabsf(L_25);
		float L_27 = V_9;
		float L_28;
		L_28 = fabsf(L_27);
		V_10 = (bool)((((float)L_26) > ((float)L_28))? 1 : 0);
		bool L_29 = V_10;
		if (!L_29)
		{
			goto IL_00ee;
		}
	}
	{
		// horizontal = x > 0 ? 1 : -1;
		float L_30 = V_8;
		if ((((float)L_30) > ((float)(0.0f))))
		{
			goto IL_00ea;
		}
	}
	{
		G_B13_0 = (-1);
		goto IL_00eb;
	}

IL_00ea:
	{
		G_B13_0 = 1;
	}

IL_00eb:
	{
		V_0 = G_B13_0;
		goto IL_00fc;
	}

IL_00ee:
	{
		// vertical = y > 0 ? 1 : -1;
		float L_31 = V_9;
		if ((((float)L_31) > ((float)(0.0f))))
		{
			goto IL_00fa;
		}
	}
	{
		G_B17_0 = (-1);
		goto IL_00fb;
	}

IL_00fa:
	{
		G_B17_0 = 1;
	}

IL_00fb:
	{
		V_1 = G_B17_0;
	}

IL_00fc:
	{
	}

IL_00fd:
	{
	}

IL_00fe:
	{
		// if(horizontal != 0 || vertical != 0)
		int32_t L_32 = V_0;
		if (L_32)
		{
			goto IL_0107;
		}
	}
	{
		int32_t L_33 = V_1;
		G_B23_0 = ((!(((uint32_t)L_33) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0108;
	}

IL_0107:
	{
		G_B23_0 = 1;
	}

IL_0108:
	{
		V_11 = (bool)G_B23_0;
		bool L_34 = V_11;
		if (!L_34)
		{
			goto IL_0119;
		}
	}
	{
		// AttemptMove<Wall> (horizontal, vertical);
		int32_t L_35 = V_0;
		int32_t L_36 = V_1;
		GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(MovingObject_AttemptMove_TisWall_t0AF988C8A447343CA324CC5DA0FD95C75E7CB412_m173FA952B01525D9D4A90677E894DC298275D05E_RuntimeMethod_var, __this, L_35, L_36);
	}

IL_0119:
	{
		// }
		return;
	}
}
// System.Void Completed.Player::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnTriggerEnter2D_m0B3CBF79342A444C74F1011B8492EFB460138D84 (Player_t9765AA53EA79B78F740AAE0F25EE2647584E717C * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ADF18071E31ABDFC28ACBB5EB626FB20984EB9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral687D9BA523E32A2B8A4FEAD5E5EAE89D357E1420);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral838E394589B5693706685699154545855BEAE0B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF117C6985226D7151C8D72C310304BE920887ADC);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if(other.tag == "Exit")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteral687D9BA523E32A2B8A4FEAD5E5EAE89D357E1420, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// Invoke ("Restart", restartLevelDelay);
		float L_4 = __this->get_restartLevelDelay_10();
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral838E394589B5693706685699154545855BEAE0B2, L_4, /*hidden argument*/NULL);
		// enabled = false;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
		goto IL_014f;
	}

IL_0036:
	{
		// else if(other.tag == "Food")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_5 = ___other0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, _stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B, /*hidden argument*/NULL);
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_00c5;
		}
	}
	{
		// food += pointsPerFood;
		int32_t L_9 = __this->get_food_23();
		int32_t L_10 = __this->get_pointsPerFood_11();
		__this->set_food_23(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10)));
		// foodText.text = "+" + pointsPerFood + " Food: " + food;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11 = __this->get_foodText_14();
		int32_t* L_12 = __this->get_address_of_pointsPerFood_11();
		String_t* L_13;
		L_13 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_12, /*hidden argument*/NULL);
		int32_t* L_14 = __this->get_address_of_food_23();
		String_t* L_15;
		L_15 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_14, /*hidden argument*/NULL);
		String_t* L_16;
		L_16 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952, L_13, _stringLiteral0ADF18071E31ABDFC28ACBB5EB626FB20984EB9D, L_15, /*hidden argument*/NULL);
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_16);
		// SoundManager.instance.RandomizeSfx (eatSound1, eatSound2);
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_il2cpp_TypeInfo_var);
		SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51 * L_17 = ((SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_il2cpp_TypeInfo_var))->get_instance_6();
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_18 = (AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE*)(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE*)SZArrayNew(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE_il2cpp_TypeInfo_var, (uint32_t)2);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_19 = L_18;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_20 = __this->get_eatSound1_17();
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)L_20);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_21 = L_19;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_22 = __this->get_eatSound2_18();
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)L_22);
		NullCheck(L_17);
		SoundManager_RandomizeSfx_m11F9CD2046548F5F8A61B9DD698E7A94195C9A29(L_17, L_21, /*hidden argument*/NULL);
		// other.gameObject.SetActive (false);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_23 = ___other0;
		NullCheck(L_23);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_24, (bool)0, /*hidden argument*/NULL);
		goto IL_014f;
	}

IL_00c5:
	{
		// else if(other.tag == "Soda")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_25 = ___other0;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_25, /*hidden argument*/NULL);
		bool L_27;
		L_27 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_26, _stringLiteralF117C6985226D7151C8D72C310304BE920887ADC, /*hidden argument*/NULL);
		V_2 = L_27;
		bool L_28 = V_2;
		if (!L_28)
		{
			goto IL_014f;
		}
	}
	{
		// food += pointsPerSoda;
		int32_t L_29 = __this->get_food_23();
		int32_t L_30 = __this->get_pointsPerSoda_12();
		__this->set_food_23(((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)L_30)));
		// foodText.text = "+" + pointsPerSoda + " Food: " + food;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_31 = __this->get_foodText_14();
		int32_t* L_32 = __this->get_address_of_pointsPerSoda_12();
		String_t* L_33;
		L_33 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_32, /*hidden argument*/NULL);
		int32_t* L_34 = __this->get_address_of_food_23();
		String_t* L_35;
		L_35 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_34, /*hidden argument*/NULL);
		String_t* L_36;
		L_36 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952, L_33, _stringLiteral0ADF18071E31ABDFC28ACBB5EB626FB20984EB9D, L_35, /*hidden argument*/NULL);
		NullCheck(L_31);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_31, L_36);
		// SoundManager.instance.RandomizeSfx (drinkSound1, drinkSound2);
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_il2cpp_TypeInfo_var);
		SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51 * L_37 = ((SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_il2cpp_TypeInfo_var))->get_instance_6();
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_38 = (AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE*)(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE*)SZArrayNew(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE_il2cpp_TypeInfo_var, (uint32_t)2);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_39 = L_38;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_40 = __this->get_drinkSound1_19();
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_40);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(0), (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)L_40);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_41 = L_39;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_42 = __this->get_drinkSound2_20();
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(1), (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)L_42);
		NullCheck(L_37);
		SoundManager_RandomizeSfx_m11F9CD2046548F5F8A61B9DD698E7A94195C9A29(L_37, L_41, /*hidden argument*/NULL);
		// other.gameObject.SetActive (false);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_43 = ___other0;
		NullCheck(L_43);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44;
		L_44 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_44, (bool)0, /*hidden argument*/NULL);
	}

IL_014f:
	{
		// }
		return;
	}
}
// System.Void Completed.Player::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Restart_mFFC5904D339D8198BAAD76F7E9A802642A222DE9 (Player_t9765AA53EA79B78F740AAE0F25EE2647584E717C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex, LoadSceneMode.Single);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m62031BCEF9B3C7179B005B8EA825989F696E6B76(L_1, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Completed.Player::LoseFood(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_LoseFood_mD106D648ABAEDB7CA8BC3368AC9A5A7B13995ACD (Player_t9765AA53EA79B78F740AAE0F25EE2647584E717C * __this, int32_t ___loss0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ADF18071E31ABDFC28ACBB5EB626FB20984EB9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15AA2B97826EC4EE3E63BF8B0119089EC201E31C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetTrigger ("playerHit");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_animator_22();
		NullCheck(L_0);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_0, _stringLiteral15AA2B97826EC4EE3E63BF8B0119089EC201E31C, /*hidden argument*/NULL);
		// food -= loss;
		int32_t L_1 = __this->get_food_23();
		int32_t L_2 = ___loss0;
		__this->set_food_23(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2)));
		// foodText.text = "-"+ loss + " Food: " + food;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_foodText_14();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___loss0), /*hidden argument*/NULL);
		int32_t* L_5 = __this->get_address_of_food_23();
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_5, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, L_4, _stringLiteral0ADF18071E31ABDFC28ACBB5EB626FB20984EB9D, L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_7);
		// CheckIfGameOver ();
		Player_CheckIfGameOver_m093FC524330A71569B5AEDA9B2D0244EAE822328(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Completed.Player::CheckIfGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_CheckIfGameOver_m093FC524330A71569B5AEDA9B2D0244EAE822328 (Player_t9765AA53EA79B78F740AAE0F25EE2647584E717C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (food <= 0)
		int32_t L_0 = __this->get_food_23();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		// SoundManager.instance.PlaySingle (gameOverSound);
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_il2cpp_TypeInfo_var);
		SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51 * L_2 = ((SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_il2cpp_TypeInfo_var))->get_instance_6();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_3 = __this->get_gameOverSound_21();
		NullCheck(L_2);
		SoundManager_PlaySingle_m392B140F5DDF3591EA6033B7EEFD462F01031AA1(L_2, L_3, /*hidden argument*/NULL);
		// SoundManager.instance.musicSource.Stop();
		SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51 * L_4 = ((SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_il2cpp_TypeInfo_var))->get_instance_6();
		NullCheck(L_4);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5 = L_4->get_musicSource_5();
		NullCheck(L_5);
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_5, /*hidden argument*/NULL);
		// GameManager.instance.GameOver ();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_il2cpp_TypeInfo_var);
		GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * L_6 = ((GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447_il2cpp_TypeInfo_var))->get_instance_7();
		NullCheck(L_6);
		GameManager_GameOver_m1F3FCA54C6303ECDEB2FC323055E0839C4F20803(L_6, /*hidden argument*/NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void Completed.Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_mBE7DCD7FB89B8F5424802E1F20C15B82DB75AB79 (Player_t9765AA53EA79B78F740AAE0F25EE2647584E717C * __this, const RuntimeMethod* method)
{
	{
		// public float restartLevelDelay = 1f;        //Delay time in seconds to restart level.
		__this->set_restartLevelDelay_10((1.0f));
		// public int pointsPerFood = 10;                //Number of points to add to player food points when picking up a food object.
		__this->set_pointsPerFood_11(((int32_t)10));
		// public int pointsPerSoda = 20;                //Number of points to add to player food points when picking up a soda object.
		__this->set_pointsPerSoda_12(((int32_t)20));
		// public int wallDamage = 1;                    //How much damage a player does to a wall when chopping it.
		__this->set_wallDamage_13(1);
		// private Vector2 touchOrigin = -Vector2.one;    //Used to store location of screen touch origin for mobile controls.
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Vector2_get_one_m9B2AFD26404B6DD0F520D19FC7F79371C5C18B42(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Vector2_op_UnaryNegation_mA3AA3A53CD43237B0BA7AC57C09A0468A940D7C5_inline(L_0, /*hidden argument*/NULL);
		__this->set_touchOrigin_24(L_1);
		MovingObject__ctor_m7161BC828CFE34CC18C6334031F588A1141EA8E2(__this, /*hidden argument*/NULL);
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
// System.Void Readme::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_mF465410C5B2E598F2685E82CFCE1F42186AFF448 (Readme_tD58D22679F01C9AD66EA323B2DE68BFF6DBDCEE7 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void SoundManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Awake_m78F953F39CFB3F539240E1226D04270B793B1A76 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (instance == null)
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_0 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// instance = this;
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->set_instance_6(__this);
		goto IL_0033;
	}

IL_0018:
	{
		// else if (instance != this)
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_3 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, __this, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		// Destroy (gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_6, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// DontDestroyOnLoad (gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::PlaySingle(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlaySingle_m355DE88CFDD1EB81E9682CF4327DE765E35A01A4 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method)
{
	{
		// efxSource.clip = clip;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_efxSource_4();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1 = ___clip0;
		NullCheck(L_0);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_0, L_1, /*hidden argument*/NULL);
		// efxSource.Play ();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2 = __this->get_efxSource_4();
		NullCheck(L_2);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::RandomizeSfx(UnityEngine.AudioClip[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_RandomizeSfx_m25C53C31752018BD583EA0DD984D9FD6574C0E58 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ___clips0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		// int randomIndex = Random.Range(0, clips.Length);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_0 = ___clips0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), /*hidden argument*/NULL);
		V_0 = L_1;
		// float randomPitch = Random.Range(lowPitchRange, highPitchRange);
		float L_2 = __this->get_lowPitchRange_7();
		float L_3 = __this->get_highPitchRange_8();
		float L_4;
		L_4 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// efxSource.pitch = randomPitch;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5 = __this->get_efxSource_4();
		float L_6 = V_1;
		NullCheck(L_5);
		AudioSource_set_pitch_m9E9EEFADFAB44ADEC656573425CF34D0069A0CBC(L_5, L_6, /*hidden argument*/NULL);
		// efxSource.clip = clips[randomIndex];
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_7 = __this->get_efxSource_4();
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_8 = ___clips0;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_7);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_7, L_11, /*hidden argument*/NULL);
		// efxSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_12 = __this->get_efxSource_4();
		NullCheck(L_12);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager__ctor_m30D18BC25871BD3FF7FB195A1CAE50A2EE48FCAE (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		// public float lowPitchRange = .95f;
		__this->set_lowPitchRange_7((0.949999988f));
		// public float highPitchRange = 1.05f;
		__this->set_highPitchRange_8((1.04999995f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager__cctor_mCB4F772852263D66AF3536FB81B715BD441B6A2C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SoundManager instance = null;
		((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->set_instance_6((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 *)NULL);
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
// System.Void Completed.SoundManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Awake_m7A7043FF1979AB6DDF6D252B8206E6488C342C38 (SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (instance == null)
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_il2cpp_TypeInfo_var);
		SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51 * L_0 = ((SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_il2cpp_TypeInfo_var))->get_instance_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// instance = this;
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_il2cpp_TypeInfo_var);
		((SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_il2cpp_TypeInfo_var))->set_instance_6(__this);
		goto IL_0033;
	}

IL_0018:
	{
		// else if (instance != this)
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_il2cpp_TypeInfo_var);
		SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51 * L_3 = ((SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_il2cpp_TypeInfo_var))->get_instance_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, __this, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		// Destroy (gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_6, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// DontDestroyOnLoad (gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Completed.SoundManager::PlaySingle(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlaySingle_m392B140F5DDF3591EA6033B7EEFD462F01031AA1 (SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51 * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method)
{
	{
		// efxSource.clip = clip;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_efxSource_4();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1 = ___clip0;
		NullCheck(L_0);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_0, L_1, /*hidden argument*/NULL);
		// efxSource.Play ();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2 = __this->get_efxSource_4();
		NullCheck(L_2);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Completed.SoundManager::RandomizeSfx(UnityEngine.AudioClip[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_RandomizeSfx_m11F9CD2046548F5F8A61B9DD698E7A94195C9A29 (SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51 * __this, AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ___clips0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		// int randomIndex = Random.Range(0, clips.Length);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_0 = ___clips0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), /*hidden argument*/NULL);
		V_0 = L_1;
		// float randomPitch = Random.Range(lowPitchRange, highPitchRange);
		float L_2 = __this->get_lowPitchRange_7();
		float L_3 = __this->get_highPitchRange_8();
		float L_4;
		L_4 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// efxSource.pitch = randomPitch;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5 = __this->get_efxSource_4();
		float L_6 = V_1;
		NullCheck(L_5);
		AudioSource_set_pitch_m9E9EEFADFAB44ADEC656573425CF34D0069A0CBC(L_5, L_6, /*hidden argument*/NULL);
		// efxSource.clip = clips[randomIndex];
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_7 = __this->get_efxSource_4();
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_8 = ___clips0;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_7);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_7, L_11, /*hidden argument*/NULL);
		// efxSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_12 = __this->get_efxSource_4();
		NullCheck(L_12);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Completed.SoundManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager__ctor_m2651B613F35CAA53C9BAF17C5F9F5E309E62D05B (SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51 * __this, const RuntimeMethod* method)
{
	{
		// public float lowPitchRange = .95f;                //The lowest a sound effect will be randomly pitched.
		__this->set_lowPitchRange_7((0.949999988f));
		// public float highPitchRange = 1.05f;            //The highest a sound effect will be randomly pitched.
		__this->set_highPitchRange_8((1.04999995f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Completed.SoundManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager__cctor_m6529C55B77B5DE4943FF6E9629AA2C2B638DE19E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SoundManager instance = null;        //Allows other scripts to call functions from SoundManager.
		((SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_il2cpp_TypeInfo_var))->set_instance_6((SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51 *)NULL);
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
// System.Void TutorialInfo::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialInfo_Awake_m1B734D6DCC885C251C173C6020CA385A3134F78D (TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if(alreadyShownThisSession)
		IL2CPP_RUNTIME_CLASS_INIT(TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485_il2cpp_TypeInfo_var);
		bool L_0 = ((TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485_StaticFields*)il2cpp_codegen_static_fields_for(TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485_il2cpp_TypeInfo_var))->get_alreadyShownThisSession_10();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// StartGame();
		TutorialInfo_StartGame_m0114F75E4E0E26D2F7429A2C38DF25CCEBB81341(__this, /*hidden argument*/NULL);
		goto IL_0070;
	}

IL_0015:
	{
		// alreadyShownThisSession = true;
		IL2CPP_RUNTIME_CLASS_INIT(TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485_il2cpp_TypeInfo_var);
		((TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485_StaticFields*)il2cpp_codegen_static_fields_for(TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485_il2cpp_TypeInfo_var))->set_alreadyShownThisSession_10((bool)1);
		// if (PlayerPrefs.HasKey(showAtStartPrefsKey))
		String_t* L_2 = ((TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485_StaticFields*)il2cpp_codegen_static_fields_for(TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485_il2cpp_TypeInfo_var))->get_showAtStartPrefsKey_9();
		bool L_3;
		L_3 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		// showAtStart = PlayerPrefs.GetInt(showAtStartPrefsKey) == 1;
		IL2CPP_RUNTIME_CLASS_INIT(TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485_il2cpp_TypeInfo_var);
		String_t* L_5 = ((TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485_StaticFields*)il2cpp_codegen_static_fields_for(TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485_il2cpp_TypeInfo_var))->get_showAtStartPrefsKey_9();
		int32_t L_6;
		L_6 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(L_5, /*hidden argument*/NULL);
		__this->set_showAtStart_4((bool)((((int32_t)L_6) == ((int32_t)1))? 1 : 0));
	}

IL_003f:
	{
		// showAtStartToggle.isOn = showAtStart;
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_7 = __this->get_showAtStartToggle_8();
		bool L_8 = __this->get_showAtStart_4();
		NullCheck(L_7);
		Toggle_set_isOn_mB018B9F410D7236AAB71D6D1A5BACC64C891F507(L_7, L_8, /*hidden argument*/NULL);
		// if (showAtStart)
		bool L_9 = __this->get_showAtStart_4();
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		// ShowLaunchScreen();
		TutorialInfo_ShowLaunchScreen_mDCDB9714506CFEB0BD014AB9174060E74FED4C21(__this, /*hidden argument*/NULL);
		goto IL_006f;
	}

IL_0066:
	{
		// StartGame ();
		TutorialInfo_StartGame_m0114F75E4E0E26D2F7429A2C38DF25CCEBB81341(__this, /*hidden argument*/NULL);
	}

IL_006f:
	{
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void TutorialInfo::ShowLaunchScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialInfo_ShowLaunchScreen_mDCDB9714506CFEB0BD014AB9174060E74FED4C21 (TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485 * __this, const RuntimeMethod* method)
{
	{
		// Time.timeScale = 0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// mainListener.enabled = false;
		AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * L_0 = __this->get_mainListener_7();
		NullCheck(L_0);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, (bool)0, /*hidden argument*/NULL);
		// overlay.SetActive (true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_overlay_6();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TutorialInfo::LaunchTutorial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialInfo_LaunchTutorial_mC16C5725BE888E8D200BFAF24FA910C98B5122D1 (TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485 * __this, const RuntimeMethod* method)
{
	{
		// Application.OpenURL (url);
		String_t* L_0 = __this->get_url_5();
		Application_OpenURL_m4AED08D5321E5395FAC8D91C2C428DBE60C5FD4E(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TutorialInfo::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialInfo_StartGame_m0114F75E4E0E26D2F7429A2C38DF25CCEBB81341 (TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485 * __this, const RuntimeMethod* method)
{
	{
		// overlay.SetActive (false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_overlay_6();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// mainListener.enabled = true;
		AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * L_1 = __this->get_mainListener_7();
		NullCheck(L_1);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_1, (bool)1, /*hidden argument*/NULL);
		// Time.timeScale = 1f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TutorialInfo::ToggleShowAtLaunch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialInfo_ToggleShowAtLaunch_m179E689DE33FCF8961DB42FE91DFFA2678693BB5 (TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	{
		// showAtStart = showAtStartToggle.isOn;
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_0 = __this->get_showAtStartToggle_8();
		NullCheck(L_0);
		bool L_1;
		L_1 = Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C(L_0, /*hidden argument*/NULL);
		__this->set_showAtStart_4(L_1);
		// PlayerPrefs.SetInt(showAtStartPrefsKey, showAtStart ? 1 : 0);
		IL2CPP_RUNTIME_CLASS_INIT(TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485_il2cpp_TypeInfo_var);
		String_t* L_2 = ((TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485_StaticFields*)il2cpp_codegen_static_fields_for(TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485_il2cpp_TypeInfo_var))->get_showAtStartPrefsKey_9();
		bool L_3 = __this->get_showAtStart_4();
		G_B1_0 = L_2;
		if (L_3)
		{
			G_B2_0 = L_2;
			goto IL_0022;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0023:
	{
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TutorialInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialInfo__ctor_m2E640A0ED15C39D2BD9AA078B416303CFED0E063 (TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485 * __this, const RuntimeMethod* method)
{
	{
		// public bool showAtStart = true;
		__this->set_showAtStart_4((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TutorialInfo::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialInfo__cctor_m9D8EFD3089DE16A0B5DCF8E3D1F086FDECCCDD33 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95D7F28AC82AF9DC3FFC83E8E3CB141475CE1A86);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string showAtStartPrefsKey = "showLaunchScreen";
		((TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485_StaticFields*)il2cpp_codegen_static_fields_for(TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485_il2cpp_TypeInfo_var))->set_showAtStartPrefsKey_9(_stringLiteral95D7F28AC82AF9DC3FFC83E8E3CB141475CE1A86);
		// private static bool alreadyShownThisSession = false;
		((TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485_StaticFields*)il2cpp_codegen_static_fields_for(TutorialInfo_tBBCB02791D1306A76FCF9D998DC3726F40F07485_il2cpp_TypeInfo_var))->set_alreadyShownThisSession_10((bool)0);
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
// System.Void Wall::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wall_Awake_m444CEB6F971F18CC738FD5996F0404DF036BA299 (Wall_t75B0B5D0D103AF52A80C03FFB000620BD9005D4C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spriteRenderer = GetComponent<SpriteRenderer> ();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set_spriteRenderer_8(L_0);
		// }
		return;
	}
}
// System.Void Wall::DamageWall(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wall_DamageWall_m23298DC6416E37CC04D269B360F797EEF4979C38 (Wall_t75B0B5D0D103AF52A80C03FFB000620BD9005D4C * __this, int32_t ___loss0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// SoundManager.instance.RandomizeSfx (chopSound1, chopSound2);
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_0 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_6();
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_1 = (AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE*)(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE*)SZArrayNew(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE_il2cpp_TypeInfo_var, (uint32_t)2);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_2 = L_1;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_3 = __this->get_chopSound1_4();
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)L_3);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_4 = L_2;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_5 = __this->get_chopSound2_5();
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)L_5);
		NullCheck(L_0);
		SoundManager_RandomizeSfx_m25C53C31752018BD583EA0DD984D9FD6574C0E58(L_0, L_4, /*hidden argument*/NULL);
		// spriteRenderer.sprite = dmgSprite;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_6 = __this->get_spriteRenderer_8();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_7 = __this->get_dmgSprite_6();
		NullCheck(L_6);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_6, L_7, /*hidden argument*/NULL);
		// hp -= loss;
		int32_t L_8 = __this->get_hp_7();
		int32_t L_9 = ___loss0;
		__this->set_hp_7(((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9)));
		// if(hp <= 0)
		int32_t L_10 = __this->get_hp_7();
		V_0 = (bool)((((int32_t)((((int32_t)L_10) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_0;
		if (!L_11)
		{
			goto IL_0061;
		}
	}
	{
		// gameObject.SetActive (false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)0, /*hidden argument*/NULL);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void Wall::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wall__ctor_m90F1D5997556A6DA8EEE00148EA781E96718A763 (Wall_t75B0B5D0D103AF52A80C03FFB000620BD9005D4C * __this, const RuntimeMethod* method)
{
	{
		// public int hp = 3;
		__this->set_hp_7(3);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Completed.Wall::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wall_Awake_m57A930FCED9B94918B929BA146A2E8A7988C20E9 (Wall_t0AF988C8A447343CA324CC5DA0FD95C75E7CB412 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spriteRenderer = GetComponent<SpriteRenderer> ();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set_spriteRenderer_8(L_0);
		// }
		return;
	}
}
// System.Void Completed.Wall::DamageWall(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wall_DamageWall_mE731DF4AE57CA78F9E2C04181751E3AE8010B0D7 (Wall_t0AF988C8A447343CA324CC5DA0FD95C75E7CB412 * __this, int32_t ___loss0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// SoundManager.instance.RandomizeSfx (chopSound1, chopSound2);
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_il2cpp_TypeInfo_var);
		SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51 * L_0 = ((SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tD3F02B81B627B2A839EAACC0B9B7B977FCE6DC51_il2cpp_TypeInfo_var))->get_instance_6();
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_1 = (AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE*)(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE*)SZArrayNew(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE_il2cpp_TypeInfo_var, (uint32_t)2);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_2 = L_1;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_3 = __this->get_chopSound1_4();
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)L_3);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_4 = L_2;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_5 = __this->get_chopSound2_5();
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)L_5);
		NullCheck(L_0);
		SoundManager_RandomizeSfx_m11F9CD2046548F5F8A61B9DD698E7A94195C9A29(L_0, L_4, /*hidden argument*/NULL);
		// spriteRenderer.sprite = dmgSprite;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_6 = __this->get_spriteRenderer_8();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_7 = __this->get_dmgSprite_6();
		NullCheck(L_6);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_6, L_7, /*hidden argument*/NULL);
		// hp -= loss;
		int32_t L_8 = __this->get_hp_7();
		int32_t L_9 = ___loss0;
		__this->set_hp_7(((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9)));
		// if(hp <= 0)
		int32_t L_10 = __this->get_hp_7();
		V_0 = (bool)((((int32_t)((((int32_t)L_10) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_0;
		if (!L_11)
		{
			goto IL_0061;
		}
	}
	{
		// gameObject.SetActive (false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)0, /*hidden argument*/NULL);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void Completed.Wall::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wall__ctor_m0EC33404B3EC0171F9ED4B2280FF7FE3726CBB56 (Wall_t0AF988C8A447343CA324CC5DA0FD95C75E7CB412 * __this, const RuntimeMethod* method)
{
	{
		// public int hp = 3;                            //hit points for the wall.
		__this->set_hp_7(3);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void BoardManager/Count::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Count__ctor_m5875DFC4DC21CCF8D66E8D3389296B63F07A1028 (Count_t43FD08C05C3123E7D601E60282485C59D5F2C038 * __this, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method)
{
	{
		// public Count (int min, int max)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// minimum = min;
		int32_t L_0 = ___min0;
		__this->set_minimum_0(L_0);
		// maximum = max;
		int32_t L_1 = ___max1;
		__this->set_maximum_1(L_1);
		// }
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
// System.Void Completed.BoardManager/Count::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Count__ctor_mDA70BD2AD95CC83F1FA79C115B7DCCEC5B57BD43 (Count_t8DC7E1AC3171CF8B35A55F124D85FE4282E82E37 * __this, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method)
{
	{
		// public Count (int min, int max)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// minimum = min;
		int32_t L_0 = ___min0;
		__this->set_minimum_0(L_0);
		// maximum = max;
		int32_t L_1 = ___max1;
		__this->set_maximum_1(L_1);
		// }
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
// System.Void GameManager/<MoveEnemies>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveEnemiesU3Ed__19__ctor_mDBB02CB501620C9E826CFE75B4A931B5FACF3458 (U3CMoveEnemiesU3Ed__19_tAA067E6A4E7E5C2077BAE3EA8F957DD7052EB5EB * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameManager/<MoveEnemies>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveEnemiesU3Ed__19_System_IDisposable_Dispose_m086FB3EA1918A6A50F92333DBE6A4953A2F166EF (U3CMoveEnemiesU3Ed__19_tAA067E6A4E7E5C2077BAE3EA8F957DD7052EB5EB * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameManager/<MoveEnemies>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMoveEnemiesU3Ed__19_MoveNext_m0EC4EDD4FEC0E9C266E3F1FD5871644A117853CD (U3CMoveEnemiesU3Ed__19_tAA067E6A4E7E5C2077BAE3EA8F957DD7052EB5EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m99FAEDD9C024582566F281EF9D4051695FBDB0A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3E90AE762FA32F7597154FA3C1E3F8FE491C51AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_0021;
			}
			case 2:
			{
				goto IL_0023;
			}
			case 3:
			{
				goto IL_0025;
			}
		}
	}
	{
		goto IL_002a;
	}

IL_001f:
	{
		goto IL_002c;
	}

IL_0021:
	{
		goto IL_005f;
	}

IL_0023:
	{
		goto IL_009d;
	}

IL_0025:
	{
		goto IL_00fa;
	}

IL_002a:
	{
		return (bool)0;
	}

IL_002c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// enemiesMoving = true;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_2 = __this->get_U3CU3E4__this_2();
		NullCheck(L_2);
		L_2->set_enemiesMoving_12((bool)1);
		// yield return new WaitForSeconds(turnDelay);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_3 = __this->get_U3CU3E4__this_2();
		NullCheck(L_3);
		float L_4 = L_3->get_turnDelay_10();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005f:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (enemies.Count == 0)
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_6 = __this->get_U3CU3E4__this_2();
		NullCheck(L_6);
		List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * L_7 = L_6->get_enemies_11();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m99FAEDD9C024582566F281EF9D4051695FBDB0A5_inline(L_7, /*hidden argument*/List_1_get_Count_m99FAEDD9C024582566F281EF9D4051695FBDB0A5_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_00a5;
		}
	}
	{
		// yield return new WaitForSeconds(turnDelay);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_10 = __this->get_U3CU3E4__this_2();
		NullCheck(L_10);
		float L_11 = L_10->get_turnDelay_10();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_12 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_12, L_11, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_12);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_009d:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00a5:
	{
		// for (int i = 0; i < enemies.Count; i++)
		__this->set_U3CiU3E5__1_3(0);
		goto IL_0112;
	}

IL_00ae:
	{
		// enemies[i].MoveEnemy();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_13 = __this->get_U3CU3E4__this_2();
		NullCheck(L_13);
		List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * L_14 = L_13->get_enemies_11();
		int32_t L_15 = __this->get_U3CiU3E5__1_3();
		NullCheck(L_14);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_16;
		L_16 = List_1_get_Item_m3E90AE762FA32F7597154FA3C1E3F8FE491C51AD_inline(L_14, L_15, /*hidden argument*/List_1_get_Item_m3E90AE762FA32F7597154FA3C1E3F8FE491C51AD_RuntimeMethod_var);
		NullCheck(L_16);
		Enemy_MoveEnemy_m97D831D3D5C6924EA6E4477F8C5F0BB4D26468A5(L_16, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(enemies[i].moveTime);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_17 = __this->get_U3CU3E4__this_2();
		NullCheck(L_17);
		List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * L_18 = L_17->get_enemies_11();
		int32_t L_19 = __this->get_U3CiU3E5__1_3();
		NullCheck(L_18);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_20;
		L_20 = List_1_get_Item_m3E90AE762FA32F7597154FA3C1E3F8FE491C51AD_inline(L_18, L_19, /*hidden argument*/List_1_get_Item_m3E90AE762FA32F7597154FA3C1E3F8FE491C51AD_RuntimeMethod_var);
		NullCheck(L_20);
		float L_21 = ((MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C *)L_20)->get_moveTime_4();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_22 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_22, L_21, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_22);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_00fa:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i = 0; i < enemies.Count; i++)
		int32_t L_23 = __this->get_U3CiU3E5__1_3();
		V_2 = L_23;
		int32_t L_24 = V_2;
		__this->set_U3CiU3E5__1_3(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1)));
	}

IL_0112:
	{
		// for (int i = 0; i < enemies.Count; i++)
		int32_t L_25 = __this->get_U3CiU3E5__1_3();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_26 = __this->get_U3CU3E4__this_2();
		NullCheck(L_26);
		List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * L_27 = L_26->get_enemies_11();
		NullCheck(L_27);
		int32_t L_28;
		L_28 = List_1_get_Count_m99FAEDD9C024582566F281EF9D4051695FBDB0A5_inline(L_27, /*hidden argument*/List_1_get_Count_m99FAEDD9C024582566F281EF9D4051695FBDB0A5_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_25) < ((int32_t)L_28))? 1 : 0);
		bool L_29 = V_3;
		if (L_29)
		{
			goto IL_00ae;
		}
	}
	{
		// playersTurn = true;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_30 = __this->get_U3CU3E4__this_2();
		NullCheck(L_30);
		L_30->set_playersTurn_14((bool)1);
		// enemiesMoving = false;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_31 = __this->get_U3CU3E4__this_2();
		NullCheck(L_31);
		L_31->set_enemiesMoving_12((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<MoveEnemies>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMoveEnemiesU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4C045C3BB956EF00757DA6004E4E8AD98FBD56B7 (U3CMoveEnemiesU3Ed__19_tAA067E6A4E7E5C2077BAE3EA8F957DD7052EB5EB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameManager/<MoveEnemies>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveEnemiesU3Ed__19_System_Collections_IEnumerator_Reset_m7B57DD4F9610E2D7520113BC4643EE0D4D9EC64A (U3CMoveEnemiesU3Ed__19_tAA067E6A4E7E5C2077BAE3EA8F957DD7052EB5EB * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMoveEnemiesU3Ed__19_System_Collections_IEnumerator_Reset_m7B57DD4F9610E2D7520113BC4643EE0D4D9EC64A_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<MoveEnemies>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMoveEnemiesU3Ed__19_System_Collections_IEnumerator_get_Current_m93FD05775E5126208873138862790B387F43B849 (U3CMoveEnemiesU3Ed__19_tAA067E6A4E7E5C2077BAE3EA8F957DD7052EB5EB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Completed.GameManager/<MoveEnemies>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveEnemiesU3Ed__20__ctor_m560576D693B2C84EB2D4E5BA3F37B256357DF668 (U3CMoveEnemiesU3Ed__20_tEB7D40440BA47032AB3D9CB8A0E9B33A9A6EB317 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Completed.GameManager/<MoveEnemies>d__20::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveEnemiesU3Ed__20_System_IDisposable_Dispose_mDA79386EBF7D150B259BF579E15496609D2BEC4B (U3CMoveEnemiesU3Ed__20_tEB7D40440BA47032AB3D9CB8A0E9B33A9A6EB317 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Completed.GameManager/<MoveEnemies>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMoveEnemiesU3Ed__20_MoveNext_mE41978A6A5D783D0589E505B9732C223E606F387 (U3CMoveEnemiesU3Ed__20_tEB7D40440BA47032AB3D9CB8A0E9B33A9A6EB317 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3F9A1F65655B1DBD5D5E52C91D4597B7FE7FB3F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m5EA1A9570746D05CD09E123011A17979A5FB3A56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_0021;
			}
			case 2:
			{
				goto IL_0023;
			}
			case 3:
			{
				goto IL_0025;
			}
		}
	}
	{
		goto IL_002a;
	}

IL_001f:
	{
		goto IL_002c;
	}

IL_0021:
	{
		goto IL_005f;
	}

IL_0023:
	{
		goto IL_009d;
	}

IL_0025:
	{
		goto IL_00fa;
	}

IL_002a:
	{
		return (bool)0;
	}

IL_002c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// enemiesMoving = true;
		GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * L_2 = __this->get_U3CU3E4__this_2();
		NullCheck(L_2);
		L_2->set_enemiesMoving_14((bool)1);
		// yield return new WaitForSeconds(turnDelay);
		GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * L_3 = __this->get_U3CU3E4__this_2();
		NullCheck(L_3);
		float L_4 = L_3->get_turnDelay_5();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005f:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (enemies.Count == 0)
		GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * L_6 = __this->get_U3CU3E4__this_2();
		NullCheck(L_6);
		List_1_t4B15F5BE07D169BC8ECAA69E8495524C4CF45663 * L_7 = L_6->get_enemies_13();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m3F9A1F65655B1DBD5D5E52C91D4597B7FE7FB3F7_inline(L_7, /*hidden argument*/List_1_get_Count_m3F9A1F65655B1DBD5D5E52C91D4597B7FE7FB3F7_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_00a5;
		}
	}
	{
		// yield return new WaitForSeconds(turnDelay);
		GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * L_10 = __this->get_U3CU3E4__this_2();
		NullCheck(L_10);
		float L_11 = L_10->get_turnDelay_5();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_12 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_12, L_11, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_12);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_009d:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00a5:
	{
		// for (int i = 0; i < enemies.Count; i++)
		__this->set_U3CiU3E5__1_3(0);
		goto IL_0112;
	}

IL_00ae:
	{
		// enemies[i].MoveEnemy ();
		GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * L_13 = __this->get_U3CU3E4__this_2();
		NullCheck(L_13);
		List_1_t4B15F5BE07D169BC8ECAA69E8495524C4CF45663 * L_14 = L_13->get_enemies_13();
		int32_t L_15 = __this->get_U3CiU3E5__1_3();
		NullCheck(L_14);
		Enemy_tA07E200A067AE652E45412372BA529A68E2DDAC6 * L_16;
		L_16 = List_1_get_Item_m5EA1A9570746D05CD09E123011A17979A5FB3A56_inline(L_14, L_15, /*hidden argument*/List_1_get_Item_m5EA1A9570746D05CD09E123011A17979A5FB3A56_RuntimeMethod_var);
		NullCheck(L_16);
		Enemy_MoveEnemy_m9DDBFC877A56D5D0AA6AB488D44F4E1511D6A325(L_16, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(enemies[i].moveTime);
		GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * L_17 = __this->get_U3CU3E4__this_2();
		NullCheck(L_17);
		List_1_t4B15F5BE07D169BC8ECAA69E8495524C4CF45663 * L_18 = L_17->get_enemies_13();
		int32_t L_19 = __this->get_U3CiU3E5__1_3();
		NullCheck(L_18);
		Enemy_tA07E200A067AE652E45412372BA529A68E2DDAC6 * L_20;
		L_20 = List_1_get_Item_m5EA1A9570746D05CD09E123011A17979A5FB3A56_inline(L_18, L_19, /*hidden argument*/List_1_get_Item_m5EA1A9570746D05CD09E123011A17979A5FB3A56_RuntimeMethod_var);
		NullCheck(L_20);
		float L_21 = ((MovingObject_tE52CA43A917730F49A992474C77FDF2C97A1E024 *)L_20)->get_moveTime_4();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_22 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_22, L_21, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_22);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_00fa:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i = 0; i < enemies.Count; i++)
		int32_t L_23 = __this->get_U3CiU3E5__1_3();
		V_2 = L_23;
		int32_t L_24 = V_2;
		__this->set_U3CiU3E5__1_3(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1)));
	}

IL_0112:
	{
		// for (int i = 0; i < enemies.Count; i++)
		int32_t L_25 = __this->get_U3CiU3E5__1_3();
		GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * L_26 = __this->get_U3CU3E4__this_2();
		NullCheck(L_26);
		List_1_t4B15F5BE07D169BC8ECAA69E8495524C4CF45663 * L_27 = L_26->get_enemies_13();
		NullCheck(L_27);
		int32_t L_28;
		L_28 = List_1_get_Count_m3F9A1F65655B1DBD5D5E52C91D4597B7FE7FB3F7_inline(L_27, /*hidden argument*/List_1_get_Count_m3F9A1F65655B1DBD5D5E52C91D4597B7FE7FB3F7_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_25) < ((int32_t)L_28))? 1 : 0);
		bool L_29 = V_3;
		if (L_29)
		{
			goto IL_00ae;
		}
	}
	{
		// playersTurn = true;
		GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * L_30 = __this->get_U3CU3E4__this_2();
		NullCheck(L_30);
		L_30->set_playersTurn_8((bool)1);
		// enemiesMoving = false;
		GameManager_tF759F7ECF774EA28438C9EB0573CA101E602B447 * L_31 = __this->get_U3CU3E4__this_2();
		NullCheck(L_31);
		L_31->set_enemiesMoving_14((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object Completed.GameManager/<MoveEnemies>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMoveEnemiesU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m67B5996A846DD0DB493EA0561AA0C60F8B7FC299 (U3CMoveEnemiesU3Ed__20_tEB7D40440BA47032AB3D9CB8A0E9B33A9A6EB317 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Completed.GameManager/<MoveEnemies>d__20::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveEnemiesU3Ed__20_System_Collections_IEnumerator_Reset_mD8436F04D397A42BBA48794D660CC14839AF5945 (U3CMoveEnemiesU3Ed__20_tEB7D40440BA47032AB3D9CB8A0E9B33A9A6EB317 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMoveEnemiesU3Ed__20_System_Collections_IEnumerator_Reset_mD8436F04D397A42BBA48794D660CC14839AF5945_RuntimeMethod_var)));
	}
}
// System.Object Completed.GameManager/<MoveEnemies>d__20::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMoveEnemiesU3Ed__20_System_Collections_IEnumerator_get_Current_m3FC4D6F5BBD1A0B1B1F736E27B44790185308F89 (U3CMoveEnemiesU3Ed__20_tEB7D40440BA47032AB3D9CB8A0E9B33A9A6EB317 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void MovingObject/<SmoothMovement>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSmoothMovementU3Ed__7__ctor_mBFA2F4D47B7E7DFF0F4897DE7AA3CE9D51B86026 (U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MovingObject/<SmoothMovement>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSmoothMovementU3Ed__7_System_IDisposable_Dispose_m138A200B22DD7717876E734088A7183DA1DC231F (U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MovingObject/<SmoothMovement>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSmoothMovementU3Ed__7_MoveNext_mAFD5D0EA31A3355527DC1B1B56ED118D9BF957B8 (U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_00de;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float sqrRemainingDistance = (transform.position - end).sqrMagnitude;
		MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C * L_3 = __this->get_U3CU3E4__this_3();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = __this->get_end_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		float L_8;
		L_8 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		__this->set_U3CsqrRemainingDistanceU3E5__1_4(L_8);
		goto IL_00f2;
	}

IL_0051:
	{
		// Vector3 newPostion = Vector3.MoveTowards(rb2D.position, end, inverseMoveTime * Time.deltaTime);
		MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C * L_9 = __this->get_U3CU3E4__this_3();
		NullCheck(L_9);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_10 = L_9->get_rb2D_7();
		NullCheck(L_10);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = __this->get_end_2();
		MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C * L_14 = __this->get_U3CU3E4__this_3();
		NullCheck(L_14);
		float L_15 = L_14->get_inverseMoveTime_8();
		float L_16;
		L_16 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_12, L_13, ((float)il2cpp_codegen_multiply((float)L_15, (float)L_16)), /*hidden argument*/NULL);
		__this->set_U3CnewPostionU3E5__2_5(L_17);
		// rb2D.MovePosition (newPostion);
		MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C * L_18 = __this->get_U3CU3E4__this_3();
		NullCheck(L_18);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_19 = L_18->get_rb2D_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = __this->get_U3CnewPostionU3E5__2_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21;
		L_21 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9(L_19, L_21, /*hidden argument*/NULL);
		// sqrRemainingDistance = (transform.position - end).sqrMagnitude;
		MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C * L_22 = __this->get_U3CU3E4__this_3();
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_23, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = __this->get_end_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_24, L_25, /*hidden argument*/NULL);
		V_1 = L_26;
		float L_27;
		L_27 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		__this->set_U3CsqrRemainingDistanceU3E5__1_4(L_27);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00de:
	{
		__this->set_U3CU3E1__state_0((-1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_28 = __this->get_address_of_U3CnewPostionU3E5__2_5();
		il2cpp_codegen_initobj(L_28, sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
	}

IL_00f2:
	{
		// while(sqrRemainingDistance > float.Epsilon)
		float L_29 = __this->get_U3CsqrRemainingDistanceU3E5__1_4();
		V_2 = (bool)((((float)L_29) > ((float)(1.40129846E-45f)))? 1 : 0);
		bool L_30 = V_2;
		if (L_30)
		{
			goto IL_0051;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object MovingObject/<SmoothMovement>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSmoothMovementU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m414628315853E56CAB8F10A52EC55191864D080E (U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MovingObject/<SmoothMovement>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSmoothMovementU3Ed__7_System_Collections_IEnumerator_Reset_m0E8B1FC6C9C001B9EB5ABA32422DD3DF5EABDFD7 (U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSmoothMovementU3Ed__7_System_Collections_IEnumerator_Reset_m0E8B1FC6C9C001B9EB5ABA32422DD3DF5EABDFD7_RuntimeMethod_var)));
	}
}
// System.Object MovingObject/<SmoothMovement>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSmoothMovementU3Ed__7_System_Collections_IEnumerator_get_Current_m5050A0FCC18D7E395A54A66F05458BC34B81E4BF (U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Completed.MovingObject/<SmoothMovement>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSmoothMovementU3Ed__8__ctor_m422A03A963E8A43B290676741C2DDAD02F22B341 (U3CSmoothMovementU3Ed__8_t0DB90D1365DE00F6486A3948E33911675EAFE307 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Completed.MovingObject/<SmoothMovement>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSmoothMovementU3Ed__8_System_IDisposable_Dispose_mDEB7C6626257E303A73D97E54E61815B4179A99B (U3CSmoothMovementU3Ed__8_t0DB90D1365DE00F6486A3948E33911675EAFE307 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Completed.MovingObject/<SmoothMovement>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSmoothMovementU3Ed__8_MoveNext_m18B96A9F1AEFF1B0DBD73A5DC50C4BF78457866B (U3CSmoothMovementU3Ed__8_t0DB90D1365DE00F6486A3948E33911675EAFE307 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_00ea;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// isMoving = true;
		MovingObject_tE52CA43A917730F49A992474C77FDF2C97A1E024 * L_3 = __this->get_U3CU3E4__this_3();
		NullCheck(L_3);
		L_3->set_isMoving_9((bool)1);
		// float sqrRemainingDistance = (transform.position - end).sqrMagnitude;
		MovingObject_tE52CA43A917730F49A992474C77FDF2C97A1E024 * L_4 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = __this->get_end_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		float L_9;
		L_9 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		__this->set_U3CsqrRemainingDistanceU3E5__1_4(L_9);
		goto IL_00fe;
	}

IL_005d:
	{
		// Vector3 newPostion = Vector3.MoveTowards(rb2D.position, end, inverseMoveTime * Time.deltaTime);
		MovingObject_tE52CA43A917730F49A992474C77FDF2C97A1E024 * L_10 = __this->get_U3CU3E4__this_3();
		NullCheck(L_10);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_11 = L_10->get_rb2D_7();
		NullCheck(L_11);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = __this->get_end_2();
		MovingObject_tE52CA43A917730F49A992474C77FDF2C97A1E024 * L_15 = __this->get_U3CU3E4__this_3();
		NullCheck(L_15);
		float L_16 = L_15->get_inverseMoveTime_8();
		float L_17;
		L_17 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_13, L_14, ((float)il2cpp_codegen_multiply((float)L_16, (float)L_17)), /*hidden argument*/NULL);
		__this->set_U3CnewPostionU3E5__2_5(L_18);
		// rb2D.MovePosition (newPostion);
		MovingObject_tE52CA43A917730F49A992474C77FDF2C97A1E024 * L_19 = __this->get_U3CU3E4__this_3();
		NullCheck(L_19);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_20 = L_19->get_rb2D_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = __this->get_U3CnewPostionU3E5__2_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22;
		L_22 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9(L_20, L_22, /*hidden argument*/NULL);
		// sqrRemainingDistance = (transform.position - end).sqrMagnitude;
		MovingObject_tE52CA43A917730F49A992474C77FDF2C97A1E024 * L_23 = __this->get_U3CU3E4__this_3();
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_24, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = __this->get_end_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_25, L_26, /*hidden argument*/NULL);
		V_1 = L_27;
		float L_28;
		L_28 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		__this->set_U3CsqrRemainingDistanceU3E5__1_4(L_28);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00ea:
	{
		__this->set_U3CU3E1__state_0((-1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_29 = __this->get_address_of_U3CnewPostionU3E5__2_5();
		il2cpp_codegen_initobj(L_29, sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
	}

IL_00fe:
	{
		// while(sqrRemainingDistance > float.Epsilon)
		float L_30 = __this->get_U3CsqrRemainingDistanceU3E5__1_4();
		V_2 = (bool)((((float)L_30) > ((float)(1.40129846E-45f)))? 1 : 0);
		bool L_31 = V_2;
		if (L_31)
		{
			goto IL_005d;
		}
	}
	{
		// rb2D.MovePosition (end);
		MovingObject_tE52CA43A917730F49A992474C77FDF2C97A1E024 * L_32 = __this->get_U3CU3E4__this_3();
		NullCheck(L_32);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_33 = L_32->get_rb2D_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = __this->get_end_2();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35;
		L_35 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_34, /*hidden argument*/NULL);
		NullCheck(L_33);
		Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9(L_33, L_35, /*hidden argument*/NULL);
		// isMoving = false;
		MovingObject_tE52CA43A917730F49A992474C77FDF2C97A1E024 * L_36 = __this->get_U3CU3E4__this_3();
		NullCheck(L_36);
		L_36->set_isMoving_9((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object Completed.MovingObject/<SmoothMovement>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSmoothMovementU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEBD5CBDE47ABA89991A582EE607732AD7A954B8D (U3CSmoothMovementU3Ed__8_t0DB90D1365DE00F6486A3948E33911675EAFE307 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Completed.MovingObject/<SmoothMovement>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSmoothMovementU3Ed__8_System_Collections_IEnumerator_Reset_m3524EF31D4D3574039D256804CC546FE80D96369 (U3CSmoothMovementU3Ed__8_t0DB90D1365DE00F6486A3948E33911675EAFE307 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSmoothMovementU3Ed__8_System_Collections_IEnumerator_Reset_m3524EF31D4D3574039D256804CC546FE80D96369_RuntimeMethod_var)));
	}
}
// System.Object Completed.MovingObject/<SmoothMovement>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSmoothMovementU3Ed__8_System_Collections_IEnumerator_get_Current_m22F4AB50E76FCFDC42DCA17B1A7B9B4995C6FEDE (U3CSmoothMovementU3Ed__8_t0DB90D1365DE00F6486A3948E33911675EAFE307 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Readme/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_mBAD5262A353BC071C61B8DB462A3D4D5AB5C7C4E (Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_UnaryNegation_mA3AA3A53CD43237B0BA7AC57C09A0468A940D7C5_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___a0;
		float L_3 = L_2.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), ((-L_1)), ((-L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0017;
	}

IL_0017:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_2 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_2, (int32_t)L_3);
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
