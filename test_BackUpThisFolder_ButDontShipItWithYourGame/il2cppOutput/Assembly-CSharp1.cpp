#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>>
struct Action_1_t501005E5BA1DE50BCD8884D20F2E93B12ECEA696;
// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>>
struct Action_1_t0A01E63A4339ABF30BF7C175CF376F7CE2BAC1A8;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<TrackSegment>
struct Action_1_t162D7B455EC7673CCA2CAD75CC695BA1C134C522;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<UnityEngine.GameObject>
struct AsyncOperationBase_1_tA2DF1CD254B4FBD8D995A67847F4E04461825E16;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Object>
struct AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>
struct Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,AState>
struct Dictionary_2_t7BCF4AF6611E82F499479A207FBDA99853396D64;
// System.Collections.Generic.Dictionary`2<System.String,Character>
struct Dictionary_2_t751B5EAF466601E97CA8673996839C749DDD0F41;
// System.Collections.Generic.Dictionary`2<System.String,ThemeData>
struct Dictionary_2_t2AE5138514904369750CDACAF4A543780CFCBDC3;
// System.Collections.Generic.Dictionary`2<Consumable/ConsumableType,Consumable>
struct Dictionary_2_t27B796597769ECE7A23954DBCDD66353D187F769;
// System.Collections.Generic.Dictionary`2<Consumable/ConsumableType,System.Int32>
struct Dictionary_2_t46A0F24FB1350A063225F4A250B879021B957502;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<Consumable/ConsumableType>
struct IEqualityComparer_1_tB53BEA65F5D9A5EFA73D9B1261FCE2EC340A5D97;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Character>
struct KeyCollection_t1047A58D1CF5049B650872985A66647C7C3D9427;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,ThemeData>
struct KeyCollection_tD994A73E15C3CADF4570524D38E6495B998C6D4C;
// System.Collections.Generic.Dictionary`2/KeyCollection<Consumable/ConsumableType,System.Int32>
struct KeyCollection_t1EF6179635408EFEDC0AFA2ED2D6D6B33890E3FA;
// System.Collections.Generic.List`1<AState>
struct List_1_t63A91C7422D16EBD0447857407CA19AB22BBB430;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<Character>
struct List_1_tC98DE074A3E56FDD9D42903151EDECB6FA81A140;
// System.Collections.Generic.List`1<HighscoreEntry>
struct List_1_t41FFD2212A30C4D56B039EEC9134BF23286073F0;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<MissionBase>
struct List_1_t062AF7E8527A7D686B4CB557734FFAA572A6AA79;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<TrackSegment>
struct List_1_t0DB7092243157D6581CD75929FDD7D9381EC020D;
// System.Collections.Generic.Stack`1<UnityEngine.GameObject>
struct Stack_1_tEDA6555F162AE2CC5394B19622F8A10CD078C7AF;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Character>
struct ValueCollection_t5C86E93F99A87350BD786CC6BA171CEF908CD0B5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,ThemeData>
struct ValueCollection_t227315EAC803C5A211D0EB3074AEBB65B9D66442;
// System.Collections.Generic.Dictionary`2/ValueCollection<Consumable/ConsumableType,System.Int32>
struct ValueCollection_t1FB9708708E87F73DF05C9057B340C44D1868A86;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Character>[]
struct EntryU5BU5D_t77EFD2C96FA8BE9EF3CB08AF0D009AC658A98203;
// System.Collections.Generic.Dictionary`2/Entry<System.String,ThemeData>[]
struct EntryU5BU5D_tDBDEFA3E77F93CC7B96BB4A8A42C98114F8E4BB4;
// System.Collections.Generic.Dictionary`2/Entry<Consumable/ConsumableType,System.Int32>[]
struct EntryU5BU5D_tE68821ABDAE50CF2998E615891E3BFB1919CDA01;
// AState[]
struct AStateU5BU5D_tC00FD4BAB2BFA03B1BC6A67155F3EFC9BFD6DB40;
// UnityEngine.AddressableAssets.AssetReference[]
struct AssetReferenceU5BU5D_tDEF7B7913B31A77B1DC3672AD2BA01B42C76E81C;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// Character[]
struct CharacterU5BU5D_t0985A3D28A2593F92B2737AC180A00499E8EE2C7;
// CharacterAccessories[]
struct CharacterAccessoriesU5BU5D_t5C845F313E7FB9BC4620908179C8F9521CEC4225;
// Consumable[]
struct ConsumableU5BU5D_tE16B87A047CC5FCC977BD7171F11C5685B987BCD;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// HighscoreEntry[]
struct HighscoreEntryU5BU5D_tFCD29FC6836631507DD35129E58CF7AC8C841AA2;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// MissionBase[]
struct MissionBaseU5BU5D_t6F4FDEE8C1A38FBD8DBE2122A9584CCF713BFDAC;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// ThemeZone[]
struct ThemeZoneU5BU5D_tDFF09451BC953A606D517892D160E1582801771B;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Consumable/ConsumableType[]
struct ConsumableTypeU5BU5D_tE1335C0C328FF43F6E035B3EFB53466A802ACE1E;
// AState
struct AState_t40AE14F23DF9E5C657E24D92449512BF2D79A7CF;
// AdsForMission
struct AdsForMission_tD2BF1BBD0E42576886F251DCA139896D3BAAEAFE;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AddressableAssets.AssetReference
struct AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.Audio.AudioMixer
struct AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Character
struct Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61;
// CharacterAccessories
struct CharacterAccessories_tBA489235C02D98040213C790FC991B786CFF4246;
// CharacterInputController
struct CharacterInputController_tEFAABCE171FE6723AF7896C38D91807A9243CD12;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Consumable
struct Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA;
// ConsumableDatabase
struct ConsumableDatabase_t9DC580A8F1501B9595AD450552561D50632C85F8;
// ConsumableIcon
struct ConsumableIcon_t2B6C00421316B6257C88ED411ADA887971C87ECD;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// DataDeleteConfirmation
struct DataDeleteConfirmation_t1434B59963E72FD0B6CA67CC07E5C4152E227365;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// HighscoreUI
struct HighscoreUI_t5FF0B67CAE537DA29683E12D94CF7C4EE6D1A945;
// IAPHandler
struct IAPHandler_t5B993E8E05BDC4D05DAB7E1388A1AE8C8E25CE73;
// UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation
struct IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Leaderboard
struct Leaderboard_tD194E195710D451D3BC93DAA52955949D15A513E;
// LicenceDisplayer
struct LicenceDisplayer_tDA8F952EA7AD41601219AAD947879653B925AAB2;
// LoadoutState
struct LoadoutState_t14852AB58CF707FCE966C46A1F36351BCA596509;
// MainMenu
struct MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// MissionBase
struct MissionBase_tF261B4C4745F6899122D35DDC58E1607806BC389;
// MissionEntry
struct MissionEntry_tAA22413E7FE0E2347A413354729C9EF4E5893F9A;
// MissionUI
struct MissionUI_t89B83CF976BF2F96BC1FC9FD54156229E4484E6D;
// Modifier
struct Modifier_t20BECEC1252A865A9E54E717290E9CFB34DA5EFA;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Obstacle
struct Obstacle_tFF82FE6E199BF2A4ABE433366761F50C9A4E9A90;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// PlayerData
struct PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A;
// Pooler
struct Pooler_tCB5AF4787F428FACDF4910DA374CCCF8CF67DDB1;
// PowerupIcon
struct PowerupIcon_t76436B2A852D5BC6BE9A3A7995442678C145481B;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// SettingPopup
struct SettingPopup_t3C9582E36558700377CBC4DD2F1541D6A78D8910;
// ShopAccessoriesList
struct ShopAccessoriesList_tC54A532A1828DDDD56ECFBC213E0D0A927C1AF6A;
// ShopCharacterList
struct ShopCharacterList_tD97486C0F497F30D86A2AA193B3F983654DD8279;
// ShopItemList
struct ShopItemList_t9B0978BE7006CCBD7EDF89D8EBBC4DE403367D74;
// ShopItemListItem
struct ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA;
// ShopList
struct ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942;
// ShopThemeList
struct ShopThemeList_t0C68FB74180739CB27FFABD0059C8B50136A107A;
// ShopUI
struct ShopUI_t962C10A7606C823D4BD8CA1BE8C8A0BF882C05CA;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// StartButton
struct StartButton_tF8F6A56061EF51B26F82FD5C23D529D030248545;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// ThemeData
struct ThemeData_tFCA2CE6D2D52E8F115D4D7C30668D417C70C2E7E;
// TrackManager
struct TrackManager_tD73AA6F25EE7382387D947807269E11F3E3BB8EC;
// TrackSegment
struct TrackSegment_tB910757B2D1C9F1F30757C0AB61CEC753AC93288;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// WorldCurver
struct WorldCurver_tB10463E24143CF8151415AE4621E839D9060E784;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// MissionEntry/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t0CA909AAABF9BD6F2902377A0B61FCFBB7896657;
// MissionUI/<Open>d__3
struct U3COpenU3Ed__3_tA09582D5A14BD9ACDAC0E46ED6191BFCD4388457;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// ShopAccessoriesList/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t8F8178E5DBF17463B0EF1C5B6B6DBB6C76C22515;
// ShopAccessoriesList/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t2A99E9B8A3760384DE2C000B920A52454EB002EB;
// ShopAccessoriesList/<>c__DisplayClass4_1
struct U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7;
// ShopCharacterList/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tD95CAB7D5210466F358B471BEF302147BC8ECA39;
// ShopCharacterList/<>c__DisplayClass0_1
struct U3CU3Ec__DisplayClass0_1_tE20AFCC01E01BCFA7F5DE016DB6095FA962CE26C;
// ShopItemList/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t1AA7B023D9BC73588C2C0831617C10371568A18B;
// ShopItemList/<>c__DisplayClass1_1
struct U3CU3Ec__DisplayClass1_1_t7ADBFCB327195FC27B880F7F409ACF98A8FA1224;
// ShopList/RefreshCallback
struct RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C;
// ShopThemeList/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tC2767A9EEEF702657D548FD3DA0A1D1241A6FF69;
// ShopThemeList/<>c__DisplayClass0_1
struct U3CU3Ec__DisplayClass0_1_t4F59F2D4CF79A380ADC64FCB0150B1E93108AE6B;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// TrackManager/<SpawnCoinAndPowerup>d__105
struct U3CSpawnCoinAndPowerupU3Ed__105_t482240A2C8F634C3428AC5AA36C94BDB13E80A0F;
// TrackManager/<SpawnFromAssetReference>d__104
struct U3CSpawnFromAssetReferenceU3Ed__104_t321EAD7BDF2BA61A2F278CD7EF1E68280295A7E5;
// TrackManager/MultiplierModifier
struct MultiplierModifier_tE494C4D857EC83B142999FA9907A0F7D351ABBA8;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t501005E5BA1DE50BCD8884D20F2E93B12ECEA696_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharacterDatabase_t449DEDE309A2E3658D00F86E2304DE45B17819C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Coin_t6EC3724A41D53D737B499E377089217F0190C268_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConsumableTypeU5BU5D_tE1335C0C328FF43F6E035B3EFB53466A802ACE1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC98DE074A3E56FDD9D42903151EDECB6FA81A140_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadoutState_t14852AB58CF707FCE966C46A1F36351BCA596509_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShopItemList_t9B0978BE7006CCBD7EDF89D8EBBC4DE403367D74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThemeDatabase_tFB9AD4BB7BF2A9DAFB608C3FD7D98435685938CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COpenU3Ed__3_tA09582D5A14BD9ACDAC0E46ED6191BFCD4388457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_tC2767A9EEEF702657D548FD3DA0A1D1241A6FF69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_tD95CAB7D5210466F358B471BEF302147BC8ECA39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_1_t4F59F2D4CF79A380ADC64FCB0150B1E93108AE6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_1_tE20AFCC01E01BCFA7F5DE016DB6095FA962CE26C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_t1AA7B023D9BC73588C2C0831617C10371568A18B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_1_t7ADBFCB327195FC27B880F7F409ACF98A8FA1224_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_t8F8178E5DBF17463B0EF1C5B6B6DBB6C76C22515_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t2A99E9B8A3760384DE2C000B920A52454EB002EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_0_t0CA909AAABF9BD6F2902377A0B61FCFBB7896657_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0D228B0F080F9E99F00C7E3FA8DD365300985225;
IL2CPP_EXTERN_C String_t* _stringLiteral11267D419FD27BA72568077CB8FAB452B5B7CFEB;
IL2CPP_EXTERN_C String_t* _stringLiteral1249285791F54D980F45FA97F88CF24A5A66A7C9;
IL2CPP_EXTERN_C String_t* _stringLiteral2227A1F58E0ABCAFB1B57DFA1A29D7D0BA140293;
IL2CPP_EXTERN_C String_t* _stringLiteral2707667773988763E9AB21587C1A2E990C2E8805;
IL2CPP_EXTERN_C String_t* _stringLiteral27237EBF1CF5293F5A67EACBC5088CF99857C37E;
IL2CPP_EXTERN_C String_t* _stringLiteral408E7650848F08974C16653E1DCFF782BEA806A8;
IL2CPP_EXTERN_C String_t* _stringLiteral4F2993C30C434C5F8BA708B372A8D4AC4A165185;
IL2CPP_EXTERN_C String_t* _stringLiteral521B69D184FBAA071E3D8E06625951F33931E30C;
IL2CPP_EXTERN_C String_t* _stringLiteral7B16F31166F250B08D5822F65EFA750F04F0BAE1;
IL2CPP_EXTERN_C String_t* _stringLiteral7D1364D44BA8F634BB9CD0BC5617C11222D23BFC;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral8A8E89BA8972E9CA1DE8455BDEC5102C0D709A57;
IL2CPP_EXTERN_C String_t* _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED;
IL2CPP_EXTERN_C String_t* _stringLiteral98EFCD2577BCD88B20D4486FCC65B58CFDBEEC05;
IL2CPP_EXTERN_C String_t* _stringLiteralB5793A0486CA0270FF49AD51E2176B4E15A6F700;
IL2CPP_EXTERN_C String_t* _stringLiteralB914A48024966053D434FFB9366D986DCC777EB6;
IL2CPP_EXTERN_C String_t* _stringLiteralBDC9D2B6BEE9605AE4516A231E465B4102BD0186;
IL2CPP_EXTERN_C String_t* _stringLiteralC8DC8598A2CFE63A5218705E550A16EC3C1DF743;
IL2CPP_EXTERN_C String_t* _stringLiteralEF3025C3E87DD884D984685F7EED5B5E7E504A7B;
IL2CPP_EXTERN_C String_t* _stringLiteralF608EA91E59D48E4F094374F02A0EA5BD5C97708;
IL2CPP_EXTERN_C const RuntimeMethod* Addressables_LoadAssetAsync_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m71A58B6B9B07D94C0C46D17A4D60EA716C624CB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_add_Completed_mB72E06FC40EBAABFBAF0CC86388158AED1686F61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_op_Implicit_mC309483476DD49EDD7B1CE0F84FB73E588A90416_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHighscoreUI_t5FF0B67CAE537DA29683E12D94CF7C4EE6D1A945_m60A1314C5609A2BFC94894E21628ADD2AF292477_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m0FE313316FA0D66F0D8822D31ADFA287CC8F85E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m977B2A7ED641D746CB6C6DF12A3B98864DE74664_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m812040D1A6298114ACF36CF92EC3E584C467219B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m343230557CFF38D7F9EF6B9AA716B3F5B50D1767_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4CCD915EA4FA58C2FCBD4C1466F9DF7896882B7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3F765C5D5ABE40D9C60D1A6C7B6CC486184B881A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBD725F65A05AAECFD658CDC7AB99C3DDAC30EA88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m534351E94386EEDC9FA2B9F683B9577A030CC282_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFE6172218495ACC00FF796EA6AC2096292F1D852_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAdsForMission_tD2BF1BBD0E42576886F251DCA139896D3BAAEAFE_m7CF3CE8BC2CCD9F702836B769BC8DB1999B439D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMissionEntry_tAA22413E7FE0E2347A413354729C9EF4E5893F9A_m3AACC401B97744E081B91A730051F471273F4808_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisObstacle_tFF82FE6E199BF2A4ABE433366761F50C9A4E9A90_m8A9E869E8CFF155D7D423A45EDBC520AAA656E69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA_m4CF72312516CEB58969E87EEDBE8B48C3BE823AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mAC4CA6F3C83F7E3FA5C10143534C3675B65BFF3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mEF14A8084D77C704BF993FF75DF0E418B26DA854_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEF156179BA222B81FE6D7F0B4F875A7B510C27DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m7EEBC563FD6DB6ABDDB4867E5758B738B187A594_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m67F97BFC2D06501BEE2346AAABC0955129027957_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9069FA1AEE97FE9A743DDC42987FC042D0EA6A8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mAC86F205F4B98BBF36A8DD0D872E32C9177C5B72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF102683CF53C6D2C8DB12F555A4202A17CAAE1CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8DB41347E218BA6000D407D1F130765F6DA3DB6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mAE20C2BE4248B0AA2C5FCA7A0AF32B4C86B519F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFEBF073C5B93D60BFEC82D242322C59514F834F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ShopAccessoriesList_U3CPopulateU3Eb__2_0_mD1BA31B81A6109DF4128D5107FB7FA76065C766E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COpenU3Ed__3_System_Collections_IEnumerator_Reset_m597700101794D4BEEF3C0696E71F030E9382A452_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawnCoinAndPowerupU3Ed__105_System_Collections_IEnumerator_Reset_mDE0165917E763B5468CAEA0DCD25BD3CCAB8C292_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawnFromAssetReferenceU3Ed__104_System_Collections_IEnumerator_Reset_m9E0A0FBB73A860B042264AE5195D1DC8688739F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CPopulateU3Eb__0_m394BDA5416A220BECB0F6690C27FECA6A6F1CABC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CPopulateU3Eb__0_m472A49B9A946368389CDDFE36F0A0852FFDA02B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CPopulateU3Eb__1_m51B9168671B3CC96C54E5B2CC392CF9C0E7DC46F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CPopulateU3Eb__1_mBFDCACCAE7A89F2FC697A93A074D5607389479BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_1_U3CPopulateU3Eb__2_m2477ED05E7D3921AE28351DE5F6B1FB629326447_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_1_U3CPopulateU3Eb__2_mF9F2D98A5E235DDA51A185815F2FE5EC53674D5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CPopulateU3Eb__0_m256F3ADD59D0D6E745FDCFDC8C7A44565F1936CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CPopulateU3Eb__1_m82B0DFF22556EBC2F31F57594359542A16557233_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_1_U3CPopulateU3Eb__2_mE2B0485E7E3650886FE279854765EB6B1350CC68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CLoadedCharacterU3Eb__0_m709FD7FCE1CE66761EDEACBA55EC9D04CC289D30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CLoadedAccessoryU3Eb__0_mECF5AB5E3613A98178828B492D928BA1DCFEC4DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CLoadedAccessoryU3Eb__1_mB1CE3509A5F5C3053DAC0A3AA9580A5E578EF569_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_1_U3CLoadedAccessoryU3Eb__2_m8BA71F6019A2CDCC665F419E6E33FCB978C768EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_1_U3CLoadedAccessoryU3Eb__3_m3475B3347C27EBF4338BAB6010427FBB9BC3F9C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CFillWithMissionU3Eb__0_m631E637685E5CF1C7513A535376E76A1A494AE00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ConsumableType_tF61CF26AF79AC7F9F06A42E41A6DEDD71A9E59A0_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharacterAccessoriesU5BU5D_t5C845F313E7FB9BC4620908179C8F9521CEC4225;
struct ConsumableU5BU5D_tE16B87A047CC5FCC977BD7171F11C5685B987BCD;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct ConsumableTypeU5BU5D_tE1335C0C328FF43F6E035B3EFB53466A802ACE1E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,Character>
struct Dictionary_2_t751B5EAF466601E97CA8673996839C749DDD0F41  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t77EFD2C96FA8BE9EF3CB08AF0D009AC658A98203* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t1047A58D1CF5049B650872985A66647C7C3D9427* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t5C86E93F99A87350BD786CC6BA171CEF908CD0B5* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,ThemeData>
struct Dictionary_2_t2AE5138514904369750CDACAF4A543780CFCBDC3  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tDBDEFA3E77F93CC7B96BB4A8A42C98114F8E4BB4* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tD994A73E15C3CADF4570524D38E6495B998C6D4C* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t227315EAC803C5A211D0EB3074AEBB65B9D66442* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<Consumable/ConsumableType,System.Int32>
struct Dictionary_2_t46A0F24FB1350A063225F4A250B879021B957502  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tE68821ABDAE50CF2998E615891E3BFB1919CDA01* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t1EF6179635408EFEDC0AFA2ED2D6D6B33890E3FA* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t1FB9708708E87F73DF05C9057B340C44D1868A86* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<Character>
struct List_1_tC98DE074A3E56FDD9D42903151EDECB6FA81A140  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	CharacterU5BU5D_t0985A3D28A2593F92B2737AC180A00499E8EE2C7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<HighscoreEntry>
struct List_1_t41FFD2212A30C4D56B039EEC9134BF23286073F0  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	HighscoreEntryU5BU5D_tFCD29FC6836631507DD35129E58CF7AC8C841AA2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<MissionBase>
struct List_1_t062AF7E8527A7D686B4CB557734FFAA572A6AA79  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MissionBaseU5BU5D_t6F4FDEE8C1A38FBD8DBE2122A9584CCF713BFDAC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// CharacterDatabase
struct CharacterDatabase_t449DEDE309A2E3658D00F86E2304DE45B17819C6  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// MissionBase
struct MissionBase_tF261B4C4745F6899122D35DDC58E1607806BC389  : public RuntimeObject
{
	// System.Single MissionBase::progress
	float ___progress_0;
	// System.Single MissionBase::max
	float ___max_1;
	// System.Int32 MissionBase::reward
	int32_t ___reward_2;
};

// PlayerData
struct PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A  : public RuntimeObject
{
	// System.String PlayerData::saveFile
	String_t* ___saveFile_1;
	// System.Int32 PlayerData::coins
	int32_t ___coins_2;
	// System.Int32 PlayerData::premium
	int32_t ___premium_3;
	// System.Collections.Generic.Dictionary`2<Consumable/ConsumableType,System.Int32> PlayerData::consumables
	Dictionary_2_t46A0F24FB1350A063225F4A250B879021B957502* ___consumables_4;
	// System.Collections.Generic.List`1<System.String> PlayerData::characters
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___characters_5;
	// System.Int32 PlayerData::usedCharacter
	int32_t ___usedCharacter_6;
	// System.Int32 PlayerData::usedAccessory
	int32_t ___usedAccessory_7;
	// System.Collections.Generic.List`1<System.String> PlayerData::characterAccessories
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___characterAccessories_8;
	// System.Collections.Generic.List`1<System.String> PlayerData::themes
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___themes_9;
	// System.Int32 PlayerData::usedTheme
	int32_t ___usedTheme_10;
	// System.Collections.Generic.List`1<HighscoreEntry> PlayerData::highscores
	List_1_t41FFD2212A30C4D56B039EEC9134BF23286073F0* ___highscores_11;
	// System.Collections.Generic.List`1<MissionBase> PlayerData::missions
	List_1_t062AF7E8527A7D686B4CB557734FFAA572A6AA79* ___missions_12;
	// System.String PlayerData::previousName
	String_t* ___previousName_13;
	// System.Boolean PlayerData::licenceAccepted
	bool ___licenceAccepted_14;
	// System.Boolean PlayerData::tutorialDone
	bool ___tutorialDone_15;
	// System.Single PlayerData::masterVolume
	float ___masterVolume_16;
	// System.Single PlayerData::musicVolume
	float ___musicVolume_17;
	// System.Single PlayerData::masterSFXVolume
	float ___masterSFXVolume_18;
	// System.Int32 PlayerData::ftueLevel
	int32_t ___ftueLevel_19;
	// System.Int32 PlayerData::rank
	int32_t ___rank_20;
};

// Pooler
struct Pooler_tCB5AF4787F428FACDF4910DA374CCCF8CF67DDB1  : public RuntimeObject
{
	// System.Collections.Generic.Stack`1<UnityEngine.GameObject> Pooler::m_FreeInstances
	Stack_1_tEDA6555F162AE2CC5394B19622F8A10CD078C7AF* ___m_FreeInstances_0;
	// UnityEngine.GameObject Pooler::m_Original
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Original_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// ThemeDatabase
struct ThemeDatabase_tFB9AD4BB7BF2A9DAFB608C3FD7D98435685938CA  : public RuntimeObject
{
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// MissionEntry/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t0CA909AAABF9BD6F2902377A0B61FCFBB7896657  : public RuntimeObject
{
	// MissionUI MissionEntry/<>c__DisplayClass7_0::owner
	MissionUI_t89B83CF976BF2F96BC1FC9FD54156229E4484E6D* ___owner_0;
	// MissionBase MissionEntry/<>c__DisplayClass7_0::m
	MissionBase_tF261B4C4745F6899122D35DDC58E1607806BC389* ___m_1;
};

// ShopAccessoriesList/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t8F8178E5DBF17463B0EF1C5B6B6DBB6C76C22515  : public RuntimeObject
{
	// ShopAccessoriesList ShopAccessoriesList/<>c__DisplayClass3_0::<>4__this
	ShopAccessoriesList_tC54A532A1828DDDD56ECFBC213E0D0A927C1AF6A* ___U3CU3E4__this_0;
	// System.Int32 ShopAccessoriesList/<>c__DisplayClass3_0::currentIndex
	int32_t ___currentIndex_1;
};

// ShopAccessoriesList/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t2A99E9B8A3760384DE2C000B920A52454EB002EB  : public RuntimeObject
{
	// ShopAccessoriesList ShopAccessoriesList/<>c__DisplayClass4_0::<>4__this
	ShopAccessoriesList_tC54A532A1828DDDD56ECFBC213E0D0A927C1AF6A* ___U3CU3E4__this_0;
	// System.Int32 ShopAccessoriesList/<>c__DisplayClass4_0::characterIndex
	int32_t ___characterIndex_1;
	// System.Int32 ShopAccessoriesList/<>c__DisplayClass4_0::accessoryIndex
	int32_t ___accessoryIndex_2;
};

// ShopAccessoriesList/<>c__DisplayClass4_1
struct U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7  : public RuntimeObject
{
	// System.String ShopAccessoriesList/<>c__DisplayClass4_1::compoundName
	String_t* ___compoundName_0;
	// CharacterAccessories ShopAccessoriesList/<>c__DisplayClass4_1::accessory
	CharacterAccessories_tBA489235C02D98040213C790FC991B786CFF4246* ___accessory_1;
	// ShopItemListItem ShopAccessoriesList/<>c__DisplayClass4_1::itm
	ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* ___itm_2;
	// ShopAccessoriesList/<>c__DisplayClass4_0 ShopAccessoriesList/<>c__DisplayClass4_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass4_0_t2A99E9B8A3760384DE2C000B920A52454EB002EB* ___CSU24U3CU3E8__locals1_3;
};

// ShopCharacterList/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tD95CAB7D5210466F358B471BEF302147BC8ECA39  : public RuntimeObject
{
	// Character ShopCharacterList/<>c__DisplayClass0_0::c
	Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* ___c_0;
	// ShopCharacterList ShopCharacterList/<>c__DisplayClass0_0::<>4__this
	ShopCharacterList_tD97486C0F497F30D86A2AA193B3F983654DD8279* ___U3CU3E4__this_1;
	// UnityEngine.Events.UnityAction ShopCharacterList/<>c__DisplayClass0_0::<>9__1
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___U3CU3E9__1_2;
};

// ShopCharacterList/<>c__DisplayClass0_1
struct U3CU3Ec__DisplayClass0_1_tE20AFCC01E01BCFA7F5DE016DB6095FA962CE26C  : public RuntimeObject
{
	// ShopItemListItem ShopCharacterList/<>c__DisplayClass0_1::itm
	ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* ___itm_0;
	// ShopCharacterList/<>c__DisplayClass0_0 ShopCharacterList/<>c__DisplayClass0_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass0_0_tD95CAB7D5210466F358B471BEF302147BC8ECA39* ___CSU24U3CU3E8__locals1_1;
};

// ShopItemList/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t1AA7B023D9BC73588C2C0831617C10371568A18B  : public RuntimeObject
{
	// Consumable ShopItemList/<>c__DisplayClass1_0::c
	Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA* ___c_0;
	// ShopItemList ShopItemList/<>c__DisplayClass1_0::<>4__this
	ShopItemList_t9B0978BE7006CCBD7EDF89D8EBBC4DE403367D74* ___U3CU3E4__this_1;
	// UnityEngine.Events.UnityAction ShopItemList/<>c__DisplayClass1_0::<>9__1
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___U3CU3E9__1_2;
};

// ShopItemList/<>c__DisplayClass1_1
struct U3CU3Ec__DisplayClass1_1_t7ADBFCB327195FC27B880F7F409ACF98A8FA1224  : public RuntimeObject
{
	// ShopItemListItem ShopItemList/<>c__DisplayClass1_1::itm
	ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* ___itm_0;
	// ShopItemList/<>c__DisplayClass1_0 ShopItemList/<>c__DisplayClass1_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass1_0_t1AA7B023D9BC73588C2C0831617C10371568A18B* ___CSU24U3CU3E8__locals1_1;
};

// ShopThemeList/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tC2767A9EEEF702657D548FD3DA0A1D1241A6FF69  : public RuntimeObject
{
	// ThemeData ShopThemeList/<>c__DisplayClass0_0::theme
	ThemeData_tFCA2CE6D2D52E8F115D4D7C30668D417C70C2E7E* ___theme_0;
	// ShopThemeList ShopThemeList/<>c__DisplayClass0_0::<>4__this
	ShopThemeList_t0C68FB74180739CB27FFABD0059C8B50136A107A* ___U3CU3E4__this_1;
	// UnityEngine.Events.UnityAction ShopThemeList/<>c__DisplayClass0_0::<>9__1
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___U3CU3E9__1_2;
};

// ShopThemeList/<>c__DisplayClass0_1
struct U3CU3Ec__DisplayClass0_1_t4F59F2D4CF79A380ADC64FCB0150B1E93108AE6B  : public RuntimeObject
{
	// ShopItemListItem ShopThemeList/<>c__DisplayClass0_1::itm
	ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* ___itm_0;
	// ShopThemeList/<>c__DisplayClass0_0 ShopThemeList/<>c__DisplayClass0_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass0_0_tC2767A9EEEF702657D548FD3DA0A1D1241A6FF69* ___CSU24U3CU3E8__locals1_1;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>
struct AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA 
{
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_InternalOp
	AsyncOperationBase_1_tA2DF1CD254B4FBD8D995A67847F4E04461825E16* ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_LocationName
	String_t* ___m_LocationName_2;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_UnloadSceneOpExcludeReleaseCallback
	bool ___m_UnloadSceneOpExcludeReleaseCallback_3;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>
struct AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 
{
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_InternalOp
	AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13* ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_LocationName
	String_t* ___m_LocationName_2;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_UnloadSceneOpExcludeReleaseCallback
	bool ___m_UnloadSceneOpExcludeReleaseCallback_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,Character>
struct KeyValuePair_2_t250FE3D0921BEB2B6A839207B24330D2DAFA30BF 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,ThemeData>
struct KeyValuePair_2_t01551AB7A416E72667B12B2ED22B887A8B3E6A49 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ThemeData_tFCA2CE6D2D52E8F115D4D7C30668D417C70C2E7E* ___value_1;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D 
{
	// UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::m_InternalOp
	RuntimeObject* ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::m_LocationName
	String_t* ___m_LocationName_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_pinvoke
{
	RuntimeObject* ___m_InternalOp_0;
	int32_t ___m_Version_1;
	char* ___m_LocationName_2;
};
// Native definition for COM marshalling of UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_com
{
	RuntimeObject* ___m_InternalOp_0;
	int32_t ___m_Version_1;
	Il2CppChar* ___m_LocationName_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// HighscoreEntry
struct HighscoreEntry_t4CA5E34561AAF0F64E532825DE3BBC1FB673130F 
{
	// System.String HighscoreEntry::name
	String_t* ___name_0;
	// System.Int32 HighscoreEntry::score
	int32_t ___score_1;
};
// Native definition for P/Invoke marshalling of HighscoreEntry
struct HighscoreEntry_t4CA5E34561AAF0F64E532825DE3BBC1FB673130F_marshaled_pinvoke
{
	char* ___name_0;
	int32_t ___score_1;
};
// Native definition for COM marshalling of HighscoreEntry
struct HighscoreEntry_t4CA5E34561AAF0F64E532825DE3BBC1FB673130F_marshaled_com
{
	Il2CppChar* ___name_0;
	int32_t ___score_1;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23__padding[16];
	};
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Character>
struct Enumerator_tA4A8A82222F9450F3DBB58BB9F30D1F78FEF7916 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t751B5EAF466601E97CA8673996839C749DDD0F41* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t250FE3D0921BEB2B6A839207B24330D2DAFA30BF ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,ThemeData>
struct Enumerator_t9458D695C84BD390D43146295306DD1D9F8AB90C 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t2AE5138514904369750CDACAF4A543780CFCBDC3* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t01551AB7A416E72667B12B2ED22B887A8B3E6A49 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

// UnityEngine.AddressableAssets.AssetReference
struct AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740  : public RuntimeObject
{
	// System.String UnityEngine.AddressableAssets.AssetReference::m_AssetGUID
	String_t* ___m_AssetGUID_0;
	// System.String UnityEngine.AddressableAssets.AssetReference::m_SubObjectName
	String_t* ___m_SubObjectName_1;
	// System.String UnityEngine.AddressableAssets.AssetReference::m_SubObjectType
	String_t* ___m_SubObjectType_2;
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle UnityEngine.AddressableAssets.AssetReference::m_Operation
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___m_Operation_3;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// Consumable/ConsumableType
struct ConsumableType_tF61CF26AF79AC7F9F06A42E41A6DEDD71A9E59A0 
{
	// System.Int32 Consumable/ConsumableType::value__
	int32_t ___value___2;
};

// MissionUI/<Open>d__3
struct U3COpenU3Ed__3_tA09582D5A14BD9ACDAC0E46ED6191BFCD4388457  : public RuntimeObject
{
	// System.Int32 MissionUI/<Open>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MissionUI/<Open>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MissionUI MissionUI/<Open>d__3::<>4__this
	MissionUI_t89B83CF976BF2F96BC1FC9FD54156229E4484E6D* ___U3CU3E4__this_2;
	// System.Int32 MissionUI/<Open>d__3::<i>5__2
	int32_t ___U3CiU3E5__2_3;
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle MissionUI/<Open>d__3::<op>5__3
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___U3CopU3E5__3_4;
};

// TrackManager/<SpawnCoinAndPowerup>d__105
struct U3CSpawnCoinAndPowerupU3Ed__105_t482240A2C8F634C3428AC5AA36C94BDB13E80A0F  : public RuntimeObject
{
	// System.Int32 TrackManager/<SpawnCoinAndPowerup>d__105::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TrackManager/<SpawnCoinAndPowerup>d__105::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TrackManager TrackManager/<SpawnCoinAndPowerup>d__105::<>4__this
	TrackManager_tD73AA6F25EE7382387D947807269E11F3E3BB8EC* ___U3CU3E4__this_2;
	// TrackSegment TrackManager/<SpawnCoinAndPowerup>d__105::segment
	TrackSegment_tB910757B2D1C9F1F30757C0AB61CEC753AC93288* ___segment_3;
	// System.Single TrackManager/<SpawnCoinAndPowerup>d__105::<currentWorldPos>5__2
	float ___U3CcurrentWorldPosU3E5__2_4;
	// System.Int32 TrackManager/<SpawnCoinAndPowerup>d__105::<currentLane>5__3
	int32_t ___U3CcurrentLaneU3E5__3_5;
	// System.Single TrackManager/<SpawnCoinAndPowerup>d__105::<powerupChance>5__4
	float ___U3CpowerupChanceU3E5__4_6;
	// System.Single TrackManager/<SpawnCoinAndPowerup>d__105::<premiumChance>5__5
	float ___U3CpremiumChanceU3E5__5_7;
	// System.Int32 TrackManager/<SpawnCoinAndPowerup>d__105::<picked>5__6
	int32_t ___U3CpickedU3E5__6_8;
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle TrackManager/<SpawnCoinAndPowerup>d__105::<op>5__7
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___U3CopU3E5__7_9;
};

// TrackManager/<SpawnFromAssetReference>d__104
struct U3CSpawnFromAssetReferenceU3Ed__104_t321EAD7BDF2BA61A2F278CD7EF1E68280295A7E5  : public RuntimeObject
{
	// System.Int32 TrackManager/<SpawnFromAssetReference>d__104::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TrackManager/<SpawnFromAssetReference>d__104::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.AddressableAssets.AssetReference TrackManager/<SpawnFromAssetReference>d__104::reference
	AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740* ___reference_2;
	// TrackSegment TrackManager/<SpawnFromAssetReference>d__104::segment
	TrackSegment_tB910757B2D1C9F1F30757C0AB61CEC753AC93288* ___segment_3;
	// System.Int32 TrackManager/<SpawnFromAssetReference>d__104::posIndex
	int32_t ___posIndex_4;
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle TrackManager/<SpawnFromAssetReference>d__104::<op>5__2
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___U3CopU3E5__2_5;
};

// UnityEngine.Audio.AudioMixer
struct AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>>
struct Action_1_t501005E5BA1DE50BCD8884D20F2E93B12ECEA696  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// ConsumableDatabase
struct ConsumableDatabase_t9DC580A8F1501B9595AD450552561D50632C85F8  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// Consumable[] ConsumableDatabase::consumbales
	ConsumableU5BU5D_tE16B87A047CC5FCC977BD7171F11C5685B987BCD* ___consumbales_4;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// ThemeData
struct ThemeData_tFCA2CE6D2D52E8F115D4D7C30668D417C70C2E7E  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String ThemeData::themeName
	String_t* ___themeName_4;
	// System.Int32 ThemeData::cost
	int32_t ___cost_5;
	// System.Int32 ThemeData::premiumCost
	int32_t ___premiumCost_6;
	// UnityEngine.Sprite ThemeData::themeIcon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___themeIcon_7;
	// ThemeZone[] ThemeData::zones
	ThemeZoneU5BU5D_tDFF09451BC953A606D517892D160E1582801771B* ___zones_8;
	// UnityEngine.GameObject ThemeData::collectiblePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___collectiblePrefab_9;
	// UnityEngine.GameObject ThemeData::premiumCollectible
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___premiumCollectible_10;
	// UnityEngine.GameObject[] ThemeData::cloudPrefabs
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___cloudPrefabs_11;
	// UnityEngine.Vector3 ThemeData::cloudMinimumDistance
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cloudMinimumDistance_12;
	// UnityEngine.Vector3 ThemeData::cloudSpread
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cloudSpread_13;
	// System.Int32 ThemeData::cloudNumber
	int32_t ___cloudNumber_14;
	// UnityEngine.Mesh ThemeData::skyMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___skyMesh_15;
	// UnityEngine.Mesh ThemeData::UIGroundMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___UIGroundMesh_16;
	// UnityEngine.Color ThemeData::fogColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___fogColor_17;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// ShopList/RefreshCallback
struct RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// AState
struct AState_t40AE14F23DF9E5C657E24D92449512BF2D79A7CF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GameManager AState::manager
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___manager_4;
};

// AdsForMission
struct AdsForMission_tD2BF1BBD0E42576886F251DCA139896D3BAAEAFE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// MissionUI AdsForMission::missionUI
	MissionUI_t89B83CF976BF2F96BC1FC9FD54156229E4484E6D* ___missionUI_4;
	// UnityEngine.UI.Text AdsForMission::newMissionText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___newMissionText_5;
	// UnityEngine.UI.Button AdsForMission::adsButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___adsButton_6;
	// System.String AdsForMission::adsPlacementId
	String_t* ___adsPlacementId_7;
	// System.Boolean AdsForMission::adsRewarded
	bool ___adsRewarded_8;
};

// Character
struct Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Character::characterName
	String_t* ___characterName_4;
	// System.Int32 Character::cost
	int32_t ___cost_5;
	// System.Int32 Character::premiumCost
	int32_t ___premiumCost_6;
	// CharacterAccessories[] Character::accessories
	CharacterAccessoriesU5BU5D_t5C845F313E7FB9BC4620908179C8F9521CEC4225* ___accessories_7;
	// UnityEngine.Animator Character::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_8;
	// UnityEngine.Sprite Character::icon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___icon_9;
	// UnityEngine.AudioClip Character::jumpSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___jumpSound_10;
	// UnityEngine.AudioClip Character::hitSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___hitSound_11;
	// UnityEngine.AudioClip Character::deathSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___deathSound_12;
};

// CharacterAccessories
struct CharacterAccessories_tBA489235C02D98040213C790FC991B786CFF4246  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String CharacterAccessories::accessoryName
	String_t* ___accessoryName_4;
	// System.Int32 CharacterAccessories::cost
	int32_t ___cost_5;
	// System.Int32 CharacterAccessories::premiumCost
	int32_t ___premiumCost_6;
	// UnityEngine.Sprite CharacterAccessories::accessoryIcon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___accessoryIcon_7;
};

// Coin
struct Coin_t6EC3724A41D53D737B499E377089217F0190C268  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Coin::isPremium
	bool ___isPremium_5;
};

// Consumable
struct Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Consumable::duration
	float ___duration_4;
	// UnityEngine.Sprite Consumable::icon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___icon_5;
	// UnityEngine.AudioClip Consumable::activatedSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___activatedSound_6;
	// UnityEngine.AddressableAssets.AssetReference Consumable::ActivatedParticleReference
	AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740* ___ActivatedParticleReference_7;
	// System.Boolean Consumable::canBeSpawned
	bool ___canBeSpawned_8;
	// System.Boolean Consumable::m_Active
	bool ___m_Active_9;
	// System.Single Consumable::m_SinceStart
	float ___m_SinceStart_10;
	// UnityEngine.ParticleSystem Consumable::m_ParticleSpawned
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSpawned_11;
};

// DataDeleteConfirmation
struct DataDeleteConfirmation_t1434B59963E72FD0B6CA67CC07E5C4152E227365  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// LoadoutState DataDeleteConfirmation::m_LoadoutState
	LoadoutState_t14852AB58CF707FCE966C46A1F36351BCA596509* ___m_LoadoutState_4;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// AState[] GameManager::states
	AStateU5BU5D_tC00FD4BAB2BFA03B1BC6A67155F3EFC9BFD6DB40* ___states_5;
	// ConsumableDatabase GameManager::m_ConsumableDatabase
	ConsumableDatabase_t9DC580A8F1501B9595AD450552561D50632C85F8* ___m_ConsumableDatabase_6;
	// System.Collections.Generic.List`1<AState> GameManager::m_StateStack
	List_1_t63A91C7422D16EBD0447857407CA19AB22BBB430* ___m_StateStack_7;
	// System.Collections.Generic.Dictionary`2<System.String,AState> GameManager::m_StateDict
	Dictionary_2_t7BCF4AF6611E82F499479A207FBDA99853396D64* ___m_StateDict_8;
};

// HighscoreUI
struct HighscoreUI_t5FF0B67CAE537DA29683E12D94CF7C4EE6D1A945  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text HighscoreUI::number
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___number_4;
	// UnityEngine.UI.Text HighscoreUI::playerName
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___playerName_5;
	// UnityEngine.UI.InputField HighscoreUI::inputName
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___inputName_6;
	// UnityEngine.UI.Text HighscoreUI::score
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___score_7;
};

// IAPHandler
struct IAPHandler_t5B993E8E05BDC4D05DAB7E1388A1AE8C8E25CE73  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Leaderboard
struct Leaderboard_tD194E195710D451D3BC93DAA52955949D15A513E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform Leaderboard::entriesRoot
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___entriesRoot_4;
	// System.Int32 Leaderboard::entriesCount
	int32_t ___entriesCount_5;
	// HighscoreUI Leaderboard::playerEntry
	HighscoreUI_t5FF0B67CAE537DA29683E12D94CF7C4EE6D1A945* ___playerEntry_6;
	// System.Boolean Leaderboard::forcePlayerDisplay
	bool ___forcePlayerDisplay_7;
	// System.Boolean Leaderboard::displayPlayer
	bool ___displayPlayer_8;
};

// LicenceDisplayer
struct LicenceDisplayer_tDA8F952EA7AD41601219AAD947879653B925AAB2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// MainMenu
struct MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// MissionEntry
struct MissionEntry_tAA22413E7FE0E2347A413354729C9EF4E5893F9A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text MissionEntry::descText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___descText_4;
	// UnityEngine.UI.Text MissionEntry::rewardText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___rewardText_5;
	// UnityEngine.UI.Button MissionEntry::claimButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___claimButton_6;
	// UnityEngine.UI.Text MissionEntry::progressText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___progressText_7;
	// UnityEngine.UI.Image MissionEntry::background
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___background_8;
	// UnityEngine.Color MissionEntry::notCompletedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___notCompletedColor_9;
	// UnityEngine.Color MissionEntry::completedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___completedColor_10;
};

// MissionUI
struct MissionUI_t89B83CF976BF2F96BC1FC9FD54156229E4484E6D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform MissionUI::missionPlace
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___missionPlace_4;
	// UnityEngine.AddressableAssets.AssetReference MissionUI::missionEntryPrefab
	AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740* ___missionEntryPrefab_5;
	// UnityEngine.AddressableAssets.AssetReference MissionUI::addMissionButtonPrefab
	AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740* ___addMissionButtonPrefab_6;
};

// Obstacle
struct Obstacle_tFF82FE6E199BF2A4ABE433366761F50C9A4E9A90  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioClip Obstacle::impactedSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___impactedSound_4;
};

// PowerupIcon
struct PowerupIcon_t76436B2A852D5BC6BE9A3A7995442678C145481B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Consumable PowerupIcon::linkedConsumable
	Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA* ___linkedConsumable_4;
	// UnityEngine.UI.Image PowerupIcon::icon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___icon_5;
	// UnityEngine.UI.Slider PowerupIcon::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_6;
};

// SettingPopup
struct SettingPopup_t3C9582E36558700377CBC4DD2F1541D6A78D8910  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Audio.AudioMixer SettingPopup::mixer
	AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* ___mixer_4;
	// UnityEngine.UI.Slider SettingPopup::masterSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___masterSlider_5;
	// UnityEngine.UI.Slider SettingPopup::musicSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___musicSlider_6;
	// UnityEngine.UI.Slider SettingPopup::masterSFXSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___masterSFXSlider_7;
	// LoadoutState SettingPopup::loadoutState
	LoadoutState_t14852AB58CF707FCE966C46A1F36351BCA596509* ___loadoutState_8;
	// DataDeleteConfirmation SettingPopup::confirmationPopup
	DataDeleteConfirmation_t1434B59963E72FD0B6CA67CC07E5C4152E227365* ___confirmationPopup_9;
	// System.Single SettingPopup::m_MasterVolume
	float ___m_MasterVolume_10;
	// System.Single SettingPopup::m_MusicVolume
	float ___m_MusicVolume_11;
	// System.Single SettingPopup::m_MasterSFXVolume
	float ___m_MasterSFXVolume_12;
};

// ShopItemListItem
struct ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image ShopItemListItem::icon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___icon_4;
	// UnityEngine.UI.Text ShopItemListItem::nameText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___nameText_5;
	// UnityEngine.UI.Text ShopItemListItem::pricetext
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___pricetext_6;
	// UnityEngine.UI.Text ShopItemListItem::premiumText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___premiumText_7;
	// UnityEngine.UI.Button ShopItemListItem::buyButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buyButton_8;
	// UnityEngine.UI.Text ShopItemListItem::countText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___countText_9;
	// UnityEngine.Sprite ShopItemListItem::buyButtonSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___buyButtonSprite_10;
	// UnityEngine.Sprite ShopItemListItem::disabledButtonSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___disabledButtonSprite_11;
};

// ShopList
struct ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AddressableAssets.AssetReference ShopList::prefabItem
	AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740* ___prefabItem_4;
	// UnityEngine.RectTransform ShopList::listRoot
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___listRoot_5;
	// ShopList/RefreshCallback ShopList::m_RefreshCallback
	RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C* ___m_RefreshCallback_6;
};

// ShopUI
struct ShopUI_t962C10A7606C823D4BD8CA1BE8C8A0BF882C05CA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ConsumableDatabase ShopUI::consumableDatabase
	ConsumableDatabase_t9DC580A8F1501B9595AD450552561D50632C85F8* ___consumableDatabase_4;
	// ShopItemList ShopUI::itemList
	ShopItemList_t9B0978BE7006CCBD7EDF89D8EBBC4DE403367D74* ___itemList_5;
	// ShopCharacterList ShopUI::characterList
	ShopCharacterList_tD97486C0F497F30D86A2AA193B3F983654DD8279* ___characterList_6;
	// ShopAccessoriesList ShopUI::accessoriesList
	ShopAccessoriesList_tC54A532A1828DDDD56ECFBC213E0D0A927C1AF6A* ___accessoriesList_7;
	// ShopThemeList ShopUI::themeList
	ShopThemeList_t0C68FB74180739CB27FFABD0059C8B50136A107A* ___themeList_8;
	// UnityEngine.UI.Text ShopUI::coinCounter
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___coinCounter_9;
	// UnityEngine.UI.Text ShopUI::premiumCounter
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___premiumCounter_10;
	// UnityEngine.UI.Button ShopUI::cheatButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___cheatButton_11;
	// ShopList ShopUI::m_OpenList
	ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942* ___m_OpenList_12;
};

// StartButton
struct StartButton_tF8F6A56061EF51B26F82FD5C23D529D030248545  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// TrackManager
struct TrackManager_tD73AA6F25EE7382387D947807269E11F3E3BB8EC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TrackManager/MultiplierModifier TrackManager::modifyMultiply
	MultiplierModifier_tE494C4D857EC83B142999FA9907A0F7D351ABBA8* ___modifyMultiply_6;
	// CharacterInputController TrackManager::characterController
	CharacterInputController_tEFAABCE171FE6723AF7896C38D91807A9243CD12* ___characterController_7;
	// System.Single TrackManager::minSpeed
	float ___minSpeed_8;
	// System.Single TrackManager::maxSpeed
	float ___maxSpeed_9;
	// System.Int32 TrackManager::speedStep
	int32_t ___speedStep_10;
	// System.Single TrackManager::laneOffset
	float ___laneOffset_11;
	// System.Boolean TrackManager::invincible
	bool ___invincible_12;
	// ConsumableDatabase TrackManager::consumableDatabase
	ConsumableDatabase_t9DC580A8F1501B9595AD450552561D50632C85F8* ___consumableDatabase_13;
	// UnityEngine.MeshFilter TrackManager::skyMeshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___skyMeshFilter_14;
	// UnityEngine.Transform TrackManager::parallaxRoot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parallaxRoot_15;
	// System.Single TrackManager::parallaxRatio
	float ___parallaxRatio_16;
	// ThemeData TrackManager::tutorialThemeData
	ThemeData_tFCA2CE6D2D52E8F115D4D7C30668D417C70C2E7E* ___tutorialThemeData_17;
	// System.Action`1<TrackSegment> TrackManager::newSegmentCreated
	Action_1_t162D7B455EC7673CCA2CAD75CC695BA1C134C522* ___newSegmentCreated_18;
	// System.Action`1<TrackSegment> TrackManager::currentSegementChanged
	Action_1_t162D7B455EC7673CCA2CAD75CC695BA1C134C522* ___currentSegementChanged_19;
	// System.Boolean TrackManager::<isLoaded>k__BackingField
	bool ___U3CisLoadedU3Ek__BackingField_20;
	// System.Boolean TrackManager::<firstObstacle>k__BackingField
	bool ___U3CfirstObstacleU3Ek__BackingField_21;
	// System.Single TrackManager::m_TimeToStart
	float ___m_TimeToStart_22;
	// System.Int32 TrackManager::m_TrackSeed
	int32_t ___m_TrackSeed_23;
	// System.Single TrackManager::m_CurrentSegmentDistance
	float ___m_CurrentSegmentDistance_24;
	// System.Single TrackManager::m_TotalWorldDistance
	float ___m_TotalWorldDistance_25;
	// System.Boolean TrackManager::m_IsMoving
	bool ___m_IsMoving_26;
	// System.Single TrackManager::m_Speed
	float ___m_Speed_27;
	// System.Single TrackManager::m_TimeSincePowerup
	float ___m_TimeSincePowerup_28;
	// System.Single TrackManager::m_TimeSinceLastPremium
	float ___m_TimeSinceLastPremium_29;
	// System.Int32 TrackManager::m_Multiplier
	int32_t ___m_Multiplier_30;
	// System.Collections.Generic.List`1<TrackSegment> TrackManager::m_Segments
	List_1_t0DB7092243157D6581CD75929FDD7D9381EC020D* ___m_Segments_31;
	// System.Collections.Generic.List`1<TrackSegment> TrackManager::m_PastSegments
	List_1_t0DB7092243157D6581CD75929FDD7D9381EC020D* ___m_PastSegments_32;
	// System.Int32 TrackManager::m_SafeSegementLeft
	int32_t ___m_SafeSegementLeft_33;
	// ThemeData TrackManager::m_CurrentThemeData
	ThemeData_tFCA2CE6D2D52E8F115D4D7C30668D417C70C2E7E* ___m_CurrentThemeData_34;
	// System.Int32 TrackManager::m_CurrentZone
	int32_t ___m_CurrentZone_35;
	// System.Single TrackManager::m_CurrentZoneDistance
	float ___m_CurrentZoneDistance_36;
	// System.Int32 TrackManager::m_PreviousSegment
	int32_t ___m_PreviousSegment_37;
	// System.Int32 TrackManager::m_Score
	int32_t ___m_Score_38;
	// System.Single TrackManager::m_ScoreAccum
	float ___m_ScoreAccum_39;
	// System.Boolean TrackManager::m_Rerun
	bool ___m_Rerun_40;
	// System.Boolean TrackManager::m_IsTutorial
	bool ___m_IsTutorial_41;
	// UnityEngine.Vector3 TrackManager::m_CameraOriginalPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CameraOriginalPos_42;
	// System.Int32 TrackManager::_parallaxRootChildren
	int32_t ____parallaxRootChildren_52;
	// System.Int32 TrackManager::_spawnedSegments
	int32_t ____spawnedSegments_53;
	// UnityEngine.Vector3 TrackManager::_offScreenSpawnPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____offScreenSpawnPos_54;
};

// TrackSegment
struct TrackSegment_tB910757B2D1C9F1F30757C0AB61CEC753AC93288  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform TrackSegment::pathParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___pathParent_4;
	// TrackManager TrackSegment::manager
	TrackManager_tD73AA6F25EE7382387D947807269E11F3E3BB8EC* ___manager_5;
	// UnityEngine.Transform TrackSegment::objectRoot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___objectRoot_6;
	// UnityEngine.Transform TrackSegment::collectibleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___collectibleTransform_7;
	// UnityEngine.AddressableAssets.AssetReference[] TrackSegment::possibleObstacles
	AssetReferenceU5BU5D_tDEF7B7913B31A77B1DC3672AD2BA01B42C76E81C* ___possibleObstacles_8;
	// System.Single[] TrackSegment::obstaclePositions
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___obstaclePositions_9;
	// System.Single TrackSegment::m_WorldLength
	float ___m_WorldLength_10;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// WorldCurver
struct WorldCurver_tB10463E24143CF8151415AE4621E839D9060E784  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single WorldCurver::curveStrength
	float ___curveStrength_4;
	// System.Int32 WorldCurver::m_CurveStrengthID
	int32_t ___m_CurveStrengthID_5;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// LoadoutState
struct LoadoutState_t14852AB58CF707FCE966C46A1F36351BCA596509  : public AState_t40AE14F23DF9E5C657E24D92449512BF2D79A7CF
{
	// UnityEngine.Canvas LoadoutState::inventoryCanvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___inventoryCanvas_5;
	// UnityEngine.UI.Text LoadoutState::charNameDisplay
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___charNameDisplay_6;
	// UnityEngine.RectTransform LoadoutState::charSelect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___charSelect_7;
	// UnityEngine.Transform LoadoutState::charPosition
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___charPosition_8;
	// UnityEngine.UI.Text LoadoutState::themeNameDisplay
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___themeNameDisplay_9;
	// UnityEngine.RectTransform LoadoutState::themeSelect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___themeSelect_10;
	// UnityEngine.UI.Image LoadoutState::themeIcon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___themeIcon_11;
	// UnityEngine.RectTransform LoadoutState::powerupSelect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___powerupSelect_12;
	// UnityEngine.UI.Image LoadoutState::powerupIcon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___powerupIcon_13;
	// UnityEngine.UI.Text LoadoutState::powerupCount
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___powerupCount_14;
	// UnityEngine.Sprite LoadoutState::noItemIcon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___noItemIcon_15;
	// UnityEngine.RectTransform LoadoutState::accessoriesSelector
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___accessoriesSelector_16;
	// UnityEngine.UI.Text LoadoutState::accesoryNameDisplay
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___accesoryNameDisplay_17;
	// UnityEngine.UI.Image LoadoutState::accessoryIconDisplay
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___accessoryIconDisplay_18;
	// Leaderboard LoadoutState::leaderboard
	Leaderboard_tD194E195710D451D3BC93DAA52955949D15A513E* ___leaderboard_19;
	// MissionUI LoadoutState::missionPopup
	MissionUI_t89B83CF976BF2F96BC1FC9FD54156229E4484E6D* ___missionPopup_20;
	// UnityEngine.UI.Button LoadoutState::runButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___runButton_21;
	// UnityEngine.GameObject LoadoutState::tutorialBlocker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___tutorialBlocker_22;
	// UnityEngine.GameObject LoadoutState::tutorialPrompt
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___tutorialPrompt_23;
	// UnityEngine.MeshFilter LoadoutState::skyMeshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___skyMeshFilter_24;
	// UnityEngine.MeshFilter LoadoutState::UIGroundFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___UIGroundFilter_25;
	// UnityEngine.AudioClip LoadoutState::menuTheme
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___menuTheme_26;
	// ConsumableIcon LoadoutState::consumableIcon
	ConsumableIcon_t2B6C00421316B6257C88ED411ADA887971C87ECD* ___consumableIcon_27;
	// Consumable/ConsumableType LoadoutState::m_PowerupToUse
	int32_t ___m_PowerupToUse_28;
	// UnityEngine.GameObject LoadoutState::m_Character
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Character_29;
	// System.Collections.Generic.List`1<System.Int32> LoadoutState::m_OwnedAccesories
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_OwnedAccesories_30;
	// System.Int32 LoadoutState::m_UsedAccessory
	int32_t ___m_UsedAccessory_31;
	// System.Int32 LoadoutState::m_UsedPowerupIndex
	int32_t ___m_UsedPowerupIndex_32;
	// System.Boolean LoadoutState::m_IsLoadingCharacter
	bool ___m_IsLoadingCharacter_33;
	// Modifier LoadoutState::m_CurrentModifier
	Modifier_t20BECEC1252A865A9E54E717290E9CFB34DA5EFA* ___m_CurrentModifier_34;
	// System.Int32 LoadoutState::k_UILayer
	int32_t ___k_UILayer_38;
	// UnityEngine.Quaternion LoadoutState::k_FlippedYAxisRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___k_FlippedYAxisRotation_39;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
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
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// ShopAccessoriesList
struct ShopAccessoriesList_tC54A532A1828DDDD56ECFBC213E0D0A927C1AF6A  : public ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942
{
	// UnityEngine.AddressableAssets.AssetReference ShopAccessoriesList::headerPrefab
	AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740* ___headerPrefab_7;
	// System.Collections.Generic.List`1<Character> ShopAccessoriesList::m_CharacterList
	List_1_tC98DE074A3E56FDD9D42903151EDECB6FA81A140* ___m_CharacterList_8;
};

// ShopCharacterList
struct ShopCharacterList_tD97486C0F497F30D86A2AA193B3F983654DD8279  : public ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942
{
};

// ShopItemList
struct ShopItemList_t9B0978BE7006CCBD7EDF89D8EBBC4DE403367D74  : public ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942
{
};

// ShopThemeList
struct ShopThemeList_t0C68FB74180739CB27FFABD0059C8B50136A107A  : public ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942
{
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// System.Collections.Generic.Dictionary`2<System.String,Character>

// System.Collections.Generic.Dictionary`2<System.String,Character>

// System.Collections.Generic.Dictionary`2<System.String,ThemeData>

// System.Collections.Generic.Dictionary`2<System.String,ThemeData>

// System.Collections.Generic.Dictionary`2<Consumable/ConsumableType,System.Int32>

// System.Collections.Generic.Dictionary`2<Consumable/ConsumableType,System.Int32>

// System.Collections.Generic.List`1<Character>
struct List_1_tC98DE074A3E56FDD9D42903151EDECB6FA81A140_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	CharacterU5BU5D_t0985A3D28A2593F92B2737AC180A00499E8EE2C7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Character>

// System.Collections.Generic.List`1<HighscoreEntry>
struct List_1_t41FFD2212A30C4D56B039EEC9134BF23286073F0_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	HighscoreEntryU5BU5D_tFCD29FC6836631507DD35129E58CF7AC8C841AA2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<HighscoreEntry>

// System.Collections.Generic.List`1<MissionBase>
struct List_1_t062AF7E8527A7D686B4CB557734FFAA572A6AA79_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MissionBaseU5BU5D_t6F4FDEE8C1A38FBD8DBE2122A9584CCF713BFDAC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<MissionBase>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// CharacterDatabase
struct CharacterDatabase_t449DEDE309A2E3658D00F86E2304DE45B17819C6_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,Character> CharacterDatabase::m_CharactersDict
	Dictionary_2_t751B5EAF466601E97CA8673996839C749DDD0F41* ___m_CharactersDict_0;
	// System.Boolean CharacterDatabase::m_Loaded
	bool ___m_Loaded_1;
};

// CharacterDatabase

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// MissionBase

// MissionBase

// PlayerData
struct PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_StaticFields
{
	// PlayerData PlayerData::m_Instance
	PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* ___m_Instance_0;
	// System.Int32 PlayerData::s_Version
	int32_t ___s_Version_21;
};

// PlayerData

// Pooler

// Pooler

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// ThemeDatabase
struct ThemeDatabase_tFB9AD4BB7BF2A9DAFB608C3FD7D98435685938CA_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,ThemeData> ThemeDatabase::themeDataList
	Dictionary_2_t2AE5138514904369750CDACAF4A543780CFCBDC3* ___themeDataList_0;
	// System.Boolean ThemeDatabase::m_Loaded
	bool ___m_Loaded_1;
};

// ThemeDatabase

// UnityEngine.Events.UnityEventBase

// UnityEngine.Events.UnityEventBase

// System.ValueType

// System.ValueType

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// MissionEntry/<>c__DisplayClass7_0

// MissionEntry/<>c__DisplayClass7_0

// ShopAccessoriesList/<>c__DisplayClass3_0

// ShopAccessoriesList/<>c__DisplayClass3_0

// ShopAccessoriesList/<>c__DisplayClass4_0

// ShopAccessoriesList/<>c__DisplayClass4_0

// ShopAccessoriesList/<>c__DisplayClass4_1

// ShopAccessoriesList/<>c__DisplayClass4_1

// ShopCharacterList/<>c__DisplayClass0_0

// ShopCharacterList/<>c__DisplayClass0_0

// ShopCharacterList/<>c__DisplayClass0_1

// ShopCharacterList/<>c__DisplayClass0_1

// ShopItemList/<>c__DisplayClass1_0

// ShopItemList/<>c__DisplayClass1_0

// ShopItemList/<>c__DisplayClass1_1

// ShopItemList/<>c__DisplayClass1_1

// ShopThemeList/<>c__DisplayClass0_0

// ShopThemeList/<>c__DisplayClass0_0

// ShopThemeList/<>c__DisplayClass0_1

// ShopThemeList/<>c__DisplayClass0_1

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.String,Character>

// System.Collections.Generic.KeyValuePair`2<System.String,Character>

// System.Collections.Generic.KeyValuePair`2<System.String,ThemeData>

// System.Collections.Generic.KeyValuePair`2<System.String,ThemeData>

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// UnityEngine.DrivenRectTransformTracker

// UnityEngine.DrivenRectTransformTracker

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// HighscoreEntry

// HighscoreEntry

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.UI.Navigation

// UnityEngine.UI.Navigation

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.UI.SpriteState

// UnityEngine.UI.SpriteState

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Character>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Character>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,ThemeData>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,ThemeData>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::600830E4957C2D126FF2B3D5A70A3CBF58E8746CA11C29E02E1FF452A28DD80B
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___600830E4957C2D126FF2B3D5A70A3CBF58E8746CA11C29E02E1FF452A28DD80B_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::612A5781646227C161F499EFF9A70CE354B7B71DA940584E335C4262D425A6EA
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___612A5781646227C161F499EFF9A70CE354B7B71DA940584E335C4262D425A6EA_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::9345844C3CE13AAEE38ED07ED620314F1AD6CBB56A3FFA002D096205E6C173E2
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___9345844C3CE13AAEE38ED07ED620314F1AD6CBB56A3FFA002D096205E6C173E2_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::BF57C2C0F2BEDF86CEAF22111D35EE7EB41A5DC113D7A9A0314D427CF873B98A
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___BF57C2C0F2BEDF86CEAF22111D35EE7EB41A5DC113D7A9A0314D427CF873B98A_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::C446BEDFF3BFB68CB20A97FCD61A04A62B299012EDA5485D5B0058BA8AE42803
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___C446BEDFF3BFB68CB20A97FCD61A04A62B299012EDA5485D5B0058BA8AE42803_4;
};

// <PrivateImplementationDetails>

// UnityEngine.AddressableAssets.AssetReference

// UnityEngine.AddressableAssets.AssetReference

// UnityEngine.AsyncOperation

// UnityEngine.AsyncOperation

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.UI.ColorBlock

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.UI.Button/ButtonClickedEvent

// Consumable/ConsumableType

// Consumable/ConsumableType

// MissionUI/<Open>d__3

// MissionUI/<Open>d__3

// TrackManager/<SpawnCoinAndPowerup>d__105

// TrackManager/<SpawnCoinAndPowerup>d__105

// TrackManager/<SpawnFromAssetReference>d__104

// TrackManager/<SpawnFromAssetReference>d__104

// UnityEngine.Audio.AudioMixer

// UnityEngine.Audio.AudioMixer

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// UnityEngine.Sprite

// UnityEngine.Sprite

// System.SystemException

// System.SystemException

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>>

// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>>

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// ConsumableDatabase
struct ConsumableDatabase_t9DC580A8F1501B9595AD450552561D50632C85F8_StaticFields
{
	// System.Collections.Generic.Dictionary`2<Consumable/ConsumableType,Consumable> ConsumableDatabase::_consumablesDict
	Dictionary_2_t27B796597769ECE7A23954DBCDD66353D187F769* ____consumablesDict_5;
};

// ConsumableDatabase

// System.NotSupportedException

// System.NotSupportedException

// ThemeData

// ThemeData

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// ShopList/RefreshCallback

// ShopList/RefreshCallback

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// AState

// AState

// AdsForMission

// AdsForMission

// Character

// Character

// CharacterAccessories

// CharacterAccessories

// Coin
struct Coin_t6EC3724A41D53D737B499E377089217F0190C268_StaticFields
{
	// Pooler Coin::coinPool
	Pooler_tCB5AF4787F428FACDF4910DA374CCCF8CF67DDB1* ___coinPool_4;
};

// Coin

// Consumable

// Consumable

// DataDeleteConfirmation

// DataDeleteConfirmation

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields
{
	// GameManager GameManager::s_Instance
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___s_Instance_4;
};

// GameManager

// HighscoreUI

// HighscoreUI

// IAPHandler

// IAPHandler

// Leaderboard

// Leaderboard

// LicenceDisplayer

// LicenceDisplayer

// MainMenu

// MainMenu

// MissionEntry

// MissionEntry

// MissionUI

// MissionUI

// Obstacle

// Obstacle

// PowerupIcon

// PowerupIcon

// SettingPopup

// SettingPopup

// ShopItemListItem

// ShopItemListItem

// ShopList

// ShopList

// ShopUI

// ShopUI

// StartButton

// StartButton

// TrackManager
struct TrackManager_tD73AA6F25EE7382387D947807269E11F3E3BB8EC_StaticFields
{
	// TrackManager TrackManager::s_Instance
	TrackManager_tD73AA6F25EE7382387D947807269E11F3E3BB8EC* ___s_Instance_4;
	// System.Int32 TrackManager::s_StartHash
	int32_t ___s_StartHash_5;
};

// TrackManager

// TrackSegment

// TrackSegment

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// WorldCurver

// WorldCurver

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// LoadoutState

// LoadoutState

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// ShopAccessoriesList

// ShopAccessoriesList

// ShopCharacterList

// ShopCharacterList

// ShopItemList
struct ShopItemList_t9B0978BE7006CCBD7EDF89D8EBBC4DE403367D74_StaticFields
{
	// Consumable/ConsumableType[] ShopItemList::s_ConsumablesTypes
	ConsumableTypeU5BU5D_tE1335C0C328FF43F6E035B3EFB53466A802ACE1E* ___s_ConsumablesTypes_7;
};

// ShopItemList

// ShopThemeList

// ShopThemeList

// UnityEngine.UI.Button

// UnityEngine.UI.Button

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.Slider

// UnityEngine.UI.Slider

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// Consumable[]
struct ConsumableU5BU5D_tE16B87A047CC5FCC977BD7171F11C5685B987BCD  : public RuntimeArray
{
	ALIGN_FIELD (8) Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA* m_Items[1];

	inline Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// CharacterAccessories[]
struct CharacterAccessoriesU5BU5D_t5C845F313E7FB9BC4620908179C8F9521CEC4225  : public RuntimeArray
{
	ALIGN_FIELD (8) CharacterAccessories_tBA489235C02D98040213C790FC991B786CFF4246* m_Items[1];

	inline CharacterAccessories_tBA489235C02D98040213C790FC991B786CFF4246* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CharacterAccessories_tBA489235C02D98040213C790FC991B786CFF4246** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CharacterAccessories_tBA489235C02D98040213C790FC991B786CFF4246* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CharacterAccessories_tBA489235C02D98040213C790FC991B786CFF4246* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CharacterAccessories_tBA489235C02D98040213C790FC991B786CFF4246** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CharacterAccessories_tBA489235C02D98040213C790FC991B786CFF4246* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Consumable/ConsumableType[]
struct ConsumableTypeU5BU5D_tE1335C0C328FF43F6E035B3EFB53466A802ACE1E  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject> UnityEngine.AddressableAssets.Addressables::LoadAssetAsync<System.Object>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 Addressables_LoadAssetAsync_TisRuntimeObject_mCCF94162F8FE63BFC873C8B4409CABDDAB079375_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>::op_Implicit(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D AsyncOperationHandle_1_op_Implicit_m052FD5134CC06547BA8188CEDD1E687F68158CAE_gshared (AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___0_obj, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<HighscoreEntry>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mAC86F205F4B98BBF36A8DD0D872E32C9177C5B72_gshared_inline (List_1_t41FFD2212A30C4D56B039EEC9134BF23286073F0* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<HighscoreEntry>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HighscoreEntry_t4CA5E34561AAF0F64E532825DE3BBC1FB673130F List_1_get_Item_mAE20C2BE4248B0AA2C5FCA7A0AF32B4C86B519F4_gshared (List_1_t41FFD2212A30C4D56B039EEC9134BF23286073F0* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mCDB69DE3F4173FFB4DB9B58CCB99D53CA858AEB8_gshared (Action_1_t0A01E63A4339ABF30BF7C175CF376F7CE2BAC1A8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>::add_Completed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_1_add_Completed_m0A29904183FF915F3F53B5A91D966447A51BA0D7_gshared (AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74* __this, Action_1_t0A01E63A4339ABF30BF7C175CF376F7CE2BAC1A8* ___0_value, const RuntimeMethod* method) ;
// TObject UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationHandle_1_get_Result_m3BFABA5103704DD252ABCC2DDF622300E887773E_gshared (AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m2F800649FDE2B1FDC0905381145EB5AECA43546A_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, int32_t ___0_key, int32_t* ___1_value, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject> UnityEngine.AddressableAssets.Addressables::LoadAssetAsync<UnityEngine.GameObject>(System.Object)
inline AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA Addressables_LoadAssetAsync_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m71A58B6B9B07D94C0C46D17A4D60EA716C624CB6 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA (*) (RuntimeObject*, const RuntimeMethod*))Addressables_LoadAssetAsync_TisRuntimeObject_mCCF94162F8FE63BFC873C8B4409CABDDAB079375_gshared)(___0_key, method);
}
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>::op_Implicit(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>)
inline AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D AsyncOperationHandle_1_op_Implicit_mC309483476DD49EDD7B1CE0F84FB73E588A90416 (AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA ___0_obj, const RuntimeMethod* method)
{
	return ((  AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D (*) (AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA, const RuntimeMethod*))AsyncOperationHandle_1_op_Implicit_m052FD5134CC06547BA8188CEDD1E687F68158CAE_gshared)(___0_obj, method);
}
// System.Object UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationHandle_get_Result_mC319B351EAF9A8C76AAEB948BB3BC17F94AC9746 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Obstacle>()
inline Obstacle_tFF82FE6E199BF2A4ABE433366761F50C9A4E9A90* GameObject_GetComponent_TisObstacle_tFF82FE6E199BF2A4ABE433366761F50C9A4E9A90_m8A9E869E8CFF155D7D423A45EDBC520AAA656E69 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Obstacle_tFF82FE6E199BF2A4ABE433366761F50C9A4E9A90* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Void TrackSegment::GetPointAtInWorldUnit(System.Single,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackSegment_GetPointAtInWorldUnit_mE859FC1CBB9F114116E59786646021302EAAFACB (TrackSegment_tB910757B2D1C9F1F30757C0AB61CEC753AC93288* __this, float ___0_wt, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_pos, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rot, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::CheckSphere(UnityEngine.Vector3,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_CheckSphere_mD6F0027DBDECFA69245E99D8A4EE1DC8742A817F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, float ___1_radius, int32_t ___2_layerMask, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject> UnityEngine.AddressableAssets.Addressables::InstantiateAsync(System.Object,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA Addressables_InstantiateAsync_m3B65AC3D763A0021C90B0B215FC11A6E1F437477 (RuntimeObject* ___0_key, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___3_parent, bool ___4_trackHandle, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, bool ___1_worldPositionStays, const RuntimeMethod* method) ;
// ThemeData TrackManager::get_currentTheme()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ThemeData_tFCA2CE6D2D52E8F115D4D7C30668D417C70C2E7E* TrackManager_get_currentTheme_mDA9E1FEDC2416853794C76EA2AA6822A14C0C10C_inline (TrackManager_tD73AA6F25EE7382387D947807269E11F3E3BB8EC* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject Pooler::Get(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Pooler_Get_m0BE8FF1840C061DDA28BE56E70DAEAE3C75FFB4C (Pooler_tCB5AF4787F428FACDF4910DA374CCCF8CF67DDB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_quat, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single TrackSegment::get_worldLength()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TrackSegment_get_worldLength_mB55EB6AF2BC1392F2E3BFF9A62FA00F050E261BF_inline (TrackSegment_tB910757B2D1C9F1F30757C0AB61CEC753AC93288* __this, const RuntimeMethod* method) ;
// System.Void TrackSegment::UpdateWorldLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackSegment_UpdateWorldLength_m7EAC335477F27F928558BD34F9E9B5526F919460 (TrackSegment_tB910757B2D1C9F1F30757C0AB61CEC753AC93288* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_p, const RuntimeMethod* method) ;
// System.Void TrackSegment::GetPointAt(System.Single,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackSegment_GetPointAt_mC19B664E3594220731DC7D140AA99F612951C671 (TrackSegment_tB910757B2D1C9F1F30757C0AB61CEC753AC93288* __this, float ___0_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_pos, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rot, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void Pooler::Free(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pooler_Free_mF13FDD16555ACE83896789BB32D910C06162F656 (Pooler_tCB5AF4787F428FACDF4910DA374CCCF8CF67DDB1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AddressableAssets.Addressables::ReleaseInstance(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Addressables_ReleaseInstance_m6673D687FF759A40D9351A6EE9666689A8770B3F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_instance, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// PlayerData PlayerData::get_instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline (const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<MissionBase>::get_Count()
inline int32_t List_1_get_Count_mF102683CF53C6D2C8DB12F555A4202A17CAAE1CA_inline (List_1_t062AF7E8527A7D686B4CB557734FFAA572A6AA79* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t062AF7E8527A7D686B4CB557734FFAA572A6AA79*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void PlayerData::AddMission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerData_AddMission_m583F74344E4845BF3D49726221B41F3A3F8A799D (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) ;
// System.Void PlayerData::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerData_Save_m7ACDE3046A5377BD21EB86D7A5B2D35036663CE4 (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator MissionUI::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MissionUI_Open_m3054D07902D8F744052D843EA5B143404ACD4D3F (MissionUI_t89B83CF976BF2F96BC1FC9FD54156229E4484E6D* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void Leaderboard::Populate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_Populate_mB876DE9EF5CA5F81109110ECB769DAADAB894696 (Leaderboard_tD194E195710D451D3BC93DAA52955949D15A513E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetAsLastSibling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetAsLastSibling_m848AF1A0B4C7912FE88D8CBCF92B83D57B2B917E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Int32 PlayerData::GetScorePlace(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerData_GetScorePlace_m475D59400621E78F418E304A0DA3E394A2E94156 (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, int32_t ___0_score, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetSiblingIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<HighscoreEntry>::get_Count()
inline int32_t List_1_get_Count_mAC86F205F4B98BBF36A8DD0D872E32C9177C5B72_inline (List_1_t41FFD2212A30C4D56B039EEC9134BF23286073F0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t41FFD2212A30C4D56B039EEC9134BF23286073F0*, const RuntimeMethod*))List_1_get_Count_mAC86F205F4B98BBF36A8DD0D872E32C9177C5B72_gshared_inline)(__this, method);
}
// T UnityEngine.Component::GetComponent<HighscoreUI>()
inline HighscoreUI_t5FF0B67CAE537DA29683E12D94CF7C4EE6D1A945* Component_GetComponent_TisHighscoreUI_t5FF0B67CAE537DA29683E12D94CF7C4EE6D1A945_m60A1314C5609A2BFC94894E21628ADD2AF292477 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  HighscoreUI_t5FF0B67CAE537DA29683E12D94CF7C4EE6D1A945* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<HighscoreEntry>::get_Item(System.Int32)
inline HighscoreEntry_t4CA5E34561AAF0F64E532825DE3BBC1FB673130F List_1_get_Item_mAE20C2BE4248B0AA2C5FCA7A0AF32B4C86B519F4 (List_1_t41FFD2212A30C4D56B039EEC9134BF23286073F0* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  HighscoreEntry_t4CA5E34561AAF0F64E532825DE3BBC1FB673130F (*) (List_1_t41FFD2212A30C4D56B039EEC9134BF23286073F0*, int32_t, const RuntimeMethod*))List_1_get_Item_mAE20C2BE4248B0AA2C5FCA7A0AF32B4C86B519F4_gshared)(__this, ___0_index, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void PlayerData::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerData_Create_m1D5ADD9C6648466D8524AC1EAE9264EC3D2BE02B (const RuntimeMethod* method) ;
// System.Void LicenceDisplayer::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LicenceDisplayer_Close_mE4007AF2913F12BF1533AA4A380F9EECCE828047 (LicenceDisplayer_tDA8F952EA7AD41601219AAD947879653B925AAB2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// System.Void MissionEntry/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m9F15203973DCE52565554C2647C3C681E5C3EED6 (U3CU3Ec__DisplayClass7_0_t0CA909AAABF9BD6F2902377A0B61FCFBB7896657* __this, const RuntimeMethod* method) ;
// System.Boolean MissionBase::get_isComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MissionBase_get_isComplete_m0CE8F36A6BC0A9E0C8A4CD47D1B4BDCC0838F1A5 (MissionBase_tF261B4C4745F6899122D35DDC58E1607806BC389* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void MissionUI::Claim(MissionBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissionUI_Claim_m31F215C6C9CD7DCCEF4DA6A2DAF3FBC7B5129A0F (MissionUI_t89B83CF976BF2F96BC1FC9FD54156229E4484E6D* __this, MissionBase_tF261B4C4745F6899122D35DDC58E1607806BC389* ___0_m, const RuntimeMethod* method) ;
// System.Void MissionUI/<Open>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenU3Ed__3__ctor_mAB1B40E7E52532C167B3750FF65437C1F20992F6 (U3COpenU3Ed__3_tA09582D5A14BD9ACDAC0E46ED6191BFCD4388457* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void PlayerData::ClaimMission(MissionBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerData_ClaimMission_mCF483B394C880924B66CEDBEE311E310E57ADF59 (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, MissionBase_tF261B4C4745F6899122D35DDC58E1607806BC389* ___0_mission, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<MissionEntry>()
inline MissionEntry_tAA22413E7FE0E2347A413354729C9EF4E5893F9A* GameObject_GetComponent_TisMissionEntry_tAA22413E7FE0E2347A413354729C9EF4E5893F9A_m3AACC401B97744E081B91A730051F471273F4808 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MissionEntry_tAA22413E7FE0E2347A413354729C9EF4E5893F9A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<MissionBase>::get_Item(System.Int32)
inline MissionBase_tF261B4C4745F6899122D35DDC58E1607806BC389* List_1_get_Item_m8DB41347E218BA6000D407D1F130765F6DA3DB6B (List_1_t062AF7E8527A7D686B4CB557734FFAA572A6AA79* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  MissionBase_tF261B4C4745F6899122D35DDC58E1607806BC389* (*) (List_1_t062AF7E8527A7D686B4CB557734FFAA572A6AA79*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void MissionEntry::FillWithMission(MissionBase,MissionUI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissionEntry_FillWithMission_m5B3BB707FE46C2158B317A4474FA50B0BF56CCD5 (MissionEntry_tAA22413E7FE0E2347A413354729C9EF4E5893F9A* __this, MissionBase_tF261B4C4745F6899122D35DDC58E1607806BC389* ___0_m, MissionUI_t89B83CF976BF2F96BC1FC9FD54156229E4484E6D* ___1_owner, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<AdsForMission>()
inline AdsForMission_tD2BF1BBD0E42576886F251DCA139896D3BAAEAFE* GameObject_GetComponent_TisAdsForMission_tD2BF1BBD0E42576886F251DCA139896D3BAAEAFE_m7CF3CE8BC2CCD9F702836B769BC8DB1999B439D0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AdsForMission_tD2BF1BBD0E42576886F251DCA139896D3BAAEAFE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
// System.Single Consumable::get_timeActive()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Consumable_get_timeActive_m3E6E2ACFE5744748F3199473AEB70AEB3B63667A_inline (Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA* __this, const RuntimeMethod* method) ;
// System.Void PlayerData::NewSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerData_NewSave_m326B7109E6C0FEB6996A11ED411E6364BBF4FC90 (const RuntimeMethod* method) ;
// System.Void LoadoutState::UnequipPowerup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadoutState_UnequipPowerup_m72E4551D71E384810DFAE39D7C9FA2E606EF0A28 (LoadoutState_t14852AB58CF707FCE966C46A1F36351BCA596509* __this, const RuntimeMethod* method) ;
// System.Void LoadoutState::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadoutState_Refresh_m0E8E1CD6613ABA819C74D230ABB69539ED3EF59F (LoadoutState_t14852AB58CF707FCE966C46A1F36351BCA596509* __this, const RuntimeMethod* method) ;
// System.Void DataDeleteConfirmation::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataDeleteConfirmation_Close_m19CDDF9EAB83088F72E8C7D9706A94EE3600B4AA (DataDeleteConfirmation_t1434B59963E72FD0B6CA67CC07E5C4152E227365* __this, const RuntimeMethod* method) ;
// System.Void SettingPopup::UpdateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingPopup_UpdateUI_m95FCC050683EFE8742AC5162E03BA1AA3DB783E9 (SettingPopup_t3C9582E36558700377CBC4DD2F1541D6A78D8910* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Audio.AudioMixer::GetFloat(System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixer_GetFloat_mAED8D277AD30D0346292555CBF81D8961117AEC9 (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, String_t* ___0_name, float* ___1_value, const RuntimeMethod* method) ;
// System.Void DataDeleteConfirmation::Open(LoadoutState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataDeleteConfirmation_Open_mBD3DB451D9D06D1B597A09C7FC796DB686AB424A (DataDeleteConfirmation_t1434B59963E72FD0B6CA67CC07E5C4152E227365* __this, LoadoutState_t14852AB58CF707FCE966C46A1F36351BCA596509* ___0_owner, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Audio.AudioMixer::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixer_SetFloat_m4789959013BE79E4F84F446405914908ADC3F335 (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Character>::Clear()
inline void List_1_Clear_m7EEBC563FD6DB6ABDDB4867E5758B738B187A594_inline (List_1_tC98DE074A3E56FDD9D42903151EDECB6FA81A140* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC98DE074A3E56FDD9D42903151EDECB6FA81A140*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Collections.Generic.Dictionary`2<System.String,Character> CharacterDatabase::get_dictionary()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t751B5EAF466601E97CA8673996839C749DDD0F41* CharacterDatabase_get_dictionary_m3201388D0F763F58BD4A6984F099D115FBD1F36B_inline (const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Character>::GetEnumerator()
inline Enumerator_tA4A8A82222F9450F3DBB58BB9F30D1F78FEF7916 Dictionary_2_GetEnumerator_m0FE313316FA0D66F0D8822D31ADFA287CC8F85E4 (Dictionary_2_t751B5EAF466601E97CA8673996839C749DDD0F41* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA4A8A82222F9450F3DBB58BB9F30D1F78FEF7916 (*) (Dictionary_2_t751B5EAF466601E97CA8673996839C749DDD0F41*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,Character>::Dispose()
inline void Enumerator_Dispose_m4CCD915EA4FA58C2FCBD4C1466F9DF7896882B7C (Enumerator_tA4A8A82222F9450F3DBB58BB9F30D1F78FEF7916* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA4A8A82222F9450F3DBB58BB9F30D1F78FEF7916*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,Character>::get_Current()
inline KeyValuePair_2_t250FE3D0921BEB2B6A839207B24330D2DAFA30BF Enumerator_get_Current_m534351E94386EEDC9FA2B9F683B9577A030CC282_inline (Enumerator_tA4A8A82222F9450F3DBB58BB9F30D1F78FEF7916* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t250FE3D0921BEB2B6A839207B24330D2DAFA30BF (*) (Enumerator_tA4A8A82222F9450F3DBB58BB9F30D1F78FEF7916*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,Character>::get_Value()
inline Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* KeyValuePair_2_get_Value_mEF14A8084D77C704BF993FF75DF0E418B26DA854_inline (KeyValuePair_2_t250FE3D0921BEB2B6A839207B24330D2DAFA30BF* __this, const RuntimeMethod* method)
{
	return ((  Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* (*) (KeyValuePair_2_t250FE3D0921BEB2B6A839207B24330D2DAFA30BF*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Character>::Add(T)
inline void List_1_Add_mEF156179BA222B81FE6D7F0B4F875A7B510C27DE_inline (List_1_tC98DE074A3E56FDD9D42903151EDECB6FA81A140* __this, Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC98DE074A3E56FDD9D42903151EDECB6FA81A140*, Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,Character>::MoveNext()
inline bool Enumerator_MoveNext_m3F765C5D5ABE40D9C60D1A6C7B6CC486184B881A (Enumerator_tA4A8A82222F9450F3DBB58BB9F30D1F78FEF7916* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA4A8A82222F9450F3DBB58BB9F30D1F78FEF7916*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mFD9384017128245D3C170BBC53AA164AAA76EEF8 (Action_1_t501005E5BA1DE50BCD8884D20F2E93B12ECEA696* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t501005E5BA1DE50BCD8884D20F2E93B12ECEA696*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mCDB69DE3F4173FFB4DB9B58CCB99D53CA858AEB8_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>::add_Completed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>>)
inline void AsyncOperationHandle_1_add_Completed_mB72E06FC40EBAABFBAF0CC86388158AED1686F61 (AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA* __this, Action_1_t501005E5BA1DE50BCD8884D20F2E93B12ECEA696* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA*, Action_1_t501005E5BA1DE50BCD8884D20F2E93B12ECEA696*, const RuntimeMethod*))AsyncOperationHandle_1_add_Completed_m0A29904183FF915F3F53B5A91D966447A51BA0D7_gshared)(__this, ___0_value, method);
}
// System.Void ShopAccessoriesList/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mF137724DFF25385C04A84BE1FCB36555130D7A5D (U3CU3Ec__DisplayClass3_0_t8F8178E5DBF17463B0EF1C5B6B6DBB6C76C22515* __this, const RuntimeMethod* method) ;
// TObject UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>::get_Result()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F (AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA*, const RuntimeMethod*))AsyncOperationHandle_1_get_Result_m3BFABA5103704DD252ABCC2DDF622300E887773E_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<Character>::get_Item(System.Int32)
inline Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* List_1_get_Item_mFEBF073C5B93D60BFEC82D242322C59514F834F4 (List_1_tC98DE074A3E56FDD9D42903151EDECB6FA81A140* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* (*) (List_1_tC98DE074A3E56FDD9D42903151EDECB6FA81A140*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// T UnityEngine.GameObject::GetComponent<ShopItemListItem>()
inline ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* GameObject_GetComponent_TisShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA_m4CF72312516CEB58969E87EEDBE8B48C3BE823AA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void ShopAccessoriesList/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m3E5A80CC8A5DEABABC705CCF4F512DB004D80DC0 (U3CU3Ec__DisplayClass4_0_t2A99E9B8A3760384DE2C000B920A52454EB002EB* __this, const RuntimeMethod* method) ;
// System.Void ShopAccessoriesList/<>c__DisplayClass4_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_1__ctor_mF58977B87AFEECD7B322E1BB712F16A618354995 (U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7* __this, const RuntimeMethod* method) ;
// UnityEngine.UI.Image UnityEngine.UI.Selectable::get_image()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void ShopList/RefreshCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefreshCallback__ctor_m32B31403EB444160A244324A0F33184727183AD7 (RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Void ShopAccessoriesList::RefreshButton(ShopItemListItem,CharacterAccessories,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopAccessoriesList_RefreshButton_m0DF2DA43475C6E97F5CE967951A235DC1C316CE9 (ShopAccessoriesList_tC54A532A1828DDDD56ECFBC213E0D0A927C1AF6A* __this, ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* ___0_itm, CharacterAccessories_tBA489235C02D98040213C790FC991B786CFF4246* ___1_accessory, String_t* ___2_compoundName, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Character>::get_Count()
inline int32_t List_1_get_Count_m9069FA1AEE97FE9A743DDC42987FC042D0EA6A8E_inline (List_1_tC98DE074A3E56FDD9D42903151EDECB6FA81A140* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC98DE074A3E56FDD9D42903151EDECB6FA81A140*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(T)
inline bool List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___0_item, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void PlayerData::AddAccessory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerData_AddAccessory_m8CFBD7CCE3719376AEAD3CB5F4A659201D20A3E2 (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void ShopList::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopList_Refresh_mC05B8BC1F06F21BDB6D462EB160E429491A31BF2 (ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Character>::.ctor()
inline void List_1__ctor_m67F97BFC2D06501BEE2346AAABC0955129027957 (List_1_tC98DE074A3E56FDD9D42903151EDECB6FA81A140* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC98DE074A3E56FDD9D42903151EDECB6FA81A140*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void ShopList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopList__ctor_m8B812A6A27D4B5EAF6B1908DCC2895AB02FFEC0C (ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942* __this, const RuntimeMethod* method) ;
// System.Void ShopAccessoriesList::LoadedCharacter(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopAccessoriesList_LoadedCharacter_mD6DC05A6672E9607F683B9D381DFB042F848247E (ShopAccessoriesList_tC54A532A1828DDDD56ECFBC213E0D0A927C1AF6A* __this, AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA ___0_op, int32_t ___1_currentIndex, const RuntimeMethod* method) ;
// System.Void ShopAccessoriesList::LoadedAccessory(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopAccessoriesList_LoadedAccessory_mB5B2E74E904FE0292CBA9892C7375BAEF0F158C1 (ShopAccessoriesList_tC54A532A1828DDDD56ECFBC213E0D0A927C1AF6A* __this, AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA ___0_op, int32_t ___1_characterIndex, int32_t ___2_accessoryIndex, const RuntimeMethod* method) ;
// System.Void ShopAccessoriesList::Buy(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopAccessoriesList_Buy_m95E9BCF80DB6AEC41F6A448CE4BC1DA797E4686F (ShopAccessoriesList_tC54A532A1828DDDD56ECFBC213E0D0A927C1AF6A* __this, String_t* ___0_name, int32_t ___1_cost, int32_t ___2_premiumCost, const RuntimeMethod* method) ;
// System.Void ShopCharacterList/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mB29A01AC890054ACA6D858D91CA947644F649B2D (U3CU3Ec__DisplayClass0_0_tD95CAB7D5210466F358B471BEF302147BC8ECA39* __this, const RuntimeMethod* method) ;
// System.Void PlayerData::AddCharacter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerData_AddCharacter_m7A3C7AFE6E9F61447C070CF54752135DC3A776A5 (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void ShopCharacterList/<>c__DisplayClass0_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_1__ctor_mE4E5A3B0A30F8E6D3C6CEAEACE7366E34719EF34 (U3CU3Ec__DisplayClass0_1_tE20AFCC01E01BCFA7F5DE016DB6095FA962CE26C* __this, const RuntimeMethod* method) ;
// System.Void ShopCharacterList::RefreshButton(ShopItemListItem,Character)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopCharacterList_RefreshButton_m670F30F99993F4D471B225FA8345A9FDD267FEAD (ShopCharacterList_tD97486C0F497F30D86A2AA193B3F983654DD8279* __this, ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* ___0_itm, Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* ___1_c, const RuntimeMethod* method) ;
// System.Void ShopCharacterList::Buy(Character)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopCharacterList_Buy_m1E09C5C489422042C7FA5AFBA1FCB01293A5F47E (ShopCharacterList_tD97486C0F497F30D86A2AA193B3F983654DD8279* __this, Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* ___0_c, const RuntimeMethod* method) ;
// System.Void ShopItemList/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mED4D9BB2808990A3D0173FDB8E69A3E92BB5C66F (U3CU3Ec__DisplayClass1_0_t1AA7B023D9BC73588C2C0831617C10371568A18B* __this, const RuntimeMethod* method) ;
// Consumable ConsumableDatabase::GetConsumbale(Consumable/ConsumableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA* ConsumableDatabase_GetConsumbale_m6C00E23402CC6F0E03B1C987C0AB222438E597E0 (int32_t ___0_type, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Consumable/ConsumableType,System.Int32>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m812040D1A6298114ACF36CF92EC3E584C467219B (Dictionary_2_t46A0F24FB1350A063225F4A250B879021B957502* __this, int32_t ___0_key, int32_t* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46A0F24FB1350A063225F4A250B879021B957502*, int32_t, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m2F800649FDE2B1FDC0905381145EB5AECA43546A_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void PlayerData::Add(Consumable/ConsumableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerData_Add_m81D02C913D04B556D2DEE2013741203380017A06 (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, int32_t ___0_type, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Enum_GetValues_m803B9D68C367FAABC5AFB6B5B52775C8A573CEF9 (Type_t* ___0_enumType, const RuntimeMethod* method) ;
// System.Void ShopItemList/<>c__DisplayClass1_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_1__ctor_m256AFA51431729B1BF8BC243F2EABA6458441AD9 (U3CU3Ec__DisplayClass1_1_t7ADBFCB327195FC27B880F7F409ACF98A8FA1224* __this, const RuntimeMethod* method) ;
// System.Void ShopItemList::RefreshButton(ShopItemListItem,Consumable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemList_RefreshButton_m289AA6B4A1038345930B7787EE1D79DE0858C30A (ShopItemList_t9B0978BE7006CCBD7EDF89D8EBBC4DE403367D74* __this, ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* ___0_itemList, Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA* ___1_c, const RuntimeMethod* method) ;
// System.Void ShopItemList::Buy(Consumable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemList_Buy_m752A8348813285DC69EFA9E4F949BEAD9AC9FBB3 (ShopItemList_t9B0978BE7006CCBD7EDF89D8EBBC4DE403367D74* __this, Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA* ___0_c, const RuntimeMethod* method) ;
// System.Void ShopList/RefreshCallback::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RefreshCallback_Invoke_m4CAB63CF5B2B4F0411A18E8180A15812F9EA7702_inline (RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,ThemeData> ThemeDatabase::get_dictionnary()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t2AE5138514904369750CDACAF4A543780CFCBDC3* ThemeDatabase_get_dictionnary_mAE5F39C28604B2A5A36115BC6E0170B676451D36_inline (const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,ThemeData>::GetEnumerator()
inline Enumerator_t9458D695C84BD390D43146295306DD1D9F8AB90C Dictionary_2_GetEnumerator_m977B2A7ED641D746CB6C6DF12A3B98864DE74664 (Dictionary_2_t2AE5138514904369750CDACAF4A543780CFCBDC3* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9458D695C84BD390D43146295306DD1D9F8AB90C (*) (Dictionary_2_t2AE5138514904369750CDACAF4A543780CFCBDC3*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,ThemeData>::Dispose()
inline void Enumerator_Dispose_m343230557CFF38D7F9EF6B9AA716B3F5B50D1767 (Enumerator_t9458D695C84BD390D43146295306DD1D9F8AB90C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9458D695C84BD390D43146295306DD1D9F8AB90C*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,ThemeData>::get_Current()
inline KeyValuePair_2_t01551AB7A416E72667B12B2ED22B887A8B3E6A49 Enumerator_get_Current_mFE6172218495ACC00FF796EA6AC2096292F1D852_inline (Enumerator_t9458D695C84BD390D43146295306DD1D9F8AB90C* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t01551AB7A416E72667B12B2ED22B887A8B3E6A49 (*) (Enumerator_t9458D695C84BD390D43146295306DD1D9F8AB90C*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// System.Void ShopThemeList/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mC0AB89657E3247A8186FF3C06EAB6FAEA8528220 (U3CU3Ec__DisplayClass0_0_tC2767A9EEEF702657D548FD3DA0A1D1241A6FF69* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.String,ThemeData>::get_Value()
inline ThemeData_tFCA2CE6D2D52E8F115D4D7C30668D417C70C2E7E* KeyValuePair_2_get_Value_mAC4CA6F3C83F7E3FA5C10143534C3675B65BFF3F_inline (KeyValuePair_2_t01551AB7A416E72667B12B2ED22B887A8B3E6A49* __this, const RuntimeMethod* method)
{
	return ((  ThemeData_tFCA2CE6D2D52E8F115D4D7C30668D417C70C2E7E* (*) (KeyValuePair_2_t01551AB7A416E72667B12B2ED22B887A8B3E6A49*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,ThemeData>::MoveNext()
inline bool Enumerator_MoveNext_mBD725F65A05AAECFD658CDC7AB99C3DDAC30EA88 (Enumerator_t9458D695C84BD390D43146295306DD1D9F8AB90C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9458D695C84BD390D43146295306DD1D9F8AB90C*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Void PlayerData::AddTheme(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerData_AddTheme_m97C78C49CBD79657781F652B4E87F484387AC1C1 (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, String_t* ___0_theme, const RuntimeMethod* method) ;
// System.Void ShopThemeList/<>c__DisplayClass0_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_1__ctor_mEA99018BFB50FFF9AA918BEBFD203C93825CC4D0 (U3CU3Ec__DisplayClass0_1_t4F59F2D4CF79A380ADC64FCB0150B1E93108AE6B* __this, const RuntimeMethod* method) ;
// System.Void ShopThemeList::RefreshButton(ShopItemListItem,ThemeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopThemeList_RefreshButton_m102DD73F3ABA273869D92AE18129C58345603363 (ShopThemeList_t0C68FB74180739CB27FFABD0059C8B50136A107A* __this, ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* ___0_itm, ThemeData_tFCA2CE6D2D52E8F115D4D7C30668D417C70C2E7E* ___1_theme, const RuntimeMethod* method) ;
// System.Void ShopThemeList::Buy(ThemeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopThemeList_Buy_m6FA8F180822EFDB5358B602A37EBD2C362923C2D (ShopThemeList_t0C68FB74180739CB27FFABD0059C8B50136A107A* __this, ThemeData_tFCA2CE6D2D52E8F115D4D7C30668D417C70C2E7E* ___0_t, const RuntimeMethod* method) ;
// System.Void ConsumableDatabase::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsumableDatabase_Load_m8952582958A43A875EA8FCF6E64B873357CA81F4 (ConsumableDatabase_t9DC580A8F1501B9595AD450552561D50632C85F8* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator CharacterDatabase::LoadDatabase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CharacterDatabase_LoadDatabase_mF3D0CF1AED21938D1E6FC7DD5282BBD60BDC83C6 (const RuntimeMethod* method) ;
// UnityEngine.Coroutine CoroutineHandler::StartStaticCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* CoroutineHandler_StartStaticCoroutine_mAA4300A60BD0F53A17726EDDBFCB92A354FBCE4B (RuntimeObject* ___0_coroutine, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ThemeDatabase::LoadDatabase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ThemeDatabase_LoadDatabase_mBC9E48F3626E2BF54D714AAA48BDFE6B6346C4F3 (const RuntimeMethod* method) ;
// System.Void ShopList::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopList_Open_m2BA7185F99F40D47D7E6995450BFBEBCED1103FD (ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942* __this, const RuntimeMethod* method) ;
// System.Void ShopList::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopList_Close_m05B23655086F8D500B7DA6166409DEACFA0BFABF (ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m2841705C02C450E42A44B5EEE2A6A2C4261FA3AF (String_t* ___0_sceneName, int32_t ___1_mode, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::UnloadSceneAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_UnloadSceneAsync_mF6F4161EF48C6622AA1B5BC66B4A2CA736C4D2B2 (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// GameManager GameManager::get_instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* GameManager_get_instance_mFCE15CA11B584E28800B16557EEB5362966F5103_inline (const RuntimeMethod* method) ;
// AState GameManager::get_topState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AState_t40AE14F23DF9E5C657E24D92449512BF2D79A7CF* GameManager_get_topState_m2E07F2739B0EEE2166D7CF5621D1482C71BB842A (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Shader::SetGlobalFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_SetGlobalFloat_mE7D0DA2B0A62925E093B318785AF82A173794AFC (int32_t ___0_nameID, float ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TrackManager/<SpawnFromAssetReference>d__104::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnFromAssetReferenceU3Ed__104__ctor_m90E3A9BF5BE1ABB8FA95781C9EAF34ED6BDD8870 (U3CSpawnFromAssetReferenceU3Ed__104_t321EAD7BDF2BA61A2F278CD7EF1E68280295A7E5* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TrackManager/<SpawnFromAssetReference>d__104::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnFromAssetReferenceU3Ed__104_System_IDisposable_Dispose_mF90B29C1F9CD06484827C6D7BCA22EF47F81CA28 (U3CSpawnFromAssetReferenceU3Ed__104_t321EAD7BDF2BA61A2F278CD7EF1E68280295A7E5* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TrackManager/<SpawnFromAssetReference>d__104::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpawnFromAssetReferenceU3Ed__104_MoveNext_mDDB1171B6D50987FD73BD9C95DFE2419DC44B1C7 (U3CSpawnFromAssetReferenceU3Ed__104_t321EAD7BDF2BA61A2F278CD7EF1E68280295A7E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Addressables_LoadAssetAsync_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m71A58B6B9B07D94C0C46D17A4D60EA716C624CB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_op_Implicit_mC309483476DD49EDD7B1CE0F84FB73E588A90416_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisObstacle_tFF82FE6E199BF2A4ABE433366761F50C9A4E9A90_m8A9E869E8CFF155D7D423A45EDBC520AAA656E69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	Obstacle_tFF82FE6E199BF2A4ABE433366761F50C9A4E9A90* V_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0052;
			}
			case 2:
			{
				goto IL_00b0;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// AsyncOperationHandle op = Addressables.LoadAssetAsync<GameObject>(reference);
		AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740* L_2 = __this->___reference_2;
		il2cpp_codegen_runtime_class_init_inline(Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
		AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA L_3;
		L_3 = Addressables_LoadAssetAsync_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m71A58B6B9B07D94C0C46D17A4D60EA716C624CB6(L_2, Addressables_LoadAssetAsync_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m71A58B6B9B07D94C0C46D17A4D60EA716C624CB6_RuntimeMethod_var);
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_4;
		L_4 = AsyncOperationHandle_1_op_Implicit_mC309483476DD49EDD7B1CE0F84FB73E588A90416(L_3, AsyncOperationHandle_1_op_Implicit_mC309483476DD49EDD7B1CE0F84FB73E588A90416_RuntimeMethod_var);
		__this->___U3CopU3E5__2_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CopU3E5__2_5))->___m_InternalOp_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CopU3E5__2_5))->___m_LocationName_2), (void*)NULL);
		#endif
		// yield return op;
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_5 = __this->___U3CopU3E5__2_5;
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_6 = L_5;
		RuntimeObject* L_7 = Box(AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_il2cpp_TypeInfo_var, &L_6);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0052:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// GameObject obj = op.Result as GameObject;
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* L_8 = (&__this->___U3CopU3E5__2_5);
		RuntimeObject* L_9;
		L_9 = AsyncOperationHandle_get_Result_mC319B351EAF9A8C76AAEB948BB3BC17F94AC9746(L_8, NULL);
		V_1 = ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_9, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var));
		// if (obj != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_00b7;
		}
	}
	{
		// Obstacle obstacle = obj.GetComponent<Obstacle>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_1;
		NullCheck(L_12);
		Obstacle_tFF82FE6E199BF2A4ABE433366761F50C9A4E9A90* L_13;
		L_13 = GameObject_GetComponent_TisObstacle_tFF82FE6E199BF2A4ABE433366761F50C9A4E9A90_m8A9E869E8CFF155D7D423A45EDBC520AAA656E69(L_12, GameObject_GetComponent_TisObstacle_tFF82FE6E199BF2A4ABE433366761F50C9A4E9A90_m8A9E869E8CFF155D7D423A45EDBC520AAA656E69_RuntimeMethod_var);
		V_2 = L_13;
		// if (obstacle != null)
		Obstacle_tFF82FE6E199BF2A4ABE433366761F50C9A4E9A90* L_14 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_00b7;
		}
	}
	{
		// yield return obstacle.Spawn(segment, segment.obstaclePositions[posIndex]);
		Obstacle_tFF82FE6E199BF2A4ABE433366761F50C9A4E9A90* L_16 = V_2;
		TrackSegment_tB910757B2D1C9F1F30757C0AB61CEC753AC93288* L_17 = __this->___segment_3;
		TrackSegment_tB910757B2D1C9F1F30757C0AB61CEC753AC93288* L_18 = __this->___segment_3;
		NullCheck(L_18);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_19 = L_18->___obstaclePositions_9;
		int32_t L_20 = __this->___posIndex_4;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		float L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_16);
		RuntimeObject* L_23;
		L_23 = VirtualFuncInvoker2< RuntimeObject*, TrackSegment_tB910757B2D1C9F1F30757C0AB61CEC753AC93288*, float >::Invoke(5 /* System.Collections.IEnumerator Obstacle::Spawn(TrackSegment,System.Single) */, L_16, L_17, L_22);
		__this->___U3CU3E2__current_1 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_23);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00b0:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00b7:
	{
		// }
		return (bool)0;
	}
}
// System.Object TrackManager/<SpawnFromAssetReference>d__104::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnFromAssetReferenceU3Ed__104_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8E1E6040F11579531851FF9664E0C6F202760777 (U3CSpawnFromAssetReferenceU3Ed__104_t321EAD7BDF2BA61A2F278CD7EF1E68280295A7E5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TrackManager/<SpawnFromAssetReference>d__104::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnFromAssetReferenceU3Ed__104_System_Collections_IEnumerator_Reset_m9E0A0FBB73A860B042264AE5195D1DC8688739F9 (U3CSpawnFromAssetReferenceU3Ed__104_t321EAD7BDF2BA61A2F278CD7EF1E68280295A7E5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpawnFromAssetReferenceU3Ed__104_System_Collections_IEnumerator_Reset_m9E0A0FBB73A860B042264AE5195D1DC8688739F9_RuntimeMethod_var)));
	}
}
// System.Object TrackManager/<SpawnFromAssetReference>d__104::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnFromAssetReferenceU3Ed__104_System_Collections_IEnumerator_get_Current_m9FDEE6720FE5654A243327014F189221E6BFA893 (U3CSpawnFromAssetReferenceU3Ed__104_t321EAD7BDF2BA61A2F278CD7EF1E68280295A7E5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void TrackManager/<SpawnCoinAndPowerup>d__105::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnCoinAndPowerupU3Ed__105__ctor_m46842ED51AF48AFA5BA3B3566A8F302DC1341267 (U3CSpawnCoinAndPowerupU3Ed__105_t482240A2C8F634C3428AC5AA36C94BDB13E80A0F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TrackManager/<SpawnCoinAndPowerup>d__105::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnCoinAndPowerupU3Ed__105_System_IDisposable_Dispose_m3C2E7D0F63D9405702EB34485110AA04B81295AB (U3CSpawnCoinAndPowerupU3Ed__105_t482240A2C8F634C3428AC5AA36C94BDB13E80A0F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TrackManager/<SpawnCoinAndPowerup>d__105::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpawnCoinAndPowerupU3Ed__105_MoveNext_m9872391FC647372E0A8A158E3F049CF063781E7C (U3CSpawnCoinAndPowerupU3Ed__105_t482240A2C8F634C3428AC5AA36C94BDB13E80A0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_op_Implicit_mC309483476DD49EDD7B1CE0F84FB73E588A90416_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Coin_t6EC3724A41D53D737B499E377089217F0190C268_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2227A1F58E0ABCAFB1B57DFA1A29D7D0BA140293);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8DC8598A2CFE63A5218705E550A16EC3C1DF743);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TrackManager_tD73AA6F25EE7382387D947807269E11F3E3BB8EC* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	int32_t V_5 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_6 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TrackManager_tD73AA6F25EE7382387D947807269E11F3E3BB8EC* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_01df;
			}
			case 2:
			{
				goto IL_02d1;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (!m_IsTutorial)
		TrackManager_tD73AA6F25EE7382387D947807269E11F3E3BB8EC* L_3 = V_1;
		NullCheck(L_3);
		bool L_4 = L_3->___m_IsTutorial_41;
		if (L_4)
		{
			goto IL_03e0;
		}
	}
	{
		// float currentWorldPos = 0.0f;
		__this->___U3CcurrentWorldPosU3E5__2_4 = (0.0f);
		// int currentLane = Random.Range(0, 3);
		int32_t L_5;
		L_5 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 3, NULL);
		__this->___U3CcurrentLaneU3E5__3_5 = L_5;
		// float powerupChance = Mathf.Clamp01(Mathf.Floor(m_TimeSincePowerup) * 0.5f * 0.001f);
		TrackManager_tD73AA6F25EE7382387D947807269E11F3E3BB8EC* L_6 = V_1;
		NullCheck(L_6);
		float L_7 = L_6->___m_TimeSincePowerup_28;
		float L_8;
		L_8 = floorf(L_7);
		float L_9;
		L_9 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_8, (0.5f))), (0.00100000005f))), NULL);
		__this->___U3CpowerupChanceU3E5__4_6 = L_9;
		// float premiumChance = Mathf.Clamp01(Mathf.Floor(m_TimeSinceLastPremium) * 0.5f * 0.0001f);
		TrackManager_tD73AA6F25EE7382387D947807269E11F3E3BB8EC* L_10 = V_1;
		NullCheck(L_10);
		float L_11 = L_10->___m_TimeSinceLastPremium_29;
		float L_12;
		L_12 = floorf(L_11);
		float L_13;
		L_13 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_12, (0.5f))), (9.99999975E-05f))), NULL);
		__this->___U3CpremiumChanceU3E5__5_7 = L_13;
		goto IL_03ca;
	}

IL_0095:
	{
		// segment.GetPointAtInWorldUnit(currentWorldPos, out pos, out rot);
		TrackSegment_tB910757B2D1C9F1F30757C0AB61CEC753AC93288* L_14 = __this->___segment_3;
		float L_15 = __this->___U3CcurrentWorldPosU3E5__2_4;
		NullCheck(L_14);
		TrackSegment_GetPointAtInWorldUnit_mE859FC1CBB9F114116E59786646021302EAAFACB(L_14, L_15, (&V_2), (&V_3), NULL);
		// bool laneValid = true;
		V_4 = (bool)1;
		// int testedLane = currentLane;
		int32_t L_16 = __this->___U3CcurrentLaneU3E5__3_5;
		V_5 = L_16;
		goto IL_00ce;
	}

IL_00b7:
	{
		// testedLane = (testedLane + 1) % 3;
		int32_t L_17 = V_5;
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_17, 1))%3));
		// if (currentLane == testedLane)
		int32_t L_18 = __this->___U3CcurrentLaneU3E5__3_5;
		int32_t L_19 = V_5;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_00ce;
		}
	}
	{
		// laneValid = false;
		V_4 = (bool)0;
		// break;
		goto IL_0101;
	}

IL_00ce:
	{
		// while (Physics.CheckSphere(pos + ((testedLane - 1) * laneOffset * (rot * Vector3.right)), 0.4f, 1 << 9))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_2;
		int32_t L_21 = V_5;
		TrackManager_tD73AA6F25EE7382387D947807269E11F3E3BB8EC* L_22 = V_1;
		NullCheck(L_22);
		float L_23 = L_22->___laneOffset_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_24, L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_subtract(L_21, 1))), L_23)), L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_20, L_27, NULL);
		bool L_29;
		L_29 = Physics_CheckSphere_mD6F0027DBDECFA69245E99D8A4EE1DC8742A817F(L_28, (0.400000006f), ((int32_t)512), NULL);
		if (L_29)
		{
			goto IL_00b7;
		}
	}

IL_0101:
	{
		// currentLane = testedLane;
		int32_t L_30 = V_5;
		__this->___U3CcurrentLaneU3E5__3_5 = L_30;
		// if (laneValid)
		bool L_31 = V_4;
		if (!L_31)
		{
			goto IL_03b8;
		}
	}
	{
		// pos = pos + ((currentLane - 1) * laneOffset * (rot * Vector3.right));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_2;
		int32_t L_33 = __this->___U3CcurrentLaneU3E5__3_5;
		TrackManager_tD73AA6F25EE7382387D947807269E11F3E3BB8EC* L_34 = V_1;
		NullCheck(L_34);
		float L_35 = L_34->___laneOffset_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_36, L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_subtract(L_33, 1))), L_35)), L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_32, L_39, NULL);
		V_2 = L_40;
		// GameObject toUse = null;
		V_6 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		// if (Random.value < powerupChance)
		float L_41;
		L_41 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		float L_42 = __this->___U3CpowerupChanceU3E5__4_6;
		if ((!(((float)L_41) < ((float)L_42))))
		{
			goto IL_026d;
		}
	}
	{
		// int picked = Random.Range(0, consumableDatabase.consumbales.Length);
		TrackManager_tD73AA6F25EE7382387D947807269E11F3E3BB8EC* L_43 = V_1;
		NullCheck(L_43);
		ConsumableDatabase_t9DC580A8F1501B9595AD450552561D50632C85F8* L_44 = L_43->___consumableDatabase_13;
		NullCheck(L_44);
		ConsumableU5BU5D_tE16B87A047CC5FCC977BD7171F11C5685B987BCD* L_45 = L_44->___consumbales_4;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_45)->max_length)), NULL);
		__this->___U3CpickedU3E5__6_8 = L_46;
		// if (consumableDatabase.consumbales[picked].canBeSpawned)
		TrackManager_tD73AA6F25EE7382387D947807269E11F3E3BB8EC* L_47 = V_1;
		NullCheck(L_47);
		ConsumableDatabase_t9DC580A8F1501B9595AD450552561D50632C85F8* L_48 = L_47->___consumableDatabase_13;
		NullCheck(L_48);
		ConsumableU5BU5D_tE16B87A047CC5FCC977BD7171F11C5685B987BCD* L_49 = L_48->___consumbales_4;
		int32_t L_50 = __this->___U3CpickedU3E5__6_8;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA* L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		NullCheck(L_52);
		bool L_53 = L_52->___canBeSpawned_8;
		if (!L_53)
		{
			goto IL_0376;
		}
	}
	{
		// m_TimeSincePowerup = 0.0f;
		TrackManager_tD73AA6F25EE7382387D947807269E11F3E3BB8EC* L_54 = V_1;
		NullCheck(L_54);
		L_54->___m_TimeSincePowerup_28 = (0.0f);
		// powerupChance = 0.0f;
		__this->___U3CpowerupChanceU3E5__4_6 = (0.0f);
		// AsyncOperationHandle op = Addressables.InstantiateAsync(consumableDatabase.consumbales[picked].gameObject.name, pos, rot);
		TrackManager_tD73AA6F25EE7382387D947807269E11F3E3BB8EC* L_55 = V_1;
		NullCheck(L_55);
		ConsumableDatabase_t9DC580A8F1501B9595AD450552561D50632C85F8* L_56 = L_55->___consumableDatabase_13;
		NullCheck(L_56);
		ConsumableU5BU5D_tE16B87A047CC5FCC977BD7171F11C5685B987BCD* L_57 = L_56->___consumbales_4;
		int32_t L_58 = __this->___U3CpickedU3E5__6_8;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA* L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		NullCheck(L_60);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_61;
		L_61 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_60, NULL);
		NullCheck(L_61);
		String_t* L_62;
		L_62 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_61, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
		AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA L_65;
		L_65 = Addressables_InstantiateAsync_m3B65AC3D763A0021C90B0B215FC11A6E1F437477(L_62, L_63, L_64, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, (bool)1, NULL);
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_66;
		L_66 = AsyncOperationHandle_1_op_Implicit_mC309483476DD49EDD7B1CE0F84FB73E588A90416(L_65, AsyncOperationHandle_1_op_Implicit_mC309483476DD49EDD7B1CE0F84FB73E588A90416_RuntimeMethod_var);
		__this->___U3CopU3E5__7_9 = L_66;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CopU3E5__7_9))->___m_InternalOp_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CopU3E5__7_9))->___m_LocationName_2), (void*)NULL);
		#endif
		// yield return op;
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_67 = __this->___U3CopU3E5__7_9;
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_68 = L_67;
		RuntimeObject* L_69 = Box(AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_il2cpp_TypeInfo_var, &L_68);
		__this->___U3CU3E2__current_1 = L_69;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_69);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_01df:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (op.Result == null || !(op.Result is GameObject))
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* L_70 = (&__this->___U3CopU3E5__7_9);
		RuntimeObject* L_71;
		L_71 = AsyncOperationHandle_get_Result_mC319B351EAF9A8C76AAEB948BB3BC17F94AC9746(L_70, NULL);
		if (!L_71)
		{
			goto IL_0205;
		}
	}
	{
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* L_72 = (&__this->___U3CopU3E5__7_9);
		RuntimeObject* L_73;
		L_73 = AsyncOperationHandle_get_Result_mC319B351EAF9A8C76AAEB948BB3BC17F94AC9746(L_72, NULL);
		if (((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_73, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)))
		{
			goto IL_0232;
		}
	}

IL_0205:
	{
		// Debug.LogWarning(string.Format("Unable to load consumable {0}.", consumableDatabase.consumbales[picked].gameObject.name));
		TrackManager_tD73AA6F25EE7382387D947807269E11F3E3BB8EC* L_74 = V_1;
		NullCheck(L_74);
		ConsumableDatabase_t9DC580A8F1501B9595AD450552561D50632C85F8* L_75 = L_74->___consumableDatabase_13;
		NullCheck(L_75);
		ConsumableU5BU5D_tE16B87A047CC5FCC977BD7171F11C5685B987BCD* L_76 = L_75->___consumbales_4;
		int32_t L_77 = __this->___U3CpickedU3E5__6_8;
		NullCheck(L_76);
		int32_t L_78 = L_77;
		Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA* L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		NullCheck(L_79);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_80;
		L_80 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_79, NULL);
		NullCheck(L_80);
		String_t* L_81;
		L_81 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_80, NULL);
		String_t* L_82;
		L_82 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralC8DC8598A2CFE63A5218705E550A16EC3C1DF743, L_81, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_82, NULL);
		// yield break;
		return (bool)0;
	}

IL_0232:
	{
		// toUse = op.Result as GameObject;
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* L_83 = (&__this->___U3CopU3E5__7_9);
		RuntimeObject* L_84;
		L_84 = AsyncOperationHandle_get_Result_mC319B351EAF9A8C76AAEB948BB3BC17F94AC9746(L_83, NULL);
		V_6 = ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_84, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var));
		// toUse.transform.SetParent(segment.transform, true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_85 = V_6;
		NullCheck(L_85);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_86;
		L_86 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_85, NULL);
		TrackSegment_tB910757B2D1C9F1F30757C0AB61CEC753AC93288* L_87 = __this->___segment_3;
		NullCheck(L_87);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_88;
		L_88 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_87, NULL);
		NullCheck(L_86);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_86, L_88, (bool)1, NULL);
		// }
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* L_89 = (&__this->___U3CopU3E5__7_9);
		il2cpp_codegen_initobj(L_89, sizeof(AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D));
		goto IL_0376;
	}

IL_026d:
	{
		// else if (Random.value < premiumChance)
		float L_90;
		L_90 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		float L_91 = __this->___U3CpremiumChanceU3E5__5_7;
		if ((!(((float)L_90) < ((float)L_91))))
		{
			goto IL_0350;
		}
	}
	{
		// m_TimeSinceLastPremium = 0.0f;
		TrackManager_tD73AA6F25EE7382387D947807269E11F3E3BB8EC* L_92 = V_1;
		NullCheck(L_92);
		L_92->___m_TimeSinceLastPremium_29 = (0.0f);
		// premiumChance = 0.0f;
		__this->___U3CpremiumChanceU3E5__5_7 = (0.0f);
		// AsyncOperationHandle op = Addressables.InstantiateAsync(currentTheme.premiumCollectible.name, pos, rot);
		TrackManager_tD73AA6F25EE7382387D947807269E11F3E3BB8EC* L_93 = V_1;
		NullCheck(L_93);
		ThemeData_tFCA2CE6D2D52E8F115D4D7C30668D417C70C2E7E* L_94;
		L_94 = TrackManager_get_currentTheme_mDA9E1FEDC2416853794C76EA2AA6822A14C0C10C_inline(L_93, NULL);
		NullCheck(L_94);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_95 = L_94->___premiumCollectible_10;
		NullCheck(L_95);
		String_t* L_96;
		L_96 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_95, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_98 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
		AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA L_99;
		L_99 = Addressables_InstantiateAsync_m3B65AC3D763A0021C90B0B215FC11A6E1F437477(L_96, L_97, L_98, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, (bool)1, NULL);
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_100;
		L_100 = AsyncOperationHandle_1_op_Implicit_mC309483476DD49EDD7B1CE0F84FB73E588A90416(L_99, AsyncOperationHandle_1_op_Implicit_mC309483476DD49EDD7B1CE0F84FB73E588A90416_RuntimeMethod_var);
		__this->___U3CopU3E5__7_9 = L_100;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CopU3E5__7_9))->___m_InternalOp_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CopU3E5__7_9))->___m_LocationName_2), (void*)NULL);
		#endif
		// yield return op;
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_101 = __this->___U3CopU3E5__7_9;
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_102 = L_101;
		RuntimeObject* L_103 = Box(AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_il2cpp_TypeInfo_var, &L_102);
		__this->___U3CU3E2__current_1 = L_103;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_103);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_02d1:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (op.Result == null || !(op.Result is GameObject))
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* L_104 = (&__this->___U3CopU3E5__7_9);
		RuntimeObject* L_105;
		L_105 = AsyncOperationHandle_get_Result_mC319B351EAF9A8C76AAEB948BB3BC17F94AC9746(L_104, NULL);
		if (!L_105)
		{
			goto IL_02f7;
		}
	}
	{
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* L_106 = (&__this->___U3CopU3E5__7_9);
		RuntimeObject* L_107;
		L_107 = AsyncOperationHandle_get_Result_mC319B351EAF9A8C76AAEB948BB3BC17F94AC9746(L_106, NULL);
		if (((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_107, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)))
		{
			goto IL_0318;
		}
	}

IL_02f7:
	{
		// Debug.LogWarning(string.Format("Unable to load collectable {0}.", currentTheme.premiumCollectible.name));
		TrackManager_tD73AA6F25EE7382387D947807269E11F3E3BB8EC* L_108 = V_1;
		NullCheck(L_108);
		ThemeData_tFCA2CE6D2D52E8F115D4D7C30668D417C70C2E7E* L_109;
		L_109 = TrackManager_get_currentTheme_mDA9E1FEDC2416853794C76EA2AA6822A14C0C10C_inline(L_108, NULL);
		NullCheck(L_109);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_110 = L_109->___premiumCollectible_10;
		NullCheck(L_110);
		String_t* L_111;
		L_111 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_110, NULL);
		String_t* L_112;
		L_112 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral2227A1F58E0ABCAFB1B57DFA1A29D7D0BA140293, L_111, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_112, NULL);
		// yield break;
		return (bool)0;
	}

IL_0318:
	{
		// toUse = op.Result as GameObject;
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* L_113 = (&__this->___U3CopU3E5__7_9);
		RuntimeObject* L_114;
		L_114 = AsyncOperationHandle_get_Result_mC319B351EAF9A8C76AAEB948BB3BC17F94AC9746(L_113, NULL);
		V_6 = ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_114, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var));
		// toUse.transform.SetParent(segment.transform, true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_115 = V_6;
		NullCheck(L_115);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_116;
		L_116 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_115, NULL);
		TrackSegment_tB910757B2D1C9F1F30757C0AB61CEC753AC93288* L_117 = __this->___segment_3;
		NullCheck(L_117);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_118;
		L_118 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_117, NULL);
		NullCheck(L_116);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_116, L_118, (bool)1, NULL);
		// }
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* L_119 = (&__this->___U3CopU3E5__7_9);
		il2cpp_codegen_initobj(L_119, sizeof(AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D));
		goto IL_0376;
	}

IL_0350:
	{
		// toUse = Coin.coinPool.Get(pos, rot);
		Pooler_tCB5AF4787F428FACDF4910DA374CCCF8CF67DDB1* L_120 = ((Coin_t6EC3724A41D53D737B499E377089217F0190C268_StaticFields*)il2cpp_codegen_static_fields_for(Coin_t6EC3724A41D53D737B499E377089217F0190C268_il2cpp_TypeInfo_var))->___coinPool_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_121 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_122 = V_3;
		NullCheck(L_120);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_123;
		L_123 = Pooler_Get_m0BE8FF1840C061DDA28BE56E70DAEAE3C75FFB4C(L_120, L_121, L_122, NULL);
		V_6 = L_123;
		// toUse.transform.SetParent(segment.collectibleTransform, true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_124 = V_6;
		NullCheck(L_124);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_125;
		L_125 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_124, NULL);
		TrackSegment_tB910757B2D1C9F1F30757C0AB61CEC753AC93288* L_126 = __this->___segment_3;
		NullCheck(L_126);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_127 = L_126->___collectibleTransform_7;
		NullCheck(L_125);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_125, L_127, (bool)1, NULL);
	}

IL_0376:
	{
		// if (toUse != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_128 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_129;
		L_129 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_128, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_129)
		{
			goto IL_03b8;
		}
	}
	{
		// Vector3 oldPos = toUse.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_130 = V_6;
		NullCheck(L_130);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_131;
		L_131 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_130, NULL);
		NullCheck(L_131);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132;
		L_132 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_131, NULL);
		V_7 = L_132;
		// toUse.transform.position += Vector3.back;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_133 = V_6;
		NullCheck(L_133);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_134;
		L_134 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_133, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_135 = L_134;
		NullCheck(L_135);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_136;
		L_136 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_135, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_137;
		L_137 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_138;
		L_138 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_136, L_137, NULL);
		NullCheck(L_135);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_135, L_138, NULL);
		// toUse.transform.position = oldPos;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_139 = V_6;
		NullCheck(L_139);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_140;
		L_140 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_139, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_141 = V_7;
		NullCheck(L_140);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_140, L_141, NULL);
	}

IL_03b8:
	{
		// currentWorldPos += increment;
		float L_142 = __this->___U3CcurrentWorldPosU3E5__2_4;
		__this->___U3CcurrentWorldPosU3E5__2_4 = ((float)il2cpp_codegen_add(L_142, (1.5f)));
	}

IL_03ca:
	{
		// while (currentWorldPos < segment.worldLength)
		float L_143 = __this->___U3CcurrentWorldPosU3E5__2_4;
		TrackSegment_tB910757B2D1C9F1F30757C0AB61CEC753AC93288* L_144 = __this->___segment_3;
		NullCheck(L_144);
		float L_145;
		L_145 = TrackSegment_get_worldLength_mB55EB6AF2BC1392F2E3BFF9A62FA00F050E261BF_inline(L_144, NULL);
		if ((((float)L_143) < ((float)L_145)))
		{
			goto IL_0095;
		}
	}

IL_03e0:
	{
		// }
		return (bool)0;
	}
}
// System.Object TrackManager/<SpawnCoinAndPowerup>d__105::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnCoinAndPowerupU3Ed__105_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFCF9454D0B623AB64502F98B4EFA8ADAEE1BE87D (U3CSpawnCoinAndPowerupU3Ed__105_t482240A2C8F634C3428AC5AA36C94BDB13E80A0F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TrackManager/<SpawnCoinAndPowerup>d__105::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnCoinAndPowerupU3Ed__105_System_Collections_IEnumerator_Reset_mDE0165917E763B5468CAEA0DCD25BD3CCAB8C292 (U3CSpawnCoinAndPowerupU3Ed__105_t482240A2C8F634C3428AC5AA36C94BDB13E80A0F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpawnCoinAndPowerupU3Ed__105_System_Collections_IEnumerator_Reset_mDE0165917E763B5468CAEA0DCD25BD3CCAB8C292_RuntimeMethod_var)));
	}
}
// System.Object TrackManager/<SpawnCoinAndPowerup>d__105::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnCoinAndPowerupU3Ed__105_System_Collections_IEnumerator_get_Current_mABFA9CB76523E4E2C8DD802EEE96F214167B9076 (U3CSpawnCoinAndPowerupU3Ed__105_t482240A2C8F634C3428AC5AA36C94BDB13E80A0F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Single TrackSegment::get_worldLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TrackSegment_get_worldLength_mB55EB6AF2BC1392F2E3BFF9A62FA00F050E261BF (TrackSegment_tB910757B2D1C9F1F30757C0AB61CEC753AC93288* __this, const RuntimeMethod* method) 
{
	{
		// public float worldLength { get { return m_WorldLength; } }
		float L_0 = __this->___m_WorldLength_10;
		return L_0;
	}
}
// System.Void TrackSegment::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackSegment_OnEnable_m3E904A4A469EAD791C7353289779E4F2FAAB7988 (TrackSegment_tB910757B2D1C9F1F30757C0AB61CEC753AC93288* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1249285791F54D980F45FA97F88CF24A5A66A7C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF3025C3E87DD884D984685F7EED5B5E7E504A7B);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// UpdateWorldLength();
		TrackSegment_UpdateWorldLength_m7EAC335477F27F928558BD34F9E9B5526F919460(__this, NULL);
		// GameObject obj = new GameObject("ObjectRoot");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteralEF3025C3E87DD884D984685F7EED5B5E7E504A7B, NULL);
		V_0 = L_0;
		// obj.transform.SetParent(transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_2, L_3, NULL);
		// objectRoot = obj.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		__this->___objectRoot_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objectRoot_6), (void*)L_5);
		// obj = new GameObject("Collectibles");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_6, _stringLiteral1249285791F54D980F45FA97F88CF24A5A66A7C9, NULL);
		V_0 = L_6;
		// obj.transform.SetParent(objectRoot);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___objectRoot_6;
		NullCheck(L_8);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_8, L_9, NULL);
		// collectibleTransform = obj.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_0;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		__this->___collectibleTransform_7 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___collectibleTransform_7), (void*)L_11);
		// }
		return;
	}
}
// System.Void TrackSegment::GetPointAtInWorldUnit(System.Single,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackSegment_GetPointAtInWorldUnit_mE859FC1CBB9F114116E59786646021302EAAFACB (TrackSegment_tB910757B2D1C9F1F30757C0AB61CEC753AC93288* __this, float ___0_wt, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_pos, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rot, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float t = wt / m_WorldLength;
		float L_0 = ___0_wt;
		float L_1 = __this->___m_WorldLength_10;
		V_0 = ((float)(L_0/L_1));
		// GetPointAt(t, out pos, out rot);
		float L_2 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___1_pos;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_4 = ___2_rot;
		TrackSegment_GetPointAt_mC19B664E3594220731DC7D140AA99F612951C671(__this, L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void TrackSegment::GetPointAt(System.Single,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackSegment_GetPointAt_mC19B664E3594220731DC7D140AA99F612951C671 (TrackSegment_tB910757B2D1C9F1F30757C0AB61CEC753AC93288* __this, float ___0_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_pos, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rot, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_3 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_4 = NULL;
	{
		// float clampedT = Mathf.Clamp01(t);
		float L_0 = ___0_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		V_0 = L_1;
		// float scaledT = (pathParent.childCount - 1) * clampedT;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___pathParent_4;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_2, NULL);
		float L_4 = V_0;
		// int index = Mathf.FloorToInt(scaledT);
		float L_5 = ((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_subtract(L_3, 1))), L_4));
		int32_t L_6;
		L_6 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(L_5, NULL);
		V_1 = L_6;
		// float segmentT = scaledT - index;
		int32_t L_7 = V_1;
		V_2 = ((float)il2cpp_codegen_subtract(L_5, ((float)L_7)));
		// Transform orig = pathParent.GetChild(index);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___pathParent_4;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_8, L_9, NULL);
		V_3 = L_10;
		// if (index == pathParent.childCount - 1)
		int32_t L_11 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___pathParent_4;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_12, NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_13, 1))))))
		{
			goto IL_0058;
		}
	}
	{
		// pos = orig.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = ___1_pos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = V_3;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_14 = L_16;
		// rot = orig.rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_17 = ___2_rot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = V_3;
		NullCheck(L_18);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_18, NULL);
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_17 = L_19;
		// return;
		return;
	}

IL_0058:
	{
		// Transform target = pathParent.GetChild(index + 1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = __this->___pathParent_4;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_20, ((int32_t)il2cpp_codegen_add(L_21, 1)), NULL);
		V_4 = L_22;
		// pos = Vector3.Lerp(orig.position, target.position, segmentT);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_23 = ___1_pos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = V_3;
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = V_4;
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		float L_28 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_25, L_27, L_28, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_23 = L_29;
		// rot = Quaternion.Lerp(orig.rotation, target.rotation, segmentT);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_30 = ___2_rot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = V_3;
		NullCheck(L_31);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32;
		L_32 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_31, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = V_4;
		NullCheck(L_33);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34;
		L_34 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_33, NULL);
		float L_35 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36;
		L_36 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_32, L_34, L_35, NULL);
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_30 = L_36;
		// }
		return;
	}
}
// System.Void TrackSegment::UpdateWorldLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackSegment_UpdateWorldLength_m7EAC335477F27F928558BD34F9E9B5526F919460 (TrackSegment_tB910757B2D1C9F1F30757C0AB61CEC753AC93288* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// m_WorldLength = 0;
		__this->___m_WorldLength_10 = (0.0f);
		// for (int i = 1; i < pathParent.childCount; ++i)
		V_0 = 1;
		goto IL_0053;
	}

IL_000f:
	{
		// Transform orig = pathParent.GetChild(i - 1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___pathParent_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_0, ((int32_t)il2cpp_codegen_subtract(L_1, 1)), NULL);
		V_1 = L_2;
		// Transform end = pathParent.GetChild(i);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___pathParent_4;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_3, L_4, NULL);
		// Vector3 vec = end.position - orig.position;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = V_1;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_6, L_8, NULL);
		V_2 = L_9;
		// m_WorldLength += vec.magnitude;
		float L_10 = __this->___m_WorldLength_10;
		float L_11;
		L_11 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		__this->___m_WorldLength_10 = ((float)il2cpp_codegen_add(L_10, L_11));
		// for (int i = 1; i < pathParent.childCount; ++i)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0053:
	{
		// for (int i = 1; i < pathParent.childCount; ++i)
		int32_t L_13 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___pathParent_4;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_14, NULL);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_000f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TrackSegment::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackSegment_Cleanup_mFF7BFABD62B1B0AC597A5B57C8B34C5F61C60800 (TrackSegment_tB910757B2D1C9F1F30757C0AB61CEC753AC93288* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Coin_t6EC3724A41D53D737B499E377089217F0190C268_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	{
		goto IL_0026;
	}

IL_0002:
	{
		// Transform t = collectibleTransform.GetChild(0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___collectibleTransform_7;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_0, 0, NULL);
		V_0 = L_1;
		// t.SetParent(null);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = V_0;
		NullCheck(L_2);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_2, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// Coin.coinPool.Free(t.gameObject);
		Pooler_tCB5AF4787F428FACDF4910DA374CCCF8CF67DDB1* L_3 = ((Coin_t6EC3724A41D53D737B499E377089217F0190C268_StaticFields*)il2cpp_codegen_static_fields_for(Coin_t6EC3724A41D53D737B499E377089217F0190C268_il2cpp_TypeInfo_var))->___coinPool_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = V_0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_3);
		Pooler_Free_mF13FDD16555ACE83896789BB32D910C06162F656(L_3, L_5, NULL);
	}

IL_0026:
	{
		// while(collectibleTransform.childCount > 0)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___collectibleTransform_7;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_6, NULL);
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		// Addressables.ReleaseInstance(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Addressables_ReleaseInstance_m6673D687FF759A40D9351A6EE9666689A8770B3F(L_8, NULL);
		// }
		return;
	}
}
// System.Void TrackSegment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackSegment__ctor_m6FA9F07DB7B6AF34D8BDDBE0739C3ECE57FF2E43 (TrackSegment_tB910757B2D1C9F1F30757C0AB61CEC753AC93288* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void AdsForMission::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsForMission_OnEnable_m32658EA21BE7D546D37D6860E73CCD54169D60AF (AdsForMission_tD2BF1BBD0E42576886F251DCA139896D3BAAEAFE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF102683CF53C6D2C8DB12F555A4202A17CAAE1CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// adsButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___adsButton_6;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// newMissionText.gameObject.SetActive(false);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___newMissionText_5;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// if (PlayerData.instance.missions.Count >= 3)
		il2cpp_codegen_runtime_class_init_inline(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_4;
		L_4 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		NullCheck(L_4);
		List_1_t062AF7E8527A7D686B4CB557734FFAA572A6AA79* L_5 = L_4->___missions_12;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_mF102683CF53C6D2C8DB12F555A4202A17CAAE1CA_inline(L_5, List_1_get_Count_mF102683CF53C6D2C8DB12F555A4202A17CAAE1CA_RuntimeMethod_var);
		// return;
		return;
	}
}
// System.Void AdsForMission::ShowAds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsForMission_ShowAds_mF988FBF9B425CF2256A9DF5DD53B9FA0D1C7E2CD (AdsForMission_tD2BF1BBD0E42576886F251DCA139896D3BAAEAFE* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AdsForMission::AddNewMission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsForMission_AddNewMission_m493F3563B43CF92899F23DBFF45B445360B73537 (AdsForMission_tD2BF1BBD0E42576886F251DCA139896D3BAAEAFE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerData.instance.AddMission();
		il2cpp_codegen_runtime_class_init_inline(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_0;
		L_0 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		NullCheck(L_0);
		PlayerData_AddMission_m583F74344E4845BF3D49726221B41F3A3F8A799D(L_0, NULL);
		// PlayerData.instance.Save();
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_1;
		L_1 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		NullCheck(L_1);
		PlayerData_Save_m7ACDE3046A5377BD21EB86D7A5B2D35036663CE4(L_1, NULL);
		// StartCoroutine(missionUI.Open());
		MissionUI_t89B83CF976BF2F96BC1FC9FD54156229E4484E6D* L_2 = __this->___missionUI_4;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = MissionUI_Open_m3054D07902D8F744052D843EA5B143404ACD4D3F(L_2, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void AdsForMission::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsForMission__ctor_m510A87353A7150696AB3C09E2ED04586DA4D879A (AdsForMission_tD2BF1BBD0E42576886F251DCA139896D3BAAEAFE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF608EA91E59D48E4F094374F02A0EA5BD5C97708);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string adsPlacementId = "rewardedVideo";
		__this->___adsPlacementId_7 = _stringLiteralF608EA91E59D48E4F094374F02A0EA5BD5C97708;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adsPlacementId_7), (void*)_stringLiteralF608EA91E59D48E4F094374F02A0EA5BD5C97708);
		// public bool adsRewarded = true;
		__this->___adsRewarded_8 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void HighscoreUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighscoreUI__ctor_m58A67D2F5227D989CC2ED4DF4B0EDD9ABDF9B9E7 (HighscoreUI_t5FF0B67CAE537DA29683E12D94CF7C4EE6D1A945* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Leaderboard::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_Open_mFA74C00CDA61DAF768104389C8E58312F40B546E (Leaderboard_tD194E195710D451D3BC93DAA52955949D15A513E* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// Populate();
		Leaderboard_Populate_mB876DE9EF5CA5F81109110ECB769DAADAB894696(__this, NULL);
		// }
		return;
	}
}
// System.Void Leaderboard::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_Close_mF9AD9D4716AD7594ADB3FE0A6EA963486C5138EE (Leaderboard_tD194E195710D451D3BC93DAA52955949D15A513E* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Leaderboard::Populate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_Populate_mB876DE9EF5CA5F81109110ECB769DAADAB894696 (Leaderboard_tD194E195710D451D3BC93DAA52955949D15A513E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHighscoreUI_t5FF0B67CAE537DA29683E12D94CF7C4EE6D1A945_m60A1314C5609A2BFC94894E21628ADD2AF292477_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mAC86F205F4B98BBF36A8DD0D872E32C9177C5B72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mAE20C2BE4248B0AA2C5FCA7A0AF32B4C86B519F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	HighscoreUI_t5FF0B67CAE537DA29683E12D94CF7C4EE6D1A945* V_6 = NULL;
	int32_t V_7 = 0;
	HighscoreEntry_t4CA5E34561AAF0F64E532825DE3BBC1FB673130F V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// playerEntry.transform.SetAsLastSibling();
		HighscoreUI_t5FF0B67CAE537DA29683E12D94CF7C4EE6D1A945* L_0 = __this->___playerEntry_6;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Transform_SetAsLastSibling_m848AF1A0B4C7912FE88D8CBCF92B83D57B2B917E(L_1, NULL);
		// for(int i = 0; i < entriesCount; ++i)
		V_4 = 0;
		goto IL_0033;
	}

IL_0015:
	{
		// entriesRoot.GetChild(i).gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->___entriesRoot_4;
		int32_t L_3 = V_4;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_2, L_3, NULL);
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// for(int i = 0; i < entriesCount; ++i)
		int32_t L_6 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0033:
	{
		// for(int i = 0; i < entriesCount; ++i)
		int32_t L_7 = V_4;
		int32_t L_8 = __this->___entriesCount_5;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0015;
		}
	}
	{
		// int localStart = 0;
		V_0 = 0;
		// int place = -1;
		V_1 = (-1);
		// int localPlace = -1;
		V_2 = (-1);
		// if (displayPlayer)
		bool L_9 = __this->___displayPlayer_8;
		if (!L_9)
		{
			goto IL_006f;
		}
	}
	{
		// place = PlayerData.instance.GetScorePlace(int.Parse(playerEntry.score.text));
		il2cpp_codegen_runtime_class_init_inline(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_10;
		L_10 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		HighscoreUI_t5FF0B67CAE537DA29683E12D94CF7C4EE6D1A945* L_11 = __this->___playerEntry_6;
		NullCheck(L_11);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = L_11->___score_7;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_12);
		int32_t L_14;
		L_14 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_13, NULL);
		NullCheck(L_10);
		int32_t L_15;
		L_15 = PlayerData_GetScorePlace_m475D59400621E78F418E304A0DA3E394A2E94156(L_10, L_14, NULL);
		V_1 = L_15;
		// localPlace = place - localStart;
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_16, L_17));
	}

IL_006f:
	{
		// if (localPlace >= 0 && localPlace < entriesCount && displayPlayer)
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_00a6;
		}
	}
	{
		int32_t L_19 = V_2;
		int32_t L_20 = __this->___entriesCount_5;
		if ((((int32_t)L_19) >= ((int32_t)L_20)))
		{
			goto IL_00a6;
		}
	}
	{
		bool L_21 = __this->___displayPlayer_8;
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		// playerEntry.gameObject.SetActive(true);
		HighscoreUI_t5FF0B67CAE537DA29683E12D94CF7C4EE6D1A945* L_22 = __this->___playerEntry_6;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_22, NULL);
		NullCheck(L_23);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)1, NULL);
		// playerEntry.transform.SetSiblingIndex(localPlace);
		HighscoreUI_t5FF0B67CAE537DA29683E12D94CF7C4EE6D1A945* L_24 = __this->___playerEntry_6;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_24, NULL);
		int32_t L_26 = V_2;
		NullCheck(L_25);
		Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2(L_25, L_26, NULL);
	}

IL_00a6:
	{
		// if (!forcePlayerDisplay || PlayerData.instance.highscores.Count < entriesCount)
		bool L_27 = __this->___forcePlayerDisplay_7;
		if (!L_27)
		{
			goto IL_00c5;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_28;
		L_28 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		NullCheck(L_28);
		List_1_t41FFD2212A30C4D56B039EEC9134BF23286073F0* L_29 = L_28->___highscores_11;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = List_1_get_Count_mAC86F205F4B98BBF36A8DD0D872E32C9177C5B72_inline(L_29, List_1_get_Count_mAC86F205F4B98BBF36A8DD0D872E32C9177C5B72_RuntimeMethod_var);
		int32_t L_31 = __this->___entriesCount_5;
		if ((((int32_t)L_30) >= ((int32_t)L_31)))
		{
			goto IL_00ed;
		}
	}

IL_00c5:
	{
		// entriesRoot.GetChild(entriesRoot.transform.childCount - 1).gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_32 = __this->___entriesRoot_4;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_33 = __this->___entriesRoot_4;
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_33, NULL);
		NullCheck(L_34);
		int32_t L_35;
		L_35 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_34, NULL);
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_32, ((int32_t)il2cpp_codegen_subtract(L_35, 1)), NULL);
		NullCheck(L_36);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_36, NULL);
		NullCheck(L_37);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_37, (bool)0, NULL);
	}

IL_00ed:
	{
		// int currentHighScore = localStart;
		int32_t L_38 = V_0;
		V_3 = L_38;
		// for (int i = 0; i < entriesCount; ++i)
		V_5 = 0;
		goto IL_01c8;
	}

IL_00f7:
	{
		// HighscoreUI hs = entriesRoot.GetChild(i).GetComponent<HighscoreUI>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_39 = __this->___entriesRoot_4;
		int32_t L_40 = V_5;
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_39, L_40, NULL);
		NullCheck(L_41);
		HighscoreUI_t5FF0B67CAE537DA29683E12D94CF7C4EE6D1A945* L_42;
		L_42 = Component_GetComponent_TisHighscoreUI_t5FF0B67CAE537DA29683E12D94CF7C4EE6D1A945_m60A1314C5609A2BFC94894E21628ADD2AF292477(L_41, Component_GetComponent_TisHighscoreUI_t5FF0B67CAE537DA29683E12D94CF7C4EE6D1A945_m60A1314C5609A2BFC94894E21628ADD2AF292477_RuntimeMethod_var);
		V_6 = L_42;
		// if (hs == playerEntry || hs == null)
		HighscoreUI_t5FF0B67CAE537DA29683E12D94CF7C4EE6D1A945* L_43 = V_6;
		HighscoreUI_t5FF0B67CAE537DA29683E12D94CF7C4EE6D1A945* L_44 = __this->___playerEntry_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_43, L_44, NULL);
		if (L_45)
		{
			goto IL_01c2;
		}
	}
	{
		HighscoreUI_t5FF0B67CAE537DA29683E12D94CF7C4EE6D1A945* L_46 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_46, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_47)
		{
			goto IL_01c2;
		}
	}
	{
		// if (PlayerData.instance.highscores.Count > currentHighScore)
		il2cpp_codegen_runtime_class_init_inline(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_48;
		L_48 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		NullCheck(L_48);
		List_1_t41FFD2212A30C4D56B039EEC9134BF23286073F0* L_49 = L_48->___highscores_11;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = List_1_get_Count_mAC86F205F4B98BBF36A8DD0D872E32C9177C5B72_inline(L_49, List_1_get_Count_mAC86F205F4B98BBF36A8DD0D872E32C9177C5B72_RuntimeMethod_var);
		int32_t L_51 = V_3;
		if ((((int32_t)L_50) <= ((int32_t)L_51)))
		{
			goto IL_01b5;
		}
	}
	{
		// hs.gameObject.SetActive(true);
		HighscoreUI_t5FF0B67CAE537DA29683E12D94CF7C4EE6D1A945* L_52 = V_6;
		NullCheck(L_52);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53;
		L_53 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_52, NULL);
		NullCheck(L_53);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_53, (bool)1, NULL);
		// hs.playerName.text = PlayerData.instance.highscores[currentHighScore].name;
		HighscoreUI_t5FF0B67CAE537DA29683E12D94CF7C4EE6D1A945* L_54 = V_6;
		NullCheck(L_54);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_55 = L_54->___playerName_5;
		il2cpp_codegen_runtime_class_init_inline(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_56;
		L_56 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		NullCheck(L_56);
		List_1_t41FFD2212A30C4D56B039EEC9134BF23286073F0* L_57 = L_56->___highscores_11;
		int32_t L_58 = V_3;
		NullCheck(L_57);
		HighscoreEntry_t4CA5E34561AAF0F64E532825DE3BBC1FB673130F L_59;
		L_59 = List_1_get_Item_mAE20C2BE4248B0AA2C5FCA7A0AF32B4C86B519F4(L_57, L_58, List_1_get_Item_mAE20C2BE4248B0AA2C5FCA7A0AF32B4C86B519F4_RuntimeMethod_var);
		String_t* L_60 = L_59.___name_0;
		NullCheck(L_55);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_55, L_60);
		// hs.number.text = (localStart + i + 1).ToString();
		HighscoreUI_t5FF0B67CAE537DA29683E12D94CF7C4EE6D1A945* L_61 = V_6;
		NullCheck(L_61);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_62 = L_61->___number_4;
		int32_t L_63 = V_0;
		int32_t L_64 = V_5;
		V_7 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_63, L_64)), 1));
		String_t* L_65;
		L_65 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_7), NULL);
		NullCheck(L_62);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_62, L_65);
		// hs.score.text = PlayerData.instance.highscores[currentHighScore].score.ToString();
		HighscoreUI_t5FF0B67CAE537DA29683E12D94CF7C4EE6D1A945* L_66 = V_6;
		NullCheck(L_66);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_67 = L_66->___score_7;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_68;
		L_68 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		NullCheck(L_68);
		List_1_t41FFD2212A30C4D56B039EEC9134BF23286073F0* L_69 = L_68->___highscores_11;
		int32_t L_70 = V_3;
		NullCheck(L_69);
		HighscoreEntry_t4CA5E34561AAF0F64E532825DE3BBC1FB673130F L_71;
		L_71 = List_1_get_Item_mAE20C2BE4248B0AA2C5FCA7A0AF32B4C86B519F4(L_69, L_70, List_1_get_Item_mAE20C2BE4248B0AA2C5FCA7A0AF32B4C86B519F4_RuntimeMethod_var);
		V_8 = L_71;
		int32_t* L_72 = (&(&V_8)->___score_1);
		String_t* L_73;
		L_73 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_72, NULL);
		NullCheck(L_67);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_67, L_73);
		// currentHighScore++;
		int32_t L_74 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_74, 1));
		goto IL_01c2;
	}

IL_01b5:
	{
		// hs.gameObject.SetActive(false);
		HighscoreUI_t5FF0B67CAE537DA29683E12D94CF7C4EE6D1A945* L_75 = V_6;
		NullCheck(L_75);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_76;
		L_76 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_75, NULL);
		NullCheck(L_76);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_76, (bool)0, NULL);
	}

IL_01c2:
	{
		// for (int i = 0; i < entriesCount; ++i)
		int32_t L_77 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_01c8:
	{
		// for (int i = 0; i < entriesCount; ++i)
		int32_t L_78 = V_5;
		int32_t L_79 = __this->___entriesCount_5;
		if ((((int32_t)L_78) < ((int32_t)L_79)))
		{
			goto IL_00f7;
		}
	}
	{
		// if (forcePlayerDisplay)
		bool L_80 = __this->___forcePlayerDisplay_7;
		if (!L_80)
		{
			goto IL_01ee;
		}
	}
	{
		// playerEntry.gameObject.SetActive(true);
		HighscoreUI_t5FF0B67CAE537DA29683E12D94CF7C4EE6D1A945* L_81 = __this->___playerEntry_6;
		NullCheck(L_81);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_82;
		L_82 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_81, NULL);
		NullCheck(L_82);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_82, (bool)1, NULL);
	}

IL_01ee:
	{
		// playerEntry.number.text = (place + 1).ToString();
		HighscoreUI_t5FF0B67CAE537DA29683E12D94CF7C4EE6D1A945* L_83 = __this->___playerEntry_6;
		NullCheck(L_83);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_84 = L_83->___number_4;
		int32_t L_85 = V_1;
		V_7 = ((int32_t)il2cpp_codegen_add(L_85, 1));
		String_t* L_86;
		L_86 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_7), NULL);
		NullCheck(L_84);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_84, L_86);
		// }
		return;
	}
}
// System.Void Leaderboard::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard__ctor_mEC170034A2379EDCC6BBFD9B4E7CAC07FB646B4B (Leaderboard_tD194E195710D451D3BC93DAA52955949D15A513E* __this, const RuntimeMethod* method) 
{
	{
		// public bool displayPlayer = true;
		__this->___displayPlayer_8 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LicenceDisplayer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LicenceDisplayer_Start_mBA355B113F2C74C4E36308A85452C0AD26B904A5 (LicenceDisplayer_tDA8F952EA7AD41601219AAD947879653B925AAB2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerData.Create();
		il2cpp_codegen_runtime_class_init_inline(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		PlayerData_Create_m1D5ADD9C6648466D8524AC1EAE9264EC3D2BE02B(NULL);
		// if(PlayerData.instance.licenceAccepted)
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_0;
		L_0 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		NullCheck(L_0);
		bool L_1 = L_0->___licenceAccepted_14;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Close();
		LicenceDisplayer_Close_mE4007AF2913F12BF1533AA4A380F9EECCE828047(__this, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void LicenceDisplayer::Accepted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LicenceDisplayer_Accepted_m314797A86393C46F1708F91177A734C4DC2398FA (LicenceDisplayer_tDA8F952EA7AD41601219AAD947879653B925AAB2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerData.instance.licenceAccepted = true;
		il2cpp_codegen_runtime_class_init_inline(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_0;
		L_0 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		NullCheck(L_0);
		L_0->___licenceAccepted_14 = (bool)1;
		// PlayerData.instance.Save();
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_1;
		L_1 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		NullCheck(L_1);
		PlayerData_Save_m7ACDE3046A5377BD21EB86D7A5B2D35036663CE4(L_1, NULL);
		// Close();
		LicenceDisplayer_Close_mE4007AF2913F12BF1533AA4A380F9EECCE828047(__this, NULL);
		// }
		return;
	}
}
// System.Void LicenceDisplayer::Refuse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LicenceDisplayer_Refuse_m1D0C216F7FB5443B22B6D271CA41DDE974FAF476 (LicenceDisplayer_tDA8F952EA7AD41601219AAD947879653B925AAB2* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void LicenceDisplayer::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LicenceDisplayer_Close_mE4007AF2913F12BF1533AA4A380F9EECCE828047 (LicenceDisplayer_tDA8F952EA7AD41601219AAD947879653B925AAB2* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void LicenceDisplayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LicenceDisplayer__ctor_m34330FE9AF691EB8946034C070DEDEC57291562E (LicenceDisplayer_tDA8F952EA7AD41601219AAD947879653B925AAB2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MainMenu::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_LoadScene_m46EEEF2B4997E59870C6904C3DD1879670FCACE6 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(name);
		String_t* L_0 = ___0_name;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_0, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu__ctor_m8209CEC1D907C87A96D777961F4D0536E6E948DD (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MissionEntry::FillWithMission(MissionBase,MissionUI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissionEntry_FillWithMission_m5B3BB707FE46C2158B317A4474FA50B0BF56CCD5 (MissionEntry_tAA22413E7FE0E2347A413354729C9EF4E5893F9A* __this, MissionBase_tF261B4C4745F6899122D35DDC58E1607806BC389* ___0_m, MissionUI_t89B83CF976BF2F96BC1FC9FD54156229E4484E6D* ___1_owner, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_U3CFillWithMissionU3Eb__0_m631E637685E5CF1C7513A535376E76A1A494AE00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_t0CA909AAABF9BD6F2902377A0B61FCFBB7896657_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass7_0_t0CA909AAABF9BD6F2902377A0B61FCFBB7896657* V_0 = NULL;
	int32_t V_1 = 0;
	{
		U3CU3Ec__DisplayClass7_0_t0CA909AAABF9BD6F2902377A0B61FCFBB7896657* L_0 = (U3CU3Ec__DisplayClass7_0_t0CA909AAABF9BD6F2902377A0B61FCFBB7896657*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_0_t0CA909AAABF9BD6F2902377A0B61FCFBB7896657_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass7_0__ctor_m9F15203973DCE52565554C2647C3C681E5C3EED6(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass7_0_t0CA909AAABF9BD6F2902377A0B61FCFBB7896657* L_1 = V_0;
		MissionUI_t89B83CF976BF2F96BC1FC9FD54156229E4484E6D* L_2 = ___1_owner;
		NullCheck(L_1);
		L_1->___owner_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___owner_0), (void*)L_2);
		U3CU3Ec__DisplayClass7_0_t0CA909AAABF9BD6F2902377A0B61FCFBB7896657* L_3 = V_0;
		MissionBase_tF261B4C4745F6899122D35DDC58E1607806BC389* L_4 = ___0_m;
		NullCheck(L_3);
		L_3->___m_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___m_1), (void*)L_4);
		// descText.text = m.GetMissionDesc();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___descText_4;
		U3CU3Ec__DisplayClass7_0_t0CA909AAABF9BD6F2902377A0B61FCFBB7896657* L_6 = V_0;
		NullCheck(L_6);
		MissionBase_tF261B4C4745F6899122D35DDC58E1607806BC389* L_7 = L_6->___m_1;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String MissionBase::GetMissionDesc() */, L_7);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_8);
		// rewardText.text = m.reward.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___rewardText_5;
		U3CU3Ec__DisplayClass7_0_t0CA909AAABF9BD6F2902377A0B61FCFBB7896657* L_10 = V_0;
		NullCheck(L_10);
		MissionBase_tF261B4C4745F6899122D35DDC58E1607806BC389* L_11 = L_10->___m_1;
		NullCheck(L_11);
		int32_t* L_12 = (&L_11->___reward_2);
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_12, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_13);
		// if (m.isComplete)
		U3CU3Ec__DisplayClass7_0_t0CA909AAABF9BD6F2902377A0B61FCFBB7896657* L_14 = V_0;
		NullCheck(L_14);
		MissionBase_tF261B4C4745F6899122D35DDC58E1607806BC389* L_15 = L_14->___m_1;
		NullCheck(L_15);
		bool L_16;
		L_16 = MissionBase_get_isComplete_m0CE8F36A6BC0A9E0C8A4CD47D1B4BDCC0838F1A5(L_15, NULL);
		if (!L_16)
		{
			goto IL_00d5;
		}
	}
	{
		// claimButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_17 = __this->___claimButton_6;
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_17, NULL);
		NullCheck(L_18);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, (bool)1, NULL);
		// progressText.gameObject.SetActive(false);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_19 = __this->___progressText_7;
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_19, NULL);
		NullCheck(L_20);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_20, (bool)0, NULL);
		// background.color = completedColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_21 = __this->___background_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = __this->___completedColor_10;
		NullCheck(L_21);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_21, L_22);
		// progressText.color = Color.white;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_23 = __this->___progressText_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		L_24 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_23);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_23, L_24);
		// descText.color = Color.white;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_25 = __this->___descText_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26;
		L_26 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_25);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_25, L_26);
		// rewardText.color = Color.white;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_27 = __this->___rewardText_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28;
		L_28 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_27);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_27, L_28);
		// claimButton.onClick.AddListener(delegate { owner.Claim(m); } );
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_29 = __this->___claimButton_6;
		NullCheck(L_29);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_30;
		L_30 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_29, NULL);
		U3CU3Ec__DisplayClass7_0_t0CA909AAABF9BD6F2902377A0B61FCFBB7896657* L_31 = V_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_32 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_32, L_31, (intptr_t)((void*)U3CU3Ec__DisplayClass7_0_U3CFillWithMissionU3Eb__0_m631E637685E5CF1C7513A535376E76A1A494AE00_RuntimeMethod_var), NULL);
		NullCheck(L_30);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_30, L_32, NULL);
		return;
	}

IL_00d5:
	{
		// claimButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_33 = __this->___claimButton_6;
		NullCheck(L_33);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_33, NULL);
		NullCheck(L_34);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_34, (bool)0, NULL);
		// progressText.gameObject.SetActive(true);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_35 = __this->___progressText_7;
		NullCheck(L_35);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_35, NULL);
		NullCheck(L_36);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_36, (bool)1, NULL);
		// background.color = notCompletedColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_37 = __this->___background_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38 = __this->___notCompletedColor_9;
		NullCheck(L_37);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_37, L_38);
		// progressText.color = Color.black;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_39 = __this->___progressText_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		L_40 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		NullCheck(L_39);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_39, L_40);
		// descText.color = completedColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_41 = __this->___descText_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_42 = __this->___completedColor_10;
		NullCheck(L_41);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_41, L_42);
		// progressText.text = ((int)m.progress) + " / " + ((int)m.max);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_43 = __this->___progressText_7;
		U3CU3Ec__DisplayClass7_0_t0CA909AAABF9BD6F2902377A0B61FCFBB7896657* L_44 = V_0;
		NullCheck(L_44);
		MissionBase_tF261B4C4745F6899122D35DDC58E1607806BC389* L_45 = L_44->___m_1;
		NullCheck(L_45);
		float L_46 = L_45->___progress_0;
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_46);
		String_t* L_47;
		L_47 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		U3CU3Ec__DisplayClass7_0_t0CA909AAABF9BD6F2902377A0B61FCFBB7896657* L_48 = V_0;
		NullCheck(L_48);
		MissionBase_tF261B4C4745F6899122D35DDC58E1607806BC389* L_49 = L_48->___m_1;
		NullCheck(L_49);
		float L_50 = L_49->___max_1;
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_50);
		String_t* L_51;
		L_51 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_52;
		L_52 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_47, _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED, L_51, NULL);
		NullCheck(L_43);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_43, L_52);
		// }
		return;
	}
}
// System.Void MissionEntry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissionEntry__ctor_m571CCE74677054B2F76AB1EEA3AC28B9D481ECF2 (MissionEntry_tAA22413E7FE0E2347A413354729C9EF4E5893F9A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MissionEntry/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m9F15203973DCE52565554C2647C3C681E5C3EED6 (U3CU3Ec__DisplayClass7_0_t0CA909AAABF9BD6F2902377A0B61FCFBB7896657* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void MissionEntry/<>c__DisplayClass7_0::<FillWithMission>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CFillWithMissionU3Eb__0_m631E637685E5CF1C7513A535376E76A1A494AE00 (U3CU3Ec__DisplayClass7_0_t0CA909AAABF9BD6F2902377A0B61FCFBB7896657* __this, const RuntimeMethod* method) 
{
	{
		// claimButton.onClick.AddListener(delegate { owner.Claim(m); } );
		MissionUI_t89B83CF976BF2F96BC1FC9FD54156229E4484E6D* L_0 = __this->___owner_0;
		MissionBase_tF261B4C4745F6899122D35DDC58E1607806BC389* L_1 = __this->___m_1;
		NullCheck(L_0);
		MissionUI_Claim_m31F215C6C9CD7DCCEF4DA6A2DAF3FBC7B5129A0F(L_0, L_1, NULL);
		// claimButton.onClick.AddListener(delegate { owner.Claim(m); } );
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
// System.Collections.IEnumerator MissionUI::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MissionUI_Open_m3054D07902D8F744052D843EA5B143404ACD4D3F (MissionUI_t89B83CF976BF2F96BC1FC9FD54156229E4484E6D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COpenU3Ed__3_tA09582D5A14BD9ACDAC0E46ED6191BFCD4388457_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COpenU3Ed__3_tA09582D5A14BD9ACDAC0E46ED6191BFCD4388457* L_0 = (U3COpenU3Ed__3_tA09582D5A14BD9ACDAC0E46ED6191BFCD4388457*)il2cpp_codegen_object_new(U3COpenU3Ed__3_tA09582D5A14BD9ACDAC0E46ED6191BFCD4388457_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COpenU3Ed__3__ctor_mAB1B40E7E52532C167B3750FF65437C1F20992F6(L_0, 0, NULL);
		U3COpenU3Ed__3_tA09582D5A14BD9ACDAC0E46ED6191BFCD4388457* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void MissionUI::CallOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissionUI_CallOpen_m9189704AF842AA3A70858B5900170F6656E518F4 (MissionUI_t89B83CF976BF2F96BC1FC9FD54156229E4484E6D* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// StartCoroutine(Open());
		RuntimeObject* L_1;
		L_1 = MissionUI_Open_m3054D07902D8F744052D843EA5B143404ACD4D3F(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void MissionUI::Claim(MissionBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissionUI_Claim_m31F215C6C9CD7DCCEF4DA6A2DAF3FBC7B5129A0F (MissionUI_t89B83CF976BF2F96BC1FC9FD54156229E4484E6D* __this, MissionBase_tF261B4C4745F6899122D35DDC58E1607806BC389* ___0_m, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerData.instance.ClaimMission(m);
		il2cpp_codegen_runtime_class_init_inline(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_0;
		L_0 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		MissionBase_tF261B4C4745F6899122D35DDC58E1607806BC389* L_1 = ___0_m;
		NullCheck(L_0);
		PlayerData_ClaimMission_mCF483B394C880924B66CEDBEE311E310E57ADF59(L_0, L_1, NULL);
		// StartCoroutine(Open());
		RuntimeObject* L_2;
		L_2 = MissionUI_Open_m3054D07902D8F744052D843EA5B143404ACD4D3F(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void MissionUI::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissionUI_Close_mBF60737D1E2AAE98D6D226236408FAFEC21BD5BA (MissionUI_t89B83CF976BF2F96BC1FC9FD54156229E4484E6D* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MissionUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissionUI__ctor_m620CD215D7B87A6FE1055787165C91DDC9E4CE84 (MissionUI_t89B83CF976BF2F96BC1FC9FD54156229E4484E6D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MissionUI/<Open>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenU3Ed__3__ctor_mAB1B40E7E52532C167B3750FF65437C1F20992F6 (U3COpenU3Ed__3_tA09582D5A14BD9ACDAC0E46ED6191BFCD4388457* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MissionUI/<Open>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenU3Ed__3_System_IDisposable_Dispose_mE8B07F9832F26D2E8F8A7427E20DCB0F2BF0E861 (U3COpenU3Ed__3_tA09582D5A14BD9ACDAC0E46ED6191BFCD4388457* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MissionUI/<Open>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COpenU3Ed__3_MoveNext_m9B29754697F94500B99B7E2F8CE4CEECE9185ED5 (U3COpenU3Ed__3_tA09582D5A14BD9ACDAC0E46ED6191BFCD4388457* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_op_Implicit_mC309483476DD49EDD7B1CE0F84FB73E588A90416_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAdsForMission_tD2BF1BBD0E42576886F251DCA139896D3BAAEAFE_m7CF3CE8BC2CCD9F702836B769BC8DB1999B439D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMissionEntry_tAA22413E7FE0E2347A413354729C9EF4E5893F9A_m3AACC401B97744E081B91A730051F471273F4808_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF102683CF53C6D2C8DB12F555A4202A17CAAE1CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8DB41347E218BA6000D407D1F130765F6DA3DB6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B16F31166F250B08D5822F65EFA750F04F0BAE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB914A48024966053D434FFB9366D986DCC777EB6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MissionUI_t89B83CF976BF2F96BC1FC9FD54156229E4484E6D* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B23_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B22_0 = NULL;
	AdsForMission_tD2BF1BBD0E42576886F251DCA139896D3BAAEAFE* G_B24_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MissionUI_t89B83CF976BF2F96BC1FC9FD54156229E4484E6D* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00cc;
			}
			case 2:
			{
				goto IL_0198;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// gameObject.SetActive(true);
		MissionUI_t89B83CF976BF2F96BC1FC9FD54156229E4484E6D* L_3 = V_1;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// foreach (Transform t in missionPlace)
		MissionUI_t89B83CF976BF2F96BC1FC9FD54156229E4484E6D* L_5 = V_1;
		NullCheck(L_5);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = L_5->___missionPlace_4;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_6, NULL);
		V_2 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_8 = V_2;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_9 = V_3;
					if (!L_9)
					{
						goto IL_0073;
					}
				}
				{
					RuntimeObject* L_10 = V_3;
					NullCheck(L_10);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
				}

IL_0073:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0059_1;
			}

IL_0043_1:
			{
				// foreach (Transform t in missionPlace)
				RuntimeObject* L_11 = V_2;
				NullCheck(L_11);
				RuntimeObject* L_12;
				L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				// Addressables.ReleaseInstance(t.gameObject);
				NullCheck(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_12, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
				L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_12, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
				il2cpp_codegen_runtime_class_init_inline(Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
				bool L_14;
				L_14 = Addressables_ReleaseInstance_m6673D687FF759A40D9351A6EE9666689A8770B3F(L_13, NULL);
			}

IL_0059_1:
			{
				// foreach (Transform t in missionPlace)
				RuntimeObject* L_15 = V_2;
				NullCheck(L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_0043_1;
				}
			}
			{
				goto IL_0074;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0074:
	{
		// for(int i = 0; i < 3; ++i)
		__this->___U3CiU3E5__2_3 = 0;
		goto IL_0231;
	}

IL_0080:
	{
		// if (PlayerData.instance.missions.Count > i)
		il2cpp_codegen_runtime_class_init_inline(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_17;
		L_17 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		NullCheck(L_17);
		List_1_t062AF7E8527A7D686B4CB557734FFAA572A6AA79* L_18 = L_17->___missions_12;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_mF102683CF53C6D2C8DB12F555A4202A17CAAE1CA_inline(L_18, List_1_get_Count_mF102683CF53C6D2C8DB12F555A4202A17CAAE1CA_RuntimeMethod_var);
		int32_t L_20 = __this->___U3CiU3E5__2_3;
		if ((((int32_t)L_19) <= ((int32_t)L_20)))
		{
			goto IL_0166;
		}
	}
	{
		// AsyncOperationHandle op = missionEntryPrefab.InstantiateAsync();
		MissionUI_t89B83CF976BF2F96BC1FC9FD54156229E4484E6D* L_21 = V_1;
		NullCheck(L_21);
		AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740* L_22 = L_21->___missionEntryPrefab_5;
		NullCheck(L_22);
		AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA L_23;
		L_23 = VirtualFuncInvoker2< AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, bool >::Invoke(16 /* UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject> UnityEngine.AddressableAssets.AssetReference::InstantiateAsync(UnityEngine.Transform,System.Boolean) */, L_22, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, (bool)0);
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_24;
		L_24 = AsyncOperationHandle_1_op_Implicit_mC309483476DD49EDD7B1CE0F84FB73E588A90416(L_23, AsyncOperationHandle_1_op_Implicit_mC309483476DD49EDD7B1CE0F84FB73E588A90416_RuntimeMethod_var);
		__this->___U3CopU3E5__3_4 = L_24;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CopU3E5__3_4))->___m_InternalOp_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CopU3E5__3_4))->___m_LocationName_2), (void*)NULL);
		#endif
		// yield return op;
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_25 = __this->___U3CopU3E5__3_4;
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_26 = L_25;
		RuntimeObject* L_27 = Box(AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_il2cpp_TypeInfo_var, &L_26);
		__this->___U3CU3E2__current_1 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_27);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00cc:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (op.Result == null || !(op.Result is GameObject))
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* L_28 = (&__this->___U3CopU3E5__3_4);
		RuntimeObject* L_29;
		L_29 = AsyncOperationHandle_get_Result_mC319B351EAF9A8C76AAEB948BB3BC17F94AC9746(L_28, NULL);
		if (!L_29)
		{
			goto IL_00f2;
		}
	}
	{
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* L_30 = (&__this->___U3CopU3E5__3_4);
		RuntimeObject* L_31;
		L_31 = AsyncOperationHandle_get_Result_mC319B351EAF9A8C76AAEB948BB3BC17F94AC9746(L_30, NULL);
		if (((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_31, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)))
		{
			goto IL_0113;
		}
	}

IL_00f2:
	{
		// Debug.LogWarning(string.Format("Unable to load mission entry {0}.", missionEntryPrefab.Asset.name));
		MissionUI_t89B83CF976BF2F96BC1FC9FD54156229E4484E6D* L_32 = V_1;
		NullCheck(L_32);
		AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740* L_33 = L_32->___missionEntryPrefab_5;
		NullCheck(L_33);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_34;
		L_34 = VirtualFuncInvoker0< Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* >::Invoke(11 /* UnityEngine.Object UnityEngine.AddressableAssets.AssetReference::get_Asset() */, L_33);
		NullCheck(L_34);
		String_t* L_35;
		L_35 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_34, NULL);
		String_t* L_36;
		L_36 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral7B16F31166F250B08D5822F65EFA750F04F0BAE1, L_35, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_36, NULL);
		// yield break;
		return (bool)0;
	}

IL_0113:
	{
		// MissionEntry entry = (op.Result as GameObject).GetComponent<MissionEntry>();
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* L_37 = (&__this->___U3CopU3E5__3_4);
		RuntimeObject* L_38;
		L_38 = AsyncOperationHandle_get_Result_mC319B351EAF9A8C76AAEB948BB3BC17F94AC9746(L_37, NULL);
		NullCheck(((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_38, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)));
		MissionEntry_tAA22413E7FE0E2347A413354729C9EF4E5893F9A* L_39;
		L_39 = GameObject_GetComponent_TisMissionEntry_tAA22413E7FE0E2347A413354729C9EF4E5893F9A_m3AACC401B97744E081B91A730051F471273F4808(((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_38, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)), GameObject_GetComponent_TisMissionEntry_tAA22413E7FE0E2347A413354729C9EF4E5893F9A_m3AACC401B97744E081B91A730051F471273F4808_RuntimeMethod_var);
		// entry.transform.SetParent(missionPlace, false);
		MissionEntry_tAA22413E7FE0E2347A413354729C9EF4E5893F9A* L_40 = L_39;
		NullCheck(L_40);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_40, NULL);
		MissionUI_t89B83CF976BF2F96BC1FC9FD54156229E4484E6D* L_42 = V_1;
		NullCheck(L_42);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_43 = L_42->___missionPlace_4;
		NullCheck(L_41);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_41, L_43, (bool)0, NULL);
		// entry.FillWithMission(PlayerData.instance.missions[i], this);
		il2cpp_codegen_runtime_class_init_inline(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_44;
		L_44 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		NullCheck(L_44);
		List_1_t062AF7E8527A7D686B4CB557734FFAA572A6AA79* L_45 = L_44->___missions_12;
		int32_t L_46 = __this->___U3CiU3E5__2_3;
		NullCheck(L_45);
		MissionBase_tF261B4C4745F6899122D35DDC58E1607806BC389* L_47;
		L_47 = List_1_get_Item_m8DB41347E218BA6000D407D1F130765F6DA3DB6B(L_45, L_46, List_1_get_Item_m8DB41347E218BA6000D407D1F130765F6DA3DB6B_RuntimeMethod_var);
		MissionUI_t89B83CF976BF2F96BC1FC9FD54156229E4484E6D* L_48 = V_1;
		NullCheck(L_40);
		MissionEntry_FillWithMission_m5B3BB707FE46C2158B317A4474FA50B0BF56CCD5(L_40, L_47, L_48, NULL);
		// }
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* L_49 = (&__this->___U3CopU3E5__3_4);
		il2cpp_codegen_initobj(L_49, sizeof(AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D));
		goto IL_021f;
	}

IL_0166:
	{
		// AsyncOperationHandle op = addMissionButtonPrefab.InstantiateAsync();
		MissionUI_t89B83CF976BF2F96BC1FC9FD54156229E4484E6D* L_50 = V_1;
		NullCheck(L_50);
		AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740* L_51 = L_50->___addMissionButtonPrefab_6;
		NullCheck(L_51);
		AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA L_52;
		L_52 = VirtualFuncInvoker2< AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, bool >::Invoke(16 /* UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject> UnityEngine.AddressableAssets.AssetReference::InstantiateAsync(UnityEngine.Transform,System.Boolean) */, L_51, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, (bool)0);
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_53;
		L_53 = AsyncOperationHandle_1_op_Implicit_mC309483476DD49EDD7B1CE0F84FB73E588A90416(L_52, AsyncOperationHandle_1_op_Implicit_mC309483476DD49EDD7B1CE0F84FB73E588A90416_RuntimeMethod_var);
		__this->___U3CopU3E5__3_4 = L_53;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CopU3E5__3_4))->___m_InternalOp_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CopU3E5__3_4))->___m_LocationName_2), (void*)NULL);
		#endif
		// yield return op;
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_54 = __this->___U3CopU3E5__3_4;
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_55 = L_54;
		RuntimeObject* L_56 = Box(AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_il2cpp_TypeInfo_var, &L_55);
		__this->___U3CU3E2__current_1 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_56);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0198:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (op.Result == null || !(op.Result is GameObject))
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* L_57 = (&__this->___U3CopU3E5__3_4);
		RuntimeObject* L_58;
		L_58 = AsyncOperationHandle_get_Result_mC319B351EAF9A8C76AAEB948BB3BC17F94AC9746(L_57, NULL);
		if (!L_58)
		{
			goto IL_01be;
		}
	}
	{
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* L_59 = (&__this->___U3CopU3E5__3_4);
		RuntimeObject* L_60;
		L_60 = AsyncOperationHandle_get_Result_mC319B351EAF9A8C76AAEB948BB3BC17F94AC9746(L_59, NULL);
		if (((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_60, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)))
		{
			goto IL_01df;
		}
	}

IL_01be:
	{
		// Debug.LogWarning(string.Format("Unable to load button {0}.", addMissionButtonPrefab.Asset.name));
		MissionUI_t89B83CF976BF2F96BC1FC9FD54156229E4484E6D* L_61 = V_1;
		NullCheck(L_61);
		AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740* L_62 = L_61->___addMissionButtonPrefab_6;
		NullCheck(L_62);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_63;
		L_63 = VirtualFuncInvoker0< Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* >::Invoke(11 /* UnityEngine.Object UnityEngine.AddressableAssets.AssetReference::get_Asset() */, L_62);
		NullCheck(L_63);
		String_t* L_64;
		L_64 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_63, NULL);
		String_t* L_65;
		L_65 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralB914A48024966053D434FFB9366D986DCC777EB6, L_64, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_65, NULL);
		// yield break;
		return (bool)0;
	}

IL_01df:
	{
		// AdsForMission obj = (op.Result as GameObject)?.GetComponent<AdsForMission>();
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* L_66 = (&__this->___U3CopU3E5__3_4);
		RuntimeObject* L_67;
		L_67 = AsyncOperationHandle_get_Result_mC319B351EAF9A8C76AAEB948BB3BC17F94AC9746(L_66, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_68 = ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_67, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var));
		G_B22_0 = L_68;
		if (L_68)
		{
			G_B23_0 = L_68;
			goto IL_01f6;
		}
	}
	{
		G_B24_0 = ((AdsForMission_tD2BF1BBD0E42576886F251DCA139896D3BAAEAFE*)(NULL));
		goto IL_01fb;
	}

IL_01f6:
	{
		NullCheck(G_B23_0);
		AdsForMission_tD2BF1BBD0E42576886F251DCA139896D3BAAEAFE* L_69;
		L_69 = GameObject_GetComponent_TisAdsForMission_tD2BF1BBD0E42576886F251DCA139896D3BAAEAFE_m7CF3CE8BC2CCD9F702836B769BC8DB1999B439D0(G_B23_0, GameObject_GetComponent_TisAdsForMission_tD2BF1BBD0E42576886F251DCA139896D3BAAEAFE_m7CF3CE8BC2CCD9F702836B769BC8DB1999B439D0_RuntimeMethod_var);
		G_B24_0 = L_69;
	}

IL_01fb:
	{
		// obj.missionUI = this;
		AdsForMission_tD2BF1BBD0E42576886F251DCA139896D3BAAEAFE* L_70 = G_B24_0;
		MissionUI_t89B83CF976BF2F96BC1FC9FD54156229E4484E6D* L_71 = V_1;
		NullCheck(L_70);
		L_70->___missionUI_4 = L_71;
		Il2CppCodeGenWriteBarrier((void**)(&L_70->___missionUI_4), (void*)L_71);
		// obj.transform.SetParent(missionPlace, false);
		NullCheck(L_70);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_72;
		L_72 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_70, NULL);
		MissionUI_t89B83CF976BF2F96BC1FC9FD54156229E4484E6D* L_73 = V_1;
		NullCheck(L_73);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_74 = L_73->___missionPlace_4;
		NullCheck(L_72);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_72, L_74, (bool)0, NULL);
		// }
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* L_75 = (&__this->___U3CopU3E5__3_4);
		il2cpp_codegen_initobj(L_75, sizeof(AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D));
	}

IL_021f:
	{
		// for(int i = 0; i < 3; ++i)
		int32_t L_76 = __this->___U3CiU3E5__2_3;
		V_4 = ((int32_t)il2cpp_codegen_add(L_76, 1));
		int32_t L_77 = V_4;
		__this->___U3CiU3E5__2_3 = L_77;
	}

IL_0231:
	{
		// for(int i = 0; i < 3; ++i)
		int32_t L_78 = __this->___U3CiU3E5__2_3;
		if ((((int32_t)L_78) < ((int32_t)3)))
		{
			goto IL_0080;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object MissionUI/<Open>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COpenU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m92F41FDA008E0081B52201C198A3A98DD14924B4 (U3COpenU3Ed__3_tA09582D5A14BD9ACDAC0E46ED6191BFCD4388457* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MissionUI/<Open>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenU3Ed__3_System_Collections_IEnumerator_Reset_m597700101794D4BEEF3C0696E71F030E9382A452 (U3COpenU3Ed__3_tA09582D5A14BD9ACDAC0E46ED6191BFCD4388457* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COpenU3Ed__3_System_Collections_IEnumerator_Reset_m597700101794D4BEEF3C0696E71F030E9382A452_RuntimeMethod_var)));
	}
}
// System.Object MissionUI/<Open>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COpenU3Ed__3_System_Collections_IEnumerator_get_Current_mCE6FA6894A05E3DD447FE0A88FAD711D62434A10 (U3COpenU3Ed__3_tA09582D5A14BD9ACDAC0E46ED6191BFCD4388457* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void PowerupIcon::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerupIcon_Start_m4DDF4E72523D48C4C3CBC2D9152AD31D20DFCA8B (PowerupIcon_t76436B2A852D5BC6BE9A3A7995442678C145481B* __this, const RuntimeMethod* method) 
{
	{
		// icon.sprite = linkedConsumable.icon;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___icon_5;
		Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA* L_1 = __this->___linkedConsumable_4;
		NullCheck(L_1);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = L_1->___icon_5;
		NullCheck(L_0);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void PowerupIcon::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerupIcon_Update_mB646AFDC3B46382D5C6E929A61F77D1C2D781B0C (PowerupIcon_t76436B2A852D5BC6BE9A3A7995442678C145481B* __this, const RuntimeMethod* method) 
{
	{
		// slider.value = 1.0f - linkedConsumable.timeActive / linkedConsumable.duration;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___slider_6;
		Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA* L_1 = __this->___linkedConsumable_4;
		NullCheck(L_1);
		float L_2;
		L_2 = Consumable_get_timeActive_m3E6E2ACFE5744748F3199473AEB70AEB3B63667A_inline(L_1, NULL);
		Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA* L_3 = __this->___linkedConsumable_4;
		NullCheck(L_3);
		float L_4 = L_3->___duration_4;
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_2/L_4)))));
		// }
		return;
	}
}
// System.Void PowerupIcon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerupIcon__ctor_m52E6010CDF021AA4B15B44DCB18BE05E2A671F38 (PowerupIcon_t76436B2A852D5BC6BE9A3A7995442678C145481B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void DataDeleteConfirmation::Open(LoadoutState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataDeleteConfirmation_Open_mBD3DB451D9D06D1B597A09C7FC796DB686AB424A (DataDeleteConfirmation_t1434B59963E72FD0B6CA67CC07E5C4152E227365* __this, LoadoutState_t14852AB58CF707FCE966C46A1F36351BCA596509* ___0_owner, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// m_LoadoutState = owner;
		LoadoutState_t14852AB58CF707FCE966C46A1F36351BCA596509* L_1 = ___0_owner;
		__this->___m_LoadoutState_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LoadoutState_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void DataDeleteConfirmation::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataDeleteConfirmation_Close_m19CDDF9EAB83088F72E8C7D9706A94EE3600B4AA (DataDeleteConfirmation_t1434B59963E72FD0B6CA67CC07E5C4152E227365* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void DataDeleteConfirmation::Confirm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataDeleteConfirmation_Confirm_mCB10317A23F1C9D0FB7D4CC299FE3A1EA6745CB7 (DataDeleteConfirmation_t1434B59963E72FD0B6CA67CC07E5C4152E227365* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerData.NewSave();
		il2cpp_codegen_runtime_class_init_inline(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		PlayerData_NewSave_m326B7109E6C0FEB6996A11ED411E6364BBF4FC90(NULL);
		// m_LoadoutState.UnequipPowerup();
		LoadoutState_t14852AB58CF707FCE966C46A1F36351BCA596509* L_0 = __this->___m_LoadoutState_4;
		NullCheck(L_0);
		LoadoutState_UnequipPowerup_m72E4551D71E384810DFAE39D7C9FA2E606EF0A28(L_0, NULL);
		// m_LoadoutState.Refresh();
		LoadoutState_t14852AB58CF707FCE966C46A1F36351BCA596509* L_1 = __this->___m_LoadoutState_4;
		NullCheck(L_1);
		LoadoutState_Refresh_m0E8E1CD6613ABA819C74D230ABB69539ED3EF59F(L_1, NULL);
		// Close();
		DataDeleteConfirmation_Close_m19CDDF9EAB83088F72E8C7D9706A94EE3600B4AA(__this, NULL);
		// }
		return;
	}
}
// System.Void DataDeleteConfirmation::Deny()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataDeleteConfirmation_Deny_mB0C1F2072A871D69E763A5C947755C7D7743DFE1 (DataDeleteConfirmation_t1434B59963E72FD0B6CA67CC07E5C4152E227365* __this, const RuntimeMethod* method) 
{
	{
		// Close();
		DataDeleteConfirmation_Close_m19CDDF9EAB83088F72E8C7D9706A94EE3600B4AA(__this, NULL);
		// }
		return;
	}
}
// System.Void DataDeleteConfirmation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataDeleteConfirmation__ctor_m1E8CE71F27307AF55B3C80C3A4430DFDCEEF1012 (DataDeleteConfirmation_t1434B59963E72FD0B6CA67CC07E5C4152E227365* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SettingPopup::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingPopup_Open_m9E21DD1908F4F373A2715F61E705DE18B0B443E8 (SettingPopup_t3C9582E36558700377CBC4DD2F1541D6A78D8910* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// UpdateUI();
		SettingPopup_UpdateUI_m95FCC050683EFE8742AC5162E03BA1AA3DB783E9(__this, NULL);
		// }
		return;
	}
}
// System.Void SettingPopup::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingPopup_Close_m5C50EE05F28A108E2BA1F32D799E7E0803395733 (SettingPopup_t3C9582E36558700377CBC4DD2F1541D6A78D8910* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerData.instance.Save ();
		il2cpp_codegen_runtime_class_init_inline(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_0;
		L_0 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		NullCheck(L_0);
		PlayerData_Save_m7ACDE3046A5377BD21EB86D7A5B2D35036663CE4(L_0, NULL);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void SettingPopup::UpdateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingPopup_UpdateUI_m95FCC050683EFE8742AC5162E03BA1AA3DB783E9 (SettingPopup_t3C9582E36558700377CBC4DD2F1541D6A78D8910* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral521B69D184FBAA071E3D8E06625951F33931E30C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D1364D44BA8F634BB9CD0BC5617C11222D23BFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5793A0486CA0270FF49AD51E2176B4E15A6F700);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mixer.GetFloat(k_MasterVolumeFloatName, out m_MasterVolume);
		AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* L_0 = __this->___mixer_4;
		float* L_1 = (&__this->___m_MasterVolume_10);
		NullCheck(L_0);
		bool L_2;
		L_2 = AudioMixer_GetFloat_mAED8D277AD30D0346292555CBF81D8961117AEC9(L_0, _stringLiteral7D1364D44BA8F634BB9CD0BC5617C11222D23BFC, L_1, NULL);
		// mixer.GetFloat(k_MusicVolumeFloatName, out m_MusicVolume);
		AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* L_3 = __this->___mixer_4;
		float* L_4 = (&__this->___m_MusicVolume_11);
		NullCheck(L_3);
		bool L_5;
		L_5 = AudioMixer_GetFloat_mAED8D277AD30D0346292555CBF81D8961117AEC9(L_3, _stringLiteralB5793A0486CA0270FF49AD51E2176B4E15A6F700, L_4, NULL);
		// mixer.GetFloat(k_MasterSFXVolumeFloatName, out m_MasterSFXVolume);
		AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* L_6 = __this->___mixer_4;
		float* L_7 = (&__this->___m_MasterSFXVolume_12);
		NullCheck(L_6);
		bool L_8;
		L_8 = AudioMixer_GetFloat_mAED8D277AD30D0346292555CBF81D8961117AEC9(L_6, _stringLiteral521B69D184FBAA071E3D8E06625951F33931E30C, L_7, NULL);
		// masterSlider.value = 1.0f - (m_MasterVolume / k_MinVolume);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_9 = __this->___masterSlider_5;
		float L_10 = __this->___m_MasterVolume_10;
		NullCheck(L_9);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_9, ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_10/(-80.0f))))));
		// musicSlider.value = 1.0f - (m_MusicVolume / k_MinVolume);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_11 = __this->___musicSlider_6;
		float L_12 = __this->___m_MusicVolume_11;
		NullCheck(L_11);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_11, ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_12/(-80.0f))))));
		// masterSFXSlider.value = 1.0f - (m_MasterSFXVolume / k_MinVolume);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_13 = __this->___masterSFXSlider_7;
		float L_14 = __this->___m_MasterSFXVolume_12;
		NullCheck(L_13);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_13, ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_14/(-80.0f))))));
		// }
		return;
	}
}
// System.Void SettingPopup::DeleteData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingPopup_DeleteData_m3414394CADEDBB008043863C3B8945F592277FD2 (SettingPopup_t3C9582E36558700377CBC4DD2F1541D6A78D8910* __this, const RuntimeMethod* method) 
{
	{
		// confirmationPopup.Open(loadoutState);
		DataDeleteConfirmation_t1434B59963E72FD0B6CA67CC07E5C4152E227365* L_0 = __this->___confirmationPopup_9;
		LoadoutState_t14852AB58CF707FCE966C46A1F36351BCA596509* L_1 = __this->___loadoutState_8;
		NullCheck(L_0);
		DataDeleteConfirmation_Open_mBD3DB451D9D06D1B597A09C7FC796DB686AB424A(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void SettingPopup::MasterVolumeChangeValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingPopup_MasterVolumeChangeValue_mE5F0B3F37D876E0BA96D12E71344CE20A8FDF8C3 (SettingPopup_t3C9582E36558700377CBC4DD2F1541D6A78D8910* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D1364D44BA8F634BB9CD0BC5617C11222D23BFC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_MasterVolume = k_MinVolume * (1.0f - value);
		float L_0 = ___0_value;
		__this->___m_MasterVolume_10 = ((float)il2cpp_codegen_multiply((-80.0f), ((float)il2cpp_codegen_subtract((1.0f), L_0))));
		// mixer.SetFloat(k_MasterVolumeFloatName, m_MasterVolume);
		AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* L_1 = __this->___mixer_4;
		float L_2 = __this->___m_MasterVolume_10;
		NullCheck(L_1);
		bool L_3;
		L_3 = AudioMixer_SetFloat_m4789959013BE79E4F84F446405914908ADC3F335(L_1, _stringLiteral7D1364D44BA8F634BB9CD0BC5617C11222D23BFC, L_2, NULL);
		// PlayerData.instance.masterVolume = m_MasterVolume;
		il2cpp_codegen_runtime_class_init_inline(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_4;
		L_4 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		float L_5 = __this->___m_MasterVolume_10;
		NullCheck(L_4);
		L_4->___masterVolume_16 = L_5;
		// }
		return;
	}
}
// System.Void SettingPopup::MusicVolumeChangeValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingPopup_MusicVolumeChangeValue_m719E2A3DBE6C576B088A5C421B7F045CD3E9834F (SettingPopup_t3C9582E36558700377CBC4DD2F1541D6A78D8910* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5793A0486CA0270FF49AD51E2176B4E15A6F700);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_MusicVolume = k_MinVolume * (1.0f - value);
		float L_0 = ___0_value;
		__this->___m_MusicVolume_11 = ((float)il2cpp_codegen_multiply((-80.0f), ((float)il2cpp_codegen_subtract((1.0f), L_0))));
		// mixer.SetFloat(k_MusicVolumeFloatName, m_MusicVolume);
		AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* L_1 = __this->___mixer_4;
		float L_2 = __this->___m_MusicVolume_11;
		NullCheck(L_1);
		bool L_3;
		L_3 = AudioMixer_SetFloat_m4789959013BE79E4F84F446405914908ADC3F335(L_1, _stringLiteralB5793A0486CA0270FF49AD51E2176B4E15A6F700, L_2, NULL);
		// PlayerData.instance.musicVolume = m_MusicVolume;
		il2cpp_codegen_runtime_class_init_inline(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_4;
		L_4 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		float L_5 = __this->___m_MusicVolume_11;
		NullCheck(L_4);
		L_4->___musicVolume_17 = L_5;
		// }
		return;
	}
}
// System.Void SettingPopup::MasterSFXVolumeChangeValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingPopup_MasterSFXVolumeChangeValue_mF204E90C989F947AC97DDB5743D356D91695D3F6 (SettingPopup_t3C9582E36558700377CBC4DD2F1541D6A78D8910* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral521B69D184FBAA071E3D8E06625951F33931E30C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_MasterSFXVolume = k_MinVolume * (1.0f - value);
		float L_0 = ___0_value;
		__this->___m_MasterSFXVolume_12 = ((float)il2cpp_codegen_multiply((-80.0f), ((float)il2cpp_codegen_subtract((1.0f), L_0))));
		// mixer.SetFloat(k_MasterSFXVolumeFloatName, m_MasterSFXVolume);
		AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* L_1 = __this->___mixer_4;
		float L_2 = __this->___m_MasterSFXVolume_12;
		NullCheck(L_1);
		bool L_3;
		L_3 = AudioMixer_SetFloat_m4789959013BE79E4F84F446405914908ADC3F335(L_1, _stringLiteral521B69D184FBAA071E3D8E06625951F33931E30C, L_2, NULL);
		// PlayerData.instance.masterSFXVolume = m_MasterSFXVolume;
		il2cpp_codegen_runtime_class_init_inline(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_4;
		L_4 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		float L_5 = __this->___m_MasterSFXVolume_12;
		NullCheck(L_4);
		L_4->___masterSFXVolume_18 = L_5;
		// }
		return;
	}
}
// System.Void SettingPopup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingPopup__ctor_m481155DE4BB07E131EA7F929FFC43EB0CB09C8FF (SettingPopup_t3C9582E36558700377CBC4DD2F1541D6A78D8910* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void IAPHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPHandler__ctor_m29382C9BEAF2094847E57AF284F7BD0B223080F2 (IAPHandler_t5B993E8E05BDC4D05DAB7E1388A1AE8C8E25CE73* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ShopAccessoriesList::Populate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopAccessoriesList_Populate_m045F882B4B056ABD3D3A0F7F0E317325741619F4 (ShopAccessoriesList_tC54A532A1828DDDD56ECFBC213E0D0A927C1AF6A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t501005E5BA1DE50BCD8884D20F2E93B12ECEA696_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_add_Completed_mB72E06FC40EBAABFBAF0CC86388158AED1686F61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m0FE313316FA0D66F0D8822D31ADFA287CC8F85E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4CCD915EA4FA58C2FCBD4C1466F9DF7896882B7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3F765C5D5ABE40D9C60D1A6C7B6CC486184B881A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m534351E94386EEDC9FA2B9F683B9577A030CC282_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mEF14A8084D77C704BF993FF75DF0E418B26DA854_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEF156179BA222B81FE6D7F0B4F875A7B510C27DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m7EEBC563FD6DB6ABDDB4867E5758B738B187A594_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShopAccessoriesList_U3CPopulateU3Eb__2_0_mD1BA31B81A6109DF4128D5107FB7FA76065C766E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Enumerator_tA4A8A82222F9450F3DBB58BB9F30D1F78FEF7916 V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_t250FE3D0921BEB2B6A839207B24330D2DAFA30BF V_3;
	memset((&V_3), 0, sizeof(V_3));
	Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* V_4 = NULL;
	AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// m_RefreshCallback = null;
		((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)__this)->___m_RefreshCallback_6 = (RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)__this)->___m_RefreshCallback_6), (void*)(RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C*)NULL);
		// foreach (Transform t in listRoot)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)__this)->___listRoot_5;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_0044;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0044:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002a_1;
			}

IL_0015_1:
			{
				// foreach (Transform t in listRoot)
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				// Destroy(t.gameObject);
				NullCheck(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
				L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_7, NULL);
			}

IL_002a_1:
			{
				// foreach (Transform t in listRoot)
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				if (L_9)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0045;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0045:
	{
		// m_CharacterList.Clear();
		List_1_tC98DE074A3E56FDD9D42903151EDECB6FA81A140* L_10 = __this->___m_CharacterList_8;
		NullCheck(L_10);
		List_1_Clear_m7EEBC563FD6DB6ABDDB4867E5758B738B187A594_inline(L_10, List_1_Clear_m7EEBC563FD6DB6ABDDB4867E5758B738B187A594_RuntimeMethod_var);
		// foreach (KeyValuePair<string, Character> pair in CharacterDatabase.dictionary)
		Dictionary_2_t751B5EAF466601E97CA8673996839C749DDD0F41* L_11;
		L_11 = CharacterDatabase_get_dictionary_m3201388D0F763F58BD4A6984F099D115FBD1F36B_inline(NULL);
		NullCheck(L_11);
		Enumerator_tA4A8A82222F9450F3DBB58BB9F30D1F78FEF7916 L_12;
		L_12 = Dictionary_2_GetEnumerator_m0FE313316FA0D66F0D8822D31ADFA287CC8F85E4(L_11, Dictionary_2_GetEnumerator_m0FE313316FA0D66F0D8822D31ADFA287CC8F85E4_RuntimeMethod_var);
		V_2 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4CCD915EA4FA58C2FCBD4C1466F9DF7896882B7C((&V_2), Enumerator_Dispose_m4CCD915EA4FA58C2FCBD4C1466F9DF7896882B7C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008e_1;
			}

IL_005d_1:
			{
				// foreach (KeyValuePair<string, Character> pair in CharacterDatabase.dictionary)
				KeyValuePair_2_t250FE3D0921BEB2B6A839207B24330D2DAFA30BF L_13;
				L_13 = Enumerator_get_Current_m534351E94386EEDC9FA2B9F683B9577A030CC282_inline((&V_2), Enumerator_get_Current_m534351E94386EEDC9FA2B9F683B9577A030CC282_RuntimeMethod_var);
				V_3 = L_13;
				// Character c = pair.Value;
				Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_14;
				L_14 = KeyValuePair_2_get_Value_mEF14A8084D77C704BF993FF75DF0E418B26DA854_inline((&V_3), KeyValuePair_2_get_Value_mEF14A8084D77C704BF993FF75DF0E418B26DA854_RuntimeMethod_var);
				V_4 = L_14;
				// if (c.accessories !=null && c.accessories.Length > 0)
				Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_15 = V_4;
				NullCheck(L_15);
				CharacterAccessoriesU5BU5D_t5C845F313E7FB9BC4620908179C8F9521CEC4225* L_16 = L_15->___accessories_7;
				if (!L_16)
				{
					goto IL_008e_1;
				}
			}
			{
				Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_17 = V_4;
				NullCheck(L_17);
				CharacterAccessoriesU5BU5D_t5C845F313E7FB9BC4620908179C8F9521CEC4225* L_18 = L_17->___accessories_7;
				NullCheck(L_18);
				if (!(((RuntimeArray*)L_18)->max_length))
				{
					goto IL_008e_1;
				}
			}
			{
				// m_CharacterList.Add(c);
				List_1_tC98DE074A3E56FDD9D42903151EDECB6FA81A140* L_19 = __this->___m_CharacterList_8;
				Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_20 = V_4;
				NullCheck(L_19);
				List_1_Add_mEF156179BA222B81FE6D7F0B4F875A7B510C27DE_inline(L_19, L_20, List_1_Add_mEF156179BA222B81FE6D7F0B4F875A7B510C27DE_RuntimeMethod_var);
			}

IL_008e_1:
			{
				// foreach (KeyValuePair<string, Character> pair in CharacterDatabase.dictionary)
				bool L_21;
				L_21 = Enumerator_MoveNext_m3F765C5D5ABE40D9C60D1A6C7B6CC486184B881A((&V_2), Enumerator_MoveNext_m3F765C5D5ABE40D9C60D1A6C7B6CC486184B881A_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_005d_1;
				}
			}
			{
				goto IL_00a7;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a7:
	{
		// headerPrefab.InstantiateAsync().Completed += (op) =>
		// {
		//     LoadedCharacter(op, 0);
		// };
		AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740* L_22 = __this->___headerPrefab_7;
		NullCheck(L_22);
		AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA L_23;
		L_23 = VirtualFuncInvoker2< AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, bool >::Invoke(16 /* UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject> UnityEngine.AddressableAssets.AssetReference::InstantiateAsync(UnityEngine.Transform,System.Boolean) */, L_22, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, (bool)0);
		V_5 = L_23;
		Action_1_t501005E5BA1DE50BCD8884D20F2E93B12ECEA696* L_24 = (Action_1_t501005E5BA1DE50BCD8884D20F2E93B12ECEA696*)il2cpp_codegen_object_new(Action_1_t501005E5BA1DE50BCD8884D20F2E93B12ECEA696_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Action_1__ctor_mFD9384017128245D3C170BBC53AA164AAA76EEF8(L_24, __this, (intptr_t)((void*)ShopAccessoriesList_U3CPopulateU3Eb__2_0_mD1BA31B81A6109DF4128D5107FB7FA76065C766E_RuntimeMethod_var), NULL);
		AsyncOperationHandle_1_add_Completed_mB72E06FC40EBAABFBAF0CC86388158AED1686F61((&V_5), L_24, AsyncOperationHandle_1_add_Completed_mB72E06FC40EBAABFBAF0CC86388158AED1686F61_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ShopAccessoriesList::LoadedCharacter(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopAccessoriesList_LoadedCharacter_mD6DC05A6672E9607F683B9D381DFB042F848247E (ShopAccessoriesList_tC54A532A1828DDDD56ECFBC213E0D0A927C1AF6A* __this, AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA ___0_op, int32_t ___1_currentIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t501005E5BA1DE50BCD8884D20F2E93B12ECEA696_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_add_Completed_mB72E06FC40EBAABFBAF0CC86388158AED1686F61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA_m4CF72312516CEB58969E87EEDBE8B48C3BE823AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFEBF073C5B93D60BFEC82D242322C59514F834F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CLoadedCharacterU3Eb__0_m709FD7FCE1CE66761EDEACBA55EC9D04CC289D30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_t8F8178E5DBF17463B0EF1C5B6B6DBB6C76C22515_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11267D419FD27BA72568077CB8FAB452B5B7CFEB);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_t8F8178E5DBF17463B0EF1C5B6B6DBB6C76C22515* V_0 = NULL;
	Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* V_1 = NULL;
	AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		U3CU3Ec__DisplayClass3_0_t8F8178E5DBF17463B0EF1C5B6B6DBB6C76C22515* L_0 = (U3CU3Ec__DisplayClass3_0_t8F8178E5DBF17463B0EF1C5B6B6DBB6C76C22515*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t8F8178E5DBF17463B0EF1C5B6B6DBB6C76C22515_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_0__ctor_mF137724DFF25385C04A84BE1FCB36555130D7A5D(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_t8F8178E5DBF17463B0EF1C5B6B6DBB6C76C22515* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass3_0_t8F8178E5DBF17463B0EF1C5B6B6DBB6C76C22515* L_2 = V_0;
		int32_t L_3 = ___1_currentIndex;
		NullCheck(L_2);
		L_2->___currentIndex_1 = L_3;
		// if (op.Result == null || !(op.Result is GameObject))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F((&___0_op), AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_5)
		{
			goto IL_002c;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F((&___0_op), AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0047;
		}
	}

IL_002c:
	{
		// Debug.LogWarning(string.Format("Unable to load header {0}.", headerPrefab.RuntimeKey));
		AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740* L_7 = __this->___headerPrefab_7;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object UnityEngine.AddressableAssets.AssetReference::get_RuntimeKey() */, L_7);
		String_t* L_9;
		L_9 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral11267D419FD27BA72568077CB8FAB452B5B7CFEB, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_9, NULL);
		return;
	}

IL_0047:
	{
		// Character c = m_CharacterList[currentIndex];
		List_1_tC98DE074A3E56FDD9D42903151EDECB6FA81A140* L_10 = __this->___m_CharacterList_8;
		U3CU3Ec__DisplayClass3_0_t8F8178E5DBF17463B0EF1C5B6B6DBB6C76C22515* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___currentIndex_1;
		NullCheck(L_10);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_13;
		L_13 = List_1_get_Item_mFEBF073C5B93D60BFEC82D242322C59514F834F4(L_10, L_12, List_1_get_Item_mFEBF073C5B93D60BFEC82D242322C59514F834F4_RuntimeMethod_var);
		V_1 = L_13;
		// GameObject header = op.Result;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F((&___0_op), AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F_RuntimeMethod_var);
		// header.transform.SetParent(listRoot, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = L_14;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17 = ((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)__this)->___listRoot_5;
		NullCheck(L_16);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_16, L_17, (bool)0, NULL);
		// ShopItemListItem itmHeader = header.GetComponent<ShopItemListItem>();
		NullCheck(L_15);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_18;
		L_18 = GameObject_GetComponent_TisShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA_m4CF72312516CEB58969E87EEDBE8B48C3BE823AA(L_15, GameObject_GetComponent_TisShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA_m4CF72312516CEB58969E87EEDBE8B48C3BE823AA_RuntimeMethod_var);
		// itmHeader.nameText.text = c.characterName;
		NullCheck(L_18);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_19 = L_18->___nameText_5;
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_20 = V_1;
		NullCheck(L_20);
		String_t* L_21 = L_20->___characterName_4;
		NullCheck(L_19);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, L_21);
		// prefabItem.InstantiateAsync().Completed += (innerOp) =>
		// {
		//     LoadedAccessory(innerOp, currentIndex, 0);
		// };
		AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740* L_22 = ((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)__this)->___prefabItem_4;
		NullCheck(L_22);
		AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA L_23;
		L_23 = VirtualFuncInvoker2< AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, bool >::Invoke(16 /* UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject> UnityEngine.AddressableAssets.AssetReference::InstantiateAsync(UnityEngine.Transform,System.Boolean) */, L_22, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, (bool)0);
		V_2 = L_23;
		U3CU3Ec__DisplayClass3_0_t8F8178E5DBF17463B0EF1C5B6B6DBB6C76C22515* L_24 = V_0;
		Action_1_t501005E5BA1DE50BCD8884D20F2E93B12ECEA696* L_25 = (Action_1_t501005E5BA1DE50BCD8884D20F2E93B12ECEA696*)il2cpp_codegen_object_new(Action_1_t501005E5BA1DE50BCD8884D20F2E93B12ECEA696_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Action_1__ctor_mFD9384017128245D3C170BBC53AA164AAA76EEF8(L_25, L_24, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3CLoadedCharacterU3Eb__0_m709FD7FCE1CE66761EDEACBA55EC9D04CC289D30_RuntimeMethod_var), NULL);
		AsyncOperationHandle_1_add_Completed_mB72E06FC40EBAABFBAF0CC86388158AED1686F61((&V_2), L_25, AsyncOperationHandle_1_add_Completed_mB72E06FC40EBAABFBAF0CC86388158AED1686F61_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ShopAccessoriesList::LoadedAccessory(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopAccessoriesList_LoadedAccessory_mB5B2E74E904FE0292CBA9892C7375BAEF0F158C1 (ShopAccessoriesList_tC54A532A1828DDDD56ECFBC213E0D0A927C1AF6A* __this, AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA ___0_op, int32_t ___1_characterIndex, int32_t ___2_accessoryIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t501005E5BA1DE50BCD8884D20F2E93B12ECEA696_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_add_Completed_mB72E06FC40EBAABFBAF0CC86388158AED1686F61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA_m4CF72312516CEB58969E87EEDBE8B48C3BE823AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9069FA1AEE97FE9A743DDC42987FC042D0EA6A8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFEBF073C5B93D60BFEC82D242322C59514F834F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CLoadedAccessoryU3Eb__0_mECF5AB5E3613A98178828B492D928BA1DCFEC4DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CLoadedAccessoryU3Eb__1_mB1CE3509A5F5C3053DAC0A3AA9580A5E578EF569_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t2A99E9B8A3760384DE2C000B920A52454EB002EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_1_U3CLoadedAccessoryU3Eb__2_m8BA71F6019A2CDCC665F419E6E33FCB978C768EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_1_U3CLoadedAccessoryU3Eb__3_m3475B3347C27EBF4338BAB6010427FBB9BC3F9C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2707667773988763E9AB21587C1A2E990C2E8805);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t2A99E9B8A3760384DE2C000B920A52454EB002EB* V_0 = NULL;
	Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* V_1 = NULL;
	U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7* V_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	int32_t V_4 = 0;
	AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		U3CU3Ec__DisplayClass4_0_t2A99E9B8A3760384DE2C000B920A52454EB002EB* L_0 = (U3CU3Ec__DisplayClass4_0_t2A99E9B8A3760384DE2C000B920A52454EB002EB*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t2A99E9B8A3760384DE2C000B920A52454EB002EB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_m3E5A80CC8A5DEABABC705CCF4F512DB004D80DC0(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t2A99E9B8A3760384DE2C000B920A52454EB002EB* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass4_0_t2A99E9B8A3760384DE2C000B920A52454EB002EB* L_2 = V_0;
		int32_t L_3 = ___1_characterIndex;
		NullCheck(L_2);
		L_2->___characterIndex_1 = L_3;
		U3CU3Ec__DisplayClass4_0_t2A99E9B8A3760384DE2C000B920A52454EB002EB* L_4 = V_0;
		int32_t L_5 = ___2_accessoryIndex;
		NullCheck(L_4);
		L_4->___accessoryIndex_2 = L_5;
		// Character c = m_CharacterList[characterIndex];
		List_1_tC98DE074A3E56FDD9D42903151EDECB6FA81A140* L_6 = __this->___m_CharacterList_8;
		U3CU3Ec__DisplayClass4_0_t2A99E9B8A3760384DE2C000B920A52454EB002EB* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___characterIndex_1;
		NullCheck(L_6);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_9;
		L_9 = List_1_get_Item_mFEBF073C5B93D60BFEC82D242322C59514F834F4(L_6, L_8, List_1_get_Item_mFEBF073C5B93D60BFEC82D242322C59514F834F4_RuntimeMethod_var);
		V_1 = L_9;
		// if (op.Result == null || !(op.Result is GameObject))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F((&___0_op), AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_11)
		{
			goto IL_0045;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F((&___0_op), AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F_RuntimeMethod_var);
		if (L_12)
		{
			goto IL_0069;
		}
	}

IL_0045:
	{
		// Debug.LogWarning(string.Format("Unable to load shop accessory list {0}.", prefabItem.Asset.name));
		AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740* L_13 = ((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)__this)->___prefabItem_4;
		NullCheck(L_13);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_14;
		L_14 = VirtualFuncInvoker0< Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* >::Invoke(11 /* UnityEngine.Object UnityEngine.AddressableAssets.AssetReference::get_Asset() */, L_13);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_14, NULL);
		String_t* L_16;
		L_16 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral2707667773988763E9AB21587C1A2E990C2E8805, L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_16, NULL);
		goto IL_0216;
	}

IL_0069:
	{
		U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7* L_17 = (U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		U3CU3Ec__DisplayClass4_1__ctor_mF58977B87AFEECD7B322E1BB712F16A618354995(L_17, NULL);
		V_2 = L_17;
		U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7* L_18 = V_2;
		U3CU3Ec__DisplayClass4_0_t2A99E9B8A3760384DE2C000B920A52454EB002EB* L_19 = V_0;
		NullCheck(L_18);
		L_18->___CSU24U3CU3E8__locals1_3 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___CSU24U3CU3E8__locals1_3), (void*)L_19);
		// CharacterAccessories accessory = c.accessories[accessoryIndex];
		U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7* L_20 = V_2;
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_21 = V_1;
		NullCheck(L_21);
		CharacterAccessoriesU5BU5D_t5C845F313E7FB9BC4620908179C8F9521CEC4225* L_22 = L_21->___accessories_7;
		U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7* L_23 = V_2;
		NullCheck(L_23);
		U3CU3Ec__DisplayClass4_0_t2A99E9B8A3760384DE2C000B920A52454EB002EB* L_24 = L_23->___CSU24U3CU3E8__locals1_3;
		NullCheck(L_24);
		int32_t L_25 = L_24->___accessoryIndex_2;
		NullCheck(L_22);
		int32_t L_26 = L_25;
		CharacterAccessories_tBA489235C02D98040213C790FC991B786CFF4246* L_27 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_20);
		L_20->___accessory_1 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->___accessory_1), (void*)L_27);
		// GameObject newEntry = op.Result;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F((&___0_op), AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F_RuntimeMethod_var);
		V_3 = L_28;
		// newEntry.transform.SetParent(listRoot, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = V_3;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_31 = ((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)__this)->___listRoot_5;
		NullCheck(L_30);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_30, L_31, (bool)0, NULL);
		// ShopItemListItem itm = newEntry.GetComponent<ShopItemListItem>();
		U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7* L_32 = V_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = V_3;
		NullCheck(L_33);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_34;
		L_34 = GameObject_GetComponent_TisShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA_m4CF72312516CEB58969E87EEDBE8B48C3BE823AA(L_33, GameObject_GetComponent_TisShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA_m4CF72312516CEB58969E87EEDBE8B48C3BE823AA_RuntimeMethod_var);
		NullCheck(L_32);
		L_32->___itm_2 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&L_32->___itm_2), (void*)L_34);
		// string compoundName = c.characterName + ":" + accessory.accessoryName;
		U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7* L_35 = V_2;
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_36 = V_1;
		NullCheck(L_36);
		String_t* L_37 = L_36->___characterName_4;
		U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7* L_38 = V_2;
		NullCheck(L_38);
		CharacterAccessories_tBA489235C02D98040213C790FC991B786CFF4246* L_39 = L_38->___accessory_1;
		NullCheck(L_39);
		String_t* L_40 = L_39->___accessoryName_4;
		String_t* L_41;
		L_41 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_37, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_40, NULL);
		NullCheck(L_35);
		L_35->___compoundName_0 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&L_35->___compoundName_0), (void*)L_41);
		// itm.nameText.text = accessory.accessoryName;
		U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7* L_42 = V_2;
		NullCheck(L_42);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_43 = L_42->___itm_2;
		NullCheck(L_43);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_44 = L_43->___nameText_5;
		U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7* L_45 = V_2;
		NullCheck(L_45);
		CharacterAccessories_tBA489235C02D98040213C790FC991B786CFF4246* L_46 = L_45->___accessory_1;
		NullCheck(L_46);
		String_t* L_47 = L_46->___accessoryName_4;
		NullCheck(L_44);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_44, L_47);
		// itm.pricetext.text = accessory.cost.ToString();
		U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7* L_48 = V_2;
		NullCheck(L_48);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_49 = L_48->___itm_2;
		NullCheck(L_49);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_50 = L_49->___pricetext_6;
		U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7* L_51 = V_2;
		NullCheck(L_51);
		CharacterAccessories_tBA489235C02D98040213C790FC991B786CFF4246* L_52 = L_51->___accessory_1;
		NullCheck(L_52);
		int32_t* L_53 = (&L_52->___cost_5);
		String_t* L_54;
		L_54 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_53, NULL);
		NullCheck(L_50);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_50, L_54);
		// itm.icon.sprite = accessory.accessoryIcon;
		U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7* L_55 = V_2;
		NullCheck(L_55);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_56 = L_55->___itm_2;
		NullCheck(L_56);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_57 = L_56->___icon_4;
		U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7* L_58 = V_2;
		NullCheck(L_58);
		CharacterAccessories_tBA489235C02D98040213C790FC991B786CFF4246* L_59 = L_58->___accessory_1;
		NullCheck(L_59);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_60 = L_59->___accessoryIcon_7;
		NullCheck(L_57);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_57, L_60, NULL);
		// itm.buyButton.image.sprite = itm.buyButtonSprite;
		U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7* L_61 = V_2;
		NullCheck(L_61);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_62 = L_61->___itm_2;
		NullCheck(L_62);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_63 = L_62->___buyButton_8;
		NullCheck(L_63);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_64;
		L_64 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_63, NULL);
		U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7* L_65 = V_2;
		NullCheck(L_65);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_66 = L_65->___itm_2;
		NullCheck(L_66);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_67 = L_66->___buyButtonSprite_10;
		NullCheck(L_64);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_64, L_67, NULL);
		// if (accessory.premiumCost > 0)
		U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7* L_68 = V_2;
		NullCheck(L_68);
		CharacterAccessories_tBA489235C02D98040213C790FC991B786CFF4246* L_69 = L_68->___accessory_1;
		NullCheck(L_69);
		int32_t L_70 = L_69->___premiumCost_6;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_019b;
		}
	}
	{
		// itm.premiumText.transform.parent.gameObject.SetActive(true);
		U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7* L_71 = V_2;
		NullCheck(L_71);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_72 = L_71->___itm_2;
		NullCheck(L_72);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_73 = L_72->___premiumText_7;
		NullCheck(L_73);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_74;
		L_74 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_73, NULL);
		NullCheck(L_74);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_75;
		L_75 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_74, NULL);
		NullCheck(L_75);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_76;
		L_76 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_75, NULL);
		NullCheck(L_76);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_76, (bool)1, NULL);
		// itm.premiumText.text = accessory.premiumCost.ToString();
		U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7* L_77 = V_2;
		NullCheck(L_77);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_78 = L_77->___itm_2;
		NullCheck(L_78);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_79 = L_78->___premiumText_7;
		U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7* L_80 = V_2;
		NullCheck(L_80);
		CharacterAccessories_tBA489235C02D98040213C790FC991B786CFF4246* L_81 = L_80->___accessory_1;
		NullCheck(L_81);
		int32_t* L_82 = (&L_81->___premiumCost_6);
		String_t* L_83;
		L_83 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_82, NULL);
		NullCheck(L_79);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_79, L_83);
		goto IL_01bb;
	}

IL_019b:
	{
		// itm.premiumText.transform.parent.gameObject.SetActive(false);
		U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7* L_84 = V_2;
		NullCheck(L_84);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_85 = L_84->___itm_2;
		NullCheck(L_85);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_86 = L_85->___premiumText_7;
		NullCheck(L_86);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_87;
		L_87 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_86, NULL);
		NullCheck(L_87);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_88;
		L_88 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_87, NULL);
		NullCheck(L_88);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_89;
		L_89 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_88, NULL);
		NullCheck(L_89);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_89, (bool)0, NULL);
	}

IL_01bb:
	{
		// itm.buyButton.onClick.AddListener(delegate()
		// {
		//     Buy(compoundName, accessory.cost, accessory.premiumCost);
		// });
		U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7* L_90 = V_2;
		NullCheck(L_90);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_91 = L_90->___itm_2;
		NullCheck(L_91);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_92 = L_91->___buyButton_8;
		NullCheck(L_92);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_93;
		L_93 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_92, NULL);
		U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7* L_94 = V_2;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_95 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_95, L_94, (intptr_t)((void*)U3CU3Ec__DisplayClass4_1_U3CLoadedAccessoryU3Eb__2_m8BA71F6019A2CDCC665F419E6E33FCB978C768EA_RuntimeMethod_var), NULL);
		NullCheck(L_93);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_93, L_95, NULL);
		// m_RefreshCallback += delegate() { RefreshButton(itm, accessory, compoundName); };
		RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C* L_96 = ((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)__this)->___m_RefreshCallback_6;
		U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7* L_97 = V_2;
		RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C* L_98 = (RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C*)il2cpp_codegen_object_new(RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C_il2cpp_TypeInfo_var);
		NullCheck(L_98);
		RefreshCallback__ctor_m32B31403EB444160A244324A0F33184727183AD7(L_98, L_97, (intptr_t)((void*)U3CU3Ec__DisplayClass4_1_U3CLoadedAccessoryU3Eb__3_m3475B3347C27EBF4338BAB6010427FBB9BC3F9C7_RuntimeMethod_var), NULL);
		Delegate_t* L_99;
		L_99 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_96, L_98, NULL);
		((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)__this)->___m_RefreshCallback_6 = ((RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C*)CastclassSealed((RuntimeObject*)L_99, RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)__this)->___m_RefreshCallback_6), (void*)((RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C*)CastclassSealed((RuntimeObject*)L_99, RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C_il2cpp_TypeInfo_var)));
		// RefreshButton(itm, accessory, compoundName);
		U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7* L_100 = V_2;
		NullCheck(L_100);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_101 = L_100->___itm_2;
		U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7* L_102 = V_2;
		NullCheck(L_102);
		CharacterAccessories_tBA489235C02D98040213C790FC991B786CFF4246* L_103 = L_102->___accessory_1;
		U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7* L_104 = V_2;
		NullCheck(L_104);
		String_t* L_105 = L_104->___compoundName_0;
		ShopAccessoriesList_RefreshButton_m0DF2DA43475C6E97F5CE967951A235DC1C316CE9(__this, L_101, L_103, L_105, NULL);
	}

IL_0216:
	{
		// accessoryIndex++;
		U3CU3Ec__DisplayClass4_0_t2A99E9B8A3760384DE2C000B920A52454EB002EB* L_106 = V_0;
		NullCheck(L_106);
		int32_t L_107 = L_106->___accessoryIndex_2;
		V_4 = L_107;
		U3CU3Ec__DisplayClass4_0_t2A99E9B8A3760384DE2C000B920A52454EB002EB* L_108 = V_0;
		int32_t L_109 = V_4;
		NullCheck(L_108);
		L_108->___accessoryIndex_2 = ((int32_t)il2cpp_codegen_add(L_109, 1));
		// if (accessoryIndex == c.accessories.Length)
		U3CU3Ec__DisplayClass4_0_t2A99E9B8A3760384DE2C000B920A52454EB002EB* L_110 = V_0;
		NullCheck(L_110);
		int32_t L_111 = L_110->___accessoryIndex_2;
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_112 = V_1;
		NullCheck(L_112);
		CharacterAccessoriesU5BU5D_t5C845F313E7FB9BC4620908179C8F9521CEC4225* L_113 = L_112->___accessories_7;
		NullCheck(L_113);
		if ((!(((uint32_t)L_111) == ((uint32_t)((int32_t)(((RuntimeArray*)L_113)->max_length))))))
		{
			goto IL_0280;
		}
	}
	{
		// characterIndex++;
		U3CU3Ec__DisplayClass4_0_t2A99E9B8A3760384DE2C000B920A52454EB002EB* L_114 = V_0;
		NullCheck(L_114);
		int32_t L_115 = L_114->___characterIndex_1;
		V_4 = L_115;
		U3CU3Ec__DisplayClass4_0_t2A99E9B8A3760384DE2C000B920A52454EB002EB* L_116 = V_0;
		int32_t L_117 = V_4;
		NullCheck(L_116);
		L_116->___characterIndex_1 = ((int32_t)il2cpp_codegen_add(L_117, 1));
		// if (characterIndex < m_CharacterList.Count)
		U3CU3Ec__DisplayClass4_0_t2A99E9B8A3760384DE2C000B920A52454EB002EB* L_118 = V_0;
		NullCheck(L_118);
		int32_t L_119 = L_118->___characterIndex_1;
		List_1_tC98DE074A3E56FDD9D42903151EDECB6FA81A140* L_120 = __this->___m_CharacterList_8;
		NullCheck(L_120);
		int32_t L_121;
		L_121 = List_1_get_Count_m9069FA1AEE97FE9A743DDC42987FC042D0EA6A8E_inline(L_120, List_1_get_Count_m9069FA1AEE97FE9A743DDC42987FC042D0EA6A8E_RuntimeMethod_var);
		if ((((int32_t)L_119) >= ((int32_t)L_121)))
		{
			goto IL_02a2;
		}
	}
	{
		// headerPrefab.InstantiateAsync().Completed += (innerOp) =>
		// {
		//     LoadedCharacter(innerOp, characterIndex);
		// };
		AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740* L_122 = __this->___headerPrefab_7;
		NullCheck(L_122);
		AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA L_123;
		L_123 = VirtualFuncInvoker2< AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, bool >::Invoke(16 /* UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject> UnityEngine.AddressableAssets.AssetReference::InstantiateAsync(UnityEngine.Transform,System.Boolean) */, L_122, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, (bool)0);
		V_5 = L_123;
		U3CU3Ec__DisplayClass4_0_t2A99E9B8A3760384DE2C000B920A52454EB002EB* L_124 = V_0;
		Action_1_t501005E5BA1DE50BCD8884D20F2E93B12ECEA696* L_125 = (Action_1_t501005E5BA1DE50BCD8884D20F2E93B12ECEA696*)il2cpp_codegen_object_new(Action_1_t501005E5BA1DE50BCD8884D20F2E93B12ECEA696_il2cpp_TypeInfo_var);
		NullCheck(L_125);
		Action_1__ctor_mFD9384017128245D3C170BBC53AA164AAA76EEF8(L_125, L_124, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CLoadedAccessoryU3Eb__0_mECF5AB5E3613A98178828B492D928BA1DCFEC4DE_RuntimeMethod_var), NULL);
		AsyncOperationHandle_1_add_Completed_mB72E06FC40EBAABFBAF0CC86388158AED1686F61((&V_5), L_125, AsyncOperationHandle_1_add_Completed_mB72E06FC40EBAABFBAF0CC86388158AED1686F61_RuntimeMethod_var);
		return;
	}

IL_0280:
	{
		// prefabItem.InstantiateAsync().Completed += (innerOp) =>
		// {
		//     LoadedAccessory(innerOp, characterIndex, accessoryIndex);
		// };
		AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740* L_126 = ((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)__this)->___prefabItem_4;
		NullCheck(L_126);
		AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA L_127;
		L_127 = VirtualFuncInvoker2< AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, bool >::Invoke(16 /* UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject> UnityEngine.AddressableAssets.AssetReference::InstantiateAsync(UnityEngine.Transform,System.Boolean) */, L_126, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, (bool)0);
		V_5 = L_127;
		U3CU3Ec__DisplayClass4_0_t2A99E9B8A3760384DE2C000B920A52454EB002EB* L_128 = V_0;
		Action_1_t501005E5BA1DE50BCD8884D20F2E93B12ECEA696* L_129 = (Action_1_t501005E5BA1DE50BCD8884D20F2E93B12ECEA696*)il2cpp_codegen_object_new(Action_1_t501005E5BA1DE50BCD8884D20F2E93B12ECEA696_il2cpp_TypeInfo_var);
		NullCheck(L_129);
		Action_1__ctor_mFD9384017128245D3C170BBC53AA164AAA76EEF8(L_129, L_128, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CLoadedAccessoryU3Eb__1_mB1CE3509A5F5C3053DAC0A3AA9580A5E578EF569_RuntimeMethod_var), NULL);
		AsyncOperationHandle_1_add_Completed_mB72E06FC40EBAABFBAF0CC86388158AED1686F61((&V_5), L_129, AsyncOperationHandle_1_add_Completed_mB72E06FC40EBAABFBAF0CC86388158AED1686F61_RuntimeMethod_var);
	}

IL_02a2:
	{
		// }
		return;
	}
}
// System.Void ShopAccessoriesList::RefreshButton(ShopItemListItem,CharacterAccessories,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopAccessoriesList_RefreshButton_m0DF2DA43475C6E97F5CE967951A235DC1C316CE9 (ShopAccessoriesList_tC54A532A1828DDDD56ECFBC213E0D0A927C1AF6A* __this, ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* ___0_itm, CharacterAccessories_tBA489235C02D98040213C790FC991B786CFF4246* ___1_accessory, String_t* ___2_compoundName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral408E7650848F08974C16653E1DCFF782BEA806A8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (accessory.cost > PlayerData.instance.coins)
		CharacterAccessories_tBA489235C02D98040213C790FC991B786CFF4246* L_0 = ___1_accessory;
		NullCheck(L_0);
		int32_t L_1 = L_0->___cost_5;
		il2cpp_codegen_runtime_class_init_inline(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_2;
		L_2 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		NullCheck(L_2);
		int32_t L_3 = L_2->___coins_2;
		if ((((int32_t)L_1) <= ((int32_t)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		// itm.buyButton.interactable = false;
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_4 = ___0_itm;
		NullCheck(L_4);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = L_4->___buyButton_8;
		NullCheck(L_5);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_5, (bool)0, NULL);
		// itm.pricetext.color = Color.red;
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_6 = ___0_itm;
		NullCheck(L_6);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = L_6->___pricetext_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_8);
		goto IL_0040;
	}

IL_0030:
	{
		// itm.pricetext.color = Color.black;
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_9 = ___0_itm;
		NullCheck(L_9);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = L_9->___pricetext_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_11);
	}

IL_0040:
	{
		// if (accessory.premiumCost > PlayerData.instance.premium)
		CharacterAccessories_tBA489235C02D98040213C790FC991B786CFF4246* L_12 = ___1_accessory;
		NullCheck(L_12);
		int32_t L_13 = L_12->___premiumCost_6;
		il2cpp_codegen_runtime_class_init_inline(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_14;
		L_14 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		NullCheck(L_14);
		int32_t L_15 = L_14->___premium_3;
		if ((((int32_t)L_13) <= ((int32_t)L_15)))
		{
			goto IL_0070;
		}
	}
	{
		// itm.buyButton.interactable = false;
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_16 = ___0_itm;
		NullCheck(L_16);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_17 = L_16->___buyButton_8;
		NullCheck(L_17);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_17, (bool)0, NULL);
		// itm.premiumText.color = Color.red;
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_18 = ___0_itm;
		NullCheck(L_18);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_19 = L_18->___premiumText_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_19);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_19, L_20);
		goto IL_0080;
	}

IL_0070:
	{
		// itm.premiumText.color = Color.black;
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_21 = ___0_itm;
		NullCheck(L_21);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_22 = L_21->___premiumText_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23;
		L_23 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		NullCheck(L_22);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_22, L_23);
	}

IL_0080:
	{
		// if (PlayerData.instance.characterAccessories.Contains(compoundName))
		il2cpp_codegen_runtime_class_init_inline(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_24;
		L_24 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		NullCheck(L_24);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_25 = L_24->___characterAccessories_8;
		String_t* L_26 = ___2_compoundName;
		NullCheck(L_25);
		bool L_27;
		L_27 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_25, L_26, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		if (!L_27)
		{
			goto IL_00d4;
		}
	}
	{
		// itm.buyButton.interactable = false;
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_28 = ___0_itm;
		NullCheck(L_28);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_29 = L_28->___buyButton_8;
		NullCheck(L_29);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_29, (bool)0, NULL);
		// itm.buyButton.image.sprite = itm.disabledButtonSprite;
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_30 = ___0_itm;
		NullCheck(L_30);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_31 = L_30->___buyButton_8;
		NullCheck(L_31);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_32;
		L_32 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_31, NULL);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_33 = ___0_itm;
		NullCheck(L_33);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_34 = L_33->___disabledButtonSprite_11;
		NullCheck(L_32);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_32, L_34, NULL);
		// itm.buyButton.transform.GetChild(0).GetComponent<UnityEngine.UI.Text>().text = "Owned";
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_35 = ___0_itm;
		NullCheck(L_35);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_36 = L_35->___buyButton_8;
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_36, NULL);
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_37, 0, NULL);
		NullCheck(L_38);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_39;
		L_39 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(L_38, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		NullCheck(L_39);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_39, _stringLiteral408E7650848F08974C16653E1DCFF782BEA806A8);
	}

IL_00d4:
	{
		// }
		return;
	}
}
// System.Void ShopAccessoriesList::Buy(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopAccessoriesList_Buy_m95E9BCF80DB6AEC41F6A448CE4BC1DA797E4686F (ShopAccessoriesList_tC54A532A1828DDDD56ECFBC213E0D0A927C1AF6A* __this, String_t* ___0_name, int32_t ___1_cost, int32_t ___2_premiumCost, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerData.instance.coins -= cost;
		il2cpp_codegen_runtime_class_init_inline(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_0;
		L_0 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___coins_2;
		int32_t L_3 = ___1_cost;
		NullCheck(L_1);
		L_1->___coins_2 = ((int32_t)il2cpp_codegen_subtract(L_2, L_3));
		// PlayerData.instance.premium -= premiumCost;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_4;
		L_4 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_5 = L_4;
		NullCheck(L_5);
		int32_t L_6 = L_5->___premium_3;
		int32_t L_7 = ___2_premiumCost;
		NullCheck(L_5);
		L_5->___premium_3 = ((int32_t)il2cpp_codegen_subtract(L_6, L_7));
		// PlayerData.instance.AddAccessory(name);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_8;
		L_8 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		String_t* L_9 = ___0_name;
		NullCheck(L_8);
		PlayerData_AddAccessory_m8CFBD7CCE3719376AEAD3CB5F4A659201D20A3E2(L_8, L_9, NULL);
		// PlayerData.instance.Save();
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_10;
		L_10 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		NullCheck(L_10);
		PlayerData_Save_m7ACDE3046A5377BD21EB86D7A5B2D35036663CE4(L_10, NULL);
		// Refresh();
		ShopList_Refresh_mC05B8BC1F06F21BDB6D462EB160E429491A31BF2(__this, NULL);
		// }
		return;
	}
}
// System.Void ShopAccessoriesList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopAccessoriesList__ctor_m4D22BB3559399549709B1B96B0284B94F2EEB91F (ShopAccessoriesList_tC54A532A1828DDDD56ECFBC213E0D0A927C1AF6A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m67F97BFC2D06501BEE2346AAABC0955129027957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC98DE074A3E56FDD9D42903151EDECB6FA81A140_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<Character> m_CharacterList = new List<Character>();
		List_1_tC98DE074A3E56FDD9D42903151EDECB6FA81A140* L_0 = (List_1_tC98DE074A3E56FDD9D42903151EDECB6FA81A140*)il2cpp_codegen_object_new(List_1_tC98DE074A3E56FDD9D42903151EDECB6FA81A140_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m67F97BFC2D06501BEE2346AAABC0955129027957(L_0, List_1__ctor_m67F97BFC2D06501BEE2346AAABC0955129027957_RuntimeMethod_var);
		__this->___m_CharacterList_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CharacterList_8), (void*)L_0);
		ShopList__ctor_m8B812A6A27D4B5EAF6B1908DCC2895AB02FFEC0C(__this, NULL);
		return;
	}
}
// System.Void ShopAccessoriesList::<Populate>b__2_0(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopAccessoriesList_U3CPopulateU3Eb__2_0_mD1BA31B81A6109DF4128D5107FB7FA76065C766E (ShopAccessoriesList_tC54A532A1828DDDD56ECFBC213E0D0A927C1AF6A* __this, AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA ___0_op, const RuntimeMethod* method) 
{
	{
		// LoadedCharacter(op, 0);
		AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA L_0 = ___0_op;
		ShopAccessoriesList_LoadedCharacter_mD6DC05A6672E9607F683B9D381DFB042F848247E(__this, L_0, 0, NULL);
		// };
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
// System.Void ShopAccessoriesList/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mF137724DFF25385C04A84BE1FCB36555130D7A5D (U3CU3Ec__DisplayClass3_0_t8F8178E5DBF17463B0EF1C5B6B6DBB6C76C22515* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ShopAccessoriesList/<>c__DisplayClass3_0::<LoadedCharacter>b__0(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CLoadedCharacterU3Eb__0_m709FD7FCE1CE66761EDEACBA55EC9D04CC289D30 (U3CU3Ec__DisplayClass3_0_t8F8178E5DBF17463B0EF1C5B6B6DBB6C76C22515* __this, AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA ___0_innerOp, const RuntimeMethod* method) 
{
	{
		// LoadedAccessory(innerOp, currentIndex, 0);
		ShopAccessoriesList_tC54A532A1828DDDD56ECFBC213E0D0A927C1AF6A* L_0 = __this->___U3CU3E4__this_0;
		AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA L_1 = ___0_innerOp;
		int32_t L_2 = __this->___currentIndex_1;
		NullCheck(L_0);
		ShopAccessoriesList_LoadedAccessory_mB5B2E74E904FE0292CBA9892C7375BAEF0F158C1(L_0, L_1, L_2, 0, NULL);
		// };
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
// System.Void ShopAccessoriesList/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m3E5A80CC8A5DEABABC705CCF4F512DB004D80DC0 (U3CU3Ec__DisplayClass4_0_t2A99E9B8A3760384DE2C000B920A52454EB002EB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ShopAccessoriesList/<>c__DisplayClass4_0::<LoadedAccessory>b__0(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CLoadedAccessoryU3Eb__0_mECF5AB5E3613A98178828B492D928BA1DCFEC4DE (U3CU3Ec__DisplayClass4_0_t2A99E9B8A3760384DE2C000B920A52454EB002EB* __this, AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA ___0_innerOp, const RuntimeMethod* method) 
{
	{
		// LoadedCharacter(innerOp, characterIndex);
		ShopAccessoriesList_tC54A532A1828DDDD56ECFBC213E0D0A927C1AF6A* L_0 = __this->___U3CU3E4__this_0;
		AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA L_1 = ___0_innerOp;
		int32_t L_2 = __this->___characterIndex_1;
		NullCheck(L_0);
		ShopAccessoriesList_LoadedCharacter_mD6DC05A6672E9607F683B9D381DFB042F848247E(L_0, L_1, L_2, NULL);
		// };
		return;
	}
}
// System.Void ShopAccessoriesList/<>c__DisplayClass4_0::<LoadedAccessory>b__1(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CLoadedAccessoryU3Eb__1_mB1CE3509A5F5C3053DAC0A3AA9580A5E578EF569 (U3CU3Ec__DisplayClass4_0_t2A99E9B8A3760384DE2C000B920A52454EB002EB* __this, AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA ___0_innerOp, const RuntimeMethod* method) 
{
	{
		// LoadedAccessory(innerOp, characterIndex, accessoryIndex);
		ShopAccessoriesList_tC54A532A1828DDDD56ECFBC213E0D0A927C1AF6A* L_0 = __this->___U3CU3E4__this_0;
		AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA L_1 = ___0_innerOp;
		int32_t L_2 = __this->___characterIndex_1;
		int32_t L_3 = __this->___accessoryIndex_2;
		NullCheck(L_0);
		ShopAccessoriesList_LoadedAccessory_mB5B2E74E904FE0292CBA9892C7375BAEF0F158C1(L_0, L_1, L_2, L_3, NULL);
		// };
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
// System.Void ShopAccessoriesList/<>c__DisplayClass4_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_1__ctor_mF58977B87AFEECD7B322E1BB712F16A618354995 (U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ShopAccessoriesList/<>c__DisplayClass4_1::<LoadedAccessory>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_1_U3CLoadedAccessoryU3Eb__2_m8BA71F6019A2CDCC665F419E6E33FCB978C768EA (U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7* __this, const RuntimeMethod* method) 
{
	{
		// Buy(compoundName, accessory.cost, accessory.premiumCost);
		U3CU3Ec__DisplayClass4_0_t2A99E9B8A3760384DE2C000B920A52454EB002EB* L_0 = __this->___CSU24U3CU3E8__locals1_3;
		NullCheck(L_0);
		ShopAccessoriesList_tC54A532A1828DDDD56ECFBC213E0D0A927C1AF6A* L_1 = L_0->___U3CU3E4__this_0;
		String_t* L_2 = __this->___compoundName_0;
		CharacterAccessories_tBA489235C02D98040213C790FC991B786CFF4246* L_3 = __this->___accessory_1;
		NullCheck(L_3);
		int32_t L_4 = L_3->___cost_5;
		CharacterAccessories_tBA489235C02D98040213C790FC991B786CFF4246* L_5 = __this->___accessory_1;
		NullCheck(L_5);
		int32_t L_6 = L_5->___premiumCost_6;
		NullCheck(L_1);
		ShopAccessoriesList_Buy_m95E9BCF80DB6AEC41F6A448CE4BC1DA797E4686F(L_1, L_2, L_4, L_6, NULL);
		// });
		return;
	}
}
// System.Void ShopAccessoriesList/<>c__DisplayClass4_1::<LoadedAccessory>b__3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_1_U3CLoadedAccessoryU3Eb__3_m3475B3347C27EBF4338BAB6010427FBB9BC3F9C7 (U3CU3Ec__DisplayClass4_1_tC61D445C77023B50A37148080F3F6C6A10227FE7* __this, const RuntimeMethod* method) 
{
	{
		// m_RefreshCallback += delegate() { RefreshButton(itm, accessory, compoundName); };
		U3CU3Ec__DisplayClass4_0_t2A99E9B8A3760384DE2C000B920A52454EB002EB* L_0 = __this->___CSU24U3CU3E8__locals1_3;
		NullCheck(L_0);
		ShopAccessoriesList_tC54A532A1828DDDD56ECFBC213E0D0A927C1AF6A* L_1 = L_0->___U3CU3E4__this_0;
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_2 = __this->___itm_2;
		CharacterAccessories_tBA489235C02D98040213C790FC991B786CFF4246* L_3 = __this->___accessory_1;
		String_t* L_4 = __this->___compoundName_0;
		NullCheck(L_1);
		ShopAccessoriesList_RefreshButton_m0DF2DA43475C6E97F5CE967951A235DC1C316CE9(L_1, L_2, L_3, L_4, NULL);
		// m_RefreshCallback += delegate() { RefreshButton(itm, accessory, compoundName); };
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
// System.Void ShopCharacterList::Populate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopCharacterList_Populate_m900BE6606408A7FF664620C41ADE41476D6E3E72 (ShopCharacterList_tD97486C0F497F30D86A2AA193B3F983654DD8279* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t501005E5BA1DE50BCD8884D20F2E93B12ECEA696_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_add_Completed_mB72E06FC40EBAABFBAF0CC86388158AED1686F61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m0FE313316FA0D66F0D8822D31ADFA287CC8F85E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4CCD915EA4FA58C2FCBD4C1466F9DF7896882B7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3F765C5D5ABE40D9C60D1A6C7B6CC486184B881A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m534351E94386EEDC9FA2B9F683B9577A030CC282_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mEF14A8084D77C704BF993FF75DF0E418B26DA854_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CPopulateU3Eb__0_m472A49B9A946368389CDDFE36F0A0852FFDA02B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_tD95CAB7D5210466F358B471BEF302147BC8ECA39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Enumerator_tA4A8A82222F9450F3DBB58BB9F30D1F78FEF7916 V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_t250FE3D0921BEB2B6A839207B24330D2DAFA30BF V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CU3Ec__DisplayClass0_0_tD95CAB7D5210466F358B471BEF302147BC8ECA39* V_4 = NULL;
	AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// m_RefreshCallback = null;
		((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)__this)->___m_RefreshCallback_6 = (RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)__this)->___m_RefreshCallback_6), (void*)(RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C*)NULL);
		// foreach (Transform t in listRoot)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)__this)->___listRoot_5;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_0044;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0044:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002a_1;
			}

IL_0015_1:
			{
				// foreach (Transform t in listRoot)
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				// Destroy(t.gameObject);
				NullCheck(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
				L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_7, NULL);
			}

IL_002a_1:
			{
				// foreach (Transform t in listRoot)
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				if (L_9)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0045;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0045:
	{
		// foreach(KeyValuePair<string, Character> pair in CharacterDatabase.dictionary)
		Dictionary_2_t751B5EAF466601E97CA8673996839C749DDD0F41* L_10;
		L_10 = CharacterDatabase_get_dictionary_m3201388D0F763F58BD4A6984F099D115FBD1F36B_inline(NULL);
		NullCheck(L_10);
		Enumerator_tA4A8A82222F9450F3DBB58BB9F30D1F78FEF7916 L_11;
		L_11 = Dictionary_2_GetEnumerator_m0FE313316FA0D66F0D8822D31ADFA287CC8F85E4(L_10, Dictionary_2_GetEnumerator_m0FE313316FA0D66F0D8822D31ADFA287CC8F85E4_RuntimeMethod_var);
		V_2 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b4:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4CCD915EA4FA58C2FCBD4C1466F9DF7896882B7C((&V_2), Enumerator_Dispose_m4CCD915EA4FA58C2FCBD4C1466F9DF7896882B7C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a9_1;
			}

IL_0052_1:
			{
				// foreach(KeyValuePair<string, Character> pair in CharacterDatabase.dictionary)
				KeyValuePair_2_t250FE3D0921BEB2B6A839207B24330D2DAFA30BF L_12;
				L_12 = Enumerator_get_Current_m534351E94386EEDC9FA2B9F683B9577A030CC282_inline((&V_2), Enumerator_get_Current_m534351E94386EEDC9FA2B9F683B9577A030CC282_RuntimeMethod_var);
				V_3 = L_12;
				U3CU3Ec__DisplayClass0_0_tD95CAB7D5210466F358B471BEF302147BC8ECA39* L_13 = (U3CU3Ec__DisplayClass0_0_tD95CAB7D5210466F358B471BEF302147BC8ECA39*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_tD95CAB7D5210466F358B471BEF302147BC8ECA39_il2cpp_TypeInfo_var);
				NullCheck(L_13);
				U3CU3Ec__DisplayClass0_0__ctor_mB29A01AC890054ACA6D858D91CA947644F649B2D(L_13, NULL);
				V_4 = L_13;
				U3CU3Ec__DisplayClass0_0_tD95CAB7D5210466F358B471BEF302147BC8ECA39* L_14 = V_4;
				NullCheck(L_14);
				L_14->___U3CU3E4__this_1 = __this;
				Il2CppCodeGenWriteBarrier((void**)(&L_14->___U3CU3E4__this_1), (void*)__this);
				// Character c = pair.Value;
				U3CU3Ec__DisplayClass0_0_tD95CAB7D5210466F358B471BEF302147BC8ECA39* L_15 = V_4;
				Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_16;
				L_16 = KeyValuePair_2_get_Value_mEF14A8084D77C704BF993FF75DF0E418B26DA854_inline((&V_3), KeyValuePair_2_get_Value_mEF14A8084D77C704BF993FF75DF0E418B26DA854_RuntimeMethod_var);
				NullCheck(L_15);
				L_15->___c_0 = L_16;
				Il2CppCodeGenWriteBarrier((void**)(&L_15->___c_0), (void*)L_16);
				// if (c != null)
				U3CU3Ec__DisplayClass0_0_tD95CAB7D5210466F358B471BEF302147BC8ECA39* L_17 = V_4;
				NullCheck(L_17);
				Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_18 = L_17->___c_0;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_18, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_19)
				{
					goto IL_00a9_1;
				}
			}
			{
				// prefabItem.InstantiateAsync().Completed += (op) =>
				// {
				//     if (op.Result == null || !(op.Result is GameObject))
				//     {
				//         Debug.LogWarning(string.Format("Unable to load character shop list {0}.", prefabItem.Asset.name));
				//         return;
				//     }
				//     GameObject newEntry = op.Result;
				//     newEntry.transform.SetParent(listRoot, false);
				// 
				//     ShopItemListItem itm = newEntry.GetComponent<ShopItemListItem>();
				// 
				//     itm.icon.sprite = c.icon;
				//     itm.nameText.text = c.characterName;
				//     itm.pricetext.text = c.cost.ToString();
				// 
				//     itm.buyButton.image.sprite = itm.buyButtonSprite;
				// 
				//     if (c.premiumCost > 0)
				//     {
				//         itm.premiumText.transform.parent.gameObject.SetActive(true);
				//         itm.premiumText.text = c.premiumCost.ToString();
				//     }
				//     else
				//     {
				//         itm.premiumText.transform.parent.gameObject.SetActive(false);
				//     }
				// 
				//     itm.buyButton.onClick.AddListener(delegate() { Buy(c); });
				// 
				//     m_RefreshCallback += delegate() { RefreshButton(itm, c); };
				//     RefreshButton(itm, c);
				// };
				AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740* L_20 = ((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)__this)->___prefabItem_4;
				NullCheck(L_20);
				AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA L_21;
				L_21 = VirtualFuncInvoker2< AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, bool >::Invoke(16 /* UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject> UnityEngine.AddressableAssets.AssetReference::InstantiateAsync(UnityEngine.Transform,System.Boolean) */, L_20, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, (bool)0);
				V_5 = L_21;
				U3CU3Ec__DisplayClass0_0_tD95CAB7D5210466F358B471BEF302147BC8ECA39* L_22 = V_4;
				Action_1_t501005E5BA1DE50BCD8884D20F2E93B12ECEA696* L_23 = (Action_1_t501005E5BA1DE50BCD8884D20F2E93B12ECEA696*)il2cpp_codegen_object_new(Action_1_t501005E5BA1DE50BCD8884D20F2E93B12ECEA696_il2cpp_TypeInfo_var);
				NullCheck(L_23);
				Action_1__ctor_mFD9384017128245D3C170BBC53AA164AAA76EEF8(L_23, L_22, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3CPopulateU3Eb__0_m472A49B9A946368389CDDFE36F0A0852FFDA02B4_RuntimeMethod_var), NULL);
				AsyncOperationHandle_1_add_Completed_mB72E06FC40EBAABFBAF0CC86388158AED1686F61((&V_5), L_23, AsyncOperationHandle_1_add_Completed_mB72E06FC40EBAABFBAF0CC86388158AED1686F61_RuntimeMethod_var);
			}

IL_00a9_1:
			{
				// foreach(KeyValuePair<string, Character> pair in CharacterDatabase.dictionary)
				bool L_24;
				L_24 = Enumerator_MoveNext_m3F765C5D5ABE40D9C60D1A6C7B6CC486184B881A((&V_2), Enumerator_MoveNext_m3F765C5D5ABE40D9C60D1A6C7B6CC486184B881A_RuntimeMethod_var);
				if (L_24)
				{
					goto IL_0052_1;
				}
			}
			{
				goto IL_00c2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c2:
	{
		// }
		return;
	}
}
// System.Void ShopCharacterList::RefreshButton(ShopItemListItem,Character)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopCharacterList_RefreshButton_m670F30F99993F4D471B225FA8345A9FDD267FEAD (ShopCharacterList_tD97486C0F497F30D86A2AA193B3F983654DD8279* __this, ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* ___0_itm, Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* ___1_c, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral408E7650848F08974C16653E1DCFF782BEA806A8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (c.cost > PlayerData.instance.coins)
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_0 = ___1_c;
		NullCheck(L_0);
		int32_t L_1 = L_0->___cost_5;
		il2cpp_codegen_runtime_class_init_inline(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_2;
		L_2 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		NullCheck(L_2);
		int32_t L_3 = L_2->___coins_2;
		if ((((int32_t)L_1) <= ((int32_t)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		// itm.buyButton.interactable = false;
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_4 = ___0_itm;
		NullCheck(L_4);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = L_4->___buyButton_8;
		NullCheck(L_5);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_5, (bool)0, NULL);
		// itm.pricetext.color = Color.red;
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_6 = ___0_itm;
		NullCheck(L_6);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = L_6->___pricetext_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_8);
		goto IL_0040;
	}

IL_0030:
	{
		// itm.pricetext.color = Color.black;
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_9 = ___0_itm;
		NullCheck(L_9);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = L_9->___pricetext_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_11);
	}

IL_0040:
	{
		// if (c.premiumCost > PlayerData.instance.premium)
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_12 = ___1_c;
		NullCheck(L_12);
		int32_t L_13 = L_12->___premiumCost_6;
		il2cpp_codegen_runtime_class_init_inline(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_14;
		L_14 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		NullCheck(L_14);
		int32_t L_15 = L_14->___premium_3;
		if ((((int32_t)L_13) <= ((int32_t)L_15)))
		{
			goto IL_0070;
		}
	}
	{
		// itm.buyButton.interactable = false;
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_16 = ___0_itm;
		NullCheck(L_16);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_17 = L_16->___buyButton_8;
		NullCheck(L_17);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_17, (bool)0, NULL);
		// itm.premiumText.color = Color.red;
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_18 = ___0_itm;
		NullCheck(L_18);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_19 = L_18->___premiumText_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_19);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_19, L_20);
		goto IL_0080;
	}

IL_0070:
	{
		// itm.premiumText.color = Color.black;
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_21 = ___0_itm;
		NullCheck(L_21);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_22 = L_21->___premiumText_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23;
		L_23 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		NullCheck(L_22);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_22, L_23);
	}

IL_0080:
	{
		// if (PlayerData.instance.characters.Contains(c.characterName))
		il2cpp_codegen_runtime_class_init_inline(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_24;
		L_24 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		NullCheck(L_24);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_25 = L_24->___characters_5;
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_26 = ___1_c;
		NullCheck(L_26);
		String_t* L_27 = L_26->___characterName_4;
		NullCheck(L_25);
		bool L_28;
		L_28 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_25, L_27, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		if (!L_28)
		{
			goto IL_00d9;
		}
	}
	{
		// itm.buyButton.interactable = false;
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_29 = ___0_itm;
		NullCheck(L_29);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_30 = L_29->___buyButton_8;
		NullCheck(L_30);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_30, (bool)0, NULL);
		// itm.buyButton.image.sprite = itm.disabledButtonSprite;
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_31 = ___0_itm;
		NullCheck(L_31);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_32 = L_31->___buyButton_8;
		NullCheck(L_32);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_33;
		L_33 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_32, NULL);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_34 = ___0_itm;
		NullCheck(L_34);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_35 = L_34->___disabledButtonSprite_11;
		NullCheck(L_33);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_33, L_35, NULL);
		// itm.buyButton.transform.GetChild(0).GetComponent<UnityEngine.UI.Text>().text = "Owned";
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_36 = ___0_itm;
		NullCheck(L_36);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_37 = L_36->___buyButton_8;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_37, NULL);
		NullCheck(L_38);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_38, 0, NULL);
		NullCheck(L_39);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_40;
		L_40 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(L_39, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		NullCheck(L_40);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_40, _stringLiteral408E7650848F08974C16653E1DCFF782BEA806A8);
	}

IL_00d9:
	{
		// }
		return;
	}
}
// System.Void ShopCharacterList::Buy(Character)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopCharacterList_Buy_m1E09C5C489422042C7FA5AFBA1FCB01293A5F47E (ShopCharacterList_tD97486C0F497F30D86A2AA193B3F983654DD8279* __this, Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* ___0_c, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerData.instance.coins -= c.cost;
		il2cpp_codegen_runtime_class_init_inline(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_0;
		L_0 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___coins_2;
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_3 = ___0_c;
		NullCheck(L_3);
		int32_t L_4 = L_3->___cost_5;
		NullCheck(L_1);
		L_1->___coins_2 = ((int32_t)il2cpp_codegen_subtract(L_2, L_4));
		// PlayerData.instance.premium -= c.premiumCost;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_5;
		L_5 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_6 = L_5;
		NullCheck(L_6);
		int32_t L_7 = L_6->___premium_3;
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_8 = ___0_c;
		NullCheck(L_8);
		int32_t L_9 = L_8->___premiumCost_6;
		NullCheck(L_6);
		L_6->___premium_3 = ((int32_t)il2cpp_codegen_subtract(L_7, L_9));
		// PlayerData.instance.AddCharacter(c.characterName);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_10;
		L_10 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_11 = ___0_c;
		NullCheck(L_11);
		String_t* L_12 = L_11->___characterName_4;
		NullCheck(L_10);
		PlayerData_AddCharacter_m7A3C7AFE6E9F61447C070CF54752135DC3A776A5(L_10, L_12, NULL);
		// PlayerData.instance.Save();
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_13;
		L_13 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		NullCheck(L_13);
		PlayerData_Save_m7ACDE3046A5377BD21EB86D7A5B2D35036663CE4(L_13, NULL);
		// Populate();
		VirtualActionInvoker0::Invoke(4 /* System.Void ShopList::Populate() */, __this);
		// }
		return;
	}
}
// System.Void ShopCharacterList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopCharacterList__ctor_mB4A4B38AEA2A1FE3040D98B6A7484795B8E047DC (ShopCharacterList_tD97486C0F497F30D86A2AA193B3F983654DD8279* __this, const RuntimeMethod* method) 
{
	{
		ShopList__ctor_m8B812A6A27D4B5EAF6B1908DCC2895AB02FFEC0C(__this, NULL);
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
// System.Void ShopCharacterList/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mB29A01AC890054ACA6D858D91CA947644F649B2D (U3CU3Ec__DisplayClass0_0_tD95CAB7D5210466F358B471BEF302147BC8ECA39* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ShopCharacterList/<>c__DisplayClass0_0::<Populate>b__0(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0_U3CPopulateU3Eb__0_m472A49B9A946368389CDDFE36F0A0852FFDA02B4 (U3CU3Ec__DisplayClass0_0_tD95CAB7D5210466F358B471BEF302147BC8ECA39* __this, AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA ___0_op, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA_m4CF72312516CEB58969E87EEDBE8B48C3BE823AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CPopulateU3Eb__1_mBFDCACCAE7A89F2FC697A93A074D5607389479BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_1_U3CPopulateU3Eb__2_mF9F2D98A5E235DDA51A185815F2FE5EC53674D5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_1_tE20AFCC01E01BCFA7F5DE016DB6095FA962CE26C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27237EBF1CF5293F5A67EACBC5088CF99857C37E);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_1_tE20AFCC01E01BCFA7F5DE016DB6095FA962CE26C* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* V_2 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B8_0 = NULL;
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* G_B8_1 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B7_0 = NULL;
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* G_B7_1 = NULL;
	{
		U3CU3Ec__DisplayClass0_1_tE20AFCC01E01BCFA7F5DE016DB6095FA962CE26C* L_0 = (U3CU3Ec__DisplayClass0_1_tE20AFCC01E01BCFA7F5DE016DB6095FA962CE26C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_1_tE20AFCC01E01BCFA7F5DE016DB6095FA962CE26C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass0_1__ctor_mE4E5A3B0A30F8E6D3C6CEAEACE7366E34719EF34(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_1_tE20AFCC01E01BCFA7F5DE016DB6095FA962CE26C* L_1 = V_0;
		NullCheck(L_1);
		L_1->___CSU24U3CU3E8__locals1_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___CSU24U3CU3E8__locals1_1), (void*)__this);
		// if (op.Result == null || !(op.Result is GameObject))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F((&___0_op), AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F((&___0_op), AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_004a;
		}
	}

IL_0025:
	{
		// Debug.LogWarning(string.Format("Unable to load character shop list {0}.", prefabItem.Asset.name));
		ShopCharacterList_tD97486C0F497F30D86A2AA193B3F983654DD8279* L_5 = __this->___U3CU3E4__this_1;
		NullCheck(L_5);
		AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740* L_6 = ((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)L_5)->___prefabItem_4;
		NullCheck(L_6);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_7;
		L_7 = VirtualFuncInvoker0< Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* >::Invoke(11 /* UnityEngine.Object UnityEngine.AddressableAssets.AssetReference::get_Asset() */, L_6);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_7, NULL);
		String_t* L_9;
		L_9 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral27237EBF1CF5293F5A67EACBC5088CF99857C37E, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_9, NULL);
		// return;
		return;
	}

IL_004a:
	{
		// GameObject newEntry = op.Result;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F((&___0_op), AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F_RuntimeMethod_var);
		V_1 = L_10;
		// newEntry.transform.SetParent(listRoot, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_1;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		ShopCharacterList_tD97486C0F497F30D86A2AA193B3F983654DD8279* L_13 = __this->___U3CU3E4__this_1;
		NullCheck(L_13);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14 = ((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)L_13)->___listRoot_5;
		NullCheck(L_12);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_12, L_14, (bool)0, NULL);
		// ShopItemListItem itm = newEntry.GetComponent<ShopItemListItem>();
		U3CU3Ec__DisplayClass0_1_tE20AFCC01E01BCFA7F5DE016DB6095FA962CE26C* L_15 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_1;
		NullCheck(L_16);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_17;
		L_17 = GameObject_GetComponent_TisShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA_m4CF72312516CEB58969E87EEDBE8B48C3BE823AA(L_16, GameObject_GetComponent_TisShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA_m4CF72312516CEB58969E87EEDBE8B48C3BE823AA_RuntimeMethod_var);
		NullCheck(L_15);
		L_15->___itm_0 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___itm_0), (void*)L_17);
		// itm.icon.sprite = c.icon;
		U3CU3Ec__DisplayClass0_1_tE20AFCC01E01BCFA7F5DE016DB6095FA962CE26C* L_18 = V_0;
		NullCheck(L_18);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_19 = L_18->___itm_0;
		NullCheck(L_19);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_20 = L_19->___icon_4;
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_21 = __this->___c_0;
		NullCheck(L_21);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_22 = L_21->___icon_9;
		NullCheck(L_20);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_20, L_22, NULL);
		// itm.nameText.text = c.characterName;
		U3CU3Ec__DisplayClass0_1_tE20AFCC01E01BCFA7F5DE016DB6095FA962CE26C* L_23 = V_0;
		NullCheck(L_23);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_24 = L_23->___itm_0;
		NullCheck(L_24);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_25 = L_24->___nameText_5;
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_26 = __this->___c_0;
		NullCheck(L_26);
		String_t* L_27 = L_26->___characterName_4;
		NullCheck(L_25);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_25, L_27);
		// itm.pricetext.text = c.cost.ToString();
		U3CU3Ec__DisplayClass0_1_tE20AFCC01E01BCFA7F5DE016DB6095FA962CE26C* L_28 = V_0;
		NullCheck(L_28);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_29 = L_28->___itm_0;
		NullCheck(L_29);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_30 = L_29->___pricetext_6;
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_31 = __this->___c_0;
		NullCheck(L_31);
		int32_t* L_32 = (&L_31->___cost_5);
		String_t* L_33;
		L_33 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_32, NULL);
		NullCheck(L_30);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_30, L_33);
		// itm.buyButton.image.sprite = itm.buyButtonSprite;
		U3CU3Ec__DisplayClass0_1_tE20AFCC01E01BCFA7F5DE016DB6095FA962CE26C* L_34 = V_0;
		NullCheck(L_34);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_35 = L_34->___itm_0;
		NullCheck(L_35);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_36 = L_35->___buyButton_8;
		NullCheck(L_36);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_37;
		L_37 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_36, NULL);
		U3CU3Ec__DisplayClass0_1_tE20AFCC01E01BCFA7F5DE016DB6095FA962CE26C* L_38 = V_0;
		NullCheck(L_38);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_39 = L_38->___itm_0;
		NullCheck(L_39);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_40 = L_39->___buyButtonSprite_10;
		NullCheck(L_37);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_37, L_40, NULL);
		// if (c.premiumCost > 0)
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_41 = __this->___c_0;
		NullCheck(L_41);
		int32_t L_42 = L_41->___premiumCost_6;
		if ((((int32_t)L_42) <= ((int32_t)0)))
		{
			goto IL_013b;
		}
	}
	{
		// itm.premiumText.transform.parent.gameObject.SetActive(true);
		U3CU3Ec__DisplayClass0_1_tE20AFCC01E01BCFA7F5DE016DB6095FA962CE26C* L_43 = V_0;
		NullCheck(L_43);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_44 = L_43->___itm_0;
		NullCheck(L_44);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_45 = L_44->___premiumText_7;
		NullCheck(L_45);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_45, NULL);
		NullCheck(L_46);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_46, NULL);
		NullCheck(L_47);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48;
		L_48 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_47, NULL);
		NullCheck(L_48);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_48, (bool)1, NULL);
		// itm.premiumText.text = c.premiumCost.ToString();
		U3CU3Ec__DisplayClass0_1_tE20AFCC01E01BCFA7F5DE016DB6095FA962CE26C* L_49 = V_0;
		NullCheck(L_49);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_50 = L_49->___itm_0;
		NullCheck(L_50);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_51 = L_50->___premiumText_7;
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_52 = __this->___c_0;
		NullCheck(L_52);
		int32_t* L_53 = (&L_52->___premiumCost_6);
		String_t* L_54;
		L_54 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_53, NULL);
		NullCheck(L_51);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_51, L_54);
		goto IL_015b;
	}

IL_013b:
	{
		// itm.premiumText.transform.parent.gameObject.SetActive(false);
		U3CU3Ec__DisplayClass0_1_tE20AFCC01E01BCFA7F5DE016DB6095FA962CE26C* L_55 = V_0;
		NullCheck(L_55);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_56 = L_55->___itm_0;
		NullCheck(L_56);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_57 = L_56->___premiumText_7;
		NullCheck(L_57);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58;
		L_58 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_57, NULL);
		NullCheck(L_58);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59;
		L_59 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_58, NULL);
		NullCheck(L_59);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60;
		L_60 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_59, NULL);
		NullCheck(L_60);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_60, (bool)0, NULL);
	}

IL_015b:
	{
		// itm.buyButton.onClick.AddListener(delegate() { Buy(c); });
		U3CU3Ec__DisplayClass0_1_tE20AFCC01E01BCFA7F5DE016DB6095FA962CE26C* L_61 = V_0;
		NullCheck(L_61);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_62 = L_61->___itm_0;
		NullCheck(L_62);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_63 = L_62->___buyButton_8;
		NullCheck(L_63);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_64;
		L_64 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_63, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_65 = __this->___U3CU3E9__1_2;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_66 = L_65;
		G_B7_0 = L_66;
		G_B7_1 = L_64;
		if (L_66)
		{
			G_B8_0 = L_66;
			G_B8_1 = L_64;
			goto IL_018a;
		}
	}
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_67 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_67);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_67, __this, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3CPopulateU3Eb__1_mBFDCACCAE7A89F2FC697A93A074D5607389479BB_RuntimeMethod_var), NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_68 = L_67;
		V_2 = L_68;
		__this->___U3CU3E9__1_2 = L_68;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E9__1_2), (void*)L_68);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_69 = V_2;
		G_B8_0 = L_69;
		G_B8_1 = G_B7_1;
	}

IL_018a:
	{
		NullCheck(G_B8_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(G_B8_1, G_B8_0, NULL);
		// m_RefreshCallback += delegate() { RefreshButton(itm, c); };
		ShopCharacterList_tD97486C0F497F30D86A2AA193B3F983654DD8279* L_70 = __this->___U3CU3E4__this_1;
		ShopCharacterList_tD97486C0F497F30D86A2AA193B3F983654DD8279* L_71 = __this->___U3CU3E4__this_1;
		NullCheck(L_71);
		RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C* L_72 = ((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)L_71)->___m_RefreshCallback_6;
		U3CU3Ec__DisplayClass0_1_tE20AFCC01E01BCFA7F5DE016DB6095FA962CE26C* L_73 = V_0;
		RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C* L_74 = (RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C*)il2cpp_codegen_object_new(RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C_il2cpp_TypeInfo_var);
		NullCheck(L_74);
		RefreshCallback__ctor_m32B31403EB444160A244324A0F33184727183AD7(L_74, L_73, (intptr_t)((void*)U3CU3Ec__DisplayClass0_1_U3CPopulateU3Eb__2_mF9F2D98A5E235DDA51A185815F2FE5EC53674D5A_RuntimeMethod_var), NULL);
		Delegate_t* L_75;
		L_75 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_72, L_74, NULL);
		NullCheck(L_70);
		((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)L_70)->___m_RefreshCallback_6 = ((RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C*)CastclassSealed((RuntimeObject*)L_75, RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)L_70)->___m_RefreshCallback_6), (void*)((RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C*)CastclassSealed((RuntimeObject*)L_75, RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C_il2cpp_TypeInfo_var)));
		// RefreshButton(itm, c);
		ShopCharacterList_tD97486C0F497F30D86A2AA193B3F983654DD8279* L_76 = __this->___U3CU3E4__this_1;
		U3CU3Ec__DisplayClass0_1_tE20AFCC01E01BCFA7F5DE016DB6095FA962CE26C* L_77 = V_0;
		NullCheck(L_77);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_78 = L_77->___itm_0;
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_79 = __this->___c_0;
		NullCheck(L_76);
		ShopCharacterList_RefreshButton_m670F30F99993F4D471B225FA8345A9FDD267FEAD(L_76, L_78, L_79, NULL);
		// };
		return;
	}
}
// System.Void ShopCharacterList/<>c__DisplayClass0_0::<Populate>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0_U3CPopulateU3Eb__1_mBFDCACCAE7A89F2FC697A93A074D5607389479BB (U3CU3Ec__DisplayClass0_0_tD95CAB7D5210466F358B471BEF302147BC8ECA39* __this, const RuntimeMethod* method) 
{
	{
		// itm.buyButton.onClick.AddListener(delegate() { Buy(c); });
		ShopCharacterList_tD97486C0F497F30D86A2AA193B3F983654DD8279* L_0 = __this->___U3CU3E4__this_1;
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_1 = __this->___c_0;
		NullCheck(L_0);
		ShopCharacterList_Buy_m1E09C5C489422042C7FA5AFBA1FCB01293A5F47E(L_0, L_1, NULL);
		// itm.buyButton.onClick.AddListener(delegate() { Buy(c); });
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
// System.Void ShopCharacterList/<>c__DisplayClass0_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_1__ctor_mE4E5A3B0A30F8E6D3C6CEAEACE7366E34719EF34 (U3CU3Ec__DisplayClass0_1_tE20AFCC01E01BCFA7F5DE016DB6095FA962CE26C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ShopCharacterList/<>c__DisplayClass0_1::<Populate>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_1_U3CPopulateU3Eb__2_mF9F2D98A5E235DDA51A185815F2FE5EC53674D5A (U3CU3Ec__DisplayClass0_1_tE20AFCC01E01BCFA7F5DE016DB6095FA962CE26C* __this, const RuntimeMethod* method) 
{
	{
		// m_RefreshCallback += delegate() { RefreshButton(itm, c); };
		U3CU3Ec__DisplayClass0_0_tD95CAB7D5210466F358B471BEF302147BC8ECA39* L_0 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_0);
		ShopCharacterList_tD97486C0F497F30D86A2AA193B3F983654DD8279* L_1 = L_0->___U3CU3E4__this_1;
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_2 = __this->___itm_0;
		U3CU3Ec__DisplayClass0_0_tD95CAB7D5210466F358B471BEF302147BC8ECA39* L_3 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_3);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_4 = L_3->___c_0;
		NullCheck(L_1);
		ShopCharacterList_RefreshButton_m670F30F99993F4D471B225FA8345A9FDD267FEAD(L_1, L_2, L_4, NULL);
		// m_RefreshCallback += delegate() { RefreshButton(itm, c); };
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
// System.Void ShopItemList::Populate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemList_Populate_m333DD6AE970AA672D5513930C0D4A4B1E9B2C1F5 (ShopItemList_t9B0978BE7006CCBD7EDF89D8EBBC4DE403367D74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t501005E5BA1DE50BCD8884D20F2E93B12ECEA696_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_add_Completed_mB72E06FC40EBAABFBAF0CC86388158AED1686F61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShopItemList_t9B0978BE7006CCBD7EDF89D8EBBC4DE403367D74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CPopulateU3Eb__0_m256F3ADD59D0D6E745FDCFDC8C7A44565F1936CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_t1AA7B023D9BC73588C2C0831617C10371568A18B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	U3CU3Ec__DisplayClass1_0_t1AA7B023D9BC73588C2C0831617C10371568A18B* V_3 = NULL;
	AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// m_RefreshCallback = null;
		((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)__this)->___m_RefreshCallback_6 = (RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)__this)->___m_RefreshCallback_6), (void*)(RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C*)NULL);
		// foreach (Transform t in listRoot)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)__this)->___listRoot_5;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_0044;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0044:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002a_1;
			}

IL_0015_1:
			{
				// foreach (Transform t in listRoot)
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				// Destroy(t.gameObject);
				NullCheck(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
				L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_7, NULL);
			}

IL_002a_1:
			{
				// foreach (Transform t in listRoot)
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				if (L_9)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0045;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0045:
	{
		// for(int i = 0; i < s_ConsumablesTypes.Length; ++i)
		V_2 = 0;
		goto IL_009c;
	}

IL_0049:
	{
		U3CU3Ec__DisplayClass1_0_t1AA7B023D9BC73588C2C0831617C10371568A18B* L_10 = (U3CU3Ec__DisplayClass1_0_t1AA7B023D9BC73588C2C0831617C10371568A18B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_t1AA7B023D9BC73588C2C0831617C10371568A18B_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		U3CU3Ec__DisplayClass1_0__ctor_mED4D9BB2808990A3D0173FDB8E69A3E92BB5C66F(L_10, NULL);
		V_3 = L_10;
		U3CU3Ec__DisplayClass1_0_t1AA7B023D9BC73588C2C0831617C10371568A18B* L_11 = V_3;
		NullCheck(L_11);
		L_11->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___U3CU3E4__this_1), (void*)__this);
		// Consumable c = ConsumableDatabase.GetConsumbale(s_ConsumablesTypes[i]);
		U3CU3Ec__DisplayClass1_0_t1AA7B023D9BC73588C2C0831617C10371568A18B* L_12 = V_3;
		il2cpp_codegen_runtime_class_init_inline(ShopItemList_t9B0978BE7006CCBD7EDF89D8EBBC4DE403367D74_il2cpp_TypeInfo_var);
		ConsumableTypeU5BU5D_tE1335C0C328FF43F6E035B3EFB53466A802ACE1E* L_13 = ((ShopItemList_t9B0978BE7006CCBD7EDF89D8EBBC4DE403367D74_StaticFields*)il2cpp_codegen_static_fields_for(ShopItemList_t9B0978BE7006CCBD7EDF89D8EBBC4DE403367D74_il2cpp_TypeInfo_var))->___s_ConsumablesTypes_7;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		int32_t L_16 = (int32_t)(L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA* L_17;
		L_17 = ConsumableDatabase_GetConsumbale_m6C00E23402CC6F0E03B1C987C0AB222438E597E0(L_16, NULL);
		NullCheck(L_12);
		L_12->___c_0 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___c_0), (void*)L_17);
		// if(c != null)
		U3CU3Ec__DisplayClass1_0_t1AA7B023D9BC73588C2C0831617C10371568A18B* L_18 = V_3;
		NullCheck(L_18);
		Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA* L_19 = L_18->___c_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_20)
		{
			goto IL_0098;
		}
	}
	{
		// prefabItem.InstantiateAsync().Completed += (op) =>
		// {
		//     if (op.Result == null || !(op.Result is GameObject))
		//     {
		//         Debug.LogWarning(string.Format("Unable to load item shop list {0}.", prefabItem.RuntimeKey));
		//         return;
		//     }
		//     GameObject newEntry = op.Result;
		//     newEntry.transform.SetParent(listRoot, false);
		// 
		//     ShopItemListItem itm = newEntry.GetComponent<ShopItemListItem>();
		// 
		//     itm.buyButton.image.sprite = itm.buyButtonSprite;
		// 
		//     itm.nameText.text = c.GetConsumableName();
		//     itm.pricetext.text = c.GetPrice().ToString();
		// 
		//     if (c.GetPremiumCost() > 0)
		//     {
		//         itm.premiumText.transform.parent.gameObject.SetActive(true);
		//         itm.premiumText.text = c.GetPremiumCost().ToString();
		//     }
		//     else
		//     {
		//         itm.premiumText.transform.parent.gameObject.SetActive(false);
		//     }
		// 
		//     itm.icon.sprite = c.icon;
		// 
		//     itm.countText.gameObject.SetActive(true);
		// 
		//     itm.buyButton.onClick.AddListener(delegate() { Buy(c); });
		//     m_RefreshCallback += delegate() { RefreshButton(itm, c); };
		//     RefreshButton(itm, c);
		// };
		AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740* L_21 = ((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)__this)->___prefabItem_4;
		NullCheck(L_21);
		AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA L_22;
		L_22 = VirtualFuncInvoker2< AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, bool >::Invoke(16 /* UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject> UnityEngine.AddressableAssets.AssetReference::InstantiateAsync(UnityEngine.Transform,System.Boolean) */, L_21, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, (bool)0);
		V_4 = L_22;
		U3CU3Ec__DisplayClass1_0_t1AA7B023D9BC73588C2C0831617C10371568A18B* L_23 = V_3;
		Action_1_t501005E5BA1DE50BCD8884D20F2E93B12ECEA696* L_24 = (Action_1_t501005E5BA1DE50BCD8884D20F2E93B12ECEA696*)il2cpp_codegen_object_new(Action_1_t501005E5BA1DE50BCD8884D20F2E93B12ECEA696_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Action_1__ctor_mFD9384017128245D3C170BBC53AA164AAA76EEF8(L_24, L_23, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CPopulateU3Eb__0_m256F3ADD59D0D6E745FDCFDC8C7A44565F1936CA_RuntimeMethod_var), NULL);
		AsyncOperationHandle_1_add_Completed_mB72E06FC40EBAABFBAF0CC86388158AED1686F61((&V_4), L_24, AsyncOperationHandle_1_add_Completed_mB72E06FC40EBAABFBAF0CC86388158AED1686F61_RuntimeMethod_var);
	}

IL_0098:
	{
		// for(int i = 0; i < s_ConsumablesTypes.Length; ++i)
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_009c:
	{
		// for(int i = 0; i < s_ConsumablesTypes.Length; ++i)
		int32_t L_26 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ShopItemList_t9B0978BE7006CCBD7EDF89D8EBBC4DE403367D74_il2cpp_TypeInfo_var);
		ConsumableTypeU5BU5D_tE1335C0C328FF43F6E035B3EFB53466A802ACE1E* L_27 = ((ShopItemList_t9B0978BE7006CCBD7EDF89D8EBBC4DE403367D74_StaticFields*)il2cpp_codegen_static_fields_for(ShopItemList_t9B0978BE7006CCBD7EDF89D8EBBC4DE403367D74_il2cpp_TypeInfo_var))->___s_ConsumablesTypes_7;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_0049;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ShopItemList::RefreshButton(ShopItemListItem,Consumable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemList_RefreshButton_m289AA6B4A1038345930B7787EE1D79DE0858C30A (ShopItemList_t9B0978BE7006CCBD7EDF89D8EBBC4DE403367D74* __this, ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* ___0_itemList, Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA* ___1_c, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m812040D1A6298114ACF36CF92EC3E584C467219B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int count = 0;
		V_0 = 0;
		// PlayerData.instance.consumables.TryGetValue(c.GetConsumableType(), out count);
		il2cpp_codegen_runtime_class_init_inline(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_0;
		L_0 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		NullCheck(L_0);
		Dictionary_2_t46A0F24FB1350A063225F4A250B879021B957502* L_1 = L_0->___consumables_4;
		Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA* L_2 = ___1_c;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* Consumable/ConsumableType Consumable::GetConsumableType() */, L_2);
		NullCheck(L_1);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_m812040D1A6298114ACF36CF92EC3E584C467219B(L_1, L_3, (&V_0), Dictionary_2_TryGetValue_m812040D1A6298114ACF36CF92EC3E584C467219B_RuntimeMethod_var);
		// itemList.countText.text = count.ToString();
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_5 = ___0_itemList;
		NullCheck(L_5);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = L_5->___countText_9;
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_7);
		// if (c.GetPrice() > PlayerData.instance.coins)
		Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA* L_8 = ___1_c;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 Consumable::GetPrice() */, L_8);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_10;
		L_10 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		NullCheck(L_10);
		int32_t L_11 = L_10->___coins_2;
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_005c;
		}
	}
	{
		// itemList.buyButton.interactable = false;
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_12 = ___0_itemList;
		NullCheck(L_12);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_13 = L_12->___buyButton_8;
		NullCheck(L_13);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_13, (bool)0, NULL);
		// itemList.pricetext.color = Color.red;
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_14 = ___0_itemList;
		NullCheck(L_14);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_15 = L_14->___pricetext_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		L_16 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_15);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_15, L_16);
		goto IL_006c;
	}

IL_005c:
	{
		// itemList.pricetext.color = Color.black;
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_17 = ___0_itemList;
		NullCheck(L_17);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_18 = L_17->___pricetext_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		L_19 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		NullCheck(L_18);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_18, L_19);
	}

IL_006c:
	{
		// if (c.GetPremiumCost() > PlayerData.instance.premium)
		Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA* L_20 = ___1_c;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 Consumable::GetPremiumCost() */, L_20);
		il2cpp_codegen_runtime_class_init_inline(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_22;
		L_22 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		NullCheck(L_22);
		int32_t L_23 = L_22->___premium_3;
		if ((((int32_t)L_21) <= ((int32_t)L_23)))
		{
			goto IL_009b;
		}
	}
	{
		// itemList.buyButton.interactable = false;
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_24 = ___0_itemList;
		NullCheck(L_24);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_25 = L_24->___buyButton_8;
		NullCheck(L_25);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_25, (bool)0, NULL);
		// itemList.premiumText.color = Color.red;
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_26 = ___0_itemList;
		NullCheck(L_26);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_27 = L_26->___premiumText_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28;
		L_28 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_27);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_27, L_28);
		return;
	}

IL_009b:
	{
		// itemList.premiumText.color = Color.black;
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_29 = ___0_itemList;
		NullCheck(L_29);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_30 = L_29->___premiumText_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31;
		L_31 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		NullCheck(L_30);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_30, L_31);
		// }
		return;
	}
}
// System.Void ShopItemList::Buy(Consumable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemList_Buy_m752A8348813285DC69EFA9E4F949BEAD9AC9FBB3 (ShopItemList_t9B0978BE7006CCBD7EDF89D8EBBC4DE403367D74* __this, Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA* ___0_c, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerData.instance.coins -= c.GetPrice();
		il2cpp_codegen_runtime_class_init_inline(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_0;
		L_0 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___coins_2;
		Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA* L_3 = ___0_c;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 Consumable::GetPrice() */, L_3);
		NullCheck(L_1);
		L_1->___coins_2 = ((int32_t)il2cpp_codegen_subtract(L_2, L_4));
		// PlayerData.instance.premium -= c.GetPremiumCost();
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_5;
		L_5 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_6 = L_5;
		NullCheck(L_6);
		int32_t L_7 = L_6->___premium_3;
		Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA* L_8 = ___0_c;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 Consumable::GetPremiumCost() */, L_8);
		NullCheck(L_6);
		L_6->___premium_3 = ((int32_t)il2cpp_codegen_subtract(L_7, L_9));
		// PlayerData.instance.Add(c.GetConsumableType());
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_10;
		L_10 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA* L_11 = ___0_c;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* Consumable/ConsumableType Consumable::GetConsumableType() */, L_11);
		NullCheck(L_10);
		PlayerData_Add_m81D02C913D04B556D2DEE2013741203380017A06(L_10, L_12, NULL);
		// PlayerData.instance.Save();
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_13;
		L_13 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		NullCheck(L_13);
		PlayerData_Save_m7ACDE3046A5377BD21EB86D7A5B2D35036663CE4(L_13, NULL);
		// Refresh();
		ShopList_Refresh_mC05B8BC1F06F21BDB6D462EB160E429491A31BF2(__this, NULL);
		// }
		return;
	}
}
// System.Void ShopItemList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemList__ctor_m3C9F2981F72EE36AFD0522ADD02E3E1022FD23B5 (ShopItemList_t9B0978BE7006CCBD7EDF89D8EBBC4DE403367D74* __this, const RuntimeMethod* method) 
{
	{
		ShopList__ctor_m8B812A6A27D4B5EAF6B1908DCC2895AB02FFEC0C(__this, NULL);
		return;
	}
}
// System.Void ShopItemList::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemList__cctor_mE3A7FC1C3628008F217F284492F08E82BC82AE3E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsumableTypeU5BU5D_tE1335C0C328FF43F6E035B3EFB53466A802ACE1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsumableType_tF61CF26AF79AC7F9F06A42E41A6DEDD71A9E59A0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShopItemList_t9B0978BE7006CCBD7EDF89D8EBBC4DE403367D74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public Consumable.ConsumableType[] s_ConsumablesTypes = System.Enum.GetValues(typeof(Consumable.ConsumableType)) as Consumable.ConsumableType[];
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (ConsumableType_tF61CF26AF79AC7F9F06A42E41A6DEDD71A9E59A0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeArray* L_2;
		L_2 = Enum_GetValues_m803B9D68C367FAABC5AFB6B5B52775C8A573CEF9(L_1, NULL);
		((ShopItemList_t9B0978BE7006CCBD7EDF89D8EBBC4DE403367D74_StaticFields*)il2cpp_codegen_static_fields_for(ShopItemList_t9B0978BE7006CCBD7EDF89D8EBBC4DE403367D74_il2cpp_TypeInfo_var))->___s_ConsumablesTypes_7 = ((ConsumableTypeU5BU5D_tE1335C0C328FF43F6E035B3EFB53466A802ACE1E*)IsInst((RuntimeObject*)L_2, ConsumableTypeU5BU5D_tE1335C0C328FF43F6E035B3EFB53466A802ACE1E_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((ShopItemList_t9B0978BE7006CCBD7EDF89D8EBBC4DE403367D74_StaticFields*)il2cpp_codegen_static_fields_for(ShopItemList_t9B0978BE7006CCBD7EDF89D8EBBC4DE403367D74_il2cpp_TypeInfo_var))->___s_ConsumablesTypes_7), (void*)((ConsumableTypeU5BU5D_tE1335C0C328FF43F6E035B3EFB53466A802ACE1E*)IsInst((RuntimeObject*)L_2, ConsumableTypeU5BU5D_tE1335C0C328FF43F6E035B3EFB53466A802ACE1E_il2cpp_TypeInfo_var)));
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
// System.Void ShopItemList/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mED4D9BB2808990A3D0173FDB8E69A3E92BB5C66F (U3CU3Ec__DisplayClass1_0_t1AA7B023D9BC73588C2C0831617C10371568A18B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ShopItemList/<>c__DisplayClass1_0::<Populate>b__0(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CPopulateU3Eb__0_m256F3ADD59D0D6E745FDCFDC8C7A44565F1936CA (U3CU3Ec__DisplayClass1_0_t1AA7B023D9BC73588C2C0831617C10371568A18B* __this, AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA ___0_op, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA_m4CF72312516CEB58969E87EEDBE8B48C3BE823AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CPopulateU3Eb__1_m82B0DFF22556EBC2F31F57594359542A16557233_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_1_U3CPopulateU3Eb__2_mE2B0485E7E3650886FE279854765EB6B1350CC68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_1_t7ADBFCB327195FC27B880F7F409ACF98A8FA1224_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDC9D2B6BEE9605AE4516A231E465B4102BD0186);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_1_t7ADBFCB327195FC27B880F7F409ACF98A8FA1224* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	int32_t V_2 = 0;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* V_3 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B8_0 = NULL;
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* G_B8_1 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B7_0 = NULL;
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* G_B7_1 = NULL;
	{
		U3CU3Ec__DisplayClass1_1_t7ADBFCB327195FC27B880F7F409ACF98A8FA1224* L_0 = (U3CU3Ec__DisplayClass1_1_t7ADBFCB327195FC27B880F7F409ACF98A8FA1224*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_1_t7ADBFCB327195FC27B880F7F409ACF98A8FA1224_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass1_1__ctor_m256AFA51431729B1BF8BC243F2EABA6458441AD9(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_1_t7ADBFCB327195FC27B880F7F409ACF98A8FA1224* L_1 = V_0;
		NullCheck(L_1);
		L_1->___CSU24U3CU3E8__locals1_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___CSU24U3CU3E8__locals1_1), (void*)__this);
		// if (op.Result == null || !(op.Result is GameObject))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F((&___0_op), AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F((&___0_op), AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0045;
		}
	}

IL_0025:
	{
		// Debug.LogWarning(string.Format("Unable to load item shop list {0}.", prefabItem.RuntimeKey));
		ShopItemList_t9B0978BE7006CCBD7EDF89D8EBBC4DE403367D74* L_5 = __this->___U3CU3E4__this_1;
		NullCheck(L_5);
		AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740* L_6 = ((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)L_5)->___prefabItem_4;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object UnityEngine.AddressableAssets.AssetReference::get_RuntimeKey() */, L_6);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralBDC9D2B6BEE9605AE4516A231E465B4102BD0186, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_8, NULL);
		// return;
		return;
	}

IL_0045:
	{
		// GameObject newEntry = op.Result;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F((&___0_op), AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F_RuntimeMethod_var);
		V_1 = L_9;
		// newEntry.transform.SetParent(listRoot, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_1;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		ShopItemList_t9B0978BE7006CCBD7EDF89D8EBBC4DE403367D74* L_12 = __this->___U3CU3E4__this_1;
		NullCheck(L_12);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13 = ((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)L_12)->___listRoot_5;
		NullCheck(L_11);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_11, L_13, (bool)0, NULL);
		// ShopItemListItem itm = newEntry.GetComponent<ShopItemListItem>();
		U3CU3Ec__DisplayClass1_1_t7ADBFCB327195FC27B880F7F409ACF98A8FA1224* L_14 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_1;
		NullCheck(L_15);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_16;
		L_16 = GameObject_GetComponent_TisShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA_m4CF72312516CEB58969E87EEDBE8B48C3BE823AA(L_15, GameObject_GetComponent_TisShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA_m4CF72312516CEB58969E87EEDBE8B48C3BE823AA_RuntimeMethod_var);
		NullCheck(L_14);
		L_14->___itm_0 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___itm_0), (void*)L_16);
		// itm.buyButton.image.sprite = itm.buyButtonSprite;
		U3CU3Ec__DisplayClass1_1_t7ADBFCB327195FC27B880F7F409ACF98A8FA1224* L_17 = V_0;
		NullCheck(L_17);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_18 = L_17->___itm_0;
		NullCheck(L_18);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_19 = L_18->___buyButton_8;
		NullCheck(L_19);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_20;
		L_20 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_19, NULL);
		U3CU3Ec__DisplayClass1_1_t7ADBFCB327195FC27B880F7F409ACF98A8FA1224* L_21 = V_0;
		NullCheck(L_21);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_22 = L_21->___itm_0;
		NullCheck(L_22);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_23 = L_22->___buyButtonSprite_10;
		NullCheck(L_20);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_20, L_23, NULL);
		// itm.nameText.text = c.GetConsumableName();
		U3CU3Ec__DisplayClass1_1_t7ADBFCB327195FC27B880F7F409ACF98A8FA1224* L_24 = V_0;
		NullCheck(L_24);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_25 = L_24->___itm_0;
		NullCheck(L_25);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_26 = L_25->___nameText_5;
		Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA* L_27 = __this->___c_0;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String Consumable::GetConsumableName() */, L_27);
		NullCheck(L_26);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_26, L_28);
		// itm.pricetext.text = c.GetPrice().ToString();
		U3CU3Ec__DisplayClass1_1_t7ADBFCB327195FC27B880F7F409ACF98A8FA1224* L_29 = V_0;
		NullCheck(L_29);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_30 = L_29->___itm_0;
		NullCheck(L_30);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_31 = L_30->___pricetext_6;
		Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA* L_32 = __this->___c_0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 Consumable::GetPrice() */, L_32);
		V_2 = L_33;
		String_t* L_34;
		L_34 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		NullCheck(L_31);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_31, L_34);
		// if (c.GetPremiumCost() > 0)
		Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA* L_35 = __this->___c_0;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 Consumable::GetPremiumCost() */, L_35);
		if ((((int32_t)L_36) <= ((int32_t)0)))
		{
			goto IL_0121;
		}
	}
	{
		// itm.premiumText.transform.parent.gameObject.SetActive(true);
		U3CU3Ec__DisplayClass1_1_t7ADBFCB327195FC27B880F7F409ACF98A8FA1224* L_37 = V_0;
		NullCheck(L_37);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_38 = L_37->___itm_0;
		NullCheck(L_38);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_39 = L_38->___premiumText_7;
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_39, NULL);
		NullCheck(L_40);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_40, NULL);
		NullCheck(L_41);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42;
		L_42 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_41, NULL);
		NullCheck(L_42);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_42, (bool)1, NULL);
		// itm.premiumText.text = c.GetPremiumCost().ToString();
		U3CU3Ec__DisplayClass1_1_t7ADBFCB327195FC27B880F7F409ACF98A8FA1224* L_43 = V_0;
		NullCheck(L_43);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_44 = L_43->___itm_0;
		NullCheck(L_44);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_45 = L_44->___premiumText_7;
		Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA* L_46 = __this->___c_0;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 Consumable::GetPremiumCost() */, L_46);
		V_2 = L_47;
		String_t* L_48;
		L_48 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		NullCheck(L_45);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_45, L_48);
		goto IL_0141;
	}

IL_0121:
	{
		// itm.premiumText.transform.parent.gameObject.SetActive(false);
		U3CU3Ec__DisplayClass1_1_t7ADBFCB327195FC27B880F7F409ACF98A8FA1224* L_49 = V_0;
		NullCheck(L_49);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_50 = L_49->___itm_0;
		NullCheck(L_50);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_51 = L_50->___premiumText_7;
		NullCheck(L_51);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52;
		L_52 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_51, NULL);
		NullCheck(L_52);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53;
		L_53 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_52, NULL);
		NullCheck(L_53);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54;
		L_54 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_53, NULL);
		NullCheck(L_54);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_54, (bool)0, NULL);
	}

IL_0141:
	{
		// itm.icon.sprite = c.icon;
		U3CU3Ec__DisplayClass1_1_t7ADBFCB327195FC27B880F7F409ACF98A8FA1224* L_55 = V_0;
		NullCheck(L_55);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_56 = L_55->___itm_0;
		NullCheck(L_56);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_57 = L_56->___icon_4;
		Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA* L_58 = __this->___c_0;
		NullCheck(L_58);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_59 = L_58->___icon_5;
		NullCheck(L_57);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_57, L_59, NULL);
		// itm.countText.gameObject.SetActive(true);
		U3CU3Ec__DisplayClass1_1_t7ADBFCB327195FC27B880F7F409ACF98A8FA1224* L_60 = V_0;
		NullCheck(L_60);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_61 = L_60->___itm_0;
		NullCheck(L_61);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_62 = L_61->___countText_9;
		NullCheck(L_62);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63;
		L_63 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_62, NULL);
		NullCheck(L_63);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_63, (bool)1, NULL);
		// itm.buyButton.onClick.AddListener(delegate() { Buy(c); });
		U3CU3Ec__DisplayClass1_1_t7ADBFCB327195FC27B880F7F409ACF98A8FA1224* L_64 = V_0;
		NullCheck(L_64);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_65 = L_64->___itm_0;
		NullCheck(L_65);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_66 = L_65->___buyButton_8;
		NullCheck(L_66);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_67;
		L_67 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_66, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_68 = __this->___U3CU3E9__1_2;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_69 = L_68;
		G_B7_0 = L_69;
		G_B7_1 = L_67;
		if (L_69)
		{
			G_B8_0 = L_69;
			G_B8_1 = L_67;
			goto IL_01a1;
		}
	}
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_70 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_70);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_70, __this, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CPopulateU3Eb__1_m82B0DFF22556EBC2F31F57594359542A16557233_RuntimeMethod_var), NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_71 = L_70;
		V_3 = L_71;
		__this->___U3CU3E9__1_2 = L_71;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E9__1_2), (void*)L_71);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_72 = V_3;
		G_B8_0 = L_72;
		G_B8_1 = G_B7_1;
	}

IL_01a1:
	{
		NullCheck(G_B8_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(G_B8_1, G_B8_0, NULL);
		// m_RefreshCallback += delegate() { RefreshButton(itm, c); };
		ShopItemList_t9B0978BE7006CCBD7EDF89D8EBBC4DE403367D74* L_73 = __this->___U3CU3E4__this_1;
		ShopItemList_t9B0978BE7006CCBD7EDF89D8EBBC4DE403367D74* L_74 = __this->___U3CU3E4__this_1;
		NullCheck(L_74);
		RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C* L_75 = ((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)L_74)->___m_RefreshCallback_6;
		U3CU3Ec__DisplayClass1_1_t7ADBFCB327195FC27B880F7F409ACF98A8FA1224* L_76 = V_0;
		RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C* L_77 = (RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C*)il2cpp_codegen_object_new(RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C_il2cpp_TypeInfo_var);
		NullCheck(L_77);
		RefreshCallback__ctor_m32B31403EB444160A244324A0F33184727183AD7(L_77, L_76, (intptr_t)((void*)U3CU3Ec__DisplayClass1_1_U3CPopulateU3Eb__2_mE2B0485E7E3650886FE279854765EB6B1350CC68_RuntimeMethod_var), NULL);
		Delegate_t* L_78;
		L_78 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_75, L_77, NULL);
		NullCheck(L_73);
		((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)L_73)->___m_RefreshCallback_6 = ((RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C*)CastclassSealed((RuntimeObject*)L_78, RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)L_73)->___m_RefreshCallback_6), (void*)((RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C*)CastclassSealed((RuntimeObject*)L_78, RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C_il2cpp_TypeInfo_var)));
		// RefreshButton(itm, c);
		ShopItemList_t9B0978BE7006CCBD7EDF89D8EBBC4DE403367D74* L_79 = __this->___U3CU3E4__this_1;
		U3CU3Ec__DisplayClass1_1_t7ADBFCB327195FC27B880F7F409ACF98A8FA1224* L_80 = V_0;
		NullCheck(L_80);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_81 = L_80->___itm_0;
		Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA* L_82 = __this->___c_0;
		NullCheck(L_79);
		ShopItemList_RefreshButton_m289AA6B4A1038345930B7787EE1D79DE0858C30A(L_79, L_81, L_82, NULL);
		// };
		return;
	}
}
// System.Void ShopItemList/<>c__DisplayClass1_0::<Populate>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CPopulateU3Eb__1_m82B0DFF22556EBC2F31F57594359542A16557233 (U3CU3Ec__DisplayClass1_0_t1AA7B023D9BC73588C2C0831617C10371568A18B* __this, const RuntimeMethod* method) 
{
	{
		// itm.buyButton.onClick.AddListener(delegate() { Buy(c); });
		ShopItemList_t9B0978BE7006CCBD7EDF89D8EBBC4DE403367D74* L_0 = __this->___U3CU3E4__this_1;
		Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA* L_1 = __this->___c_0;
		NullCheck(L_0);
		ShopItemList_Buy_m752A8348813285DC69EFA9E4F949BEAD9AC9FBB3(L_0, L_1, NULL);
		// itm.buyButton.onClick.AddListener(delegate() { Buy(c); });
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
// System.Void ShopItemList/<>c__DisplayClass1_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_1__ctor_m256AFA51431729B1BF8BC243F2EABA6458441AD9 (U3CU3Ec__DisplayClass1_1_t7ADBFCB327195FC27B880F7F409ACF98A8FA1224* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ShopItemList/<>c__DisplayClass1_1::<Populate>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_1_U3CPopulateU3Eb__2_mE2B0485E7E3650886FE279854765EB6B1350CC68 (U3CU3Ec__DisplayClass1_1_t7ADBFCB327195FC27B880F7F409ACF98A8FA1224* __this, const RuntimeMethod* method) 
{
	{
		// m_RefreshCallback += delegate() { RefreshButton(itm, c); };
		U3CU3Ec__DisplayClass1_0_t1AA7B023D9BC73588C2C0831617C10371568A18B* L_0 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_0);
		ShopItemList_t9B0978BE7006CCBD7EDF89D8EBBC4DE403367D74* L_1 = L_0->___U3CU3E4__this_1;
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_2 = __this->___itm_0;
		U3CU3Ec__DisplayClass1_0_t1AA7B023D9BC73588C2C0831617C10371568A18B* L_3 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_3);
		Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA* L_4 = L_3->___c_0;
		NullCheck(L_1);
		ShopItemList_RefreshButton_m289AA6B4A1038345930B7787EE1D79DE0858C30A(L_1, L_2, L_4, NULL);
		// m_RefreshCallback += delegate() { RefreshButton(itm, c); };
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
// System.Void ShopItemListItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemListItem__ctor_m6046400569E4F070C24E5966E47FDAEE2B5A4ADE (ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ShopList::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopList_Open_m2BA7185F99F40D47D7E6995450BFBEBCED1103FD (ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942* __this, const RuntimeMethod* method) 
{
	{
		// Populate();
		VirtualActionInvoker0::Invoke(4 /* System.Void ShopList::Populate() */, __this);
		// gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ShopList::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopList_Close_m05B23655086F8D500B7DA6166409DEACFA0BFABF (ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// m_RefreshCallback = null;
		__this->___m_RefreshCallback_6 = (RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RefreshCallback_6), (void*)(RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C*)NULL);
		// }
		return;
	}
}
// System.Void ShopList::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopList_Refresh_mC05B8BC1F06F21BDB6D462EB160E429491A31BF2 (ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942* __this, const RuntimeMethod* method) 
{
	{
		// m_RefreshCallback();
		RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C* L_0 = __this->___m_RefreshCallback_6;
		NullCheck(L_0);
		RefreshCallback_Invoke_m4CAB63CF5B2B4F0411A18E8180A15812F9EA7702_inline(L_0, NULL);
		// }
		return;
	}
}
// System.Void ShopList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopList__ctor_m8B812A6A27D4B5EAF6B1908DCC2895AB02FFEC0C (ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
void RefreshCallback_Invoke_m4CAB63CF5B2B4F0411A18E8180A15812F9EA7702_Multicast(RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C* currentDelegate = reinterpret_cast<RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void RefreshCallback_Invoke_m4CAB63CF5B2B4F0411A18E8180A15812F9EA7702_OpenInst(RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void RefreshCallback_Invoke_m4CAB63CF5B2B4F0411A18E8180A15812F9EA7702_OpenStatic(RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void RefreshCallback_Invoke_m4CAB63CF5B2B4F0411A18E8180A15812F9EA7702_OpenStaticInvoker(RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void RefreshCallback_Invoke_m4CAB63CF5B2B4F0411A18E8180A15812F9EA7702_ClosedStaticInvoker(RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C (RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void ShopList/RefreshCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefreshCallback__ctor_m32B31403EB444160A244324A0F33184727183AD7 (RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RefreshCallback_Invoke_m4CAB63CF5B2B4F0411A18E8180A15812F9EA7702_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&RefreshCallback_Invoke_m4CAB63CF5B2B4F0411A18E8180A15812F9EA7702_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RefreshCallback_Invoke_m4CAB63CF5B2B4F0411A18E8180A15812F9EA7702_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&RefreshCallback_Invoke_m4CAB63CF5B2B4F0411A18E8180A15812F9EA7702_Multicast;
}
// System.Void ShopList/RefreshCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefreshCallback_Invoke_m4CAB63CF5B2B4F0411A18E8180A15812F9EA7702 (RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ShopList/RefreshCallback::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RefreshCallback_BeginInvoke_m2FA32C314FB7A23BD66E246C606865BDCD9814C6 (RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void ShopList/RefreshCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefreshCallback_EndInvoke_m295DE083BCB7064D0F58C016F9A17B75B9FA4480 (RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ShopThemeList::Populate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopThemeList_Populate_m0599D58181B29EC941F67AD19D13693852605569 (ShopThemeList_t0C68FB74180739CB27FFABD0059C8B50136A107A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t501005E5BA1DE50BCD8884D20F2E93B12ECEA696_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_add_Completed_mB72E06FC40EBAABFBAF0CC86388158AED1686F61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m977B2A7ED641D746CB6C6DF12A3B98864DE74664_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m343230557CFF38D7F9EF6B9AA716B3F5B50D1767_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBD725F65A05AAECFD658CDC7AB99C3DDAC30EA88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFE6172218495ACC00FF796EA6AC2096292F1D852_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mAC4CA6F3C83F7E3FA5C10143534C3675B65BFF3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CPopulateU3Eb__0_m394BDA5416A220BECB0F6690C27FECA6A6F1CABC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_tC2767A9EEEF702657D548FD3DA0A1D1241A6FF69_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Enumerator_t9458D695C84BD390D43146295306DD1D9F8AB90C V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_t01551AB7A416E72667B12B2ED22B887A8B3E6A49 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CU3Ec__DisplayClass0_0_tC2767A9EEEF702657D548FD3DA0A1D1241A6FF69* V_4 = NULL;
	AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// m_RefreshCallback = null;
		((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)__this)->___m_RefreshCallback_6 = (RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)__this)->___m_RefreshCallback_6), (void*)(RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C*)NULL);
		// foreach (Transform t in listRoot)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)__this)->___listRoot_5;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_0044;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0044:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002a_1;
			}

IL_0015_1:
			{
				// foreach (Transform t in listRoot)
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				// Destroy(t.gameObject);
				NullCheck(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
				L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_7, NULL);
			}

IL_002a_1:
			{
				// foreach (Transform t in listRoot)
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				if (L_9)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0045;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0045:
	{
		// foreach (KeyValuePair<string, ThemeData> pair in ThemeDatabase.dictionnary)
		Dictionary_2_t2AE5138514904369750CDACAF4A543780CFCBDC3* L_10;
		L_10 = ThemeDatabase_get_dictionnary_mAE5F39C28604B2A5A36115BC6E0170B676451D36_inline(NULL);
		NullCheck(L_10);
		Enumerator_t9458D695C84BD390D43146295306DD1D9F8AB90C L_11;
		L_11 = Dictionary_2_GetEnumerator_m977B2A7ED641D746CB6C6DF12A3B98864DE74664(L_10, Dictionary_2_GetEnumerator_m977B2A7ED641D746CB6C6DF12A3B98864DE74664_RuntimeMethod_var);
		V_2 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b4:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m343230557CFF38D7F9EF6B9AA716B3F5B50D1767((&V_2), Enumerator_Dispose_m343230557CFF38D7F9EF6B9AA716B3F5B50D1767_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a9_1;
			}

IL_0052_1:
			{
				// foreach (KeyValuePair<string, ThemeData> pair in ThemeDatabase.dictionnary)
				KeyValuePair_2_t01551AB7A416E72667B12B2ED22B887A8B3E6A49 L_12;
				L_12 = Enumerator_get_Current_mFE6172218495ACC00FF796EA6AC2096292F1D852_inline((&V_2), Enumerator_get_Current_mFE6172218495ACC00FF796EA6AC2096292F1D852_RuntimeMethod_var);
				V_3 = L_12;
				U3CU3Ec__DisplayClass0_0_tC2767A9EEEF702657D548FD3DA0A1D1241A6FF69* L_13 = (U3CU3Ec__DisplayClass0_0_tC2767A9EEEF702657D548FD3DA0A1D1241A6FF69*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_tC2767A9EEEF702657D548FD3DA0A1D1241A6FF69_il2cpp_TypeInfo_var);
				NullCheck(L_13);
				U3CU3Ec__DisplayClass0_0__ctor_mC0AB89657E3247A8186FF3C06EAB6FAEA8528220(L_13, NULL);
				V_4 = L_13;
				U3CU3Ec__DisplayClass0_0_tC2767A9EEEF702657D548FD3DA0A1D1241A6FF69* L_14 = V_4;
				NullCheck(L_14);
				L_14->___U3CU3E4__this_1 = __this;
				Il2CppCodeGenWriteBarrier((void**)(&L_14->___U3CU3E4__this_1), (void*)__this);
				// ThemeData theme = pair.Value;
				U3CU3Ec__DisplayClass0_0_tC2767A9EEEF702657D548FD3DA0A1D1241A6FF69* L_15 = V_4;
				ThemeData_tFCA2CE6D2D52E8F115D4D7C30668D417C70C2E7E* L_16;
				L_16 = KeyValuePair_2_get_Value_mAC4CA6F3C83F7E3FA5C10143534C3675B65BFF3F_inline((&V_3), KeyValuePair_2_get_Value_mAC4CA6F3C83F7E3FA5C10143534C3675B65BFF3F_RuntimeMethod_var);
				NullCheck(L_15);
				L_15->___theme_0 = L_16;
				Il2CppCodeGenWriteBarrier((void**)(&L_15->___theme_0), (void*)L_16);
				// if (theme != null)
				U3CU3Ec__DisplayClass0_0_tC2767A9EEEF702657D548FD3DA0A1D1241A6FF69* L_17 = V_4;
				NullCheck(L_17);
				ThemeData_tFCA2CE6D2D52E8F115D4D7C30668D417C70C2E7E* L_18 = L_17->___theme_0;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_18, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_19)
				{
					goto IL_00a9_1;
				}
			}
			{
				// prefabItem.InstantiateAsync().Completed += (op) =>
				// {
				//     if (op.Result == null || !(op.Result is GameObject))
				//     {
				//         Debug.LogWarning(string.Format("Unable to load theme shop list {0}.", prefabItem.Asset.name));
				//         return;
				//     }
				//     GameObject newEntry = op.Result;
				//     newEntry.transform.SetParent(listRoot, false);
				// 
				//     ShopItemListItem itm = newEntry.GetComponent<ShopItemListItem>();
				// 
				//     itm.nameText.text = theme.themeName;
				//     itm.pricetext.text = theme.cost.ToString();
				//     itm.icon.sprite = theme.themeIcon;
				// 
				//     if (theme.premiumCost > 0)
				//     {
				//         itm.premiumText.transform.parent.gameObject.SetActive(true);
				//         itm.premiumText.text = theme.premiumCost.ToString();
				//     }
				//     else
				//     {
				//         itm.premiumText.transform.parent.gameObject.SetActive(false);
				//     }
				// 
				//     itm.buyButton.onClick.AddListener(delegate() { Buy(theme); });
				// 
				//     itm.buyButton.image.sprite = itm.buyButtonSprite;
				// 
				//     RefreshButton(itm, theme);
				//     m_RefreshCallback += delegate() { RefreshButton(itm, theme); };
				// };
				AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740* L_20 = ((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)__this)->___prefabItem_4;
				NullCheck(L_20);
				AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA L_21;
				L_21 = VirtualFuncInvoker2< AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, bool >::Invoke(16 /* UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject> UnityEngine.AddressableAssets.AssetReference::InstantiateAsync(UnityEngine.Transform,System.Boolean) */, L_20, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, (bool)0);
				V_5 = L_21;
				U3CU3Ec__DisplayClass0_0_tC2767A9EEEF702657D548FD3DA0A1D1241A6FF69* L_22 = V_4;
				Action_1_t501005E5BA1DE50BCD8884D20F2E93B12ECEA696* L_23 = (Action_1_t501005E5BA1DE50BCD8884D20F2E93B12ECEA696*)il2cpp_codegen_object_new(Action_1_t501005E5BA1DE50BCD8884D20F2E93B12ECEA696_il2cpp_TypeInfo_var);
				NullCheck(L_23);
				Action_1__ctor_mFD9384017128245D3C170BBC53AA164AAA76EEF8(L_23, L_22, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3CPopulateU3Eb__0_m394BDA5416A220BECB0F6690C27FECA6A6F1CABC_RuntimeMethod_var), NULL);
				AsyncOperationHandle_1_add_Completed_mB72E06FC40EBAABFBAF0CC86388158AED1686F61((&V_5), L_23, AsyncOperationHandle_1_add_Completed_mB72E06FC40EBAABFBAF0CC86388158AED1686F61_RuntimeMethod_var);
			}

IL_00a9_1:
			{
				// foreach (KeyValuePair<string, ThemeData> pair in ThemeDatabase.dictionnary)
				bool L_24;
				L_24 = Enumerator_MoveNext_mBD725F65A05AAECFD658CDC7AB99C3DDAC30EA88((&V_2), Enumerator_MoveNext_mBD725F65A05AAECFD658CDC7AB99C3DDAC30EA88_RuntimeMethod_var);
				if (L_24)
				{
					goto IL_0052_1;
				}
			}
			{
				goto IL_00c2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c2:
	{
		// }
		return;
	}
}
// System.Void ShopThemeList::RefreshButton(ShopItemListItem,ThemeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopThemeList_RefreshButton_m102DD73F3ABA273869D92AE18129C58345603363 (ShopThemeList_t0C68FB74180739CB27FFABD0059C8B50136A107A* __this, ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* ___0_itm, ThemeData_tFCA2CE6D2D52E8F115D4D7C30668D417C70C2E7E* ___1_theme, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral408E7650848F08974C16653E1DCFF782BEA806A8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (theme.cost > PlayerData.instance.coins)
		ThemeData_tFCA2CE6D2D52E8F115D4D7C30668D417C70C2E7E* L_0 = ___1_theme;
		NullCheck(L_0);
		int32_t L_1 = L_0->___cost_5;
		il2cpp_codegen_runtime_class_init_inline(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_2;
		L_2 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		NullCheck(L_2);
		int32_t L_3 = L_2->___coins_2;
		if ((((int32_t)L_1) <= ((int32_t)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		// itm.buyButton.interactable = false;
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_4 = ___0_itm;
		NullCheck(L_4);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = L_4->___buyButton_8;
		NullCheck(L_5);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_5, (bool)0, NULL);
		// itm.pricetext.color = Color.red;
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_6 = ___0_itm;
		NullCheck(L_6);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = L_6->___pricetext_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_8);
		goto IL_0040;
	}

IL_0030:
	{
		// itm.pricetext.color = Color.black;
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_9 = ___0_itm;
		NullCheck(L_9);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = L_9->___pricetext_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_11);
	}

IL_0040:
	{
		// if (theme.premiumCost > PlayerData.instance.premium)
		ThemeData_tFCA2CE6D2D52E8F115D4D7C30668D417C70C2E7E* L_12 = ___1_theme;
		NullCheck(L_12);
		int32_t L_13 = L_12->___premiumCost_6;
		il2cpp_codegen_runtime_class_init_inline(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_14;
		L_14 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		NullCheck(L_14);
		int32_t L_15 = L_14->___premium_3;
		if ((((int32_t)L_13) <= ((int32_t)L_15)))
		{
			goto IL_0070;
		}
	}
	{
		// itm.buyButton.interactable = false;
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_16 = ___0_itm;
		NullCheck(L_16);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_17 = L_16->___buyButton_8;
		NullCheck(L_17);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_17, (bool)0, NULL);
		// itm.premiumText.color = Color.red;
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_18 = ___0_itm;
		NullCheck(L_18);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_19 = L_18->___premiumText_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_19);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_19, L_20);
		goto IL_0080;
	}

IL_0070:
	{
		// itm.premiumText.color = Color.black;
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_21 = ___0_itm;
		NullCheck(L_21);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_22 = L_21->___premiumText_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23;
		L_23 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		NullCheck(L_22);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_22, L_23);
	}

IL_0080:
	{
		// if (PlayerData.instance.themes.Contains(theme.themeName))
		il2cpp_codegen_runtime_class_init_inline(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_24;
		L_24 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		NullCheck(L_24);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_25 = L_24->___themes_9;
		ThemeData_tFCA2CE6D2D52E8F115D4D7C30668D417C70C2E7E* L_26 = ___1_theme;
		NullCheck(L_26);
		String_t* L_27 = L_26->___themeName_4;
		NullCheck(L_25);
		bool L_28;
		L_28 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_25, L_27, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		if (!L_28)
		{
			goto IL_00d9;
		}
	}
	{
		// itm.buyButton.interactable = false;
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_29 = ___0_itm;
		NullCheck(L_29);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_30 = L_29->___buyButton_8;
		NullCheck(L_30);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_30, (bool)0, NULL);
		// itm.buyButton.image.sprite = itm.disabledButtonSprite;
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_31 = ___0_itm;
		NullCheck(L_31);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_32 = L_31->___buyButton_8;
		NullCheck(L_32);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_33;
		L_33 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_32, NULL);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_34 = ___0_itm;
		NullCheck(L_34);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_35 = L_34->___disabledButtonSprite_11;
		NullCheck(L_33);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_33, L_35, NULL);
		// itm.buyButton.transform.GetChild(0).GetComponent<UnityEngine.UI.Text>().text = "Owned";
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_36 = ___0_itm;
		NullCheck(L_36);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_37 = L_36->___buyButton_8;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_37, NULL);
		NullCheck(L_38);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_38, 0, NULL);
		NullCheck(L_39);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_40;
		L_40 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(L_39, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		NullCheck(L_40);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_40, _stringLiteral408E7650848F08974C16653E1DCFF782BEA806A8);
	}

IL_00d9:
	{
		// }
		return;
	}
}
// System.Void ShopThemeList::Buy(ThemeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopThemeList_Buy_m6FA8F180822EFDB5358B602A37EBD2C362923C2D (ShopThemeList_t0C68FB74180739CB27FFABD0059C8B50136A107A* __this, ThemeData_tFCA2CE6D2D52E8F115D4D7C30668D417C70C2E7E* ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerData.instance.coins -= t.cost;
		il2cpp_codegen_runtime_class_init_inline(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_0;
		L_0 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___coins_2;
		ThemeData_tFCA2CE6D2D52E8F115D4D7C30668D417C70C2E7E* L_3 = ___0_t;
		NullCheck(L_3);
		int32_t L_4 = L_3->___cost_5;
		NullCheck(L_1);
		L_1->___coins_2 = ((int32_t)il2cpp_codegen_subtract(L_2, L_4));
		// PlayerData.instance.premium -= t.premiumCost;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_5;
		L_5 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_6 = L_5;
		NullCheck(L_6);
		int32_t L_7 = L_6->___premium_3;
		ThemeData_tFCA2CE6D2D52E8F115D4D7C30668D417C70C2E7E* L_8 = ___0_t;
		NullCheck(L_8);
		int32_t L_9 = L_8->___premiumCost_6;
		NullCheck(L_6);
		L_6->___premium_3 = ((int32_t)il2cpp_codegen_subtract(L_7, L_9));
		// PlayerData.instance.AddTheme(t.themeName);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_10;
		L_10 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		ThemeData_tFCA2CE6D2D52E8F115D4D7C30668D417C70C2E7E* L_11 = ___0_t;
		NullCheck(L_11);
		String_t* L_12 = L_11->___themeName_4;
		NullCheck(L_10);
		PlayerData_AddTheme_m97C78C49CBD79657781F652B4E87F484387AC1C1(L_10, L_12, NULL);
		// PlayerData.instance.Save();
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_13;
		L_13 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		NullCheck(L_13);
		PlayerData_Save_m7ACDE3046A5377BD21EB86D7A5B2D35036663CE4(L_13, NULL);
		// Populate();
		VirtualActionInvoker0::Invoke(4 /* System.Void ShopList::Populate() */, __this);
		// }
		return;
	}
}
// System.Void ShopThemeList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopThemeList__ctor_m03E960C5F6EDD9FED6D1E8883D8465423771A06B (ShopThemeList_t0C68FB74180739CB27FFABD0059C8B50136A107A* __this, const RuntimeMethod* method) 
{
	{
		ShopList__ctor_m8B812A6A27D4B5EAF6B1908DCC2895AB02FFEC0C(__this, NULL);
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
// System.Void ShopThemeList/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mC0AB89657E3247A8186FF3C06EAB6FAEA8528220 (U3CU3Ec__DisplayClass0_0_tC2767A9EEEF702657D548FD3DA0A1D1241A6FF69* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ShopThemeList/<>c__DisplayClass0_0::<Populate>b__0(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0_U3CPopulateU3Eb__0_m394BDA5416A220BECB0F6690C27FECA6A6F1CABC (U3CU3Ec__DisplayClass0_0_tC2767A9EEEF702657D548FD3DA0A1D1241A6FF69* __this, AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA ___0_op, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA_m4CF72312516CEB58969E87EEDBE8B48C3BE823AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CPopulateU3Eb__1_m51B9168671B3CC96C54E5B2CC392CF9C0E7DC46F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_1_U3CPopulateU3Eb__2_m2477ED05E7D3921AE28351DE5F6B1FB629326447_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_1_t4F59F2D4CF79A380ADC64FCB0150B1E93108AE6B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A8E89BA8972E9CA1DE8455BDEC5102C0D709A57);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_1_t4F59F2D4CF79A380ADC64FCB0150B1E93108AE6B* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* V_2 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B8_0 = NULL;
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* G_B8_1 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B7_0 = NULL;
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* G_B7_1 = NULL;
	{
		U3CU3Ec__DisplayClass0_1_t4F59F2D4CF79A380ADC64FCB0150B1E93108AE6B* L_0 = (U3CU3Ec__DisplayClass0_1_t4F59F2D4CF79A380ADC64FCB0150B1E93108AE6B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_1_t4F59F2D4CF79A380ADC64FCB0150B1E93108AE6B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass0_1__ctor_mEA99018BFB50FFF9AA918BEBFD203C93825CC4D0(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_1_t4F59F2D4CF79A380ADC64FCB0150B1E93108AE6B* L_1 = V_0;
		NullCheck(L_1);
		L_1->___CSU24U3CU3E8__locals1_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___CSU24U3CU3E8__locals1_1), (void*)__this);
		// if (op.Result == null || !(op.Result is GameObject))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F((&___0_op), AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F((&___0_op), AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_004a;
		}
	}

IL_0025:
	{
		// Debug.LogWarning(string.Format("Unable to load theme shop list {0}.", prefabItem.Asset.name));
		ShopThemeList_t0C68FB74180739CB27FFABD0059C8B50136A107A* L_5 = __this->___U3CU3E4__this_1;
		NullCheck(L_5);
		AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740* L_6 = ((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)L_5)->___prefabItem_4;
		NullCheck(L_6);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_7;
		L_7 = VirtualFuncInvoker0< Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* >::Invoke(11 /* UnityEngine.Object UnityEngine.AddressableAssets.AssetReference::get_Asset() */, L_6);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_7, NULL);
		String_t* L_9;
		L_9 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral8A8E89BA8972E9CA1DE8455BDEC5102C0D709A57, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_9, NULL);
		// return;
		return;
	}

IL_004a:
	{
		// GameObject newEntry = op.Result;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F((&___0_op), AsyncOperationHandle_1_get_Result_m1EE60790A629757D8A00D55F7287100FAE83B45F_RuntimeMethod_var);
		V_1 = L_10;
		// newEntry.transform.SetParent(listRoot, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_1;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		ShopThemeList_t0C68FB74180739CB27FFABD0059C8B50136A107A* L_13 = __this->___U3CU3E4__this_1;
		NullCheck(L_13);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14 = ((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)L_13)->___listRoot_5;
		NullCheck(L_12);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_12, L_14, (bool)0, NULL);
		// ShopItemListItem itm = newEntry.GetComponent<ShopItemListItem>();
		U3CU3Ec__DisplayClass0_1_t4F59F2D4CF79A380ADC64FCB0150B1E93108AE6B* L_15 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_1;
		NullCheck(L_16);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_17;
		L_17 = GameObject_GetComponent_TisShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA_m4CF72312516CEB58969E87EEDBE8B48C3BE823AA(L_16, GameObject_GetComponent_TisShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA_m4CF72312516CEB58969E87EEDBE8B48C3BE823AA_RuntimeMethod_var);
		NullCheck(L_15);
		L_15->___itm_0 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___itm_0), (void*)L_17);
		// itm.nameText.text = theme.themeName;
		U3CU3Ec__DisplayClass0_1_t4F59F2D4CF79A380ADC64FCB0150B1E93108AE6B* L_18 = V_0;
		NullCheck(L_18);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_19 = L_18->___itm_0;
		NullCheck(L_19);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_20 = L_19->___nameText_5;
		ThemeData_tFCA2CE6D2D52E8F115D4D7C30668D417C70C2E7E* L_21 = __this->___theme_0;
		NullCheck(L_21);
		String_t* L_22 = L_21->___themeName_4;
		NullCheck(L_20);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, L_22);
		// itm.pricetext.text = theme.cost.ToString();
		U3CU3Ec__DisplayClass0_1_t4F59F2D4CF79A380ADC64FCB0150B1E93108AE6B* L_23 = V_0;
		NullCheck(L_23);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_24 = L_23->___itm_0;
		NullCheck(L_24);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_25 = L_24->___pricetext_6;
		ThemeData_tFCA2CE6D2D52E8F115D4D7C30668D417C70C2E7E* L_26 = __this->___theme_0;
		NullCheck(L_26);
		int32_t* L_27 = (&L_26->___cost_5);
		String_t* L_28;
		L_28 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_27, NULL);
		NullCheck(L_25);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_25, L_28);
		// itm.icon.sprite = theme.themeIcon;
		U3CU3Ec__DisplayClass0_1_t4F59F2D4CF79A380ADC64FCB0150B1E93108AE6B* L_29 = V_0;
		NullCheck(L_29);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_30 = L_29->___itm_0;
		NullCheck(L_30);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_31 = L_30->___icon_4;
		ThemeData_tFCA2CE6D2D52E8F115D4D7C30668D417C70C2E7E* L_32 = __this->___theme_0;
		NullCheck(L_32);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_33 = L_32->___themeIcon_7;
		NullCheck(L_31);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_31, L_33, NULL);
		// if (theme.premiumCost > 0)
		ThemeData_tFCA2CE6D2D52E8F115D4D7C30668D417C70C2E7E* L_34 = __this->___theme_0;
		NullCheck(L_34);
		int32_t L_35 = L_34->___premiumCost_6;
		if ((((int32_t)L_35) <= ((int32_t)0)))
		{
			goto IL_011b;
		}
	}
	{
		// itm.premiumText.transform.parent.gameObject.SetActive(true);
		U3CU3Ec__DisplayClass0_1_t4F59F2D4CF79A380ADC64FCB0150B1E93108AE6B* L_36 = V_0;
		NullCheck(L_36);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_37 = L_36->___itm_0;
		NullCheck(L_37);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_38 = L_37->___premiumText_7;
		NullCheck(L_38);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_38, NULL);
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_39, NULL);
		NullCheck(L_40);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41;
		L_41 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_40, NULL);
		NullCheck(L_41);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_41, (bool)1, NULL);
		// itm.premiumText.text = theme.premiumCost.ToString();
		U3CU3Ec__DisplayClass0_1_t4F59F2D4CF79A380ADC64FCB0150B1E93108AE6B* L_42 = V_0;
		NullCheck(L_42);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_43 = L_42->___itm_0;
		NullCheck(L_43);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_44 = L_43->___premiumText_7;
		ThemeData_tFCA2CE6D2D52E8F115D4D7C30668D417C70C2E7E* L_45 = __this->___theme_0;
		NullCheck(L_45);
		int32_t* L_46 = (&L_45->___premiumCost_6);
		String_t* L_47;
		L_47 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_46, NULL);
		NullCheck(L_44);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_44, L_47);
		goto IL_013b;
	}

IL_011b:
	{
		// itm.premiumText.transform.parent.gameObject.SetActive(false);
		U3CU3Ec__DisplayClass0_1_t4F59F2D4CF79A380ADC64FCB0150B1E93108AE6B* L_48 = V_0;
		NullCheck(L_48);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_49 = L_48->___itm_0;
		NullCheck(L_49);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_50 = L_49->___premiumText_7;
		NullCheck(L_50);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_50, NULL);
		NullCheck(L_51);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52;
		L_52 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_51, NULL);
		NullCheck(L_52);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53;
		L_53 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_52, NULL);
		NullCheck(L_53);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_53, (bool)0, NULL);
	}

IL_013b:
	{
		// itm.buyButton.onClick.AddListener(delegate() { Buy(theme); });
		U3CU3Ec__DisplayClass0_1_t4F59F2D4CF79A380ADC64FCB0150B1E93108AE6B* L_54 = V_0;
		NullCheck(L_54);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_55 = L_54->___itm_0;
		NullCheck(L_55);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_56 = L_55->___buyButton_8;
		NullCheck(L_56);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_57;
		L_57 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_56, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_58 = __this->___U3CU3E9__1_2;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_59 = L_58;
		G_B7_0 = L_59;
		G_B7_1 = L_57;
		if (L_59)
		{
			G_B8_0 = L_59;
			G_B8_1 = L_57;
			goto IL_016a;
		}
	}
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_60 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_60);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_60, __this, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3CPopulateU3Eb__1_m51B9168671B3CC96C54E5B2CC392CF9C0E7DC46F_RuntimeMethod_var), NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_61 = L_60;
		V_2 = L_61;
		__this->___U3CU3E9__1_2 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E9__1_2), (void*)L_61);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_62 = V_2;
		G_B8_0 = L_62;
		G_B8_1 = G_B7_1;
	}

IL_016a:
	{
		NullCheck(G_B8_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(G_B8_1, G_B8_0, NULL);
		// itm.buyButton.image.sprite = itm.buyButtonSprite;
		U3CU3Ec__DisplayClass0_1_t4F59F2D4CF79A380ADC64FCB0150B1E93108AE6B* L_63 = V_0;
		NullCheck(L_63);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_64 = L_63->___itm_0;
		NullCheck(L_64);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_65 = L_64->___buyButton_8;
		NullCheck(L_65);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_66;
		L_66 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_65, NULL);
		U3CU3Ec__DisplayClass0_1_t4F59F2D4CF79A380ADC64FCB0150B1E93108AE6B* L_67 = V_0;
		NullCheck(L_67);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_68 = L_67->___itm_0;
		NullCheck(L_68);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_69 = L_68->___buyButtonSprite_10;
		NullCheck(L_66);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_66, L_69, NULL);
		// RefreshButton(itm, theme);
		ShopThemeList_t0C68FB74180739CB27FFABD0059C8B50136A107A* L_70 = __this->___U3CU3E4__this_1;
		U3CU3Ec__DisplayClass0_1_t4F59F2D4CF79A380ADC64FCB0150B1E93108AE6B* L_71 = V_0;
		NullCheck(L_71);
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_72 = L_71->___itm_0;
		ThemeData_tFCA2CE6D2D52E8F115D4D7C30668D417C70C2E7E* L_73 = __this->___theme_0;
		NullCheck(L_70);
		ShopThemeList_RefreshButton_m102DD73F3ABA273869D92AE18129C58345603363(L_70, L_72, L_73, NULL);
		// m_RefreshCallback += delegate() { RefreshButton(itm, theme); };
		ShopThemeList_t0C68FB74180739CB27FFABD0059C8B50136A107A* L_74 = __this->___U3CU3E4__this_1;
		ShopThemeList_t0C68FB74180739CB27FFABD0059C8B50136A107A* L_75 = __this->___U3CU3E4__this_1;
		NullCheck(L_75);
		RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C* L_76 = ((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)L_75)->___m_RefreshCallback_6;
		U3CU3Ec__DisplayClass0_1_t4F59F2D4CF79A380ADC64FCB0150B1E93108AE6B* L_77 = V_0;
		RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C* L_78 = (RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C*)il2cpp_codegen_object_new(RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C_il2cpp_TypeInfo_var);
		NullCheck(L_78);
		RefreshCallback__ctor_m32B31403EB444160A244324A0F33184727183AD7(L_78, L_77, (intptr_t)((void*)U3CU3Ec__DisplayClass0_1_U3CPopulateU3Eb__2_m2477ED05E7D3921AE28351DE5F6B1FB629326447_RuntimeMethod_var), NULL);
		Delegate_t* L_79;
		L_79 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_76, L_78, NULL);
		NullCheck(L_74);
		((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)L_74)->___m_RefreshCallback_6 = ((RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C*)CastclassSealed((RuntimeObject*)L_79, RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942*)L_74)->___m_RefreshCallback_6), (void*)((RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C*)CastclassSealed((RuntimeObject*)L_79, RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C_il2cpp_TypeInfo_var)));
		// };
		return;
	}
}
// System.Void ShopThemeList/<>c__DisplayClass0_0::<Populate>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0_U3CPopulateU3Eb__1_m51B9168671B3CC96C54E5B2CC392CF9C0E7DC46F (U3CU3Ec__DisplayClass0_0_tC2767A9EEEF702657D548FD3DA0A1D1241A6FF69* __this, const RuntimeMethod* method) 
{
	{
		// itm.buyButton.onClick.AddListener(delegate() { Buy(theme); });
		ShopThemeList_t0C68FB74180739CB27FFABD0059C8B50136A107A* L_0 = __this->___U3CU3E4__this_1;
		ThemeData_tFCA2CE6D2D52E8F115D4D7C30668D417C70C2E7E* L_1 = __this->___theme_0;
		NullCheck(L_0);
		ShopThemeList_Buy_m6FA8F180822EFDB5358B602A37EBD2C362923C2D(L_0, L_1, NULL);
		// itm.buyButton.onClick.AddListener(delegate() { Buy(theme); });
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
// System.Void ShopThemeList/<>c__DisplayClass0_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_1__ctor_mEA99018BFB50FFF9AA918BEBFD203C93825CC4D0 (U3CU3Ec__DisplayClass0_1_t4F59F2D4CF79A380ADC64FCB0150B1E93108AE6B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ShopThemeList/<>c__DisplayClass0_1::<Populate>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_1_U3CPopulateU3Eb__2_m2477ED05E7D3921AE28351DE5F6B1FB629326447 (U3CU3Ec__DisplayClass0_1_t4F59F2D4CF79A380ADC64FCB0150B1E93108AE6B* __this, const RuntimeMethod* method) 
{
	{
		// m_RefreshCallback += delegate() { RefreshButton(itm, theme); };
		U3CU3Ec__DisplayClass0_0_tC2767A9EEEF702657D548FD3DA0A1D1241A6FF69* L_0 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_0);
		ShopThemeList_t0C68FB74180739CB27FFABD0059C8B50136A107A* L_1 = L_0->___U3CU3E4__this_1;
		ShopItemListItem_t5A5BB30F26069013BDD8067D65766776E43059AA* L_2 = __this->___itm_0;
		U3CU3Ec__DisplayClass0_0_tC2767A9EEEF702657D548FD3DA0A1D1241A6FF69* L_3 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_3);
		ThemeData_tFCA2CE6D2D52E8F115D4D7C30668D417C70C2E7E* L_4 = L_3->___theme_0;
		NullCheck(L_1);
		ShopThemeList_RefreshButton_m102DD73F3ABA273869D92AE18129C58345603363(L_1, L_2, L_4, NULL);
		// m_RefreshCallback += delegate() { RefreshButton(itm, theme); };
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
// System.Void ShopUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopUI_Start_mD6CDC2FD0448E33DB0E95D8528DD0613C924A8E2 (ShopUI_t962C10A7606C823D4BD8CA1BE8C8A0BF882C05CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerData.Create();
		il2cpp_codegen_runtime_class_init_inline(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		PlayerData_Create_m1D5ADD9C6648466D8524AC1EAE9264EC3D2BE02B(NULL);
		// consumableDatabase.Load();
		ConsumableDatabase_t9DC580A8F1501B9595AD450552561D50632C85F8* L_0 = __this->___consumableDatabase_4;
		NullCheck(L_0);
		ConsumableDatabase_Load_m8952582958A43A875EA8FCF6E64B873357CA81F4(L_0, NULL);
		// CoroutineHandler.StartStaticCoroutine(CharacterDatabase.LoadDatabase());
		RuntimeObject* L_1;
		L_1 = CharacterDatabase_LoadDatabase_mF3D0CF1AED21938D1E6FC7DD5282BBD60BDC83C6(NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = CoroutineHandler_StartStaticCoroutine_mAA4300A60BD0F53A17726EDDBFCB92A354FBCE4B(L_1, NULL);
		// CoroutineHandler.StartStaticCoroutine(ThemeDatabase.LoadDatabase());
		RuntimeObject* L_3;
		L_3 = ThemeDatabase_LoadDatabase_mBC9E48F3626E2BF54D714AAA48BDFE6B6346C4F3(NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = CoroutineHandler_StartStaticCoroutine_mAA4300A60BD0F53A17726EDDBFCB92A354FBCE4B(L_3, NULL);
		// cheatButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->___cheatButton_11;
		NullCheck(L_5);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_5, (bool)0, NULL);
		// m_OpenList = itemList;
		ShopItemList_t9B0978BE7006CCBD7EDF89D8EBBC4DE403367D74* L_6 = __this->___itemList_5;
		__this->___m_OpenList_12 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OpenList_12), (void*)L_6);
		// itemList.Open();
		ShopItemList_t9B0978BE7006CCBD7EDF89D8EBBC4DE403367D74* L_7 = __this->___itemList_5;
		NullCheck(L_7);
		ShopList_Open_m2BA7185F99F40D47D7E6995450BFBEBCED1103FD(L_7, NULL);
		// }
		return;
	}
}
// System.Void ShopUI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopUI_Update_m5B037B743F1488972E3CD504D60D5846BC7CD175 (ShopUI_t962C10A7606C823D4BD8CA1BE8C8A0BF882C05CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// coinCounter.text = PlayerData.instance.coins.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___coinCounter_9;
		il2cpp_codegen_runtime_class_init_inline(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_1;
		L_1 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		NullCheck(L_1);
		int32_t* L_2 = (&L_1->___coins_2);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// premiumCounter.text = PlayerData.instance.premium.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___premiumCounter_10;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_5;
		L_5 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		NullCheck(L_5);
		int32_t* L_6 = (&L_5->___premium_3);
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_6, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
		// }
		return;
	}
}
// System.Void ShopUI::OpenItemList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopUI_OpenItemList_mFF92506D354EDAAD2671FBD8F5D179287CB5C151 (ShopUI_t962C10A7606C823D4BD8CA1BE8C8A0BF882C05CA* __this, const RuntimeMethod* method) 
{
	{
		// m_OpenList.Close();
		ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942* L_0 = __this->___m_OpenList_12;
		NullCheck(L_0);
		ShopList_Close_m05B23655086F8D500B7DA6166409DEACFA0BFABF(L_0, NULL);
		// itemList.Open();
		ShopItemList_t9B0978BE7006CCBD7EDF89D8EBBC4DE403367D74* L_1 = __this->___itemList_5;
		NullCheck(L_1);
		ShopList_Open_m2BA7185F99F40D47D7E6995450BFBEBCED1103FD(L_1, NULL);
		// m_OpenList = itemList;
		ShopItemList_t9B0978BE7006CCBD7EDF89D8EBBC4DE403367D74* L_2 = __this->___itemList_5;
		__this->___m_OpenList_12 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OpenList_12), (void*)L_2);
		// }
		return;
	}
}
// System.Void ShopUI::OpenCharacterList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopUI_OpenCharacterList_m99B32470779590FFB3D4483026D4CF63B3C09023 (ShopUI_t962C10A7606C823D4BD8CA1BE8C8A0BF882C05CA* __this, const RuntimeMethod* method) 
{
	{
		// m_OpenList.Close();
		ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942* L_0 = __this->___m_OpenList_12;
		NullCheck(L_0);
		ShopList_Close_m05B23655086F8D500B7DA6166409DEACFA0BFABF(L_0, NULL);
		// characterList.Open();
		ShopCharacterList_tD97486C0F497F30D86A2AA193B3F983654DD8279* L_1 = __this->___characterList_6;
		NullCheck(L_1);
		ShopList_Open_m2BA7185F99F40D47D7E6995450BFBEBCED1103FD(L_1, NULL);
		// m_OpenList = characterList;
		ShopCharacterList_tD97486C0F497F30D86A2AA193B3F983654DD8279* L_2 = __this->___characterList_6;
		__this->___m_OpenList_12 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OpenList_12), (void*)L_2);
		// }
		return;
	}
}
// System.Void ShopUI::OpenThemeList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopUI_OpenThemeList_m95D77B1C1B5A84F386E9DDB765F10AD5ABB59844 (ShopUI_t962C10A7606C823D4BD8CA1BE8C8A0BF882C05CA* __this, const RuntimeMethod* method) 
{
	{
		// m_OpenList.Close();
		ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942* L_0 = __this->___m_OpenList_12;
		NullCheck(L_0);
		ShopList_Close_m05B23655086F8D500B7DA6166409DEACFA0BFABF(L_0, NULL);
		// themeList.Open();
		ShopThemeList_t0C68FB74180739CB27FFABD0059C8B50136A107A* L_1 = __this->___themeList_8;
		NullCheck(L_1);
		ShopList_Open_m2BA7185F99F40D47D7E6995450BFBEBCED1103FD(L_1, NULL);
		// m_OpenList = themeList;
		ShopThemeList_t0C68FB74180739CB27FFABD0059C8B50136A107A* L_2 = __this->___themeList_8;
		__this->___m_OpenList_12 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OpenList_12), (void*)L_2);
		// }
		return;
	}
}
// System.Void ShopUI::OpenAccessoriesList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopUI_OpenAccessoriesList_m4DBD359FA1CF1D9CA25924FFE8F533CF229A2FD0 (ShopUI_t962C10A7606C823D4BD8CA1BE8C8A0BF882C05CA* __this, const RuntimeMethod* method) 
{
	{
		// m_OpenList.Close();
		ShopList_t4748CBBF957C6346FCA28A9026B424F2AFFBD942* L_0 = __this->___m_OpenList_12;
		NullCheck(L_0);
		ShopList_Close_m05B23655086F8D500B7DA6166409DEACFA0BFABF(L_0, NULL);
		// accessoriesList.Open();
		ShopAccessoriesList_tC54A532A1828DDDD56ECFBC213E0D0A927C1AF6A* L_1 = __this->___accessoriesList_7;
		NullCheck(L_1);
		ShopList_Open_m2BA7185F99F40D47D7E6995450BFBEBCED1103FD(L_1, NULL);
		// m_OpenList = accessoriesList;
		ShopAccessoriesList_tC54A532A1828DDDD56ECFBC213E0D0A927C1AF6A* L_2 = __this->___accessoriesList_7;
		__this->___m_OpenList_12 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OpenList_12), (void*)L_2);
		// }
		return;
	}
}
// System.Void ShopUI::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopUI_LoadScene_m0EA5260BBCFD1BAA35E39EC1009A3C3398236FA9 (ShopUI_t962C10A7606C823D4BD8CA1BE8C8A0BF882C05CA* __this, String_t* ___0_scene, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(scene, LoadSceneMode.Single);
		String_t* L_0 = ___0_scene;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m2841705C02C450E42A44B5EEE2A6A2C4261FA3AF(L_0, 0, NULL);
		// }
		return;
	}
}
// System.Void ShopUI::CloseScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopUI_CloseScene_m656B0315123EDB15557014A6CA7AFD6770821DE9 (ShopUI_t962C10A7606C823D4BD8CA1BE8C8A0BF882C05CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadoutState_t14852AB58CF707FCE966C46A1F36351BCA596509_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98EFCD2577BCD88B20D4486FCC65B58CFDBEEC05);
		s_Il2CppMethodInitialized = true;
	}
	LoadoutState_t14852AB58CF707FCE966C46A1F36351BCA596509* V_0 = NULL;
	{
		// SceneManager.UnloadSceneAsync("shop");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_0;
		L_0 = SceneManager_UnloadSceneAsync_mF6F4161EF48C6622AA1B5BC66B4A2CA736C4D2B2(_stringLiteral98EFCD2577BCD88B20D4486FCC65B58CFDBEEC05, NULL);
		// LoadoutState loadoutState = GameManager.instance.topState as LoadoutState;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1;
		L_1 = GameManager_get_instance_mFCE15CA11B584E28800B16557EEB5362966F5103_inline(NULL);
		NullCheck(L_1);
		AState_t40AE14F23DF9E5C657E24D92449512BF2D79A7CF* L_2;
		L_2 = GameManager_get_topState_m2E07F2739B0EEE2166D7CF5621D1482C71BB842A(L_1, NULL);
		V_0 = ((LoadoutState_t14852AB58CF707FCE966C46A1F36351BCA596509*)IsInstClass((RuntimeObject*)L_2, LoadoutState_t14852AB58CF707FCE966C46A1F36351BCA596509_il2cpp_TypeInfo_var));
		// if(loadoutState != null)
		LoadoutState_t14852AB58CF707FCE966C46A1F36351BCA596509* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// loadoutState.Refresh();
		LoadoutState_t14852AB58CF707FCE966C46A1F36351BCA596509* L_5 = V_0;
		NullCheck(L_5);
		LoadoutState_Refresh_m0E8E1CD6613ABA819C74D230ABB69539ED3EF59F(L_5, NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void ShopUI::CheatCoin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopUI_CheatCoin_m6501D4EFFC1DF274C78E761034FEB9E192929249 (ShopUI_t962C10A7606C823D4BD8CA1BE8C8A0BF882C05CA* __this, const RuntimeMethod* method) 
{
	{
		// return ; //you can't cheat in production build
		return;
	}
}
// System.Void ShopUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopUI__ctor_m2AED0CB7B4E34D60F401CE3158C42BD753E8AC07 (ShopUI_t962C10A7606C823D4BD8CA1BE8C8A0BF882C05CA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void StartButton::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartButton_StartGame_mCB77FD9A4E1C3774211C18D291899FB875AF16C0 (StartButton_tF8F6A56061EF51B26F82FD5C23D529D030248545* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F2993C30C434C5F8BA708B372A8D4AC4A165185);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerData.instance.ftueLevel == 0)
		il2cpp_codegen_runtime_class_init_inline(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_0;
		L_0 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		NullCheck(L_0);
		int32_t L_1 = L_0->___ftueLevel_19;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		// PlayerData.instance.ftueLevel = 1;
		il2cpp_codegen_runtime_class_init_inline(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_2;
		L_2 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		NullCheck(L_2);
		L_2->___ftueLevel_19 = 1;
		// PlayerData.instance.Save();
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_3;
		L_3 = PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline(NULL);
		NullCheck(L_3);
		PlayerData_Save_m7ACDE3046A5377BD21EB86D7A5B2D35036663CE4(L_3, NULL);
	}

IL_0021:
	{
		// SceneManager.LoadScene("main");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral4F2993C30C434C5F8BA708B372A8D4AC4A165185, NULL);
		// }
		return;
	}
}
// System.Void StartButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartButton__ctor_m8454B8AF76546ABE9126D56D36A2AC0DDCA673B3 (StartButton_tF8F6A56061EF51B26F82FD5C23D529D030248545* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void WorldCurver::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldCurver_OnEnable_m9A9BC8D7D3095A43E2F23C404877EDC10BAC0C52 (WorldCurver_tB10463E24143CF8151415AE4621E839D9060E784* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D228B0F080F9E99F00C7E3FA8DD365300985225);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_CurveStrengthID = Shader.PropertyToID("_CurveStrength");
		int32_t L_0;
		L_0 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral0D228B0F080F9E99F00C7E3FA8DD365300985225, NULL);
		__this->___m_CurveStrengthID_5 = L_0;
		// }
		return;
	}
}
// System.Void WorldCurver::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldCurver_Update_m994BDB9EB542DC482CE1062B62321B185D19A151 (WorldCurver_tB10463E24143CF8151415AE4621E839D9060E784* __this, const RuntimeMethod* method) 
{
	{
		// Shader.SetGlobalFloat(m_CurveStrengthID, curveStrength);
		int32_t L_0 = __this->___m_CurveStrengthID_5;
		float L_1 = __this->___curveStrength_4;
		Shader_SetGlobalFloat_mE7D0DA2B0A62925E093B318785AF82A173794AFC(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void WorldCurver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldCurver__ctor_m8FC6CE5FF3B4FC8B10D33882728E635236BCF80D (WorldCurver_tB10463E24143CF8151415AE4621E839D9060E784* __this, const RuntimeMethod* method) 
{
	{
		// public float curveStrength = 0.01f;
		__this->___curveStrength_4 = (0.00999999978f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ThemeData_tFCA2CE6D2D52E8F115D4D7C30668D417C70C2E7E* TrackManager_get_currentTheme_mDA9E1FEDC2416853794C76EA2AA6822A14C0C10C_inline (TrackManager_tD73AA6F25EE7382387D947807269E11F3E3BB8EC* __this, const RuntimeMethod* method) 
{
	{
		// public ThemeData currentTheme { get { return m_CurrentThemeData; } }
		ThemeData_tFCA2CE6D2D52E8F115D4D7C30668D417C70C2E7E* L_0 = __this->___m_CurrentThemeData_34;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___backVector_12;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TrackSegment_get_worldLength_mB55EB6AF2BC1392F2E3BFF9A62FA00F050E261BF_inline (TrackSegment_tB910757B2D1C9F1F30757C0AB61CEC753AC93288* __this, const RuntimeMethod* method) 
{
	{
		// public float worldLength { get { return m_WorldLength; } }
		float L_0 = __this->___m_WorldLength_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x_2;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y_3;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z_4;
		float L_22 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* PlayerData_get_instance_m1E54F6DAA73727FE525460A9268AD604804FCEBC_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public PlayerData instance { get { return m_Instance; } }
		il2cpp_codegen_runtime_class_init_inline(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_0 = ((PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_StaticFields*)il2cpp_codegen_static_fields_for(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var))->___m_Instance_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Consumable_get_timeActive_m3E6E2ACFE5744748F3199473AEB70AEB3B63667A_inline (Consumable_t0CF16DCCCAE5A4064E1ECA1DB19FC6B4F0A4BFCA* __this, const RuntimeMethod* method) 
{
	{
		// public float timeActive {  get { return m_SinceStart; } }
		float L_0 = __this->___m_SinceStart_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t751B5EAF466601E97CA8673996839C749DDD0F41* CharacterDatabase_get_dictionary_m3201388D0F763F58BD4A6984F099D115FBD1F36B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacterDatabase_t449DEDE309A2E3658D00F86E2304DE45B17819C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public Dictionary<string, Character> dictionary {  get { return m_CharactersDict; } }
		Dictionary_2_t751B5EAF466601E97CA8673996839C749DDD0F41* L_0 = ((CharacterDatabase_t449DEDE309A2E3658D00F86E2304DE45B17819C6_StaticFields*)il2cpp_codegen_static_fields_for(CharacterDatabase_t449DEDE309A2E3658D00F86E2304DE45B17819C6_il2cpp_TypeInfo_var))->___m_CharactersDict_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RefreshCallback_Invoke_m4CAB63CF5B2B4F0411A18E8180A15812F9EA7702_inline (RefreshCallback_tB7C74532BCA6668640F5D280D3EFB14424B4864C* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t2AE5138514904369750CDACAF4A543780CFCBDC3* ThemeDatabase_get_dictionnary_mAE5F39C28604B2A5A36115BC6E0170B676451D36_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemeDatabase_tFB9AD4BB7BF2A9DAFB608C3FD7D98435685938CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public Dictionary<string, ThemeData> dictionnary { get { return themeDataList; } }
		Dictionary_2_t2AE5138514904369750CDACAF4A543780CFCBDC3* L_0 = ((ThemeDatabase_tFB9AD4BB7BF2A9DAFB608C3FD7D98435685938CA_StaticFields*)il2cpp_codegen_static_fields_for(ThemeDatabase_tFB9AD4BB7BF2A9DAFB608C3FD7D98435685938CA_il2cpp_TypeInfo_var))->___themeDataList_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* GameManager_get_instance_mFCE15CA11B584E28800B16557EEB5362966F5103_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public GameManager instance { get { return s_Instance; } }
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___s_Instance_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mAC86F205F4B98BBF36A8DD0D872E32C9177C5B72_gshared_inline (List_1_t41FFD2212A30C4D56B039EEC9134BF23286073F0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
