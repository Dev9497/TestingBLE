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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
// System.Action`2<System.String,System.String>
struct Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.List`1<Android.BLE.Commands.BleCommand>
struct List_1_tEA71E12AD290A9C47644FD8BE8145D2CAA4A2EB5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Queue`1<Android.BLE.Commands.BleCommand>
struct Queue_1_t02154256BFD05CB5E7EA0D7EA47E03E6FB9A0D5C;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<Android.BLE.BleObject>
struct UnityEvent_1_tABD8E44E9F09781411B7A0CE955319044744C023;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257;
// Android.BLE.Commands.BleCommand[]
struct BleCommandU5BU5D_t931A2D6BC4792327514861F280839D277007C84C;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Android.BLE.BleAdapter
struct BleAdapter_t6A52C7C4FA321E8F1A87668092229A4AF7A1450A;
// Android.BLE.Commands.BleCommand
struct BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F;
// Android.BLE.Events.BleErrorReceived
struct BleErrorReceived_t7EFFB529E7A8AC9F106F230ACCAB1D127D855A34;
// Android.BLE.BleManager
struct BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84;
// Android.BLE.Events.BleMessageReceived
struct BleMessageReceived_t9D40718B6EC1F48A29F437192E38C92EA38CDF8D;
// Android.BLE.BleObject
struct BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Android.BLE.Commands.ConnectToDevice
struct ConnectToDevice_tED9F7E213942CA91D6807368C9ECD9ACAC94D8E8;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DeviceButton
struct DeviceButton_t27410B4D1DDFFB235BB10D145B3815FB10A504CF;
// Android.BLE.Commands.DiscoverDevices
struct DiscoverDevices_t992CF20136BFBF9A23C6B4CAFCD517723D440A22;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// ExampleBleInteractor
struct ExampleBleInteractor_t4365949A13816F67EA4B0DAF560F3B331322D375;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Android.BLE.Commands.ReadFromCharacteristic
struct ReadFromCharacteristic_t6A2EA55768B2FE5E72EA4985B428B1548282926B;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// Android.BLE.Commands.SubscribeToCharacteristic
struct SubscribeToCharacteristic_t3E9D73FC5CED7EEC8810B60279358199F2E0F252;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Android.BLE.Commands.WriteToCharacteristic
struct WriteToCharacteristic_t3DAC60EE3B2B3D539D9B874F43CA87180DC9866A;
// Android.BLE.BleAdapter/ErrorReceived
struct ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276;
// Android.BLE.BleAdapter/MessageReceived
struct MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE;
// Android.BLE.Commands.ConnectToDevice/CharacteristicDiscovered
struct CharacteristicDiscovered_t54557FFD6C62C91E37BCC764034BBD605A2F73B5;
// Android.BLE.Commands.ConnectToDevice/ConnectionChange
struct ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC;
// Android.BLE.Commands.ConnectToDevice/ServiceDiscovered
struct ServiceDiscovered_t8E900906F2BF530C0A835688CF30166E681EFE42;
// DeviceButton/<>c
struct U3CU3Ec_t4FD0BD9380CBFB64E013BA8A08AB769FC4B8A0CA;
// Android.BLE.Commands.DiscoverDevices/DeviceDiscovered
struct DeviceDiscovered_tB6FDC91742237A0A8C1E38B632D244FFBCAE3ACB;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Android.BLE.Commands.ReadFromCharacteristic/ReadCharacteristicValueReceived
struct ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB;
// Android.BLE.Commands.SubscribeToCharacteristic/CharacteristicChanged
struct CharacteristicChanged_tC47800CCA86CDBC899E85FAEC5370807127BF788;

IL2CPP_EXTERN_C RuntimeClass* Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharacteristicChanged_tC47800CCA86CDBC899E85FAEC5370807127BF788_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharacteristicDiscovered_t54557FFD6C62C91E37BCC764034BBD605A2F73B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectToDevice_tED9F7E213942CA91D6807368C9ECD9ACAC94D8E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeviceDiscovered_tB6FDC91742237A0A8C1E38B632D244FFBCAE3ACB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DiscoverDevices_t992CF20136BFBF9A23C6B4CAFCD517723D440A22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tEA71E12AD290A9C47644FD8BE8145D2CAA4A2EB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t02154256BFD05CB5E7EA0D7EA47E03E6FB9A0D5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadFromCharacteristic_t6A2EA55768B2FE5E72EA4985B428B1548282926B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServiceDiscovered_t8E900906F2BF530C0A835688CF30166E681EFE42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4FD0BD9380CBFB64E013BA8A08AB769FC4B8A0CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral018DE31335FF756A982D23406BC445027A26C734;
IL2CPP_EXTERN_C String_t* _stringLiteral0F5C9D8EDC1903B081CD8F4752009233F7128032;
IL2CPP_EXTERN_C String_t* _stringLiteral10D327C0F3F7F092200F0AAEFBC01F41D7C4AE1C;
IL2CPP_EXTERN_C String_t* _stringLiteral14F66CFADCDFC8C454514AED25332E6B6C5A5AE7;
IL2CPP_EXTERN_C String_t* _stringLiteral15F30E0AC0217F04C47A90E499E8480B94E2CD1B;
IL2CPP_EXTERN_C String_t* _stringLiteral1CB5C09AAFDA246C883376D41442500FDF5CC4B2;
IL2CPP_EXTERN_C String_t* _stringLiteral2063737B07B6658BC2E1EC3128D4E09E57CA123E;
IL2CPP_EXTERN_C String_t* _stringLiteral2ACE606359FC08C5A373AA9744375A3F83AF4362;
IL2CPP_EXTERN_C String_t* _stringLiteral409BEDA9B91A18B8F2F42A3C236764486B0606A4;
IL2CPP_EXTERN_C String_t* _stringLiteral575F359D33558DB03B7FB1B8D425C40DBD9BBF79;
IL2CPP_EXTERN_C String_t* _stringLiteral62060434CF3C3BB9B6D33B986E7F0895B878992B;
IL2CPP_EXTERN_C String_t* _stringLiteral6D606522AC9C80F1AF7F27E15F99A2F4B7912DD0;
IL2CPP_EXTERN_C String_t* _stringLiteral71B67D7507E22CE1204517AA638F8289180E8E32;
IL2CPP_EXTERN_C String_t* _stringLiteral76273292A1A6BD0D9FF8E3BD08F3478B31C2B41D;
IL2CPP_EXTERN_C String_t* _stringLiteral79126F38ABF368DA8E84392604E5C211E9C2FA6D;
IL2CPP_EXTERN_C String_t* _stringLiteral82DF5E3680E76B854FE27BAB66F45EB2F2141AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral85C727F5CB7137F26A763D0AE09E2E3247DAA033;
IL2CPP_EXTERN_C String_t* _stringLiteral8611EF5A0C5591E334B1A7C6ADAE2D5E4417747A;
IL2CPP_EXTERN_C String_t* _stringLiteral8A12AAB3BEDC5ED8F686FFB84CB9FD25E545F5F1;
IL2CPP_EXTERN_C String_t* _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62;
IL2CPP_EXTERN_C String_t* _stringLiteral99C9FB13912FCAB02AB530678EF211E2548D8678;
IL2CPP_EXTERN_C String_t* _stringLiteralA8E1820878060B06AA7E88F43230BA9351E6E99D;
IL2CPP_EXTERN_C String_t* _stringLiteralAAEFA6B295B568E9E88A7E31306684C605BB703E;
IL2CPP_EXTERN_C String_t* _stringLiteralB0F6B6440CBDB5EFE64E049710348678D7C30EF3;
IL2CPP_EXTERN_C String_t* _stringLiteralB1B07A09C096070220509A78AA58738E4658F86B;
IL2CPP_EXTERN_C String_t* _stringLiteralBB0FB7199F70B7EB63B72703513CDAAC98A01A74;
IL2CPP_EXTERN_C String_t* _stringLiteralBF35985FF624EC7423094F567EBA62003C0F0D37;
IL2CPP_EXTERN_C String_t* _stringLiteralC22B7D867EC3B12AFB62AB277FDC7B8BC52C0C47;
IL2CPP_EXTERN_C String_t* _stringLiteralC6EF02D6E3BE1507B45BF565B8B7514706121D21;
IL2CPP_EXTERN_C String_t* _stringLiteralDBFC7A5A11A41D426D4DED9BCFDD3800907E9354;
IL2CPP_EXTERN_C String_t* _stringLiteralE65CFE5DA44ADF4FE34CFFDFB1FCBD9C1F095ED2;
IL2CPP_EXTERN_C String_t* _stringLiteralE725303E9AB2D7EF60880E8A2797728DE4F632AD;
IL2CPP_EXTERN_C String_t* _stringLiteralF77DCFBDDBFF820A84771FE451F6950FD3FBB71A;
IL2CPP_EXTERN_C String_t* _stringLiteralF9511742FD69A2C384F80C12845F58A7857429DD;
IL2CPP_EXTERN_C String_t* _stringLiteralFA992B8F73C3CE4390D13A7E1A05E948DE458E4C;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m8FA30194997244EC0072D6B437818A22B65F2854_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BleManager_OnBleMessageReceived_m6629275E7E4B068729169AFE80B34519D7B6CEAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BleManager_OnErrorReceived_mC4CCE01EE6619F0AB989066F2EB5EF51159BA022_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeviceButton_OnConnected_mE516723FD7BF08833EB687D8E4B1280C70A67DAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeviceButton_OnDisconnected_mC3398E301D831693BFB8D767C4F039F2E3E09F7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m81B828D6C267DD9924B7505904E291C93A41A018_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m0D02B8DDCAD7D7BD7B199FC207489FD294BC333F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7BB0EF638AD46EB3C6292F6285FB6678028D3C53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExampleBleInteractor_OnDeviceFound_mB31FEB99CF344B483FBA8EF65ADE3EDA272C17EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisBleAdapter_t6A52C7C4FA321E8F1A87668092229A4AF7A1450A_m178CC75F1AC5FBFF525C3EE9F6738A991FF82932_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisBleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_m6442682F58A41B4FF2D625CE57E2727D969DB228_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDeviceButton_t27410B4D1DDFFB235BB10D145B3815FB10A504CF_mC4EF5939C55997768A2F1E65E54E257A3A92F651_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisBleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911_m25E12CB0520B6980DF7E9AE563F733A8F0B0FFE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB787BAC4BA2A956D398C9EFC01B974BAA13FAD0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m890246091900B6B4F01BD87D23D3B6DE0496A7F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m286D1D4683D912368714BDE2FC174C8574845605_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m514A29456D474008879812E4C05CCA60FF3FFC66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m04342FA7D9B5FD696206BEFDCBD46155E164BAC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m4236E4F0C18936107363E1A84F2420DD8768D141_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisBleAdapter_t6A52C7C4FA321E8F1A87668092229A4AF7A1450A_m21CC2A999F37917A0F1958137F2B7C6C34866768_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m596C055F05EF8F992F802CA87CF3CEF44435F12C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m7E702BCBCCFD61CFA652010F44F32C38C329E7C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m60F547161F02EFD88CBB53A524F1A3795A48A4A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m5A46263399026134FEB685F07DD0A6E90822FB3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSubscribeToExampleServiceU3Eb__13_0_m0527F9B938FC27EC2C2960E3B5B59E055EBB45EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m84217E7DB51E3657249844A3FBDD75BFA22A0CBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m645728FDB306DCB487327F0187C6510336682DD5_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// System.Collections.Generic.List`1<Android.BLE.Commands.BleCommand>
struct List_1_tEA71E12AD290A9C47644FD8BE8145D2CAA4A2EB5  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BleCommandU5BU5D_t931A2D6BC4792327514861F280839D277007C84C* ____items_1;
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

// System.Collections.Generic.Queue`1<Android.BLE.Commands.BleCommand>
struct Queue_1_t02154256BFD05CB5E7EA0D7EA47E03E6FB9A0D5C  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	BleCommandU5BU5D_t931A2D6BC4792327514861F280839D277007C84C* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

// Android.BLE.Commands.BleCommand
struct BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F  : public RuntimeObject
{
	// System.Single Android.BLE.Commands.BleCommand::_timeout
	float ____timeout_0;
	// System.Boolean Android.BLE.Commands.BleCommand::RunParallel
	bool ___RunParallel_1;
	// System.Boolean Android.BLE.Commands.BleCommand::RunContiniously
	bool ___RunContiniously_2;
};

