﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Action`1<System.Int32Enum>
struct Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B;
// System.Action`1<UnityEngine.AdaptivePerformance.WarningLevel>
struct Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1<System.Double>
struct AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C;
// System.Func`1<System.Double>
struct Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7;
// System.Collections.Generic.List`1<System.Action>
struct List_1_tDB72209F35D56F62A287633F9450978E90B90987;
// System.Collections.Generic.List`1<UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor>
struct List_1_tBDCF1E0892E8DA197607E498736F867735A73137;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem>
struct SubsystemProvider_1_t6ABBE424F6F1310EE46EEA513835617E7669F669;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<System.Object>
struct SubsystemProvider_1_t7964A83C7EDD0F612E018A2033A9D500479D92F3;
// System.Action[]
struct ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2;
// UnityEngine.AdaptivePerformance.AdaptivePerformanceScalerProfile[]
struct AdaptivePerformanceScalerProfileU5BU5D_t502F55D3686CAB852984FDB6F92431963616F4B7;
// UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor[]
struct AdaptivePerformanceSubsystemDescriptorU5BU5D_tE478BE4CA194FF832B443F6091F40CCF7F1BEA20;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AdaptivePerformance.AdaptiveFramerate
struct AdaptiveFramerate_t87F82B3C838B42BFDE5277B446D2A9C4674D6104;
// UnityEngine.AdaptivePerformance.AdaptivePerformanceIndexer
struct AdaptivePerformanceIndexer_tE43B4A07AF7944322BA939E2D4F8AE90AD42EF73;
// UnityEngine.AdaptivePerformance.AdaptivePerformanceIndexerSettings
struct AdaptivePerformanceIndexerSettings_t3D9418B7302C8FCA3344719FF10FBADFD2F1CDC6;
// UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper
struct AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F;
// UnityEngine.AdaptivePerformance.AdaptivePerformanceScalerSettings
struct AdaptivePerformanceScalerSettings_tAF8002CE95F36DE71E945DA73AADB6783EB2FFD8;
// UnityEngine.AdaptivePerformance.AdaptivePerformanceScalerSettingsBase
struct AdaptivePerformanceScalerSettingsBase_tDF99867134986926CE22505B0B9EE99AD74501AA;
// UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem
struct AdaptivePerformanceSubsystem_t2D41A24C328589A3018DA0478476D2591E9B5C23;
// UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor
struct AdaptivePerformanceSubsystemDescriptor_t5D0468D8D509E8995FBDCD5DE6EF6F293B16DC82;
// UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate
struct AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater
struct AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings
struct IAdaptivePerformanceSettings_tFB49C60F821F093D3F18E8DC115E7D929E6C86C8;
// UnityEngine.AdaptivePerformance.Provider.IApplicationLifecycle
struct IApplicationLifecycle_tD2CAC721E42E96F6573349B22EADAF166F7A4DCC;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UnityEngine.AdaptivePerformance.Provider.IDevicePerformanceLevelControl
struct IDevicePerformanceLevelControl_t894EA40FAE48D533C71232E4AE425D2DA8C142D5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// UnityEngine.ISubsystem
struct ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67;
// UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate
struct IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MulticastDelegate
struct MulticastDelegate_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449;
// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader
struct SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293;
// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings
struct SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC;
// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem
struct SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6;
// System.Threading.Semaphore
struct Semaphore_t12119E120563D7838E1DAFB15006DC8985C6AC4B;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.Threading.ThreadStart
struct ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2;
// System.Type
struct Type_t;
// UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler
struct VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem/APProvider
struct APProvider_tCF914DB0FD4F4EB3579452C06E1D8AB02501B998;
// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider
struct SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545;
// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/<>c
struct U3CU3Ec_t84AE2B64185FB58241DE2F33733B9EC09815C76B;
// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/AutoVariableRefreshRate
struct AutoVariableRefreshRate_t72A9AA228BAE0E009EA0A0BEC85609F07B6F2B75;
// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi
struct NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65;
// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/VRRManager
struct VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AutoVariableRefreshRate_t72A9AA228BAE0E009EA0A0BEC85609F07B6F2B75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameSDKLog_tD0080E506C05822E023880100FA71E86D5D5C043_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBDCF1E0892E8DA197607E498736F867735A73137_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Semaphore_t12119E120563D7838E1DAFB15006DC8985C6AC4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t84AE2B64185FB58241DE2F33733B9EC09815C76B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral110C230ECC11791A56E51CE07FE5E6FD5A78178A;
IL2CPP_EXTERN_C String_t* _stringLiteral1174361642F6FE4FCA189A130190A4E9597912D6;
IL2CPP_EXTERN_C String_t* _stringLiteral1D8E0CE0AA8B1F1859A8CEA37DFAA26D56616E45;
IL2CPP_EXTERN_C String_t* _stringLiteral2D677AB4F1E4297F4CF5654EAD125EEBC50D20EF;
IL2CPP_EXTERN_C String_t* _stringLiteral3261C3E11E9AB172DA0BD2010EF79C41DE23C91C;
IL2CPP_EXTERN_C String_t* _stringLiteral3D6253C836CCF9A6B8A05245CB6B1EF24E546455;
IL2CPP_EXTERN_C String_t* _stringLiteral4CF9A4312580ADAE7FA331122F314BFA89FDA671;
IL2CPP_EXTERN_C String_t* _stringLiteral4F209C20BD06D8D1C76C888ACA266837D8ADDC01;
IL2CPP_EXTERN_C String_t* _stringLiteral58B9EE58F492CF50D7C051554FE7BDD815569565;
IL2CPP_EXTERN_C String_t* _stringLiteral5B5485AAFD0F88488213FA21BAC0D600944F8265;
IL2CPP_EXTERN_C String_t* _stringLiteral623E70A7FF6385C93E57D1CAE15E16E3188E7663;
IL2CPP_EXTERN_C String_t* _stringLiteral6B12B6CCB3BEDC9356EF0F26246EFBA529D03D4C;
IL2CPP_EXTERN_C String_t* _stringLiteral74C185339ADE6B87DA245E0CBDFD66891CC43F54;
IL2CPP_EXTERN_C String_t* _stringLiteral7DF31CBCAC5F9AB299F5D58B49B126C24553D2D1;
IL2CPP_EXTERN_C String_t* _stringLiteral8CAC7A1CF27146D11E92BE39054D8E4594FE9B3D;
IL2CPP_EXTERN_C String_t* _stringLiteral8E5FBE3F351EB8F12ED980FF209B6810ED6C1D60;
IL2CPP_EXTERN_C String_t* _stringLiteralA1AAE3AE980660190B1F9951D819C0F1BEA090B7;
IL2CPP_EXTERN_C String_t* _stringLiteralA479396D9311F0A23258AE9653EFD051C3B8A4D5;
IL2CPP_EXTERN_C String_t* _stringLiteralA789C1A58CA8F1B51679B983874466E76B48EFB3;
IL2CPP_EXTERN_C String_t* _stringLiteralBD05CCAF3885FF0D51C07DE89653D67A9929A857;
IL2CPP_EXTERN_C String_t* _stringLiteralBDE80E2AD15AB61A85DBD7C97F022E1D102ABA5B;
IL2CPP_EXTERN_C String_t* _stringLiteralD289A15F06D391673864A3B5CEDBFF42865743C1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDAD4FD80C1A0A39AD74FD88700D89B9595B8D595;
IL2CPP_EXTERN_C String_t* _stringLiteralDB8C132238F9E774E6E9E180238DA0A65C25145C;
IL2CPP_EXTERN_C String_t* _stringLiteralE02D43BFB3611F4411DD21848B293789A2B1B8D6;
IL2CPP_EXTERN_C String_t* _stringLiteralEEC7732C32C4E0262755BF931431F792DE2E0033;
IL2CPP_EXTERN_C String_t* _stringLiteralF206CAA96C8ED929B66CE9CAF1513182AC391082;
IL2CPP_EXTERN_C String_t* _stringLiteralFAC891F8E2E6B2BA23524259218EF5EF3BF998B4;
IL2CPP_EXTERN_C const RuntimeMethod* AdaptivePerformanceLoaderHelper_CreateSubsystem_TisAdaptivePerformanceSubsystemDescriptor_t5D0468D8D509E8995FBDCD5DE6EF6F293B16DC82_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_m99C7D46952CCF2B412FEB0DA2401A952ECB2A0A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdaptivePerformanceLoaderHelper_DestroySubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_mF5E05816FE8B1579D3D604DC4DC2147F5331F6D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdaptivePerformanceLoaderHelper_GetLoadedSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_m1D52E70DE4C6278337CEDD2340C23B38674CF8E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdaptivePerformanceLoaderHelper_StartSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_m280177B28B689C5DA83E4056364D33158B8BDE3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdaptivePerformanceLoaderHelper_StopSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_m5043429A11F0840924CB4E0AE730585740AEBCCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdaptiveVariableRefreshRate_RefreshRateChanged_mFF8AAB10FAD23ACDB2DFDE115BD96015AE9B5DFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_m55B538F2538A5C0157CC28301628D6EDAC92C007_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E62F70969BF3C677153CD4B51C768B21F466098_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUpdater_ThreadProc_m20254534606D36097A4DCB11A7BC960FFA281360_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncValue_1_SyncUpdate_m36DC9C08B8E7C6C425C5ADD8E3F807D75A1D85E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncValue_1_Update_m15F2BF5D1A6143887E28FE6EB0C7B112EF7F204C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncValue_1__ctor_m8F76CA33FF29AF1898F434F8ED52FD8D3821ACB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDB1225A75BFAF418EF64307D04DBE72CF9246A03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8A119323481338039197B73D82916BB46DEE3C2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SamsungGameSDKAdaptivePerformanceSubsystemProvider_CheckInitialTemperatureAndSendWarnings_m10172DA370445C33B3E8884A7D05173F4B3A15DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SamsungGameSDKAdaptivePerformanceSubsystemProvider_OnCpuPerformanceBoostModeTimeout_m91FC0157DAFE2916B24E54898CB93AD8CEB8B902_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SamsungGameSDKAdaptivePerformanceSubsystemProvider_OnGpuPerformanceBoostModeTimeout_m96DA4CB5E57C02FA5FAA2ACFF1E153AA8D24F31F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SamsungGameSDKAdaptivePerformanceSubsystemProvider_OnPerformanceLevelTimeout_m9AF9FE5BD7C16BA9D84A1F994FDB5FC1A5ACD848_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SamsungGameSDKAdaptivePerformanceSubsystemProvider_OnPerformanceWarning_m5EFB9226A9084CBD55364A219DBB4ECB2E667911_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SamsungGameSDKAdaptivePerformanceSubsystemProvider_U3C_ctorU3Eb__25_1_m221F5206EAB0017B96EA1EA4AE2DBB1DDC0B6609_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SamsungGameSDKAdaptivePerformanceSubsystemProvider_U3C_ctorU3Eb__25_2_m7B49ED9C37BB709637C5117360974412BDA376DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemProvider_1_TryInitialize_mA622B6AE050B2792FAFC4E60571490EE8D31635F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__25_0_mAC499DCA8ABB3D42842970DC22ADD06BF310C382_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t1268B5EDA43417C2860DC1B9423CC2EB6171CF0E 
{
};

// UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1<System.Double>
struct AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A  : public RuntimeObject
{
	// UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1::updater
	AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* ___updater_0;
	// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1::updateHandle
	int32_t ___updateHandle_1;
	// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1::pendingUpdate
	bool ___pendingUpdate_2;
	// System.Func`1<T> UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1::updateFunc
	Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* ___updateFunc_3;
	// T UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1::newValue
	double ___newValue_4;
	// System.Single UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1::updateTimeDeltaSeconds
	float ___updateTimeDeltaSeconds_5;
	// System.Single UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1::updateTimestamp
	float ___updateTimestamp_6;
	// T UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1::<value>k__BackingField
	double ___U3CvalueU3Ek__BackingField_7;
	// System.Single UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1::<changeTimestamp>k__BackingField
	float ___U3CchangeTimestampU3Ek__BackingField_8;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<System.Action>
struct List_1_tDB72209F35D56F62A287633F9450978E90B90987  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDB72209F35D56F62A287633F9450978E90B90987_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor>
struct List_1_tBDCF1E0892E8DA197607E498736F867735A73137  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AdaptivePerformanceSubsystemDescriptorU5BU5D_tE478BE4CA194FF832B443F6091F40CCF7F1BEA20* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tBDCF1E0892E8DA197607E498736F867735A73137_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AdaptivePerformanceSubsystemDescriptorU5BU5D_tE478BE4CA194FF832B443F6091F40CCF7F1BEA20* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
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

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};
struct Il2CppArrayBounds;

// UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater
struct AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976  : public RuntimeObject
{
	// System.Threading.Thread UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::m_Thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___m_Thread_0;
	// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::m_Disposed
	bool ___m_Disposed_1;
	// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::m_Quit
	bool ___m_Quit_2;
	// System.Collections.Generic.List`1<System.Action> UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::m_UpdateAction
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* ___m_UpdateAction_3;
	// System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::m_UpdateRequests
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_UpdateRequests_4;
	// System.Boolean[] UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::m_RequestComplete
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___m_RequestComplete_5;
	// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::m_UpdateRequestReadIndex
	int32_t ___m_UpdateRequestReadIndex_6;
	// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::m_UpdateRequestWriteIndex
	int32_t ___m_UpdateRequestWriteIndex_7;
	// System.Object UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::m_Mutex
	RuntimeObject* ___m_Mutex_8;
	// System.Threading.Semaphore UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::m_Semaphore
	Semaphore_t12119E120563D7838E1DAFB15006DC8985C6AC4B* ___m_Semaphore_9;
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// UnityEngine.AdaptivePerformance.Samsung.Android.GameSDKLog
struct GameSDKLog_tD0080E506C05822E023880100FA71E86D5D5C043  : public RuntimeObject
{
};

struct GameSDKLog_tD0080E506C05822E023880100FA71E86D5D5C043_StaticFields
{
	// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings UnityEngine.AdaptivePerformance.Samsung.Android.GameSDKLog::settings
	SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* ___settings_0;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderConstants
struct SamsungAndroidProviderConstants_t99957262BF70058B6F67A669F6F9A4930FA91484  : public RuntimeObject
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

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5  : public RuntimeObject
{
	// System.String UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* ___U3CproviderBaseU3Ek__BackingField_1;
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

// UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRate
struct VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D  : public RuntimeObject
{
};

struct VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_StaticFields
{
	// UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRate::<Instance>k__BackingField
	RuntimeObject* ___U3CInstanceU3Ek__BackingField_0;
};

// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7  : public RuntimeObject
{
	// System.Int32 System.Version::_Major
	int32_t ____Major_0;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_1;
	// System.Int32 System.Version::_Build
	int32_t ____Build_2;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_3;
};

// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/<>c
struct U3CU3Ec_t84AE2B64185FB58241DE2F33733B9EC09815C76B  : public RuntimeObject
{
};

struct U3CU3Ec_t84AE2B64185FB58241DE2F33733B9EC09815C76B_StaticFields
{
	// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/<>c UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/<>c::<>9
	U3CU3Ec_t84AE2B64185FB58241DE2F33733B9EC09815C76B* ___U3CU3E9_0;
	// System.Action UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/<>c::<>9__25_0
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__25_0_1;
};

// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/AutoVariableRefreshRate
struct AutoVariableRefreshRate_t72A9AA228BAE0E009EA0A0BEC85609F07B6F2B75  : public RuntimeObject
{
	// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/AutoVariableRefreshRate::settings
	SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* ___settings_0;
	// UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/AutoVariableRefreshRate::vrrManager
	RuntimeObject* ___vrrManager_1;
	// System.Single UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/AutoVariableRefreshRate::VrrUpdateTime
	float ___VrrUpdateTime_2;
	// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/AutoVariableRefreshRate::lastRefreshRateIndex
	int32_t ___lastRefreshRateIndex_3;
};

// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/VRRManager
struct VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8  : public RuntimeObject
{
	// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/VRRManager::m_Api
	NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* ___m_Api_0;
	// System.Object UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/VRRManager::m_RefreshRateChangedLock
	RuntimeObject* ___m_RefreshRateChangedLock_1;
	// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/VRRManager::m_RefreshRateChanged
	bool ___m_RefreshRateChanged_2;
	// System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/VRRManager::m_SupportedRefreshRates
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_SupportedRefreshRates_3;
	// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/VRRManager::m_CurrentRefreshRate
	int32_t ___m_CurrentRefreshRate_4;
	// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/VRRManager::m_LastSetRefreshRate
	int32_t ___m_LastSetRefreshRate_5;
	// UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/VRRManager::RefreshRateChanged
	VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* ___RefreshRateChanged_6;
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem,UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem/APProvider>
struct SubsystemDescriptorWithProvider_2_t7A24A40A481885ED81D88CFBC8504FF67693053E  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem>
struct SubsystemProvider_1_t6ABBE424F6F1310EE46EEA513835617E7669F669  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem,UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor,UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem/APProvider>
struct SubsystemWithProvider_3_tB43E7390AB260ADBC542CF6E0E76631CE8CBA8D0  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	AdaptivePerformanceSubsystemDescriptor_t5D0468D8D509E8995FBDCD5DE6EF6F293B16DC82* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	APProvider_tCF914DB0FD4F4EB3579452C06E1D8AB02501B998* ___U3CproviderU3Ek__BackingField_3;
};

// UnityEngine.AdaptivePerformance.VisualScripting.AdaptivePerformanceScalerEvent
struct AdaptivePerformanceScalerEvent_t4FB8CAC39F9A8788AB10F7B8E579B0A4FB56558D 
{
	// System.String UnityEngine.AdaptivePerformance.VisualScripting.AdaptivePerformanceScalerEvent::Name
	String_t* ___Name_0;
	// System.Int32 UnityEngine.AdaptivePerformance.VisualScripting.AdaptivePerformanceScalerEvent::Level
	int32_t ___Level_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AdaptivePerformance.VisualScripting.AdaptivePerformanceScalerEvent
struct AdaptivePerformanceScalerEvent_t4FB8CAC39F9A8788AB10F7B8E579B0A4FB56558D_marshaled_pinvoke
{
	char* ___Name_0;
	int32_t ___Level_1;
};
// Native definition for COM marshalling of UnityEngine.AdaptivePerformance.VisualScripting.AdaptivePerformanceScalerEvent
struct AdaptivePerformanceScalerEvent_t4FB8CAC39F9A8788AB10F7B8E579B0A4FB56558D_marshaled_com
{
	Il2CppChar* ___Name_0;
	int32_t ___Level_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.AdaptivePerformance.ClusterInfo
struct ClusterInfo_tE84F530B1972D0F8712CD136B14D4C4136B0BA15 
{
	// System.Int32 UnityEngine.AdaptivePerformance.ClusterInfo::<BigCore>k__BackingField
	int32_t ___U3CBigCoreU3Ek__BackingField_0;
	// System.Int32 UnityEngine.AdaptivePerformance.ClusterInfo::<MediumCore>k__BackingField
	int32_t ___U3CMediumCoreU3Ek__BackingField_1;
	// System.Int32 UnityEngine.AdaptivePerformance.ClusterInfo::<LittleCore>k__BackingField
	int32_t ___U3CLittleCoreU3Ek__BackingField_2;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
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

// UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor/Cinfo
struct Cinfo_t016018D78B642CAAA7B595015B8AF98E5F1008DB 
{
	// System.String UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor/Cinfo
struct Cinfo_t016018D78B642CAAA7B595015B8AF98E5F1008DB_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
};
// Native definition for COM marshalling of UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor/Cinfo
struct Cinfo_t016018D78B642CAAA7B595015B8AF98E5F1008DB_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
};

// UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemBase`3<UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem,UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor,UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem/APProvider>
struct AdaptivePerformanceSubsystemBase_3_t68140149CB11930DF74CA40FD816D7A79C3B6637  : public SubsystemWithProvider_3_tB43E7390AB260ADBC542CF6E0E76631CE8CBA8D0
{
};

// UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor
struct AdaptivePerformanceSubsystemDescriptor_t5D0468D8D509E8995FBDCD5DE6EF6F293B16DC82  : public SubsystemDescriptorWithProvider_2_t7A24A40A481885ED81D88CFBC8504FF67693053E
{
};

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;
};

struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord
struct PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83 
{
	// UnityEngine.AdaptivePerformance.Provider.Feature UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::<ChangeFlags>k__BackingField
	int32_t ___U3CChangeFlagsU3Ek__BackingField_0;
	// System.Single UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::<TemperatureLevel>k__BackingField
	float ___U3CTemperatureLevelU3Ek__BackingField_1;
	// System.Single UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::<TemperatureTrend>k__BackingField
	float ___U3CTemperatureTrendU3Ek__BackingField_2;
	// UnityEngine.AdaptivePerformance.WarningLevel UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::<WarningLevel>k__BackingField
	int32_t ___U3CWarningLevelU3Ek__BackingField_3;
	// System.Int32 UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::<CpuPerformanceLevel>k__BackingField
	int32_t ___U3CCpuPerformanceLevelU3Ek__BackingField_4;
	// System.Int32 UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::<GpuPerformanceLevel>k__BackingField
	int32_t ___U3CGpuPerformanceLevelU3Ek__BackingField_5;
	// System.Boolean UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::<PerformanceLevelControlAvailable>k__BackingField
	bool ___U3CPerformanceLevelControlAvailableU3Ek__BackingField_6;
	// System.Single UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::<CpuFrameTime>k__BackingField
	float ___U3CCpuFrameTimeU3Ek__BackingField_7;
	// System.Single UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::<GpuFrameTime>k__BackingField
	float ___U3CGpuFrameTimeU3Ek__BackingField_8;
	// System.Single UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::<OverallFrameTime>k__BackingField
	float ___U3COverallFrameTimeU3Ek__BackingField_9;
	// System.Boolean UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::<CpuPerformanceBoost>k__BackingField
	bool ___U3CCpuPerformanceBoostU3Ek__BackingField_10;
	// System.Boolean UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::<GpuPerformanceBoost>k__BackingField
	bool ___U3CGpuPerformanceBoostU3Ek__BackingField_11;
	// UnityEngine.AdaptivePerformance.ClusterInfo UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::<ClusterInfo>k__BackingField
	ClusterInfo_tE84F530B1972D0F8712CD136B14D4C4136B0BA15 ___U3CClusterInfoU3Ek__BackingField_12;
	// UnityEngine.AdaptivePerformance.PerformanceMode UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::<PerformanceMode>k__BackingField
	int32_t ___U3CPerformanceModeU3Ek__BackingField_13;
};
// Native definition for P/Invoke marshalling of UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord
struct PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83_marshaled_pinvoke
{
	int32_t ___U3CChangeFlagsU3Ek__BackingField_0;
	float ___U3CTemperatureLevelU3Ek__BackingField_1;
	float ___U3CTemperatureTrendU3Ek__BackingField_2;
	int32_t ___U3CWarningLevelU3Ek__BackingField_3;
	int32_t ___U3CCpuPerformanceLevelU3Ek__BackingField_4;
	int32_t ___U3CGpuPerformanceLevelU3Ek__BackingField_5;
	int32_t ___U3CPerformanceLevelControlAvailableU3Ek__BackingField_6;
	float ___U3CCpuFrameTimeU3Ek__BackingField_7;
	float ___U3CGpuFrameTimeU3Ek__BackingField_8;
	float ___U3COverallFrameTimeU3Ek__BackingField_9;
	int32_t ___U3CCpuPerformanceBoostU3Ek__BackingField_10;
	int32_t ___U3CGpuPerformanceBoostU3Ek__BackingField_11;
	ClusterInfo_tE84F530B1972D0F8712CD136B14D4C4136B0BA15 ___U3CClusterInfoU3Ek__BackingField_12;
	int32_t ___U3CPerformanceModeU3Ek__BackingField_13;
};
// Native definition for COM marshalling of UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord
struct PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83_marshaled_com
{
	int32_t ___U3CChangeFlagsU3Ek__BackingField_0;
	float ___U3CTemperatureLevelU3Ek__BackingField_1;
	float ___U3CTemperatureTrendU3Ek__BackingField_2;
	int32_t ___U3CWarningLevelU3Ek__BackingField_3;
	int32_t ___U3CCpuPerformanceLevelU3Ek__BackingField_4;
	int32_t ___U3CGpuPerformanceLevelU3Ek__BackingField_5;
	int32_t ___U3CPerformanceLevelControlAvailableU3Ek__BackingField_6;
	float ___U3CCpuFrameTimeU3Ek__BackingField_7;
	float ___U3CGpuFrameTimeU3Ek__BackingField_8;
	float ___U3COverallFrameTimeU3Ek__BackingField_9;
	int32_t ___U3CCpuPerformanceBoostU3Ek__BackingField_10;
	int32_t ___U3CGpuPerformanceBoostU3Ek__BackingField_11;
	ClusterInfo_tE84F530B1972D0F8712CD136B14D4C4136B0BA15 ___U3CClusterInfoU3Ek__BackingField_12;
	int32_t ___U3CPerformanceModeU3Ek__BackingField_13;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;
};

struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_StaticFields
{
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_11;
};
// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// UnityEngine.jvalue
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Boolean UnityEngine.jvalue::z
			bool ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			bool ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte UnityEngine.jvalue::b
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Char UnityEngine.jvalue::c
			Il2CppChar ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppChar ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 UnityEngine.jvalue::s
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.jvalue::i
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 UnityEngine.jvalue::j
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single UnityEngine.jvalue::f
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double UnityEngine.jvalue::d
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr UnityEngine.jvalue::l
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.jvalue
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.jvalue
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};

// UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem/APProvider
struct APProvider_tCF914DB0FD4F4EB3579452C06E1D8AB02501B998  : public SubsystemProvider_1_t6ABBE424F6F1310EE46EEA513835617E7669F669
{
	// System.Boolean UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem/APProvider::m_Running
	bool ___m_Running_1;
};

// UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem
struct AdaptivePerformanceSubsystem_t2D41A24C328589A3018DA0478476D2591E9B5C23  : public AdaptivePerformanceSubsystemBase_3_t68140149CB11930DF74CA40FD816D7A79C3B6637
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

// System.Threading.Semaphore
struct Semaphore_t12119E120563D7838E1DAFB15006DC8985C6AC4B  : public WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

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

// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider
struct SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545  : public APProvider_tCF914DB0FD4F4EB3579452C06E1D8AB02501B998
{
	// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::m_Api
	NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* ___m_Api_2;
	// UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::m_AsyncUpdater
	AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* ___m_AsyncUpdater_3;
	// UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::m_Data
	PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83 ___m_Data_4;
	// System.Object UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::m_DataLock
	RuntimeObject* ___m_DataLock_5;
	// UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1<System.Double> UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::m_SkinTemp
	AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* ___m_SkinTemp_6;
	// UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1<System.Double> UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::m_GPUTime
	AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* ___m_GPUTime_7;
	// System.Version UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::m_Version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___m_Version_8;
	// System.Single UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::m_MinTempLevel
	float ___m_MinTempLevel_9;
	// System.Single UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::m_MaxTempLevel
	float ___m_MaxTempLevel_10;
	// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::m_PerformanceLevelControlSystemChange
	bool ___m_PerformanceLevelControlSystemChange_11;
	// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::m_AllowPerformanceLevelControlChanges
	bool ___m_AllowPerformanceLevelControlChanges_12;
	// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/AutoVariableRefreshRate UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::m_AutoVariableRefreshRate
	AutoVariableRefreshRate_t72A9AA228BAE0E009EA0A0BEC85609F07B6F2B75* ___m_AutoVariableRefreshRate_13;
	// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::<MaxCpuPerformanceLevel>k__BackingField
	int32_t ___U3CMaxCpuPerformanceLevelU3Ek__BackingField_14;
	// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::<MaxGpuPerformanceLevel>k__BackingField
	int32_t ___U3CMaxGpuPerformanceLevelU3Ek__BackingField_15;
	// UnityEngine.AdaptivePerformance.Provider.Feature UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::<Capabilities>k__BackingField
	int32_t ___U3CCapabilitiesU3Ek__BackingField_17;
	// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::<Initialized>k__BackingField
	bool ___U3CInitializedU3Ek__BackingField_18;
};

struct SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545_StaticFields
{
	// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::settings
	SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* ___settings_16;
};

// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi
struct NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// System.Action`1<UnityEngine.AdaptivePerformance.WarningLevel> UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::PerformanceWarningEvent
	Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA* ___PerformanceWarningEvent_11;
	// System.Action UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::PerformanceLevelTimeoutEvent
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___PerformanceLevelTimeoutEvent_12;
	// System.Action UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::CpuPerformanceBoostReleasedByTimeoutEvent
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___CpuPerformanceBoostReleasedByTimeoutEvent_13;
	// System.Action UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::GpuPerformanceBoostReleasedByTimeoutEvent
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___GpuPerformanceBoostReleasedByTimeoutEvent_14;
	// System.Action UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::RefreshRateChangedEvent
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___RefreshRateChangedEvent_15;
};

struct NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields
{
	// UnityEngine.AndroidJavaObject UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::s_GameSDK
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___s_GameSDK_4;
	// System.IntPtr UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::s_GameSDKRawObjectID
	intptr_t ___s_GameSDKRawObjectID_5;
	// System.IntPtr UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::s_GetGpuFrameTimeID
	intptr_t ___s_GetGpuFrameTimeID_6;
	// System.IntPtr UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::s_GetHighPrecisionSkinTempLevelID
	intptr_t ___s_GetHighPrecisionSkinTempLevelID_7;
	// System.IntPtr UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::s_GetClusterInfolID
	intptr_t ___s_GetClusterInfolID_8;
	// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::s_isAvailable
	bool ___s_isAvailable_9;
	// UnityEngine.jvalue[] UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::s_NoArgs
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___s_NoArgs_10;
};

// System.Action`1<System.Int32Enum>
struct Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.AdaptivePerformance.WarningLevel>
struct Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA  : public MulticastDelegate_t
{
};

// System.Func`1<System.Double>
struct Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.AdaptivePerformance.AdaptivePerformanceLoader
struct AdaptivePerformanceLoader_tF12F9ABBB7711A0FDE47852B1F358EAD7664F54E  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler
struct AdaptivePerformanceScaler_tB9F76E7E942E332BEF5DC363BE906AD4FD1700BC  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.AdaptivePerformance.AdaptivePerformanceIndexer UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::m_Indexer
	AdaptivePerformanceIndexer_tE43B4A07AF7944322BA939E2D4F8AE90AD42EF73* ___m_Indexer_4;
	// System.Int32 UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::<CurrentLevel>k__BackingField
	int32_t ___U3CCurrentLevelU3Ek__BackingField_5;
	// System.Int32 UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::<GpuImpact>k__BackingField
	int32_t ___U3CGpuImpactU3Ek__BackingField_6;
	// System.Int32 UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::<CpuImpact>k__BackingField
	int32_t ___U3CCpuImpactU3Ek__BackingField_7;
	// System.Int32 UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::m_OverrideLevel
	int32_t ___m_OverrideLevel_8;
	// UnityEngine.AdaptivePerformance.AdaptivePerformanceScalerSettingsBase UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::m_defaultSetting
	AdaptivePerformanceScalerSettingsBase_tDF99867134986926CE22505B0B9EE99AD74501AA* ___m_defaultSetting_9;
	// UnityEngine.AdaptivePerformance.VisualScripting.AdaptivePerformanceScalerEvent UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::m_ScalerEvent
	AdaptivePerformanceScalerEvent_t4FB8CAC39F9A8788AB10F7B8E579B0A4FB56558D ___m_ScalerEvent_10;
	// UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::m_Settings
	IAdaptivePerformanceSettings_tFB49C60F821F093D3F18E8DC115E7D929E6C86C8* ___m_Settings_11;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings
struct IAdaptivePerformanceSettings_tFB49C60F821F093D3F18E8DC115E7D929E6C86C8  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings::m_Logging
	bool ___m_Logging_4;
	// System.Boolean UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings::m_AutomaticPerformanceModeEnabled
	bool ___m_AutomaticPerformanceModeEnabled_5;
	// System.Boolean UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings::m_EnableBoostOnStartup
	bool ___m_EnableBoostOnStartup_6;
	// System.Int32 UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings::m_StatsLoggingFrequencyInFrames
	int32_t ___m_StatsLoggingFrequencyInFrames_7;
	// UnityEngine.AdaptivePerformance.AdaptivePerformanceIndexerSettings UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings::m_IndexerSettings
	AdaptivePerformanceIndexerSettings_t3D9418B7302C8FCA3344719FF10FBADFD2F1CDC6* ___m_IndexerSettings_8;
	// UnityEngine.AdaptivePerformance.AdaptivePerformanceScalerSettings UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings::m_ScalerSettings
	AdaptivePerformanceScalerSettings_tAF8002CE95F36DE71E945DA73AADB6783EB2FFD8* ___m_ScalerSettings_9;
	// UnityEngine.AdaptivePerformance.AdaptivePerformanceScalerProfile[] UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings::m_scalerProfileList
	AdaptivePerformanceScalerProfileU5BU5D_t502F55D3686CAB852984FDB6F92431963616F4B7* ___m_scalerProfileList_10;
	// System.Int32 UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings::m_DefaultScalerProfilerIndex
	int32_t ___m_DefaultScalerProfilerIndex_11;
};

// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem
struct SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6  : public AdaptivePerformanceSubsystem_t2D41A24C328589A3018DA0478476D2591E9B5C23
{
};

// System.Threading.ThreadStart
struct ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2  : public MulticastDelegate_t
{
};

// UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler
struct VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95  : public MulticastDelegate_t
{
};

// UnityEngine.AdaptivePerformance.AdaptiveFramerate
struct AdaptiveFramerate_t87F82B3C838B42BFDE5277B446D2A9C4674D6104  : public AdaptivePerformanceScaler_tB9F76E7E942E332BEF5DC363BE906AD4FD1700BC
{
	// System.Int32 UnityEngine.AdaptivePerformance.AdaptiveFramerate::m_DefaultFPS
	int32_t ___m_DefaultFPS_12;
};

// UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper
struct AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F  : public AdaptivePerformanceLoader_tF12F9ABBB7711A0FDE47852B1F358EAD7664F54E
{
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem> UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper::m_SubsystemInstanceMap
	Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* ___m_SubsystemInstanceMap_4;
};

// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings
struct SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC  : public IAdaptivePerformanceSettings_tFB49C60F821F093D3F18E8DC115E7D929E6C86C8
{
	// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::m_SamsungProviderLogging
	bool ___m_SamsungProviderLogging_12;
	// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::m_HighSpeedVRR
	bool ___m_HighSpeedVRR_13;
	// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::m_AutomaticVRR
	bool ___m_AutomaticVRR_14;
};

struct SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_StaticFields
{
	// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::s_RuntimeInstance
	SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* ___s_RuntimeInstance_15;
};

// UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate
struct AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4  : public AdaptiveFramerate_t87F82B3C838B42BFDE5277B446D2A9C4674D6104
{
	// System.Boolean UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::m_AdaptiveVRREnabled
	bool ___m_AdaptiveVRREnabled_13;
	// UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::m_VRR
	RuntimeObject* ___m_VRR_14;
	// System.Int32 UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::m_CurrentRefreshRateIndex
	int32_t ___m_CurrentRefreshRateIndex_15;
	// System.Int32 UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::m_DefaultRefreshRateIndex
	int32_t ___m_DefaultRefreshRateIndex_16;
};

// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader
struct SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293  : public AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F
{
};

struct SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor> UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::s_SamsungGameSDKSubsystemDescriptors
	List_1_tBDCF1E0892E8DA197607E498736F867735A73137* ___s_SamsungGameSDKSubsystemDescriptors_5;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
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
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F  : public RuntimeArray
{
	ALIGN_FIELD (8) jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 m_Items[1];

	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 value)
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


// System.Int32 System.Array::IndexOf<System.Int32>(T[],T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E62F70969BF3C677153CD4B51C768B21F466098_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___array0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper::CreateSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptivePerformanceLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m5A5862F45F20C876D0E996E32E4F74463ED37883_gshared (AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___descriptors0, String_t* ___id1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper::StartSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptivePerformanceLoaderHelper_StartSubsystem_TisRuntimeObject_mED46F7CFD33FB472255ECFB6FCC441D782DD8421_gshared (AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper::StopSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptivePerformanceLoaderHelper_StopSubsystem_TisRuntimeObject_mFE5CC154546FE5C5FEA943ADDE6690D3C39A3A77_gshared (AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper::DestroySubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptivePerformanceLoaderHelper_DestroySubsystem_TisRuntimeObject_mEB494C898E29C9B3A0FFDC6502073D730D1DD21C_gshared (AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m8EDF953DA7FF0E33AE19FB51BD7DBDB7C495CFE0_gshared (Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Double>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mFD3B853B23577DD7757C6726EB1FB0EC97D25B31_gshared (Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1<System.Double>::.ctor(UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater,T,System.Single,System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValue_1__ctor_m8F76CA33FF29AF1898F434F8ED52FD8D3821ACB5_gshared (AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* __this, AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* ___updater0, double ___value1, float ___updateTimeDeltaSeconds2, Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* ___updateFunc3, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1<System.Double>::SyncUpdate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValue_1_SyncUpdate_m36DC9C08B8E7C6C425C5ADD8E3F807D75A1D85E2_gshared (AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* __this, float ___timestamp0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider`1<System.Object>::TryInitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SubsystemProvider_1_TryInitialize_m9AA3B6F298FD48A6CE69279AB823A1558FE3C11D_gshared (SubsystemProvider_1_t7964A83C7EDD0F612E018A2033A9D500479D92F3* __this, const RuntimeMethod* method) ;
// T UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1<System.Double>::get_value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_gshared_inline (AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1<System.Double>::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncValue_1_Update_m15F2BF5D1A6143887E28FE6EB0C7B112EF7F204C_gshared (AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* __this, float ___timestamp0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32Enum>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_gshared_inline (Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B* __this, int32_t ___obj0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.AdaptivePerformance.AdaptiveFramerate::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveFramerate_Awake_mEFFD0C457A737B1F637A2BB27E7C468351A7C894 (AdaptiveFramerate_t87F82B3C838B42BFDE5277B446D2A9C4674D6104* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRate::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VariableRefreshRate_get_Instance_mB72B4AF9C0C464513D27FCD7D81C5AB089675BB9_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableRefreshRateEventHandler__ctor_m7A50456A08A0FDE7002210349CE4F2D9BF73EBF7 (VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Array::IndexOf<System.Int32>(T[],T)
inline int32_t Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E62F70969BF3C677153CD4B51C768B21F466098 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___array0, int32_t ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, const RuntimeMethod*))Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E62F70969BF3C677153CD4B51C768B21F466098_gshared)(___array0, ___value1, method);
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveFramerate::OnDisabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveFramerate_OnDisabled_m6CA3A4174B1E09B31BEFB70E212B7811C2CF9DD0 (AdaptiveFramerate_t87F82B3C838B42BFDE5277B446D2A9C4674D6104* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.AdaptiveFramerate::OnEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveFramerate_OnEnabled_m83DA60536ADE76F0E290455BF879835B354BA3BD (AdaptiveFramerate_t87F82B3C838B42BFDE5277B446D2A9C4674D6104* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.AdaptiveFramerate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveFramerate__ctor_m4DDA4198D52446513FA0C8CA97BB19FA72C9EBE3 (AdaptiveFramerate_t87F82B3C838B42BFDE5277B446D2A9C4674D6104* __this, const RuntimeMethod* method) ;
// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::get_samsungGameSDKSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* SamsungAndroidProviderLoader_get_samsungGameSDKSubsystem_m74B312CF72A655ED0D1B9289B62D273848341720 (SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::get_running()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SubsystemWithProvider_get_running_m6BF31FC3BDA38C56C0F60FEA37767A4151B22C44_inline (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* __this, const RuntimeMethod* method) ;
// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::GetSettings()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* SamsungAndroidProviderSettings_GetSettings_mAFADC8F0A6AE54BE4D54AEC67D91019DE82F24C2_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper::CreateSubsystem<UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor,UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem>(System.Collections.Generic.List`1<TDescriptor>,System.String)
inline void AdaptivePerformanceLoaderHelper_CreateSubsystem_TisAdaptivePerformanceSubsystemDescriptor_t5D0468D8D509E8995FBDCD5DE6EF6F293B16DC82_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_m99C7D46952CCF2B412FEB0DA2401A952ECB2A0A9 (AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F* __this, List_1_tBDCF1E0892E8DA197607E498736F867735A73137* ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	((  void (*) (AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F*, List_1_tBDCF1E0892E8DA197607E498736F867735A73137*, String_t*, const RuntimeMethod*))AdaptivePerformanceLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m5A5862F45F20C876D0E996E32E4F74463ED37883_gshared)(__this, ___descriptors0, ___id1, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper::StartSubsystem<UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem>()
inline void AdaptivePerformanceLoaderHelper_StartSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_m280177B28B689C5DA83E4056364D33158B8BDE3D (AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F* __this, const RuntimeMethod* method)
{
	((  void (*) (AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F*, const RuntimeMethod*))AdaptivePerformanceLoaderHelper_StartSubsystem_TisRuntimeObject_mED46F7CFD33FB472255ECFB6FCC441D782DD8421_gshared)(__this, method);
}
// System.Void UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper::StopSubsystem<UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem>()
inline void AdaptivePerformanceLoaderHelper_StopSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_m5043429A11F0840924CB4E0AE730585740AEBCCB (AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F* __this, const RuntimeMethod* method)
{
	((  void (*) (AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F*, const RuntimeMethod*))AdaptivePerformanceLoaderHelper_StopSubsystem_TisRuntimeObject_mFE5CC154546FE5C5FEA943ADDE6690D3C39A3A77_gshared)(__this, method);
}
// System.Void UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper::DestroySubsystem<UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem>()
inline void AdaptivePerformanceLoaderHelper_DestroySubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_mF5E05816FE8B1579D3D604DC4DC2147F5331F6D4 (AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F* __this, const RuntimeMethod* method)
{
	((  void (*) (AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F*, const RuntimeMethod*))AdaptivePerformanceLoaderHelper_DestroySubsystem_TisRuntimeObject_mEB494C898E29C9B3A0FFDC6502073D730D1DD21C_gshared)(__this, method);
}
// System.Boolean UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdaptivePerformanceLoaderHelper_Deinitialize_mCDC96B6AAD8AE49EF4E011AA78344AE54D18AAC8 (AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptivePerformanceLoaderHelper__ctor_mEEA0DF770A2EAB15E711E6FCC9AE3166FFF30863 (AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor>::.ctor()
inline void List_1__ctor_mDB1225A75BFAF418EF64307D04DBE72CF9246A03 (List_1_tBDCF1E0892E8DA197607E498736F867735A73137* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBDCF1E0892E8DA197607E498736F867735A73137*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAdaptivePerformanceSettings__ctor_mBEEA4933FD88BF7E3C20FAAE1E8BEAF3EBB18379 (IAdaptivePerformanceSettings_tFB49C60F821F093D3F18E8DC115E7D929E6C86C8* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::get_samsungProviderLogging()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SamsungAndroidProviderSettings_get_samsungProviderLogging_mE70D42A6A1439E3DB2406B298C2AF4F30811DA9C_inline (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Thread::get_IsAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Thread_get_IsAlive_m87922B882A526D780570799F497EEB4C99F005DF (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Action>::get_Count()
inline int32_t List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_inline (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Action>::Add(T)
inline void List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_inline (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Threading.Semaphore::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Semaphore__ctor_m5954C9FB5ED41FD527888AA96F28398DBCAFA237 (Semaphore_t12119E120563D7838E1DAFB15006DC8985C6AC4B* __this, int32_t ___initialCount0, int32_t ___maximumCount1, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Start()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Semaphore::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Semaphore_Release_m3AA41CBF1DEA03948FD56E47B5E05A68F43A7A94 (Semaphore_t12119E120563D7838E1DAFB15006DC8985C6AC4B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Action>::.ctor()
inline void List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212 (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71 (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* ___start0, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_Name_m53E2BA6E84C04A6393EA5E470E516703CB892E4A (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNI::AttachCurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_AttachCurrentThread_mD5647083E547A77F9377BDB78106D426878A00E7 (const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Action>::get_Item(System.Int32)
inline Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* List_1_get_Item_m8A119323481338039197B73D82916BB46DEE3C2D (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNI::DetachCurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_DetachCurrentThread_m8549BBC1875C2142A1C6BE5B57663E42B9C04A85 (const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Join()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Join_mB756581AAF5EB028081256E0517892BC8867779F (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUpdater_Dispose_mD52CA6DA8B1B7993C6AC8D3C4F0A5C88088E8996 (AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* __this, bool ___disposing0, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_deviceModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_deviceModel_m8587189FA95DA31E470F864208BC6FB6B35F6D06 (const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mA2A4405B1B9F3653A6A9AA7F223F68D86A0C6264 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::IsAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_IsAvailable_m6392723FFEF931DD13C4FA37C2F5CCB375C06C63 (const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m77027979E9BA297A2803C6EA7691881619C35F91_inline (Cinfo_t016018D78B642CAAA7B595015B8AF98E5F1008DB* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_mE7F2A87EA82917E26391F16464ADF35CA8A8CD19_inline (Cinfo_t016018D78B642CAAA7B595015B8AF98E5F1008DB* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mE90E2B1A438FE40025C78836845E76876630DC34_inline (Cinfo_t016018D78B642CAAA7B595015B8AF98E5F1008DB* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor::RegisterDescriptor(UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdaptivePerformanceSubsystemDescriptor_t5D0468D8D509E8995FBDCD5DE6EF6F293B16DC82* AdaptivePerformanceSubsystemDescriptor_RegisterDescriptor_m377677FFF2A5CF7FEC432246C83799FD534319FB (Cinfo_t016018D78B642CAAA7B595015B8AF98E5F1008DB ___cinfo0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptivePerformanceSubsystem__ctor_mEEBD3B76AC04711B8088F2E55218C832F490A078 (AdaptivePerformanceSubsystem_t2D41A24C328589A3018DA0478476D2591E9B5C23* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem/APProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void APProvider__ctor_m7D1F683236A86C7F9A1E8EF4612D08A8A223807D (APProvider_tCF914DB0FD4F4EB3579452C06E1D8AB02501B998* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::set_MaxCpuPerformanceLevel(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystemProvider_set_MaxCpuPerformanceLevel_m77AD95FA570B1CBD1CAAD4AB0DF5FFD957520B6E_inline (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::set_MaxGpuPerformanceLevel(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystemProvider_set_MaxGpuPerformanceLevel_m8D0BF330EAA2BE477A2E8A1902D51E75D4286E6B_inline (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.AdaptivePerformance.WarningLevel>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m3447050AC75D7978A825F681D4EB19C5A0B735E0 (Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m8EDF953DA7FF0E33AE19FB51BD7DBDB7C495CFE0_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::.ctor(System.Action`1<UnityEngine.AdaptivePerformance.WarningLevel>,System.Action,System.Action,System.Action,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi__ctor_mCCF79AADACCB32B40BB7D448F18A4DCE93C1A285 (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA* ___sustainedPerformanceWarning0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___sustainedPerformanceTimeout1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___refreshRateChanged2, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___cpuPerformanceBoostReleasedByTimeout3, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___gpuPerformanceBoostReleasedByTimeout4, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUpdater__ctor_m0E52F8DBFA255D988D89F3DF47CD6FA7E90EBB34 (AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Double>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mFD3B853B23577DD7757C6726EB1FB0EC97D25B31 (Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mFD3B853B23577DD7757C6726EB1FB0EC97D25B31_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1<System.Double>::.ctor(UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater,T,System.Single,System.Func`1<T>)
inline void AsyncValue_1__ctor_m8F76CA33FF29AF1898F434F8ED52FD8D3821ACB5 (AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* __this, AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* ___updater0, double ___value1, float ___updateTimeDeltaSeconds2, Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* ___updateFunc3, const RuntimeMethod* method)
{
	((  void (*) (AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A*, AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976*, double, float, Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7*, const RuntimeMethod*))AsyncValue_1__ctor_m8F76CA33FF29AF1898F434F8ED52FD8D3821ACB5_gshared)(__this, ___updater0, ___value1, ___updateTimeDeltaSeconds2, ___updateFunc3, method);
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUpdater_Start_m44754B8FBC894327CB62D4C2893211AF14068983 (AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* __this, const RuntimeMethod* method) ;
// UnityEngine.AdaptivePerformance.Provider.Feature UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::get_ChangeFlags()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::set_ChangeFlags(UnityEngine.AdaptivePerformance.Provider.Feature)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::set_WarningLevel(UnityEngine.AdaptivePerformance.WarningLevel)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_WarningLevel_mBC3853B7D0AA1412C41DFD248FA9E7252DAEB5F4_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::set_CpuPerformanceLevel(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_CpuPerformanceLevel_m8BBB7FA33AF2644ED0DE81CD58CCB07C5F71ED03_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::set_GpuPerformanceLevel(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_GpuPerformanceLevel_mBA26ABE3F6089BA232022D7F0F38B55B8FA9481A_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::set_CpuPerformanceBoost(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_CpuPerformanceBoost_mD8BF1CE74A03B57E81DBCD9A3DDE8DAA27968FF5_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::set_GpuPerformanceBoost(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_GpuPerformanceBoost_m0A5764E94B8EC621A0AA51B2F7C24BA1EAF844B9_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Double UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::GetHighPrecisionSkinTempLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NativeApi_GetHighPrecisionSkinTempLevel_m5A5DEF03CC1CF28B42714F6C016C420900F1BE8D (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::GetClusterInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_GetClusterInfo_m09F7C453D791CFD6DC7BC3622FE8EE70FC1A6208 (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1<System.Double>::SyncUpdate(System.Single)
inline void AsyncValue_1_SyncUpdate_m36DC9C08B8E7C6C425C5ADD8E3F807D75A1D85E2 (AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* __this, float ___timestamp0, const RuntimeMethod* method)
{
	((  void (*) (AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A*, float, const RuntimeMethod*))AsyncValue_1_SyncUpdate_m36DC9C08B8E7C6C425C5ADD8E3F807D75A1D85E2_gshared)(__this, ___timestamp0, method);
}
// System.Single UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::GetTemperatureLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SamsungGameSDKAdaptivePerformanceSubsystemProvider_GetTemperatureLevel_m0E736E73CEBCF20FCD3BC80BD975D920AC5879E9 (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::set_TemperatureLevel(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_TemperatureLevel_mFC2BC8E019EFB0E7611C242D1F5D4EAB76570BB5_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void System.Version::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version__ctor_m52D06833AE6481C0A9B72085BDC4D09A723CEF7F (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* __this, String_t* ___version0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem>::TryInitialize()
inline bool SubsystemProvider_1_TryInitialize_mA622B6AE050B2792FAFC4E60571490EE8D31635F (SubsystemProvider_1_t6ABBE424F6F1310EE46EEA513835617E7669F669* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (SubsystemProvider_1_t6ABBE424F6F1310EE46EEA513835617E7669F669*, const RuntimeMethod*))SubsystemProvider_1_TryInitialize_m9AA3B6F298FD48A6CE69279AB823A1558FE3C11D_gshared)(__this, method);
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_Initialize_mBF7887E439A3C735559C768CF0E58F32700B758A (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::GetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeApi_GetVersion_m1B4FDC104DFA0E61676416F7011CB4E58F8CDFFA (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::TryParseVersion(System.String,System.Version&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungGameSDKAdaptivePerformanceSubsystemProvider_TryParseVersion_m9EFF26325A1DED00F8C5237171899F27AF7DF1C4 (String_t* ___versionString0, Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7** ___version1, const RuntimeMethod* method) ;
// System.Void System.Version::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version__ctor_m0871675040007535EA3D8083A4BEAE9DF8C92FF4 (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* __this, int32_t ___major0, int32_t ___minor1, const RuntimeMethod* method) ;
// System.Boolean System.Version::op_GreaterThanOrEqual(System.Version,System.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_op_GreaterThanOrEqual_mA931CBD9362C3D0D4D149B63A16B10B11BBBA933 (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___v10, Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___v21, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::GetMaxCpuPerformanceLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_GetMaxCpuPerformanceLevel_m66F7DE690CC642C7A0879F10129331159D597FEB (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::GetMaxGpuPerformanceLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_GetMaxGpuPerformanceLevel_mAD7DFC28CD24437C9B9717ABC0BDB914675D19BA (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::Terminate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_Terminate_m6FA285A63E71056A30093B2FF9C7F56CE10A3DD3 (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::get_MaxCpuPerformanceLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SamsungGameSDKAdaptivePerformanceSubsystemProvider_get_MaxCpuPerformanceLevel_mA6075DC4801259ADF90CB1964AAD7F225091CB25_inline (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::get_MaxGpuPerformanceLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SamsungGameSDKAdaptivePerformanceSubsystemProvider_get_MaxGpuPerformanceLevel_mF83EA2F569E79E69EAD7E8A7C3A739A4EAD3AAE1_inline (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::set_PerformanceLevelControlAvailable(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_PerformanceLevelControlAvailable_m78A1EFC49C88D90E778F7C4C8605662E94B125FF_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::ImmediateUpdateTemperature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystemProvider_ImmediateUpdateTemperature_m15AF7DA210D2C45BDCDD818F882C0400E9E04BDB (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::CheckAndInitializeVRR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystemProvider_CheckAndInitializeVRR_mA593A4D753AFD36803DC217CDB5F9FD89BB2D50B (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::IsVariableRefreshRateSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_IsVariableRefreshRateSupported_mD79BDE9CCACFA91ED207D40505BF424F08A4A8D1 (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/VRRManager::.ctor(UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager__ctor_m70B3C81E60597B53629DD2CAFA6EED1D04ECAD73 (VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8* __this, NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* ___api0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRate::set_Instance(UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableRefreshRate_set_Instance_mF83BCC9BEA5164D10F5BAF3A5856AFF6C352A7CC_inline (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/AutoVariableRefreshRate::.ctor(UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoVariableRefreshRate__ctor_m96C2B7923CAA6D947EF0FBF05CCB8DC7D4A26126 (AutoVariableRefreshRate_t72A9AA228BAE0E009EA0A0BEC85609F07B6F2B75* __this, RuntimeObject* ___vrrManagerInstance0, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::FromSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_FromSeconds_mE585CC8180040ED064DC8B6546E6C94A129BFFC5 (double ___value0, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Sleep(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_mE56E1C1B4065F7B83379D36C360B1AA5D8B65286 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___timeout0, const RuntimeMethod* method) ;
// System.Single UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::GetHighPrecisionSkinTempLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SamsungGameSDKAdaptivePerformanceSubsystemProvider_GetHighPrecisionSkinTempLevel_m48665546D607E58CED329A4BAB9F035862125266 (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::OnPerformanceWarning(UnityEngine.AdaptivePerformance.WarningLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystemProvider_OnPerformanceWarning_m5EFB9226A9084CBD55364A219DBB4ECB2E667911 (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, int32_t ___warningLevel0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.ClusterInfo::set_BigCore(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClusterInfo_set_BigCore_m6773CE3416C5DDE25B397D398D60253CA4A913A0_inline (ClusterInfo_tE84F530B1972D0F8712CD136B14D4C4136B0BA15* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.ClusterInfo::set_MediumCore(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClusterInfo_set_MediumCore_mC984A40803648B368E8E998F82E7C89D9E24E126_inline (ClusterInfo_tE84F530B1972D0F8712CD136B14D4C4136B0BA15* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.ClusterInfo::set_LittleCore(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClusterInfo_set_LittleCore_m2B02B46BBEA719EFBDD955DF419EAAC81E69C7AB_inline (ClusterInfo_tE84F530B1972D0F8712CD136B14D4C4136B0BA15* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::set_ClusterInfo(UnityEngine.AdaptivePerformance.ClusterInfo)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_ClusterInfo_m70A3B30678BE28E09161ADF030CBAFE8D5BC9E3E_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, ClusterInfo_tE84F530B1972D0F8712CD136B14D4C4136B0BA15 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUpdater_Dispose_mE3267C63AAF1B517C1AE45CC31A0FC5397E94E1F (AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* __this, const RuntimeMethod* method) ;
// T UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1<System.Double>::get_value()
inline double AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_inline (AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* __this, const RuntimeMethod* method)
{
	return ((  double (*) (AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A*, const RuntimeMethod*))AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_gshared_inline)(__this, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.AsyncValue`1<System.Double>::Update(System.Single)
inline bool AsyncValue_1_Update_m15F2BF5D1A6143887E28FE6EB0C7B112EF7F204C (AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* __this, float ___timestamp0, const RuntimeMethod* method)
{
	return ((  bool (*) (AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A*, float, const RuntimeMethod*))AsyncValue_1_Update_m15F2BF5D1A6143887E28FE6EB0C7B112EF7F204C_gshared)(__this, ___timestamp0, method);
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/VRRManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager_Update_mF6B91AAC8B2D33C3A64582B2B7F0F48EE6DEF2F1 (VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::get_automaticVRR()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SamsungAndroidProviderSettings_get_automaticVRR_mA4EC43A6755953623F7A5F1B3C365A3A9CE25C3B_inline (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.QualitySettings::get_vSyncCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_get_vSyncCount_m623B92EE9CBB51A7A96CA88022319CC46CC02F24 (const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/AutoVariableRefreshRate::UpdateAutoVRR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoVariableRefreshRate_UpdateAutoVRR_m77A01AECEF39F90CF88D12236C3E5BCE6AB33F2C (AutoVariableRefreshRate_t72A9AA228BAE0E009EA0A0BEC85609F07B6F2B75* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::DisableSystemControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystemProvider_DisableSystemControl_m79A657125BE7C923E4A44E23050E55FB5292D3D6 (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::LatestGpuFrameTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SamsungGameSDKAdaptivePerformanceSubsystemProvider_LatestGpuFrameTime_m4118012730C37918D676414118415DAAE40F87B1 (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::set_GpuFrameTime(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_GpuFrameTime_mB779C484C185DB05F985A295EA7242EB8DA37299_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single System.Math::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Max_mB1131EAD9E03519D13D246CE96B599561C784957 (float ___val10, float ___val21, const RuntimeMethod* method) ;
// System.Single System.Math::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Min_mB41DB89BB991289571A046270A924C0EEAA2C4BC (float ___val10, float ___val21, const RuntimeMethod* method) ;
// System.Single UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::NormalizeTemperatureLevel(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SamsungGameSDKAdaptivePerformanceSubsystemProvider_NormalizeTemperatureLevel_m412041754F3A4E55426540CF46334F47C3C808D0 (float ___currentTempLevel0, float ___minValue1, float ___maxValue2, const RuntimeMethod* method) ;
// System.Single UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::NormalizeTemperatureLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SamsungGameSDKAdaptivePerformanceSubsystemProvider_NormalizeTemperatureLevel_mD0BDF0811E8DE8E0BFF9EC932797CCAA92EF0F23 (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, float ___currentTempLevel0, const RuntimeMethod* method) ;
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_op_Equality_m4DFED47C6F3258EB59FCACA6A314B42B30EB7BC0 (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___v10, Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___v21, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::SetFreqLevels(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_SetFreqLevels_mAB6D4E6F1F5B24F2965A4537814214683144A1CA (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, int32_t ___cpu0, int32_t ___gpu1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::get_CpuPerformanceLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PerformanceDataRecord_get_CpuPerformanceLevel_mF688EC621C77916A86F96CF7D0DAFD520B6D68E8_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::get_GpuPerformanceLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PerformanceDataRecord_get_GpuPerformanceLevel_mA928B60EF914AB4E7D95291E1357A3FE795DBE23_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::EnableSystemControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystemProvider_EnableSystemControl_m9920DEFF8682D1804EA2FC7B1BBFC36A24A9DB26 (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::EnableCpuBoost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_EnableCpuBoost_m0EB18898717BBFA5DA1E0DB9EC857C543E1342AE (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::get_CpuPerformanceBoost()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PerformanceDataRecord_get_CpuPerformanceBoost_m55A78568F8E19144717C3CEC17CE90FA766591D2_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::EnableGpuBoost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_EnableGpuBoost_m880A3314BE930D068F2EED836F79C295636FEB69 (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord::get_GpuPerformanceBoost()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PerformanceDataRecord_get_GpuPerformanceBoost_mFD01BBFC9A9BE53ED81947089A02691635789B7E_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/VRRManager::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager_Resume_mA736A3968C0CB3B7BB3806A854CCA5C9C6CA4537 (VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8* __this, const RuntimeMethod* method) ;
// System.Double UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::GetGpuFrameTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NativeApi_GetGpuFrameTime_m6EC21E51847ECE0F1377047EA9BF73364612B830 (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___javaInterface0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::StaticInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_StaticInit_m74800583658910FD2AB3A6C3A4A3AD90848AAB53 (const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.AdaptivePerformance.WarningLevel>::Invoke(T)
inline void Action_1_Invoke_m772CF576DB7B297059C25510D48E3CD587FB66DF_inline (Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA* __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA*, int32_t, const RuntimeMethod*))Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_gshared_inline)(__this, ___obj0, method);
}
// System.Void UnityEngine.AndroidJNI::ExceptionClear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_ExceptionClear_m90681289A6CEAF160DB188A3E2177F323D996F82 (const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::GetMethodID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetMethodID_mCB601A11C971557E2F89DD968224749BD71D2B3A (intptr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::ExceptionOccurred()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ExceptionOccurred_m6C27C01B14483F99373608BF1A56CA53BA46F926 (const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Explicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mB06D1B6CFBA72B5C55FBEC1BA3BC25958AB60EB1 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNI::ExceptionDescribe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_ExceptionDescribe_m9E582B7E3ED1CA3D23A35325F676CD88A1E05B5D (const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___className0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_gshared)(__this, ___methodName0, ___args1, method);
}
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::GetJavaMethodID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeApi_GetJavaMethodID_mDC5107AC7FFC1FD76D358FD35F661827C9ACF1D8 (intptr_t ___classId0, String_t* ___name1, String_t* ___sig2, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::RegisterListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_RegisterListener_m3F7890B2A26F536170718B3B6427E36819CA7DFB (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::UnregisterListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnregisterListener_m9A67762C6AADE2AD868716F0ABA59110614C9510 (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_identifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_identifier_m26B38D49FA10A46D61C1309769A59E9CF7460006 (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Double UnityEngine.AndroidJNI::CallDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNI_CallDoubleMethod_m88A34942D1206EEE8BEA95475722D2E8FFFFC711 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Int32 UnityEngine.AndroidJNI::CallIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_CallIntMethod_m5CE09EA0846BF49ABE3E23BC923710A0F1FF4787 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int32[]>(System.String,System.Object[])
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* AndroidJavaObject_Call_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_m55B538F2538A5C0157CC28301628D6EDAC92C007 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::GetSupportedRefreshRates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* NativeApi_GetSupportedRefreshRates_m9A0DFA198F63A4CD85C76E79332A01E3ABB17B0D (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::get_highSpeedVRR()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SamsungAndroidProviderSettings_get_highSpeedVRR_mF7D7A276D6AC87D624429E128A5B36155ABCE4A1_inline (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___item0, method);
}
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_gshared)(__this, method);
}
// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::GetCurrentRefreshRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_GetCurrentRefreshRate_m5FB0263F9B8A1EC2AD3DF2F97B13E4F409FB99B6 (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/VRRManager::SetDefaultVRR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager_SetDefaultVRR_m940B0AA0FFE6E95911BCB1E63EA61AA40EF3F03E (VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/VRRManager::UpdateRefreshRateInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager_UpdateRefreshRateInfo_m6A68EB0D43389FA34109DDAE9D46784BA3B4D699 (VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/VRRManager::SetRefreshRateByIndexInternal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VRRManager_SetRefreshRateByIndexInternal_m40E6D92B34F1A7EC77EB19DBADB6DA117C27F645 (VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableRefreshRateEventHandler_Invoke_mA665080591D6EA72C7EC12CFC0CAFAC8E5FF37EC_inline (VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::set_automaticVRR(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SamsungAndroidProviderSettings_set_automaticVRR_m10FAA3C18EF7EF58166BB3D9A572B5D249584639_inline (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/VRRManager::get_SupportedRefreshRates()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* VRRManager_get_SupportedRefreshRates_mB0E31383F75832592FC2DB967948C05534E4A1AF_inline (VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Application::get_targetFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_targetFrameRate_mB9877E89AFCF1CF0651D9471D5152490BF66BE5E (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::SetRefreshRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_SetRefreshRate_m0470DFA5D8D96A725BF6C4DF09413C564DD6BE13 (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, int32_t ___targetRefreshRate0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652 (const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m66CECC80459D453C2E1202216D7DF9CF4C880A6B (U3CU3Ec_t84AE2B64185FB58241DE2F33733B9EC09815C76B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/VRRManager::OnRefreshRateChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager_OnRefreshRateChanged_mFD31A4012CBF088031187EBD0377B23A1590619F (VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8* __this, const RuntimeMethod* method) ;
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
// System.String UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdaptiveVariableRefreshRate_get_Name_mF8C08025C2614FAA00F1545EE340DFA951C561C0 (AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CF9A4312580ADAE7FA331122F314BFA89FDA671);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string Name => "Adaptive Variable Refresh Rate";
		return _stringLiteral4CF9A4312580ADAE7FA331122F314BFA89FDA671;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::get_Enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdaptiveVariableRefreshRate_get_Enabled_mD0C3364B0533C355A3A3EB26D552679F71755808 (AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4* __this, const RuntimeMethod* method) 
{
	{
		// public override bool Enabled { get => m_AdaptiveVRREnabled; set => m_AdaptiveVRREnabled = value; }
		bool L_0 = __this->___m_AdaptiveVRREnabled_13;
		return L_0;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::set_Enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_set_Enabled_m65B74C83EF4D8828A61B9EF174EDB36EC542B37D (AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public override bool Enabled { get => m_AdaptiveVRREnabled; set => m_AdaptiveVRREnabled = value; }
		bool L_0 = ___value0;
		__this->___m_AdaptiveVRREnabled_13 = L_0;
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_Awake_mFE8680AB2D8A192912C5A96FC14211D2DBB89A22 (AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdaptiveVariableRefreshRate_RefreshRateChanged_mFF8AAB10FAD23ACDB2DFDE115BD96015AE9B5DFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E62F70969BF3C677153CD4B51C768B21F466098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		AdaptiveFramerate_Awake_mEFFD0C457A737B1F637A2BB27E7C468351A7C894(__this, NULL);
		// if (m_Settings == null)
		IAdaptivePerformanceSettings_tFB49C60F821F093D3F18E8DC115E7D929E6C86C8* L_0 = ((AdaptivePerformanceScaler_tB9F76E7E942E332BEF5DC363BE906AD4FD1700BC*)__this)->___m_Settings_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// return;
		return;
	}

IL_0015:
	{
		// m_VRR = VariableRefreshRate.Instance;
		RuntimeObject* L_2;
		L_2 = VariableRefreshRate_get_Instance_mB72B4AF9C0C464513D27FCD7D81C5AB089675BB9_inline(NULL);
		__this->___m_VRR_14 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_VRR_14), (void*)L_2);
		// if (m_VRR == null)
		RuntimeObject* L_3 = __this->___m_VRR_14;
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		// Enabled = false;
		VirtualActionInvoker1< bool >::Invoke(7 /* System.Void UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::set_Enabled(System.Boolean) */, __this, (bool)0);
		// return;
		return;
	}

IL_0030:
	{
		// m_VRR.RefreshRateChanged += RefreshRateChanged;
		RuntimeObject* L_4 = __this->___m_VRR_14;
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_5 = (VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95*)il2cpp_codegen_object_new(VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		VariableRefreshRateEventHandler__ctor_m7A50456A08A0FDE7002210349CE4F2D9BF73EBF7(L_5, __this, (intptr_t)((void*)AdaptiveVariableRefreshRate_RefreshRateChanged_mFF8AAB10FAD23ACDB2DFDE115BD96015AE9B5DFC_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* >::Invoke(3 /* System.Void UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::add_RefreshRateChanged(UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler) */, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_4, L_5);
		// m_CurrentRefreshRateIndex = Array.IndexOf(m_VRR.SupportedRefreshRates, m_VRR.CurrentRefreshRate);
		RuntimeObject* L_6 = __this->___m_VRR_14;
		NullCheck(L_6);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7;
		L_7 = InterfaceFuncInvoker0< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* >::Invoke(0 /* System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_SupportedRefreshRates() */, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_6);
		RuntimeObject* L_8 = __this->___m_VRR_14;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_CurrentRefreshRate() */, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_8);
		int32_t L_10;
		L_10 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E62F70969BF3C677153CD4B51C768B21F466098(L_7, L_9, Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E62F70969BF3C677153CD4B51C768B21F466098_RuntimeMethod_var);
		__this->___m_CurrentRefreshRateIndex_15 = L_10;
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::OnDisabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_OnDisabled_m4D920248468848B9B22B226130A74865A7CCE40B (AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDisabled();
		AdaptiveFramerate_OnDisabled_m6CA3A4174B1E09B31BEFB70E212B7811C2CF9DD0(__this, NULL);
		// if (m_VRR == null)
		RuntimeObject* L_0 = __this->___m_VRR_14;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// m_VRR.SetRefreshRateByIndex(m_DefaultRefreshRateIndex);
		RuntimeObject* L_1 = __this->___m_VRR_14;
		int32_t L_2 = __this->___m_DefaultRefreshRateIndex_16;
		NullCheck(L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(2 /* System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::SetRefreshRateByIndex(System.Int32) */, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::OnEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_OnEnabled_m22746B6382BB835B71C1762FEF1A392D5A491B80 (AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E62F70969BF3C677153CD4B51C768B21F466098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnabled();
		AdaptiveFramerate_OnEnabled_m83DA60536ADE76F0E290455BF879835B354BA3BD(__this, NULL);
		// if (m_VRR == null)
		RuntimeObject* L_0 = __this->___m_VRR_14;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// m_DefaultRefreshRateIndex = Array.IndexOf(m_VRR.SupportedRefreshRates, m_VRR.CurrentRefreshRate);
		RuntimeObject* L_1 = __this->___m_VRR_14;
		NullCheck(L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = InterfaceFuncInvoker0< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* >::Invoke(0 /* System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_SupportedRefreshRates() */, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_3 = __this->___m_VRR_14;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_CurrentRefreshRate() */, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_3);
		int32_t L_5;
		L_5 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E62F70969BF3C677153CD4B51C768B21F466098(L_2, L_4, Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E62F70969BF3C677153CD4B51C768B21F466098_RuntimeMethod_var);
		__this->___m_DefaultRefreshRateIndex_16 = L_5;
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_OnDestroy_m7B555B16DF7CFECFD01D8C478FB4694155437045 (AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdaptiveVariableRefreshRate_RefreshRateChanged_mFF8AAB10FAD23ACDB2DFDE115BD96015AE9B5DFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VRR == null)
		RuntimeObject* L_0 = __this->___m_VRR_14;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// m_VRR.RefreshRateChanged -= RefreshRateChanged;
		RuntimeObject* L_1 = __this->___m_VRR_14;
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_2 = (VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95*)il2cpp_codegen_object_new(VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		VariableRefreshRateEventHandler__ctor_m7A50456A08A0FDE7002210349CE4F2D9BF73EBF7(L_2, __this, (intptr_t)((void*)AdaptiveVariableRefreshRate_RefreshRateChanged_mFF8AAB10FAD23ACDB2DFDE115BD96015AE9B5DFC_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* >::Invoke(4 /* System.Void UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::remove_RefreshRateChanged(UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler) */, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::RefreshRateChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_RefreshRateChanged_mFF8AAB10FAD23ACDB2DFDE115BD96015AE9B5DFC (AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E62F70969BF3C677153CD4B51C768B21F466098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VRR == null)
		RuntimeObject* L_0 = __this->___m_VRR_14;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// m_CurrentRefreshRateIndex = Array.IndexOf(m_VRR.SupportedRefreshRates, m_VRR.CurrentRefreshRate);
		RuntimeObject* L_1 = __this->___m_VRR_14;
		NullCheck(L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = InterfaceFuncInvoker0< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* >::Invoke(0 /* System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_SupportedRefreshRates() */, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_3 = __this->___m_VRR_14;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_CurrentRefreshRate() */, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_3);
		int32_t L_5;
		L_5 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E62F70969BF3C677153CD4B51C768B21F466098(L_2, L_4, Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E62F70969BF3C677153CD4B51C768B21F466098_RuntimeMethod_var);
		__this->___m_CurrentRefreshRateIndex_15 = L_5;
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::OnLevelIncrease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_OnLevelIncrease_m47AE80C1833D7191B6679CBF9AE7099A7EC35078 (AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (m_VRR == null)
		RuntimeObject* L_0 = __this->___m_VRR_14;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (m_CurrentRefreshRateIndex > 0)
		int32_t L_1 = __this->___m_CurrentRefreshRateIndex_15;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}
	{
		// var rateIndex = m_CurrentRefreshRateIndex - 1;
		int32_t L_2 = __this->___m_CurrentRefreshRateIndex_15;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		// var fps = m_VRR.SupportedRefreshRates[rateIndex];
		RuntimeObject* L_3 = __this->___m_VRR_14;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4;
		L_4 = InterfaceFuncInvoker0< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* >::Invoke(0 /* System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_SupportedRefreshRates() */, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_3);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		// if (fps < MinBound || fps > MaxBound)
		int32_t L_8 = V_1;
		float L_9;
		L_9 = VirtualFuncInvoker0< float >::Invoke(16 /* System.Single UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::get_MinBound() */, __this);
		if ((((float)((float)L_8)) < ((float)L_9)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_10 = V_1;
		float L_11;
		L_11 = VirtualFuncInvoker0< float >::Invoke(18 /* System.Single UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::get_MaxBound() */, __this);
		if ((!(((float)((float)L_10)) > ((float)L_11))))
		{
			goto IL_003e;
		}
	}

IL_003d:
	{
		// return;
		return;
	}

IL_003e:
	{
		// if (m_VRR.SetRefreshRateByIndex(rateIndex))
		RuntimeObject* L_12 = __this->___m_VRR_14;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		bool L_14;
		L_14 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(2 /* System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::SetRefreshRateByIndex(System.Int32) */, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_12, L_13);
		if (!L_14)
		{
			goto IL_0053;
		}
	}
	{
		// m_CurrentRefreshRateIndex = rateIndex;
		int32_t L_15 = V_0;
		__this->___m_CurrentRefreshRateIndex_15 = L_15;
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::OnLevelDecrease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_OnLevelDecrease_mA347DC91AA9491E9451BA5FAA164C39A05DE2983 (AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (m_VRR == null)
		RuntimeObject* L_0 = __this->___m_VRR_14;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (m_CurrentRefreshRateIndex < m_VRR.SupportedRefreshRates.Length - 1)
		int32_t L_1 = __this->___m_CurrentRefreshRateIndex_15;
		RuntimeObject* L_2 = __this->___m_VRR_14;
		NullCheck(L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3;
		L_3 = InterfaceFuncInvoker0< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* >::Invoke(0 /* System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_SupportedRefreshRates() */, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), 1)))))
		{
			goto IL_0061;
		}
	}
	{
		// var rateIndex = m_CurrentRefreshRateIndex + 1;
		int32_t L_4 = __this->___m_CurrentRefreshRateIndex_15;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// var fps = m_VRR.SupportedRefreshRates[rateIndex];
		RuntimeObject* L_5 = __this->___m_VRR_14;
		NullCheck(L_5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6;
		L_6 = InterfaceFuncInvoker0< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* >::Invoke(0 /* System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_SupportedRefreshRates() */, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_5);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = L_9;
		// if (fps < MinBound || fps > MaxBound)
		int32_t L_10 = V_1;
		float L_11;
		L_11 = VirtualFuncInvoker0< float >::Invoke(16 /* System.Single UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::get_MinBound() */, __this);
		if ((((float)((float)L_10)) < ((float)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_12 = V_1;
		float L_13;
		L_13 = VirtualFuncInvoker0< float >::Invoke(18 /* System.Single UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::get_MaxBound() */, __this);
		if ((!(((float)((float)L_12)) > ((float)L_13))))
		{
			goto IL_004c;
		}
	}

IL_004b:
	{
		// return;
		return;
	}

IL_004c:
	{
		// if (m_VRR.SetRefreshRateByIndex(rateIndex))
		RuntimeObject* L_14 = __this->___m_VRR_14;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		bool L_16;
		L_16 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(2 /* System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::SetRefreshRateByIndex(System.Int32) */, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_14, L_15);
		if (!L_16)
		{
			goto IL_0061;
		}
	}
	{
		// m_CurrentRefreshRateIndex = rateIndex;
		int32_t L_17 = V_0;
		__this->___m_CurrentRefreshRateIndex_15 = L_17;
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate__ctor_m45F992D15709678C75D34B6D5F8FB008674E2C58 (AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4* __this, const RuntimeMethod* method) 
{
	{
		AdaptiveFramerate__ctor_m4DDA4198D52446513FA0C8CA97BB19FA72C9EBE3(__this, NULL);
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
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::get_Initialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderLoader_get_Initialized_m078A4ABB081C677E761A2433A38ADC613C119E55 (SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293* __this, const RuntimeMethod* method) 
{
	{
		// return samsungGameSDKSubsystem != null;
		SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* L_0;
		L_0 = SamsungAndroidProviderLoader_get_samsungGameSDKSubsystem_m74B312CF72A655ED0D1B9289B62D273848341720(__this, NULL);
		return (bool)((!(((RuntimeObject*)(SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::get_Running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderLoader_get_Running_mBD9589810D1ADB3AEE69DFD46044D8DEB2C43DB4 (SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293* __this, const RuntimeMethod* method) 
{
	{
		// return samsungGameSDKSubsystem != null && samsungGameSDKSubsystem.running;
		SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* L_0;
		L_0 = SamsungAndroidProviderLoader_get_samsungGameSDKSubsystem_m74B312CF72A655ED0D1B9289B62D273848341720(__this, NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* L_1;
		L_1 = SamsungAndroidProviderLoader_get_samsungGameSDKSubsystem_m74B312CF72A655ED0D1B9289B62D273848341720(__this, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = SubsystemWithProvider_get_running_m6BF31FC3BDA38C56C0F60FEA37767A4151B22C44_inline(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::get_samsungGameSDKSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* SamsungAndroidProviderLoader_get_samsungGameSDKSubsystem_m74B312CF72A655ED0D1B9289B62D273848341720 (SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdaptivePerformanceLoaderHelper_GetLoadedSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_m1D52E70DE4C6278337CEDD2340C23B38674CF8E0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return GetLoadedSubsystem<SamsungGameSDKAdaptivePerformanceSubsystem>(); }
		SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* L_0;
		L_0 = GenericVirtualFuncInvoker0< SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* >::Invoke(AdaptivePerformanceLoaderHelper_GetLoadedSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_m1D52E70DE4C6278337CEDD2340C23B38674CF8E0_RuntimeMethod_var, __this);
		return L_0;
	}
}
// UnityEngine.ISubsystem UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::GetDefaultSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SamsungAndroidProviderLoader_GetDefaultSubsystem_mD1D0DCFB80C6753B89AC9720C65FE76984B99520 (SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293* __this, const RuntimeMethod* method) 
{
	{
		// return samsungGameSDKSubsystem;
		SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* L_0;
		L_0 = SamsungAndroidProviderLoader_get_samsungGameSDKSubsystem_m74B312CF72A655ED0D1B9289B62D273848341720(__this, NULL);
		return L_0;
	}
}
// UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::GetSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IAdaptivePerformanceSettings_tFB49C60F821F093D3F18E8DC115E7D929E6C86C8* SamsungAndroidProviderLoader_GetSettings_m8A0099932C135CE398515BF7482C43D894F22441 (SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293* __this, const RuntimeMethod* method) 
{
	{
		// return SamsungAndroidProviderSettings.GetSettings();
		SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* L_0;
		L_0 = SamsungAndroidProviderSettings_GetSettings_mAFADC8F0A6AE54BE4D54AEC67D91019DE82F24C2_inline(NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderLoader_Initialize_m5858C2F5E9FAAEE52409997159AD034C02064991 (SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdaptivePerformanceLoaderHelper_CreateSubsystem_TisAdaptivePerformanceSubsystemDescriptor_t5D0468D8D509E8995FBDCD5DE6EF6F293B16DC82_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_m99C7D46952CCF2B412FEB0DA2401A952ECB2A0A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B12B6CCB3BEDC9356EF0F26246EFBA529D03D4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE02D43BFB3611F4411DD21848B293789A2B1B8D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CreateSubsystem<AdaptivePerformanceSubsystemDescriptor, SamsungGameSDKAdaptivePerformanceSubsystem>(s_SamsungGameSDKSubsystemDescriptors, "SamsungGameSDK");
		il2cpp_codegen_runtime_class_init_inline(SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293_il2cpp_TypeInfo_var);
		List_1_tBDCF1E0892E8DA197607E498736F867735A73137* L_0 = ((SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293_StaticFields*)il2cpp_codegen_static_fields_for(SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293_il2cpp_TypeInfo_var))->___s_SamsungGameSDKSubsystemDescriptors_5;
		AdaptivePerformanceLoaderHelper_CreateSubsystem_TisAdaptivePerformanceSubsystemDescriptor_t5D0468D8D509E8995FBDCD5DE6EF6F293B16DC82_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_m99C7D46952CCF2B412FEB0DA2401A952ECB2A0A9(__this, L_0, _stringLiteralE02D43BFB3611F4411DD21848B293789A2B1B8D6, AdaptivePerformanceLoaderHelper_CreateSubsystem_TisAdaptivePerformanceSubsystemDescriptor_t5D0468D8D509E8995FBDCD5DE6EF6F293B16DC82_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_m99C7D46952CCF2B412FEB0DA2401A952ECB2A0A9_RuntimeMethod_var);
		// if (samsungGameSDKSubsystem == null)
		SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* L_1;
		L_1 = SamsungAndroidProviderLoader_get_samsungGameSDKSubsystem_m74B312CF72A655ED0D1B9289B62D273848341720(__this, NULL);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		// Debug.LogError("Unable to start the Samsung Android subsystem.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral6B12B6CCB3BEDC9356EF0F26246EFBA529D03D4C, NULL);
	}

IL_0022:
	{
		// return samsungGameSDKSubsystem != null;
		SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* L_2;
		L_2 = SamsungAndroidProviderLoader_get_samsungGameSDKSubsystem_m74B312CF72A655ED0D1B9289B62D273848341720(__this, NULL);
		return (bool)((!(((RuntimeObject*)(SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderLoader_Start_m6F124A52212118BBC82F0F5B534661CC348F8CC6 (SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdaptivePerformanceLoaderHelper_StartSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_m280177B28B689C5DA83E4056364D33158B8BDE3D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartSubsystem<SamsungGameSDKAdaptivePerformanceSubsystem>();
		AdaptivePerformanceLoaderHelper_StartSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_m280177B28B689C5DA83E4056364D33158B8BDE3D(__this, AdaptivePerformanceLoaderHelper_StartSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_m280177B28B689C5DA83E4056364D33158B8BDE3D_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderLoader_Stop_m09649590212A34E95BC5C4F709C20D53CE95B66F (SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdaptivePerformanceLoaderHelper_StopSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_m5043429A11F0840924CB4E0AE730585740AEBCCB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopSubsystem<SamsungGameSDKAdaptivePerformanceSubsystem>();
		AdaptivePerformanceLoaderHelper_StopSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_m5043429A11F0840924CB4E0AE730585740AEBCCB(__this, AdaptivePerformanceLoaderHelper_StopSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_m5043429A11F0840924CB4E0AE730585740AEBCCB_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderLoader_Deinitialize_mC01C17A4795C55BD72DADBDF7115BC90BCBD5BD0 (SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdaptivePerformanceLoaderHelper_DestroySubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_mF5E05816FE8B1579D3D604DC4DC2147F5331F6D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DestroySubsystem<SamsungGameSDKAdaptivePerformanceSubsystem>();
		AdaptivePerformanceLoaderHelper_DestroySubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_mF5E05816FE8B1579D3D604DC4DC2147F5331F6D4(__this, AdaptivePerformanceLoaderHelper_DestroySubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_mF5E05816FE8B1579D3D604DC4DC2147F5331F6D4_RuntimeMethod_var);
		// return base.Deinitialize();
		bool L_0;
		L_0 = AdaptivePerformanceLoaderHelper_Deinitialize_mCDC96B6AAD8AE49EF4E011AA78344AE54D18AAC8(__this, NULL);
		return L_0;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderLoader__ctor_m2B6288D900467305274E822344CB000EC7B1420E (SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293* __this, const RuntimeMethod* method) 
{
	{
		AdaptivePerformanceLoaderHelper__ctor_mEEA0DF770A2EAB15E711E6FCC9AE3166FFF30863(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderLoader__cctor_m63E33CBDED0A59936861AFC0D6BCF5A77A7E5C60 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDB1225A75BFAF418EF64307D04DBE72CF9246A03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBDCF1E0892E8DA197607E498736F867735A73137_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<AdaptivePerformanceSubsystemDescriptor> s_SamsungGameSDKSubsystemDescriptors =
		//     new List<AdaptivePerformanceSubsystemDescriptor>();
		List_1_tBDCF1E0892E8DA197607E498736F867735A73137* L_0 = (List_1_tBDCF1E0892E8DA197607E498736F867735A73137*)il2cpp_codegen_object_new(List_1_tBDCF1E0892E8DA197607E498736F867735A73137_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mDB1225A75BFAF418EF64307D04DBE72CF9246A03(L_0, List_1__ctor_mDB1225A75BFAF418EF64307D04DBE72CF9246A03_RuntimeMethod_var);
		((SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293_StaticFields*)il2cpp_codegen_static_fields_for(SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293_il2cpp_TypeInfo_var))->___s_SamsungGameSDKSubsystemDescriptors_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293_StaticFields*)il2cpp_codegen_static_fields_for(SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293_il2cpp_TypeInfo_var))->___s_SamsungGameSDKSubsystemDescriptors_5), (void*)L_0);
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
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::get_samsungProviderLogging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderSettings_get_samsungProviderLogging_mE70D42A6A1439E3DB2406B298C2AF4F30811DA9C (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_SamsungProviderLogging; }
		bool L_0 = __this->___m_SamsungProviderLogging_12;
		return L_0;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::set_samsungProviderLogging(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderSettings_set_samsungProviderLogging_m799B21694D0AE66CED86A06CCBFB24E4B322F37B (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_SamsungProviderLogging = value; }
		bool L_0 = ___value0;
		__this->___m_SamsungProviderLogging_12 = L_0;
		// set { m_SamsungProviderLogging = value; }
		return;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::get_highSpeedVRR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderSettings_get_highSpeedVRR_mF7D7A276D6AC87D624429E128A5B36155ABCE4A1 (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_HighSpeedVRR; }
		bool L_0 = __this->___m_HighSpeedVRR_13;
		return L_0;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::set_highSpeedVRR(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderSettings_set_highSpeedVRR_mEBA299AB5B79E26FA9760EDB5DB357D1F51159F2 (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_HighSpeedVRR = value; }
		bool L_0 = ___value0;
		__this->___m_HighSpeedVRR_13 = L_0;
		// set { m_HighSpeedVRR = value; }
		return;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::get_automaticVRR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderSettings_get_automaticVRR_mA4EC43A6755953623F7A5F1B3C365A3A9CE25C3B (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_AutomaticVRR; }
		bool L_0 = __this->___m_AutomaticVRR_14;
		return L_0;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::set_automaticVRR(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderSettings_set_automaticVRR_m10FAA3C18EF7EF58166BB3D9A572B5D249584639 (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_AutomaticVRR = value; }
		bool L_0 = ___value0;
		__this->___m_AutomaticVRR_14 = L_0;
		// set { m_AutomaticVRR = value; }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderSettings_Awake_mBE88FA41ECD3C5566F2E71A1FA500536653A0220 (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_RuntimeInstance = this;
		((SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_StaticFields*)il2cpp_codegen_static_fields_for(SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_il2cpp_TypeInfo_var))->___s_RuntimeInstance_15 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_StaticFields*)il2cpp_codegen_static_fields_for(SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_il2cpp_TypeInfo_var))->___s_RuntimeInstance_15), (void*)__this);
		// }
		return;
	}
}
// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::GetSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* SamsungAndroidProviderSettings_GetSettings_mAFADC8F0A6AE54BE4D54AEC67D91019DE82F24C2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// settings = s_RuntimeInstance;
		SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* L_0 = ((SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_StaticFields*)il2cpp_codegen_static_fields_for(SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_il2cpp_TypeInfo_var))->___s_RuntimeInstance_15;
		// return settings;
		return L_0;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderSettings__ctor_m6BA5E84565C1FB2B7857B12FC7606CC78C1240E5 (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, const RuntimeMethod* method) 
{
	{
		// bool m_AutomaticVRR = true;
		__this->___m_AutomaticVRR_14 = (bool)1;
		IAdaptivePerformanceSettings__ctor_mBEEA4933FD88BF7E3C20FAAE1E8BEAF3EBB18379(__this, NULL);
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
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.GameSDKLog::Debug(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSDKLog_Debug_m77A891BB9DDE2E2BE7D362630A10251FAAE12A5B (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSDKLog_tD0080E506C05822E023880100FA71E86D5D5C043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral623E70A7FF6385C93E57D1CAE15E16E3188E7663);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (settings != null && settings.samsungProviderLogging)
		il2cpp_codegen_runtime_class_init_inline(GameSDKLog_tD0080E506C05822E023880100FA71E86D5D5C043_il2cpp_TypeInfo_var);
		SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* L_0 = ((GameSDKLog_tD0080E506C05822E023880100FA71E86D5D5C043_StaticFields*)il2cpp_codegen_static_fields_for(GameSDKLog_tD0080E506C05822E023880100FA71E86D5D5C043_il2cpp_TypeInfo_var))->___settings_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GameSDKLog_tD0080E506C05822E023880100FA71E86D5D5C043_il2cpp_TypeInfo_var);
		SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* L_2 = ((GameSDKLog_tD0080E506C05822E023880100FA71E86D5D5C043_StaticFields*)il2cpp_codegen_static_fields_for(GameSDKLog_tD0080E506C05822E023880100FA71E86D5D5C043_il2cpp_TypeInfo_var))->___settings_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = SamsungAndroidProviderSettings_get_samsungProviderLogging_mE70D42A6A1439E3DB2406B298C2AF4F30811DA9C_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// UnityEngine.Debug.Log(System.String.Format("[Samsung GameSDK] " + format, args));
		String_t* L_4 = ___format0;
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral623E70A7FF6385C93E57D1CAE15E16E3188E7663, L_4, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___args1;
		String_t* L_7;
		L_7 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(L_5, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_7, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.GameSDKLog::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSDKLog__cctor_mC22F43BB39FAF7E82FA8B276785190DFA2282BA0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSDKLog_tD0080E506C05822E023880100FA71E86D5D5C043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static SamsungAndroidProviderSettings settings = SamsungAndroidProviderSettings.GetSettings();
		SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* L_0;
		L_0 = SamsungAndroidProviderSettings_GetSettings_mAFADC8F0A6AE54BE4D54AEC67D91019DE82F24C2_inline(NULL);
		((GameSDKLog_tD0080E506C05822E023880100FA71E86D5D5C043_StaticFields*)il2cpp_codegen_static_fields_for(GameSDKLog_tD0080E506C05822E023880100FA71E86D5D5C043_il2cpp_TypeInfo_var))->___settings_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GameSDKLog_tD0080E506C05822E023880100FA71E86D5D5C043_StaticFields*)il2cpp_codegen_static_fields_for(GameSDKLog_tD0080E506C05822E023880100FA71E86D5D5C043_il2cpp_TypeInfo_var))->___settings_0), (void*)L_0);
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
// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::Register(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncUpdater_Register_m76240B5B2E1EB64E1DEBDCF0A4839BE515BB62B1 (AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Thread.IsAlive)
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_0 = __this->___m_Thread_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Thread_get_IsAlive_m87922B882A526D780570799F497EEB4C99F005DF(L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_000f:
	{
		// int handle = m_UpdateAction.Count;
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_2 = __this->___m_UpdateAction_3;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_inline(L_2, List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_RuntimeMethod_var);
		// m_UpdateAction.Add(action);
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_4 = __this->___m_UpdateAction_3;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = ___action0;
		NullCheck(L_4);
		List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_inline(L_4, L_5, List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var);
		// return handle;
		return L_3;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUpdater_Start_m44754B8FBC894327CB62D4C2893211AF14068983 (AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Semaphore_t12119E120563D7838E1DAFB15006DC8985C6AC4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int maxRequests = m_UpdateAction.Count;
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_0 = __this->___m_UpdateAction_3;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_inline(L_0, List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_RuntimeMethod_var);
		V_0 = L_1;
		// if (maxRequests <= 0)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		// return;
		return;
	}

IL_0011:
	{
		// m_Semaphore = new Semaphore(0, maxRequests);
		int32_t L_3 = V_0;
		Semaphore_t12119E120563D7838E1DAFB15006DC8985C6AC4B* L_4 = (Semaphore_t12119E120563D7838E1DAFB15006DC8985C6AC4B*)il2cpp_codegen_object_new(Semaphore_t12119E120563D7838E1DAFB15006DC8985C6AC4B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Semaphore__ctor_m5954C9FB5ED41FD527888AA96F28398DBCAFA237(L_4, 0, L_3, NULL);
		__this->___m_Semaphore_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Semaphore_9), (void*)L_4);
		// m_UpdateRequests = new int[maxRequests];
		int32_t L_5 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_5);
		__this->___m_UpdateRequests_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UpdateRequests_4), (void*)L_6);
		// m_RequestComplete = new bool[maxRequests];
		int32_t L_7 = V_0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_8 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)L_7);
		__this->___m_RequestComplete_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RequestComplete_5), (void*)L_8);
		// m_Thread.Start();
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_9 = __this->___m_Thread_0;
		NullCheck(L_9);
		Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA(L_9, NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::RequestUpdate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncUpdater_RequestUpdate_m17D6A4052A9E1BF5ED30873ACD8A9EE3E27F73A5 (AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* __this, int32_t ___handle0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		// lock (m_Mutex)
		RuntimeObject* L_0 = __this->___m_Mutex_8;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0050:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0059;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0059:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
				// int newWriteIndex = (m_UpdateRequestWriteIndex + 1) % m_UpdateRequests.Length;
				int32_t L_4 = __this->___m_UpdateRequestWriteIndex_7;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___m_UpdateRequests_4;
				NullCheck(L_5);
				V_2 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_4, 1))%((int32_t)(((RuntimeArray*)L_5)->max_length))));
				// if (newWriteIndex == m_UpdateRequestReadIndex)
				int32_t L_6 = V_2;
				int32_t L_7 = __this->___m_UpdateRequestReadIndex_6;
				if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
				{
					goto IL_0030_1;
				}
			}
			{
				// return false;
				V_3 = (bool)0;
				goto IL_0068;
			}

IL_0030_1:
			{
				// m_UpdateRequests[m_UpdateRequestWriteIndex] = handle;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___m_UpdateRequests_4;
				int32_t L_9 = __this->___m_UpdateRequestWriteIndex_7;
				int32_t L_10 = ___handle0;
				NullCheck(L_8);
				(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (int32_t)L_10);
				// m_RequestComplete[handle] = false;
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_11 = __this->___m_RequestComplete_5;
				int32_t L_12 = ___handle0;
				NullCheck(L_11);
				(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (bool)0);
				// m_UpdateRequestWriteIndex = newWriteIndex;
				int32_t L_13 = V_2;
				__this->___m_UpdateRequestWriteIndex_7 = L_13;
				// }
				goto IL_005a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005a:
	{
		// m_Semaphore.Release();
		Semaphore_t12119E120563D7838E1DAFB15006DC8985C6AC4B* L_14 = __this->___m_Semaphore_9;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Semaphore_Release_m3AA41CBF1DEA03948FD56E47B5E05A68F43A7A94(L_14, NULL);
		// return true;
		return (bool)1;
	}

IL_0068:
	{
		// }
		bool L_16 = V_3;
		return L_16;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::IsRequestComplete(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncUpdater_IsRequestComplete_m7CF12C9A54067687AA18188D656C17A82E67D72B (AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* __this, int32_t ___handle0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (m_Mutex)
		RuntimeObject* L_0 = __this->___m_Mutex_8;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001c:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0025;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0025:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			// return m_RequestComplete[handle];
			BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_4 = __this->___m_RequestComplete_5;
			int32_t L_5 = ___handle0;
			NullCheck(L_4);
			int32_t L_6 = L_5;
			uint8_t L_7 = (uint8_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
			V_2 = (bool)L_7;
			goto IL_0026;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0026:
	{
		// }
		bool L_8 = V_2;
		return L_8;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUpdater__ctor_m0E52F8DBFA255D988D89F3DF47CD6FA7E90EBB34 (AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUpdater_ThreadProc_m20254534606D36097A4DCB11A7BC960FFA281360_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE02D43BFB3611F4411DD21848B293789A2B1B8D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<Action> m_UpdateAction = new List<Action>();
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_0 = (List_1_tDB72209F35D56F62A287633F9450978E90B90987*)il2cpp_codegen_object_new(List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212(L_0, List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		__this->___m_UpdateAction_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UpdateAction_3), (void*)L_0);
		// private object m_Mutex = new object();
		RuntimeObject* L_1 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_1, NULL);
		__this->___m_Mutex_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Mutex_8), (void*)L_1);
		// public AsyncUpdater()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_Thread = new Thread(new ThreadStart(ThreadProc));
		ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* L_2 = (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2*)il2cpp_codegen_object_new(ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71(L_2, __this, (intptr_t)((void*)AsyncUpdater_ThreadProc_m20254534606D36097A4DCB11A7BC960FFA281360_RuntimeMethod_var), NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_3 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)il2cpp_codegen_object_new(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2(L_3, L_2, NULL);
		__this->___m_Thread_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Thread_0), (void*)L_3);
		// m_Thread.Name = "SamsungGameSDK";
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_4 = __this->___m_Thread_0;
		NullCheck(L_4);
		Thread_set_Name_m53E2BA6E84C04A6393EA5E470E516703CB892E4A(L_4, _stringLiteralE02D43BFB3611F4411DD21848B293789A2B1B8D6, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::ThreadProc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUpdater_ThreadProc_m20254534606D36097A4DCB11A7BC960FFA281360 (AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8A119323481338039197B73D82916BB46DEE3C2D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// AndroidJNI.AttachCurrentThread();
		int32_t L_0;
		L_0 = AndroidJNI_AttachCurrentThread_mD5647083E547A77F9377BDB78106D426878A00E7(NULL);
	}

IL_0006:
	{
	}
	try
	{// begin try (depth: 1)
		// m_Semaphore.WaitOne();
		Semaphore_t12119E120563D7838E1DAFB15006DC8985C6AC4B* L_1 = __this->___m_Semaphore_9;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_1);
		// }
		goto IL_001b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0015;
		}
		throw e;
	}

CATCH_0015:
	{// begin catch(System.Exception)
		// catch (Exception)
		// break;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00bd;
	}// end catch (depth: 1)

IL_001b:
	{
		// int handle = -1;
		V_0 = (-1);
		// lock (m_Mutex)
		RuntimeObject* L_3 = __this->___m_Mutex_8;
		V_1 = L_3;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0070:
			{// begin finally (depth: 1)
				{
					bool L_4 = V_2;
					if (!L_4)
					{
						goto IL_0079;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_5, NULL);
				}

IL_0079:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_6 = V_1;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_6, (&V_2), NULL);
				// if (m_Quit)
				bool L_7 = __this->___m_Quit_2;
				if (!L_7)
				{
					goto IL_003b_1;
				}
			}
			{
				// break;
				goto IL_00bd;
			}

IL_003b_1:
			{
				// if (m_UpdateRequestReadIndex != m_UpdateRequestWriteIndex)
				int32_t L_8 = __this->___m_UpdateRequestReadIndex_6;
				int32_t L_9 = __this->___m_UpdateRequestWriteIndex_7;
				if ((((int32_t)L_8) == ((int32_t)L_9)))
				{
					goto IL_006e_1;
				}
			}
			{
				// handle = m_UpdateRequests[m_UpdateRequestReadIndex];
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->___m_UpdateRequests_4;
				int32_t L_11 = __this->___m_UpdateRequestReadIndex_6;
				NullCheck(L_10);
				int32_t L_12 = L_11;
				int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
				V_0 = L_13;
				// m_UpdateRequestReadIndex = (m_UpdateRequestReadIndex + 1) % m_UpdateRequests.Length;
				int32_t L_14 = __this->___m_UpdateRequestReadIndex_6;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->___m_UpdateRequests_4;
				NullCheck(L_15);
				__this->___m_UpdateRequestReadIndex_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_14, 1))%((int32_t)(((RuntimeArray*)L_15)->max_length))));
			}

IL_006e_1:
			{
				// }
				goto IL_007a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007a:
	{
		// if (handle >= 0)
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	try
	{// begin try (depth: 1)
		// m_UpdateAction[handle].Invoke();
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_17 = __this->___m_UpdateAction_3;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_19;
		L_19 = List_1_get_Item_m8A119323481338039197B73D82916BB46DEE3C2D(L_17, L_18, List_1_get_Item_m8A119323481338039197B73D82916BB46DEE3C2D_RuntimeMethod_var);
		NullCheck(L_19);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_19, NULL);
		// }
		goto IL_0094;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0091;
		}
		throw e;
	}

CATCH_0091:
	{// begin catch(System.Exception)
		// catch (Exception)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0094;
	}// end catch (depth: 1)

IL_0094:
	{
		// lock (m_Mutex)
		RuntimeObject* L_20 = __this->___m_Mutex_8;
		V_1 = L_20;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{// begin finally (depth: 1)
				{
					bool L_21 = V_2;
					if (!L_21)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_22 = V_1;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_22, NULL);
				}

IL_00bc:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_23 = V_1;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_23, (&V_2), NULL);
			// m_RequestComplete[handle] = true;
			BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_24 = __this->___m_RequestComplete_5;
			int32_t L_25 = V_0;
			NullCheck(L_24);
			(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (bool)1);
			// }
			goto IL_0006;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00bd:
	{
		// AndroidJNI.DetachCurrentThread();
		int32_t L_26;
		L_26 = AndroidJNI_DetachCurrentThread_m8549BBC1875C2142A1C6BE5B57663E42B9C04A85(NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUpdater_Dispose_mD52CA6DA8B1B7993C6AC8D3C4F0A5C88088E8996 (AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// if (m_Disposed)
		bool L_0 = __this->___m_Disposed_1;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (disposing)
		bool L_1 = ___disposing0;
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		// if (m_Thread.IsAlive)
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_2 = __this->___m_Thread_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Thread_get_IsAlive_m87922B882A526D780570799F497EEB4C99F005DF(L_2, NULL);
		if (!L_3)
		{
			goto IL_0054;
		}
	}
	{
		// lock (m_Mutex)
		RuntimeObject* L_4 = __this->___m_Mutex_8;
		V_0 = L_4;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					bool L_5 = V_1;
					if (!L_5)
					{
						goto IL_003c;
					}
				}
				{
					RuntimeObject* L_6 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_6, NULL);
				}

IL_003c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_7 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_7, (&V_1), NULL);
			// m_Quit = true;
			__this->___m_Quit_2 = (bool)1;
			// }
			goto IL_003d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		// m_Semaphore.Release();
		Semaphore_t12119E120563D7838E1DAFB15006DC8985C6AC4B* L_8 = __this->___m_Semaphore_9;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Semaphore_Release_m3AA41CBF1DEA03948FD56E47B5E05A68F43A7A94(L_8, NULL);
		// m_Thread.Join();
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_10 = __this->___m_Thread_0;
		NullCheck(L_10);
		Thread_Join_mB756581AAF5EB028081256E0517892BC8867779F(L_10, NULL);
	}

IL_0054:
	{
		// m_Disposed = true;
		__this->___m_Disposed_1 = (bool)1;
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.AsyncUpdater::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUpdater_Dispose_mE3267C63AAF1B517C1AE45CC31A0FC5397E94E1F (AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Dispose(true);
		AsyncUpdater_Dispose_mD52CA6DA8B1B7993C6AC8D3C4F0A5C88088E8996(__this, (bool)1, NULL);
		// GC.SuppressFinalize(this);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A(__this, NULL);
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
// UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdaptivePerformanceSubsystemDescriptor_t5D0468D8D509E8995FBDCD5DE6EF6F293B16DC82* SamsungGameSDKAdaptivePerformanceSubsystem_RegisterDescriptor_mD0CBF5721F0C42EA71973B24B3E1DEED5CCB8FD6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA789C1A58CA8F1B51679B983874466E76B48EFB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE02D43BFB3611F4411DD21848B293789A2B1B8D6);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_t016018D78B642CAAA7B595015B8AF98E5F1008DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!SystemInfo.deviceModel.StartsWith("samsung", StringComparison.OrdinalIgnoreCase))
		String_t* L_0;
		L_0 = SystemInfo_get_deviceModel_m8587189FA95DA31E470F864208BC6FB6B35F6D06(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = String_StartsWith_mA2A4405B1B9F3653A6A9AA7F223F68D86A0C6264(L_0, _stringLiteralA789C1A58CA8F1B51679B983874466E76B48EFB3, 5, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return null;
		return (AdaptivePerformanceSubsystemDescriptor_t5D0468D8D509E8995FBDCD5DE6EF6F293B16DC82*)NULL;
	}

IL_0014:
	{
		// if (!SamsungGameSDKAdaptivePerformanceSubsystemProvider.NativeApi.IsAvailable())
		il2cpp_codegen_runtime_class_init_inline(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = NativeApi_IsAvailable_m6392723FFEF931DD13C4FA37C2F5CCB375C06C63(NULL);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		// return null;
		return (AdaptivePerformanceSubsystemDescriptor_t5D0468D8D509E8995FBDCD5DE6EF6F293B16DC82*)NULL;
	}

IL_001d:
	{
		// var registeredDesc = AdaptivePerformanceSubsystemDescriptor.RegisterDescriptor(new AdaptivePerformanceSubsystemDescriptor.Cinfo
		// {
		//     id = "SamsungGameSDK",
		//     providerType = typeof(SamsungGameSDKAdaptivePerformanceSubsystem.SamsungGameSDKAdaptivePerformanceSubsystemProvider),
		//     subsystemTypeOverride = typeof(SamsungGameSDKAdaptivePerformanceSubsystem)
		// });
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_t016018D78B642CAAA7B595015B8AF98E5F1008DB));
		Cinfo_set_id_m77027979E9BA297A2803C6EA7691881619C35F91_inline((&V_0), _stringLiteralE02D43BFB3611F4411DD21848B293789A2B1B8D6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_3, NULL);
		Cinfo_set_providerType_mE7F2A87EA82917E26391F16464ADF35CA8A8CD19_inline((&V_0), L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_0_0_0_var) };
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_5, NULL);
		Cinfo_set_subsystemTypeOverride_mE90E2B1A438FE40025C78836845E76876630DC34_inline((&V_0), L_6, NULL);
		Cinfo_t016018D78B642CAAA7B595015B8AF98E5F1008DB L_7 = V_0;
		AdaptivePerformanceSubsystemDescriptor_t5D0468D8D509E8995FBDCD5DE6EF6F293B16DC82* L_8;
		L_8 = AdaptivePerformanceSubsystemDescriptor_RegisterDescriptor_m377677FFF2A5CF7FEC432246C83799FD534319FB(L_7, NULL);
		// return registeredDesc;
		return L_8;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem__ctor_m194A02186321C4A798F3D9884AE32C85217515D8 (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) 
{
	{
		AdaptivePerformanceSubsystem__ctor_mEEBD3B76AC04711B8088F2E55218C832F490A078(__this, NULL);
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
// UnityEngine.AdaptivePerformance.Provider.IApplicationLifecycle UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::get_ApplicationLifecycle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SamsungGameSDKAdaptivePerformanceSubsystemProvider_get_ApplicationLifecycle_m2BBFE2257D23A33356220D0D8B9E49C2A2FE350C (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) 
{
	{
		// public override IApplicationLifecycle ApplicationLifecycle { get { return this; } }
		return __this;
	}
}
// UnityEngine.AdaptivePerformance.Provider.IDevicePerformanceLevelControl UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::get_PerformanceLevelControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SamsungGameSDKAdaptivePerformanceSubsystemProvider_get_PerformanceLevelControl_m98E6F2D71D71F540044C6FE37BFF5865C1E00E77 (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) 
{
	{
		// public override IDevicePerformanceLevelControl PerformanceLevelControl { get { return this; } }
		return __this;
	}
}
// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::get_MaxCpuPerformanceLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SamsungGameSDKAdaptivePerformanceSubsystemProvider_get_MaxCpuPerformanceLevel_mA6075DC4801259ADF90CB1964AAD7F225091CB25 (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) 
{
	{
		// public int MaxCpuPerformanceLevel { get; set; }
		int32_t L_0 = __this->___U3CMaxCpuPerformanceLevelU3Ek__BackingField_14;
		return L_0;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::set_MaxCpuPerformanceLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystemProvider_set_MaxCpuPerformanceLevel_m77AD95FA570B1CBD1CAAD4AB0DF5FFD957520B6E (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int MaxCpuPerformanceLevel { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CMaxCpuPerformanceLevelU3Ek__BackingField_14 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::get_MaxGpuPerformanceLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SamsungGameSDKAdaptivePerformanceSubsystemProvider_get_MaxGpuPerformanceLevel_mF83EA2F569E79E69EAD7E8A7C3A739A4EAD3AAE1 (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) 
{
	{
		// public int MaxGpuPerformanceLevel { get; set; }
		int32_t L_0 = __this->___U3CMaxGpuPerformanceLevelU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::set_MaxGpuPerformanceLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystemProvider_set_MaxGpuPerformanceLevel_m8D0BF330EAA2BE477A2E8A1902D51E75D4286E6B (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int MaxGpuPerformanceLevel { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CMaxGpuPerformanceLevelU3Ek__BackingField_15 = L_0;
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystemProvider__ctor_m3553774352179F009F4AC6A7FC616891B069E0D3 (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValue_1__ctor_m8F76CA33FF29AF1898F434F8ED52FD8D3821ACB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystemProvider_OnCpuPerformanceBoostModeTimeout_m91FC0157DAFE2916B24E54898CB93AD8CEB8B902_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystemProvider_OnGpuPerformanceBoostModeTimeout_m96DA4CB5E57C02FA5FAA2ACFF1E153AA8D24F31F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystemProvider_OnPerformanceLevelTimeout_m9AF9FE5BD7C16BA9D84A1F994FDB5FC1A5ACD848_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystemProvider_OnPerformanceWarning_m5EFB9226A9084CBD55364A219DBB4ECB2E667911_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystemProvider_U3C_ctorU3Eb__25_1_m221F5206EAB0017B96EA1EA4AE2DBB1DDC0B6609_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystemProvider_U3C_ctorU3Eb__25_2_m7B49ED9C37BB709637C5117360974412BDA376DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__25_0_mAC499DCA8ABB3D42842970DC22ADD06BF310C382_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t84AE2B64185FB58241DE2F33733B9EC09815C76B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_1 = NULL;
	Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA* G_B2_2 = NULL;
	SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* G_B2_3 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_1 = NULL;
	Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA* G_B1_2 = NULL;
	SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* G_B1_3 = NULL;
	{
		// private object m_DataLock = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___m_DataLock_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DataLock_5), (void*)L_0);
		// private float m_MaxTempLevel = 10.0f;
		__this->___m_MaxTempLevel_10 = (10.0f);
		// bool m_AllowPerformanceLevelControlChanges = true;
		__this->___m_AllowPerformanceLevelControlChanges_12 = (bool)1;
		// public SamsungGameSDKAdaptivePerformanceSubsystemProvider()
		APProvider__ctor_m7D1F683236A86C7F9A1E8EF4612D08A8A223807D(__this, NULL);
		// MaxCpuPerformanceLevel = 3;
		SamsungGameSDKAdaptivePerformanceSubsystemProvider_set_MaxCpuPerformanceLevel_m77AD95FA570B1CBD1CAAD4AB0DF5FFD957520B6E_inline(__this, 3, NULL);
		// MaxGpuPerformanceLevel = 3;
		SamsungGameSDKAdaptivePerformanceSubsystemProvider_set_MaxGpuPerformanceLevel_m8D0BF330EAA2BE477A2E8A1902D51E75D4286E6B_inline(__this, 3, NULL);
		// m_Api = new NativeApi(OnPerformanceWarning, OnPerformanceLevelTimeout, () => (VariableRefreshRate.Instance as VRRManager)?.OnRefreshRateChanged(), OnCpuPerformanceBoostModeTimeout, OnGpuPerformanceBoostModeTimeout);
		Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA* L_1 = (Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA*)il2cpp_codegen_object_new(Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m3447050AC75D7978A825F681D4EB19C5A0B735E0(L_1, __this, (intptr_t)((void*)SamsungGameSDKAdaptivePerformanceSubsystemProvider_OnPerformanceWarning_m5EFB9226A9084CBD55364A219DBB4ECB2E667911_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_2, __this, (intptr_t)((void*)SamsungGameSDKAdaptivePerformanceSubsystemProvider_OnPerformanceLevelTimeout_m9AF9FE5BD7C16BA9D84A1F994FDB5FC1A5ACD848_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t84AE2B64185FB58241DE2F33733B9EC09815C76B_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ((U3CU3Ec_t84AE2B64185FB58241DE2F33733B9EC09815C76B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t84AE2B64185FB58241DE2F33733B9EC09815C76B_il2cpp_TypeInfo_var))->___U3CU3E9__25_0_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		G_B1_2 = L_1;
		G_B1_3 = __this;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			G_B2_2 = L_1;
			G_B2_3 = __this;
			goto IL_0069;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t84AE2B64185FB58241DE2F33733B9EC09815C76B_il2cpp_TypeInfo_var);
		U3CU3Ec_t84AE2B64185FB58241DE2F33733B9EC09815C76B* L_5 = ((U3CU3Ec_t84AE2B64185FB58241DE2F33733B9EC09815C76B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t84AE2B64185FB58241DE2F33733B9EC09815C76B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__25_0_mAC499DCA8ABB3D42842970DC22ADD06BF310C382_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = L_6;
		((U3CU3Ec_t84AE2B64185FB58241DE2F33733B9EC09815C76B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t84AE2B64185FB58241DE2F33733B9EC09815C76B_il2cpp_TypeInfo_var))->___U3CU3E9__25_0_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t84AE2B64185FB58241DE2F33733B9EC09815C76B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t84AE2B64185FB58241DE2F33733B9EC09815C76B_il2cpp_TypeInfo_var))->___U3CU3E9__25_0_1), (void*)L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}

IL_0069:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_8, __this, (intptr_t)((void*)SamsungGameSDKAdaptivePerformanceSubsystemProvider_OnCpuPerformanceBoostModeTimeout_m91FC0157DAFE2916B24E54898CB93AD8CEB8B902_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_9, __this, (intptr_t)((void*)SamsungGameSDKAdaptivePerformanceSubsystemProvider_OnGpuPerformanceBoostModeTimeout_m96DA4CB5E57C02FA5FAA2ACFF1E153AA8D24F31F_RuntimeMethod_var), NULL);
		NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* L_10 = (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65*)il2cpp_codegen_object_new(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		NativeApi__ctor_mCCF79AADACCB32B40BB7D448F18A4DCE93C1A285(L_10, G_B2_2, G_B2_1, G_B2_0, L_8, L_9, NULL);
		NullCheck(G_B2_3);
		G_B2_3->___m_Api_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_3->___m_Api_2), (void*)L_10);
		// m_AsyncUpdater = new AsyncUpdater();
		AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* L_11 = (AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976*)il2cpp_codegen_object_new(AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		AsyncUpdater__ctor_m0E52F8DBFA255D988D89F3DF47CD6FA7E90EBB34(L_11, NULL);
		__this->___m_AsyncUpdater_3 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AsyncUpdater_3), (void*)L_11);
		// m_SkinTemp = new AsyncValue<double>(m_AsyncUpdater, -1.0, 2.7f, () => GetHighPrecisionSkinTempLevel());
		AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* L_12 = __this->___m_AsyncUpdater_3;
		Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* L_13 = (Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7*)il2cpp_codegen_object_new(Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Func_1__ctor_mFD3B853B23577DD7757C6726EB1FB0EC97D25B31(L_13, __this, (intptr_t)((void*)SamsungGameSDKAdaptivePerformanceSubsystemProvider_U3C_ctorU3Eb__25_1_m221F5206EAB0017B96EA1EA4AE2DBB1DDC0B6609_RuntimeMethod_var), NULL);
		AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* L_14 = (AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A*)il2cpp_codegen_object_new(AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		AsyncValue_1__ctor_m8F76CA33FF29AF1898F434F8ED52FD8D3821ACB5(L_14, L_12, (-1.0), (2.70000005f), L_13, AsyncValue_1__ctor_m8F76CA33FF29AF1898F434F8ED52FD8D3821ACB5_RuntimeMethod_var);
		__this->___m_SkinTemp_6 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SkinTemp_6), (void*)L_14);
		// m_GPUTime = new AsyncValue<double>(m_AsyncUpdater, -1.0, 0.0f, () => m_Api.GetGpuFrameTime());
		AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* L_15 = __this->___m_AsyncUpdater_3;
		Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* L_16 = (Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7*)il2cpp_codegen_object_new(Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Func_1__ctor_mFD3B853B23577DD7757C6726EB1FB0EC97D25B31(L_16, __this, (intptr_t)((void*)SamsungGameSDKAdaptivePerformanceSubsystemProvider_U3C_ctorU3Eb__25_2_m7B49ED9C37BB709637C5117360974412BDA376DD_RuntimeMethod_var), NULL);
		AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* L_17 = (AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A*)il2cpp_codegen_object_new(AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		AsyncValue_1__ctor_m8F76CA33FF29AF1898F434F8ED52FD8D3821ACB5(L_17, L_15, (-1.0), (0.0f), L_16, AsyncValue_1__ctor_m8F76CA33FF29AF1898F434F8ED52FD8D3821ACB5_RuntimeMethod_var);
		__this->___m_GPUTime_7 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_GPUTime_7), (void*)L_17);
		// Capabilities = Feature.CpuPerformanceLevel | Feature.GpuPerformanceLevel | Feature.PerformanceLevelControl | Feature.TemperatureLevel | Feature.WarningLevel | Feature.GpuFrameTime;
		VirtualActionInvoker1< int32_t >::Invoke(9 /* System.Void UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem/APProvider::set_Capabilities(UnityEngine.AdaptivePerformance.Provider.Feature) */, __this, ((int32_t)123));
		// m_AsyncUpdater.Start();
		AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* L_18 = __this->___m_AsyncUpdater_3;
		NullCheck(L_18);
		AsyncUpdater_Start_m44754B8FBC894327CB62D4C2893211AF14068983(L_18, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::OnPerformanceWarning(UnityEngine.AdaptivePerformance.WarningLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystemProvider_OnPerformanceWarning_m5EFB9226A9084CBD55364A219DBB4ECB2E667911 (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, int32_t ___warningLevel0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (m_DataLock)
		RuntimeObject* L_0 = __this->___m_DataLock_5;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0046:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_004f;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_004f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			// m_Data.ChangeFlags |= Feature.WarningLevel;
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_4 = (&__this->___m_Data_4);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_5 = L_4;
			int32_t L_6;
			L_6 = PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline(L_5, NULL);
			PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_5, ((int32_t)((int32_t)L_6|1)), NULL);
			// m_Data.ChangeFlags |= Feature.PerformanceLevelControl;
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_7 = (&__this->___m_Data_4);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_8 = L_7;
			int32_t L_9;
			L_9 = PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline(L_8, NULL);
			PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_8, ((int32_t)((int32_t)L_9|((int32_t)32))), NULL);
			// m_Data.WarningLevel = warningLevel;
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_10 = (&__this->___m_Data_4);
			int32_t L_11 = ___warningLevel0;
			PerformanceDataRecord_set_WarningLevel_mBC3853B7D0AA1412C41DFD248FA9E7252DAEB5F4_inline(L_10, L_11, NULL);
			// }
			goto IL_0050;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::OnPerformanceLevelTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystemProvider_OnPerformanceLevelTimeout_m9AF9FE5BD7C16BA9D84A1F994FDB5FC1A5ACD848 (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (m_DataLock)
		RuntimeObject* L_0 = __this->___m_DataLock_5;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_005b;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_005b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			// m_Data.ChangeFlags |= Feature.CpuPerformanceLevel;
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_4 = (&__this->___m_Data_4);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_5 = L_4;
			int32_t L_6;
			L_6 = PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline(L_5, NULL);
			PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_5, ((int32_t)((int32_t)L_6|8)), NULL);
			// m_Data.ChangeFlags |= Feature.GpuPerformanceLevel;
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_7 = (&__this->___m_Data_4);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_8 = L_7;
			int32_t L_9;
			L_9 = PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline(L_8, NULL);
			PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_8, ((int32_t)((int32_t)L_9|((int32_t)16))), NULL);
			// m_Data.CpuPerformanceLevel = Constants.UnknownPerformanceLevel;
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_10 = (&__this->___m_Data_4);
			PerformanceDataRecord_set_CpuPerformanceLevel_m8BBB7FA33AF2644ED0DE81CD58CCB07C5F71ED03_inline(L_10, (-1), NULL);
			// m_Data.GpuPerformanceLevel = Constants.UnknownPerformanceLevel;
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_11 = (&__this->___m_Data_4);
			PerformanceDataRecord_set_GpuPerformanceLevel_mBA26ABE3F6089BA232022D7F0F38B55B8FA9481A_inline(L_11, (-1), NULL);
			// }
			goto IL_005c;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::OnCpuPerformanceBoostModeTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystemProvider_OnCpuPerformanceBoostModeTimeout_m91FC0157DAFE2916B24E54898CB93AD8CEB8B902 (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (m_DataLock)
		RuntimeObject* L_0 = __this->___m_DataLock_5;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0036:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_003f;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_003f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			// m_Data.ChangeFlags |= Feature.CpuPerformanceBoost;
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_4 = (&__this->___m_Data_4);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_5 = L_4;
			int32_t L_6;
			L_6 = PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline(L_5, NULL);
			PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_5, ((int32_t)((int32_t)L_6|((int32_t)512))), NULL);
			// m_Data.CpuPerformanceBoost = false;
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_7 = (&__this->___m_Data_4);
			PerformanceDataRecord_set_CpuPerformanceBoost_mD8BF1CE74A03B57E81DBCD9A3DDE8DAA27968FF5_inline(L_7, (bool)0, NULL);
			// }
			goto IL_0040;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::OnGpuPerformanceBoostModeTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystemProvider_OnGpuPerformanceBoostModeTimeout_m96DA4CB5E57C02FA5FAA2ACFF1E153AA8D24F31F (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (m_DataLock)
		RuntimeObject* L_0 = __this->___m_DataLock_5;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0036:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_003f;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_003f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			// m_Data.ChangeFlags |= Feature.GpuPerformanceBoost;
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_4 = (&__this->___m_Data_4);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_5 = L_4;
			int32_t L_6;
			L_6 = PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline(L_5, NULL);
			PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_5, ((int32_t)((int32_t)L_6|((int32_t)1024))), NULL);
			// m_Data.GpuPerformanceBoost = false;
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_7 = (&__this->___m_Data_4);
			PerformanceDataRecord_set_GpuPerformanceBoost_m0A5764E94B8EC621A0AA51B2F7C24BA1EAF844B9_inline(L_7, (bool)0, NULL);
			// }
			goto IL_0040;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Single UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::GetHighPrecisionSkinTempLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SamsungGameSDKAdaptivePerformanceSubsystemProvider_GetHighPrecisionSkinTempLevel_m48665546D607E58CED329A4BAB9F035862125266 (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) 
{
	{
		// return (float)m_Api.GetHighPrecisionSkinTempLevel();
		NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* L_0 = __this->___m_Api_2;
		NullCheck(L_0);
		double L_1;
		L_1 = NativeApi_GetHighPrecisionSkinTempLevel_m5A5DEF03CC1CF28B42714F6C016C420900F1BE8D(L_0, NULL);
		return ((float)L_1);
	}
}
// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::GetClusterInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SamsungGameSDKAdaptivePerformanceSubsystemProvider_GetClusterInfo_m6639B472030586BC3AF92A930F9B284D0A13D639 (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) 
{
	{
		// return m_Api.GetClusterInfo();
		NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* L_0 = __this->___m_Api_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = NativeApi_GetClusterInfo_m09F7C453D791CFD6DC7BC3622FE8EE70FC1A6208(L_0, NULL);
		return L_1;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::ImmediateUpdateTemperature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystemProvider_ImmediateUpdateTemperature_m15AF7DA210D2C45BDCDD818F882C0400E9E04BDB (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValue_1_SyncUpdate_m36DC9C08B8E7C6C425C5ADD8E3F807D75A1D85E2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		// var timestamp = Time.time;
		float L_0;
		L_0 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		V_0 = L_0;
		// m_SkinTemp.SyncUpdate(timestamp);
		AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* L_1 = __this->___m_SkinTemp_6;
		float L_2 = V_0;
		NullCheck(L_1);
		AsyncValue_1_SyncUpdate_m36DC9C08B8E7C6C425C5ADD8E3F807D75A1D85E2(L_1, L_2, AsyncValue_1_SyncUpdate_m36DC9C08B8E7C6C425C5ADD8E3F807D75A1D85E2_RuntimeMethod_var);
		// lock (m_DataLock)
		RuntimeObject* L_3 = __this->___m_DataLock_5;
		V_1 = L_3;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0049:
			{// begin finally (depth: 1)
				{
					bool L_4 = V_2;
					if (!L_4)
					{
						goto IL_0052;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_5, NULL);
				}

IL_0052:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_6 = V_1;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_6, (&V_2), NULL);
			// m_Data.ChangeFlags |= Feature.TemperatureLevel;
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_7 = (&__this->___m_Data_4);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_8 = L_7;
			int32_t L_9;
			L_9 = PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline(L_8, NULL);
			PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_8, ((int32_t)((int32_t)L_9|2)), NULL);
			// m_Data.TemperatureLevel = GetTemperatureLevel();
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_10 = (&__this->___m_Data_4);
			float L_11;
			L_11 = SamsungGameSDKAdaptivePerformanceSubsystemProvider_GetTemperatureLevel_m0E736E73CEBCF20FCD3BC80BD975D920AC5879E9(__this, NULL);
			PerformanceDataRecord_set_TemperatureLevel_mFC2BC8E019EFB0E7611C242D1F5D4EAB76570BB5_inline(L_10, L_11, NULL);
			// }
			goto IL_0053;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::TryParseVersion(System.String,System.Version&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungGameSDKAdaptivePerformanceSubsystemProvider_TryParseVersion_m9EFF26325A1DED00F8C5237171899F27AF7DF1C4 (String_t* ___versionString0, Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7** ___version1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// version = new Version(versionString);
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7** L_0 = ___version1;
		String_t* L_1 = ___versionString0;
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_2 = (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7*)il2cpp_codegen_object_new(Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Version__ctor_m52D06833AE6481C0A9B72085BDC4D09A723CEF7F(L_2, L_1, NULL);
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_2);
		// }
		goto IL_0012;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000a;
		}
		throw e;
	}

CATCH_000a:
	{// begin catch(System.Exception)
		// catch (Exception)
		// version = null;
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7** L_3 = ___version1;
		*((RuntimeObject**)L_3) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)NULL);
		// return false;
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0014;
	}// end catch (depth: 1)

IL_0012:
	{
		// return true;
		return (bool)1;
	}

IL_0014:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::TryInitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungGameSDKAdaptivePerformanceSubsystemProvider_TryInitialize_mA7444AB2E6EB95BA7A387024FB2D671C3D69F539 (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemProvider_1_TryInitialize_mA622B6AE050B2792FAFC4E60571490EE8D31635F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Initialized)
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(15 /* System.Boolean UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem/APProvider::get_Initialized() */, __this);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000a:
	{
		// if (!base.TryInitialize())
		bool L_1;
		L_1 = SubsystemProvider_1_TryInitialize_mA622B6AE050B2792FAFC4E60571490EE8D31635F(__this, SubsystemProvider_1_TryInitialize_mA622B6AE050B2792FAFC4E60571490EE8D31635F_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0014:
	{
		// if (!m_Api.Initialize())
		NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* L_2 = __this->___m_Api_2;
		NullCheck(L_2);
		bool L_3;
		L_3 = NativeApi_Initialize_mBF7887E439A3C735559C768CF0E58F32700B758A(L_2, NULL);
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0023:
	{
		// if (TryParseVersion(m_Api.GetVersion(), out m_Version))
		NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* L_4 = __this->___m_Api_2;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = NativeApi_GetVersion_m1B4FDC104DFA0E61676416F7011CB4E58F8CDFFA(L_4, NULL);
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7** L_6 = (&__this->___m_Version_8);
		il2cpp_codegen_runtime_class_init_inline(SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = SamsungGameSDKAdaptivePerformanceSubsystemProvider_TryParseVersion_m9EFF26325A1DED00F8C5237171899F27AF7DF1C4(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0122;
		}
	}
	{
		// if (m_Version >= new Version(3, 5))
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_8 = __this->___m_Version_8;
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_9 = (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7*)il2cpp_codegen_object_new(Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Version__ctor_m0871675040007535EA3D8083A4BEAE9DF8C92FF4(L_9, 3, 5, NULL);
		bool L_10;
		L_10 = Version_op_GreaterThanOrEqual_mA931CBD9362C3D0D4D149B63A16B10B11BBBA933(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0092;
		}
	}
	{
		// Initialized = true;
		VirtualActionInvoker1< bool >::Invoke(16 /* System.Void UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem/APProvider::set_Initialized(System.Boolean) */, __this, (bool)1);
		// MaxCpuPerformanceLevel = m_Api.GetMaxCpuPerformanceLevel();
		NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* L_11 = __this->___m_Api_2;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = NativeApi_GetMaxCpuPerformanceLevel_m66F7DE690CC642C7A0879F10129331159D597FEB(L_11, NULL);
		SamsungGameSDKAdaptivePerformanceSubsystemProvider_set_MaxCpuPerformanceLevel_m77AD95FA570B1CBD1CAAD4AB0DF5FFD957520B6E_inline(__this, L_12, NULL);
		// MaxGpuPerformanceLevel = m_Api.GetMaxGpuPerformanceLevel();
		NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* L_13 = __this->___m_Api_2;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = NativeApi_GetMaxGpuPerformanceLevel_mAD7DFC28CD24437C9B9717ABC0BDB914675D19BA(L_13, NULL);
		SamsungGameSDKAdaptivePerformanceSubsystemProvider_set_MaxGpuPerformanceLevel_m8D0BF330EAA2BE477A2E8A1902D51E75D4286E6B_inline(__this, L_14, NULL);
		// Capabilities |= Feature.CpuPerformanceBoost | Feature.GpuPerformanceBoost;
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(8 /* UnityEngine.AdaptivePerformance.Provider.Feature UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem/APProvider::get_Capabilities() */, __this);
		VirtualActionInvoker1< int32_t >::Invoke(9 /* System.Void UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem/APProvider::set_Capabilities(UnityEngine.AdaptivePerformance.Provider.Feature) */, __this, ((int32_t)((int32_t)L_15|((int32_t)1536))));
		goto IL_0122;
	}

IL_0092:
	{
		// else if (m_Version >= new Version(3, 4))
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_16 = __this->___m_Version_8;
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_17 = (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7*)il2cpp_codegen_object_new(Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Version__ctor_m0871675040007535EA3D8083A4BEAE9DF8C92FF4(L_17, 3, 4, NULL);
		bool L_18;
		L_18 = Version_op_GreaterThanOrEqual_mA931CBD9362C3D0D4D149B63A16B10B11BBBA933(L_16, L_17, NULL);
		if (!L_18)
		{
			goto IL_00d1;
		}
	}
	{
		// Initialized = true;
		VirtualActionInvoker1< bool >::Invoke(16 /* System.Void UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem/APProvider::set_Initialized(System.Boolean) */, __this, (bool)1);
		// MaxCpuPerformanceLevel = m_Api.GetMaxCpuPerformanceLevel();
		NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* L_19 = __this->___m_Api_2;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = NativeApi_GetMaxCpuPerformanceLevel_m66F7DE690CC642C7A0879F10129331159D597FEB(L_19, NULL);
		SamsungGameSDKAdaptivePerformanceSubsystemProvider_set_MaxCpuPerformanceLevel_m77AD95FA570B1CBD1CAAD4AB0DF5FFD957520B6E_inline(__this, L_20, NULL);
		// MaxGpuPerformanceLevel = m_Api.GetMaxGpuPerformanceLevel();
		NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* L_21 = __this->___m_Api_2;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = NativeApi_GetMaxGpuPerformanceLevel_mAD7DFC28CD24437C9B9717ABC0BDB914675D19BA(L_21, NULL);
		SamsungGameSDKAdaptivePerformanceSubsystemProvider_set_MaxGpuPerformanceLevel_m8D0BF330EAA2BE477A2E8A1902D51E75D4286E6B_inline(__this, L_22, NULL);
		goto IL_0122;
	}

IL_00d1:
	{
		// else if (m_Version >= new Version(3, 2))
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_23 = __this->___m_Version_8;
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_24 = (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7*)il2cpp_codegen_object_new(Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Version__ctor_m0871675040007535EA3D8083A4BEAE9DF8C92FF4(L_24, 3, 2, NULL);
		bool L_25;
		L_25 = Version_op_GreaterThanOrEqual_mA931CBD9362C3D0D4D149B63A16B10B11BBBA933(L_23, L_24, NULL);
		if (!L_25)
		{
			goto IL_0110;
		}
	}
	{
		// Initialized = true;
		VirtualActionInvoker1< bool >::Invoke(16 /* System.Void UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem/APProvider::set_Initialized(System.Boolean) */, __this, (bool)1);
		// MaxCpuPerformanceLevel = m_Api.GetMaxCpuPerformanceLevel();
		NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* L_26 = __this->___m_Api_2;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = NativeApi_GetMaxCpuPerformanceLevel_m66F7DE690CC642C7A0879F10129331159D597FEB(L_26, NULL);
		SamsungGameSDKAdaptivePerformanceSubsystemProvider_set_MaxCpuPerformanceLevel_m77AD95FA570B1CBD1CAAD4AB0DF5FFD957520B6E_inline(__this, L_27, NULL);
		// MaxGpuPerformanceLevel = m_Api.GetMaxGpuPerformanceLevel();
		NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* L_28 = __this->___m_Api_2;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = NativeApi_GetMaxGpuPerformanceLevel_mAD7DFC28CD24437C9B9717ABC0BDB914675D19BA(L_28, NULL);
		SamsungGameSDKAdaptivePerformanceSubsystemProvider_set_MaxGpuPerformanceLevel_m8D0BF330EAA2BE477A2E8A1902D51E75D4286E6B_inline(__this, L_29, NULL);
		goto IL_0122;
	}

IL_0110:
	{
		// m_Api.Terminate();
		NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* L_30 = __this->___m_Api_2;
		NullCheck(L_30);
		NativeApi_Terminate_m6FA285A63E71056A30093B2FF9C7F56CE10A3DD3(L_30, NULL);
		// Initialized = false;
		VirtualActionInvoker1< bool >::Invoke(16 /* System.Void UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem/APProvider::set_Initialized(System.Boolean) */, __this, (bool)0);
	}

IL_0122:
	{
		// if (MaxCpuPerformanceLevel == SamsungAndroidProviderConstants.k_InvalidOperation)
		int32_t L_31;
		L_31 = SamsungGameSDKAdaptivePerformanceSubsystemProvider_get_MaxCpuPerformanceLevel_mA6075DC4801259ADF90CB1964AAD7F225091CB25_inline(__this, NULL);
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)-999)))))
		{
			goto IL_014c;
		}
	}
	{
		// MaxCpuPerformanceLevel = Constants.UnknownPerformanceLevel;
		SamsungGameSDKAdaptivePerformanceSubsystemProvider_set_MaxCpuPerformanceLevel_m77AD95FA570B1CBD1CAAD4AB0DF5FFD957520B6E_inline(__this, (-1), NULL);
		// Capabilities &= ~Feature.CpuPerformanceLevel;
		int32_t L_32;
		L_32 = VirtualFuncInvoker0< int32_t >::Invoke(8 /* UnityEngine.AdaptivePerformance.Provider.Feature UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem/APProvider::get_Capabilities() */, __this);
		VirtualActionInvoker1< int32_t >::Invoke(9 /* System.Void UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem/APProvider::set_Capabilities(UnityEngine.AdaptivePerformance.Provider.Feature) */, __this, ((int32_t)((int32_t)L_32&((int32_t)-9))));
		// m_AllowPerformanceLevelControlChanges = false;
		__this->___m_AllowPerformanceLevelControlChanges_12 = (bool)0;
	}

IL_014c:
	{
		// if (MaxGpuPerformanceLevel == SamsungAndroidProviderConstants.k_InvalidOperation)
		int32_t L_33;
		L_33 = SamsungGameSDKAdaptivePerformanceSubsystemProvider_get_MaxGpuPerformanceLevel_mF83EA2F569E79E69EAD7E8A7C3A739A4EAD3AAE1_inline(__this, NULL);
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)-999)))))
		{
			goto IL_0176;
		}
	}
	{
		// MaxGpuPerformanceLevel = Constants.UnknownPerformanceLevel;
		SamsungGameSDKAdaptivePerformanceSubsystemProvider_set_MaxGpuPerformanceLevel_m8D0BF330EAA2BE477A2E8A1902D51E75D4286E6B_inline(__this, (-1), NULL);
		// Capabilities &= ~Feature.GpuPerformanceLevel;
		int32_t L_34;
		L_34 = VirtualFuncInvoker0< int32_t >::Invoke(8 /* UnityEngine.AdaptivePerformance.Provider.Feature UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem/APProvider::get_Capabilities() */, __this);
		VirtualActionInvoker1< int32_t >::Invoke(9 /* System.Void UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem/APProvider::set_Capabilities(UnityEngine.AdaptivePerformance.Provider.Feature) */, __this, ((int32_t)((int32_t)L_34&((int32_t)-17))));
		// m_AllowPerformanceLevelControlChanges = false;
		__this->___m_AllowPerformanceLevelControlChanges_12 = (bool)0;
	}

IL_0176:
	{
		// m_Data.PerformanceLevelControlAvailable = m_AllowPerformanceLevelControlChanges;
		PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_35 = (&__this->___m_Data_4);
		bool L_36 = __this->___m_AllowPerformanceLevelControlChanges_12;
		PerformanceDataRecord_set_PerformanceLevelControlAvailable_m78A1EFC49C88D90E778F7C4C8605662E94B125FF_inline(L_35, L_36, NULL);
		// return Initialized;
		bool L_37;
		L_37 = VirtualFuncInvoker0< bool >::Invoke(15 /* System.Boolean UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem/APProvider::get_Initialized() */, __this);
		return L_37;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystemProvider_Start_m984B691F4B0AB3123218D08F46C7277BEF42F760 (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystemProvider_CheckInitialTemperatureAndSendWarnings_m10172DA370445C33B3E8884A7D05173F4B3A15DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Initialized)
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(15 /* System.Boolean UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem/APProvider::get_Initialized() */, __this);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (m_Running)
		bool L_1 = ((APProvider_tCF914DB0FD4F4EB3579452C06E1D8AB02501B998*)__this)->___m_Running_1;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// return;
		return;
	}

IL_0012:
	{
		// ImmediateUpdateTemperature();
		SamsungGameSDKAdaptivePerformanceSubsystemProvider_ImmediateUpdateTemperature_m15AF7DA210D2C45BDCDD818F882C0400E9E04BDB(__this, NULL);
		// Thread t = new Thread(CheckInitialTemperatureAndSendWarnings);
		ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* L_2 = (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2*)il2cpp_codegen_object_new(ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71(L_2, __this, (intptr_t)((void*)SamsungGameSDKAdaptivePerformanceSubsystemProvider_CheckInitialTemperatureAndSendWarnings_m10172DA370445C33B3E8884A7D05173F4B3A15DF_RuntimeMethod_var), NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_3 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)il2cpp_codegen_object_new(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2(L_3, L_2, NULL);
		// t.Start();
		NullCheck(L_3);
		Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA(L_3, NULL);
		// CheckAndInitializeVRR();
		SamsungGameSDKAdaptivePerformanceSubsystemProvider_CheckAndInitializeVRR_mA593A4D753AFD36803DC217CDB5F9FD89BB2D50B(__this, NULL);
		// m_Running = true;
		((APProvider_tCF914DB0FD4F4EB3579452C06E1D8AB02501B998*)__this)->___m_Running_1 = (bool)1;
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::CheckAndInitializeVRR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystemProvider_CheckAndInitializeVRR_mA593A4D753AFD36803DC217CDB5F9FD89BB2D50B (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoVariableRefreshRate_t72A9AA228BAE0E009EA0A0BEC85609F07B6F2B75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Api.IsVariableRefreshRateSupported())
		NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* L_0 = __this->___m_Api_2;
		NullCheck(L_0);
		bool L_1;
		L_1 = NativeApi_IsVariableRefreshRateSupported_mD79BDE9CCACFA91ED207D40505BF424F08A4A8D1(L_0, NULL);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		// if (VariableRefreshRate.Instance == null)
		RuntimeObject* L_2;
		L_2 = VariableRefreshRate_get_Instance_mB72B4AF9C0C464513D27FCD7D81C5AB089675BB9_inline(NULL);
		if (L_2)
		{
			goto IL_0042;
		}
	}
	{
		// VariableRefreshRate.Instance = new VRRManager(m_Api);
		NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* L_3 = __this->___m_Api_2;
		VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8* L_4 = (VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8*)il2cpp_codegen_object_new(VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		VRRManager__ctor_m70B3C81E60597B53629DD2CAFA6EED1D04ECAD73(L_4, L_3, NULL);
		VariableRefreshRate_set_Instance_mF83BCC9BEA5164D10F5BAF3A5856AFF6C352A7CC_inline(L_4, NULL);
		// m_AutoVariableRefreshRate = new AutoVariableRefreshRate(VariableRefreshRate.Instance);
		RuntimeObject* L_5;
		L_5 = VariableRefreshRate_get_Instance_mB72B4AF9C0C464513D27FCD7D81C5AB089675BB9_inline(NULL);
		AutoVariableRefreshRate_t72A9AA228BAE0E009EA0A0BEC85609F07B6F2B75* L_6 = (AutoVariableRefreshRate_t72A9AA228BAE0E009EA0A0BEC85609F07B6F2B75*)il2cpp_codegen_object_new(AutoVariableRefreshRate_t72A9AA228BAE0E009EA0A0BEC85609F07B6F2B75_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		AutoVariableRefreshRate__ctor_m96C2B7923CAA6D947EF0FBF05CCB8DC7D4A26126(L_6, L_5, NULL);
		__this->___m_AutoVariableRefreshRate_13 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AutoVariableRefreshRate_13), (void*)L_6);
		return;
	}

IL_0035:
	{
		// VariableRefreshRate.Instance = null;
		VariableRefreshRate_set_Instance_mF83BCC9BEA5164D10F5BAF3A5856AFF6C352A7CC_inline((RuntimeObject*)NULL, NULL);
		// m_AutoVariableRefreshRate = null;
		__this->___m_AutoVariableRefreshRate_13 = (AutoVariableRefreshRate_t72A9AA228BAE0E009EA0A0BEC85609F07B6F2B75*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AutoVariableRefreshRate_13), (void*)(AutoVariableRefreshRate_t72A9AA228BAE0E009EA0A0BEC85609F07B6F2B75*)NULL);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::CheckInitialTemperatureAndSendWarnings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystemProvider_CheckInitialTemperatureAndSendWarnings_m10172DA370445C33B3E8884A7D05173F4B3A15DF (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	ClusterInfo_tE84F530B1972D0F8712CD136B14D4C4136B0BA15 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	{
		// Sleep(TimeSpan.FromSeconds(2));
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0;
		L_0 = TimeSpan_FromSeconds_mE585CC8180040ED064DC8B6546E6C94A129BFFC5((2.0), NULL);
		Thread_Sleep_mE56E1C1B4065F7B83379D36C360B1AA5D8B65286(L_0, NULL);
		// float currentTempLevel = GetHighPrecisionSkinTempLevel();
		float L_1;
		L_1 = SamsungGameSDKAdaptivePerformanceSubsystemProvider_GetHighPrecisionSkinTempLevel_m48665546D607E58CED329A4BAB9F035862125266(__this, NULL);
		V_0 = L_1;
		// if (m_Version >= new Version(3, 2))
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_2 = __this->___m_Version_8;
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_3 = (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7*)il2cpp_codegen_object_new(Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Version__ctor_m0871675040007535EA3D8083A4BEAE9DF8C92FF4(L_3, 3, 2, NULL);
		bool L_4;
		L_4 = Version_op_GreaterThanOrEqual_mA931CBD9362C3D0D4D149B63A16B10B11BBBA933(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		// if (currentTempLevel >= 7)
		float L_5 = V_0;
		if ((!(((float)L_5) >= ((float)(7.0f)))))
		{
			goto IL_003f;
		}
	}
	{
		// OnPerformanceWarning(WarningLevel.Throttling);
		SamsungGameSDKAdaptivePerformanceSubsystemProvider_OnPerformanceWarning_m5EFB9226A9084CBD55364A219DBB4ECB2E667911(__this, 2, NULL);
		goto IL_004e;
	}

IL_003f:
	{
		// else if (currentTempLevel >= 5)
		float L_6 = V_0;
		if ((!(((float)L_6) >= ((float)(5.0f)))))
		{
			goto IL_004e;
		}
	}
	{
		// OnPerformanceWarning(WarningLevel.ThrottlingImminent);
		SamsungGameSDKAdaptivePerformanceSubsystemProvider_OnPerformanceWarning_m5EFB9226A9084CBD55364A219DBB4ECB2E667911(__this, 1, NULL);
	}

IL_004e:
	{
		// if (m_Version >= new Version(3, 5))
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_7 = __this->___m_Version_8;
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_8 = (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7*)il2cpp_codegen_object_new(Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Version__ctor_m0871675040007535EA3D8083A4BEAE9DF8C92FF4(L_8, 3, 5, NULL);
		bool L_9;
		L_9 = Version_op_GreaterThanOrEqual_mA931CBD9362C3D0D4D149B63A16B10B11BBBA933(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_00ff;
		}
	}
	{
		// int clusterInfo = m_Api.GetClusterInfo();
		NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* L_10 = __this->___m_Api_2;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = NativeApi_GetClusterInfo_m09F7C453D791CFD6DC7BC3622FE8EE70FC1A6208(L_10, NULL);
		V_1 = L_11;
		// if (clusterInfo != -999)
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-999))))
		{
			goto IL_00ff;
		}
	}
	{
		// var aClusterInfo = new ClusterInfo();
		il2cpp_codegen_initobj((&V_2), sizeof(ClusterInfo_tE84F530B1972D0F8712CD136B14D4C4136B0BA15));
		// aClusterInfo.BigCore = clusterInfo / 100;
		int32_t L_13 = V_1;
		ClusterInfo_set_BigCore_m6773CE3416C5DDE25B397D398D60253CA4A913A0_inline((&V_2), ((int32_t)(L_13/((int32_t)100))), NULL);
		// aClusterInfo.MediumCore = (clusterInfo % 100) / 10;
		int32_t L_14 = V_1;
		ClusterInfo_set_MediumCore_mC984A40803648B368E8E998F82E7C89D9E24E126_inline((&V_2), ((int32_t)(((int32_t)(L_14%((int32_t)100)))/((int32_t)10))), NULL);
		// aClusterInfo.LittleCore = (clusterInfo % 100) % 10;
		int32_t L_15 = V_1;
		ClusterInfo_set_LittleCore_m2B02B46BBEA719EFBDD955DF419EAAC81E69C7AB_inline((&V_2), ((int32_t)(((int32_t)(L_15%((int32_t)100)))%((int32_t)10))), NULL);
		// lock (m_DataLock)
		RuntimeObject* L_16 = __this->___m_DataLock_5;
		V_3 = L_16;
		V_4 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e2:
			{// begin finally (depth: 1)
				{
					bool L_17 = V_4;
					if (!L_17)
					{
						goto IL_00ec;
					}
				}
				{
					RuntimeObject* L_18 = V_3;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_18, NULL);
				}

IL_00ec:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_19 = V_3;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_19, (&V_4), NULL);
			// m_Data.ClusterInfo = aClusterInfo;
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_20 = (&__this->___m_Data_4);
			ClusterInfo_tE84F530B1972D0F8712CD136B14D4C4136B0BA15 L_21 = V_2;
			PerformanceDataRecord_set_ClusterInfo_m70A3B30678BE28E09161ADF030CBAFE8D5BC9E3E_inline(L_20, L_21, NULL);
			// m_Data.ChangeFlags |= Feature.ClusterInfo;
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_22 = (&__this->___m_Data_4);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_23 = L_22;
			int32_t L_24;
			L_24 = PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline(L_23, NULL);
			PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_23, ((int32_t)((int32_t)L_24|((int32_t)2048))), NULL);
			// }
			goto IL_00ed;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ed:
	{
		// Capabilities |= Feature.ClusterInfo;
		int32_t L_25;
		L_25 = VirtualFuncInvoker0< int32_t >::Invoke(8 /* UnityEngine.AdaptivePerformance.Provider.Feature UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem/APProvider::get_Capabilities() */, __this);
		VirtualActionInvoker1< int32_t >::Invoke(9 /* System.Void UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem/APProvider::set_Capabilities(UnityEngine.AdaptivePerformance.Provider.Feature) */, __this, ((int32_t)((int32_t)L_25|((int32_t)2048))));
	}

IL_00ff:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystemProvider_Stop_mE471A944DCC41B5F538AC6F4434CAD175E2604DE (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) 
{
	{
		// m_Running = false;
		((APProvider_tCF914DB0FD4F4EB3579452C06E1D8AB02501B998*)__this)->___m_Running_1 = (bool)0;
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystemProvider_Destroy_m8EA5681DC56EE56C028577D1253A9B2B36816B37 (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) 
{
	{
		// VariableRefreshRate.Instance = null;
		VariableRefreshRate_set_Instance_mF83BCC9BEA5164D10F5BAF3A5856AFF6C352A7CC_inline((RuntimeObject*)NULL, NULL);
		// m_AutoVariableRefreshRate = null;
		__this->___m_AutoVariableRefreshRate_13 = (AutoVariableRefreshRate_t72A9AA228BAE0E009EA0A0BEC85609F07B6F2B75*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AutoVariableRefreshRate_13), (void*)(AutoVariableRefreshRate_t72A9AA228BAE0E009EA0A0BEC85609F07B6F2B75*)NULL);
		// if (m_Running)
		bool L_0 = ((APProvider_tCF914DB0FD4F4EB3579452C06E1D8AB02501B998*)__this)->___m_Running_1;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// Stop();
		VirtualActionInvoker0::Invoke(6 /* System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem>::Stop() */, __this);
	}

IL_001b:
	{
		// if (Initialized)
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(15 /* System.Boolean UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem/APProvider::get_Initialized() */, __this);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		// m_Api.Terminate();
		NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* L_2 = __this->___m_Api_2;
		NullCheck(L_2);
		NativeApi_Terminate_m6FA285A63E71056A30093B2FF9C7F56CE10A3DD3(L_2, NULL);
		// Initialized = false;
		VirtualActionInvoker1< bool >::Invoke(16 /* System.Void UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem/APProvider::set_Initialized(System.Boolean) */, __this, (bool)0);
	}

IL_0035:
	{
		// m_AsyncUpdater.Dispose();
		AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* L_3 = __this->___m_AsyncUpdater_3;
		NullCheck(L_3);
		AsyncUpdater_Dispose_mE3267C63AAF1B517C1AE45CC31A0FC5397E94E1F(L_3, NULL);
		// }
		return;
	}
}
// System.String UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::get_Stats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SamsungGameSDKAdaptivePerformanceSubsystemProvider_get_Stats_mFABDD20CC017F6928E2C6D4DE88E83BA43B80E8E (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDE80E2AD15AB61A85DBD7C97F022E1D102ABA5B);
		s_Il2CppMethodInitialized = true;
	}
	AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	double G_B3_0 = 0.0;
	String_t* G_B3_1 = NULL;
	AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	String_t* G_B5_2 = NULL;
	AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	String_t* G_B4_2 = NULL;
	double G_B6_0 = 0.0;
	RuntimeObject* G_B6_1 = NULL;
	String_t* G_B6_2 = NULL;
	{
		// public override string Stats => $"SkinTemp={m_SkinTemp?.value ?? -1} GPUTime={m_GPUTime?.value ?? -1}";
		AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* L_0 = __this->___m_SkinTemp_6;
		AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = _stringLiteralBDE80E2AD15AB61A85DBD7C97F022E1D102ABA5B;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = _stringLiteralBDE80E2AD15AB61A85DBD7C97F022E1D102ABA5B;
			goto IL_001a;
		}
	}
	{
		G_B3_0 = (-1.0);
		G_B3_1 = G_B1_1;
		goto IL_001f;
	}

IL_001a:
	{
		NullCheck(G_B2_0);
		double L_2;
		L_2 = AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_inline(G_B2_0, AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_RuntimeMethod_var);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_1;
	}

IL_001f:
	{
		double L_3 = G_B3_0;
		RuntimeObject* L_4 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_3);
		AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* L_5 = __this->___m_GPUTime_7;
		AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* L_6 = L_5;
		G_B4_0 = L_6;
		G_B4_1 = L_4;
		G_B4_2 = G_B3_1;
		if (L_6)
		{
			G_B5_0 = L_6;
			G_B5_1 = L_4;
			G_B5_2 = G_B3_1;
			goto IL_0039;
		}
	}
	{
		G_B6_0 = (-1.0);
		G_B6_1 = G_B4_1;
		G_B6_2 = G_B4_2;
		goto IL_003e;
	}

IL_0039:
	{
		NullCheck(G_B5_0);
		double L_7;
		L_7 = AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_inline(G_B5_0, AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_RuntimeMethod_var);
		G_B6_0 = L_7;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_003e:
	{
		double L_8 = G_B6_0;
		RuntimeObject* L_9 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(G_B6_2, G_B6_1, L_9, NULL);
		return L_10;
	}
}
// UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83 SamsungGameSDKAdaptivePerformanceSubsystemProvider_Update_m98FA4C57665CFB21553B4585C4C1AEDF36383515 (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValue_1_Update_m15F2BF5D1A6143887E28FE6EB0C7B112EF7F204C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83 V_4;
	memset((&V_4), 0, sizeof(V_4));
	VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8* G_B2_0 = NULL;
	VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8* G_B1_0 = NULL;
	{
		// float timeSinceStartup = Time.time;
		float L_0;
		L_0 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		V_0 = L_0;
		// m_GPUTime.Update(timeSinceStartup);
		AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* L_1 = __this->___m_GPUTime_7;
		float L_2 = V_0;
		NullCheck(L_1);
		bool L_3;
		L_3 = AsyncValue_1_Update_m15F2BF5D1A6143887E28FE6EB0C7B112EF7F204C(L_1, L_2, AsyncValue_1_Update_m15F2BF5D1A6143887E28FE6EB0C7B112EF7F204C_RuntimeMethod_var);
		// bool tempChanged = m_SkinTemp.Update(timeSinceStartup);
		AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* L_4 = __this->___m_SkinTemp_6;
		float L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = AsyncValue_1_Update_m15F2BF5D1A6143887E28FE6EB0C7B112EF7F204C(L_4, L_5, AsyncValue_1_Update_m15F2BF5D1A6143887E28FE6EB0C7B112EF7F204C_RuntimeMethod_var);
		V_1 = L_6;
		// (VariableRefreshRate.Instance as VRRManager)?.Update();
		RuntimeObject* L_7;
		L_7 = VariableRefreshRate_get_Instance_mB72B4AF9C0C464513D27FCD7D81C5AB089675BB9_inline(NULL);
		VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8* L_8 = ((VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8*)IsInstClass((RuntimeObject*)L_7, VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8_il2cpp_TypeInfo_var));
		G_B1_0 = L_8;
		if (L_8)
		{
			G_B2_0 = L_8;
			goto IL_0030;
		}
	}
	{
		goto IL_0035;
	}

IL_0030:
	{
		NullCheck(G_B2_0);
		VRRManager_Update_mF6B91AAC8B2D33C3A64582B2B7F0F48EE6DEF2F1(G_B2_0, NULL);
	}

IL_0035:
	{
		// if ((VariableRefreshRate.Instance as VRRManager) != null && settings.automaticVRR)
		RuntimeObject* L_9;
		L_9 = VariableRefreshRate_get_Instance_mB72B4AF9C0C464513D27FCD7D81C5AB089675BB9_inline(NULL);
		if (!((VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8*)IsInstClass((RuntimeObject*)L_9, VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8_il2cpp_TypeInfo_var)))
		{
			goto IL_005f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545_il2cpp_TypeInfo_var);
		SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* L_10 = ((SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545_StaticFields*)il2cpp_codegen_static_fields_for(SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545_il2cpp_TypeInfo_var))->___settings_16;
		NullCheck(L_10);
		bool L_11;
		L_11 = SamsungAndroidProviderSettings_get_automaticVRR_mA4EC43A6755953623F7A5F1B3C365A3A9CE25C3B_inline(L_10, NULL);
		if (!L_11)
		{
			goto IL_005f;
		}
	}
	{
		// if (QualitySettings.vSyncCount == 0)
		int32_t L_12;
		L_12 = QualitySettings_get_vSyncCount_m623B92EE9CBB51A7A96CA88022319CC46CC02F24(NULL);
		if (L_12)
		{
			goto IL_005f;
		}
	}
	{
		// m_AutoVariableRefreshRate.UpdateAutoVRR();
		AutoVariableRefreshRate_t72A9AA228BAE0E009EA0A0BEC85609F07B6F2B75* L_13 = __this->___m_AutoVariableRefreshRate_13;
		NullCheck(L_13);
		AutoVariableRefreshRate_UpdateAutoVRR_m77A01AECEF39F90CF88D12236C3E5BCE6AB33F2C(L_13, NULL);
	}

IL_005f:
	{
		// if (m_PerformanceLevelControlSystemChange)
		bool L_14 = __this->___m_PerformanceLevelControlSystemChange_11;
		if (!L_14)
		{
			goto IL_009d;
		}
	}
	{
		// var temperatureLevel = (float)m_SkinTemp.value;
		AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* L_15 = __this->___m_SkinTemp_6;
		NullCheck(L_15);
		double L_16;
		L_16 = AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_inline(L_15, AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_RuntimeMethod_var);
		// if (temperatureLevel < 5)
		if ((!(((float)((float)L_16)) < ((float)(5.0f)))))
		{
			goto IL_009d;
		}
	}
	{
		// lock (m_DataLock)
		RuntimeObject* L_17 = __this->___m_DataLock_5;
		V_2 = L_17;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0093:
			{// begin finally (depth: 1)
				{
					bool L_18 = V_3;
					if (!L_18)
					{
						goto IL_009c;
					}
				}
				{
					RuntimeObject* L_19 = V_2;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_19, NULL);
				}

IL_009c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_20 = V_2;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_20, (&V_3), NULL);
			// DisableSystemControl();
			SamsungGameSDKAdaptivePerformanceSubsystemProvider_DisableSystemControl_m79A657125BE7C923E4A44E23050E55FB5292D3D6(__this, NULL);
			// }
			goto IL_009d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009d:
	{
		// lock (m_DataLock)
		RuntimeObject* L_21 = __this->___m_DataLock_5;
		V_2 = L_21;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0110:
			{// begin finally (depth: 1)
				{
					bool L_22 = V_3;
					if (!L_22)
					{
						goto IL_0119;
					}
				}
				{
					RuntimeObject* L_23 = V_2;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_23, NULL);
				}

IL_0119:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_24 = V_2;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_24, (&V_3), NULL);
				// if (tempChanged)
				bool L_25 = V_1;
				if (!L_25)
				{
					goto IL_00d5_1;
				}
			}
			{
				// m_Data.ChangeFlags |= Feature.TemperatureLevel;
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_26 = (&__this->___m_Data_4);
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_27 = L_26;
				int32_t L_28;
				L_28 = PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline(L_27, NULL);
				PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_27, ((int32_t)((int32_t)L_28|2)), NULL);
				// m_Data.TemperatureLevel = GetTemperatureLevel();
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_29 = (&__this->___m_Data_4);
				float L_30;
				L_30 = SamsungGameSDKAdaptivePerformanceSubsystemProvider_GetTemperatureLevel_m0E736E73CEBCF20FCD3BC80BD975D920AC5879E9(__this, NULL);
				PerformanceDataRecord_set_TemperatureLevel_mFC2BC8E019EFB0E7611C242D1F5D4EAB76570BB5_inline(L_29, L_30, NULL);
			}

IL_00d5_1:
			{
				// m_Data.GpuFrameTime = LatestGpuFrameTime();
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_31 = (&__this->___m_Data_4);
				float L_32;
				L_32 = SamsungGameSDKAdaptivePerformanceSubsystemProvider_LatestGpuFrameTime_m4118012730C37918D676414118415DAAE40F87B1(__this, NULL);
				PerformanceDataRecord_set_GpuFrameTime_mB779C484C185DB05F985A295EA7242EB8DA37299_inline(L_31, L_32, NULL);
				// m_Data.ChangeFlags |= Feature.GpuFrameTime;
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_33 = (&__this->___m_Data_4);
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_34 = L_33;
				int32_t L_35;
				L_35 = PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline(L_34, NULL);
				PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_34, ((int32_t)((int32_t)L_35|((int32_t)64))), NULL);
				// PerformanceDataRecord result = m_Data;
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83 L_36 = __this->___m_Data_4;
				// m_Data.ChangeFlags = Feature.None;
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_37 = (&__this->___m_Data_4);
				PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_37, 0, NULL);
				// return result;
				V_4 = L_36;
				goto IL_011a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011a:
	{
		// }
		PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83 L_38 = V_4;
		return L_38;
	}
}
// System.Version UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* SamsungGameSDKAdaptivePerformanceSubsystemProvider_get_Version_mB81905A2E4973B2D808CD4B3EF91B9524D303E2B (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) 
{
	{
		// return m_Version;
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_0 = __this->___m_Version_8;
		return L_0;
	}
}
// UnityEngine.AdaptivePerformance.Provider.Feature UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::get_Capabilities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SamsungGameSDKAdaptivePerformanceSubsystemProvider_get_Capabilities_mA7CCE0A727C4F6681788A3399B03D3E337FD2064 (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) 
{
	{
		// public override Feature Capabilities { get; set; }
		int32_t L_0 = __this->___U3CCapabilitiesU3Ek__BackingField_17;
		return L_0;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::set_Capabilities(UnityEngine.AdaptivePerformance.Provider.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystemProvider_set_Capabilities_m41F2AA95A3E80B238659B3CD2C202448C3EE3347 (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public override Feature Capabilities { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CCapabilitiesU3Ek__BackingField_17 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::get_Initialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungGameSDKAdaptivePerformanceSubsystemProvider_get_Initialized_mB0F588FD6A032C37A86BD260DB73E1A952EED683 (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) 
{
	{
		// public override bool Initialized { get; set; }
		bool L_0 = __this->___U3CInitializedU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::set_Initialized(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystemProvider_set_Initialized_mC5B841175AC67BD67C3771847CE36E443E8CE374 (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public override bool Initialized { get; set; }
		bool L_0 = ___value0;
		__this->___U3CInitializedU3Ek__BackingField_18 = L_0;
		return;
	}
}
// System.Single UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::NormalizeTemperatureLevel(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SamsungGameSDKAdaptivePerformanceSubsystemProvider_NormalizeTemperatureLevel_m412041754F3A4E55426540CF46334F47C3C808D0 (float ___currentTempLevel0, float ___minValue1, float ___maxValue2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float tempLevel = -1.0f;
		V_0 = (-1.0f);
		// if (currentTempLevel >= minValue && currentTempLevel <= maxValue)
		float L_0 = ___currentTempLevel0;
		float L_1 = ___minValue1;
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_0024;
		}
	}
	{
		float L_2 = ___currentTempLevel0;
		float L_3 = ___maxValue2;
		if ((!(((float)L_2) <= ((float)L_3))))
		{
			goto IL_0024;
		}
	}
	{
		// tempLevel = currentTempLevel / maxValue;
		float L_4 = ___currentTempLevel0;
		float L_5 = ___maxValue2;
		V_0 = ((float)(L_4/L_5));
		// tempLevel = Math.Min(Math.Max(tempLevel, Constants.MinTemperatureLevel), maxValue);
		float L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_7;
		L_7 = Math_Max_mB1131EAD9E03519D13D246CE96B599561C784957(L_6, (0.0f), NULL);
		float L_8 = ___maxValue2;
		float L_9;
		L_9 = Math_Min_mB41DB89BB991289571A046270A924C0EEAA2C4BC(L_7, L_8, NULL);
		V_0 = L_9;
	}

IL_0024:
	{
		// return tempLevel;
		float L_10 = V_0;
		return L_10;
	}
}
// System.Single UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::NormalizeTemperatureLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SamsungGameSDKAdaptivePerformanceSubsystemProvider_NormalizeTemperatureLevel_mD0BDF0811E8DE8E0BFF9EC932797CCAA92EF0F23 (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, float ___currentTempLevel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return NormalizeTemperatureLevel(currentTempLevel, m_MinTempLevel, m_MaxTempLevel);
		float L_0 = ___currentTempLevel0;
		float L_1 = __this->___m_MinTempLevel_9;
		float L_2 = __this->___m_MaxTempLevel_10;
		il2cpp_codegen_runtime_class_init_inline(SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545_il2cpp_TypeInfo_var);
		float L_3;
		L_3 = SamsungGameSDKAdaptivePerformanceSubsystemProvider_NormalizeTemperatureLevel_m412041754F3A4E55426540CF46334F47C3C808D0(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Single UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::GetTemperatureLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SamsungGameSDKAdaptivePerformanceSubsystemProvider_GetTemperatureLevel_m0E736E73CEBCF20FCD3BC80BD975D920AC5879E9 (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return NormalizeTemperatureLevel((float)m_SkinTemp.value);
		AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* L_0 = __this->___m_SkinTemp_6;
		NullCheck(L_0);
		double L_1;
		L_1 = AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_inline(L_0, AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_RuntimeMethod_var);
		float L_2;
		L_2 = SamsungGameSDKAdaptivePerformanceSubsystemProvider_NormalizeTemperatureLevel_mD0BDF0811E8DE8E0BFF9EC932797CCAA92EF0F23(__this, ((float)L_1), NULL);
		return L_2;
	}
}
// System.Single UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::LatestGpuFrameTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SamsungGameSDKAdaptivePerformanceSubsystemProvider_LatestGpuFrameTime_m4118012730C37918D676414118415DAAE40F87B1 (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (float)(m_GPUTime.value / 1000.0);
		AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* L_0 = __this->___m_GPUTime_7;
		NullCheck(L_0);
		double L_1;
		L_1 = AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_inline(L_0, AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_RuntimeMethod_var);
		return ((float)((double)(L_1/(1000.0))));
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::SetPerformanceLevel(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungGameSDKAdaptivePerformanceSubsystemProvider_SetPerformanceLevel_mF02E88F341215AF90E2B774BE15FC1E80B982D09 (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, int32_t* ___cpuLevel0, int32_t* ___gpuLevel1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* G_B17_0 = NULL;
	PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* G_B18_1 = NULL;
	PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* G_B20_0 = NULL;
	PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* G_B19_0 = NULL;
	int32_t G_B21_0 = 0;
	PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* G_B21_1 = NULL;
	{
		// if ((Capabilities & Feature.CpuPerformanceLevel) != Feature.CpuPerformanceLevel ||
		//     (Capabilities & Feature.GpuPerformanceLevel) != Feature.GpuPerformanceLevel)
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(8 /* UnityEngine.AdaptivePerformance.Provider.Feature UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem/APProvider::get_Capabilities() */, __this);
		if ((!(((uint32_t)((int32_t)((int32_t)L_0&8))) == ((uint32_t)8))))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(8 /* UnityEngine.AdaptivePerformance.Provider.Feature UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem/APProvider::get_Capabilities() */, __this);
		if ((((int32_t)((int32_t)((int32_t)L_1&((int32_t)16)))) == ((int32_t)((int32_t)16))))
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		// return false;
		return (bool)0;
	}

IL_001a:
	{
		// if (cpuLevel < 0)
		int32_t* L_2 = ___cpuLevel0;
		int32_t L_3 = *((int32_t*)L_2);
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		// cpuLevel = 0;
		int32_t* L_4 = ___cpuLevel0;
		*((int32_t*)L_4) = (int32_t)0;
		goto IL_0036;
	}

IL_0024:
	{
		// else if (cpuLevel > MaxCpuPerformanceLevel)
		int32_t* L_5 = ___cpuLevel0;
		int32_t L_6 = *((int32_t*)L_5);
		int32_t L_7;
		L_7 = SamsungGameSDKAdaptivePerformanceSubsystemProvider_get_MaxCpuPerformanceLevel_mA6075DC4801259ADF90CB1964AAD7F225091CB25_inline(__this, NULL);
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0036;
		}
	}
	{
		// cpuLevel = MaxCpuPerformanceLevel;
		int32_t* L_8 = ___cpuLevel0;
		int32_t L_9;
		L_9 = SamsungGameSDKAdaptivePerformanceSubsystemProvider_get_MaxCpuPerformanceLevel_mA6075DC4801259ADF90CB1964AAD7F225091CB25_inline(__this, NULL);
		*((int32_t*)L_8) = (int32_t)L_9;
	}

IL_0036:
	{
		// if (gpuLevel < 0)
		int32_t* L_10 = ___gpuLevel1;
		int32_t L_11 = *((int32_t*)L_10);
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		// gpuLevel = 0;
		int32_t* L_12 = ___gpuLevel1;
		*((int32_t*)L_12) = (int32_t)0;
		goto IL_0052;
	}

IL_0040:
	{
		// else if (gpuLevel > MaxGpuPerformanceLevel)
		int32_t* L_13 = ___gpuLevel1;
		int32_t L_14 = *((int32_t*)L_13);
		int32_t L_15;
		L_15 = SamsungGameSDKAdaptivePerformanceSubsystemProvider_get_MaxGpuPerformanceLevel_mF83EA2F569E79E69EAD7E8A7C3A739A4EAD3AAE1_inline(__this, NULL);
		if ((((int32_t)L_14) <= ((int32_t)L_15)))
		{
			goto IL_0052;
		}
	}
	{
		// gpuLevel = MaxGpuPerformanceLevel;
		int32_t* L_16 = ___gpuLevel1;
		int32_t L_17;
		L_17 = SamsungGameSDKAdaptivePerformanceSubsystemProvider_get_MaxGpuPerformanceLevel_mF83EA2F569E79E69EAD7E8A7C3A739A4EAD3AAE1_inline(__this, NULL);
		*((int32_t*)L_16) = (int32_t)L_17;
	}

IL_0052:
	{
		// if (m_Version == new Version(3, 2) && cpuLevel == 0)
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_18 = __this->___m_Version_8;
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_19 = (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7*)il2cpp_codegen_object_new(Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Version__ctor_m0871675040007535EA3D8083A4BEAE9DF8C92FF4(L_19, 3, 2, NULL);
		bool L_20;
		L_20 = Version_op_Equality_m4DFED47C6F3258EB59FCACA6A314B42B30EB7BC0(L_18, L_19, NULL);
		if (!L_20)
		{
			goto IL_006d;
		}
	}
	{
		int32_t* L_21 = ___cpuLevel0;
		int32_t L_22 = *((int32_t*)L_21);
		if (L_22)
		{
			goto IL_006d;
		}
	}
	{
		// cpuLevel = 1;
		int32_t* L_23 = ___cpuLevel0;
		*((int32_t*)L_23) = (int32_t)1;
	}

IL_006d:
	{
		// bool success = false;
		V_0 = (bool)0;
		// int result = m_Api.SetFreqLevels(cpuLevel, gpuLevel);
		NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* L_24 = __this->___m_Api_2;
		int32_t* L_25 = ___cpuLevel0;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t* L_27 = ___gpuLevel1;
		int32_t L_28 = *((int32_t*)L_27);
		NullCheck(L_24);
		int32_t L_29;
		L_29 = NativeApi_SetFreqLevels_mAB6D4E6F1F5B24F2965A4537814214683144A1CA(L_24, L_26, L_28, NULL);
		V_1 = L_29;
		// success = result == 1;
		int32_t L_30 = V_1;
		V_0 = (bool)((((int32_t)L_30) == ((int32_t)1))? 1 : 0);
		// lock (m_DataLock)
		RuntimeObject* L_31 = __this->___m_DataLock_5;
		V_2 = L_31;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0131:
			{// begin finally (depth: 1)
				{
					bool L_32 = V_3;
					if (!L_32)
					{
						goto IL_013a;
					}
				}
				{
					RuntimeObject* L_33 = V_2;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_33, NULL);
				}

IL_013a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_34 = V_2;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_34, (&V_3), NULL);
				// var oldCpuLevel = m_Data.CpuPerformanceLevel;
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_35 = (&__this->___m_Data_4);
				int32_t L_36;
				L_36 = PerformanceDataRecord_get_CpuPerformanceLevel_mF688EC621C77916A86F96CF7D0DAFD520B6D68E8_inline(L_35, NULL);
				V_4 = L_36;
				// var oldGpuLevel = m_Data.GpuPerformanceLevel;
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_37 = (&__this->___m_Data_4);
				int32_t L_38;
				L_38 = PerformanceDataRecord_get_GpuPerformanceLevel_mA928B60EF914AB4E7D95291E1357A3FE795DBE23_inline(L_37, NULL);
				V_5 = L_38;
				// m_Data.CpuPerformanceLevel = success ? cpuLevel : Constants.UnknownPerformanceLevel;
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_39 = (&__this->___m_Data_4);
				bool L_40 = V_0;
				G_B16_0 = L_39;
				if (L_40)
				{
					G_B17_0 = L_39;
					goto IL_00bb_1;
				}
			}
			{
				G_B18_0 = (-1);
				G_B18_1 = G_B16_0;
				goto IL_00bd_1;
			}

IL_00bb_1:
			{
				int32_t* L_41 = ___cpuLevel0;
				int32_t L_42 = *((int32_t*)L_41);
				G_B18_0 = L_42;
				G_B18_1 = G_B17_0;
			}

IL_00bd_1:
			{
				PerformanceDataRecord_set_CpuPerformanceLevel_m8BBB7FA33AF2644ED0DE81CD58CCB07C5F71ED03_inline(G_B18_1, G_B18_0, NULL);
				// m_Data.GpuPerformanceLevel = success ? gpuLevel : Constants.UnknownPerformanceLevel;
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_43 = (&__this->___m_Data_4);
				bool L_44 = V_0;
				G_B19_0 = L_43;
				if (L_44)
				{
					G_B20_0 = L_43;
					goto IL_00ce_1;
				}
			}
			{
				G_B21_0 = (-1);
				G_B21_1 = G_B19_0;
				goto IL_00d0_1;
			}

IL_00ce_1:
			{
				int32_t* L_45 = ___gpuLevel1;
				int32_t L_46 = *((int32_t*)L_45);
				G_B21_0 = L_46;
				G_B21_1 = G_B20_0;
			}

IL_00d0_1:
			{
				PerformanceDataRecord_set_GpuPerformanceLevel_mBA26ABE3F6089BA232022D7F0F38B55B8FA9481A_inline(G_B21_1, G_B21_0, NULL);
				// if (success)
				bool L_47 = V_0;
				if (!L_47)
				{
					goto IL_011d_1;
				}
			}
			{
				// if (m_Data.CpuPerformanceLevel != oldCpuLevel)
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_48 = (&__this->___m_Data_4);
				int32_t L_49;
				L_49 = PerformanceDataRecord_get_CpuPerformanceLevel_mF688EC621C77916A86F96CF7D0DAFD520B6D68E8_inline(L_48, NULL);
				int32_t L_50 = V_4;
				if ((((int32_t)L_49) == ((int32_t)L_50)))
				{
					goto IL_00fa_1;
				}
			}
			{
				// m_Data.ChangeFlags |= Feature.CpuPerformanceLevel;
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_51 = (&__this->___m_Data_4);
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_52 = L_51;
				int32_t L_53;
				L_53 = PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline(L_52, NULL);
				PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_52, ((int32_t)((int32_t)L_53|8)), NULL);
			}

IL_00fa_1:
			{
				// if (m_Data.GpuPerformanceLevel != oldGpuLevel)
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_54 = (&__this->___m_Data_4);
				int32_t L_55;
				L_55 = PerformanceDataRecord_get_GpuPerformanceLevel_mA928B60EF914AB4E7D95291E1357A3FE795DBE23_inline(L_54, NULL);
				int32_t L_56 = V_5;
				if ((((int32_t)L_55) == ((int32_t)L_56)))
				{
					goto IL_011d_1;
				}
			}
			{
				// m_Data.ChangeFlags |= Feature.GpuPerformanceLevel;
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_57 = (&__this->___m_Data_4);
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_58 = L_57;
				int32_t L_59;
				L_59 = PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline(L_58, NULL);
				PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_58, ((int32_t)((int32_t)L_59|((int32_t)16))), NULL);
			}

IL_011d_1:
			{
				// if (result > 1)
				int32_t L_60 = V_1;
				if ((((int32_t)L_60) <= ((int32_t)1)))
				{
					goto IL_012f_1;
				}
			}
			{
				// if (result == 2)
				int32_t L_61 = V_1;
				if ((((int32_t)L_61) == ((int32_t)2)))
				{
					goto IL_0129_1;
				}
			}
			{
				// else if (result == 3)
				int32_t L_62 = V_1;
			}

IL_0129_1:
			{
				// EnableSystemControl();
				SamsungGameSDKAdaptivePerformanceSubsystemProvider_EnableSystemControl_m9920DEFF8682D1804EA2FC7B1BBFC36A24A9DB26(__this, NULL);
			}

IL_012f_1:
			{
				// }
				goto IL_013b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_013b:
	{
		// return success;
		bool L_63 = V_0;
		return L_63;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::EnableCpuBoost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungGameSDKAdaptivePerformanceSubsystemProvider_EnableCpuBoost_m861459E8ED51993409199405B1A4BC12E7591410 (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		// var result = m_Api.EnableCpuBoost();
		NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* L_0 = __this->___m_Api_2;
		NullCheck(L_0);
		bool L_1;
		L_1 = NativeApi_EnableCpuBoost_m0EB18898717BBFA5DA1E0DB9EC857C543E1342AE(L_0, NULL);
		V_0 = L_1;
		// lock (m_DataLock)
		RuntimeObject* L_2 = __this->___m_DataLock_5;
		V_1 = L_2;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0065:
			{// begin finally (depth: 1)
				{
					bool L_3 = V_2;
					if (!L_3)
					{
						goto IL_006e;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_4, NULL);
				}

IL_006e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_5 = V_1;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_5, (&V_2), NULL);
				// var oldPerformanceBoost = m_Data.CpuPerformanceBoost;
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_6 = (&__this->___m_Data_4);
				bool L_7;
				L_7 = PerformanceDataRecord_get_CpuPerformanceBoost_m55A78568F8E19144717C3CEC17CE90FA766591D2_inline(L_6, NULL);
				V_3 = L_7;
				// m_Data.CpuPerformanceBoost = result;
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_8 = (&__this->___m_Data_4);
				bool L_9 = V_0;
				PerformanceDataRecord_set_CpuPerformanceBoost_mD8BF1CE74A03B57E81DBCD9A3DDE8DAA27968FF5_inline(L_8, L_9, NULL);
				// if (m_Data.CpuPerformanceBoost != oldPerformanceBoost)
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_10 = (&__this->___m_Data_4);
				bool L_11;
				L_11 = PerformanceDataRecord_get_CpuPerformanceBoost_m55A78568F8E19144717C3CEC17CE90FA766591D2_inline(L_10, NULL);
				bool L_12 = V_3;
				if ((((int32_t)L_11) == ((int32_t)L_12)))
				{
					goto IL_005a_1;
				}
			}
			{
				// m_Data.ChangeFlags |= Feature.CpuPerformanceBoost;
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_13 = (&__this->___m_Data_4);
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_14 = L_13;
				int32_t L_15;
				L_15 = PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline(L_14, NULL);
				PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_14, ((int32_t)((int32_t)L_15|((int32_t)512))), NULL);
			}

IL_005a_1:
			{
				// if (result)
				bool L_16 = V_0;
				if (!L_16)
				{
					goto IL_0063_1;
				}
			}
			{
				// EnableSystemControl();
				SamsungGameSDKAdaptivePerformanceSubsystemProvider_EnableSystemControl_m9920DEFF8682D1804EA2FC7B1BBFC36A24A9DB26(__this, NULL);
			}

IL_0063_1:
			{
				// }
				goto IL_006f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
	{
		// return result;
		bool L_17 = V_0;
		return L_17;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::EnableGpuBoost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungGameSDKAdaptivePerformanceSubsystemProvider_EnableGpuBoost_mDE5C0F7407AD31C0C72CE756D63539CF2231183A (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		// var result = m_Api.EnableGpuBoost();
		NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* L_0 = __this->___m_Api_2;
		NullCheck(L_0);
		bool L_1;
		L_1 = NativeApi_EnableGpuBoost_m880A3314BE930D068F2EED836F79C295636FEB69(L_0, NULL);
		V_0 = L_1;
		// lock (m_DataLock)
		RuntimeObject* L_2 = __this->___m_DataLock_5;
		V_1 = L_2;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0065:
			{// begin finally (depth: 1)
				{
					bool L_3 = V_2;
					if (!L_3)
					{
						goto IL_006e;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_4, NULL);
				}

IL_006e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_5 = V_1;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_5, (&V_2), NULL);
				// var oldPerformanceBoost = m_Data.GpuPerformanceBoost;
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_6 = (&__this->___m_Data_4);
				bool L_7;
				L_7 = PerformanceDataRecord_get_GpuPerformanceBoost_mFD01BBFC9A9BE53ED81947089A02691635789B7E_inline(L_6, NULL);
				V_3 = L_7;
				// m_Data.GpuPerformanceBoost = result;
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_8 = (&__this->___m_Data_4);
				bool L_9 = V_0;
				PerformanceDataRecord_set_GpuPerformanceBoost_m0A5764E94B8EC621A0AA51B2F7C24BA1EAF844B9_inline(L_8, L_9, NULL);
				// if (m_Data.GpuPerformanceBoost != oldPerformanceBoost)
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_10 = (&__this->___m_Data_4);
				bool L_11;
				L_11 = PerformanceDataRecord_get_GpuPerformanceBoost_mFD01BBFC9A9BE53ED81947089A02691635789B7E_inline(L_10, NULL);
				bool L_12 = V_3;
				if ((((int32_t)L_11) == ((int32_t)L_12)))
				{
					goto IL_005a_1;
				}
			}
			{
				// m_Data.ChangeFlags |= Feature.GpuPerformanceBoost;
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_13 = (&__this->___m_Data_4);
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_14 = L_13;
				int32_t L_15;
				L_15 = PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline(L_14, NULL);
				PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_14, ((int32_t)((int32_t)L_15|((int32_t)1024))), NULL);
			}

IL_005a_1:
			{
				// if (result)
				bool L_16 = V_0;
				if (!L_16)
				{
					goto IL_0063_1;
				}
			}
			{
				// EnableSystemControl();
				SamsungGameSDKAdaptivePerformanceSubsystemProvider_EnableSystemControl_m9920DEFF8682D1804EA2FC7B1BBFC36A24A9DB26(__this, NULL);
			}

IL_0063_1:
			{
				// }
				goto IL_006f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
	{
		// return result;
		bool L_17 = V_0;
		return L_17;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::ApplicationPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystemProvider_ApplicationPause_mB67B894C1004F9C75235E51AB271742FC31F024F (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) 
{
	{
		// public void ApplicationPause() { }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::ApplicationResume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystemProvider_ApplicationResume_m05C2C73FA744682ACC788003FD753343E6E5CCF4 (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8* G_B14_0 = NULL;
	VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8* G_B13_0 = NULL;
	{
		// if (!m_Api.Initialize())
		NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* L_0 = __this->___m_Api_2;
		NullCheck(L_0);
		bool L_1;
		L_1 = NativeApi_Initialize_mBF7887E439A3C735559C768CF0E58F32700B758A(L_0, NULL);
		// if ((Capabilities & Feature.CpuPerformanceLevel) == Feature.CpuPerformanceLevel)
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(8 /* UnityEngine.AdaptivePerformance.Provider.Feature UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem/APProvider::get_Capabilities() */, __this);
		if ((!(((uint32_t)((int32_t)((int32_t)L_2&8))) == ((uint32_t)8))))
		{
			goto IL_0053;
		}
	}
	{
		// lock (m_DataLock)
		RuntimeObject* L_3 = __this->___m_DataLock_5;
		V_0 = L_3;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0049:
			{// begin finally (depth: 1)
				{
					bool L_4 = V_1;
					if (!L_4)
					{
						goto IL_0052;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_5, NULL);
				}

IL_0052:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_6 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_6, (&V_1), NULL);
			// m_Data.CpuPerformanceLevel = Constants.UnknownPerformanceLevel;
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_7 = (&__this->___m_Data_4);
			PerformanceDataRecord_set_CpuPerformanceLevel_m8BBB7FA33AF2644ED0DE81CD58CCB07C5F71ED03_inline(L_7, (-1), NULL);
			// m_Data.ChangeFlags |= Feature.CpuPerformanceLevel;
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_8 = (&__this->___m_Data_4);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_9 = L_8;
			int32_t L_10;
			L_10 = PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline(L_9, NULL);
			PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_9, ((int32_t)((int32_t)L_10|8)), NULL);
			// }
			goto IL_0053;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0053:
	{
		// if ((Capabilities & Feature.GpuPerformanceLevel) == Feature.GpuPerformanceLevel)
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(8 /* UnityEngine.AdaptivePerformance.Provider.Feature UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem/APProvider::get_Capabilities() */, __this);
		if ((!(((uint32_t)((int32_t)((int32_t)L_11&((int32_t)16)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_009d;
		}
	}
	{
		// lock (m_DataLock)
		RuntimeObject* L_12 = __this->___m_DataLock_5;
		V_0 = L_12;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0093:
			{// begin finally (depth: 1)
				{
					bool L_13 = V_1;
					if (!L_13)
					{
						goto IL_009c;
					}
				}
				{
					RuntimeObject* L_14 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_14, NULL);
				}

IL_009c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_15 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_15, (&V_1), NULL);
			// m_Data.GpuPerformanceLevel = Constants.UnknownPerformanceLevel;
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_16 = (&__this->___m_Data_4);
			PerformanceDataRecord_set_GpuPerformanceLevel_mBA26ABE3F6089BA232022D7F0F38B55B8FA9481A_inline(L_16, (-1), NULL);
			// m_Data.ChangeFlags |= Feature.GpuPerformanceLevel;
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_17 = (&__this->___m_Data_4);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_18 = L_17;
			int32_t L_19;
			L_19 = PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline(L_18, NULL);
			PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_18, ((int32_t)((int32_t)L_19|((int32_t)16))), NULL);
			// }
			goto IL_009d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009d:
	{
		// ImmediateUpdateTemperature();
		SamsungGameSDKAdaptivePerformanceSubsystemProvider_ImmediateUpdateTemperature_m15AF7DA210D2C45BDCDD818F882C0400E9E04BDB(__this, NULL);
		// CheckAndInitializeVRR();
		SamsungGameSDKAdaptivePerformanceSubsystemProvider_CheckAndInitializeVRR_mA593A4D753AFD36803DC217CDB5F9FD89BB2D50B(__this, NULL);
		// (VariableRefreshRate.Instance as VRRManager)?.Resume();
		RuntimeObject* L_20;
		L_20 = VariableRefreshRate_get_Instance_mB72B4AF9C0C464513D27FCD7D81C5AB089675BB9_inline(NULL);
		VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8* L_21 = ((VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8*)IsInstClass((RuntimeObject*)L_20, VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8_il2cpp_TypeInfo_var));
		G_B13_0 = L_21;
		if (L_21)
		{
			G_B14_0 = L_21;
			goto IL_00b8;
		}
	}
	{
		return;
	}

IL_00b8:
	{
		NullCheck(G_B14_0);
		VRRManager_Resume_mA736A3968C0CB3B7BB3806A854CCA5C9C6CA4537(G_B14_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::EnableSystemControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystemProvider_EnableSystemControl_m9920DEFF8682D1804EA2FC7B1BBFC36A24A9DB26 (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) 
{
	{
		// if (!m_AllowPerformanceLevelControlChanges)
		bool L_0 = __this->___m_AllowPerformanceLevelControlChanges_12;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// m_Data.PerformanceLevelControlAvailable = false;
		PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_1 = (&__this->___m_Data_4);
		PerformanceDataRecord_set_PerformanceLevelControlAvailable_m78A1EFC49C88D90E778F7C4C8605662E94B125FF_inline(L_1, (bool)0, NULL);
		// m_Data.ChangeFlags |= Feature.PerformanceLevelControl;
		PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_2 = (&__this->___m_Data_4);
		PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_3 = L_2;
		int32_t L_4;
		L_4 = PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline(L_3, NULL);
		PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_3, ((int32_t)((int32_t)L_4|((int32_t)32))), NULL);
		// m_PerformanceLevelControlSystemChange = true;
		__this->___m_PerformanceLevelControlSystemChange_11 = (bool)1;
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::DisableSystemControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystemProvider_DisableSystemControl_m79A657125BE7C923E4A44E23050E55FB5292D3D6 (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) 
{
	{
		// if (!m_AllowPerformanceLevelControlChanges)
		bool L_0 = __this->___m_AllowPerformanceLevelControlChanges_12;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// m_Data.PerformanceLevelControlAvailable = true;
		PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_1 = (&__this->___m_Data_4);
		PerformanceDataRecord_set_PerformanceLevelControlAvailable_m78A1EFC49C88D90E778F7C4C8605662E94B125FF_inline(L_1, (bool)1, NULL);
		// m_Data.ChangeFlags |= Feature.PerformanceLevelControl;
		PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_2 = (&__this->___m_Data_4);
		PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_3 = L_2;
		int32_t L_4;
		L_4 = PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline(L_3, NULL);
		PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_3, ((int32_t)((int32_t)L_4|((int32_t)32))), NULL);
		// m_PerformanceLevelControlSystemChange = false;
		__this->___m_PerformanceLevelControlSystemChange_11 = (bool)0;
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystemProvider__cctor_mE4EC3CC12AC1E3B40211C60C6DBA02B7E2DD4906 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static SamsungAndroidProviderSettings settings = SamsungAndroidProviderSettings.GetSettings();
		SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* L_0;
		L_0 = SamsungAndroidProviderSettings_GetSettings_mAFADC8F0A6AE54BE4D54AEC67D91019DE82F24C2_inline(NULL);
		((SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545_StaticFields*)il2cpp_codegen_static_fields_for(SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545_il2cpp_TypeInfo_var))->___settings_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545_StaticFields*)il2cpp_codegen_static_fields_for(SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545_il2cpp_TypeInfo_var))->___settings_16), (void*)L_0);
		return;
	}
}
// System.Double UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::<.ctor>b__25_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SamsungGameSDKAdaptivePerformanceSubsystemProvider_U3C_ctorU3Eb__25_1_m221F5206EAB0017B96EA1EA4AE2DBB1DDC0B6609 (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) 
{
	{
		// m_SkinTemp = new AsyncValue<double>(m_AsyncUpdater, -1.0, 2.7f, () => GetHighPrecisionSkinTempLevel());
		float L_0;
		L_0 = SamsungGameSDKAdaptivePerformanceSubsystemProvider_GetHighPrecisionSkinTempLevel_m48665546D607E58CED329A4BAB9F035862125266(__this, NULL);
		return ((double)L_0);
	}
}
// System.Double UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider::<.ctor>b__25_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SamsungGameSDKAdaptivePerformanceSubsystemProvider_U3C_ctorU3Eb__25_2_m7B49ED9C37BB709637C5117360974412BDA376DD (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) 
{
	{
		// m_GPUTime = new AsyncValue<double>(m_AsyncUpdater, -1.0, 0.0f, () => m_Api.GetGpuFrameTime());
		NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* L_0 = __this->___m_Api_2;
		NullCheck(L_0);
		double L_1;
		L_1 = NativeApi_GetGpuFrameTime_m6EC21E51847ECE0F1377047EA9BF73364612B830(L_0, NULL);
		return L_1;
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
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::.ctor(System.Action`1<UnityEngine.AdaptivePerformance.WarningLevel>,System.Action,System.Action,System.Action,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi__ctor_mCCF79AADACCB32B40BB7D448F18A4DCE93C1A285 (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA* ___sustainedPerformanceWarning0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___sustainedPerformanceTimeout1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___refreshRateChanged2, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___cpuPerformanceBoostReleasedByTimeout3, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___gpuPerformanceBoostReleasedByTimeout4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B5485AAFD0F88488213FA21BAC0D600944F8265);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base("com.samsung.android.gamesdk.GameSDKManager$Listener")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral5B5485AAFD0F88488213FA21BAC0D600944F8265, NULL);
		// PerformanceWarningEvent = sustainedPerformanceWarning;
		Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA* L_0 = ___sustainedPerformanceWarning0;
		__this->___PerformanceWarningEvent_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PerformanceWarningEvent_11), (void*)L_0);
		// PerformanceLevelTimeoutEvent = sustainedPerformanceTimeout;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ___sustainedPerformanceTimeout1;
		__this->___PerformanceLevelTimeoutEvent_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PerformanceLevelTimeoutEvent_12), (void*)L_1);
		// RefreshRateChangedEvent = refreshRateChanged;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___refreshRateChanged2;
		__this->___RefreshRateChangedEvent_15 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RefreshRateChangedEvent_15), (void*)L_2);
		// CpuPerformanceBoostReleasedByTimeoutEvent = cpuPerformanceBoostReleasedByTimeout;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___cpuPerformanceBoostReleasedByTimeout3;
		__this->___CpuPerformanceBoostReleasedByTimeoutEvent_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CpuPerformanceBoostReleasedByTimeoutEvent_13), (void*)L_3);
		// GpuPerformanceBoostReleasedByTimeoutEvent = gpuPerformanceBoostReleasedByTimeout;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___gpuPerformanceBoostReleasedByTimeout4;
		__this->___GpuPerformanceBoostReleasedByTimeoutEvent_14 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GpuPerformanceBoostReleasedByTimeoutEvent_14), (void*)L_4);
		// StaticInit();
		il2cpp_codegen_runtime_class_init_inline(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		NativeApi_StaticInit_m74800583658910FD2AB3A6C3A4A3AD90848AAB53(NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::onHighTempWarning(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_onHighTempWarning_m8B37BC5089F1D36E28E05186037F3DCD0B96EE2B (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, int32_t ___warningLevel0, const RuntimeMethod* method) 
{
	{
		// if (warningLevel == 0)
		int32_t L_0 = ___warningLevel0;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// PerformanceWarningEvent(WarningLevel.NoWarning);
		Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA* L_1 = __this->___PerformanceWarningEvent_11;
		NullCheck(L_1);
		Action_1_Invoke_m772CF576DB7B297059C25510D48E3CD587FB66DF_inline(L_1, 0, NULL);
		return;
	}

IL_0010:
	{
		// else if (warningLevel == 1)
		int32_t L_2 = ___warningLevel0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0021;
		}
	}
	{
		// PerformanceWarningEvent(WarningLevel.ThrottlingImminent);
		Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA* L_3 = __this->___PerformanceWarningEvent_11;
		NullCheck(L_3);
		Action_1_Invoke_m772CF576DB7B297059C25510D48E3CD587FB66DF_inline(L_3, 1, NULL);
		return;
	}

IL_0021:
	{
		// else if (warningLevel == 2)
		int32_t L_4 = ___warningLevel0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0031;
		}
	}
	{
		// PerformanceWarningEvent(WarningLevel.Throttling);
		Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA* L_5 = __this->___PerformanceWarningEvent_11;
		NullCheck(L_5);
		Action_1_Invoke_m772CF576DB7B297059C25510D48E3CD587FB66DF_inline(L_5, 2, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::onReleasedByTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_onReleasedByTimeout_mF996B4632C613A81C2BAD3AC1A7BCBC56EBFBB28 (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, const RuntimeMethod* method) 
{
	{
		// PerformanceLevelTimeoutEvent();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___PerformanceLevelTimeoutEvent_12;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::onReleasedCpuBoost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_onReleasedCpuBoost_m5B0326420507785872A4A0C98955485A00B749D2 (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, const RuntimeMethod* method) 
{
	{
		// CpuPerformanceBoostReleasedByTimeoutEvent();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___CpuPerformanceBoostReleasedByTimeoutEvent_13;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::onReleasedGpuBoost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_onReleasedGpuBoost_m0DA71C4FFE8106D55134B3A1A004620755DB7554 (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, const RuntimeMethod* method) 
{
	{
		// GpuPerformanceBoostReleasedByTimeoutEvent();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___GpuPerformanceBoostReleasedByTimeoutEvent_14;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::onRefreshRateChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_onRefreshRateChanged_mBF129F5378147416B3B5E10BCB6AD611D572855A (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, const RuntimeMethod* method) 
{
	{
		// RefreshRateChangedEvent();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___RefreshRateChangedEvent_15;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
		// }
		return;
	}
}
// System.IntPtr UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::GetJavaMethodID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeApi_GetJavaMethodID_mDC5107AC7FFC1FD76D358FD35F661827C9ACF1D8 (intptr_t ___classId0, String_t* ___name1, String_t* ___sig2, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// AndroidJNI.ExceptionClear();
		AndroidJNI_ExceptionClear_m90681289A6CEAF160DB188A3E2177F323D996F82(NULL);
		// var mid = AndroidJNI.GetMethodID(classId, name, sig);
		intptr_t L_0 = ___classId0;
		String_t* L_1 = ___name1;
		String_t* L_2 = ___sig2;
		intptr_t L_3;
		L_3 = AndroidJNI_GetMethodID_mCB601A11C971557E2F89DD968224749BD71D2B3A(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// IntPtr ex = AndroidJNI.ExceptionOccurred();
		intptr_t L_4;
		L_4 = AndroidJNI_ExceptionOccurred_m6C27C01B14483F99373608BF1A56CA53BA46F926(NULL);
		// if (ex != (IntPtr)0)
		intptr_t L_5;
		L_5 = IntPtr_op_Explicit_mB06D1B6CFBA72B5C55FBEC1BA3BC25958AB60EB1(0, NULL);
		bool L_6;
		L_6 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		// AndroidJNI.ExceptionDescribe();
		AndroidJNI_ExceptionDescribe_m9E582B7E3ED1CA3D23A35325F676CD88A1E05B5D(NULL);
		// AndroidJNI.ExceptionClear();
		AndroidJNI_ExceptionClear_m90681289A6CEAF160DB188A3E2177F323D996F82(NULL);
		// return (IntPtr)0;
		intptr_t L_7;
		L_7 = IntPtr_op_Explicit_mB06D1B6CFBA72B5C55FBEC1BA3BC25958AB60EB1(0, NULL);
		return L_7;
	}

IL_0031:
	{
		// return mid;
		intptr_t L_8 = V_0;
		return L_8;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::StaticInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_StaticInit_m74800583658910FD2AB3A6C3A4A3AD90848AAB53 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral110C230ECC11791A56E51CE07FE5E6FD5A78178A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D677AB4F1E4297F4CF5654EAD125EEBC50D20EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74C185339ADE6B87DA245E0CBDFD66891CC43F54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1AAE3AE980660190B1F9951D819C0F1BEA090B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAD4FD80C1A0A39AD74FD88700D89B9595B8D595);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB8C132238F9E774E6E9E180238DA0A65C25145C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEC7732C32C4E0262755BF931431F792DE2E0033);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (s_GameSDK == null)
		il2cpp_codegen_runtime_class_init_inline(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_GameSDK_4;
		if (L_0)
		{
			goto IL_00da;
		}
	}
	try
	{// begin try (depth: 1)
		{
			// s_GameSDK = new AndroidJavaObject("com.samsung.android.gamesdk.GameSDKManager");
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
			L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
			NullCheck(L_2);
			AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_2, _stringLiteralEEC7732C32C4E0262755BF931431F792DE2E0033, L_1, NULL);
			il2cpp_codegen_runtime_class_init_inline(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
			((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_GameSDK_4 = L_2;
			Il2CppCodeGenWriteBarrier((void**)(&((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_GameSDK_4), (void*)L_2);
			// if (s_GameSDK != null)
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = ((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_GameSDK_4;
			if (!L_3)
			{
				goto IL_003e_1;
			}
		}
		{
			// s_isAvailable = s_GameSDK.CallStatic<bool>("isAvailable");
			il2cpp_codegen_runtime_class_init_inline(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_GameSDK_4;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5;
			L_5 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
			NullCheck(L_4);
			bool L_6;
			L_6 = AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6(L_4, _stringLiteral74C185339ADE6B87DA245E0CBDFD66891CC43F54, L_5, AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
			((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_isAvailable_9 = L_6;
		}

IL_003e_1:
		{
			// }
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0040;
		}
		throw e;
	}

CATCH_0040:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		// s_isAvailable = false;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var)));
		((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))))->___s_isAvailable_9 = (bool)0;
		// s_GameSDK = null;
		((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))))->___s_GameSDK_4 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))))->___s_GameSDK_4), (void*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		// if (s_isAvailable)
		il2cpp_codegen_runtime_class_init_inline(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		bool L_7 = ((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_isAvailable_9;
		if (!L_7)
		{
			goto IL_00da;
		}
	}
	{
		// s_GameSDKRawObjectID = s_GameSDK.GetRawObject();
		il2cpp_codegen_runtime_class_init_inline(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = ((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_GameSDK_4;
		NullCheck(L_8);
		intptr_t L_9;
		L_9 = AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48(L_8, NULL);
		((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_GameSDKRawObjectID_5 = L_9;
		// var classID = s_GameSDK.GetRawClass();
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = ((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_GameSDK_4;
		NullCheck(L_10);
		intptr_t L_11;
		L_11 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_10, NULL);
		// s_GetGpuFrameTimeID = GetJavaMethodID(classID, "getGpuFrameTime", "()D");
		intptr_t L_12 = L_11;
		intptr_t L_13;
		L_13 = NativeApi_GetJavaMethodID_mDC5107AC7FFC1FD76D358FD35F661827C9ACF1D8(L_12, _stringLiteral110C230ECC11791A56E51CE07FE5E6FD5A78178A, _stringLiteralDB8C132238F9E774E6E9E180238DA0A65C25145C, NULL);
		((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_GetGpuFrameTimeID_6 = L_13;
		// s_GetHighPrecisionSkinTempLevelID = GetJavaMethodID(classID, "getHighPrecisionSkinTempLevel", "()D");
		intptr_t L_14 = L_12;
		intptr_t L_15;
		L_15 = NativeApi_GetJavaMethodID_mDC5107AC7FFC1FD76D358FD35F661827C9ACF1D8(L_14, _stringLiteralDAD4FD80C1A0A39AD74FD88700D89B9595B8D595, _stringLiteralDB8C132238F9E774E6E9E180238DA0A65C25145C, NULL);
		((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_GetHighPrecisionSkinTempLevelID_7 = L_15;
		// s_GetClusterInfolID = GetJavaMethodID(classID, "getClusterInfo", "()I");
		intptr_t L_16;
		L_16 = NativeApi_GetJavaMethodID_mDC5107AC7FFC1FD76D358FD35F661827C9ACF1D8(L_14, _stringLiteralA1AAE3AE980660190B1F9951D819C0F1BEA090B7, _stringLiteral2D677AB4F1E4297F4CF5654EAD125EEBC50D20EF, NULL);
		((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_GetClusterInfolID_8 = L_16;
		// if (s_GetGpuFrameTimeID == (IntPtr)0 || s_GetHighPrecisionSkinTempLevelID == (IntPtr)0)
		intptr_t L_17 = ((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_GetGpuFrameTimeID_6;
		intptr_t L_18;
		L_18 = IntPtr_op_Explicit_mB06D1B6CFBA72B5C55FBEC1BA3BC25958AB60EB1(0, NULL);
		bool L_19;
		L_19 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_17, L_18, NULL);
		if (L_19)
		{
			goto IL_00d4;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		intptr_t L_20 = ((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_GetHighPrecisionSkinTempLevelID_7;
		intptr_t L_21;
		L_21 = IntPtr_op_Explicit_mB06D1B6CFBA72B5C55FBEC1BA3BC25958AB60EB1(0, NULL);
		bool L_22;
		L_22 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_20, L_21, NULL);
		if (!L_22)
		{
			goto IL_00da;
		}
	}

IL_00d4:
	{
		// s_isAvailable = false;
		il2cpp_codegen_runtime_class_init_inline(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_isAvailable_9 = (bool)0;
	}

IL_00da:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::IsAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_IsAvailable_m6392723FFEF931DD13C4FA37C2F5CCB375C06C63 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StaticInit();
		il2cpp_codegen_runtime_class_init_inline(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		NativeApi_StaticInit_m74800583658910FD2AB3A6C3A4A3AD90848AAB53(NULL);
		// return s_isAvailable;
		bool L_0 = ((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_isAvailable_9;
		return L_0;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::RegisterListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_RegisterListener_m3F7890B2A26F536170718B3B6427E36819CA7DFB (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3261C3E11E9AB172DA0BD2010EF79C41DE23C91C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// bool success = false;
		V_0 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		// success = s_GameSDK.Call<bool>("setListener", this);
		il2cpp_codegen_runtime_class_init_inline(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_GameSDK_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, __this);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)__this);
		NullCheck(L_0);
		bool L_3;
		L_3 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_0, _stringLiteral3261C3E11E9AB172DA0BD2010EF79C41DE23C91C, L_2, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		V_0 = L_3;
		// }
		goto IL_0023;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001e;
		}
		throw e;
	}

CATCH_001e:
	{// begin catch(System.Exception)
		// catch (Exception)
		// success = false;
		V_0 = (bool)0;
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0023;
	}// end catch (depth: 1)

IL_0023:
	{
		// if (!success)
		bool L_4 = V_0;
		// return success;
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::UnregisterListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnregisterListener_m9A67762C6AADE2AD868716F0ABA59110614C9510 (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3261C3E11E9AB172DA0BD2010EF79C41DE23C91C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// bool success = true;
		V_0 = (bool)1;
	}
	try
	{// begin try (depth: 1)
		// success = s_GameSDK.Call<bool>("setListener", (Object)null);
		il2cpp_codegen_runtime_class_init_inline(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_GameSDK_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_0, _stringLiteral3261C3E11E9AB172DA0BD2010EF79C41DE23C91C, L_1, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		V_0 = L_2;
		// }
		goto IL_001f;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001a;
		}
		throw e;
	}

CATCH_001a:
	{// begin catch(System.Exception)
		// catch (Exception)
		// success = false;
		V_0 = (bool)0;
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001f;
	}// end catch (depth: 1)

IL_001f:
	{
		// if (!success)
		bool L_3 = V_0;
		// }
		return;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_Initialize_mBF7887E439A3C735559C768CF0E58F32700B758A (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD289A15F06D391673864A3B5CEDBFF42865743C1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// bool isInitialized = false;
		V_0 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		{
			// if (TryParseVersion(GetVersion(), out initVersion))
			String_t* L_0;
			L_0 = NativeApi_GetVersion_m1B4FDC104DFA0E61676416F7011CB4E58F8CDFFA(__this, NULL);
			il2cpp_codegen_runtime_class_init_inline(SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545_il2cpp_TypeInfo_var);
			bool L_1;
			L_1 = SamsungGameSDKAdaptivePerformanceSubsystemProvider_TryParseVersion_m9EFF26325A1DED00F8C5237171899F27AF7DF1C4(L_0, (&V_1), NULL);
			if (!L_1)
			{
				goto IL_0049_1;
			}
		}
		{
			// if (initVersion >= new Version(3, 2))
			Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_2 = V_1;
			Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_3 = (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7*)il2cpp_codegen_object_new(Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
			NullCheck(L_3);
			Version__ctor_m0871675040007535EA3D8083A4BEAE9DF8C92FF4(L_3, 3, 2, NULL);
			bool L_4;
			L_4 = Version_op_GreaterThanOrEqual_mA931CBD9362C3D0D4D149B63A16B10B11BBBA933(L_2, L_3, NULL);
			if (!L_4)
			{
				goto IL_003f_1;
			}
		}
		{
			// isInitialized = s_GameSDK.Call<bool>("initialize", initVersion.ToString());
			il2cpp_codegen_runtime_class_init_inline(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = ((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_GameSDK_4;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
			Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_8 = V_1;
			NullCheck(L_8);
			String_t* L_9;
			L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
			NullCheck(L_7);
			ArrayElementTypeCheck (L_7, L_9);
			(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
			NullCheck(L_5);
			bool L_10;
			L_10 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_5, _stringLiteralD289A15F06D391673864A3B5CEDBFF42865743C1, L_7, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
			V_0 = L_10;
		}

IL_003f_1:
		{
			// if (isInitialized)
			bool L_11 = V_0;
			if (!L_11)
			{
				goto IL_0049_1;
			}
		}
		{
			// isInitialized = RegisterListener();
			bool L_12;
			L_12 = NativeApi_RegisterListener_m3F7890B2A26F536170718B3B6427E36819CA7DFB(__this, NULL);
			V_0 = L_12;
		}

IL_0049_1:
		{
			// }
			goto IL_004e;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_004b;
		}
		throw e;
	}

CATCH_004b:
	{// begin catch(System.Exception)
		// catch (Exception)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004e;
	}// end catch (depth: 1)

IL_004e:
	{
		// return isInitialized;
		bool L_13 = V_0;
		return L_13;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::Terminate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_Terminate_m6FA285A63E71056A30093B2FF9C7F56CE10A3DD3 (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E5FBE3F351EB8F12ED980FF209B6810ED6C1D60);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// UnregisterListener();
		NativeApi_UnregisterListener_m9A67762C6AADE2AD868716F0ABA59110614C9510(__this, NULL);
	}
	try
	{// begin try (depth: 1)
		// var packageName = Application.identifier;
		String_t* L_0;
		L_0 = Application_get_identifier_m26B38D49FA10A46D61C1309769A59E9CF7460006(NULL);
		V_0 = L_0;
		// s_GameSDK.Call<bool>("finalize", packageName);
		il2cpp_codegen_runtime_class_init_inline(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_GameSDK_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		String_t* L_4 = V_0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		NullCheck(L_1);
		bool L_5;
		L_5 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_1, _stringLiteral8E5FBE3F351EB8F12ED980FF209B6810ED6C1D60, L_3, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		// }
		goto IL_002b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0028;
		}
		throw e;
	}

CATCH_0028:
	{// begin catch(System.Exception)
		// catch (Exception)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002b;
	}// end catch (depth: 1)

IL_002b:
	{
		// }
		return;
	}
}
// System.String UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::GetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeApi_GetVersion_m1B4FDC104DFA0E61676416F7011CB4E58F8CDFFA (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CAC7A1CF27146D11E92BE39054D8E4594FE9B3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// string sdkVersion = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
	try
	{// begin try (depth: 1)
		// sdkVersion = s_GameSDK.Call<string>("getVersion");
		il2cpp_codegen_runtime_class_init_inline(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_GameSDK_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, _stringLiteral8CAC7A1CF27146D11E92BE39054D8E4594FE9B3D, L_1, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		V_0 = L_2;
		// }
		goto IL_0020;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001d;
		}
		throw e;
	}

CATCH_001d:
	{// begin catch(System.Exception)
		// catch (Exception)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0020;
	}// end catch (depth: 1)

IL_0020:
	{
		// return sdkVersion;
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Double UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::GetHighPrecisionSkinTempLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NativeApi_GetHighPrecisionSkinTempLevel_m5A5DEF03CC1CF28B42714F6C016C420900F1BE8D (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// double currentTempLevel = -1.0;
		V_0 = (-1.0);
	}
	try
	{// begin try (depth: 1)
		{
			// currentTempLevel = AndroidJNI.CallDoubleMethod(s_GameSDKRawObjectID, s_GetHighPrecisionSkinTempLevelID, s_NoArgs);
			il2cpp_codegen_runtime_class_init_inline(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
			intptr_t L_0 = ((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_GameSDKRawObjectID_5;
			intptr_t L_1 = ((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_GetHighPrecisionSkinTempLevelID_7;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_NoArgs_10;
			double L_3;
			L_3 = AndroidJNI_CallDoubleMethod_m88A34942D1206EEE8BEA95475722D2E8FFFFC711(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			// if (AndroidJNI.ExceptionOccurred() != IntPtr.Zero)
			intptr_t L_4;
			L_4 = AndroidJNI_ExceptionOccurred_m6C27C01B14483F99373608BF1A56CA53BA46F926(NULL);
			bool L_5;
			L_5 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_4, (0), NULL);
			if (!L_5)
			{
				goto IL_003a_1;
			}
		}
		{
			// AndroidJNI.ExceptionDescribe();
			AndroidJNI_ExceptionDescribe_m9E582B7E3ED1CA3D23A35325F676CD88A1E05B5D(NULL);
			// AndroidJNI.ExceptionClear();
			AndroidJNI_ExceptionClear_m90681289A6CEAF160DB188A3E2177F323D996F82(NULL);
		}

IL_003a_1:
		{
			// }
			goto IL_003f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.Exception)
		// catch (Exception)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_003f;
	}// end catch (depth: 1)

IL_003f:
	{
		// return currentTempLevel;
		double L_6 = V_0;
		return L_6;
	}
}
// System.Double UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::GetGpuFrameTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NativeApi_GetGpuFrameTime_m6EC21E51847ECE0F1377047EA9BF73364612B830 (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// double gpuFrameTime = -1.0;
		V_0 = (-1.0);
	}
	try
	{// begin try (depth: 1)
		{
			// gpuFrameTime = AndroidJNI.CallDoubleMethod(s_GameSDKRawObjectID, s_GetGpuFrameTimeID, s_NoArgs);
			il2cpp_codegen_runtime_class_init_inline(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
			intptr_t L_0 = ((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_GameSDKRawObjectID_5;
			intptr_t L_1 = ((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_GetGpuFrameTimeID_6;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_NoArgs_10;
			double L_3;
			L_3 = AndroidJNI_CallDoubleMethod_m88A34942D1206EEE8BEA95475722D2E8FFFFC711(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			// if (AndroidJNI.ExceptionOccurred() != IntPtr.Zero)
			intptr_t L_4;
			L_4 = AndroidJNI_ExceptionOccurred_m6C27C01B14483F99373608BF1A56CA53BA46F926(NULL);
			bool L_5;
			L_5 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_4, (0), NULL);
			if (!L_5)
			{
				goto IL_003a_1;
			}
		}
		{
			// AndroidJNI.ExceptionDescribe();
			AndroidJNI_ExceptionDescribe_m9E582B7E3ED1CA3D23A35325F676CD88A1E05B5D(NULL);
			// AndroidJNI.ExceptionClear();
			AndroidJNI_ExceptionClear_m90681289A6CEAF160DB188A3E2177F323D996F82(NULL);
		}

IL_003a_1:
		{
			// }
			goto IL_003f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.Exception)
		// catch (Exception)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_003f;
	}// end catch (depth: 1)

IL_003f:
	{
		// return gpuFrameTime;
		double L_6 = V_0;
		return L_6;
	}
}
// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::SetFreqLevels(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_SetFreqLevels_mAB6D4E6F1F5B24F2965A4537814214683144A1CA (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, int32_t ___cpu0, int32_t ___gpu1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F209C20BD06D8D1C76C888ACA266837D8ADDC01);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// int result = 0;
		V_0 = 0;
	}
	try
	{// begin try (depth: 1)
		// result = s_GameSDK.Call<int>("setFreqLevels", cpu, gpu);
		il2cpp_codegen_runtime_class_init_inline(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_GameSDK_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		int32_t L_3 = ___cpu0;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_2;
		int32_t L_7 = ___gpu1;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		NullCheck(L_0);
		int32_t L_10;
		L_10 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_0, _stringLiteral4F209C20BD06D8D1C76C888ACA266837D8ADDC01, L_6, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		V_0 = L_10;
		// }
		goto IL_002f;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002c;
		}
		throw e;
	}

CATCH_002c:
	{// begin catch(System.Exception)
		// catch (Exception x)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002f;
	}// end catch (depth: 1)

IL_002f:
	{
		// return result;
		int32_t L_11 = V_0;
		return L_11;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::EnableCpuBoost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_EnableCpuBoost_m0EB18898717BBFA5DA1E0DB9EC857C543E1342AE (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD05CCAF3885FF0D51C07DE89653D67A9929A857);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// bool result = false;
		V_0 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		// result = s_GameSDK.Call<bool>("setCpuBoostMode", 1);
		il2cpp_codegen_runtime_class_init_inline(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_GameSDK_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		int32_t L_3 = 1;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		NullCheck(L_0);
		bool L_5;
		L_5 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_0, _stringLiteralBD05CCAF3885FF0D51C07DE89653D67A9929A857, L_2, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		V_0 = L_5;
		// }
		goto IL_0026;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0023;
		}
		throw e;
	}

CATCH_0023:
	{// begin catch(System.Exception)
		// catch (Exception x)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0026;
	}// end catch (depth: 1)

IL_0026:
	{
		// return result;
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::EnableGpuBoost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_EnableGpuBoost_m880A3314BE930D068F2EED836F79C295636FEB69 (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58B9EE58F492CF50D7C051554FE7BDD815569565);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// bool result = false;
		V_0 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		// result = s_GameSDK.Call<bool>("setGpuBoostMode", 1);
		il2cpp_codegen_runtime_class_init_inline(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_GameSDK_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		int32_t L_3 = 1;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		NullCheck(L_0);
		bool L_5;
		L_5 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_0, _stringLiteral58B9EE58F492CF50D7C051554FE7BDD815569565, L_2, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		V_0 = L_5;
		// }
		goto IL_0026;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0023;
		}
		throw e;
	}

CATCH_0023:
	{// begin catch(System.Exception)
		// catch (Exception x)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0026;
	}// end catch (depth: 1)

IL_0026:
	{
		// return result;
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::GetClusterInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_GetClusterInfo_m09F7C453D791CFD6DC7BC3622FE8EE70FC1A6208 (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// int result = -999;
		V_0 = ((int32_t)-999);
	}
	try
	{// begin try (depth: 1)
		{
			// result = AndroidJNI.CallIntMethod(s_GameSDKRawObjectID, s_GetClusterInfolID, s_NoArgs);
			il2cpp_codegen_runtime_class_init_inline(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
			intptr_t L_0 = ((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_GameSDKRawObjectID_5;
			intptr_t L_1 = ((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_GetClusterInfolID_8;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_NoArgs_10;
			int32_t L_3;
			L_3 = AndroidJNI_CallIntMethod_m5CE09EA0846BF49ABE3E23BC923710A0F1FF4787(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			// if (AndroidJNI.ExceptionOccurred() != IntPtr.Zero)
			intptr_t L_4;
			L_4 = AndroidJNI_ExceptionOccurred_m6C27C01B14483F99373608BF1A56CA53BA46F926(NULL);
			bool L_5;
			L_5 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_4, (0), NULL);
			if (!L_5)
			{
				goto IL_0036_1;
			}
		}
		{
			// AndroidJNI.ExceptionDescribe();
			AndroidJNI_ExceptionDescribe_m9E582B7E3ED1CA3D23A35325F676CD88A1E05B5D(NULL);
			// AndroidJNI.ExceptionClear();
			AndroidJNI_ExceptionClear_m90681289A6CEAF160DB188A3E2177F323D996F82(NULL);
		}

IL_0036_1:
		{
			// }
			goto IL_003b;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0038;
		}
		throw e;
	}

CATCH_0038:
	{// begin catch(System.Exception)
		// catch (Exception x)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_003b;
	}// end catch (depth: 1)

IL_003b:
	{
		// return result;
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::GetMaxCpuPerformanceLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_GetMaxCpuPerformanceLevel_m66F7DE690CC642C7A0879F10129331159D597FEB (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAC891F8E2E6B2BA23524259218EF5EF3BF998B4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// int maxCpuPerformanceLevel = Constants.UnknownPerformanceLevel;
		V_0 = (-1);
	}
	try
	{// begin try (depth: 1)
		// maxCpuPerformanceLevel = s_GameSDK.Call<int>("getCPULevelMax");
		il2cpp_codegen_runtime_class_init_inline(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_GameSDK_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_2;
		L_2 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_0, _stringLiteralFAC891F8E2E6B2BA23524259218EF5EF3BF998B4, L_1, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		V_0 = L_2;
		// }
		goto IL_001c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0019;
		}
		throw e;
	}

CATCH_0019:
	{// begin catch(System.Exception)
		// catch (Exception)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001c;
	}// end catch (depth: 1)

IL_001c:
	{
		// return maxCpuPerformanceLevel;
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::GetMaxGpuPerformanceLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_GetMaxGpuPerformanceLevel_mAD7DFC28CD24437C9B9717ABC0BDB914675D19BA (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA479396D9311F0A23258AE9653EFD051C3B8A4D5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// int maxGpuPerformanceLevel = Constants.UnknownPerformanceLevel;
		V_0 = (-1);
	}
	try
	{// begin try (depth: 1)
		// maxGpuPerformanceLevel = s_GameSDK.Call<int>("getGPULevelMax");
		il2cpp_codegen_runtime_class_init_inline(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_GameSDK_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_2;
		L_2 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_0, _stringLiteralA479396D9311F0A23258AE9653EFD051C3B8A4D5, L_1, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		V_0 = L_2;
		// }
		goto IL_001c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0019;
		}
		throw e;
	}

CATCH_0019:
	{// begin catch(System.Exception)
		// catch (Exception)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001c;
	}// end catch (depth: 1)

IL_001c:
	{
		// return maxGpuPerformanceLevel;
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::IsVariableRefreshRateSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_IsVariableRefreshRateSupported_mD79BDE9CCACFA91ED207D40505BF424F08A4A8D1 (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1174361642F6FE4FCA189A130190A4E9597912D6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// bool vrrSupported = false;
		V_0 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		// vrrSupported = s_GameSDK.Call<bool>("isGameSDKVariableRefreshRateSupported");
		il2cpp_codegen_runtime_class_init_inline(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_GameSDK_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_0, _stringLiteral1174361642F6FE4FCA189A130190A4E9597912D6, L_1, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		V_0 = L_2;
		// }
		goto IL_001c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0019;
		}
		throw e;
	}

CATCH_0019:
	{// begin catch(System.Exception)
		// catch (Exception x)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001c;
	}// end catch (depth: 1)

IL_001c:
	{
		// return vrrSupported;
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::GetSupportedRefreshRates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* NativeApi_GetSupportedRefreshRates_m9A0DFA198F63A4CD85C76E79332A01E3ABB17B0D (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_m55B538F2538A5C0157CC28301628D6EDAC92C007_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D6253C836CCF9A6B8A05245CB6B1EF24E546455);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// int[] result = null;
		V_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
	}
	try
	{// begin try (depth: 1)
		// result = s_GameSDK.Call<int[]>("getSupportedRefreshRates");
		il2cpp_codegen_runtime_class_init_inline(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_GameSDK_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = AndroidJavaObject_Call_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_m55B538F2538A5C0157CC28301628D6EDAC92C007(L_0, _stringLiteral3D6253C836CCF9A6B8A05245CB6B1EF24E546455, L_1, AndroidJavaObject_Call_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_m55B538F2538A5C0157CC28301628D6EDAC92C007_RuntimeMethod_var);
		V_0 = L_2;
		// }
		goto IL_001c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0019;
		}
		throw e;
	}

CATCH_0019:
	{// begin catch(System.Exception)
		// catch (Exception x)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001c;
	}// end catch (depth: 1)

IL_001c:
	{
		// return result != null ? result : new int[0];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_0;
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)0);
		return L_4;
	}

IL_0026:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = V_0;
		return L_5;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::SetRefreshRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_SetRefreshRate_m0470DFA5D8D96A725BF6C4DF09413C564DD6BE13 (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, int32_t ___targetRefreshRate0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF206CAA96C8ED929B66CE9CAF1513182AC391082);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// s_GameSDK.Call("setRefreshRate", targetRefreshRate);
		il2cpp_codegen_runtime_class_init_inline(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_GameSDK_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		int32_t L_3 = ___targetRefreshRate0;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteralF206CAA96C8ED929B66CE9CAF1513182AC391082, L_2, NULL);
		// }
		goto IL_0025;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0020;
		}
		throw e;
	}

CATCH_0020:
	{// begin catch(System.Exception)
		// catch (Exception x)
		// return false;
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0027;
	}// end catch (depth: 1)

IL_0025:
	{
		// return true;
		return (bool)1;
	}

IL_0027:
	{
		// }
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::ResetRefreshRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_ResetRefreshRate_m5EADB445183C5FF7D84A8DE0165F989B489DD176 (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DF31CBCAC5F9AB299F5D58B49B126C24553D2D1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// s_GameSDK.Call("resetRefreshRate");
		il2cpp_codegen_runtime_class_init_inline(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_GameSDK_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral7DF31CBCAC5F9AB299F5D58B49B126C24553D2D1, L_1, NULL);
		// }
		goto IL_001b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{// begin catch(System.Exception)
		// catch (Exception x)
		// return false;
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001d;
	}// end catch (depth: 1)

IL_001b:
	{
		// return true;
		return (bool)1;
	}

IL_001d:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::GetCurrentRefreshRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_GetCurrentRefreshRate_m5FB0263F9B8A1EC2AD3DF2F97B13E4F409FB99B6 (NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8E0CE0AA8B1F1859A8CEA37DFAA26D56616E45);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// int result = -1;
		V_0 = (-1);
	}
	try
	{// begin try (depth: 1)
		// result = s_GameSDK.Call<int>("getCurrentRefreshRate");
		il2cpp_codegen_runtime_class_init_inline(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_GameSDK_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_2;
		L_2 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_0, _stringLiteral1D8E0CE0AA8B1F1859A8CEA37DFAA26D56616E45, L_1, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		V_0 = L_2;
		// }
		goto IL_001c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0019;
		}
		throw e;
	}

CATCH_0019:
	{// begin catch(System.Exception)
		// catch (Exception x)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001c;
	}// end catch (depth: 1)

IL_001c:
	{
		// return result;
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi__cctor_m254F1C0B54426CEA6099B2585F540D690CF8BC0F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static AndroidJavaObject s_GameSDK = null;
		((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_GameSDK_4 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_GameSDK_4), (void*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL);
		// private static bool s_isAvailable = false;
		((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_isAvailable_9 = (bool)0;
		// private static jvalue[] s_NoArgs = new jvalue[0];
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var, (uint32_t)0);
		((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_NoArgs_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65_il2cpp_TypeInfo_var))->___s_NoArgs_10), (void*)L_0);
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
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/VRRManager::UpdateRefreshRateInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager_UpdateRefreshRateInfo_m6A68EB0D43389FA34109DDAE9D46784BA3B4D699 (VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// var supportedRefreshRates = m_Api.GetSupportedRefreshRates();
		NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* L_0 = __this->___m_Api_0;
		NullCheck(L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = NativeApi_GetSupportedRefreshRates_m9A0DFA198F63A4CD85C76E79332A01E3ABB17B0D(L_0, NULL);
		V_0 = L_1;
		// if (settings.highSpeedVRR)
		il2cpp_codegen_runtime_class_init_inline(SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545_il2cpp_TypeInfo_var);
		SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* L_2 = ((SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545_StaticFields*)il2cpp_codegen_static_fields_for(SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545_il2cpp_TypeInfo_var))->___settings_16;
		NullCheck(L_2);
		bool L_3;
		L_3 = SamsungAndroidProviderSettings_get_highSpeedVRR_mF7D7A276D6AC87D624429E128A5B36155ABCE4A1_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// m_SupportedRefreshRates = supportedRefreshRates;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		__this->___m_SupportedRefreshRates_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SupportedRefreshRates_3), (void*)L_4);
		goto IL_0051;
	}

IL_0021:
	{
		// List<int> shrunkSupportedRefreshRates = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_5, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		V_1 = L_5;
		// for (var i = 0; i < supportedRefreshRates.Length; ++i)
		V_2 = 0;
		goto IL_003f;
	}

IL_002b:
	{
		// if (supportedRefreshRates[i] <= 60)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		if ((((int32_t)L_9) > ((int32_t)((int32_t)60))))
		{
			goto IL_003b;
		}
	}
	{
		// shrunkSupportedRefreshRates.Add(supportedRefreshRates[i]);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_10 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_0;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_10);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_10, L_14, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_003b:
	{
		// for (var i = 0; i < supportedRefreshRates.Length; ++i)
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_003f:
	{
		// for (var i = 0; i < supportedRefreshRates.Length; ++i)
		int32_t L_16 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_002b;
		}
	}
	{
		// m_SupportedRefreshRates = shrunkSupportedRefreshRates.ToArray();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_18 = V_1;
		NullCheck(L_18);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19;
		L_19 = List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA(L_18, List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		__this->___m_SupportedRefreshRates_3 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SupportedRefreshRates_3), (void*)L_19);
	}

IL_0051:
	{
		// m_CurrentRefreshRate = m_Api.GetCurrentRefreshRate();
		NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* L_20 = __this->___m_Api_0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = NativeApi_GetCurrentRefreshRate_m5FB0263F9B8A1EC2AD3DF2F97B13E4F409FB99B6(L_20, NULL);
		__this->___m_CurrentRefreshRate_4 = L_21;
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/VRRManager::.ctor(UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/NativeApi)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager__ctor_m70B3C81E60597B53629DD2CAFA6EED1D04ECAD73 (VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8* __this, NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* ___api0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object m_RefreshRateChangedLock = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___m_RefreshRateChangedLock_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RefreshRateChangedLock_1), (void*)L_0);
		// int[] m_SupportedRefreshRates = new int[0];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___m_SupportedRefreshRates_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SupportedRefreshRates_3), (void*)L_1);
		// int m_CurrentRefreshRate = -1;
		__this->___m_CurrentRefreshRate_4 = (-1);
		// int m_LastSetRefreshRate = -1;
		__this->___m_LastSetRefreshRate_5 = (-1);
		// public VRRManager(NativeApi api)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_Api = api;
		NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* L_2 = ___api0;
		__this->___m_Api_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Api_0), (void*)L_2);
		// SetDefaultVRR();
		VRRManager_SetDefaultVRR_m940B0AA0FFE6E95911BCB1E63EA61AA40EF3F03E(__this, NULL);
		// UpdateRefreshRateInfo();
		VRRManager_UpdateRefreshRateInfo_m6A68EB0D43389FA34109DDAE9D46784BA3B4D699(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/VRRManager::SetDefaultVRR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager_SetDefaultVRR_m940B0AA0FFE6E95911BCB1E63EA61AA40EF3F03E (VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E62F70969BF3C677153CD4B51C768B21F466098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (settings.highSpeedVRR)
		il2cpp_codegen_runtime_class_init_inline(SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545_il2cpp_TypeInfo_var);
		SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* L_0 = ((SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545_StaticFields*)il2cpp_codegen_static_fields_for(SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545_il2cpp_TypeInfo_var))->___settings_16;
		NullCheck(L_0);
		bool L_1;
		L_1 = SamsungAndroidProviderSettings_get_highSpeedVRR_mF7D7A276D6AC87D624429E128A5B36155ABCE4A1_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return;
		return;
	}

IL_000d:
	{
		// var index = Array.IndexOf(m_SupportedRefreshRates, 60);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___m_SupportedRefreshRates_3;
		int32_t L_3;
		L_3 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E62F70969BF3C677153CD4B51C768B21F466098(L_2, ((int32_t)60), Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E62F70969BF3C677153CD4B51C768B21F466098_RuntimeMethod_var);
		V_0 = L_3;
		// if (index != -1)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0027;
		}
	}
	{
		// SetRefreshRateByIndexInternal(index);
		int32_t L_5 = V_0;
		bool L_6;
		L_6 = VRRManager_SetRefreshRateByIndexInternal_m40E6D92B34F1A7EC77EB19DBADB6DA117C27F645(__this, L_5, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/VRRManager::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager_Resume_mA736A3968C0CB3B7BB3806A854CCA5C9C6CA4537 (VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	{
		// bool changed = false;
		V_0 = (bool)0;
		// var oldSupportedRefreshRates = m_SupportedRefreshRates;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___m_SupportedRefreshRates_3;
		V_1 = L_0;
		// var oldRefreshRate = m_LastSetRefreshRate;
		int32_t L_1 = __this->___m_LastSetRefreshRate_5;
		V_2 = L_1;
		// UpdateRefreshRateInfo();
		VRRManager_UpdateRefreshRateInfo_m6A68EB0D43389FA34109DDAE9D46784BA3B4D699(__this, NULL);
		// if (m_CurrentRefreshRate != oldRefreshRate)
		int32_t L_2 = __this->___m_CurrentRefreshRate_4;
		int32_t L_3 = V_2;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0023;
		}
	}
	{
		// changed = true;
		V_0 = (bool)1;
		goto IL_002e;
	}

IL_0023:
	{
		// else if (oldSupportedRefreshRates != m_SupportedRefreshRates)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___m_SupportedRefreshRates_3;
		if ((((RuntimeObject*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_4) == ((RuntimeObject*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_5)))
		{
			goto IL_002e;
		}
	}
	{
		// changed = true;
		V_0 = (bool)1;
	}

IL_002e:
	{
		// if (changed)
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0057;
		}
	}
	{
		// lock (m_RefreshRateChangedLock)
		RuntimeObject* L_7 = __this->___m_RefreshRateChangedLock_1;
		V_3 = L_7;
		V_4 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004c:
			{// begin finally (depth: 1)
				{
					bool L_8 = V_4;
					if (!L_8)
					{
						goto IL_0056;
					}
				}
				{
					RuntimeObject* L_9 = V_3;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_9, NULL);
				}

IL_0056:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_10 = V_3;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_10, (&V_4), NULL);
			// m_RefreshRateChanged = true;
			__this->___m_RefreshRateChanged_2 = (bool)1;
			// }
			goto IL_0057;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/VRRManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager_Update_mF6B91AAC8B2D33C3A64582B2B7F0F48EE6DEF2F1 (VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E62F70969BF3C677153CD4B51C768B21F466098_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* G_B14_0 = NULL;
	VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* G_B13_0 = NULL;
	{
		// bool refreshRateChanged = false;
		V_0 = (bool)0;
		// lock (m_RefreshRateChangedLock)
		RuntimeObject* L_0 = __this->___m_RefreshRateChangedLock_1;
		V_1 = L_0;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_2;
					if (!L_1)
					{
						goto IL_002c;
					}
				}
				{
					RuntimeObject* L_2 = V_1;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_002c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_1;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_2), NULL);
			// refreshRateChanged = m_RefreshRateChanged;
			bool L_4 = __this->___m_RefreshRateChanged_2;
			V_0 = L_4;
			// m_RefreshRateChanged = false;
			__this->___m_RefreshRateChanged_2 = (bool)0;
			// }
			goto IL_002d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002d:
	{
		// if (refreshRateChanged)
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_008d;
		}
	}
	{
		// UpdateRefreshRateInfo();
		VRRManager_UpdateRefreshRateInfo_m6A68EB0D43389FA34109DDAE9D46784BA3B4D699(__this, NULL);
		// var index = Array.IndexOf(m_SupportedRefreshRates, m_LastSetRefreshRate);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->___m_SupportedRefreshRates_3;
		int32_t L_7 = __this->___m_LastSetRefreshRate_5;
		int32_t L_8;
		L_8 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E62F70969BF3C677153CD4B51C768B21F466098(L_6, L_7, Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E62F70969BF3C677153CD4B51C768B21F466098_RuntimeMethod_var);
		V_3 = L_8;
		// if (index != -1)
		int32_t L_9 = V_3;
		if ((((int32_t)L_9) == ((int32_t)(-1))))
		{
			goto IL_0056;
		}
	}
	{
		// SetRefreshRateByIndexInternal(index);
		int32_t L_10 = V_3;
		bool L_11;
		L_11 = VRRManager_SetRefreshRateByIndexInternal_m40E6D92B34F1A7EC77EB19DBADB6DA117C27F645(__this, L_10, NULL);
		goto IL_007d;
	}

IL_0056:
	{
		// else if (index == -1 && m_LastSetRefreshRate != -1)
		int32_t L_12 = V_3;
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_13 = __this->___m_LastSetRefreshRate_5;
		if ((((int32_t)L_13) == ((int32_t)(-1))))
		{
			goto IL_007d;
		}
	}
	{
		// index = Array.IndexOf(m_SupportedRefreshRates, 60);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->___m_SupportedRefreshRates_3;
		int32_t L_15;
		L_15 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E62F70969BF3C677153CD4B51C768B21F466098(L_14, ((int32_t)60), Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E62F70969BF3C677153CD4B51C768B21F466098_RuntimeMethod_var);
		V_3 = L_15;
		// if (index != -1)
		int32_t L_16 = V_3;
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_007d;
		}
	}
	{
		// SetRefreshRateByIndexInternal(index);
		int32_t L_17 = V_3;
		bool L_18;
		L_18 = VRRManager_SetRefreshRateByIndexInternal_m40E6D92B34F1A7EC77EB19DBADB6DA117C27F645(__this, L_17, NULL);
	}

IL_007d:
	{
		// RefreshRateChanged?.Invoke();
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_19 = __this->___RefreshRateChanged_6;
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_20 = L_19;
		G_B13_0 = L_20;
		if (L_20)
		{
			G_B14_0 = L_20;
			goto IL_0088;
		}
	}
	{
		return;
	}

IL_0088:
	{
		NullCheck(G_B14_0);
		VariableRefreshRateEventHandler_Invoke_mA665080591D6EA72C7EC12CFC0CAFAC8E5FF37EC_inline(G_B14_0, NULL);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/VRRManager::get_SupportedRefreshRates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* VRRManager_get_SupportedRefreshRates_mB0E31383F75832592FC2DB967948C05534E4A1AF (VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8* __this, const RuntimeMethod* method) 
{
	{
		// public int[] SupportedRefreshRates { get { return m_SupportedRefreshRates; } }
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___m_SupportedRefreshRates_3;
		return L_0;
	}
}
// System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/VRRManager::get_CurrentRefreshRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VRRManager_get_CurrentRefreshRate_m5C5FFBE4C73B25248558185EEDAE54E03D08B803 (VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8* __this, const RuntimeMethod* method) 
{
	{
		// public int CurrentRefreshRate { get { return m_CurrentRefreshRate; } }
		int32_t L_0 = __this->___m_CurrentRefreshRate_4;
		return L_0;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/VRRManager::SetRefreshRateByIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VRRManager_SetRefreshRateByIndex_mCAD0FDB00D3BC70B4541E0A011D6EB1CEE62346F (VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// settings.automaticVRR = false;
		il2cpp_codegen_runtime_class_init_inline(SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545_il2cpp_TypeInfo_var);
		SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* L_0 = ((SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545_StaticFields*)il2cpp_codegen_static_fields_for(SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545_il2cpp_TypeInfo_var))->___settings_16;
		NullCheck(L_0);
		SamsungAndroidProviderSettings_set_automaticVRR_m10FAA3C18EF7EF58166BB3D9A572B5D249584639_inline(L_0, (bool)0, NULL);
		// return SetRefreshRateByIndexInternal(index);
		int32_t L_1 = ___index0;
		bool L_2;
		L_2 = VRRManager_SetRefreshRateByIndexInternal_m40E6D92B34F1A7EC77EB19DBADB6DA117C27F645(__this, L_1, NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/VRRManager::SetRefreshRateByIndexInternal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VRRManager_SetRefreshRateByIndexInternal_m40E6D92B34F1A7EC77EB19DBADB6DA117C27F645 (VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (index >= 0 && index < SupportedRefreshRates.Length)
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_1 = ___index0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = VRRManager_get_SupportedRefreshRates_mB0E31383F75832592FC2DB967948C05534E4A1AF_inline(__this, NULL);
		NullCheck(L_2);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0069;
		}
	}
	{
		// var refreshRateFromIndex = SupportedRefreshRates[index];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3;
		L_3 = VRRManager_get_SupportedRefreshRates_mB0E31383F75832592FC2DB967948C05534E4A1AF_inline(__this, NULL);
		int32_t L_4 = ___index0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		// if (Application.targetFrameRate > 0 && index > 0 && SupportedRefreshRates[--index] > Application.targetFrameRate)
		int32_t L_7;
		L_7 = Application_get_targetFrameRate_mB9877E89AFCF1CF0651D9471D5152490BF66BE5E(NULL);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_8 = ___index0;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9;
		L_9 = VRRManager_get_SupportedRefreshRates_mB0E31383F75832592FC2DB967948C05534E4A1AF_inline(__this, NULL);
		int32_t L_10 = ___index0;
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		___index0 = L_11;
		NullCheck(L_9);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		int32_t L_14;
		L_14 = Application_get_targetFrameRate_mB9877E89AFCF1CF0651D9471D5152490BF66BE5E(NULL);
	}

IL_0038:
	{
		// if (!settings.highSpeedVRR)
		il2cpp_codegen_runtime_class_init_inline(SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545_il2cpp_TypeInfo_var);
		SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* L_15 = ((SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545_StaticFields*)il2cpp_codegen_static_fields_for(SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545_il2cpp_TypeInfo_var))->___settings_16;
		NullCheck(L_15);
		bool L_16;
		L_16 = SamsungAndroidProviderSettings_get_highSpeedVRR_mF7D7A276D6AC87D624429E128A5B36155ABCE4A1_inline(L_15, NULL);
		if (L_16)
		{
			goto IL_004b;
		}
	}
	{
		// if (refreshRateFromIndex > 60)
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) <= ((int32_t)((int32_t)60))))
		{
			goto IL_004b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_004b:
	{
		// if (m_Api.SetRefreshRate(refreshRateFromIndex))
		NativeApi_tFF0F6E5361AD469984ECDCD91EF75F312E3E7F65* L_18 = __this->___m_Api_0;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		bool L_20;
		L_20 = NativeApi_SetRefreshRate_m0470DFA5D8D96A725BF6C4DF09413C564DD6BE13(L_18, L_19, NULL);
		if (!L_20)
		{
			goto IL_0069;
		}
	}
	{
		// m_CurrentRefreshRate = refreshRateFromIndex;
		int32_t L_21 = V_0;
		__this->___m_CurrentRefreshRate_4 = L_21;
		// m_LastSetRefreshRate = refreshRateFromIndex;
		int32_t L_22 = V_0;
		__this->___m_LastSetRefreshRate_5 = L_22;
		// return true;
		return (bool)1;
	}

IL_0069:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/VRRManager::add_RefreshRateChanged(UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager_add_RefreshRateChanged_m0D3CA32D4C40DE44612E69E5FB8A3B91993CD59C (VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8* __this, VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* V_0 = NULL;
	VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* V_1 = NULL;
	VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* V_2 = NULL;
	{
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_0 = __this->___RefreshRateChanged_6;
		V_0 = L_0;
	}

IL_0007:
	{
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_1 = V_0;
		V_1 = L_1;
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_2 = V_1;
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95*)CastclassSealed((RuntimeObject*)L_4, VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95_il2cpp_TypeInfo_var));
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95** L_5 = (&__this->___RefreshRateChanged_6);
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_6 = V_2;
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_7 = V_1;
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_8;
		L_8 = InterlockedCompareExchangeImpl<VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95*>(L_5, L_6, L_7);
		V_0 = L_8;
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_9 = V_0;
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_10 = V_1;
		if ((!(((RuntimeObject*)(VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95*)L_9) == ((RuntimeObject*)(VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/VRRManager::remove_RefreshRateChanged(UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager_remove_RefreshRateChanged_mD0E60129FAF729F8339F8BDC1B55A9A41A5D09FE (VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8* __this, VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* V_0 = NULL;
	VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* V_1 = NULL;
	VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* V_2 = NULL;
	{
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_0 = __this->___RefreshRateChanged_6;
		V_0 = L_0;
	}

IL_0007:
	{
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_1 = V_0;
		V_1 = L_1;
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_2 = V_1;
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95*)CastclassSealed((RuntimeObject*)L_4, VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95_il2cpp_TypeInfo_var));
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95** L_5 = (&__this->___RefreshRateChanged_6);
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_6 = V_2;
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_7 = V_1;
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_8;
		L_8 = InterlockedCompareExchangeImpl<VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95*>(L_5, L_6, L_7);
		V_0 = L_8;
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_9 = V_0;
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_10 = V_1;
		if ((!(((RuntimeObject*)(VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95*)L_9) == ((RuntimeObject*)(VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/VRRManager::OnRefreshRateChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager_OnRefreshRateChanged_mFD31A4012CBF088031187EBD0377B23A1590619F (VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (m_RefreshRateChangedLock)
		RuntimeObject* L_0 = __this->___m_RefreshRateChangedLock_1;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001a:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0023;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0023:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			// m_RefreshRateChanged = true;
			__this->___m_RefreshRateChanged_2 = (bool)1;
			// }
			goto IL_0024;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0024:
	{
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
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/AutoVariableRefreshRate::.ctor(UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoVariableRefreshRate__ctor_m96C2B7923CAA6D947EF0FBF05CCB8DC7D4A26126 (AutoVariableRefreshRate_t72A9AA228BAE0E009EA0A0BEC85609F07B6F2B75* __this, RuntimeObject* ___vrrManagerInstance0, const RuntimeMethod* method) 
{
	{
		// SamsungAndroidProviderSettings settings = SamsungAndroidProviderSettings.GetSettings();
		SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* L_0;
		L_0 = SamsungAndroidProviderSettings_GetSettings_mAFADC8F0A6AE54BE4D54AEC67D91019DE82F24C2_inline(NULL);
		__this->___settings_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___settings_0), (void*)L_0);
		// float VrrUpdateTime = 1;
		__this->___VrrUpdateTime_2 = (1.0f);
		// int lastRefreshRateIndex = -1;
		__this->___lastRefreshRateIndex_3 = (-1);
		// public AutoVariableRefreshRate(IVariableRefreshRate vrrManagerInstance)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// vrrManager = vrrManagerInstance;
		RuntimeObject* L_1 = ___vrrManagerInstance0;
		__this->___vrrManager_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vrrManager_1), (void*)L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/AutoVariableRefreshRate::UpdateAutoVRR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoVariableRefreshRate_UpdateAutoVRR_m77A01AECEF39F90CF88D12236C3E5BCE6AB33F2C (AutoVariableRefreshRate_t72A9AA228BAE0E009EA0A0BEC85609F07B6F2B75* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// VrrUpdateTime -= Time.unscaledDeltaTime;
		float L_0 = __this->___VrrUpdateTime_2;
		float L_1;
		L_1 = Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652(NULL);
		__this->___VrrUpdateTime_2 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (VrrUpdateTime <= 0)
		float L_2 = __this->___VrrUpdateTime_2;
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_009b;
		}
	}
	{
		// VrrUpdateTime = 1;
		__this->___VrrUpdateTime_2 = (1.0f);
		// var refreshRateIndex = vrrManager.SupportedRefreshRates.Length - 1;
		RuntimeObject* L_3 = __this->___vrrManager_1;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4;
		L_4 = InterfaceFuncInvoker0< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* >::Invoke(0 /* System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_SupportedRefreshRates() */, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_4)->max_length)), 1));
		// if (Application.targetFrameRate > 0)
		int32_t L_5;
		L_5 = Application_get_targetFrameRate_mB9877E89AFCF1CF0651D9471D5152490BF66BE5E(NULL);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0072;
		}
	}
	{
		// for (int i = 0; i < vrrManager.SupportedRefreshRates.Length; ++i)
		V_1 = 0;
		goto IL_0062;
	}

IL_0046:
	{
		// if (Application.targetFrameRate > vrrManager.SupportedRefreshRates[i])
		int32_t L_6;
		L_6 = Application_get_targetFrameRate_mB9877E89AFCF1CF0651D9471D5152490BF66BE5E(NULL);
		RuntimeObject* L_7 = __this->___vrrManager_1;
		NullCheck(L_7);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8;
		L_8 = InterfaceFuncInvoker0< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* >::Invoke(0 /* System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_SupportedRefreshRates() */, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_7);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if ((((int32_t)L_6) > ((int32_t)L_11)))
		{
			goto IL_005e;
		}
	}
	{
		// refreshRateIndex = i;
		int32_t L_12 = V_1;
		V_0 = L_12;
		// break;
		goto IL_0072;
	}

IL_005e:
	{
		// for (int i = 0; i < vrrManager.SupportedRefreshRates.Length; ++i)
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0062:
	{
		// for (int i = 0; i < vrrManager.SupportedRefreshRates.Length; ++i)
		int32_t L_14 = V_1;
		RuntimeObject* L_15 = __this->___vrrManager_1;
		NullCheck(L_15);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16;
		L_16 = InterfaceFuncInvoker0< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* >::Invoke(0 /* System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_SupportedRefreshRates() */, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_16);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0046;
		}
	}

IL_0072:
	{
		// if (lastRefreshRateIndex != refreshRateIndex)
		int32_t L_17 = __this->___lastRefreshRateIndex_3;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) == ((int32_t)L_18)))
		{
			goto IL_009b;
		}
	}
	{
		// lastRefreshRateIndex = refreshRateIndex;
		int32_t L_19 = V_0;
		__this->___lastRefreshRateIndex_3 = L_19;
		// vrrManager.SetRefreshRateByIndex(refreshRateIndex);
		RuntimeObject* L_20 = __this->___vrrManager_1;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		bool L_22;
		L_22 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(2 /* System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::SetRefreshRateByIndex(System.Int32) */, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_20, L_21);
		// settings.automaticVRR = true;
		SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* L_23 = __this->___settings_0;
		NullCheck(L_23);
		SamsungAndroidProviderSettings_set_automaticVRR_m10FAA3C18EF7EF58166BB3D9A572B5D249584639_inline(L_23, (bool)1, NULL);
	}

IL_009b:
	{
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
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m3954BEBDE652B305784AFC7D0F250F79D7E1F510 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t84AE2B64185FB58241DE2F33733B9EC09815C76B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t84AE2B64185FB58241DE2F33733B9EC09815C76B* L_0 = (U3CU3Ec_t84AE2B64185FB58241DE2F33733B9EC09815C76B*)il2cpp_codegen_object_new(U3CU3Ec_t84AE2B64185FB58241DE2F33733B9EC09815C76B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m66CECC80459D453C2E1202216D7DF9CF4C880A6B(L_0, NULL);
		((U3CU3Ec_t84AE2B64185FB58241DE2F33733B9EC09815C76B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t84AE2B64185FB58241DE2F33733B9EC09815C76B_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t84AE2B64185FB58241DE2F33733B9EC09815C76B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t84AE2B64185FB58241DE2F33733B9EC09815C76B_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m66CECC80459D453C2E1202216D7DF9CF4C880A6B (U3CU3Ec_t84AE2B64185FB58241DE2F33733B9EC09815C76B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungGameSDKAdaptivePerformanceSubsystem/SamsungGameSDKAdaptivePerformanceSubsystemProvider/<>c::<.ctor>b__25_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__25_0_mAC499DCA8ABB3D42842970DC22ADD06BF310C382 (U3CU3Ec_t84AE2B64185FB58241DE2F33733B9EC09815C76B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8* G_B2_0 = NULL;
	VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8* G_B1_0 = NULL;
	{
		// m_Api = new NativeApi(OnPerformanceWarning, OnPerformanceLevelTimeout, () => (VariableRefreshRate.Instance as VRRManager)?.OnRefreshRateChanged(), OnCpuPerformanceBoostModeTimeout, OnGpuPerformanceBoostModeTimeout);
		RuntimeObject* L_0;
		L_0 = VariableRefreshRate_get_Instance_mB72B4AF9C0C464513D27FCD7D81C5AB089675BB9_inline(NULL);
		VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8* L_1 = ((VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8*)IsInstClass((RuntimeObject*)L_0, VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8_il2cpp_TypeInfo_var));
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_000f:
	{
		NullCheck(G_B2_0);
		VRRManager_OnRefreshRateChanged_mFD31A4012CBF088031187EBD0377B23A1590619F(G_B2_0, NULL);
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
void VariableRefreshRateEventHandler_Invoke_mA665080591D6EA72C7EC12CFC0CAFAC8E5FF37EC_Multicast(VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* currentDelegate = reinterpret_cast<VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void VariableRefreshRateEventHandler_Invoke_mA665080591D6EA72C7EC12CFC0CAFAC8E5FF37EC_Open(VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void VariableRefreshRateEventHandler_Invoke_mA665080591D6EA72C7EC12CFC0CAFAC8E5FF37EC_OpenStaticInvoker(VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void VariableRefreshRateEventHandler_Invoke_mA665080591D6EA72C7EC12CFC0CAFAC8E5FF37EC_ClosedStaticInvoker(VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95 (VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableRefreshRateEventHandler__ctor_m7A50456A08A0FDE7002210349CE4F2D9BF73EBF7 (VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&VariableRefreshRateEventHandler_Invoke_mA665080591D6EA72C7EC12CFC0CAFAC8E5FF37EC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&VariableRefreshRateEventHandler_Invoke_mA665080591D6EA72C7EC12CFC0CAFAC8E5FF37EC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&VariableRefreshRateEventHandler_Invoke_mA665080591D6EA72C7EC12CFC0CAFAC8E5FF37EC_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&VariableRefreshRateEventHandler_Invoke_mA665080591D6EA72C7EC12CFC0CAFAC8E5FF37EC_Multicast;
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableRefreshRateEventHandler_Invoke_mA665080591D6EA72C7EC12CFC0CAFAC8E5FF37EC (VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VariableRefreshRateEventHandler_BeginInvoke_m96B39CC25E1EA9D1C5BD5CD00D817CFBDC29C5A4 (VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableRefreshRateEventHandler_EndInvoke_mA9620AD3877A7CAF092C68D0A97BFE556627B348 (VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRate::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VariableRefreshRate_get_Instance_mB72B4AF9C0C464513D27FCD7D81C5AB089675BB9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public IVariableRefreshRate Instance { get; set; }
		RuntimeObject* L_0 = ((VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_StaticFields*)il2cpp_codegen_static_fields_for(VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRate::set_Instance(UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableRefreshRate_set_Instance_mF83BCC9BEA5164D10F5BAF3A5856AFF6C352A7CC (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public IVariableRefreshRate Instance { get; set; }
		RuntimeObject* L_0 = ___value0;
		((VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_StaticFields*)il2cpp_codegen_static_fields_for(VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_StaticFields*)il2cpp_codegen_static_fields_for(VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VariableRefreshRate_get_Instance_mB72B4AF9C0C464513D27FCD7D81C5AB089675BB9_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public IVariableRefreshRate Instance { get; set; }
		RuntimeObject* L_0 = ((VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_StaticFields*)il2cpp_codegen_static_fields_for(VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SubsystemWithProvider_get_running_m6BF31FC3BDA38C56C0F60FEA37767A4151B22C44_inline (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CrunningU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* SamsungAndroidProviderSettings_GetSettings_mAFADC8F0A6AE54BE4D54AEC67D91019DE82F24C2_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// settings = s_RuntimeInstance;
		SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* L_0 = ((SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_StaticFields*)il2cpp_codegen_static_fields_for(SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_il2cpp_TypeInfo_var))->___s_RuntimeInstance_15;
		// return settings;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SamsungAndroidProviderSettings_get_samsungProviderLogging_mE70D42A6A1439E3DB2406B298C2AF4F30811DA9C_inline (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_SamsungProviderLogging; }
		bool L_0 = __this->___m_SamsungProviderLogging_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m77027979E9BA297A2803C6EA7691881619C35F91_inline (Cinfo_t016018D78B642CAAA7B595015B8AF98E5F1008DB* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_mE7F2A87EA82917E26391F16464ADF35CA8A8CD19_inline (Cinfo_t016018D78B642CAAA7B595015B8AF98E5F1008DB* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CproviderTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mE90E2B1A438FE40025C78836845E76876630DC34_inline (Cinfo_t016018D78B642CAAA7B595015B8AF98E5F1008DB* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystemProvider_set_MaxCpuPerformanceLevel_m77AD95FA570B1CBD1CAAD4AB0DF5FFD957520B6E_inline (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int MaxCpuPerformanceLevel { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CMaxCpuPerformanceLevelU3Ek__BackingField_14 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystemProvider_set_MaxGpuPerformanceLevel_m8D0BF330EAA2BE477A2E8A1902D51E75D4286E6B_inline (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int MaxGpuPerformanceLevel { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CMaxGpuPerformanceLevelU3Ek__BackingField_15 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, const RuntimeMethod* method) 
{
	{
		// public Feature ChangeFlags { get; set; }
		int32_t L_0 = __this->___U3CChangeFlagsU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public Feature ChangeFlags { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CChangeFlagsU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_WarningLevel_mBC3853B7D0AA1412C41DFD248FA9E7252DAEB5F4_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public WarningLevel WarningLevel { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CWarningLevelU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_CpuPerformanceLevel_m8BBB7FA33AF2644ED0DE81CD58CCB07C5F71ED03_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int CpuPerformanceLevel { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CCpuPerformanceLevelU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_GpuPerformanceLevel_mBA26ABE3F6089BA232022D7F0F38B55B8FA9481A_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int GpuPerformanceLevel { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CGpuPerformanceLevelU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_CpuPerformanceBoost_mD8BF1CE74A03B57E81DBCD9A3DDE8DAA27968FF5_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool CpuPerformanceBoost { get; set; }
		bool L_0 = ___value0;
		__this->___U3CCpuPerformanceBoostU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_GpuPerformanceBoost_m0A5764E94B8EC621A0AA51B2F7C24BA1EAF844B9_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool GpuPerformanceBoost { get; set; }
		bool L_0 = ___value0;
		__this->___U3CGpuPerformanceBoostU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_TemperatureLevel_mFC2BC8E019EFB0E7611C242D1F5D4EAB76570BB5_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float TemperatureLevel { get; set; }
		float L_0 = ___value0;
		__this->___U3CTemperatureLevelU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SamsungGameSDKAdaptivePerformanceSubsystemProvider_get_MaxCpuPerformanceLevel_mA6075DC4801259ADF90CB1964AAD7F225091CB25_inline (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) 
{
	{
		// public int MaxCpuPerformanceLevel { get; set; }
		int32_t L_0 = __this->___U3CMaxCpuPerformanceLevelU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SamsungGameSDKAdaptivePerformanceSubsystemProvider_get_MaxGpuPerformanceLevel_mF83EA2F569E79E69EAD7E8A7C3A739A4EAD3AAE1_inline (SamsungGameSDKAdaptivePerformanceSubsystemProvider_t1E248DEEB85E22FCB0F194AB93F4D2BA5D3DD545* __this, const RuntimeMethod* method) 
{
	{
		// public int MaxGpuPerformanceLevel { get; set; }
		int32_t L_0 = __this->___U3CMaxGpuPerformanceLevelU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_PerformanceLevelControlAvailable_m78A1EFC49C88D90E778F7C4C8605662E94B125FF_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool PerformanceLevelControlAvailable { get; set; }
		bool L_0 = ___value0;
		__this->___U3CPerformanceLevelControlAvailableU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableRefreshRate_set_Instance_mF83BCC9BEA5164D10F5BAF3A5856AFF6C352A7CC_inline (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public IVariableRefreshRate Instance { get; set; }
		RuntimeObject* L_0 = ___value0;
		((VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_StaticFields*)il2cpp_codegen_static_fields_for(VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_StaticFields*)il2cpp_codegen_static_fields_for(VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClusterInfo_set_BigCore_m6773CE3416C5DDE25B397D398D60253CA4A913A0_inline (ClusterInfo_tE84F530B1972D0F8712CD136B14D4C4136B0BA15* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int BigCore { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CBigCoreU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClusterInfo_set_MediumCore_mC984A40803648B368E8E998F82E7C89D9E24E126_inline (ClusterInfo_tE84F530B1972D0F8712CD136B14D4C4136B0BA15* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int MediumCore { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CMediumCoreU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClusterInfo_set_LittleCore_m2B02B46BBEA719EFBDD955DF419EAAC81E69C7AB_inline (ClusterInfo_tE84F530B1972D0F8712CD136B14D4C4136B0BA15* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int LittleCore { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CLittleCoreU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_ClusterInfo_m70A3B30678BE28E09161ADF030CBAFE8D5BC9E3E_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, ClusterInfo_tE84F530B1972D0F8712CD136B14D4C4136B0BA15 ___value0, const RuntimeMethod* method) 
{
	{
		// public ClusterInfo ClusterInfo { get; set; }
		ClusterInfo_tE84F530B1972D0F8712CD136B14D4C4136B0BA15 L_0 = ___value0;
		__this->___U3CClusterInfoU3Ek__BackingField_12 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SamsungAndroidProviderSettings_get_automaticVRR_mA4EC43A6755953623F7A5F1B3C365A3A9CE25C3B_inline (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_AutomaticVRR; }
		bool L_0 = __this->___m_AutomaticVRR_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_GpuFrameTime_mB779C484C185DB05F985A295EA7242EB8DA37299_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float GpuFrameTime { get; set; }
		float L_0 = ___value0;
		__this->___U3CGpuFrameTimeU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PerformanceDataRecord_get_CpuPerformanceLevel_mF688EC621C77916A86F96CF7D0DAFD520B6D68E8_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, const RuntimeMethod* method) 
{
	{
		// public int CpuPerformanceLevel { get; set; }
		int32_t L_0 = __this->___U3CCpuPerformanceLevelU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PerformanceDataRecord_get_GpuPerformanceLevel_mA928B60EF914AB4E7D95291E1357A3FE795DBE23_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, const RuntimeMethod* method) 
{
	{
		// public int GpuPerformanceLevel { get; set; }
		int32_t L_0 = __this->___U3CGpuPerformanceLevelU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PerformanceDataRecord_get_CpuPerformanceBoost_m55A78568F8E19144717C3CEC17CE90FA766591D2_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, const RuntimeMethod* method) 
{
	{
		// public bool CpuPerformanceBoost { get; set; }
		bool L_0 = __this->___U3CCpuPerformanceBoostU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PerformanceDataRecord_get_GpuPerformanceBoost_mFD01BBFC9A9BE53ED81947089A02691635789B7E_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, const RuntimeMethod* method) 
{
	{
		// public bool GpuPerformanceBoost { get; set; }
		bool L_0 = __this->___U3CGpuPerformanceBoostU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SamsungAndroidProviderSettings_get_highSpeedVRR_mF7D7A276D6AC87D624429E128A5B36155ABCE4A1_inline (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_HighSpeedVRR; }
		bool L_0 = __this->___m_HighSpeedVRR_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableRefreshRateEventHandler_Invoke_mA665080591D6EA72C7EC12CFC0CAFAC8E5FF37EC_inline (VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SamsungAndroidProviderSettings_set_automaticVRR_m10FAA3C18EF7EF58166BB3D9A572B5D249584639_inline (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_AutomaticVRR = value; }
		bool L_0 = ___value0;
		__this->___m_AutomaticVRR_14 = L_0;
		// set { m_AutomaticVRR = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* VRRManager_get_SupportedRefreshRates_mB0E31383F75832592FC2DB967948C05534E4A1AF_inline (VRRManager_t1264080E556DD22042839272DB31D8BFF53A0AF8* __this, const RuntimeMethod* method) 
{
	{
		// public int[] SupportedRefreshRates { get { return m_SupportedRefreshRates; } }
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___m_SupportedRefreshRates_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
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
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_gshared_inline (AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* __this, const RuntimeMethod* method) 
{
	{
		// public T value { get; private set; }
		double L_0 = (double)__this->___U3CvalueU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_gshared_inline (Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B* __this, int32_t ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___item0;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