// Android.BLE.BleObject
struct BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911  : public RuntimeObject
{
	// System.String Android.BLE.BleObject::device
	String_t* ___device_0;
	// System.String Android.BLE.BleObject::name
	String_t* ___name_1;
	// System.String Android.BLE.BleObject::service
	String_t* ___service_2;
	// System.String Android.BLE.BleObject::characteristic
	String_t* ___characteristic_3;
	// System.String Android.BLE.BleObject::command
	String_t* ___command_4;
	// System.Boolean Android.BLE.BleObject::hasError
	bool ___hasError_5;
	// System.String Android.BLE.BleObject::errorMessage
	String_t* ___errorMessage_6;
	// System.String Android.BLE.BleObject::base64Message
	String_t* ___base64Message_7;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// Android.BLE.Extension.UuidHelper
struct UuidHelper_t24BE05A5CB7973C3917EC80C24509267EF54D04F  : public RuntimeObject
{
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

// DeviceButton/<>c
struct U3CU3Ec_t4FD0BD9380CBFB64E013BA8A08AB769FC4B8A0CA  : public RuntimeObject
{
};

// System.Collections.Generic.List`1/Enumerator<Android.BLE.Commands.BleCommand>
struct Enumerator_tE606E6579843CDEB2AA04952EE6A950977B6005C 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tEA71E12AD290A9C47644FD8BE8145D2CAA4A2EB5* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// UnityEngine.Events.UnityEvent`1<Android.BLE.BleObject>
struct UnityEvent_1_tABD8E44E9F09781411B7A0CE955319044744C023  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// Android.BLE.Commands.ConnectToDevice
struct ConnectToDevice_tED9F7E213942CA91D6807368C9ECD9ACAC94D8E8  : public BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F
{
	// System.String Android.BLE.Commands.ConnectToDevice::_deviceAddress
	String_t* ____deviceAddress_3;
	// System.Boolean Android.BLE.Commands.ConnectToDevice::_isConnected
	bool ____isConnected_4;
	// Android.BLE.Commands.ConnectToDevice/ConnectionChange Android.BLE.Commands.ConnectToDevice::OnConnected
	ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* ___OnConnected_5;
	// Android.BLE.Commands.ConnectToDevice/ConnectionChange Android.BLE.Commands.ConnectToDevice::OnDisconnected
	ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* ___OnDisconnected_6;
	// Android.BLE.Commands.ConnectToDevice/ServiceDiscovered Android.BLE.Commands.ConnectToDevice::OnServiceDiscovered
	ServiceDiscovered_t8E900906F2BF530C0A835688CF30166E681EFE42* ___OnServiceDiscovered_7;
	// Android.BLE.Commands.ConnectToDevice/CharacteristicDiscovered Android.BLE.Commands.ConnectToDevice::OnCharacteristicDiscovered
	CharacteristicDiscovered_t54557FFD6C62C91E37BCC764034BBD605A2F73B5* ___OnCharacteristicDiscovered_8;
};

// Android.BLE.Commands.DiscoverDevices
struct DiscoverDevices_t992CF20136BFBF9A23C6B4CAFCD517723D440A22  : public BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F
{
	// Android.BLE.Commands.DiscoverDevices/DeviceDiscovered Android.BLE.Commands.DiscoverDevices::OnDeviceDiscovered
	DeviceDiscovered_tB6FDC91742237A0A8C1E38B632D244FFBCAE3ACB* ___OnDeviceDiscovered_4;
	// System.Int32 Android.BLE.Commands.DiscoverDevices::_discoverTime
	int32_t ____discoverTime_5;
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

// Android.BLE.Commands.ReadFromCharacteristic
struct ReadFromCharacteristic_t6A2EA55768B2FE5E72EA4985B428B1548282926B  : public BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F
{
	// System.String Android.BLE.Commands.ReadFromCharacteristic::DeviceAddress
	String_t* ___DeviceAddress_3;
	// System.String Android.BLE.Commands.ReadFromCharacteristic::Service
	String_t* ___Service_4;
	// System.String Android.BLE.Commands.ReadFromCharacteristic::Characteristic
	String_t* ___Characteristic_5;
	// Android.BLE.Commands.ReadFromCharacteristic/ReadCharacteristicValueReceived Android.BLE.Commands.ReadFromCharacteristic::OnReadCharacteristicValueReceived
	ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB* ___OnReadCharacteristicValueReceived_6;
	// System.Boolean Android.BLE.Commands.ReadFromCharacteristic::CustomGatt
	bool ___CustomGatt_7;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Android.BLE.Commands.SubscribeToCharacteristic
struct SubscribeToCharacteristic_t3E9D73FC5CED7EEC8810B60279358199F2E0F252  : public BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F
{
	// System.String Android.BLE.Commands.SubscribeToCharacteristic::DeviceAddress
	String_t* ___DeviceAddress_3;
	// System.String Android.BLE.Commands.SubscribeToCharacteristic::Service
	String_t* ___Service_4;
	// System.String Android.BLE.Commands.SubscribeToCharacteristic::Characteristic
	String_t* ___Characteristic_5;
	// Android.BLE.Commands.SubscribeToCharacteristic/CharacteristicChanged Android.BLE.Commands.SubscribeToCharacteristic::OnCharacteristicChanged
	CharacteristicChanged_tC47800CCA86CDBC899E85FAEC5370807127BF788* ___OnCharacteristicChanged_6;
	// System.Boolean Android.BLE.Commands.SubscribeToCharacteristic::CustomGatt
	bool ___CustomGatt_7;
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

// Android.BLE.Commands.WriteToCharacteristic
struct WriteToCharacteristic_t3DAC60EE3B2B3D539D9B874F43CA87180DC9866A  : public BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F
{
	// System.String Android.BLE.Commands.WriteToCharacteristic::DeviceAddress
	String_t* ___DeviceAddress_3;
	// System.String Android.BLE.Commands.WriteToCharacteristic::Service
	String_t* ___Service_4;
	// System.String Android.BLE.Commands.WriteToCharacteristic::Characteristic
	String_t* ___Characteristic_5;
	// System.String Android.BLE.Commands.WriteToCharacteristic::Base64Data
	String_t* ___Base64Data_6;
	// System.Boolean Android.BLE.Commands.WriteToCharacteristic::CustomGatt
	bool ___CustomGatt_7;
};

// Android.BLE.Events.BleErrorReceived
struct BleErrorReceived_t7EFFB529E7A8AC9F106F230ACCAB1D127D855A34  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// Android.BLE.Events.BleMessageReceived
struct BleMessageReceived_t9D40718B6EC1F48A29F437192E38C92EA38CDF8D  : public UnityEvent_1_tABD8E44E9F09781411B7A0CE955319044744C023
{
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action`2<System.String,System.String>
struct Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D  : public MulticastDelegate_t
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

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Android.BLE.BleAdapter/ErrorReceived
struct ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276  : public MulticastDelegate_t
{
};

// Android.BLE.BleAdapter/MessageReceived
struct MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE  : public MulticastDelegate_t
{
};

// Android.BLE.Commands.ConnectToDevice/CharacteristicDiscovered
struct CharacteristicDiscovered_t54557FFD6C62C91E37BCC764034BBD605A2F73B5  : public MulticastDelegate_t
{
};

// Android.BLE.Commands.ConnectToDevice/ConnectionChange
struct ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC  : public MulticastDelegate_t
{
};

// Android.BLE.Commands.ConnectToDevice/ServiceDiscovered
struct ServiceDiscovered_t8E900906F2BF530C0A835688CF30166E681EFE42  : public MulticastDelegate_t
{
};

// Android.BLE.Commands.DiscoverDevices/DeviceDiscovered
struct DeviceDiscovered_tB6FDC91742237A0A8C1E38B632D244FFBCAE3ACB  : public MulticastDelegate_t
{
};

// Android.BLE.Commands.ReadFromCharacteristic/ReadCharacteristicValueReceived
struct ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB  : public MulticastDelegate_t
{
};

// Android.BLE.Commands.SubscribeToCharacteristic/CharacteristicChanged
struct CharacteristicChanged_tC47800CCA86CDBC899E85FAEC5370807127BF788  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Android.BLE.BleAdapter
struct BleAdapter_t6A52C7C4FA321E8F1A87668092229A4AF7A1450A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Android.BLE.BleAdapter/MessageReceived Android.BLE.BleAdapter::OnMessageReceived
	MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* ___OnMessageReceived_4;
	// Android.BLE.BleAdapter/ErrorReceived Android.BLE.BleAdapter::OnErrorReceived
	ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* ___OnErrorReceived_5;
	// Android.BLE.Events.BleMessageReceived Android.BLE.BleAdapter::UnityOnMessageReceived
	BleMessageReceived_t9D40718B6EC1F48A29F437192E38C92EA38CDF8D* ___UnityOnMessageReceived_6;
	// Android.BLE.Events.BleErrorReceived Android.BLE.BleAdapter::UnityOnErrorReceived
	BleErrorReceived_t7EFFB529E7A8AC9F106F230ACCAB1D127D855A34* ___UnityOnErrorReceived_7;
};

// Android.BLE.BleManager
struct BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Android.BLE.BleAdapter Android.BLE.BleManager::_adapter
	BleAdapter_t6A52C7C4FA321E8F1A87668092229A4AF7A1450A* ____adapter_6;
	// System.Boolean Android.BLE.BleManager::InitializeOnAwake
	bool ___InitializeOnAwake_7;
	// System.Boolean Android.BLE.BleManager::LogAllMessages
	bool ___LogAllMessages_8;
	// System.Boolean Android.BLE.BleManager::UseUnityLog
	bool ___UseUnityLog_9;
	// System.Boolean Android.BLE.BleManager::UseAndroidLog
	bool ___UseAndroidLog_10;
	// System.Collections.Generic.Queue`1<Android.BLE.Commands.BleCommand> Android.BLE.BleManager::_commandQueue
	Queue_1_t02154256BFD05CB5E7EA0D7EA47E03E6FB9A0D5C* ____commandQueue_12;
	// System.Collections.Generic.List`1<Android.BLE.Commands.BleCommand> Android.BLE.BleManager::_parrallelStack
	List_1_tEA71E12AD290A9C47644FD8BE8145D2CAA4A2EB5* ____parrallelStack_13;
};

// DeviceButton
struct DeviceButton_t27410B4D1DDFFB235BB10D145B3815FB10A504CF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String DeviceButton::_deviceUuid
	String_t* ____deviceUuid_4;
	// System.String DeviceButton::_deviceName
	String_t* ____deviceName_5;
	// UnityEngine.UI.Text DeviceButton::_deviceUuidText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____deviceUuidText_6;
	// UnityEngine.UI.Text DeviceButton::_deviceNameText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____deviceNameText_7;
	// UnityEngine.UI.Image DeviceButton::_deviceButtonImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____deviceButtonImage_8;
	// UnityEngine.UI.Text DeviceButton::_deviceButtonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____deviceButtonText_9;
	// UnityEngine.Color DeviceButton::_onConnectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____onConnectedColor_10;
	// UnityEngine.Color DeviceButton::_previousColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____previousColor_11;
	// System.Boolean DeviceButton::_isConnected
	bool ____isConnected_12;
	// Android.BLE.Commands.ConnectToDevice DeviceButton::_connectCommand
	ConnectToDevice_tED9F7E213942CA91D6807368C9ECD9ACAC94D8E8* ____connectCommand_13;
	// Android.BLE.Commands.ReadFromCharacteristic DeviceButton::_readFromCharacteristic
	ReadFromCharacteristic_t6A2EA55768B2FE5E72EA4985B428B1548282926B* ____readFromCharacteristic_14;
};

// ExampleBleInteractor
struct ExampleBleInteractor_t4365949A13816F67EA4B0DAF560F3B331322D375  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ExampleBleInteractor::_deviceButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____deviceButton_4;
	// UnityEngine.Transform ExampleBleInteractor::_deviceList
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____deviceList_5;
	// System.Int32 ExampleBleInteractor::_scanTime
	int32_t ____scanTime_6;
	// System.Single ExampleBleInteractor::_scanTimer
	float ____scanTimer_7;
	// System.Boolean ExampleBleInteractor::_isScanning
	bool ____isScanning_8;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
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

// <Module>

// <Module>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// System.Collections.Generic.List`1<Android.BLE.Commands.BleCommand>
struct List_1_tEA71E12AD290A9C47644FD8BE8145D2CAA4A2EB5_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BleCommandU5BU5D_t931A2D6BC4792327514861F280839D277007C84C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Android.BLE.Commands.BleCommand>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.Queue`1<Android.BLE.Commands.BleCommand>

// System.Collections.Generic.Queue`1<Android.BLE.Commands.BleCommand>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<System.Object>

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// Android.BLE.Commands.BleCommand

// Android.BLE.Commands.BleCommand

// Android.BLE.BleObject

// Android.BLE.BleObject

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Text.Encoding

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Android.BLE.Extension.UuidHelper

// Android.BLE.Extension.UuidHelper

// DeviceButton/<>c
struct U3CU3Ec_t4FD0BD9380CBFB64E013BA8A08AB769FC4B8A0CA_StaticFields
{
	// DeviceButton/<>c DeviceButton/<>c::<>9
	U3CU3Ec_t4FD0BD9380CBFB64E013BA8A08AB769FC4B8A0CA* ___U3CU3E9_0;
	// Android.BLE.Commands.ReadFromCharacteristic/ReadCharacteristicValueReceived DeviceButton/<>c::<>9__13_0
	ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB* ___U3CU3E9__13_0_1;
};

// DeviceButton/<>c

// System.Collections.Generic.List`1/Enumerator<Android.BLE.Commands.BleCommand>

// System.Collections.Generic.List`1/Enumerator<Android.BLE.Commands.BleCommand>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// UnityEngine.Events.UnityEvent`1<Android.BLE.BleObject>

// UnityEngine.Events.UnityEvent`1<Android.BLE.BleObject>

// UnityEngine.Events.UnityEvent`1<System.String>

// UnityEngine.Events.UnityEvent`1<System.String>

// UnityEngine.AndroidJavaClass

// UnityEngine.AndroidJavaClass

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// Android.BLE.Commands.ConnectToDevice

// Android.BLE.Commands.ConnectToDevice

// Android.BLE.Commands.DiscoverDevices

// Android.BLE.Commands.DiscoverDevices

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// Android.BLE.Commands.ReadFromCharacteristic

// Android.BLE.Commands.ReadFromCharacteristic

// System.Single

// System.Single

// Android.BLE.Commands.SubscribeToCharacteristic

// Android.BLE.Commands.SubscribeToCharacteristic

// System.Void

// System.Void

// Android.BLE.Commands.WriteToCharacteristic

// Android.BLE.Commands.WriteToCharacteristic

// Android.BLE.Events.BleErrorReceived

// Android.BLE.Events.BleErrorReceived

// Android.BLE.Events.BleMessageReceived

// Android.BLE.Events.BleMessageReceived

// System.Delegate

// System.Delegate

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

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

// System.Action`2<System.String,System.String>

// System.Action`2<System.String,System.String>

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Transform

// UnityEngine.Transform

// Android.BLE.BleAdapter/ErrorReceived

// Android.BLE.BleAdapter/ErrorReceived

// Android.BLE.BleAdapter/MessageReceived

// Android.BLE.BleAdapter/MessageReceived

// Android.BLE.Commands.ConnectToDevice/CharacteristicDiscovered

// Android.BLE.Commands.ConnectToDevice/CharacteristicDiscovered

// Android.BLE.Commands.ConnectToDevice/ConnectionChange

// Android.BLE.Commands.ConnectToDevice/ConnectionChange

// Android.BLE.Commands.ConnectToDevice/ServiceDiscovered

// Android.BLE.Commands.ConnectToDevice/ServiceDiscovered

// Android.BLE.Commands.DiscoverDevices/DeviceDiscovered

// Android.BLE.Commands.DiscoverDevices/DeviceDiscovered

// Android.BLE.Commands.ReadFromCharacteristic/ReadCharacteristicValueReceived

// Android.BLE.Commands.ReadFromCharacteristic/ReadCharacteristicValueReceived

// Android.BLE.Commands.SubscribeToCharacteristic/CharacteristicChanged

// Android.BLE.Commands.SubscribeToCharacteristic/CharacteristicChanged

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Android.BLE.BleAdapter

// Android.BLE.BleAdapter

// Android.BLE.BleManager
struct BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields
{
	// Android.BLE.BleManager Android.BLE.BleManager::_instance
	BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84* ____instance_4;
	// System.Boolean Android.BLE.BleManager::_initialized
	bool ____initialized_5;
	// UnityEngine.AndroidJavaObject Android.BLE.BleManager::_bleLibrary
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ____bleLibrary_11;
	// Android.BLE.Commands.BleCommand Android.BLE.BleManager::_activeCommand
	BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* ____activeCommand_14;
	// System.Single Android.BLE.BleManager::_activeTimer
	float ____activeTimer_15;
};

// Android.BLE.BleManager

// DeviceButton

// DeviceButton

// ExampleBleInteractor

// ExampleBleInteractor

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
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared (String_t* ___0_json, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, RuntimeObject* ___0_arg0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, const RuntimeMethod* method) ;

// System.Void Android.BLE.Commands.ConnectToDevice/ConnectionChange::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionChange__ctor_m6C8E112F70B4ABFB5E97EA23A0ED349FD047249E (ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Android.BLE.Commands.ConnectToDevice::.ctor(System.String,Android.BLE.Commands.ConnectToDevice/ConnectionChange,Android.BLE.Commands.ConnectToDevice/ConnectionChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectToDevice__ctor_m75A59A2EDE7D5D5EA5125F429B29CF576A6B812C (ConnectToDevice_tED9F7E213942CA91D6807368C9ECD9ACAC94D8E8* __this, String_t* ___0_deviceAddress, ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* ___1_onConnected, ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* ___2_onDisconnected, const RuntimeMethod* method) ;
// Android.BLE.BleManager Android.BLE.BleManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84* BleManager_get_Instance_mEBFC34A1CC0827A6638F30AC08225507A22BE3CE (const RuntimeMethod* method) ;
// System.Void Android.BLE.BleManager::QueueCommand(Android.BLE.Commands.BleCommand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleManager_QueueCommand_mFF85DEB48166C00BD817E77B3C1234B59F74BAEB (BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84* __this, BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* ___0_command, const RuntimeMethod* method) ;
// System.Void Android.BLE.Commands.ConnectToDevice::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectToDevice_Disconnect_m8ED6AC182BB2D95B8F9030FC781D583CF9C5622D (ConnectToDevice_tED9F7E213942CA91D6807368C9ECD9ACAC94D8E8* __this, const RuntimeMethod* method) ;
// System.Void Android.BLE.Commands.ReadFromCharacteristic/ReadCharacteristicValueReceived::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadCharacteristicValueReceived__ctor_m59E7CF821E56AA3C4F5F85DDE5D3E15CA1C5BEFC (ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Android.BLE.Commands.ReadFromCharacteristic::.ctor(System.String,System.String,System.String,Android.BLE.Commands.ReadFromCharacteristic/ReadCharacteristicValueReceived,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadFromCharacteristic__ctor_m6F5F9E63D232DE56C2A4392AB41E0B71FBB7E05C (ReadFromCharacteristic_t6A2EA55768B2FE5E72EA4985B428B1548282926B* __this, String_t* ___0_deviceAddress, String_t* ___1_serviceAddress, String_t* ___2_characteristicAddress, ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB* ___3_valueReceived, bool ___4_customGatt, const RuntimeMethod* method) ;
// System.Void DeviceButton::SubscribeToExampleService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceButton_SubscribeToExampleService_m3BEC1F28E4DABACBEA1F2DA837BBA658DA86EEDE (DeviceButton_t27410B4D1DDFFB235BB10D145B3815FB10A504CF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void DeviceButton/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD1EB54981BA7BCA5421F9AC12D98D761339157EA (U3CU3Ec_t4FD0BD9380CBFB64E013BA8A08AB769FC4B8A0CA* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.String,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m12237C67318618EE9FB04CCF4C4EFAC833EDC79E (Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void Android.BLE.Commands.DiscoverDevices::.ctor(System.Action`2<System.String,System.String>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiscoverDevices__ctor_mA88EEFB6C8B5330B28F0753A61F1B64819BF915A (DiscoverDevices_t992CF20136BFBF9A23C6B4CAFCD517723D440A22* __this, Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* ___0_onDeviceDiscovered, int32_t ___1_discoverTime, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___0_original, ___1_parent, method);
}
// T UnityEngine.GameObject::GetComponent<DeviceButton>()
inline DeviceButton_t27410B4D1DDFFB235BB10D145B3815FB10A504CF* GameObject_GetComponent_TisDeviceButton_t27410B4D1DDFFB235BB10D145B3815FB10A504CF_mC4EF5939C55997768A2F1E65E54E257A3A92F651 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  DeviceButton_t27410B4D1DDFFB235BB10D145B3815FB10A504CF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void DeviceButton::Show(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceButton_Show_m63E76E84F4DB147B1148EE939453B97FF3B19F08 (DeviceButton_t27410B4D1DDFFB235BB10D145B3815FB10A504CF* __this, String_t* ___0_uuid, String_t* ___1_name, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<Android.BLE.BleObject>(System.String)
inline BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* JsonUtility_FromJson_TisBleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911_m25E12CB0520B6980DF7E9AE563F733A8F0B0FFE8 (String_t* ___0_json, const RuntimeMethod* method)
{
	return ((  BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___0_json, method);
}
// System.Boolean Android.BLE.BleObject::get_HasError()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BleObject_get_HasError_m12D6B9476A5CFA55A3C280C0F050BBEED5E2B28A_inline (BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* __this, const RuntimeMethod* method) ;
// System.String Android.BLE.BleObject::get_ErrorMessage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BleObject_get_ErrorMessage_mACBB22E99872A2406843AA444C062CDA311F3971_inline (BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* __this, const RuntimeMethod* method) ;
// System.Void Android.BLE.BleAdapter/ErrorReceived::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorReceived_Invoke_m108A59C1F114BB050F71FFF0662BD49BB140A308_inline (ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* __this, String_t* ___0_errorMessage, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::Invoke(T0)
inline void UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15 (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, String_t* ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, String_t*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___0_arg0, method);
}
// System.Void Android.BLE.BleAdapter/MessageReceived::Invoke(Android.BLE.BleObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageReceived_Invoke_m04A49A2863BF6E00FDDD9E55A70C24AE311DFB3E_inline (MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* __this, BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<Android.BLE.BleObject>::Invoke(T0)
inline void UnityEvent_1_Invoke_m84217E7DB51E3657249844A3FBDD75BFA22A0CBE (UnityEvent_1_tABD8E44E9F09781411B7A0CE955319044744C023* __this, BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tABD8E44E9F09781411B7A0CE955319044744C023*, BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___0_arg0, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void Android.BLE.BleManager::CreateBleManagerObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleManager_CreateBleManagerObject_m7AB9D31A9B3DF947D159EC61AADF042EB373F915 (const RuntimeMethod* method) ;
// System.Void Android.BLE.BleManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleManager_Initialize_m75F610C1E8467171F3C5F7AC6C4C1BCB77B921A1 (BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84* __this, const RuntimeMethod* method) ;
// System.Void Android.BLE.BleAdapter/MessageReceived::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceived__ctor_mCAA9C40A1DF0E71152C50968DDCC7BFE11026A5C (MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Android.BLE.BleAdapter::add_OnMessageReceived(Android.BLE.BleAdapter/MessageReceived)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleAdapter_add_OnMessageReceived_m3A1E09E8615A14724ED3E07163660FC1A38D3B63 (BleAdapter_t6A52C7C4FA321E8F1A87668092229A4AF7A1450A* __this, MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* ___0_value, const RuntimeMethod* method) ;
// System.Void Android.BLE.BleAdapter/ErrorReceived::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReceived__ctor_m643484E4B3FA92C729C86FCCB26132B11C793EB4 (ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Android.BLE.BleAdapter::add_OnErrorReceived(Android.BLE.BleAdapter/ErrorReceived)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleAdapter_add_OnErrorReceived_m5C163E7706E45DC39CB8E57094294527785388E2 (BleAdapter_t6A52C7C4FA321E8F1A87668092229A4AF7A1450A* __this, ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* ___0_value, const RuntimeMethod* method) ;
// System.Single Android.BLE.Commands.BleCommand::get_Timeout()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BleCommand_get_Timeout_mCB884E9E6F9988E4126592F4DD68E675258E67B7_inline (BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Void Android.BLE.BleManager::CheckForLog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleManager_CheckForLog_m5EEF5D5B1B3B4AFA6FAF9A048AFD0FF7E9AD8FF5 (String_t* ___0_logMessage, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<Android.BLE.Commands.BleCommand>::get_Count()
inline int32_t Queue_1_get_Count_m5A46263399026134FEB685F07DD0A6E90822FB3B_inline (Queue_1_t02154256BFD05CB5E7EA0D7EA47E03E6FB9A0D5C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t02154256BFD05CB5E7EA0D7EA47E03E6FB9A0D5C*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<Android.BLE.Commands.BleCommand>::Dequeue()
inline BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* Queue_1_Dequeue_m596C055F05EF8F992F802CA87CF3CEF44435F12C (Queue_1_t02154256BFD05CB5E7EA0D7EA47E03E6FB9A0D5C* __this, const RuntimeMethod* method)
{
	return ((  BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* (*) (Queue_1_t02154256BFD05CB5E7EA0D7EA47E03E6FB9A0D5C*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Android.BLE.BleAdapter>()
inline BleAdapter_t6A52C7C4FA321E8F1A87668092229A4AF7A1450A* Object_FindObjectOfType_TisBleAdapter_t6A52C7C4FA321E8F1A87668092229A4AF7A1450A_m21CC2A999F37917A0F1958137F2B7C6C34866768 (const RuntimeMethod* method)
{
	return ((  BleAdapter_t6A52C7C4FA321E8F1A87668092229A4AF7A1450A* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_p, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Android.BLE.BleAdapter>()
inline BleAdapter_t6A52C7C4FA321E8F1A87668092229A4AF7A1450A* GameObject_AddComponent_TisBleAdapter_t6A52C7C4FA321E8F1A87668092229A4AF7A1450A_m178CC75F1AC5FBFF525C3EE9F6738A991FF82932 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BleAdapter_t6A52C7C4FA321E8F1A87668092229A4AF7A1450A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___0_methodName, ___1_args, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Android.BLE.Commands.BleCommand>::GetEnumerator()
inline Enumerator_tE606E6579843CDEB2AA04952EE6A950977B6005C List_1_GetEnumerator_m890246091900B6B4F01BD87D23D3B6DE0496A7F5 (List_1_tEA71E12AD290A9C47644FD8BE8145D2CAA4A2EB5* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE606E6579843CDEB2AA04952EE6A950977B6005C (*) (List_1_tEA71E12AD290A9C47644FD8BE8145D2CAA4A2EB5*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Android.BLE.Commands.BleCommand>::Dispose()
inline void Enumerator_Dispose_m81B828D6C267DD9924B7505904E291C93A41A018 (Enumerator_tE606E6579843CDEB2AA04952EE6A950977B6005C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE606E6579843CDEB2AA04952EE6A950977B6005C*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Android.BLE.Commands.BleCommand>::get_Current()
inline BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* Enumerator_get_Current_m7BB0EF638AD46EB3C6292F6285FB6678028D3C53_inline (Enumerator_tE606E6579843CDEB2AA04952EE6A950977B6005C* __this, const RuntimeMethod* method)
{
	return ((  BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* (*) (Enumerator_tE606E6579843CDEB2AA04952EE6A950977B6005C*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Android.BLE.Commands.BleCommand>::MoveNext()
inline bool Enumerator_MoveNext_m0D02B8DDCAD7D7BD7B199FC207489FD294BC333F (Enumerator_tE606E6579843CDEB2AA04952EE6A950977B6005C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE606E6579843CDEB2AA04952EE6A950977B6005C*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void UnityEngine.AndroidJavaObject::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.String UnityEngine.JsonUtility::ToJson(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m53A1FEE0D388CF3A629E093C04B5E1A6D5463B53 (RuntimeObject* ___0_obj, bool ___1_prettyPrint, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Android.BLE.Commands.BleCommand>::get_Item(System.Int32)
inline BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* List_1_get_Item_m4236E4F0C18936107363E1A84F2420DD8768D141 (List_1_tEA71E12AD290A9C47644FD8BE8145D2CAA4A2EB5* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* (*) (List_1_tEA71E12AD290A9C47644FD8BE8145D2CAA4A2EB5*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<Android.BLE.Commands.BleCommand>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m286D1D4683D912368714BDE2FC174C8574845605 (List_1_tEA71E12AD290A9C47644FD8BE8145D2CAA4A2EB5* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEA71E12AD290A9C47644FD8BE8145D2CAA4A2EB5*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___0_index, method);
}
// System.Int32 System.Collections.Generic.List`1<Android.BLE.Commands.BleCommand>::get_Count()
inline int32_t List_1_get_Count_m04342FA7D9B5FD696206BEFDCBD46155E164BAC1_inline (List_1_tEA71E12AD290A9C47644FD8BE8145D2CAA4A2EB5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tEA71E12AD290A9C47644FD8BE8145D2CAA4A2EB5*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Android.BLE.Commands.BleCommand>::Add(T)
inline void List_1_Add_mB787BAC4BA2A956D398C9EFC01B974BAA13FAD0A_inline (List_1_tEA71E12AD290A9C47644FD8BE8145D2CAA4A2EB5* __this, BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEA71E12AD290A9C47644FD8BE8145D2CAA4A2EB5*, BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.Queue`1<Android.BLE.Commands.BleCommand>::Enqueue(T)
inline void Queue_1_Enqueue_m7E702BCBCCFD61CFA652010F44F32C38C329E7C3 (Queue_1_t02154256BFD05CB5E7EA0D7EA47E03E6FB9A0D5C* __this, BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t02154256BFD05CB5E7EA0D7EA47E03E6FB9A0D5C*, BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___0_item, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void Android.BLE.BleManager::AndroidLog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleManager_AndroidLog_mF5C77D636D9AB788C9CD854938768D2F9A65258D (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Android.BLE.BleManager>()
inline BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84* GameObject_AddComponent_TisBleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_m6442682F58A41B4FF2D625CE57E2727D969DB228 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Android.BLE.BleManager::DeInitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleManager_DeInitialize_mD7F4884274A249DB3780BB6EBC710BF15B622627 (BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<Android.BLE.Commands.BleCommand>::.ctor()
inline void Queue_1__ctor_m60F547161F02EFD88CBB53A524F1A3795A48A4A2 (Queue_1_t02154256BFD05CB5E7EA0D7EA47E03E6FB9A0D5C* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t02154256BFD05CB5E7EA0D7EA47E03E6FB9A0D5C*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Android.BLE.Commands.BleCommand>::.ctor()
inline void List_1__ctor_m514A29456D474008879812E4C05CCA60FF3FFC66 (List_1_tEA71E12AD290A9C47644FD8BE8145D2CAA4A2EB5* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEA71E12AD290A9C47644FD8BE8145D2CAA4A2EB5*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Byte[] System.Convert::FromBase64String(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<Android.BLE.BleObject>::.ctor()
inline void UnityEvent_1__ctor_m645728FDB306DCB487327F0187C6510336682DD5 (UnityEvent_1_tABD8E44E9F09781411B7A0CE955319044744C023* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tABD8E44E9F09781411B7A0CE955319044744C023*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::.ctor()
inline void UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6 (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void Android.BLE.Commands.BleCommand::.ctor(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleCommand__ctor_mD7173BA8F5E4906439AB1B96AFA89425198D5FE6 (BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* __this, bool ___0_runParallel, bool ___1_runContiniously, const RuntimeMethod* method) ;
// System.Void Android.BLE.BleManager::SendCommand(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleManager_SendCommand_m6B488A06103C2FA52D5DF05578F1B6D50BB1DE6C (String_t* ___0_command, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_parameters, const RuntimeMethod* method) ;
// System.String Android.BLE.BleObject::get_Device()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BleObject_get_Device_m7E208B87BAB1C81C1D1782A3151EFE518E66568D_inline (BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.String Android.BLE.BleObject::get_Command()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BleObject_get_Command_m23B80AA6C0E85B8215130069AE67194E5F26E494_inline (BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void Android.BLE.Commands.ConnectToDevice/ConnectionChange::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectionChange_Invoke_mDF5F37867F22655AB5E9129A55715F47C4E36490_inline (ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* __this, String_t* ___0_deviceAddress, const RuntimeMethod* method) ;
// System.String Android.BLE.BleObject::get_Service()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BleObject_get_Service_m857919014988B7444908F4191921ECA8C0418D3D_inline (BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* __this, const RuntimeMethod* method) ;
// System.Void Android.BLE.Commands.ConnectToDevice/ServiceDiscovered::Invoke(System.String,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ServiceDiscovered_Invoke_m3B03816311CAC85CEDCC15AD26152FC5B2A5515F_inline (ServiceDiscovered_t8E900906F2BF530C0A835688CF30166E681EFE42* __this, String_t* ___0_deviceAddress, String_t* ___1_serviceAddress, const RuntimeMethod* method) ;
// System.String Android.BLE.BleObject::get_Characteristic()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BleObject_get_Characteristic_m59461AA54359D04B9AED4A5748B8837EE2A02C3D_inline (BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* __this, const RuntimeMethod* method) ;
// System.Void Android.BLE.Commands.ConnectToDevice/CharacteristicDiscovered::Invoke(System.String,System.String,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CharacteristicDiscovered_Invoke_mE43B22D1F16F2051CF235A75C8DFF42B99DB74D8_inline (CharacteristicDiscovered_t54557FFD6C62C91E37BCC764034BBD605A2F73B5* __this, String_t* ___0_deviceAddress, String_t* ___1_serviceAddress, String_t* ___2_characteristicAddress, const RuntimeMethod* method) ;
// System.Void Android.BLE.Commands.DiscoverDevices/DeviceDiscovered::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceDiscovered__ctor_mDE7006CDECA701C13FA7A9F2A89212138288A606 (DeviceDiscovered_tB6FDC91742237A0A8C1E38B632D244FFBCAE3ACB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.String Android.BLE.BleObject::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BleObject_get_Name_m5A412E454187BB2EB9C0F09EC020FFA0E9F3A346_inline (BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* __this, const RuntimeMethod* method) ;
// System.Void Android.BLE.Commands.DiscoverDevices/DeviceDiscovered::Invoke(System.String,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DeviceDiscovered_Invoke_m79252BF9D7A9D08839E4201A28CC4A449EA61C24_inline (DeviceDiscovered_tB6FDC91742237A0A8C1E38B632D244FFBCAE3ACB* __this, String_t* ___0_deviceAddress, String_t* ___1_deviceName, const RuntimeMethod* method) ;
// System.String Android.BLE.Extension.UuidHelper::Get4BitUuid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UuidHelper_Get4BitUuid_mFCFF78C911164B9C6041F8BAD5378225B50389B1 (String_t* ___0_t, const RuntimeMethod* method) ;
// System.Byte[] Android.BLE.BleObject::GetByteMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BleObject_GetByteMessage_m4E7A5D2A7EB87AB760E0A49BA61C830D42643F30 (BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* __this, const RuntimeMethod* method) ;
// System.Void Android.BLE.Commands.ReadFromCharacteristic/ReadCharacteristicValueReceived::Invoke(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadCharacteristicValueReceived_Invoke_mC909439576FCFC052D83BBB8FA16369C0C700609_inline (ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) ;
// System.Void Android.BLE.Commands.SubscribeToCharacteristic/CharacteristicChanged::Invoke(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CharacteristicChanged_Invoke_m9BB6B20D459F72FC81A5CA68CA0DC9ECCE88885B_inline (CharacteristicChanged_tC47800CCA86CDBC899E85FAEC5370807127BF788* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) ;
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
// System.Void DeviceButton::Show(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceButton_Show_m63E76E84F4DB147B1148EE939453B97FF3B19F08 (DeviceButton_t27410B4D1DDFFB235BB10D145B3815FB10A504CF* __this, String_t* ___0_uuid, String_t* ___1_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15F30E0AC0217F04C47A90E499E8480B94E2CD1B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _deviceButtonText.text = "Connect";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____deviceButtonText_9;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral15F30E0AC0217F04C47A90E499E8480B94E2CD1B);
		// _deviceUuid = uuid;
		String_t* L_1 = ___0_uuid;
		__this->____deviceUuid_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____deviceUuid_4), (void*)L_1);
		// _deviceName = name;
		String_t* L_2 = ___1_name;
		__this->____deviceName_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____deviceName_5), (void*)L_2);
		// _deviceUuidText.text = uuid;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->____deviceUuidText_6;
		String_t* L_4 = ___0_uuid;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_4);
		// _deviceNameText.text = name;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->____deviceNameText_7;
		String_t* L_6 = ___1_name;
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_6);
		// }
		return;
	}
}
// System.Void DeviceButton::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceButton_Connect_m27E7627CAFF591E0A71A5ED2300589FDDE7AB8C0 (DeviceButton_t27410B4D1DDFFB235BB10D145B3815FB10A504CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectToDevice_tED9F7E213942CA91D6807368C9ECD9ACAC94D8E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceButton_OnConnected_mE516723FD7BF08833EB687D8E4B1280C70A67DAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceButton_OnDisconnected_mC3398E301D831693BFB8D767C4F039F2E3E09F7C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_isConnected)
		bool L_0 = __this->____isConnected_12;
		if (L_0)
		{
			goto IL_0042;
		}
	}
	{
		// _connectCommand = new ConnectToDevice(_deviceUuid, OnConnected, OnDisconnected);
		String_t* L_1 = __this->____deviceUuid_4;
		ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* L_2 = (ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC*)il2cpp_codegen_object_new(ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ConnectionChange__ctor_m6C8E112F70B4ABFB5E97EA23A0ED349FD047249E(L_2, __this, (intptr_t)((void*)DeviceButton_OnConnected_mE516723FD7BF08833EB687D8E4B1280C70A67DAB_RuntimeMethod_var), NULL);
		ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* L_3 = (ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC*)il2cpp_codegen_object_new(ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ConnectionChange__ctor_m6C8E112F70B4ABFB5E97EA23A0ED349FD047249E(L_3, __this, (intptr_t)((void*)DeviceButton_OnDisconnected_mC3398E301D831693BFB8D767C4F039F2E3E09F7C_RuntimeMethod_var), NULL);
		ConnectToDevice_tED9F7E213942CA91D6807368C9ECD9ACAC94D8E8* L_4 = (ConnectToDevice_tED9F7E213942CA91D6807368C9ECD9ACAC94D8E8*)il2cpp_codegen_object_new(ConnectToDevice_tED9F7E213942CA91D6807368C9ECD9ACAC94D8E8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ConnectToDevice__ctor_m75A59A2EDE7D5D5EA5125F429B29CF576A6B812C(L_4, L_1, L_2, L_3, NULL);
		__this->____connectCommand_13 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____connectCommand_13), (void*)L_4);
		// BleManager.Instance.QueueCommand(_connectCommand);
		BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84* L_5;
		L_5 = BleManager_get_Instance_mEBFC34A1CC0827A6638F30AC08225507A22BE3CE(NULL);
		ConnectToDevice_tED9F7E213942CA91D6807368C9ECD9ACAC94D8E8* L_6 = __this->____connectCommand_13;
		NullCheck(L_5);
		BleManager_QueueCommand_mFF85DEB48166C00BD817E77B3C1234B59F74BAEB(L_5, L_6, NULL);
		return;
	}

IL_0042:
	{
		// _connectCommand.Disconnect();
		ConnectToDevice_tED9F7E213942CA91D6807368C9ECD9ACAC94D8E8* L_7 = __this->____connectCommand_13;
		NullCheck(L_7);
		ConnectToDevice_Disconnect_m8ED6AC182BB2D95B8F9030FC781D583CF9C5622D(L_7, NULL);
		// }
		return;
	}
}
// System.Void DeviceButton::SubscribeToExampleService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceButton_SubscribeToExampleService_m3BEC1F28E4DABACBEA1F2DA837BBA658DA86EEDE (DeviceButton_t27410B4D1DDFFB235BB10D145B3815FB10A504CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadFromCharacteristic_t6A2EA55768B2FE5E72EA4985B428B1548282926B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSubscribeToExampleServiceU3Eb__13_0_m0527F9B938FC27EC2C2960E3B5B59E055EBB45EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4FD0BD9380CBFB64E013BA8A08AB769FC4B8A0CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79126F38ABF368DA8E84392604E5C211E9C2FA6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0F6B6440CBDB5EFE64E049710348678D7C30EF3);
		s_Il2CppMethodInitialized = true;
	}
	ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	DeviceButton_t27410B4D1DDFFB235BB10D145B3815FB10A504CF* G_B2_4 = NULL;
	ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	DeviceButton_t27410B4D1DDFFB235BB10D145B3815FB10A504CF* G_B1_4 = NULL;
	{
		// _readFromCharacteristic = new ReadFromCharacteristic(_deviceUuid, "180c", "2a56", (byte[] value) =>
		// {
		//     Debug.Log(Encoding.UTF8.GetString(value));
		// });
		String_t* L_0 = __this->____deviceUuid_4;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4FD0BD9380CBFB64E013BA8A08AB769FC4B8A0CA_il2cpp_TypeInfo_var);
		ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB* L_1 = ((U3CU3Ec_t4FD0BD9380CBFB64E013BA8A08AB769FC4B8A0CA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4FD0BD9380CBFB64E013BA8A08AB769FC4B8A0CA_il2cpp_TypeInfo_var))->___U3CU3E9__13_0_1;
		ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = _stringLiteral79126F38ABF368DA8E84392604E5C211E9C2FA6D;
		G_B1_2 = _stringLiteralB0F6B6440CBDB5EFE64E049710348678D7C30EF3;
		G_B1_3 = L_0;
		G_B1_4 = __this;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = _stringLiteral79126F38ABF368DA8E84392604E5C211E9C2FA6D;
			G_B2_2 = _stringLiteralB0F6B6440CBDB5EFE64E049710348678D7C30EF3;
			G_B2_3 = L_0;
			G_B2_4 = __this;
			goto IL_0030;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4FD0BD9380CBFB64E013BA8A08AB769FC4B8A0CA_il2cpp_TypeInfo_var);
		U3CU3Ec_t4FD0BD9380CBFB64E013BA8A08AB769FC4B8A0CA* L_3 = ((U3CU3Ec_t4FD0BD9380CBFB64E013BA8A08AB769FC4B8A0CA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4FD0BD9380CBFB64E013BA8A08AB769FC4B8A0CA_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB* L_4 = (ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB*)il2cpp_codegen_object_new(ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ReadCharacteristicValueReceived__ctor_m59E7CF821E56AA3C4F5F85DDE5D3E15CA1C5BEFC(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CSubscribeToExampleServiceU3Eb__13_0_m0527F9B938FC27EC2C2960E3B5B59E055EBB45EC_RuntimeMethod_var), NULL);
		ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB* L_5 = L_4;
		((U3CU3Ec_t4FD0BD9380CBFB64E013BA8A08AB769FC4B8A0CA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4FD0BD9380CBFB64E013BA8A08AB769FC4B8A0CA_il2cpp_TypeInfo_var))->___U3CU3E9__13_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4FD0BD9380CBFB64E013BA8A08AB769FC4B8A0CA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4FD0BD9380CBFB64E013BA8A08AB769FC4B8A0CA_il2cpp_TypeInfo_var))->___U3CU3E9__13_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
		G_B2_4 = G_B1_4;
	}

IL_0030:
	{
		ReadFromCharacteristic_t6A2EA55768B2FE5E72EA4985B428B1548282926B* L_6 = (ReadFromCharacteristic_t6A2EA55768B2FE5E72EA4985B428B1548282926B*)il2cpp_codegen_object_new(ReadFromCharacteristic_t6A2EA55768B2FE5E72EA4985B428B1548282926B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ReadFromCharacteristic__ctor_m6F5F9E63D232DE56C2A4392AB41E0B71FBB7E05C(L_6, G_B2_3, G_B2_2, G_B2_1, G_B2_0, (bool)0, NULL);
		NullCheck(G_B2_4);
		G_B2_4->____readFromCharacteristic_14 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_4->____readFromCharacteristic_14), (void*)L_6);
		// BleManager.Instance.QueueCommand(_readFromCharacteristic);
		BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84* L_7;
		L_7 = BleManager_get_Instance_mEBFC34A1CC0827A6638F30AC08225507A22BE3CE(NULL);
		ReadFromCharacteristic_t6A2EA55768B2FE5E72EA4985B428B1548282926B* L_8 = __this->____readFromCharacteristic_14;
		NullCheck(L_7);
		BleManager_QueueCommand_mFF85DEB48166C00BD817E77B3C1234B59F74BAEB(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void DeviceButton::OnConnected(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceButton_OnConnected_mE516723FD7BF08833EB687D8E4B1280C70A67DAB (DeviceButton_t27410B4D1DDFFB235BB10D145B3815FB10A504CF* __this, String_t* ___0_deviceUuid, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8611EF5A0C5591E334B1A7C6ADAE2D5E4417747A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _previousColor = _deviceButtonImage.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->____deviceButtonImage_8;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_0);
		__this->____previousColor_11 = L_1;
		// _deviceButtonImage.color = _onConnectedColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->____deviceButtonImage_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->____onConnectedColor_10;
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		// _isConnected = true;
		__this->____isConnected_12 = (bool)1;
		// _deviceButtonText.text = "Disconnect";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->____deviceButtonText_9;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteral8611EF5A0C5591E334B1A7C6ADAE2D5E4417747A);
		// SubscribeToExampleService();
		DeviceButton_SubscribeToExampleService_m3BEC1F28E4DABACBEA1F2DA837BBA658DA86EEDE(__this, NULL);
		// }
		return;
	}
}
// System.Void DeviceButton::OnDisconnected(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceButton_OnDisconnected_mC3398E301D831693BFB8D767C4F039F2E3E09F7C (DeviceButton_t27410B4D1DDFFB235BB10D145B3815FB10A504CF* __this, String_t* ___0_deviceUuid, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15F30E0AC0217F04C47A90E499E8480B94E2CD1B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _deviceButtonImage.color = _previousColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->____deviceButtonImage_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->____previousColor_11;
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// _isConnected = false;
		__this->____isConnected_12 = (bool)0;
		// _deviceButtonText.text = "Connect";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->____deviceButtonText_9;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteral15F30E0AC0217F04C47A90E499E8480B94E2CD1B);
		// }
		return;
	}
}
// System.Void DeviceButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceButton__ctor_m29469006CFD9931336539FFDEF68C9472EC3AC66 (DeviceButton_t27410B4D1DDFFB235BB10D145B3815FB10A504CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string _deviceUuid = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->____deviceUuid_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____deviceUuid_4), (void*)L_0);
		// private string _deviceName = string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->____deviceName_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____deviceName_5), (void*)L_1);
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
// System.Void DeviceButton/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m797DC92B42A2A29CA44BC0A3E5142C1CEC93EBB5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4FD0BD9380CBFB64E013BA8A08AB769FC4B8A0CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4FD0BD9380CBFB64E013BA8A08AB769FC4B8A0CA* L_0 = (U3CU3Ec_t4FD0BD9380CBFB64E013BA8A08AB769FC4B8A0CA*)il2cpp_codegen_object_new(U3CU3Ec_t4FD0BD9380CBFB64E013BA8A08AB769FC4B8A0CA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mD1EB54981BA7BCA5421F9AC12D98D761339157EA(L_0, NULL);
		((U3CU3Ec_t4FD0BD9380CBFB64E013BA8A08AB769FC4B8A0CA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4FD0BD9380CBFB64E013BA8A08AB769FC4B8A0CA_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4FD0BD9380CBFB64E013BA8A08AB769FC4B8A0CA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4FD0BD9380CBFB64E013BA8A08AB769FC4B8A0CA_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void DeviceButton/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD1EB54981BA7BCA5421F9AC12D98D761339157EA (U3CU3Ec_t4FD0BD9380CBFB64E013BA8A08AB769FC4B8A0CA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void DeviceButton/<>c::<SubscribeToExampleService>b__13_0(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CSubscribeToExampleServiceU3Eb__13_0_m0527F9B938FC27EC2C2960E3B5B59E055EBB45EC (U3CU3Ec_t4FD0BD9380CBFB64E013BA8A08AB769FC4B8A0CA* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(Encoding.UTF8.GetString(value));
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_value;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(33 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_1);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// });
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
// System.Void ExampleBleInteractor::ScanForDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleBleInteractor_ScanForDevices_mFD9E7C541ABF5B3F0ACA0527E2515682D42C33B8 (ExampleBleInteractor_t4365949A13816F67EA4B0DAF560F3B331322D375* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiscoverDevices_t992CF20136BFBF9A23C6B4CAFCD517723D440A22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExampleBleInteractor_OnDeviceFound_mB31FEB99CF344B483FBA8EF65ADE3EDA272C17EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_isScanning)
		bool L_0 = __this->____isScanning_8;
		if (L_0)
		{
			goto IL_0036;
		}
	}
	{
		// _isScanning = true;
		__this->____isScanning_8 = (bool)1;
		// BleManager.Instance.QueueCommand(new DiscoverDevices(OnDeviceFound, _scanTime * 1000));
		BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84* L_1;
		L_1 = BleManager_get_Instance_mEBFC34A1CC0827A6638F30AC08225507A22BE3CE(NULL);
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_2 = (Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D*)il2cpp_codegen_object_new(Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_2__ctor_m12237C67318618EE9FB04CCF4C4EFAC833EDC79E(L_2, __this, (intptr_t)((void*)ExampleBleInteractor_OnDeviceFound_mB31FEB99CF344B483FBA8EF65ADE3EDA272C17EA_RuntimeMethod_var), NULL);
		int32_t L_3 = __this->____scanTime_6;
		DiscoverDevices_t992CF20136BFBF9A23C6B4CAFCD517723D440A22* L_4 = (DiscoverDevices_t992CF20136BFBF9A23C6B4CAFCD517723D440A22*)il2cpp_codegen_object_new(DiscoverDevices_t992CF20136BFBF9A23C6B4CAFCD517723D440A22_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		DiscoverDevices__ctor_mA88EEFB6C8B5330B28F0753A61F1B64819BF915A(L_4, L_2, ((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)1000))), NULL);
		NullCheck(L_1);
		BleManager_QueueCommand_mFF85DEB48166C00BD817E77B3C1234B59F74BAEB(L_1, L_4, NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void ExampleBleInteractor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleBleInteractor_Update_m1C019ADADDF7F413AB834BC2E400587A50BD5A24 (ExampleBleInteractor_t4365949A13816F67EA4B0DAF560F3B331322D375* __this, const RuntimeMethod* method) 
{
	{
		// if(_isScanning)
		bool L_0 = __this->____isScanning_8;
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		// _scanTimer += Time.deltaTime;
		float L_1 = __this->____scanTimer_7;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____scanTimer_7 = ((float)il2cpp_codegen_add(L_1, L_2));
		// if(_scanTimer > _scanTime)
		float L_3 = __this->____scanTimer_7;
		int32_t L_4 = __this->____scanTime_6;
		if ((!(((float)L_3) > ((float)((float)L_4)))))
		{
			goto IL_003b;
		}
	}
	{
		// _scanTimer = 0f;
		__this->____scanTimer_7 = (0.0f);
		// _isScanning = false;
		__this->____isScanning_8 = (bool)0;
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void ExampleBleInteractor::OnDeviceFound(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleBleInteractor_OnDeviceFound_mB31FEB99CF344B483FBA8EF65ADE3EDA272C17EA (ExampleBleInteractor_t4365949A13816F67EA4B0DAF560F3B331322D375* __this, String_t* ___0_name, String_t* ___1_device, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDeviceButton_t27410B4D1DDFFB235BB10D145B3815FB10A504CF_mC4EF5939C55997768A2F1E65E54E257A3A92F651_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DeviceButton button = Instantiate(_deviceButton, _deviceList).GetComponent<DeviceButton>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____deviceButton_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->____deviceList_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_0, L_1, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		NullCheck(L_2);
		DeviceButton_t27410B4D1DDFFB235BB10D145B3815FB10A504CF* L_3;
		L_3 = GameObject_GetComponent_TisDeviceButton_t27410B4D1DDFFB235BB10D145B3815FB10A504CF_mC4EF5939C55997768A2F1E65E54E257A3A92F651(L_2, GameObject_GetComponent_TisDeviceButton_t27410B4D1DDFFB235BB10D145B3815FB10A504CF_mC4EF5939C55997768A2F1E65E54E257A3A92F651_RuntimeMethod_var);
		// button.Show(name, device);
		String_t* L_4 = ___0_name;
		String_t* L_5 = ___1_device;
		NullCheck(L_3);
		DeviceButton_Show_m63E76E84F4DB147B1148EE939453B97FF3B19F08(L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void ExampleBleInteractor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleBleInteractor__ctor_mD0D80C26C8F218DC868941A4053F821251CD85EA (ExampleBleInteractor_t4365949A13816F67EA4B0DAF560F3B331322D375* __this, const RuntimeMethod* method) 
{
	{
		// private int _scanTime = 10;
		__this->____scanTime_6 = ((int32_t)10);
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
// System.Void Android.BLE.BleAdapter::add_OnMessageReceived(Android.BLE.BleAdapter/MessageReceived)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleAdapter_add_OnMessageReceived_m3A1E09E8615A14724ED3E07163660FC1A38D3B63 (BleAdapter_t6A52C7C4FA321E8F1A87668092229A4AF7A1450A* __this, MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* V_0 = NULL;
	MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* V_1 = NULL;
	MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* V_2 = NULL;
	{
		MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* L_0 = __this->___OnMessageReceived_4;
		V_0 = L_0;
	}

IL_0007:
	{
		MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* L_1 = V_0;
		V_1 = L_1;
		MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* L_2 = V_1;
		MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE*)CastclassSealed((RuntimeObject*)L_4, MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE_il2cpp_TypeInfo_var));
		MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE** L_5 = (&__this->___OnMessageReceived_4);
		MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* L_6 = V_2;
		MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* L_7 = V_1;
		MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE*>(L_5, L_6, L_7);
		V_0 = L_8;
		MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* L_9 = V_0;
		MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE*)L_9) == ((RuntimeObject*)(MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Android.BLE.BleAdapter::remove_OnMessageReceived(Android.BLE.BleAdapter/MessageReceived)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleAdapter_remove_OnMessageReceived_mF3FBB65DA390E866FF4EC89D35E50BFEB3FCDA92 (BleAdapter_t6A52C7C4FA321E8F1A87668092229A4AF7A1450A* __this, MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* V_0 = NULL;
	MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* V_1 = NULL;
	MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* V_2 = NULL;
	{
		MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* L_0 = __this->___OnMessageReceived_4;
		V_0 = L_0;
	}

IL_0007:
	{
		MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* L_1 = V_0;
		V_1 = L_1;
		MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* L_2 = V_1;
		MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE*)CastclassSealed((RuntimeObject*)L_4, MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE_il2cpp_TypeInfo_var));
		MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE** L_5 = (&__this->___OnMessageReceived_4);
		MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* L_6 = V_2;
		MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* L_7 = V_1;
		MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE*>(L_5, L_6, L_7);
		V_0 = L_8;
		MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* L_9 = V_0;
		MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE*)L_9) == ((RuntimeObject*)(MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Android.BLE.BleAdapter::add_OnErrorReceived(Android.BLE.BleAdapter/ErrorReceived)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleAdapter_add_OnErrorReceived_m5C163E7706E45DC39CB8E57094294527785388E2 (BleAdapter_t6A52C7C4FA321E8F1A87668092229A4AF7A1450A* __this, ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* V_0 = NULL;
	ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* V_1 = NULL;
	ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* V_2 = NULL;
	{
		ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* L_0 = __this->___OnErrorReceived_5;
		V_0 = L_0;
	}

IL_0007:
	{
		ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* L_1 = V_0;
		V_1 = L_1;
		ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* L_2 = V_1;
		ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276*)CastclassSealed((RuntimeObject*)L_4, ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276_il2cpp_TypeInfo_var));
		ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276** L_5 = (&__this->___OnErrorReceived_5);
		ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* L_6 = V_2;
		ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* L_7 = V_1;
		ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* L_8;
		L_8 = InterlockedCompareExchangeImpl<ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276*>(L_5, L_6, L_7);
		V_0 = L_8;
		ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* L_9 = V_0;
		ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* L_10 = V_1;
		if ((!(((RuntimeObject*)(ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276*)L_9) == ((RuntimeObject*)(ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Android.BLE.BleAdapter::remove_OnErrorReceived(Android.BLE.BleAdapter/ErrorReceived)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleAdapter_remove_OnErrorReceived_m76487A2B0DCB56B25D37595B044111D86F428FBD (BleAdapter_t6A52C7C4FA321E8F1A87668092229A4AF7A1450A* __this, ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* V_0 = NULL;
	ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* V_1 = NULL;
	ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* V_2 = NULL;
	{
		ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* L_0 = __this->___OnErrorReceived_5;
		V_0 = L_0;
	}

IL_0007:
	{
		ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* L_1 = V_0;
		V_1 = L_1;
		ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* L_2 = V_1;
		ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276*)CastclassSealed((RuntimeObject*)L_4, ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276_il2cpp_TypeInfo_var));
		ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276** L_5 = (&__this->___OnErrorReceived_5);
		ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* L_6 = V_2;
		ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* L_7 = V_1;
		ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* L_8;
		L_8 = InterlockedCompareExchangeImpl<ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276*>(L_5, L_6, L_7);
		V_0 = L_8;
		ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* L_9 = V_0;
		ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* L_10 = V_1;
		if ((!(((RuntimeObject*)(ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276*)L_9) == ((RuntimeObject*)(ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Android.BLE.BleAdapter::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleAdapter_Awake_mE173E4CF5C905F9F09C23930C9327A50CA1C4D55 (BleAdapter_t6A52C7C4FA321E8F1A87668092229A4AF7A1450A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9511742FD69A2C384F80C12845F58A7857429DD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void Awake() => gameObject.name = nameof(BleAdapter);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_0, _stringLiteralF9511742FD69A2C384F80C12845F58A7857429DD, NULL);
		return;
	}
}
// System.Void Android.BLE.BleAdapter::OnBleMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleAdapter_OnBleMessage_m51B1ABAFBE8EE36BBE245E841C7C569CA312CF7C (BleAdapter_t6A52C7C4FA321E8F1A87668092229A4AF7A1450A* __this, String_t* ___0_jsonMessage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisBleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911_m25E12CB0520B6980DF7E9AE563F733A8F0B0FFE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m84217E7DB51E3657249844A3FBDD75BFA22A0CBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* V_0 = NULL;
	ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* G_B3_0 = NULL;
	ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* G_B2_0 = NULL;
	BleErrorReceived_t7EFFB529E7A8AC9F106F230ACCAB1D127D855A34* G_B6_0 = NULL;
	BleErrorReceived_t7EFFB529E7A8AC9F106F230ACCAB1D127D855A34* G_B5_0 = NULL;
	MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* G_B9_0 = NULL;
	MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* G_B8_0 = NULL;
	BleMessageReceived_t9D40718B6EC1F48A29F437192E38C92EA38CDF8D* G_B12_0 = NULL;
	BleMessageReceived_t9D40718B6EC1F48A29F437192E38C92EA38CDF8D* G_B11_0 = NULL;
	{
		// BleObject obj = JsonUtility.FromJson<BleObject>(jsonMessage);
		String_t* L_0 = ___0_jsonMessage;
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_1;
		L_1 = JsonUtility_FromJson_TisBleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911_m25E12CB0520B6980DF7E9AE563F733A8F0B0FFE8(L_0, JsonUtility_FromJson_TisBleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911_m25E12CB0520B6980DF7E9AE563F733A8F0B0FFE8_RuntimeMethod_var);
		V_0 = L_1;
		// if (obj.HasError)
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = BleObject_get_HasError_m12D6B9476A5CFA55A3C280C0F050BBEED5E2B28A_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		// OnErrorReceived?.Invoke(obj.ErrorMessage);
		ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* L_4 = __this->___OnErrorReceived_5;
		ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* L_5 = L_4;
		G_B2_0 = L_5;
		if (L_5)
		{
			G_B3_0 = L_5;
			goto IL_001b;
		}
	}
	{
		goto IL_0026;
	}

IL_001b:
	{
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = BleObject_get_ErrorMessage_mACBB22E99872A2406843AA444C062CDA311F3971_inline(L_6, NULL);
		NullCheck(G_B3_0);
		ErrorReceived_Invoke_m108A59C1F114BB050F71FFF0662BD49BB140A308_inline(G_B3_0, L_7, NULL);
	}

IL_0026:
	{
		// UnityOnErrorReceived?.Invoke(obj.ErrorMessage);
		BleErrorReceived_t7EFFB529E7A8AC9F106F230ACCAB1D127D855A34* L_8 = __this->___UnityOnErrorReceived_7;
		BleErrorReceived_t7EFFB529E7A8AC9F106F230ACCAB1D127D855A34* L_9 = L_8;
		G_B5_0 = L_9;
		if (L_9)
		{
			G_B6_0 = L_9;
			goto IL_0031;
		}
	}
	{
		return;
	}

IL_0031:
	{
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = BleObject_get_ErrorMessage_mACBB22E99872A2406843AA444C062CDA311F3971_inline(L_10, NULL);
		NullCheck(G_B6_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(G_B6_0, L_11, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		return;
	}

IL_003d:
	{
		// OnMessageReceived?.Invoke(obj);
		MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* L_12 = __this->___OnMessageReceived_4;
		MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* L_13 = L_12;
		G_B8_0 = L_13;
		if (L_13)
		{
			G_B9_0 = L_13;
			goto IL_0049;
		}
	}
	{
		goto IL_004f;
	}

IL_0049:
	{
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_14 = V_0;
		NullCheck(G_B9_0);
		MessageReceived_Invoke_m04A49A2863BF6E00FDDD9E55A70C24AE311DFB3E_inline(G_B9_0, L_14, NULL);
	}

IL_004f:
	{
		// UnityOnMessageReceived?.Invoke(obj);
		BleMessageReceived_t9D40718B6EC1F48A29F437192E38C92EA38CDF8D* L_15 = __this->___UnityOnMessageReceived_6;
		BleMessageReceived_t9D40718B6EC1F48A29F437192E38C92EA38CDF8D* L_16 = L_15;
		G_B11_0 = L_16;
		if (L_16)
		{
			G_B12_0 = L_16;
			goto IL_005a;
		}
	}
	{
		return;
	}

IL_005a:
	{
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_17 = V_0;
		NullCheck(G_B12_0);
		UnityEvent_1_Invoke_m84217E7DB51E3657249844A3FBDD75BFA22A0CBE(G_B12_0, L_17, UnityEvent_1_Invoke_m84217E7DB51E3657249844A3FBDD75BFA22A0CBE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Android.BLE.BleAdapter::LogMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleAdapter_LogMessage_m4526540656B49AEF84D51B0C8262E52B5402F086 (BleAdapter_t6A52C7C4FA321E8F1A87668092229A4AF7A1450A* __this, String_t* ___0_log, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void LogMessage(string log) => Debug.Log(log);
		String_t* L_0 = ___0_log;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_0, NULL);
		return;
	}
}
// System.Void Android.BLE.BleAdapter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleAdapter__ctor_m0BB884273CB7B3A5C846C929B69ACB98C0715358 (BleAdapter_t6A52C7C4FA321E8F1A87668092229A4AF7A1450A* __this, const RuntimeMethod* method) 
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
void MessageReceived_Invoke_m04A49A2863BF6E00FDDD9E55A70C24AE311DFB3E_Multicast(MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* __this, BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* ___0_obj, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* currentDelegate = reinterpret_cast<MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void MessageReceived_Invoke_m04A49A2863BF6E00FDDD9E55A70C24AE311DFB3E_OpenInst(MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* __this, BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* ___0_obj, const RuntimeMethod* method)
{
	NullCheck(___0_obj);
	typedef void (*FunctionPointerType) (BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_obj, method);
}
void MessageReceived_Invoke_m04A49A2863BF6E00FDDD9E55A70C24AE311DFB3E_OpenStatic(MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* __this, BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* ___0_obj, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_obj, method);
}
void MessageReceived_Invoke_m04A49A2863BF6E00FDDD9E55A70C24AE311DFB3E_OpenStaticInvoker(MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* __this, BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* ___0_obj, const RuntimeMethod* method)
{
	InvokerActionInvoker1< BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_obj);
}
void MessageReceived_Invoke_m04A49A2863BF6E00FDDD9E55A70C24AE311DFB3E_ClosedStaticInvoker(MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* __this, BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* ___0_obj, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_obj);
}
void MessageReceived_Invoke_m04A49A2863BF6E00FDDD9E55A70C24AE311DFB3E_OpenVirtual(MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* __this, BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* ___0_obj, const RuntimeMethod* method)
{
	NullCheck(___0_obj);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_obj);
}
void MessageReceived_Invoke_m04A49A2863BF6E00FDDD9E55A70C24AE311DFB3E_OpenInterface(MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* __this, BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* ___0_obj, const RuntimeMethod* method)
{
	NullCheck(___0_obj);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_obj);
}
void MessageReceived_Invoke_m04A49A2863BF6E00FDDD9E55A70C24AE311DFB3E_OpenGenericVirtual(MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* __this, BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* ___0_obj, const RuntimeMethod* method)
{
	NullCheck(___0_obj);
	GenericVirtualActionInvoker0::Invoke(method, ___0_obj);
}
void MessageReceived_Invoke_m04A49A2863BF6E00FDDD9E55A70C24AE311DFB3E_OpenGenericInterface(MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* __this, BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* ___0_obj, const RuntimeMethod* method)
{
	NullCheck(___0_obj);
	GenericInterfaceActionInvoker0::Invoke(method, ___0_obj);
}
// System.Void Android.BLE.BleAdapter/MessageReceived::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceived__ctor_mCAA9C40A1DF0E71152C50968DDCC7BFE11026A5C (MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MessageReceived_Invoke_m04A49A2863BF6E00FDDD9E55A70C24AE311DFB3E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MessageReceived_Invoke_m04A49A2863BF6E00FDDD9E55A70C24AE311DFB3E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MessageReceived_Invoke_m04A49A2863BF6E00FDDD9E55A70C24AE311DFB3E_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&MessageReceived_Invoke_m04A49A2863BF6E00FDDD9E55A70C24AE311DFB3E_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&MessageReceived_Invoke_m04A49A2863BF6E00FDDD9E55A70C24AE311DFB3E_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&MessageReceived_Invoke_m04A49A2863BF6E00FDDD9E55A70C24AE311DFB3E_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&MessageReceived_Invoke_m04A49A2863BF6E00FDDD9E55A70C24AE311DFB3E_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&MessageReceived_Invoke_m04A49A2863BF6E00FDDD9E55A70C24AE311DFB3E_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&MessageReceived_Invoke_m04A49A2863BF6E00FDDD9E55A70C24AE311DFB3E_Multicast;
}
// System.Void Android.BLE.BleAdapter/MessageReceived::Invoke(Android.BLE.BleObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceived_Invoke_m04A49A2863BF6E00FDDD9E55A70C24AE311DFB3E (MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* __this, BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Android.BLE.BleAdapter/MessageReceived::BeginInvoke(Android.BLE.BleObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageReceived_BeginInvoke_mD63957E69103D244C97B38917C51C98611422DFB (MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* __this, BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* ___0_obj, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_obj;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void Android.BLE.BleAdapter/MessageReceived::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceived_EndInvoke_m2A8F3E89981740611A4C2CD23AB4E404700C2A6A (MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
void ErrorReceived_Invoke_m108A59C1F114BB050F71FFF0662BD49BB140A308_Multicast(ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* __this, String_t* ___0_errorMessage, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* currentDelegate = reinterpret_cast<ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_errorMessage, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ErrorReceived_Invoke_m108A59C1F114BB050F71FFF0662BD49BB140A308_OpenInst(ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* __this, String_t* ___0_errorMessage, const RuntimeMethod* method)
{
	NullCheck(___0_errorMessage);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_errorMessage, method);
}
void ErrorReceived_Invoke_m108A59C1F114BB050F71FFF0662BD49BB140A308_OpenStatic(ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* __this, String_t* ___0_errorMessage, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_errorMessage, method);
}
void ErrorReceived_Invoke_m108A59C1F114BB050F71FFF0662BD49BB140A308_OpenStaticInvoker(ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* __this, String_t* ___0_errorMessage, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_errorMessage);
}
void ErrorReceived_Invoke_m108A59C1F114BB050F71FFF0662BD49BB140A308_ClosedStaticInvoker(ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* __this, String_t* ___0_errorMessage, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_errorMessage);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276 (ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* __this, String_t* ___0_errorMessage, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_errorMessage' to native representation
	char* ____0_errorMessage_marshaled = NULL;
	____0_errorMessage_marshaled = il2cpp_codegen_marshal_string(___0_errorMessage);

	// Native function invocation
	il2cppPInvokeFunc(____0_errorMessage_marshaled);

	// Marshaling cleanup of parameter '___0_errorMessage' native representation
	il2cpp_codegen_marshal_free(____0_errorMessage_marshaled);
	____0_errorMessage_marshaled = NULL;

}
// System.Void Android.BLE.BleAdapter/ErrorReceived::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReceived__ctor_m643484E4B3FA92C729C86FCCB26132B11C793EB4 (ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ErrorReceived_Invoke_m108A59C1F114BB050F71FFF0662BD49BB140A308_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ErrorReceived_Invoke_m108A59C1F114BB050F71FFF0662BD49BB140A308_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ErrorReceived_Invoke_m108A59C1F114BB050F71FFF0662BD49BB140A308_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ErrorReceived_Invoke_m108A59C1F114BB050F71FFF0662BD49BB140A308_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ErrorReceived_Invoke_m108A59C1F114BB050F71FFF0662BD49BB140A308_Multicast;
}
// System.Void Android.BLE.BleAdapter/ErrorReceived::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReceived_Invoke_m108A59C1F114BB050F71FFF0662BD49BB140A308 (ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* __this, String_t* ___0_errorMessage, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_errorMessage, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Android.BLE.BleAdapter/ErrorReceived::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ErrorReceived_BeginInvoke_m493CBAAF07AB354491041F631CA5ADA556C185F4 (ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* __this, String_t* ___0_errorMessage, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_errorMessage;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void Android.BLE.BleAdapter/ErrorReceived::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReceived_EndInvoke_m15D4B16A20C96B67F37D06B2B505648033E75296 (ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
// Android.BLE.BleManager Android.BLE.BleManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84* BleManager_get_Instance_mEBFC34A1CC0827A6638F30AC08225507A22BE3CE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance != null)
		BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84* L_0 = ((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return _instance;
		BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84* L_2 = ((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____instance_4;
		return L_2;
	}

IL_0013:
	{
		// CreateBleManagerObject();
		BleManager_CreateBleManagerObject_m7AB9D31A9B3DF947D159EC61AADF042EB373F915(NULL);
		// return _instance;
		BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84* L_3 = ((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____instance_4;
		return L_3;
	}
}
// System.Boolean Android.BLE.BleManager::get_IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BleManager_get_IsInitialized_mFE77EFE30E1912474DB37224C1962B77B2CAB49B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsInitialized { get => _initialized; }
		bool L_0 = ((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____initialized_5;
		return L_0;
	}
}
// System.Void Android.BLE.BleManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleManager_Awake_m3AE7D467F5D35D51F9B73DF617B12CDDA4F57AA8 (BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleManager_OnBleMessageReceived_m6629275E7E4B068729169AFE80B34519D7B6CEAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleManager_OnErrorReceived_mC4CCE01EE6619F0AB989066F2EB5EF51159BA022_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _instance = this;
		((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____instance_4), (void*)__this);
		// if (InitializeOnAwake)
		bool L_0 = __this->___InitializeOnAwake_7;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// Initialize();
		BleManager_Initialize_m75F610C1E8467171F3C5F7AC6C4C1BCB77B921A1(__this, NULL);
	}

IL_0014:
	{
		// _adapter.OnMessageReceived += OnBleMessageReceived;
		BleAdapter_t6A52C7C4FA321E8F1A87668092229A4AF7A1450A* L_1 = __this->____adapter_6;
		MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* L_2 = (MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE*)il2cpp_codegen_object_new(MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MessageReceived__ctor_mCAA9C40A1DF0E71152C50968DDCC7BFE11026A5C(L_2, __this, (intptr_t)((void*)BleManager_OnBleMessageReceived_m6629275E7E4B068729169AFE80B34519D7B6CEAD_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		BleAdapter_add_OnMessageReceived_m3A1E09E8615A14724ED3E07163660FC1A38D3B63(L_1, L_2, NULL);
		// _adapter.OnErrorReceived += OnErrorReceived;
		BleAdapter_t6A52C7C4FA321E8F1A87668092229A4AF7A1450A* L_3 = __this->____adapter_6;
		ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* L_4 = (ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276*)il2cpp_codegen_object_new(ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ErrorReceived__ctor_m643484E4B3FA92C729C86FCCB26132B11C793EB4(L_4, __this, (intptr_t)((void*)BleManager_OnErrorReceived_mC4CCE01EE6619F0AB989066F2EB5EF51159BA022_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		BleAdapter_add_OnErrorReceived_m5C163E7706E45DC39CB8E57094294527785388E2(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Android.BLE.BleManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleManager_Update_m62018AAE97919FD9C844B0454289AC461F64AA3B (BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m596C055F05EF8F992F802CA87CF3CEF44435F12C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m5A46263399026134FEB685F07DD0A6E90822FB3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral018DE31335FF756A982D23406BC445027A26C734);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral409BEDA9B91A18B8F2F42A3C236764486B0606A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* G_B8_0 = NULL;
	BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* G_B7_0 = NULL;
	{
		// _activeTimer += Time.deltaTime;
		float L_0 = ((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____activeTimer_15;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____activeTimer_15 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (_activeCommand != null && _activeTimer > _activeCommand.Timeout)
		BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* L_2 = ((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____activeCommand_14;
		if (!L_2)
		{
			goto IL_00d3;
		}
	}
	{
		float L_3 = ((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____activeTimer_15;
		BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* L_4 = ((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____activeCommand_14;
		NullCheck(L_4);
		float L_5;
		L_5 = BleCommand_get_Timeout_mCB884E9E6F9988E4126592F4DD68E675258E67B7_inline(L_4, NULL);
		if ((!(((float)L_3) > ((float)L_5))))
		{
			goto IL_00d3;
		}
	}
	{
		// CheckForLog("Timed Out: " + _activeCommand + " - " + _activeCommand.Timeout);
		BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* L_6 = ((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____activeCommand_14;
		BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* L_7 = L_6;
		G_B3_0 = L_7;
		G_B3_1 = _stringLiteral018DE31335FF756A982D23406BC445027A26C734;
		if (L_7)
		{
			G_B4_0 = L_7;
			G_B4_1 = _stringLiteral018DE31335FF756A982D23406BC445027A26C734;
			goto IL_003f;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_0044;
	}

IL_003f:
	{
		NullCheck(G_B4_0);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B4_0);
		G_B5_0 = L_8;
		G_B5_1 = G_B4_1;
	}

IL_0044:
	{
		BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* L_9 = ((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____activeCommand_14;
		NullCheck(L_9);
		float L_10;
		L_10 = BleCommand_get_Timeout_mCB884E9E6F9988E4126592F4DD68E675258E67B7_inline(L_9, NULL);
		V_0 = L_10;
		String_t* L_11;
		L_11 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		String_t* L_12;
		L_12 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(G_B5_1, G_B5_0, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62, L_11, NULL);
		BleManager_CheckForLog_m5EEF5D5B1B3B4AFA6FAF9A048AFD0FF7E9AD8FF5(L_12, NULL);
		// _activeTimer = 0f;
		((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____activeTimer_15 = (0.0f);
		// _activeCommand.EndOnTimeout();
		BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* L_13 = ((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____activeCommand_14;
		NullCheck(L_13);
		VirtualActionInvoker0::Invoke(6 /* System.Void Android.BLE.Commands.BleCommand::EndOnTimeout() */, L_13);
		// if (_commandQueue.Count > 0)
		Queue_1_t02154256BFD05CB5E7EA0D7EA47E03E6FB9A0D5C* L_14 = __this->____commandQueue_12;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Queue_1_get_Count_m5A46263399026134FEB685F07DD0A6E90822FB3B_inline(L_14, Queue_1_get_Count_m5A46263399026134FEB685F07DD0A6E90822FB3B_RuntimeMethod_var);
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		// _activeCommand = _commandQueue.Dequeue();
		Queue_1_t02154256BFD05CB5E7EA0D7EA47E03E6FB9A0D5C* L_16 = __this->____commandQueue_12;
		NullCheck(L_16);
		BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* L_17;
		L_17 = Queue_1_Dequeue_m596C055F05EF8F992F802CA87CF3CEF44435F12C(L_16, Queue_1_Dequeue_m596C055F05EF8F992F802CA87CF3CEF44435F12C_RuntimeMethod_var);
		((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____activeCommand_14 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____activeCommand_14), (void*)L_17);
		// _activeCommand?.Start();
		BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* L_18 = ((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____activeCommand_14;
		BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* L_19 = L_18;
		G_B7_0 = L_19;
		if (L_19)
		{
			G_B8_0 = L_19;
			goto IL_00a2;
		}
	}
	{
		goto IL_00a7;
	}

IL_00a2:
	{
		NullCheck(G_B8_0);
		VirtualActionInvoker0::Invoke(4 /* System.Void Android.BLE.Commands.BleCommand::Start() */, G_B8_0);
	}

IL_00a7:
	{
		// if (_activeCommand != null)
		BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* L_20 = ((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____activeCommand_14;
		if (!L_20)
		{
			goto IL_00d3;
		}
	}
	{
		// CheckForLog("Executing new Command: " + _activeCommand.GetType().Name);
		BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* L_21 = ((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____activeCommand_14;
		NullCheck(L_21);
		Type_t* L_22;
		L_22 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_21, NULL);
		NullCheck(L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_22);
		String_t* L_24;
		L_24 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral409BEDA9B91A18B8F2F42A3C236764486B0606A4, L_23, NULL);
		BleManager_CheckForLog_m5EEF5D5B1B3B4AFA6FAF9A048AFD0FF7E9AD8FF5(L_24, NULL);
		return;
	}

IL_00cd:
	{
		// _activeCommand = null;
		((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____activeCommand_14 = (BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____activeCommand_14), (void*)(BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F*)NULL);
	}

IL_00d3:
	{
		// }
		return;
	}
}
// System.Void Android.BLE.BleManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleManager_Initialize_m75F610C1E8467171F3C5F7AC6C4C1BCB77B921A1 (BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBleAdapter_t6A52C7C4FA321E8F1A87668092229A4AF7A1450A_m178CC75F1AC5FBFF525C3EE9F6738A991FF82932_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisBleAdapter_t6A52C7C4FA321E8F1A87668092229A4AF7A1450A_m21CC2A999F37917A0F1958137F2B7C6C34866768_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2063737B07B6658BC2E1EC3128D4E09E57CA123E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral575F359D33558DB03B7FB1B8D425C40DBD9BBF79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9511742FD69A2C384F80C12845F58A7857429DD);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// if (!_initialized)
		bool L_0 = ((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____initialized_5;
		if (L_0)
		{
			goto IL_0094;
		}
	}
	{
		// if (_instance == null)
		BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84* L_1 = ((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// CreateBleManagerObject();
		BleManager_CreateBleManagerObject_m7AB9D31A9B3DF947D159EC61AADF042EB373F915(NULL);
	}

IL_001c:
	{
		// if (_adapter == null)
		BleAdapter_t6A52C7C4FA321E8F1A87668092229A4AF7A1450A* L_3 = __this->____adapter_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_006f;
		}
	}
	{
		// _adapter = FindObjectOfType<BleAdapter>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		BleAdapter_t6A52C7C4FA321E8F1A87668092229A4AF7A1450A* L_5;
		L_5 = Object_FindObjectOfType_TisBleAdapter_t6A52C7C4FA321E8F1A87668092229A4AF7A1450A_m21CC2A999F37917A0F1958137F2B7C6C34866768(Object_FindObjectOfType_TisBleAdapter_t6A52C7C4FA321E8F1A87668092229A4AF7A1450A_m21CC2A999F37917A0F1958137F2B7C6C34866768_RuntimeMethod_var);
		__this->____adapter_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____adapter_6), (void*)L_5);
		// if (_adapter == null)
		BleAdapter_t6A52C7C4FA321E8F1A87668092229A4AF7A1450A* L_6 = __this->____adapter_6;
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_006f;
		}
	}
	{
		// GameObject bleAdapter = new GameObject(nameof(BleAdapter));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_8, _stringLiteralF9511742FD69A2C384F80C12845F58A7857429DD, NULL);
		V_0 = L_8;
		// bleAdapter.transform.SetParent(Instance.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_0;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84* L_11;
		L_11 = BleManager_get_Instance_mEBFC34A1CC0827A6638F30AC08225507A22BE3CE(NULL);
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		NullCheck(L_10);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_10, L_12, NULL);
		// _adapter = bleAdapter.AddComponent<BleAdapter>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_0;
		NullCheck(L_13);
		BleAdapter_t6A52C7C4FA321E8F1A87668092229A4AF7A1450A* L_14;
		L_14 = GameObject_AddComponent_TisBleAdapter_t6A52C7C4FA321E8F1A87668092229A4AF7A1450A_m178CC75F1AC5FBFF525C3EE9F6738A991FF82932(L_13, GameObject_AddComponent_TisBleAdapter_t6A52C7C4FA321E8F1A87668092229A4AF7A1450A_m178CC75F1AC5FBFF525C3EE9F6738A991FF82932_RuntimeMethod_var);
		__this->____adapter_6 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____adapter_6), (void*)L_14);
	}

IL_006f:
	{
		// if (_bleLibrary == null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_15 = ((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____bleLibrary_11;
		if (L_15)
		{
			goto IL_0094;
		}
	}
	{
		// AndroidJavaClass librarySingleton = new AndroidJavaClass("com.velorexe.unityandroidble.UnityAndroidBLE");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_16 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_16, _stringLiteral575F359D33558DB03B7FB1B8D425C40DBD9BBF79, NULL);
		// _bleLibrary = librarySingleton.CallStatic<AndroidJavaObject>("getInstance");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17;
		L_17 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_16);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_18;
		L_18 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_16, _stringLiteral2063737B07B6658BC2E1EC3128D4E09E57CA123E, L_17, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____bleLibrary_11 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____bleLibrary_11), (void*)L_18);
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.Void Android.BLE.BleManager::DeInitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleManager_DeInitialize_mD7F4884274A249DB3780BB6EBC710BF15B622627 (BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m81B828D6C267DD9924B7505904E291C93A41A018_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m0D02B8DDCAD7D7BD7B199FC207489FD294BC333F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7BB0EF638AD46EB3C6292F6285FB6678028D3C53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m890246091900B6B4F01BD87D23D3B6DE0496A7F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tE606E6579843CDEB2AA04952EE6A950977B6005C V_0;
	memset((&V_0), 0, sizeof(V_0));
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* G_B8_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* G_B7_0 = NULL;
	{
		// foreach (BleCommand command in _parrallelStack)
		List_1_tEA71E12AD290A9C47644FD8BE8145D2CAA4A2EB5* L_0 = __this->____parrallelStack_13;
		NullCheck(L_0);
		Enumerator_tE606E6579843CDEB2AA04952EE6A950977B6005C L_1;
		L_1 = List_1_GetEnumerator_m890246091900B6B4F01BD87D23D3B6DE0496A7F5(L_0, List_1_GetEnumerator_m890246091900B6B4F01BD87D23D3B6DE0496A7F5_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m81B828D6C267DD9924B7505904E291C93A41A018((&V_0), Enumerator_Dispose_m81B828D6C267DD9924B7505904E291C93A41A018_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000e_1:
			{
				// foreach (BleCommand command in _parrallelStack)
				BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* L_2;
				L_2 = Enumerator_get_Current_m7BB0EF638AD46EB3C6292F6285FB6678028D3C53_inline((&V_0), Enumerator_get_Current_m7BB0EF638AD46EB3C6292F6285FB6678028D3C53_RuntimeMethod_var);
				// command.End();
				NullCheck(L_2);
				VirtualActionInvoker0::Invoke(5 /* System.Void Android.BLE.Commands.BleCommand::End() */, L_2);
			}

IL_001a_1:
			{
				// foreach (BleCommand command in _parrallelStack)
				bool L_3;
				L_3 = Enumerator_MoveNext_m0D02B8DDCAD7D7BD7B199FC207489FD294BC333F((&V_0), Enumerator_MoveNext_m0D02B8DDCAD7D7BD7B199FC207489FD294BC333F_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// _bleLibrary?.Dispose();
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____bleLibrary_11;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = L_4;
		G_B7_0 = L_5;
		if (L_5)
		{
			G_B8_0 = L_5;
			goto IL_003e;
		}
	}
	{
		goto IL_0043;
	}

IL_003e:
	{
		NullCheck(G_B8_0);
		AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6(G_B8_0, NULL);
	}

IL_0043:
	{
		// if (_adapter != null)
		BleAdapter_t6A52C7C4FA321E8F1A87668092229A4AF7A1450A* L_6 = __this->____adapter_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0061;
		}
	}
	{
		// Destroy(_adapter.gameObject);
		BleAdapter_t6A52C7C4FA321E8F1A87668092229A4AF7A1450A* L_8 = __this->____adapter_6;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_9, NULL);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void Android.BLE.BleManager::OnBleMessageReceived(Android.BLE.BleObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleManager_OnBleMessageReceived_m6629275E7E4B068729169AFE80B34519D7B6CEAD (BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84* __this, BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m286D1D4683D912368714BDE2FC174C8574845605_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m04342FA7D9B5FD696206BEFDCBD46155E164BAC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4236E4F0C18936107363E1A84F2420DD8768D141_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m596C055F05EF8F992F802CA87CF3CEF44435F12C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m5A46263399026134FEB685F07DD0A6E90822FB3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral409BEDA9B91A18B8F2F42A3C236764486B0606A4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* G_B5_0 = NULL;
	BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* G_B4_0 = NULL;
	{
		// CheckForLog(JsonUtility.ToJson(obj, true));
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_0 = ___0_obj;
		String_t* L_1;
		L_1 = JsonUtility_ToJson_m53A1FEE0D388CF3A629E093C04B5E1A6D5463B53(L_0, (bool)1, NULL);
		BleManager_CheckForLog_m5EEF5D5B1B3B4AFA6FAF9A048AFD0FF7E9AD8FF5(L_1, NULL);
		// if (_activeCommand != null && _activeCommand.CommandReceived(obj))
		BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* L_2 = ((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____activeCommand_14;
		if (!L_2)
		{
			goto IL_0085;
		}
	}
	{
		BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* L_3 = ((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____activeCommand_14;
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_4 = ___0_obj;
		NullCheck(L_3);
		bool L_5;
		L_5 = VirtualFuncInvoker1< bool, BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* >::Invoke(7 /* System.Boolean Android.BLE.Commands.BleCommand::CommandReceived(Android.BLE.BleObject) */, L_3, L_4);
		if (!L_5)
		{
			goto IL_0085;
		}
	}
	{
		// _activeCommand.End();
		BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* L_6 = ((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____activeCommand_14;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(5 /* System.Void Android.BLE.Commands.BleCommand::End() */, L_6);
		// if (_commandQueue.Count > 0)
		Queue_1_t02154256BFD05CB5E7EA0D7EA47E03E6FB9A0D5C* L_7 = __this->____commandQueue_12;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Queue_1_get_Count_m5A46263399026134FEB685F07DD0A6E90822FB3B_inline(L_7, Queue_1_get_Count_m5A46263399026134FEB685F07DD0A6E90822FB3B_RuntimeMethod_var);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_007f;
		}
	}
	{
		// _activeCommand = _commandQueue.Dequeue();
		Queue_1_t02154256BFD05CB5E7EA0D7EA47E03E6FB9A0D5C* L_9 = __this->____commandQueue_12;
		NullCheck(L_9);
		BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* L_10;
		L_10 = Queue_1_Dequeue_m596C055F05EF8F992F802CA87CF3CEF44435F12C(L_9, Queue_1_Dequeue_m596C055F05EF8F992F802CA87CF3CEF44435F12C_RuntimeMethod_var);
		((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____activeCommand_14 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____activeCommand_14), (void*)L_10);
		// _activeCommand?.Start();
		BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* L_11 = ((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____activeCommand_14;
		BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* L_12 = L_11;
		G_B4_0 = L_12;
		if (L_12)
		{
			G_B5_0 = L_12;
			goto IL_0053;
		}
	}
	{
		goto IL_0058;
	}

IL_0053:
	{
		NullCheck(G_B5_0);
		VirtualActionInvoker0::Invoke(4 /* System.Void Android.BLE.Commands.BleCommand::Start() */, G_B5_0);
	}

IL_0058:
	{
		// if (_activeCommand != null)
		BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* L_13 = ((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____activeCommand_14;
		if (!L_13)
		{
			goto IL_0085;
		}
	}
	{
		// CheckForLog("Executing new Command: " + _activeCommand.GetType().Name);
		BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* L_14 = ((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____activeCommand_14;
		NullCheck(L_14);
		Type_t* L_15;
		L_15 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_14, NULL);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_15);
		String_t* L_17;
		L_17 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral409BEDA9B91A18B8F2F42A3C236764486B0606A4, L_16, NULL);
		BleManager_CheckForLog_m5EEF5D5B1B3B4AFA6FAF9A048AFD0FF7E9AD8FF5(L_17, NULL);
		goto IL_0085;
	}

IL_007f:
	{
		// _activeCommand = null;
		((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____activeCommand_14 = (BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____activeCommand_14), (void*)(BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F*)NULL);
	}

IL_0085:
	{
		// for (int i = 0; i < _parrallelStack.Count; i++)
		V_0 = 0;
		goto IL_00be;
	}

IL_0089:
	{
		// if (_parrallelStack[i].CommandReceived(obj))
		List_1_tEA71E12AD290A9C47644FD8BE8145D2CAA4A2EB5* L_18 = __this->____parrallelStack_13;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* L_20;
		L_20 = List_1_get_Item_m4236E4F0C18936107363E1A84F2420DD8768D141(L_18, L_19, List_1_get_Item_m4236E4F0C18936107363E1A84F2420DD8768D141_RuntimeMethod_var);
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_21 = ___0_obj;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* >::Invoke(7 /* System.Boolean Android.BLE.Commands.BleCommand::CommandReceived(Android.BLE.BleObject) */, L_20, L_21);
		if (!L_22)
		{
			goto IL_00ba;
		}
	}
	{
		// _parrallelStack[i].End();
		List_1_tEA71E12AD290A9C47644FD8BE8145D2CAA4A2EB5* L_23 = __this->____parrallelStack_13;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* L_25;
		L_25 = List_1_get_Item_m4236E4F0C18936107363E1A84F2420DD8768D141(L_23, L_24, List_1_get_Item_m4236E4F0C18936107363E1A84F2420DD8768D141_RuntimeMethod_var);
		NullCheck(L_25);
		VirtualActionInvoker0::Invoke(5 /* System.Void Android.BLE.Commands.BleCommand::End() */, L_25);
		// _parrallelStack.RemoveAt(i);
		List_1_tEA71E12AD290A9C47644FD8BE8145D2CAA4A2EB5* L_26 = __this->____parrallelStack_13;
		int32_t L_27 = V_0;
		NullCheck(L_26);
		List_1_RemoveAt_m286D1D4683D912368714BDE2FC174C8574845605(L_26, L_27, List_1_RemoveAt_m286D1D4683D912368714BDE2FC174C8574845605_RuntimeMethod_var);
	}

IL_00ba:
	{
		// for (int i = 0; i < _parrallelStack.Count; i++)
		int32_t L_28 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00be:
	{
		// for (int i = 0; i < _parrallelStack.Count; i++)
		int32_t L_29 = V_0;
		List_1_tEA71E12AD290A9C47644FD8BE8145D2CAA4A2EB5* L_30 = __this->____parrallelStack_13;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = List_1_get_Count_m04342FA7D9B5FD696206BEFDCBD46155E164BAC1_inline(L_30, List_1_get_Count_m04342FA7D9B5FD696206BEFDCBD46155E164BAC1_RuntimeMethod_var);
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_0089;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Android.BLE.BleManager::QueueCommand(Android.BLE.Commands.BleCommand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleManager_QueueCommand_mFF85DEB48166C00BD817E77B3C1234B59F74BAEB (BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84* __this, BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* ___0_command, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB787BAC4BA2A956D398C9EFC01B974BAA13FAD0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m7E702BCBCCFD61CFA652010F44F32C38C329E7C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC22B7D867EC3B12AFB62AB277FDC7B8BC52C0C47);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckForLog("Queueing Command: " + command.GetType().Name);
		BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* L_0 = ___0_command;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_1);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC22B7D867EC3B12AFB62AB277FDC7B8BC52C0C47, L_2, NULL);
		BleManager_CheckForLog_m5EEF5D5B1B3B4AFA6FAF9A048AFD0FF7E9AD8FF5(L_3, NULL);
		// if (command.RunParallel || command.RunContiniously)
		BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* L_4 = ___0_command;
		NullCheck(L_4);
		bool L_5 = L_4->___RunParallel_1;
		if (L_5)
		{
			goto IL_002a;
		}
	}
	{
		BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* L_6 = ___0_command;
		NullCheck(L_6);
		bool L_7 = L_6->___RunContiniously_2;
		if (!L_7)
		{
			goto IL_003d;
		}
	}

IL_002a:
	{
		// _parrallelStack.Add(command);
		List_1_tEA71E12AD290A9C47644FD8BE8145D2CAA4A2EB5* L_8 = __this->____parrallelStack_13;
		BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* L_9 = ___0_command;
		NullCheck(L_8);
		List_1_Add_mB787BAC4BA2A956D398C9EFC01B974BAA13FAD0A_inline(L_8, L_9, List_1_Add_mB787BAC4BA2A956D398C9EFC01B974BAA13FAD0A_RuntimeMethod_var);
		// command.Start();
		BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* L_10 = ___0_command;
		NullCheck(L_10);
		VirtualActionInvoker0::Invoke(4 /* System.Void Android.BLE.Commands.BleCommand::Start() */, L_10);
		return;
	}

IL_003d:
	{
		// if (_activeCommand == null)
		BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* L_11 = ((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____activeCommand_14;
		if (L_11)
		{
			goto IL_005f;
		}
	}
	{
		// _activeTimer = 0f;
		((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____activeTimer_15 = (0.0f);
		// _activeCommand = command;
		BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* L_12 = ___0_command;
		((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____activeCommand_14 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____activeCommand_14), (void*)L_12);
		// _activeCommand.Start();
		BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* L_13 = ((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____activeCommand_14;
		NullCheck(L_13);
		VirtualActionInvoker0::Invoke(4 /* System.Void Android.BLE.Commands.BleCommand::Start() */, L_13);
		return;
	}

IL_005f:
	{
		// _commandQueue.Enqueue(command);
		Queue_1_t02154256BFD05CB5E7EA0D7EA47E03E6FB9A0D5C* L_14 = __this->____commandQueue_12;
		BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* L_15 = ___0_command;
		NullCheck(L_14);
		Queue_1_Enqueue_m7E702BCBCCFD61CFA652010F44F32C38C329E7C3(L_14, L_15, Queue_1_Enqueue_m7E702BCBCCFD61CFA652010F44F32C38C329E7C3_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Android.BLE.BleManager::OnErrorReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleManager_OnErrorReceived_mC4CCE01EE6619F0AB989066F2EB5EF51159BA022 (BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84* __this, String_t* ___0_errorMessage, const RuntimeMethod* method) 
{
	{
		// CheckForLog(errorMessage);
		String_t* L_0 = ___0_errorMessage;
		BleManager_CheckForLog_m5EEF5D5B1B3B4AFA6FAF9A048AFD0FF7E9AD8FF5(L_0, NULL);
		// }
		return;
	}
}
// System.Void Android.BLE.BleManager::CheckForLog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleManager_CheckForLog_m5EEF5D5B1B3B4AFA6FAF9A048AFD0FF7E9AD8FF5 (String_t* ___0_logMessage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance.UseUnityLog)
		BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84* L_0;
		L_0 = BleManager_get_Instance_mEBFC34A1CC0827A6638F30AC08225507A22BE3CE(NULL);
		NullCheck(L_0);
		bool L_1 = L_0->___UseUnityLog_9;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// Debug.LogWarning(logMessage);
		String_t* L_2 = ___0_logMessage;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_2, NULL);
	}

IL_0012:
	{
		// if (Instance.UseAndroidLog)
		BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84* L_3;
		L_3 = BleManager_get_Instance_mEBFC34A1CC0827A6638F30AC08225507A22BE3CE(NULL);
		NullCheck(L_3);
		bool L_4 = L_3->___UseAndroidLog_10;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// AndroidLog(logMessage);
		String_t* L_5 = ___0_logMessage;
		BleManager_AndroidLog_mF5C77D636D9AB788C9CD854938768D2F9A65258D(L_5, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Android.BLE.BleManager::AndroidLog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleManager_AndroidLog_mF5C77D636D9AB788C9CD854938768D2F9A65258D (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF77DCFBDDBFF820A84771FE451F6950FD3FBB71A);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* G_B3_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* G_B2_0 = NULL;
	{
		// if (_initialized)
		bool L_0 = ((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____initialized_5;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		// _bleLibrary?.CallStatic("androidLog", message);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____bleLibrary_11;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		String_t* L_5 = ___0_message;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(G_B3_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(G_B3_0, _stringLiteralF77DCFBDDBFF820A84771FE451F6950FD3FBB71A, L_4, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Android.BLE.BleManager::SendCommand(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleManager_SendCommand_m6B488A06103C2FA52D5DF05578F1B6D50BB1DE6C (String_t* ___0_command, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ACE606359FC08C5A373AA9744375A3F83AF4362);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* G_B4_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* G_B3_0 = NULL;
	{
		// if (Instance.LogAllMessages)
		BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84* L_0;
		L_0 = BleManager_get_Instance_mEBFC34A1CC0827A6638F30AC08225507A22BE3CE(NULL);
		NullCheck(L_0);
		bool L_1 = L_0->___LogAllMessages_8;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// CheckForLog("Calling Command: " + command);
		String_t* L_2 = ___0_command;
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2ACE606359FC08C5A373AA9744375A3F83AF4362, L_2, NULL);
		BleManager_CheckForLog_m5EEF5D5B1B3B4AFA6FAF9A048AFD0FF7E9AD8FF5(L_3, NULL);
	}

IL_001c:
	{
		// _bleLibrary?.Call(command, parameters);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ((BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_StaticFields*)il2cpp_codegen_static_fields_for(BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_il2cpp_TypeInfo_var))->____bleLibrary_11;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = L_4;
		G_B3_0 = L_5;
		if (L_5)
		{
			G_B4_0 = L_5;
			goto IL_0026;
		}
	}
	{
		return;
	}

IL_0026:
	{
		String_t* L_6 = ___0_command;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = ___1_parameters;
		NullCheck(G_B4_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(G_B4_0, L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void Android.BLE.BleManager::CreateBleManagerObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleManager_CreateBleManagerObject_m7AB9D31A9B3DF947D159EC61AADF042EB373F915 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_m6442682F58A41B4FF2D625CE57E2727D969DB228_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D606522AC9C80F1AF7F27E15F99A2F4B7912DD0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject managerObject = new GameObject();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_0, NULL);
		// managerObject.name = "BleManager";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = L_0;
		NullCheck(L_1);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_1, _stringLiteral6D606522AC9C80F1AF7F27E15F99A2F4B7912DD0, NULL);
		// managerObject.AddComponent<BleManager>();
		NullCheck(L_1);
		BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84* L_2;
		L_2 = GameObject_AddComponent_TisBleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_m6442682F58A41B4FF2D625CE57E2727D969DB228(L_1, GameObject_AddComponent_TisBleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84_m6442682F58A41B4FF2D625CE57E2727D969DB228_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Android.BLE.BleManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleManager_OnDestroy_mF29F07A144EE4D4FE9E48A7FB00C0489DE895F86 (BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84* __this, const RuntimeMethod* method) 
{
	{
		// private void OnDestroy() => DeInitialize();
		BleManager_DeInitialize_mD7F4884274A249DB3780BB6EBC710BF15B622627(__this, NULL);
		return;
	}
}
// System.Void Android.BLE.BleManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleManager__ctor_mA0CD02ACE4FFA9B60CE238744B54DB57A70D7DE5 (BleManager_t4B0DA961772A11307E9C1E520417AA46302D8C84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m514A29456D474008879812E4C05CCA60FF3FFC66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tEA71E12AD290A9C47644FD8BE8145D2CAA4A2EB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m60F547161F02EFD88CBB53A524F1A3795A48A4A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t02154256BFD05CB5E7EA0D7EA47E03E6FB9A0D5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool InitializeOnAwake = true;
		__this->___InitializeOnAwake_7 = (bool)1;
		// public bool UseUnityLog = true;
		__this->___UseUnityLog_9 = (bool)1;
		// private readonly Queue<BleCommand> _commandQueue = new Queue<BleCommand>();
		Queue_1_t02154256BFD05CB5E7EA0D7EA47E03E6FB9A0D5C* L_0 = (Queue_1_t02154256BFD05CB5E7EA0D7EA47E03E6FB9A0D5C*)il2cpp_codegen_object_new(Queue_1_t02154256BFD05CB5E7EA0D7EA47E03E6FB9A0D5C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue_1__ctor_m60F547161F02EFD88CBB53A524F1A3795A48A4A2(L_0, Queue_1__ctor_m60F547161F02EFD88CBB53A524F1A3795A48A4A2_RuntimeMethod_var);
		__this->____commandQueue_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____commandQueue_12), (void*)L_0);
		// private readonly List<BleCommand> _parrallelStack = new List<BleCommand>();
		List_1_tEA71E12AD290A9C47644FD8BE8145D2CAA4A2EB5* L_1 = (List_1_tEA71E12AD290A9C47644FD8BE8145D2CAA4A2EB5*)il2cpp_codegen_object_new(List_1_tEA71E12AD290A9C47644FD8BE8145D2CAA4A2EB5_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m514A29456D474008879812E4C05CCA60FF3FFC66(L_1, List_1__ctor_m514A29456D474008879812E4C05CCA60FF3FFC66_RuntimeMethod_var);
		__this->____parrallelStack_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____parrallelStack_13), (void*)L_1);
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
// System.String Android.BLE.BleObject::get_Device()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BleObject_get_Device_m7E208B87BAB1C81C1D1782A3151EFE518E66568D (BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* __this, const RuntimeMethod* method) 
{
	{
		// public string Device => device;
		String_t* L_0 = __this->___device_0;
		return L_0;
	}
}
// System.String Android.BLE.BleObject::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BleObject_get_Name_m5A412E454187BB2EB9C0F09EC020FFA0E9F3A346 (BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* __this, const RuntimeMethod* method) 
{
	{
		// public string Name => name;
		String_t* L_0 = __this->___name_1;
		return L_0;
	}
}
// System.String Android.BLE.BleObject::get_Service()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BleObject_get_Service_m857919014988B7444908F4191921ECA8C0418D3D (BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* __this, const RuntimeMethod* method) 
{
	{
		// public string Service => service;
		String_t* L_0 = __this->___service_2;
		return L_0;
	}
}
// System.String Android.BLE.BleObject::get_Characteristic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BleObject_get_Characteristic_m59461AA54359D04B9AED4A5748B8837EE2A02C3D (BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* __this, const RuntimeMethod* method) 
{
	{
		// public string Characteristic => characteristic;
		String_t* L_0 = __this->___characteristic_3;
		return L_0;
	}
}
// System.String Android.BLE.BleObject::get_Command()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BleObject_get_Command_m23B80AA6C0E85B8215130069AE67194E5F26E494 (BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* __this, const RuntimeMethod* method) 
{
	{
		// public string Command => command;
		String_t* L_0 = __this->___command_4;
		return L_0;
	}
}
// System.Boolean Android.BLE.BleObject::get_HasError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BleObject_get_HasError_m12D6B9476A5CFA55A3C280C0F050BBEED5E2B28A (BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* __this, const RuntimeMethod* method) 
{
	{
		// public bool HasError { get => hasError; }
		bool L_0 = __this->___hasError_5;
		return L_0;
	}
}
// System.String Android.BLE.BleObject::get_ErrorMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BleObject_get_ErrorMessage_mACBB22E99872A2406843AA444C062CDA311F3971 (BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* __this, const RuntimeMethod* method) 
{
	{
		// public string ErrorMessage { get => errorMessage; }
		String_t* L_0 = __this->___errorMessage_6;
		return L_0;
	}
}
// System.String Android.BLE.BleObject::get_Base64Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BleObject_get_Base64Message_m4DD118D55F185B406C8B499B9348520C55155F0F (BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* __this, const RuntimeMethod* method) 
{
	{
		// public string Base64Message { get => base64Message; }
		String_t* L_0 = __this->___base64Message_7;
		return L_0;
	}
}
// System.Byte[] Android.BLE.BleObject::GetByteMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BleObject_GetByteMessage_m4E7A5D2A7EB87AB760E0A49BA61C830D42643F30 (BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public byte[] GetByteMessage() => Convert.FromBase64String(base64Message);
		String_t* L_0 = __this->___base64Message_7;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_0, NULL);
		return L_1;
	}
}
// System.String Android.BLE.BleObject::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BleObject_ToString_m0E2BE39E6409FF553F35265D64FCCB1EA6D78319 (BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* __this, const RuntimeMethod* method) 
{
	{
		// public override string ToString() => JsonUtility.ToJson(this, true);
		String_t* L_0;
		L_0 = JsonUtility_ToJson_m53A1FEE0D388CF3A629E093C04B5E1A6D5463B53(__this, (bool)1, NULL);
		return L_0;
	}
}
// System.Void Android.BLE.BleObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleObject__ctor_m2D03C547D2356386FCEDD89CDB9C5DE916C1374A (BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string errorMessage = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___errorMessage_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___errorMessage_6), (void*)L_0);
		// private string base64Message = string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___base64Message_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___base64Message_7), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Android.BLE.Events.BleMessageReceived::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleMessageReceived__ctor_m4DD426A1DDDCF67669B31551A7065F9B749F955F (BleMessageReceived_t9D40718B6EC1F48A29F437192E38C92EA38CDF8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m645728FDB306DCB487327F0187C6510336682DD5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m645728FDB306DCB487327F0187C6510336682DD5(__this, UnityEvent_1__ctor_m645728FDB306DCB487327F0187C6510336682DD5_RuntimeMethod_var);
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
// System.Void Android.BLE.Events.BleErrorReceived::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleErrorReceived__ctor_m1C4A0D101028AA2565027BC6AA9B69B28C885680 (BleErrorReceived_t7EFFB529E7A8AC9F106F230ACCAB1D127D855A34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6(__this, UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
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
// System.String Android.BLE.Extension.UuidHelper::Get4BitUuid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UuidHelper_Get4BitUuid_mFCFF78C911164B9C6041F8BAD5378225B50389B1 (String_t* ___0_t, const RuntimeMethod* method) 
{
	{
		// string firstPart = t.Split('-')[0];
		String_t* L_0 = ___0_t;
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_0, ((int32_t)45), 0, NULL);
		NullCheck(L_1);
		int32_t L_2 = 0;
		String_t* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		// return firstPart.Substring(4, 4);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_3, 4, 4, NULL);
		return L_4;
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
// System.Single Android.BLE.Commands.BleCommand::get_Timeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BleCommand_get_Timeout_mCB884E9E6F9988E4126592F4DD68E675258E67B7 (BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* __this, const RuntimeMethod* method) 
{
	{
		// public float Timeout { get => _timeout; }
		float L_0 = __this->____timeout_0;
		return L_0;
	}
}
// System.Void Android.BLE.Commands.BleCommand::.ctor(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleCommand__ctor_mD7173BA8F5E4906439AB1B96AFA89425198D5FE6 (BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* __this, bool ___0_runParallel, bool ___1_runContiniously, const RuntimeMethod* method) 
{
	{
		// protected float _timeout = 5f;
		__this->____timeout_0 = (5.0f);
		// public BleCommand(bool runParallel = false, bool runContiniously = false)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// RunParallel = runParallel;
		bool L_0 = ___0_runParallel;
		__this->___RunParallel_1 = L_0;
		// RunContiniously = runContiniously;
		bool L_1 = ___1_runContiniously;
		__this->___RunContiniously_2 = L_1;
		// }
		return;
	}
}
// System.Void Android.BLE.Commands.BleCommand::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleCommand_End_mD4D63AD73F1F1B39FCDF7B11F7B644401823F65E (BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* __this, const RuntimeMethod* method) 
{
	{
		// public virtual void End() { }
		return;
	}
}
// System.Void Android.BLE.Commands.BleCommand::EndOnTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleCommand_EndOnTimeout_m984904D3A72EAC1CF486E29FDBF1C7CEA8551743 (BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* __this, const RuntimeMethod* method) 
{
	{
		// public virtual void EndOnTimeout() => End();
		VirtualActionInvoker0::Invoke(5 /* System.Void Android.BLE.Commands.BleCommand::End() */, __this);
		return;
	}
}
// System.Boolean Android.BLE.Commands.BleCommand::CommandReceived(Android.BLE.BleObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BleCommand_CommandReceived_mCBD8C0E4DC06AC60C08BB26B0812C022656D56F7 (BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* __this, BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* ___0_obj, const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
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
// System.Boolean Android.BLE.Commands.ConnectToDevice::get_IsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectToDevice_get_IsConnected_m75AF76B6B6B60F4FFCBD292A62F4B1B29849109F (ConnectToDevice_tED9F7E213942CA91D6807368C9ECD9ACAC94D8E8* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsConnected { get => _isConnected; }
		bool L_0 = __this->____isConnected_4;
		return L_0;
	}
}
// System.Void Android.BLE.Commands.ConnectToDevice::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectToDevice__ctor_m0C700EC48E6EFF8EB71FC369537BE55CC0D9D867 (ConnectToDevice_tED9F7E213942CA91D6807368C9ECD9ACAC94D8E8* __this, String_t* ___0_deviceAddress, const RuntimeMethod* method) 
{
	{
		// public ConnectToDevice(string deviceAddress) : base(true, true)
		BleCommand__ctor_mD7173BA8F5E4906439AB1B96AFA89425198D5FE6(__this, (bool)1, (bool)1, NULL);
		// _deviceAddress = deviceAddress;
		String_t* L_0 = ___0_deviceAddress;
		__this->____deviceAddress_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____deviceAddress_3), (void*)L_0);
		// }
		return;
	}
}
// System.Void Android.BLE.Commands.ConnectToDevice::.ctor(System.String,Android.BLE.Commands.ConnectToDevice/ConnectionChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectToDevice__ctor_m5036923A5921A507E2B7872424C44FC0A3438A16 (ConnectToDevice_tED9F7E213942CA91D6807368C9ECD9ACAC94D8E8* __this, String_t* ___0_deviceAddress, ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* ___1_onConnected, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ConnectionChange onConnected) : base(true, true)
		BleCommand__ctor_mD7173BA8F5E4906439AB1B96AFA89425198D5FE6(__this, (bool)1, (bool)1, NULL);
		// _deviceAddress = deviceAddress;
		String_t* L_0 = ___0_deviceAddress;
		__this->____deviceAddress_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____deviceAddress_3), (void*)L_0);
		// OnConnected += onConnected;
		ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* L_1 = __this->___OnConnected_5;
		ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* L_2 = ___1_onConnected;
		Delegate_t* L_3;
		L_3 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_1, L_2, NULL);
		__this->___OnConnected_5 = ((ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC*)CastclassSealed((RuntimeObject*)L_3, ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnConnected_5), (void*)((ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC*)CastclassSealed((RuntimeObject*)L_3, ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Android.BLE.Commands.ConnectToDevice::.ctor(System.String,Android.BLE.Commands.ConnectToDevice/ConnectionChange,Android.BLE.Commands.ConnectToDevice/ConnectionChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectToDevice__ctor_m75A59A2EDE7D5D5EA5125F429B29CF576A6B812C (ConnectToDevice_tED9F7E213942CA91D6807368C9ECD9ACAC94D8E8* __this, String_t* ___0_deviceAddress, ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* ___1_onConnected, ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* ___2_onDisconnected, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ConnectionChange onDisconnected) : base(true, true)
		BleCommand__ctor_mD7173BA8F5E4906439AB1B96AFA89425198D5FE6(__this, (bool)1, (bool)1, NULL);
		// _deviceAddress = deviceAddress;
		String_t* L_0 = ___0_deviceAddress;
		__this->____deviceAddress_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____deviceAddress_3), (void*)L_0);
		// OnConnected += onConnected;
		ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* L_1 = __this->___OnConnected_5;
		ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* L_2 = ___1_onConnected;
		Delegate_t* L_3;
		L_3 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_1, L_2, NULL);
		__this->___OnConnected_5 = ((ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC*)CastclassSealed((RuntimeObject*)L_3, ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnConnected_5), (void*)((ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC*)CastclassSealed((RuntimeObject*)L_3, ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC_il2cpp_TypeInfo_var)));
		// OnDisconnected += onDisconnected;
		ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* L_4 = __this->___OnDisconnected_6;
		ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* L_5 = ___2_onDisconnected;
		Delegate_t* L_6;
		L_6 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_4, L_5, NULL);
		__this->___OnDisconnected_6 = ((ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC*)CastclassSealed((RuntimeObject*)L_6, ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnDisconnected_6), (void*)((ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC*)CastclassSealed((RuntimeObject*)L_6, ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Android.BLE.Commands.ConnectToDevice::.ctor(System.String,Android.BLE.Commands.ConnectToDevice/ConnectionChange,Android.BLE.Commands.ConnectToDevice/ConnectionChange,Android.BLE.Commands.ConnectToDevice/ServiceDiscovered,Android.BLE.Commands.ConnectToDevice/CharacteristicDiscovered)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectToDevice__ctor_mE08C2E0F221FC38CD5C3DA2B58EFA07DE3733B43 (ConnectToDevice_tED9F7E213942CA91D6807368C9ECD9ACAC94D8E8* __this, String_t* ___0_deviceAddress, ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* ___1_onConnected, ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* ___2_onDisconnected, ServiceDiscovered_t8E900906F2BF530C0A835688CF30166E681EFE42* ___3_onServiceDiscovered, CharacteristicDiscovered_t54557FFD6C62C91E37BCC764034BBD605A2F73B5* ___4_onCharacteristicDiscovered, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacteristicDiscovered_t54557FFD6C62C91E37BCC764034BBD605A2F73B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServiceDiscovered_t8E900906F2BF530C0A835688CF30166E681EFE42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CharacteristicDiscovered onCharacteristicDiscovered) : base(true, true)
		BleCommand__ctor_mD7173BA8F5E4906439AB1B96AFA89425198D5FE6(__this, (bool)1, (bool)1, NULL);
		// _deviceAddress = deviceAddress;
		String_t* L_0 = ___0_deviceAddress;
		__this->____deviceAddress_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____deviceAddress_3), (void*)L_0);
		// OnConnected += onConnected;
		ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* L_1 = __this->___OnConnected_5;
		ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* L_2 = ___1_onConnected;
		Delegate_t* L_3;
		L_3 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_1, L_2, NULL);
		__this->___OnConnected_5 = ((ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC*)CastclassSealed((RuntimeObject*)L_3, ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnConnected_5), (void*)((ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC*)CastclassSealed((RuntimeObject*)L_3, ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC_il2cpp_TypeInfo_var)));
		// OnDisconnected += onDisconnected;
		ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* L_4 = __this->___OnDisconnected_6;
		ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* L_5 = ___2_onDisconnected;
		Delegate_t* L_6;
		L_6 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_4, L_5, NULL);
		__this->___OnDisconnected_6 = ((ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC*)CastclassSealed((RuntimeObject*)L_6, ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnDisconnected_6), (void*)((ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC*)CastclassSealed((RuntimeObject*)L_6, ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC_il2cpp_TypeInfo_var)));
		// OnServiceDiscovered += onServiceDiscovered;
		ServiceDiscovered_t8E900906F2BF530C0A835688CF30166E681EFE42* L_7 = __this->___OnServiceDiscovered_7;
		ServiceDiscovered_t8E900906F2BF530C0A835688CF30166E681EFE42* L_8 = ___3_onServiceDiscovered;
		Delegate_t* L_9;
		L_9 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_7, L_8, NULL);
		__this->___OnServiceDiscovered_7 = ((ServiceDiscovered_t8E900906F2BF530C0A835688CF30166E681EFE42*)CastclassSealed((RuntimeObject*)L_9, ServiceDiscovered_t8E900906F2BF530C0A835688CF30166E681EFE42_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnServiceDiscovered_7), (void*)((ServiceDiscovered_t8E900906F2BF530C0A835688CF30166E681EFE42*)CastclassSealed((RuntimeObject*)L_9, ServiceDiscovered_t8E900906F2BF530C0A835688CF30166E681EFE42_il2cpp_TypeInfo_var)));
		// OnCharacteristicDiscovered += onCharacteristicDiscovered;
		CharacteristicDiscovered_t54557FFD6C62C91E37BCC764034BBD605A2F73B5* L_10 = __this->___OnCharacteristicDiscovered_8;
		CharacteristicDiscovered_t54557FFD6C62C91E37BCC764034BBD605A2F73B5* L_11 = ___4_onCharacteristicDiscovered;
		Delegate_t* L_12;
		L_12 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_10, L_11, NULL);
		__this->___OnCharacteristicDiscovered_8 = ((CharacteristicDiscovered_t54557FFD6C62C91E37BCC764034BBD605A2F73B5*)CastclassSealed((RuntimeObject*)L_12, CharacteristicDiscovered_t54557FFD6C62C91E37BCC764034BBD605A2F73B5_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnCharacteristicDiscovered_8), (void*)((CharacteristicDiscovered_t54557FFD6C62C91E37BCC764034BBD605A2F73B5*)CastclassSealed((RuntimeObject*)L_12, CharacteristicDiscovered_t54557FFD6C62C91E37BCC764034BBD605A2F73B5_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Android.BLE.Commands.ConnectToDevice::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectToDevice_Start_mB639C6E9AD0AAA730DFCD7D40EDB4564B3CD3B82 (ConnectToDevice_tED9F7E213942CA91D6807368C9ECD9ACAC94D8E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBFC7A5A11A41D426D4DED9BCFDD3800907E9354);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override void Start() => BleManager.SendCommand("connectToDevice", _deviceAddress);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = __this->____deviceAddress_3;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		BleManager_SendCommand_m6B488A06103C2FA52D5DF05578F1B6D50BB1DE6C(_stringLiteralDBFC7A5A11A41D426D4DED9BCFDD3800907E9354, L_1, NULL);
		return;
	}
}
// System.Void Android.BLE.Commands.ConnectToDevice::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectToDevice_Disconnect_m8ED6AC182BB2D95B8F9030FC781D583CF9C5622D (ConnectToDevice_tED9F7E213942CA91D6807368C9ECD9ACAC94D8E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6EF02D6E3BE1507B45BF565B8B7514706121D21);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void Disconnect() => BleManager.SendCommand("disconnectDevice", _deviceAddress);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = __this->____deviceAddress_3;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		BleManager_SendCommand_m6B488A06103C2FA52D5DF05578F1B6D50BB1DE6C(_stringLiteralC6EF02D6E3BE1507B45BF565B8B7514706121D21, L_1, NULL);
		return;
	}
}
// System.Boolean Android.BLE.Commands.ConnectToDevice::CommandReceived(Android.BLE.BleObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectToDevice_CommandReceived_m005C731D96E91736F8B0F73EBC52E1714F1C44AF (ConnectToDevice_tED9F7E213942CA91D6807368C9ECD9ACAC94D8E8* __this, BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F5C9D8EDC1903B081CD8F4752009233F7128032);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76273292A1A6BD0D9FF8E3BD08F3478B31C2B41D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A12AAB3BEDC5ED8F686FFB84CB9FD25E545F5F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8E1820878060B06AA7E88F43230BA9351E6E99D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE725303E9AB2D7EF60880E8A2797728DE4F632AD);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* G_B9_0 = NULL;
	ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* G_B8_0 = NULL;
	ServiceDiscovered_t8E900906F2BF530C0A835688CF30166E681EFE42* G_B12_0 = NULL;
	ServiceDiscovered_t8E900906F2BF530C0A835688CF30166E681EFE42* G_B11_0 = NULL;
	CharacteristicDiscovered_t54557FFD6C62C91E37BCC764034BBD605A2F73B5* G_B15_0 = NULL;
	CharacteristicDiscovered_t54557FFD6C62C91E37BCC764034BBD605A2F73B5* G_B14_0 = NULL;
	ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* G_B18_0 = NULL;
	ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* G_B17_0 = NULL;
	{
		// if (string.Equals(obj.Device, _deviceAddress))
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_0 = ___0_obj;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = BleObject_get_Device_m7E208B87BAB1C81C1D1782A3151EFE518E66568D_inline(L_0, NULL);
		String_t* L_2 = __this->____deviceAddress_3;
		bool L_3;
		L_3 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_00dd;
		}
	}
	{
		// switch (obj.Command)
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_4 = ___0_obj;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = BleObject_get_Command_m23B80AA6C0E85B8215130069AE67194E5F26E494_inline(L_4, NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteralA8E1820878060B06AA7E88F43230BA9351E6E99D, NULL);
		if (L_7)
		{
			goto IL_0060;
		}
	}
	{
		String_t* L_8 = V_0;
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, _stringLiteral8A12AAB3BEDC5ED8F686FFB84CB9FD25E545F5F1, NULL);
		if (L_9)
		{
			goto IL_0060;
		}
	}
	{
		String_t* L_10 = V_0;
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, _stringLiteral0F5C9D8EDC1903B081CD8F4752009233F7128032, NULL);
		if (L_11)
		{
			goto IL_0080;
		}
	}
	{
		String_t* L_12 = V_0;
		bool L_13;
		L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_12, _stringLiteralE725303E9AB2D7EF60880E8A2797728DE4F632AD, NULL);
		if (L_13)
		{
			goto IL_009f;
		}
	}
	{
		String_t* L_14 = V_0;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteral76273292A1A6BD0D9FF8E3BD08F3478B31C2B41D, NULL);
		if (L_15)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_00dd;
	}

IL_0060:
	{
		// _isConnected = true;
		__this->____isConnected_4 = (bool)1;
		// OnConnected?.Invoke(obj.Device);
		ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* L_16 = __this->___OnConnected_5;
		ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* L_17 = L_16;
		G_B8_0 = L_17;
		if (L_17)
		{
			G_B9_0 = L_17;
			goto IL_0073;
		}
	}
	{
		goto IL_00dd;
	}

IL_0073:
	{
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_18 = ___0_obj;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = BleObject_get_Device_m7E208B87BAB1C81C1D1782A3151EFE518E66568D_inline(L_18, NULL);
		NullCheck(G_B9_0);
		ConnectionChange_Invoke_mDF5F37867F22655AB5E9129A55715F47C4E36490_inline(G_B9_0, L_19, NULL);
		// break;
		goto IL_00dd;
	}

IL_0080:
	{
		// OnServiceDiscovered?.Invoke(obj.Device, obj.Service);
		ServiceDiscovered_t8E900906F2BF530C0A835688CF30166E681EFE42* L_20 = __this->___OnServiceDiscovered_7;
		ServiceDiscovered_t8E900906F2BF530C0A835688CF30166E681EFE42* L_21 = L_20;
		G_B11_0 = L_21;
		if (L_21)
		{
			G_B12_0 = L_21;
			goto IL_008c;
		}
	}
	{
		goto IL_00dd;
	}

IL_008c:
	{
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_22 = ___0_obj;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = BleObject_get_Device_m7E208B87BAB1C81C1D1782A3151EFE518E66568D_inline(L_22, NULL);
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_24 = ___0_obj;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = BleObject_get_Service_m857919014988B7444908F4191921ECA8C0418D3D_inline(L_24, NULL);
		NullCheck(G_B12_0);
		ServiceDiscovered_Invoke_m3B03816311CAC85CEDCC15AD26152FC5B2A5515F_inline(G_B12_0, L_23, L_25, NULL);
		// break;
		goto IL_00dd;
	}

IL_009f:
	{
		// OnCharacteristicDiscovered?.Invoke(obj.Device, obj.Service, obj.Characteristic);
		CharacteristicDiscovered_t54557FFD6C62C91E37BCC764034BBD605A2F73B5* L_26 = __this->___OnCharacteristicDiscovered_8;
		CharacteristicDiscovered_t54557FFD6C62C91E37BCC764034BBD605A2F73B5* L_27 = L_26;
		G_B14_0 = L_27;
		if (L_27)
		{
			G_B15_0 = L_27;
			goto IL_00ab;
		}
	}
	{
		goto IL_00dd;
	}

IL_00ab:
	{
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_28 = ___0_obj;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = BleObject_get_Device_m7E208B87BAB1C81C1D1782A3151EFE518E66568D_inline(L_28, NULL);
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_30 = ___0_obj;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = BleObject_get_Service_m857919014988B7444908F4191921ECA8C0418D3D_inline(L_30, NULL);
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_32 = ___0_obj;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = BleObject_get_Characteristic_m59461AA54359D04B9AED4A5748B8837EE2A02C3D_inline(L_32, NULL);
		NullCheck(G_B15_0);
		CharacteristicDiscovered_Invoke_mE43B22D1F16F2051CF235A75C8DFF42B99DB74D8_inline(G_B15_0, L_29, L_31, L_33, NULL);
		// break;
		goto IL_00dd;
	}

IL_00c4:
	{
		// OnDisconnected?.Invoke(obj.Device);
		ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* L_34 = __this->___OnDisconnected_6;
		ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* L_35 = L_34;
		G_B17_0 = L_35;
		if (L_35)
		{
			G_B18_0 = L_35;
			goto IL_00d0;
		}
	}
	{
		goto IL_00db;
	}

IL_00d0:
	{
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_36 = ___0_obj;
		NullCheck(L_36);
		String_t* L_37;
		L_37 = BleObject_get_Device_m7E208B87BAB1C81C1D1782A3151EFE518E66568D_inline(L_36, NULL);
		NullCheck(G_B18_0);
		ConnectionChange_Invoke_mDF5F37867F22655AB5E9129A55715F47C4E36490_inline(G_B18_0, L_37, NULL);
	}

IL_00db:
	{
		// return true;
		return (bool)1;
	}

IL_00dd:
	{
		// return false;
		return (bool)0;
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
void ConnectionChange_Invoke_mDF5F37867F22655AB5E9129A55715F47C4E36490_Multicast(ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* __this, String_t* ___0_deviceAddress, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* currentDelegate = reinterpret_cast<ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_deviceAddress, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ConnectionChange_Invoke_mDF5F37867F22655AB5E9129A55715F47C4E36490_OpenInst(ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* __this, String_t* ___0_deviceAddress, const RuntimeMethod* method)
{
	NullCheck(___0_deviceAddress);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_deviceAddress, method);
}
void ConnectionChange_Invoke_mDF5F37867F22655AB5E9129A55715F47C4E36490_OpenStatic(ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* __this, String_t* ___0_deviceAddress, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_deviceAddress, method);
}
void ConnectionChange_Invoke_mDF5F37867F22655AB5E9129A55715F47C4E36490_OpenStaticInvoker(ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* __this, String_t* ___0_deviceAddress, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_deviceAddress);
}
void ConnectionChange_Invoke_mDF5F37867F22655AB5E9129A55715F47C4E36490_ClosedStaticInvoker(ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* __this, String_t* ___0_deviceAddress, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_deviceAddress);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC (ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* __this, String_t* ___0_deviceAddress, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_deviceAddress' to native representation
	char* ____0_deviceAddress_marshaled = NULL;
	____0_deviceAddress_marshaled = il2cpp_codegen_marshal_string(___0_deviceAddress);

	// Native function invocation
	il2cppPInvokeFunc(____0_deviceAddress_marshaled);

	// Marshaling cleanup of parameter '___0_deviceAddress' native representation
	il2cpp_codegen_marshal_free(____0_deviceAddress_marshaled);
	____0_deviceAddress_marshaled = NULL;

}
// System.Void Android.BLE.Commands.ConnectToDevice/ConnectionChange::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionChange__ctor_m6C8E112F70B4ABFB5E97EA23A0ED349FD047249E (ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ConnectionChange_Invoke_mDF5F37867F22655AB5E9129A55715F47C4E36490_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ConnectionChange_Invoke_mDF5F37867F22655AB5E9129A55715F47C4E36490_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ConnectionChange_Invoke_mDF5F37867F22655AB5E9129A55715F47C4E36490_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ConnectionChange_Invoke_mDF5F37867F22655AB5E9129A55715F47C4E36490_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ConnectionChange_Invoke_mDF5F37867F22655AB5E9129A55715F47C4E36490_Multicast;
}
// System.Void Android.BLE.Commands.ConnectToDevice/ConnectionChange::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionChange_Invoke_mDF5F37867F22655AB5E9129A55715F47C4E36490 (ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* __this, String_t* ___0_deviceAddress, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_deviceAddress, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Android.BLE.Commands.ConnectToDevice/ConnectionChange::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionChange_BeginInvoke_mF26F240B9F5F481C69762F94770FDDD0B1AA241E (ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* __this, String_t* ___0_deviceAddress, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_deviceAddress;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void Android.BLE.Commands.ConnectToDevice/ConnectionChange::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionChange_EndInvoke_mB272AB18B2850FD9EB624A6C80AC790FCCCC08C7 (ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
void ServiceDiscovered_Invoke_m3B03816311CAC85CEDCC15AD26152FC5B2A5515F_Multicast(ServiceDiscovered_t8E900906F2BF530C0A835688CF30166E681EFE42* __this, String_t* ___0_deviceAddress, String_t* ___1_serviceAddress, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ServiceDiscovered_t8E900906F2BF530C0A835688CF30166E681EFE42* currentDelegate = reinterpret_cast<ServiceDiscovered_t8E900906F2BF530C0A835688CF30166E681EFE42*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_deviceAddress, ___1_serviceAddress, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ServiceDiscovered_Invoke_m3B03816311CAC85CEDCC15AD26152FC5B2A5515F_OpenInst(ServiceDiscovered_t8E900906F2BF530C0A835688CF30166E681EFE42* __this, String_t* ___0_deviceAddress, String_t* ___1_serviceAddress, const RuntimeMethod* method)
{
	NullCheck(___0_deviceAddress);
	typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_deviceAddress, ___1_serviceAddress, method);
}
void ServiceDiscovered_Invoke_m3B03816311CAC85CEDCC15AD26152FC5B2A5515F_OpenStatic(ServiceDiscovered_t8E900906F2BF530C0A835688CF30166E681EFE42* __this, String_t* ___0_deviceAddress, String_t* ___1_serviceAddress, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_deviceAddress, ___1_serviceAddress, method);
}
void ServiceDiscovered_Invoke_m3B03816311CAC85CEDCC15AD26152FC5B2A5515F_OpenStaticInvoker(ServiceDiscovered_t8E900906F2BF530C0A835688CF30166E681EFE42* __this, String_t* ___0_deviceAddress, String_t* ___1_serviceAddress, const RuntimeMethod* method)
{
	InvokerActionInvoker2< String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_deviceAddress, ___1_serviceAddress);
}
void ServiceDiscovered_Invoke_m3B03816311CAC85CEDCC15AD26152FC5B2A5515F_ClosedStaticInvoker(ServiceDiscovered_t8E900906F2BF530C0A835688CF30166E681EFE42* __this, String_t* ___0_deviceAddress, String_t* ___1_serviceAddress, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_deviceAddress, ___1_serviceAddress);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ServiceDiscovered_t8E900906F2BF530C0A835688CF30166E681EFE42 (ServiceDiscovered_t8E900906F2BF530C0A835688CF30166E681EFE42* __this, String_t* ___0_deviceAddress, String_t* ___1_serviceAddress, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_deviceAddress' to native representation
	char* ____0_deviceAddress_marshaled = NULL;
	____0_deviceAddress_marshaled = il2cpp_codegen_marshal_string(___0_deviceAddress);

	// Marshaling of parameter '___1_serviceAddress' to native representation
	char* ____1_serviceAddress_marshaled = NULL;
	____1_serviceAddress_marshaled = il2cpp_codegen_marshal_string(___1_serviceAddress);

	// Native function invocation
	il2cppPInvokeFunc(____0_deviceAddress_marshaled, ____1_serviceAddress_marshaled);

	// Marshaling cleanup of parameter '___0_deviceAddress' native representation
	il2cpp_codegen_marshal_free(____0_deviceAddress_marshaled);
	____0_deviceAddress_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_serviceAddress' native representation
	il2cpp_codegen_marshal_free(____1_serviceAddress_marshaled);
	____1_serviceAddress_marshaled = NULL;

}
// System.Void Android.BLE.Commands.ConnectToDevice/ServiceDiscovered::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceDiscovered__ctor_m02D7E8788B3B12736652537F142BFECA05A55354 (ServiceDiscovered_t8E900906F2BF530C0A835688CF30166E681EFE42* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ServiceDiscovered_Invoke_m3B03816311CAC85CEDCC15AD26152FC5B2A5515F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ServiceDiscovered_Invoke_m3B03816311CAC85CEDCC15AD26152FC5B2A5515F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ServiceDiscovered_Invoke_m3B03816311CAC85CEDCC15AD26152FC5B2A5515F_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ServiceDiscovered_Invoke_m3B03816311CAC85CEDCC15AD26152FC5B2A5515F_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ServiceDiscovered_Invoke_m3B03816311CAC85CEDCC15AD26152FC5B2A5515F_Multicast;
}
// System.Void Android.BLE.Commands.ConnectToDevice/ServiceDiscovered::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceDiscovered_Invoke_m3B03816311CAC85CEDCC15AD26152FC5B2A5515F (ServiceDiscovered_t8E900906F2BF530C0A835688CF30166E681EFE42* __this, String_t* ___0_deviceAddress, String_t* ___1_serviceAddress, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_deviceAddress, ___1_serviceAddress, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Android.BLE.Commands.ConnectToDevice/ServiceDiscovered::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceDiscovered_BeginInvoke_mF1C6AA02E3F478A14C7C4C5792068A95845E0651 (ServiceDiscovered_t8E900906F2BF530C0A835688CF30166E681EFE42* __this, String_t* ___0_deviceAddress, String_t* ___1_serviceAddress, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_deviceAddress;
	__d_args[1] = ___1_serviceAddress;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void Android.BLE.Commands.ConnectToDevice/ServiceDiscovered::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceDiscovered_EndInvoke_m8C75E55667EDA4FFC1B0734231FEF29578322B0E (ServiceDiscovered_t8E900906F2BF530C0A835688CF30166E681EFE42* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
void CharacteristicDiscovered_Invoke_mE43B22D1F16F2051CF235A75C8DFF42B99DB74D8_Multicast(CharacteristicDiscovered_t54557FFD6C62C91E37BCC764034BBD605A2F73B5* __this, String_t* ___0_deviceAddress, String_t* ___1_serviceAddress, String_t* ___2_characteristicAddress, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CharacteristicDiscovered_t54557FFD6C62C91E37BCC764034BBD605A2F73B5* currentDelegate = reinterpret_cast<CharacteristicDiscovered_t54557FFD6C62C91E37BCC764034BBD605A2F73B5*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_deviceAddress, ___1_serviceAddress, ___2_characteristicAddress, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void CharacteristicDiscovered_Invoke_mE43B22D1F16F2051CF235A75C8DFF42B99DB74D8_OpenInst(CharacteristicDiscovered_t54557FFD6C62C91E37BCC764034BBD605A2F73B5* __this, String_t* ___0_deviceAddress, String_t* ___1_serviceAddress, String_t* ___2_characteristicAddress, const RuntimeMethod* method)
{
	NullCheck(___0_deviceAddress);
	typedef void (*FunctionPointerType) (String_t*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_deviceAddress, ___1_serviceAddress, ___2_characteristicAddress, method);
}
void CharacteristicDiscovered_Invoke_mE43B22D1F16F2051CF235A75C8DFF42B99DB74D8_OpenStatic(CharacteristicDiscovered_t54557FFD6C62C91E37BCC764034BBD605A2F73B5* __this, String_t* ___0_deviceAddress, String_t* ___1_serviceAddress, String_t* ___2_characteristicAddress, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_deviceAddress, ___1_serviceAddress, ___2_characteristicAddress, method);
}
void CharacteristicDiscovered_Invoke_mE43B22D1F16F2051CF235A75C8DFF42B99DB74D8_OpenStaticInvoker(CharacteristicDiscovered_t54557FFD6C62C91E37BCC764034BBD605A2F73B5* __this, String_t* ___0_deviceAddress, String_t* ___1_serviceAddress, String_t* ___2_characteristicAddress, const RuntimeMethod* method)
{
	InvokerActionInvoker3< String_t*, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_deviceAddress, ___1_serviceAddress, ___2_characteristicAddress);
}
void CharacteristicDiscovered_Invoke_mE43B22D1F16F2051CF235A75C8DFF42B99DB74D8_ClosedStaticInvoker(CharacteristicDiscovered_t54557FFD6C62C91E37BCC764034BBD605A2F73B5* __this, String_t* ___0_deviceAddress, String_t* ___1_serviceAddress, String_t* ___2_characteristicAddress, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, String_t*, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_deviceAddress, ___1_serviceAddress, ___2_characteristicAddress);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CharacteristicDiscovered_t54557FFD6C62C91E37BCC764034BBD605A2F73B5 (CharacteristicDiscovered_t54557FFD6C62C91E37BCC764034BBD605A2F73B5* __this, String_t* ___0_deviceAddress, String_t* ___1_serviceAddress, String_t* ___2_characteristicAddress, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_deviceAddress' to native representation
	char* ____0_deviceAddress_marshaled = NULL;
	____0_deviceAddress_marshaled = il2cpp_codegen_marshal_string(___0_deviceAddress);

	// Marshaling of parameter '___1_serviceAddress' to native representation
	char* ____1_serviceAddress_marshaled = NULL;
	____1_serviceAddress_marshaled = il2cpp_codegen_marshal_string(___1_serviceAddress);

	// Marshaling of parameter '___2_characteristicAddress' to native representation
	char* ____2_characteristicAddress_marshaled = NULL;
	____2_characteristicAddress_marshaled = il2cpp_codegen_marshal_string(___2_characteristicAddress);

	// Native function invocation
	il2cppPInvokeFunc(____0_deviceAddress_marshaled, ____1_serviceAddress_marshaled, ____2_characteristicAddress_marshaled);

	// Marshaling cleanup of parameter '___0_deviceAddress' native representation
	il2cpp_codegen_marshal_free(____0_deviceAddress_marshaled);
	____0_deviceAddress_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_serviceAddress' native representation
	il2cpp_codegen_marshal_free(____1_serviceAddress_marshaled);
	____1_serviceAddress_marshaled = NULL;

	// Marshaling cleanup of parameter '___2_characteristicAddress' native representation
	il2cpp_codegen_marshal_free(____2_characteristicAddress_marshaled);
	____2_characteristicAddress_marshaled = NULL;

}
// System.Void Android.BLE.Commands.ConnectToDevice/CharacteristicDiscovered::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacteristicDiscovered__ctor_m04B9DE833B7AE167CB4BD99EC89EF1A8AB9A0B11 (CharacteristicDiscovered_t54557FFD6C62C91E37BCC764034BBD605A2F73B5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CharacteristicDiscovered_Invoke_mE43B22D1F16F2051CF235A75C8DFF42B99DB74D8_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CharacteristicDiscovered_Invoke_mE43B22D1F16F2051CF235A75C8DFF42B99DB74D8_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CharacteristicDiscovered_Invoke_mE43B22D1F16F2051CF235A75C8DFF42B99DB74D8_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&CharacteristicDiscovered_Invoke_mE43B22D1F16F2051CF235A75C8DFF42B99DB74D8_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&CharacteristicDiscovered_Invoke_mE43B22D1F16F2051CF235A75C8DFF42B99DB74D8_Multicast;
}
// System.Void Android.BLE.Commands.ConnectToDevice/CharacteristicDiscovered::Invoke(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacteristicDiscovered_Invoke_mE43B22D1F16F2051CF235A75C8DFF42B99DB74D8 (CharacteristicDiscovered_t54557FFD6C62C91E37BCC764034BBD605A2F73B5* __this, String_t* ___0_deviceAddress, String_t* ___1_serviceAddress, String_t* ___2_characteristicAddress, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_deviceAddress, ___1_serviceAddress, ___2_characteristicAddress, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Android.BLE.Commands.ConnectToDevice/CharacteristicDiscovered::BeginInvoke(System.String,System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CharacteristicDiscovered_BeginInvoke_m0A48C540491586B0FBE70CFE18243EA9B7C9C72B (CharacteristicDiscovered_t54557FFD6C62C91E37BCC764034BBD605A2F73B5* __this, String_t* ___0_deviceAddress, String_t* ___1_serviceAddress, String_t* ___2_characteristicAddress, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	void *__d_args[4] = {0};
	__d_args[0] = ___0_deviceAddress;
	__d_args[1] = ___1_serviceAddress;
	__d_args[2] = ___2_characteristicAddress;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void Android.BLE.Commands.ConnectToDevice/CharacteristicDiscovered::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacteristicDiscovered_EndInvoke_mFE5BDB1783C59351F98E6C71BBA05E99472629F1 (CharacteristicDiscovered_t54557FFD6C62C91E37BCC764034BBD605A2F73B5* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
// System.Void Android.BLE.Commands.DiscoverDevices::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiscoverDevices__ctor_m283444E78CAFE6683F9CCBAF7879F3C40F2C3B0F (DiscoverDevices_t992CF20136BFBF9A23C6B4CAFCD517723D440A22* __this, int32_t ___0_discoverTime, const RuntimeMethod* method) 
{
	{
		// public DiscoverDevices(int discoverTime = StandardDiscoverTime) : base(true, false)
		BleCommand__ctor_mD7173BA8F5E4906439AB1B96AFA89425198D5FE6(__this, (bool)1, (bool)0, NULL);
		// _discoverTime = discoverTime;
		int32_t L_0 = ___0_discoverTime;
		__this->____discoverTime_5 = L_0;
		// }
		return;
	}
}
// System.Void Android.BLE.Commands.DiscoverDevices::.ctor(System.Action`2<System.String,System.String>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiscoverDevices__ctor_mA88EEFB6C8B5330B28F0753A61F1B64819BF915A (DiscoverDevices_t992CF20136BFBF9A23C6B4CAFCD517723D440A22* __this, Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* ___0_onDeviceDiscovered, int32_t ___1_discoverTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_m8FA30194997244EC0072D6B437818A22B65F2854_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceDiscovered_tB6FDC91742237A0A8C1E38B632D244FFBCAE3ACB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DiscoverDevices(Action<string, string> onDeviceDiscovered, int discoverTime = StandardDiscoverTime) : base(true, false)
		BleCommand__ctor_mD7173BA8F5E4906439AB1B96AFA89425198D5FE6(__this, (bool)1, (bool)0, NULL);
		// OnDeviceDiscovered += new DeviceDiscovered(onDeviceDiscovered);
		DeviceDiscovered_tB6FDC91742237A0A8C1E38B632D244FFBCAE3ACB* L_0 = __this->___OnDeviceDiscovered_4;
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_1 = ___0_onDeviceDiscovered;
		DeviceDiscovered_tB6FDC91742237A0A8C1E38B632D244FFBCAE3ACB* L_2 = (DeviceDiscovered_tB6FDC91742237A0A8C1E38B632D244FFBCAE3ACB*)il2cpp_codegen_object_new(DeviceDiscovered_tB6FDC91742237A0A8C1E38B632D244FFBCAE3ACB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DeviceDiscovered__ctor_mDE7006CDECA701C13FA7A9F2A89212138288A606(L_2, L_1, (intptr_t)((void*)Action_2_Invoke_m8FA30194997244EC0072D6B437818A22B65F2854_RuntimeMethod_var), NULL);
		Delegate_t* L_3;
		L_3 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_0, L_2, NULL);
		__this->___OnDeviceDiscovered_4 = ((DeviceDiscovered_tB6FDC91742237A0A8C1E38B632D244FFBCAE3ACB*)CastclassSealed((RuntimeObject*)L_3, DeviceDiscovered_tB6FDC91742237A0A8C1E38B632D244FFBCAE3ACB_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnDeviceDiscovered_4), (void*)((DeviceDiscovered_tB6FDC91742237A0A8C1E38B632D244FFBCAE3ACB*)CastclassSealed((RuntimeObject*)L_3, DeviceDiscovered_tB6FDC91742237A0A8C1E38B632D244FFBCAE3ACB_il2cpp_TypeInfo_var)));
		// _discoverTime = discoverTime;
		int32_t L_4 = ___1_discoverTime;
		__this->____discoverTime_5 = L_4;
		// }
		return;
	}
}
// System.Void Android.BLE.Commands.DiscoverDevices::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiscoverDevices_Start_mBA805C2EFEA47F91FA3C45912476574FE909BBED (DiscoverDevices_t992CF20136BFBF9A23C6B4CAFCD517723D440A22* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE65CFE5DA44ADF4FE34CFFDFB1FCBD9C1F095ED2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override void Start() => BleManager.SendCommand("scanBleDevices", _discoverTime);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		int32_t L_2 = __this->____discoverTime_5;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		BleManager_SendCommand_m6B488A06103C2FA52D5DF05578F1B6D50BB1DE6C(_stringLiteralE65CFE5DA44ADF4FE34CFFDFB1FCBD9C1F095ED2, L_1, NULL);
		return;
	}
}
// System.Void Android.BLE.Commands.DiscoverDevices::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiscoverDevices_End_m60B816DF32D12A359056D6E9BE6D8BD6AB0DD225 (DiscoverDevices_t992CF20136BFBF9A23C6B4CAFCD517723D440A22* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CB5C09AAFDA246C883376D41442500FDF5CC4B2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override void End() => BleManager.SendCommand("stopScanBleDevices");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		BleManager_SendCommand_m6B488A06103C2FA52D5DF05578F1B6D50BB1DE6C(_stringLiteral1CB5C09AAFDA246C883376D41442500FDF5CC4B2, L_0, NULL);
		return;
	}
}
// System.Boolean Android.BLE.Commands.DiscoverDevices::CommandReceived(Android.BLE.BleObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DiscoverDevices_CommandReceived_m525B938DC8C0F06E96992177FBB69F9E9887BE25 (DiscoverDevices_t992CF20136BFBF9A23C6B4CAFCD517723D440A22* __this, BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10D327C0F3F7F092200F0AAEFBC01F41D7C4AE1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAEFA6B295B568E9E88A7E31306684C605BB703E);
		s_Il2CppMethodInitialized = true;
	}
	DeviceDiscovered_tB6FDC91742237A0A8C1E38B632D244FFBCAE3ACB* G_B3_0 = NULL;
	DeviceDiscovered_tB6FDC91742237A0A8C1E38B632D244FFBCAE3ACB* G_B2_0 = NULL;
	{
		// if (string.Equals(obj.Command, "DiscoveredDevice"))
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_0 = ___0_obj;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = BleObject_get_Command_m23B80AA6C0E85B8215130069AE67194E5F26E494_inline(L_0, NULL);
		bool L_2;
		L_2 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_1, _stringLiteral10D327C0F3F7F092200F0AAEFBC01F41D7C4AE1C, NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// OnDeviceDiscovered?.Invoke(obj.Device, obj.Name);
		DeviceDiscovered_tB6FDC91742237A0A8C1E38B632D244FFBCAE3ACB* L_3 = __this->___OnDeviceDiscovered_4;
		DeviceDiscovered_tB6FDC91742237A0A8C1E38B632D244FFBCAE3ACB* L_4 = L_3;
		G_B2_0 = L_4;
		if (L_4)
		{
			G_B3_0 = L_4;
			goto IL_001e;
		}
	}
	{
		goto IL_002f;
	}

IL_001e:
	{
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_5 = ___0_obj;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = BleObject_get_Device_m7E208B87BAB1C81C1D1782A3151EFE518E66568D_inline(L_5, NULL);
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_7 = ___0_obj;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = BleObject_get_Name_m5A412E454187BB2EB9C0F09EC020FFA0E9F3A346_inline(L_7, NULL);
		NullCheck(G_B3_0);
		DeviceDiscovered_Invoke_m79252BF9D7A9D08839E4201A28CC4A449EA61C24_inline(G_B3_0, L_6, L_8, NULL);
	}

IL_002f:
	{
		// return string.Equals(obj.Command, "FinishedDiscovering");
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_9 = ___0_obj;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = BleObject_get_Command_m23B80AA6C0E85B8215130069AE67194E5F26E494_inline(L_9, NULL);
		bool L_11;
		L_11 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_10, _stringLiteralAAEFA6B295B568E9E88A7E31306684C605BB703E, NULL);
		return L_11;
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
void DeviceDiscovered_Invoke_m79252BF9D7A9D08839E4201A28CC4A449EA61C24_Multicast(DeviceDiscovered_tB6FDC91742237A0A8C1E38B632D244FFBCAE3ACB* __this, String_t* ___0_deviceAddress, String_t* ___1_deviceName, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DeviceDiscovered_tB6FDC91742237A0A8C1E38B632D244FFBCAE3ACB* currentDelegate = reinterpret_cast<DeviceDiscovered_tB6FDC91742237A0A8C1E38B632D244FFBCAE3ACB*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_deviceAddress, ___1_deviceName, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DeviceDiscovered_Invoke_m79252BF9D7A9D08839E4201A28CC4A449EA61C24_OpenInst(DeviceDiscovered_tB6FDC91742237A0A8C1E38B632D244FFBCAE3ACB* __this, String_t* ___0_deviceAddress, String_t* ___1_deviceName, const RuntimeMethod* method)
{
	NullCheck(___0_deviceAddress);
	typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_deviceAddress, ___1_deviceName, method);
}
void DeviceDiscovered_Invoke_m79252BF9D7A9D08839E4201A28CC4A449EA61C24_OpenStatic(DeviceDiscovered_tB6FDC91742237A0A8C1E38B632D244FFBCAE3ACB* __this, String_t* ___0_deviceAddress, String_t* ___1_deviceName, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_deviceAddress, ___1_deviceName, method);
}
void DeviceDiscovered_Invoke_m79252BF9D7A9D08839E4201A28CC4A449EA61C24_OpenStaticInvoker(DeviceDiscovered_tB6FDC91742237A0A8C1E38B632D244FFBCAE3ACB* __this, String_t* ___0_deviceAddress, String_t* ___1_deviceName, const RuntimeMethod* method)
{
	InvokerActionInvoker2< String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_deviceAddress, ___1_deviceName);
}
void DeviceDiscovered_Invoke_m79252BF9D7A9D08839E4201A28CC4A449EA61C24_ClosedStaticInvoker(DeviceDiscovered_tB6FDC91742237A0A8C1E38B632D244FFBCAE3ACB* __this, String_t* ___0_deviceAddress, String_t* ___1_deviceName, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_deviceAddress, ___1_deviceName);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DeviceDiscovered_tB6FDC91742237A0A8C1E38B632D244FFBCAE3ACB (DeviceDiscovered_tB6FDC91742237A0A8C1E38B632D244FFBCAE3ACB* __this, String_t* ___0_deviceAddress, String_t* ___1_deviceName, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_deviceAddress' to native representation
	char* ____0_deviceAddress_marshaled = NULL;
	____0_deviceAddress_marshaled = il2cpp_codegen_marshal_string(___0_deviceAddress);

	// Marshaling of parameter '___1_deviceName' to native representation
	char* ____1_deviceName_marshaled = NULL;
	____1_deviceName_marshaled = il2cpp_codegen_marshal_string(___1_deviceName);

	// Native function invocation
	il2cppPInvokeFunc(____0_deviceAddress_marshaled, ____1_deviceName_marshaled);

	// Marshaling cleanup of parameter '___0_deviceAddress' native representation
	il2cpp_codegen_marshal_free(____0_deviceAddress_marshaled);
	____0_deviceAddress_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_deviceName' native representation
	il2cpp_codegen_marshal_free(____1_deviceName_marshaled);
	____1_deviceName_marshaled = NULL;

}
// System.Void Android.BLE.Commands.DiscoverDevices/DeviceDiscovered::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceDiscovered__ctor_mDE7006CDECA701C13FA7A9F2A89212138288A606 (DeviceDiscovered_tB6FDC91742237A0A8C1E38B632D244FFBCAE3ACB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DeviceDiscovered_Invoke_m79252BF9D7A9D08839E4201A28CC4A449EA61C24_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DeviceDiscovered_Invoke_m79252BF9D7A9D08839E4201A28CC4A449EA61C24_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DeviceDiscovered_Invoke_m79252BF9D7A9D08839E4201A28CC4A449EA61C24_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&DeviceDiscovered_Invoke_m79252BF9D7A9D08839E4201A28CC4A449EA61C24_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&DeviceDiscovered_Invoke_m79252BF9D7A9D08839E4201A28CC4A449EA61C24_Multicast;
}
// System.Void Android.BLE.Commands.DiscoverDevices/DeviceDiscovered::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceDiscovered_Invoke_m79252BF9D7A9D08839E4201A28CC4A449EA61C24 (DeviceDiscovered_tB6FDC91742237A0A8C1E38B632D244FFBCAE3ACB* __this, String_t* ___0_deviceAddress, String_t* ___1_deviceName, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_deviceAddress, ___1_deviceName, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Android.BLE.Commands.DiscoverDevices/DeviceDiscovered::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeviceDiscovered_BeginInvoke_mA9E2657A905482DA0432B5DA1D1CD7320C328226 (DeviceDiscovered_tB6FDC91742237A0A8C1E38B632D244FFBCAE3ACB* __this, String_t* ___0_deviceAddress, String_t* ___1_deviceName, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_deviceAddress;
	__d_args[1] = ___1_deviceName;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void Android.BLE.Commands.DiscoverDevices/DeviceDiscovered::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceDiscovered_EndInvoke_mBFB339A552F6BD5474E09523071824160C4B983E (DeviceDiscovered_tB6FDC91742237A0A8C1E38B632D244FFBCAE3ACB* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
// System.Void Android.BLE.Commands.ReadFromCharacteristic::.ctor(System.String,System.String,System.String,Android.BLE.Commands.ReadFromCharacteristic/ReadCharacteristicValueReceived,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadFromCharacteristic__ctor_m6F5F9E63D232DE56C2A4392AB41E0B71FBB7E05C (ReadFromCharacteristic_t6A2EA55768B2FE5E72EA4985B428B1548282926B* __this, String_t* ___0_deviceAddress, String_t* ___1_serviceAddress, String_t* ___2_characteristicAddress, ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB* ___3_valueReceived, bool ___4_customGatt, const RuntimeMethod* method) 
{
	{
		// public ReadFromCharacteristic(string deviceAddress, string serviceAddress, string characteristicAddress, ReadCharacteristicValueReceived valueReceived, bool customGatt = false) : base(false, false)
		BleCommand__ctor_mD7173BA8F5E4906439AB1B96AFA89425198D5FE6(__this, (bool)0, (bool)0, NULL);
		// DeviceAddress = deviceAddress;
		String_t* L_0 = ___0_deviceAddress;
		__this->___DeviceAddress_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DeviceAddress_3), (void*)L_0);
		// Service = serviceAddress;
		String_t* L_1 = ___1_serviceAddress;
		__this->___Service_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Service_4), (void*)L_1);
		// Characteristic = characteristicAddress;
		String_t* L_2 = ___2_characteristicAddress;
		__this->___Characteristic_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Characteristic_5), (void*)L_2);
		// OnReadCharacteristicValueReceived = valueReceived;
		ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB* L_3 = ___3_valueReceived;
		__this->___OnReadCharacteristicValueReceived_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnReadCharacteristicValueReceived_6), (void*)L_3);
		// CustomGatt = customGatt;
		bool L_4 = ___4_customGatt;
		__this->___CustomGatt_7 = L_4;
		// _timeout = 1f;
		((BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F*)__this)->____timeout_0 = (1.0f);
		// }
		return;
	}
}
// System.Void Android.BLE.Commands.ReadFromCharacteristic::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadFromCharacteristic_Start_mD1EA565B84426D7A01C402D35FF458CED53CFAD5 (ReadFromCharacteristic_t6A2EA55768B2FE5E72EA4985B428B1548282926B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62060434CF3C3BB9B6D33B986E7F0895B878992B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99C9FB13912FCAB02AB530678EF211E2548D8678);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		// string command = CustomGatt ? "readFromCustomCharacteristic" : "readFromCharacteristic";
		bool L_0 = __this->___CustomGatt_7;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		G_B3_0 = _stringLiteral99C9FB13912FCAB02AB530678EF211E2548D8678;
		goto IL_0014;
	}

IL_000f:
	{
		G_B3_0 = _stringLiteral62060434CF3C3BB9B6D33B986E7F0895B878992B;
	}

IL_0014:
	{
		// BleManager.SendCommand(command, DeviceAddress, Service, Characteristic);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = __this->___DeviceAddress_3;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = __this->___Service_4;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		String_t* L_7 = __this->___Characteristic_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		BleManager_SendCommand_m6B488A06103C2FA52D5DF05578F1B6D50BB1DE6C(G_B3_0, L_6, NULL);
		// }
		return;
	}
}
// System.Boolean Android.BLE.Commands.ReadFromCharacteristic::CommandReceived(Android.BLE.BleObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadFromCharacteristic_CommandReceived_mD059C6CB488C17B1162F9EFD51DF5C6C9CC9F79C (ReadFromCharacteristic_t6A2EA55768B2FE5E72EA4985B428B1548282926B* __this, BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA992B8F73C3CE4390D13A7E1A05E948DE458E4C);
		s_Il2CppMethodInitialized = true;
	}
	ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB* G_B9_0 = NULL;
	ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB* G_B8_0 = NULL;
	{
		// if (string.Equals(obj.Command, "ReadFromCharacteristic"))
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_0 = ___0_obj;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = BleObject_get_Command_m23B80AA6C0E85B8215130069AE67194E5F26E494_inline(L_0, NULL);
		bool L_2;
		L_2 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_1, _stringLiteralFA992B8F73C3CE4390D13A7E1A05E948DE458E4C, NULL);
		if (!L_2)
		{
			goto IL_0091;
		}
	}
	{
		// if ((!CustomGatt && string.Equals(obj.Characteristic.Get4BitUuid(), Characteristic) && string.Equals(obj.Service.Get4BitUuid(), Service))
		//     || (CustomGatt && string.Equals(obj.Characteristic, Characteristic) && string.Equals(obj.Service, Service)))
		bool L_3 = __this->___CustomGatt_7;
		if (L_3)
		{
			goto IL_004a;
		}
	}
	{
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_4 = ___0_obj;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = BleObject_get_Characteristic_m59461AA54359D04B9AED4A5748B8837EE2A02C3D_inline(L_4, NULL);
		String_t* L_6;
		L_6 = UuidHelper_Get4BitUuid_mFCFF78C911164B9C6041F8BAD5378225B50389B1(L_5, NULL);
		String_t* L_7 = __this->___Characteristic_5;
		bool L_8;
		L_8 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_004a;
		}
	}
	{
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_9 = ___0_obj;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = BleObject_get_Service_m857919014988B7444908F4191921ECA8C0418D3D_inline(L_9, NULL);
		String_t* L_11;
		L_11 = UuidHelper_Get4BitUuid_mFCFF78C911164B9C6041F8BAD5378225B50389B1(L_10, NULL);
		String_t* L_12 = __this->___Service_4;
		bool L_13;
		L_13 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_11, L_12, NULL);
		if (L_13)
		{
			goto IL_0078;
		}
	}

IL_004a:
	{
		bool L_14 = __this->___CustomGatt_7;
		if (!L_14)
		{
			goto IL_0091;
		}
	}
	{
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_15 = ___0_obj;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = BleObject_get_Characteristic_m59461AA54359D04B9AED4A5748B8837EE2A02C3D_inline(L_15, NULL);
		String_t* L_17 = __this->___Characteristic_5;
		bool L_18;
		L_18 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_16, L_17, NULL);
		if (!L_18)
		{
			goto IL_0091;
		}
	}
	{
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_19 = ___0_obj;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = BleObject_get_Service_m857919014988B7444908F4191921ECA8C0418D3D_inline(L_19, NULL);
		String_t* L_21 = __this->___Service_4;
		bool L_22;
		L_22 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_20, L_21, NULL);
		if (!L_22)
		{
			goto IL_0091;
		}
	}

IL_0078:
	{
		// OnReadCharacteristicValueReceived?.Invoke(obj.GetByteMessage());
		ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB* L_23 = __this->___OnReadCharacteristicValueReceived_6;
		ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB* L_24 = L_23;
		G_B8_0 = L_24;
		if (L_24)
		{
			G_B9_0 = L_24;
			goto IL_0084;
		}
	}
	{
		goto IL_008f;
	}

IL_0084:
	{
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_25 = ___0_obj;
		NullCheck(L_25);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26;
		L_26 = BleObject_GetByteMessage_m4E7A5D2A7EB87AB760E0A49BA61C830D42643F30(L_25, NULL);
		NullCheck(G_B9_0);
		ReadCharacteristicValueReceived_Invoke_mC909439576FCFC052D83BBB8FA16369C0C700609_inline(G_B9_0, L_26, NULL);
	}

IL_008f:
	{
		// return true;
		return (bool)1;
	}

IL_0091:
	{
		// return false;
		return (bool)0;
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
void ReadCharacteristicValueReceived_Invoke_mC909439576FCFC052D83BBB8FA16369C0C700609_Multicast(ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB* currentDelegate = reinterpret_cast<ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ReadCharacteristicValueReceived_Invoke_mC909439576FCFC052D83BBB8FA16369C0C700609_OpenInst(ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method)
{
	NullCheck(___0_value);
	typedef void (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_value, method);
}
void ReadCharacteristicValueReceived_Invoke_mC909439576FCFC052D83BBB8FA16369C0C700609_OpenStatic(ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_value, method);
}
void ReadCharacteristicValueReceived_Invoke_mC909439576FCFC052D83BBB8FA16369C0C700609_OpenStaticInvoker(ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method)
{
	InvokerActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_value);
}
void ReadCharacteristicValueReceived_Invoke_mC909439576FCFC052D83BBB8FA16369C0C700609_ClosedStaticInvoker(ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_value);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB (ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_value' to native representation
	uint8_t* ____0_value_marshaled = NULL;
	if (___0_value != NULL)
	{
		____0_value_marshaled = reinterpret_cast<uint8_t*>((___0_value)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____0_value_marshaled);

}
// System.Void Android.BLE.Commands.ReadFromCharacteristic/ReadCharacteristicValueReceived::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadCharacteristicValueReceived__ctor_m59E7CF821E56AA3C4F5F85DDE5D3E15CA1C5BEFC (ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ReadCharacteristicValueReceived_Invoke_mC909439576FCFC052D83BBB8FA16369C0C700609_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ReadCharacteristicValueReceived_Invoke_mC909439576FCFC052D83BBB8FA16369C0C700609_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ReadCharacteristicValueReceived_Invoke_mC909439576FCFC052D83BBB8FA16369C0C700609_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ReadCharacteristicValueReceived_Invoke_mC909439576FCFC052D83BBB8FA16369C0C700609_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ReadCharacteristicValueReceived_Invoke_mC909439576FCFC052D83BBB8FA16369C0C700609_Multicast;
}
// System.Void Android.BLE.Commands.ReadFromCharacteristic/ReadCharacteristicValueReceived::Invoke(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadCharacteristicValueReceived_Invoke_mC909439576FCFC052D83BBB8FA16369C0C700609 (ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Android.BLE.Commands.ReadFromCharacteristic/ReadCharacteristicValueReceived::BeginInvoke(System.Byte[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadCharacteristicValueReceived_BeginInvoke_m03089465F5BDE56C343E74B86AF7A3509546151B (ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_value;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void Android.BLE.Commands.ReadFromCharacteristic/ReadCharacteristicValueReceived::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadCharacteristicValueReceived_EndInvoke_m5FC1119518FAE57A4D4318209859E545B632AAB2 (ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
// System.Void Android.BLE.Commands.SubscribeToCharacteristic::.ctor(System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubscribeToCharacteristic__ctor_m03612CF93CEEDEA81F2DB45EAF32065D73157B51 (SubscribeToCharacteristic_t3E9D73FC5CED7EEC8810B60279358199F2E0F252* __this, String_t* ___0_deviceAddress, String_t* ___1_service, String_t* ___2_characteristic, bool ___3_customGatt, const RuntimeMethod* method) 
{
	{
		// public SubscribeToCharacteristic(string deviceAddress, string service, string characteristic, bool customGatt = false) : base(true, true)
		BleCommand__ctor_mD7173BA8F5E4906439AB1B96AFA89425198D5FE6(__this, (bool)1, (bool)1, NULL);
		// DeviceAddress = deviceAddress;
		String_t* L_0 = ___0_deviceAddress;
		__this->___DeviceAddress_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DeviceAddress_3), (void*)L_0);
		// Service = service;
		String_t* L_1 = ___1_service;
		__this->___Service_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Service_4), (void*)L_1);
		// Characteristic = characteristic;
		String_t* L_2 = ___2_characteristic;
		__this->___Characteristic_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Characteristic_5), (void*)L_2);
		// CustomGatt = customGatt;
		bool L_3 = ___3_customGatt;
		__this->___CustomGatt_7 = L_3;
		// }
		return;
	}
}
// System.Void Android.BLE.Commands.SubscribeToCharacteristic::.ctor(System.String,System.String,System.String,Android.BLE.Commands.SubscribeToCharacteristic/CharacteristicChanged,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubscribeToCharacteristic__ctor_mEE6D7FF09091094D4A0887BEB19A0384049F6AAF (SubscribeToCharacteristic_t3E9D73FC5CED7EEC8810B60279358199F2E0F252* __this, String_t* ___0_deviceAddress, String_t* ___1_service, String_t* ___2_characteristic, CharacteristicChanged_tC47800CCA86CDBC899E85FAEC5370807127BF788* ___3_onDataFound, bool ___4_customGatt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacteristicChanged_tC47800CCA86CDBC899E85FAEC5370807127BF788_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SubscribeToCharacteristic(string deviceAddress, string service, string characteristic, CharacteristicChanged onDataFound, bool customGatt = false) : base(true, true)
		BleCommand__ctor_mD7173BA8F5E4906439AB1B96AFA89425198D5FE6(__this, (bool)1, (bool)1, NULL);
		// DeviceAddress = deviceAddress;
		String_t* L_0 = ___0_deviceAddress;
		__this->___DeviceAddress_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DeviceAddress_3), (void*)L_0);
		// Service = service;
		String_t* L_1 = ___1_service;
		__this->___Service_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Service_4), (void*)L_1);
		// Characteristic = characteristic;
		String_t* L_2 = ___2_characteristic;
		__this->___Characteristic_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Characteristic_5), (void*)L_2);
		// OnCharacteristicChanged += onDataFound;
		CharacteristicChanged_tC47800CCA86CDBC899E85FAEC5370807127BF788* L_3 = __this->___OnCharacteristicChanged_6;
		CharacteristicChanged_tC47800CCA86CDBC899E85FAEC5370807127BF788* L_4 = ___3_onDataFound;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		__this->___OnCharacteristicChanged_6 = ((CharacteristicChanged_tC47800CCA86CDBC899E85FAEC5370807127BF788*)CastclassSealed((RuntimeObject*)L_5, CharacteristicChanged_tC47800CCA86CDBC899E85FAEC5370807127BF788_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnCharacteristicChanged_6), (void*)((CharacteristicChanged_tC47800CCA86CDBC899E85FAEC5370807127BF788*)CastclassSealed((RuntimeObject*)L_5, CharacteristicChanged_tC47800CCA86CDBC899E85FAEC5370807127BF788_il2cpp_TypeInfo_var)));
		// CustomGatt = customGatt;
		bool L_6 = ___4_customGatt;
		__this->___CustomGatt_7 = L_6;
		// }
		return;
	}
}
// System.Void Android.BLE.Commands.SubscribeToCharacteristic::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubscribeToCharacteristic_Start_mA9851A327FDA2F7B766B38D10984A6EC7E9D727C (SubscribeToCharacteristic_t3E9D73FC5CED7EEC8810B60279358199F2E0F252* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82DF5E3680E76B854FE27BAB66F45EB2F2141AC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF35985FF624EC7423094F567EBA62003C0F0D37);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		// string command = CustomGatt ? "subscribeToCustomGattCharacteristic" : "subscribeToGattCharacteristic";
		bool L_0 = __this->___CustomGatt_7;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		G_B3_0 = _stringLiteral82DF5E3680E76B854FE27BAB66F45EB2F2141AC7;
		goto IL_0014;
	}

IL_000f:
	{
		G_B3_0 = _stringLiteralBF35985FF624EC7423094F567EBA62003C0F0D37;
	}

IL_0014:
	{
		// BleManager.SendCommand(command, DeviceAddress, Service, Characteristic);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = __this->___DeviceAddress_3;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = __this->___Service_4;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		String_t* L_7 = __this->___Characteristic_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		BleManager_SendCommand_m6B488A06103C2FA52D5DF05578F1B6D50BB1DE6C(G_B3_0, L_6, NULL);
		// }
		return;
	}
}
// System.Void Android.BLE.Commands.SubscribeToCharacteristic::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubscribeToCharacteristic_End_mF7EE9B087F0199A43F803292D3A859AFBD9C010E (SubscribeToCharacteristic_t3E9D73FC5CED7EEC8810B60279358199F2E0F252* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14F66CFADCDFC8C454514AED25332E6B6C5A5AE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB0FB7199F70B7EB63B72703513CDAAC98A01A74);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		// string command = CustomGatt ? "unsubscribeFromCustomGattCharacteristic" : "unsubscribeFromGattCharacteristic";
		bool L_0 = __this->___CustomGatt_7;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		G_B3_0 = _stringLiteralBB0FB7199F70B7EB63B72703513CDAAC98A01A74;
		goto IL_0014;
	}

IL_000f:
	{
		G_B3_0 = _stringLiteral14F66CFADCDFC8C454514AED25332E6B6C5A5AE7;
	}

IL_0014:
	{
		// BleManager.SendCommand(command, DeviceAddress, Service, Characteristic);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = __this->___DeviceAddress_3;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = __this->___Service_4;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		String_t* L_7 = __this->___Characteristic_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		BleManager_SendCommand_m6B488A06103C2FA52D5DF05578F1B6D50BB1DE6C(G_B3_0, L_6, NULL);
		// }
		return;
	}
}
// System.Void Android.BLE.Commands.SubscribeToCharacteristic::Unsubscribe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubscribeToCharacteristic_Unsubscribe_mE1C37AA01A133FC7063671D592263ED31C61584A (SubscribeToCharacteristic_t3E9D73FC5CED7EEC8810B60279358199F2E0F252* __this, const RuntimeMethod* method) 
{
	{
		// public void Unsubscribe() => End();
		VirtualActionInvoker0::Invoke(5 /* System.Void Android.BLE.Commands.BleCommand::End() */, __this);
		return;
	}
}
// System.Boolean Android.BLE.Commands.SubscribeToCharacteristic::CommandReceived(Android.BLE.BleObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SubscribeToCharacteristic_CommandReceived_m3274DECAD07437F59062B5FE07E4F82B0210302F (SubscribeToCharacteristic_t3E9D73FC5CED7EEC8810B60279358199F2E0F252* __this, BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C727F5CB7137F26A763D0AE09E2E3247DAA033);
		s_Il2CppMethodInitialized = true;
	}
	CharacteristicChanged_tC47800CCA86CDBC899E85FAEC5370807127BF788* G_B7_0 = NULL;
	CharacteristicChanged_tC47800CCA86CDBC899E85FAEC5370807127BF788* G_B6_0 = NULL;
	CharacteristicChanged_tC47800CCA86CDBC899E85FAEC5370807127BF788* G_B13_0 = NULL;
	CharacteristicChanged_tC47800CCA86CDBC899E85FAEC5370807127BF788* G_B12_0 = NULL;
	{
		// if (string.Equals(obj.Command, "CharacteristicValueChanged"))
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_0 = ___0_obj;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = BleObject_get_Command_m23B80AA6C0E85B8215130069AE67194E5F26E494_inline(L_0, NULL);
		bool L_2;
		L_2 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_1, _stringLiteral85C727F5CB7137F26A763D0AE09E2E3247DAA033, NULL);
		if (!L_2)
		{
			goto IL_00cf;
		}
	}
	{
		// if (CustomGatt)
		bool L_3 = __this->___CustomGatt_7;
		if (!L_3)
		{
			goto IL_0075;
		}
	}
	{
		// if (string.Equals(obj.Device, DeviceAddress) &&
		//     string.Equals(obj.Service, Service) &&
		//     string.Equals(obj.Characteristic, Characteristic))
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_4 = ___0_obj;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = BleObject_get_Device_m7E208B87BAB1C81C1D1782A3151EFE518E66568D_inline(L_4, NULL);
		String_t* L_6 = __this->___DeviceAddress_3;
		bool L_7;
		L_7 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_00cf;
		}
	}
	{
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_8 = ___0_obj;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = BleObject_get_Service_m857919014988B7444908F4191921ECA8C0418D3D_inline(L_8, NULL);
		String_t* L_10 = __this->___Service_4;
		bool L_11;
		L_11 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_00cf;
		}
	}
	{
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_12 = ___0_obj;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = BleObject_get_Characteristic_m59461AA54359D04B9AED4A5748B8837EE2A02C3D_inline(L_12, NULL);
		String_t* L_14 = __this->___Characteristic_5;
		bool L_15;
		L_15 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_13, L_14, NULL);
		if (!L_15)
		{
			goto IL_00cf;
		}
	}
	{
		// OnCharacteristicChanged?.Invoke(obj.GetByteMessage());
		CharacteristicChanged_tC47800CCA86CDBC899E85FAEC5370807127BF788* L_16 = __this->___OnCharacteristicChanged_6;
		CharacteristicChanged_tC47800CCA86CDBC899E85FAEC5370807127BF788* L_17 = L_16;
		G_B6_0 = L_17;
		if (L_17)
		{
			G_B7_0 = L_17;
			goto IL_0068;
		}
	}
	{
		goto IL_00cf;
	}

IL_0068:
	{
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_18 = ___0_obj;
		NullCheck(L_18);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19;
		L_19 = BleObject_GetByteMessage_m4E7A5D2A7EB87AB760E0A49BA61C830D42643F30(L_18, NULL);
		NullCheck(G_B7_0);
		CharacteristicChanged_Invoke_m9BB6B20D459F72FC81A5CA68CA0DC9ECCE88885B_inline(G_B7_0, L_19, NULL);
		goto IL_00cf;
	}

IL_0075:
	{
		// if (string.Equals(obj.Device, DeviceAddress) &&
		//     string.Equals(obj.Service.Get4BitUuid(), Service) &&
		//     string.Equals(obj.Characteristic.Get4BitUuid(), Characteristic))
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_20 = ___0_obj;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = BleObject_get_Device_m7E208B87BAB1C81C1D1782A3151EFE518E66568D_inline(L_20, NULL);
		String_t* L_22 = __this->___DeviceAddress_3;
		bool L_23;
		L_23 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_21, L_22, NULL);
		if (!L_23)
		{
			goto IL_00cf;
		}
	}
	{
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_24 = ___0_obj;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = BleObject_get_Service_m857919014988B7444908F4191921ECA8C0418D3D_inline(L_24, NULL);
		String_t* L_26;
		L_26 = UuidHelper_Get4BitUuid_mFCFF78C911164B9C6041F8BAD5378225B50389B1(L_25, NULL);
		String_t* L_27 = __this->___Service_4;
		bool L_28;
		L_28 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_26, L_27, NULL);
		if (!L_28)
		{
			goto IL_00cf;
		}
	}
	{
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_29 = ___0_obj;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = BleObject_get_Characteristic_m59461AA54359D04B9AED4A5748B8837EE2A02C3D_inline(L_29, NULL);
		String_t* L_31;
		L_31 = UuidHelper_Get4BitUuid_mFCFF78C911164B9C6041F8BAD5378225B50389B1(L_30, NULL);
		String_t* L_32 = __this->___Characteristic_5;
		bool L_33;
		L_33 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_31, L_32, NULL);
		if (!L_33)
		{
			goto IL_00cf;
		}
	}
	{
		// OnCharacteristicChanged?.Invoke(obj.GetByteMessage());
		CharacteristicChanged_tC47800CCA86CDBC899E85FAEC5370807127BF788* L_34 = __this->___OnCharacteristicChanged_6;
		CharacteristicChanged_tC47800CCA86CDBC899E85FAEC5370807127BF788* L_35 = L_34;
		G_B12_0 = L_35;
		if (L_35)
		{
			G_B13_0 = L_35;
			goto IL_00c4;
		}
	}
	{
		goto IL_00cf;
	}

IL_00c4:
	{
		BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* L_36 = ___0_obj;
		NullCheck(L_36);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37;
		L_37 = BleObject_GetByteMessage_m4E7A5D2A7EB87AB760E0A49BA61C830D42643F30(L_36, NULL);
		NullCheck(G_B13_0);
		CharacteristicChanged_Invoke_m9BB6B20D459F72FC81A5CA68CA0DC9ECCE88885B_inline(G_B13_0, L_37, NULL);
	}

IL_00cf:
	{
		// return false;
		return (bool)0;
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
void CharacteristicChanged_Invoke_m9BB6B20D459F72FC81A5CA68CA0DC9ECCE88885B_Multicast(CharacteristicChanged_tC47800CCA86CDBC899E85FAEC5370807127BF788* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CharacteristicChanged_tC47800CCA86CDBC899E85FAEC5370807127BF788* currentDelegate = reinterpret_cast<CharacteristicChanged_tC47800CCA86CDBC899E85FAEC5370807127BF788*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void CharacteristicChanged_Invoke_m9BB6B20D459F72FC81A5CA68CA0DC9ECCE88885B_OpenInst(CharacteristicChanged_tC47800CCA86CDBC899E85FAEC5370807127BF788* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method)
{
	NullCheck(___0_value);
	typedef void (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_value, method);
}
void CharacteristicChanged_Invoke_m9BB6B20D459F72FC81A5CA68CA0DC9ECCE88885B_OpenStatic(CharacteristicChanged_tC47800CCA86CDBC899E85FAEC5370807127BF788* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_value, method);
}
void CharacteristicChanged_Invoke_m9BB6B20D459F72FC81A5CA68CA0DC9ECCE88885B_OpenStaticInvoker(CharacteristicChanged_tC47800CCA86CDBC899E85FAEC5370807127BF788* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method)
{
	InvokerActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_value);
}
void CharacteristicChanged_Invoke_m9BB6B20D459F72FC81A5CA68CA0DC9ECCE88885B_ClosedStaticInvoker(CharacteristicChanged_tC47800CCA86CDBC899E85FAEC5370807127BF788* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_value);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CharacteristicChanged_tC47800CCA86CDBC899E85FAEC5370807127BF788 (CharacteristicChanged_tC47800CCA86CDBC899E85FAEC5370807127BF788* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_value' to native representation
	uint8_t* ____0_value_marshaled = NULL;
	if (___0_value != NULL)
	{
		____0_value_marshaled = reinterpret_cast<uint8_t*>((___0_value)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____0_value_marshaled);

}
// System.Void Android.BLE.Commands.SubscribeToCharacteristic/CharacteristicChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacteristicChanged__ctor_mEAEA387542171D27995D13701E75267256798227 (CharacteristicChanged_tC47800CCA86CDBC899E85FAEC5370807127BF788* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CharacteristicChanged_Invoke_m9BB6B20D459F72FC81A5CA68CA0DC9ECCE88885B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CharacteristicChanged_Invoke_m9BB6B20D459F72FC81A5CA68CA0DC9ECCE88885B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CharacteristicChanged_Invoke_m9BB6B20D459F72FC81A5CA68CA0DC9ECCE88885B_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&CharacteristicChanged_Invoke_m9BB6B20D459F72FC81A5CA68CA0DC9ECCE88885B_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&CharacteristicChanged_Invoke_m9BB6B20D459F72FC81A5CA68CA0DC9ECCE88885B_Multicast;
}
// System.Void Android.BLE.Commands.SubscribeToCharacteristic/CharacteristicChanged::Invoke(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacteristicChanged_Invoke_m9BB6B20D459F72FC81A5CA68CA0DC9ECCE88885B (CharacteristicChanged_tC47800CCA86CDBC899E85FAEC5370807127BF788* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Android.BLE.Commands.SubscribeToCharacteristic/CharacteristicChanged::BeginInvoke(System.Byte[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CharacteristicChanged_BeginInvoke_mFB8521A8148FB710765DEE44498B1446DC01807F (CharacteristicChanged_tC47800CCA86CDBC899E85FAEC5370807127BF788* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_value;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void Android.BLE.Commands.SubscribeToCharacteristic/CharacteristicChanged::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacteristicChanged_EndInvoke_m67FD4C77B8EB8AB7B72DEC92C486B88643D50BF6 (CharacteristicChanged_tC47800CCA86CDBC899E85FAEC5370807127BF788* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
// System.Void Android.BLE.Commands.WriteToCharacteristic::.ctor(System.String,System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteToCharacteristic__ctor_m7E99936DF2A96E84F3ADBDA9F5CFA065748C9BB4 (WriteToCharacteristic_t3DAC60EE3B2B3D539D9B874F43CA87180DC9866A* __this, String_t* ___0_deviceAddress, String_t* ___1_serviceAddress, String_t* ___2_characteristicAddress, String_t* ___3_data, bool ___4_customGatt, const RuntimeMethod* method) 
{
	{
		// public WriteToCharacteristic(string deviceAddress, string serviceAddress, string characteristicAddress, string data, bool customGatt = false) : base(false, false)
		BleCommand__ctor_mD7173BA8F5E4906439AB1B96AFA89425198D5FE6(__this, (bool)0, (bool)0, NULL);
		// DeviceAddress = deviceAddress;
		String_t* L_0 = ___0_deviceAddress;
		__this->___DeviceAddress_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DeviceAddress_3), (void*)L_0);
		// Service = serviceAddress;
		String_t* L_1 = ___1_serviceAddress;
		__this->___Service_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Service_4), (void*)L_1);
		// Characteristic = characteristicAddress;
		String_t* L_2 = ___2_characteristicAddress;
		__this->___Characteristic_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Characteristic_5), (void*)L_2);
		// Base64Data = data;
		String_t* L_3 = ___3_data;
		__this->___Base64Data_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Base64Data_6), (void*)L_3);
		// CustomGatt = customGatt;
		bool L_4 = ___4_customGatt;
		__this->___CustomGatt_7 = L_4;
		// _timeout = 1f;
		((BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F*)__this)->____timeout_0 = (1.0f);
		// }
		return;
	}
}
// System.Void Android.BLE.Commands.WriteToCharacteristic::.ctor(System.String,System.String,System.String,System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteToCharacteristic__ctor_m16EE264FBF81FE00ADF9B79AB70CE947B0A3AA9B (WriteToCharacteristic_t3DAC60EE3B2B3D539D9B874F43CA87180DC9866A* __this, String_t* ___0_deviceAddress, String_t* ___1_serviceAddress, String_t* ___2_characteristicAddress, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_data, bool ___4_customGatt, const RuntimeMethod* method) 
{
	{
		// public WriteToCharacteristic(string deviceAddress, string serviceAddress, string characteristicAddress, byte[] data, bool customGatt = false) : base(false, false)
		BleCommand__ctor_mD7173BA8F5E4906439AB1B96AFA89425198D5FE6(__this, (bool)0, (bool)0, NULL);
		// DeviceAddress = deviceAddress;
		String_t* L_0 = ___0_deviceAddress;
		__this->___DeviceAddress_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DeviceAddress_3), (void*)L_0);
		// Service = serviceAddress;
		String_t* L_1 = ___1_serviceAddress;
		__this->___Service_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Service_4), (void*)L_1);
		// Characteristic = characteristicAddress;
		String_t* L_2 = ___2_characteristicAddress;
		__this->___Characteristic_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Characteristic_5), (void*)L_2);
		// Base64Data = Encoding.UTF8.GetString(data);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3;
		L_3 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___3_data;
		NullCheck(L_3);
		String_t* L_5;
		L_5 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(33 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_3, L_4);
		__this->___Base64Data_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Base64Data_6), (void*)L_5);
		// CustomGatt = customGatt;
		bool L_6 = ___4_customGatt;
		__this->___CustomGatt_7 = L_6;
		// _timeout = 1f;
		((BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F*)__this)->____timeout_0 = (1.0f);
		// }
		return;
	}
}
// System.Void Android.BLE.Commands.WriteToCharacteristic::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteToCharacteristic_Start_m8B8E802783A41E4B2358CFB0AABE6CD137671FF3 (WriteToCharacteristic_t3DAC60EE3B2B3D539D9B874F43CA87180DC9866A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71B67D7507E22CE1204517AA638F8289180E8E32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1B07A09C096070220509A78AA58738E4658F86B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		// string command = CustomGatt ? "writeToCustomGattCharacteristic" : "writeToGattCharacteristic";
		bool L_0 = __this->___CustomGatt_7;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		G_B3_0 = _stringLiteralB1B07A09C096070220509A78AA58738E4658F86B;
		goto IL_0014;
	}

IL_000f:
	{
		G_B3_0 = _stringLiteral71B67D7507E22CE1204517AA638F8289180E8E32;
	}

IL_0014:
	{
		// BleManager.SendCommand(command, DeviceAddress, Service, Characteristic, Base64Data);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = __this->___DeviceAddress_3;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = __this->___Service_4;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		String_t* L_7 = __this->___Characteristic_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_6;
		String_t* L_9 = __this->___Base64Data_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_9);
		BleManager_SendCommand_m6B488A06103C2FA52D5DF05578F1B6D50BB1DE6C(G_B3_0, L_8, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BleObject_get_HasError_m12D6B9476A5CFA55A3C280C0F050BBEED5E2B28A_inline (BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* __this, const RuntimeMethod* method) 
{
	{
		// public bool HasError { get => hasError; }
		bool L_0 = __this->___hasError_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BleObject_get_ErrorMessage_mACBB22E99872A2406843AA444C062CDA311F3971_inline (BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* __this, const RuntimeMethod* method) 
{
	{
		// public string ErrorMessage { get => errorMessage; }
		String_t* L_0 = __this->___errorMessage_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorReceived_Invoke_m108A59C1F114BB050F71FFF0662BD49BB140A308_inline (ErrorReceived_t2287D21A1B8691DD399B0160386CCFA24D0C1276* __this, String_t* ___0_errorMessage, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_errorMessage, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageReceived_Invoke_m04A49A2863BF6E00FDDD9E55A70C24AE311DFB3E_inline (MessageReceived_t05D463919B38E475D3F3E5E5351C42D8F82BADCE* __this, BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BleCommand_get_Timeout_mCB884E9E6F9988E4126592F4DD68E675258E67B7_inline (BleCommand_tDE60667757E47339E4B3CE10869355C3170ED45F* __this, const RuntimeMethod* method) 
{
	{
		// public float Timeout { get => _timeout; }
		float L_0 = __this->____timeout_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BleObject_get_Device_m7E208B87BAB1C81C1D1782A3151EFE518E66568D_inline (BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* __this, const RuntimeMethod* method) 
{
	{
		// public string Device => device;
		String_t* L_0 = __this->___device_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BleObject_get_Command_m23B80AA6C0E85B8215130069AE67194E5F26E494_inline (BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* __this, const RuntimeMethod* method) 
{
	{
		// public string Command => command;
		String_t* L_0 = __this->___command_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectionChange_Invoke_mDF5F37867F22655AB5E9129A55715F47C4E36490_inline (ConnectionChange_t6E20D1CB7605D51948FD6A62AEE7EA92F49EB4FC* __this, String_t* ___0_deviceAddress, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_deviceAddress, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BleObject_get_Service_m857919014988B7444908F4191921ECA8C0418D3D_inline (BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* __this, const RuntimeMethod* method) 
{
	{
		// public string Service => service;
		String_t* L_0 = __this->___service_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ServiceDiscovered_Invoke_m3B03816311CAC85CEDCC15AD26152FC5B2A5515F_inline (ServiceDiscovered_t8E900906F2BF530C0A835688CF30166E681EFE42* __this, String_t* ___0_deviceAddress, String_t* ___1_serviceAddress, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_deviceAddress, ___1_serviceAddress, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BleObject_get_Characteristic_m59461AA54359D04B9AED4A5748B8837EE2A02C3D_inline (BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* __this, const RuntimeMethod* method) 
{
	{
		// public string Characteristic => characteristic;
		String_t* L_0 = __this->___characteristic_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CharacteristicDiscovered_Invoke_mE43B22D1F16F2051CF235A75C8DFF42B99DB74D8_inline (CharacteristicDiscovered_t54557FFD6C62C91E37BCC764034BBD605A2F73B5* __this, String_t* ___0_deviceAddress, String_t* ___1_serviceAddress, String_t* ___2_characteristicAddress, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_deviceAddress, ___1_serviceAddress, ___2_characteristicAddress, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BleObject_get_Name_m5A412E454187BB2EB9C0F09EC020FFA0E9F3A346_inline (BleObject_t246B087A00605098B4AA3B5E21D2E2A6ED0B3911* __this, const RuntimeMethod* method) 
{
	{
		// public string Name => name;
		String_t* L_0 = __this->___name_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DeviceDiscovered_Invoke_m79252BF9D7A9D08839E4201A28CC4A449EA61C24_inline (DeviceDiscovered_tB6FDC91742237A0A8C1E38B632D244FFBCAE3ACB* __this, String_t* ___0_deviceAddress, String_t* ___1_deviceName, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_deviceAddress, ___1_deviceName, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadCharacteristicValueReceived_Invoke_mC909439576FCFC052D83BBB8FA16369C0C700609_inline (ReadCharacteristicValueReceived_t49AD9ACDDE7EA6133D90B051607701FBF0AE8FBB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CharacteristicChanged_Invoke_m9BB6B20D459F72FC81A5CA68CA0DC9ECCE88885B_inline (CharacteristicChanged_tC47800CCA86CDBC899E85FAEC5370807127BF788* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
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
