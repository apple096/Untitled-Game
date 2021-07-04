#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Stack`1<Pathfinding.Path>>
struct Dictionary_2_t253D50DC0EE6FC08EEE5130FF02303EF92688438;
// System.Collections.Generic.Dictionary`2<System.Type,System.Int32>
struct Dictionary_2_t6CE7336785D73EB9AC6DBFDBCB55D4CF15047CB7;
// System.Collections.Generic.Dictionary`2<System.UInt64,Pathfinding.GraphModifier>
struct Dictionary_2_t03F4DD9957703A38E34DAD34D8EDCF5C71D197DA;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD;
// System.Func`2<Pathfinding.Connection,System.Boolean>
struct Func_2_t12A684E31209EBE9CC8B5B4A20EE11EE7E9125D8;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.Int64>
struct Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<System.Object,System.UInt32>
struct Func_2_tC3246CBAFBB962E2C6075141A9B6BFC365266428;
// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
struct Getter_2_t81181C5D3C83EE61FFA30B3479BF4F9FC6ECBBDB;
// System.Collections.Generic.IEnumerable`1<Pathfinding.Connection>
struct IEnumerable_1_t915D6115ACACBD1BE365EB2C026829C53CFAA0FD;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerator`1<Pathfinding.Connection>
struct IEnumerator_1_tE484A184502AE69B83BF3216E6E0413EA6C58D44;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1A386BEF1855064FD5CC71F340A68881A52B4932;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t7EEC9B4006D6D425748908D52AA799197F29A165;
// System.Linq.IOrderedEnumerable`1<System.Object>
struct IOrderedEnumerable_1_tB9F2319177B9E63FFCBB89F9E57F8529A97CC77B;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.Stack`1<Pathfinding.Path>>
struct KeyCollection_tFFE71495234DD4EBA359235B09BD26922C4FC8B9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Int32>
struct KeyCollection_t9B363F655BBBD17597CDC111E892E9F11F1964C4;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5;
// System.Collections.Generic.List`1<Pathfinding.Connection>
struct List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415;
// System.Collections.Generic.List`1<Pathfinding.GraphNode>
struct List_1_t595A305572F661DD70A982373D01036D7970824F;
// System.Collections.Generic.List`1<Pathfinding.Int3>
struct List_1_tFE64456C0A7009756022233F6A62DD908233A250;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA;
// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.List`1<Pathfinding.Funnel/PathPart>
struct List_1_t3266DC211C10C02679DF7A782E145C888C6176D9;
// System.Collections.Generic.List`1<UnityEngine.MeshSubsetCombineUtility/SubMeshInstance>
struct List_1_tAE24AB92F8203073F34FFCC54D01A4BCE246465B;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981;
// System.Collections.Generic.Stack`1<Pathfinding.Path>
struct Stack_1_tD6ADE73B94BEEF9FA151886F9D2C77392198A8B8;
// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct StaticGetter_1_t34703320355FB45822699F7FF6C0BC577E0DDA01;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.Stack`1<Pathfinding.Path>>
struct ValueCollection_tB113A8C494B338C5CFA8B2EBF479A1450EA72CE3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Int32>
struct ValueCollection_t6CE5543DC87DFEFF0BC9A8CC6C06B36E7D629CEA;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.Stack`1<Pathfinding.Path>>[]
struct EntryU5BU5D_t93A98077913DF5902D96F7E781940350D8F4A40B;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Int32>[]
struct EntryU5BU5D_t03137B152B537C1A2A440AF6E9BAB70B12F25FE9;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
// Pathfinding.Connection[]
struct ConnectionU5BU5D_t946DE1BF1E4E05FF8695E89F55505806D050AB5D;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Pathfinding.Int3[]
struct Int3U5BU5D_t5636664EBC03F266F8E8C7C74D4C7481109C4379;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Object[]
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873;
// Pathfinding.Path[]
struct PathU5BU5D_t8285A9566EE7765129CA5FB352661BF50A780AC0;
// Pathfinding.PointNode[]
struct PointNodeU5BU5D_tF9C5ED2DCDDA4D1868F2CE616C5748A1846961C6;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// Pathfinding.Funnel/PathPart[]
struct PathPartU5BU5D_tD46C1032482617386A3A49979A4A46B3E18BBAFC;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// AstarPath
struct AstarPath_tAA71ED121384376E88F7ED29580E23A7B4063CBA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Pathfinding.GraphNode
struct GraphNode_t5AE5B598437EAB21EE8089C9BB31651680B24505;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Pathfinding.ITraversalProvider
struct ITraversalProvider_tC1FE1CBCED89B2B83221FEBC90DC1D719F520BF3;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MonoTypeInfo
struct MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79;
// Pathfinding.NNConstraint
struct NNConstraint_tE3DA220E07B2C79E784789762C68A252D30D12A0;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Pathfinding.OnPathDelegate
struct OnPathDelegate_t824E79FFEB44F4E6F741465A50AB35F00FBCC687;
// Pathfinding.Path
struct Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7;
// Pathfinding.PathHandler
struct PathHandler_tED4DEF6D91FE97D38F1BEC4265F79E310F2C5DBF;
// Pathfinding.PathNode
struct PathNode_t43E01D5D5BB359AF635866FA5BBF4D5453B879B1;
// Pathfinding.PointGraph
struct PointGraph_t331222A85E3E7A36C2455C0F461DD57EAB864B8E;
// Pathfinding.PointNode
struct PointNode_tF9D54771A269730EC0E0BEC46F3F361B817EF222;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// System.Reflection.RuntimeConstructorInfo
struct RuntimeConstructorInfo_t9B65F4BAA154E6B8888A68FA9BA02993090876BB;
// System.RuntimeType
struct RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t4638094A6814F5738CB2D77994423EEBAB6F342A;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphModifier_t3DD71426410B9F14077B110BB8DFAC8C83B72F9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPathInternals_t32CCCA7F7986E390B2DB49892E56B5D6D71C35A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PathPool_t8FD152A71709D0BBB4826431E2CBA14A6EDC6398_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointNodeU5BU5D_tF9C5ED2DCDDA4D1868F2CE616C5748A1846961C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0FDD716E74C52D972A9997C1B342B1A650D1D139;
IL2CPP_EXTERN_C String_t* _stringLiteral12D34C4D5361DBE1804B6F49EDED3C800B442095;
IL2CPP_EXTERN_C String_t* _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5;
IL2CPP_EXTERN_C String_t* _stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628;
IL2CPP_EXTERN_C String_t* _stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03;
IL2CPP_EXTERN_C String_t* _stringLiteralA3C5D219B15338D87684A3DB22B945597AD4BD46;
IL2CPP_EXTERN_C String_t* _stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775;
IL2CPP_EXTERN_C String_t* _stringLiteralE958A63C0675D65C92182FC45CE3E78A8DD48061;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m74C828B5DCF04ED785A7E51ED731256B988ACA3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m29507C3863A4A7CFA2E6056009ED2E21C7AA636F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m5DC830FD33B88605B2AA1FEC7DE1A432315F3466_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m48622C461B49F93ED769FD774561C5DD6CFF7339_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ThenBy_TisRuntimeObject_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mC7FD4D2CB4D97DAD6DFF1EFA91D15FFE41F3AFC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ThenBy_TisRuntimeObject_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_mC0423406F04EBEA559B8F8A325A511592A2B668A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ThenBy_TisRuntimeObject_TisRuntimeObject_m2279EF05F58E64223C7F035666211E2BC45274A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ThenBy_TisRuntimeObject_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m278DE85CD4637FC5BC5897059235A51D0D43319F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisRuntimeObject_mEB06425105813A21FC826C4144F8456EAE2304DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToDictionary_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mCC85F7110F6E48C86573AE7A20E1073697D0FC6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisConnection_tD2B630AE1AEC23473343F09B8848EE83DF457A21_m5B320B3E843618A608341E15BA43F1EE9A852130_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisRuntimeObject_m3AB0AB30DAC385C2DF8A16D5CB8D3D41F62C751F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisConnection_tD2B630AE1AEC23473343F09B8848EE83DF457A21_m9561CFD60F8325D319FC3864BBD313F21579E214_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisRuntimeObject_mD8AE6780E78249FC87B2344E09D130624E70D7DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LazyInitializer_EnsureInitializedCore_TisRuntimeObject_mC468F357800B4B6457ADD417CB364875AE5F30A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_mD91654279F4ECE4BB0BA5638D9ACD9D8479B82B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mB0D6330490ABCF049B6B9C0C63861BD2C3C9970D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_mD292C55EEBE1CEAE6783505A3CF56728089B215B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromCancellation_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m3C15186841F33612A68B89A44894D0B59E6CA158_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromCancellation_TisRuntimeObject_mDCFCAA9748F69C3D41CF86D2BC21A7EA08ABB314_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
struct ConnectionU5BU5D_t946DE1BF1E4E05FF8695E89F55505806D050AB5D;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873;
struct PointNodeU5BU5D_tF9C5ED2DCDDA4D1868F2CE616C5748A1846961C6;
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___entries_1)); }
	inline EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___keys_7)); }
	inline KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___values_8)); }
	inline ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Stack`1<Pathfinding.Path>>
struct Dictionary_2_t253D50DC0EE6FC08EEE5130FF02303EF92688438  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t93A98077913DF5902D96F7E781940350D8F4A40B* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tFFE71495234DD4EBA359235B09BD26922C4FC8B9 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB113A8C494B338C5CFA8B2EBF479A1450EA72CE3 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t253D50DC0EE6FC08EEE5130FF02303EF92688438, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t253D50DC0EE6FC08EEE5130FF02303EF92688438, ___entries_1)); }
	inline EntryU5BU5D_t93A98077913DF5902D96F7E781940350D8F4A40B* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t93A98077913DF5902D96F7E781940350D8F4A40B** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t93A98077913DF5902D96F7E781940350D8F4A40B* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t253D50DC0EE6FC08EEE5130FF02303EF92688438, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t253D50DC0EE6FC08EEE5130FF02303EF92688438, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t253D50DC0EE6FC08EEE5130FF02303EF92688438, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t253D50DC0EE6FC08EEE5130FF02303EF92688438, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t253D50DC0EE6FC08EEE5130FF02303EF92688438, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t253D50DC0EE6FC08EEE5130FF02303EF92688438, ___keys_7)); }
	inline KeyCollection_tFFE71495234DD4EBA359235B09BD26922C4FC8B9 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tFFE71495234DD4EBA359235B09BD26922C4FC8B9 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tFFE71495234DD4EBA359235B09BD26922C4FC8B9 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t253D50DC0EE6FC08EEE5130FF02303EF92688438, ___values_8)); }
	inline ValueCollection_tB113A8C494B338C5CFA8B2EBF479A1450EA72CE3 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB113A8C494B338C5CFA8B2EBF479A1450EA72CE3 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB113A8C494B338C5CFA8B2EBF479A1450EA72CE3 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t253D50DC0EE6FC08EEE5130FF02303EF92688438, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Int32>
struct Dictionary_2_t6CE7336785D73EB9AC6DBFDBCB55D4CF15047CB7  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t03137B152B537C1A2A440AF6E9BAB70B12F25FE9* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t9B363F655BBBD17597CDC111E892E9F11F1964C4 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t6CE5543DC87DFEFF0BC9A8CC6C06B36E7D629CEA * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t6CE7336785D73EB9AC6DBFDBCB55D4CF15047CB7, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t6CE7336785D73EB9AC6DBFDBCB55D4CF15047CB7, ___entries_1)); }
	inline EntryU5BU5D_t03137B152B537C1A2A440AF6E9BAB70B12F25FE9* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t03137B152B537C1A2A440AF6E9BAB70B12F25FE9** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t03137B152B537C1A2A440AF6E9BAB70B12F25FE9* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t6CE7336785D73EB9AC6DBFDBCB55D4CF15047CB7, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t6CE7336785D73EB9AC6DBFDBCB55D4CF15047CB7, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t6CE7336785D73EB9AC6DBFDBCB55D4CF15047CB7, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t6CE7336785D73EB9AC6DBFDBCB55D4CF15047CB7, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t6CE7336785D73EB9AC6DBFDBCB55D4CF15047CB7, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t6CE7336785D73EB9AC6DBFDBCB55D4CF15047CB7, ___keys_7)); }
	inline KeyCollection_t9B363F655BBBD17597CDC111E892E9F11F1964C4 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t9B363F655BBBD17597CDC111E892E9F11F1964C4 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t9B363F655BBBD17597CDC111E892E9F11F1964C4 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t6CE7336785D73EB9AC6DBFDBCB55D4CF15047CB7, ___values_8)); }
	inline ValueCollection_t6CE5543DC87DFEFF0BC9A8CC6C06B36E7D629CEA * get_values_8() const { return ___values_8; }
	inline ValueCollection_t6CE5543DC87DFEFF0BC9A8CC6C06B36E7D629CEA ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t6CE5543DC87DFEFF0BC9A8CC6C06B36E7D629CEA * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t6CE7336785D73EB9AC6DBFDBCB55D4CF15047CB7, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	RuntimeObject * ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___current_2)); }
	inline RuntimeObject * get_current_2() const { return ___current_2; }
	inline RuntimeObject ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(RuntimeObject * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_2), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5, ____items_1)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get__items_1() const { return ____items_1; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5_StaticFields, ____emptyArray_5)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Pathfinding.Connection>
struct List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ConnectionU5BU5D_t946DE1BF1E4E05FF8695E89F55505806D050AB5D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415, ____items_1)); }
	inline ConnectionU5BU5D_t946DE1BF1E4E05FF8695E89F55505806D050AB5D* get__items_1() const { return ____items_1; }
	inline ConnectionU5BU5D_t946DE1BF1E4E05FF8695E89F55505806D050AB5D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ConnectionU5BU5D_t946DE1BF1E4E05FF8695E89F55505806D050AB5D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ConnectionU5BU5D_t946DE1BF1E4E05FF8695E89F55505806D050AB5D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415_StaticFields, ____emptyArray_5)); }
	inline ConnectionU5BU5D_t946DE1BF1E4E05FF8695E89F55505806D050AB5D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ConnectionU5BU5D_t946DE1BF1E4E05FF8695E89F55505806D050AB5D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ConnectionU5BU5D_t946DE1BF1E4E05FF8695E89F55505806D050AB5D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Pathfinding.Int3>
struct List_1_tFE64456C0A7009756022233F6A62DD908233A250  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int3U5BU5D_t5636664EBC03F266F8E8C7C74D4C7481109C4379* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFE64456C0A7009756022233F6A62DD908233A250, ____items_1)); }
	inline Int3U5BU5D_t5636664EBC03F266F8E8C7C74D4C7481109C4379* get__items_1() const { return ____items_1; }
	inline Int3U5BU5D_t5636664EBC03F266F8E8C7C74D4C7481109C4379** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int3U5BU5D_t5636664EBC03F266F8E8C7C74D4C7481109C4379* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFE64456C0A7009756022233F6A62DD908233A250, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFE64456C0A7009756022233F6A62DD908233A250, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFE64456C0A7009756022233F6A62DD908233A250, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFE64456C0A7009756022233F6A62DD908233A250_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int3U5BU5D_t5636664EBC03F266F8E8C7C74D4C7481109C4379* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFE64456C0A7009756022233F6A62DD908233A250_StaticFields, ____emptyArray_5)); }
	inline Int3U5BU5D_t5636664EBC03F266F8E8C7C74D4C7481109C4379* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int3U5BU5D_t5636664EBC03F266F8E8C7C74D4C7481109C4379** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int3U5BU5D_t5636664EBC03F266F8E8C7C74D4C7481109C4379* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
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


// System.Collections.Generic.List`1<System.Single>
struct List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____items_1)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get__items_1() const { return ____items_1; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_StaticFields, ____emptyArray_5)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731, ____items_1)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get__items_1() const { return ____items_1; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731_StaticFields, ____emptyArray_5)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____items_1)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get__items_1() const { return ____items_1; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_StaticFields, ____emptyArray_5)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
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


// System.Collections.Generic.List`1<Pathfinding.Funnel/PathPart>
struct List_1_t3266DC211C10C02679DF7A782E145C888C6176D9  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PathPartU5BU5D_tD46C1032482617386A3A49979A4A46B3E18BBAFC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3266DC211C10C02679DF7A782E145C888C6176D9, ____items_1)); }
	inline PathPartU5BU5D_tD46C1032482617386A3A49979A4A46B3E18BBAFC* get__items_1() const { return ____items_1; }
	inline PathPartU5BU5D_tD46C1032482617386A3A49979A4A46B3E18BBAFC** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PathPartU5BU5D_tD46C1032482617386A3A49979A4A46B3E18BBAFC* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3266DC211C10C02679DF7A782E145C888C6176D9, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3266DC211C10C02679DF7A782E145C888C6176D9, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3266DC211C10C02679DF7A782E145C888C6176D9, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3266DC211C10C02679DF7A782E145C888C6176D9_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PathPartU5BU5D_tD46C1032482617386A3A49979A4A46B3E18BBAFC* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3266DC211C10C02679DF7A782E145C888C6176D9_StaticFields, ____emptyArray_5)); }
	inline PathPartU5BU5D_tD46C1032482617386A3A49979A4A46B3E18BBAFC* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PathPartU5BU5D_tD46C1032482617386A3A49979A4A46B3E18BBAFC** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PathPartU5BU5D_tD46C1032482617386A3A49979A4A46B3E18BBAFC* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<Pathfinding.Path>
struct Stack_1_tD6ADE73B94BEEF9FA151886F9D2C77392198A8B8  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	PathU5BU5D_t8285A9566EE7765129CA5FB352661BF50A780AC0* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_tD6ADE73B94BEEF9FA151886F9D2C77392198A8B8, ____array_0)); }
	inline PathU5BU5D_t8285A9566EE7765129CA5FB352661BF50A780AC0* get__array_0() const { return ____array_0; }
	inline PathU5BU5D_t8285A9566EE7765129CA5FB352661BF50A780AC0** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(PathU5BU5D_t8285A9566EE7765129CA5FB352661BF50A780AC0* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_tD6ADE73B94BEEF9FA151886F9D2C77392198A8B8, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_tD6ADE73B94BEEF9FA151886F9D2C77392198A8B8, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_tD6ADE73B94BEEF9FA151886F9D2C77392198A8B8, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	RuntimeObject * ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1, ___m_Item2_1)); }
	inline RuntimeObject * get_m_Item2_1() const { return ___m_Item2_1; }
	inline RuntimeObject ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(RuntimeObject * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item2_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Linq.Enumerable
struct Enumerable_t928C505614FDD67F6D61FB58BED73235DF569B0E  : public RuntimeObject
{
public:

public:
};


// System.Threading.Interlocked
struct Interlocked_t84BB23BED1AFE2EBBCBDD070F241EA497C68FB64  : public RuntimeObject
{
public:

public:
};


// System.Runtime.CompilerServices.JitHelpers
struct JitHelpers_t6DC124FF04E77C7EDE891400F7F01460DB8807E9  : public RuntimeObject
{
public:

public:
};


// System.Threading.LazyInitializer
struct LazyInitializer_t68D740FE95C1E311CA598F6427FAFBF1F6EA9A3E  : public RuntimeObject
{
public:

public:
};


// Pathfinding.Util.ListExtensions
struct ListExtensions_t8051CC77509CB4D01F2CDDC5ABDC96ACA79D3C8A  : public RuntimeObject
{
public:

public:
};


// System.Runtime.InteropServices.Marshal
struct Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058  : public RuntimeObject
{
public:

public:
};

struct Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_StaticFields
{
public:
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemMaxDBCSCharSize
	int32_t ___SystemMaxDBCSCharSize_0;
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemDefaultCharSize
	int32_t ___SystemDefaultCharSize_1;

public:
	inline static int32_t get_offset_of_SystemMaxDBCSCharSize_0() { return static_cast<int32_t>(offsetof(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_StaticFields, ___SystemMaxDBCSCharSize_0)); }
	inline int32_t get_SystemMaxDBCSCharSize_0() const { return ___SystemMaxDBCSCharSize_0; }
	inline int32_t* get_address_of_SystemMaxDBCSCharSize_0() { return &___SystemMaxDBCSCharSize_0; }
	inline void set_SystemMaxDBCSCharSize_0(int32_t value)
	{
		___SystemMaxDBCSCharSize_0 = value;
	}

	inline static int32_t get_offset_of_SystemDefaultCharSize_1() { return static_cast<int32_t>(offsetof(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_StaticFields, ___SystemDefaultCharSize_1)); }
	inline int32_t get_SystemDefaultCharSize_1() const { return ___SystemDefaultCharSize_1; }
	inline int32_t* get_address_of_SystemDefaultCharSize_1() { return &___SystemDefaultCharSize_1; }
	inline void set_SystemDefaultCharSize_1(int32_t value)
	{
		___SystemDefaultCharSize_1 = value;
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Pathfinding.Util.Memory
struct Memory_t31EEFA75877B087B38DE919BA1BB61F65BA512AB  : public RuntimeObject
{
public:

public:
};


// Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility
struct NativeArrayUnsafeUtility_tABFEC25CB8DB147F19348E853EE24669F9682C83  : public RuntimeObject
{
public:

public:
};


// UnityEngine.NoAllocHelpers
struct NoAllocHelpers_tDF63D8493CAD8DE137A5560CDAF336DA0A99D0D1  : public RuntimeObject
{
public:

public:
};


// Pathfinding.PathPool
struct PathPool_t8FD152A71709D0BBB4826431E2CBA14A6EDC6398  : public RuntimeObject
{
public:

public:
};

struct PathPool_t8FD152A71709D0BBB4826431E2CBA14A6EDC6398_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Stack`1<Pathfinding.Path>> Pathfinding.PathPool::pool
	Dictionary_2_t253D50DC0EE6FC08EEE5130FF02303EF92688438 * ___pool_0;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Int32> Pathfinding.PathPool::totalCreated
	Dictionary_2_t6CE7336785D73EB9AC6DBFDBCB55D4CF15047CB7 * ___totalCreated_1;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(PathPool_t8FD152A71709D0BBB4826431E2CBA14A6EDC6398_StaticFields, ___pool_0)); }
	inline Dictionary_2_t253D50DC0EE6FC08EEE5130FF02303EF92688438 * get_pool_0() const { return ___pool_0; }
	inline Dictionary_2_t253D50DC0EE6FC08EEE5130FF02303EF92688438 ** get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(Dictionary_2_t253D50DC0EE6FC08EEE5130FF02303EF92688438 * value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pool_0), (void*)value);
	}

	inline static int32_t get_offset_of_totalCreated_1() { return static_cast<int32_t>(offsetof(PathPool_t8FD152A71709D0BBB4826431E2CBA14A6EDC6398_StaticFields, ___totalCreated_1)); }
	inline Dictionary_2_t6CE7336785D73EB9AC6DBFDBCB55D4CF15047CB7 * get_totalCreated_1() const { return ___totalCreated_1; }
	inline Dictionary_2_t6CE7336785D73EB9AC6DBFDBCB55D4CF15047CB7 ** get_address_of_totalCreated_1() { return &___totalCreated_1; }
	inline void set_totalCreated_1(Dictionary_2_t6CE7336785D73EB9AC6DBFDBCB55D4CF15047CB7 * value)
	{
		___totalCreated_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___totalCreated_1), (void*)value);
	}
};


// UnityEngine.Resources
struct Resources_t90EC380141241F7E4B284EC353EF4F0386218419  : public RuntimeObject
{
public:

public:
};


// System.Runtime.CompilerServices.RuntimeHelpers
struct RuntimeHelpers_tC052103DB62650080244B150AC8C2DDC5C0CD8AB  : public RuntimeObject
{
public:

public:
};


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


// System.ThrowHelper
struct ThrowHelper_t396052A7B504E698E9DF1B91F7A52F4D2EA47246  : public RuntimeObject
{
public:

public:
};


// System.Tuple
struct Tuple_t04ED51FC9876E74A8E2D69E20EC4D89DAF554A9F  : public RuntimeObject
{
public:

public:
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility
struct UnsafeUtility_tAA965823E05BE8ADD69F58C82BF0DF723476E551  : public RuntimeObject
{
public:

public:
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

// System.Threading.Volatile
struct Volatile_t7A8B2983396C4500A8FC226CDB66FE9067DA4AE6  : public RuntimeObject
{
public:

public:
};


// System.Linq.Buffer`1<System.Object>
struct Buffer_1_tB294332D6A9005ABB8E979A62BA34A1CB39C10A7 
{
public:
	// TElement[] System.Linq.Buffer`1::items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___items_0;
	// System.Int32 System.Linq.Buffer`1::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(Buffer_1_tB294332D6A9005ABB8E979A62BA34A1CB39C10A7, ___items_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_items_0() const { return ___items_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_0), (void*)value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Buffer_1_tB294332D6A9005ABB8E979A62BA34A1CB39C10A7, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereArrayIterator`1::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereArrayIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Int32 System.Linq.Enumerable/WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// UnityEngine.Rendering.BatchVisibility
struct BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE 
{
public:
	// System.Int32 UnityEngine.Rendering.BatchVisibility::offset
	int32_t ___offset_0;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::instancesCount
	int32_t ___instancesCount_1;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::visibleCount
	int32_t ___visibleCount_2;

public:
	inline static int32_t get_offset_of_offset_0() { return static_cast<int32_t>(offsetof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE, ___offset_0)); }
	inline int32_t get_offset_0() const { return ___offset_0; }
	inline int32_t* get_address_of_offset_0() { return &___offset_0; }
	inline void set_offset_0(int32_t value)
	{
		___offset_0 = value;
	}

	inline static int32_t get_offset_of_instancesCount_1() { return static_cast<int32_t>(offsetof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE, ___instancesCount_1)); }
	inline int32_t get_instancesCount_1() const { return ___instancesCount_1; }
	inline int32_t* get_address_of_instancesCount_1() { return &___instancesCount_1; }
	inline void set_instancesCount_1(int32_t value)
	{
		___instancesCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCount_2() { return static_cast<int32_t>(offsetof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE, ___visibleCount_2)); }
	inline int32_t get_visibleCount_2() const { return ___visibleCount_2; }
	inline int32_t* get_address_of_visibleCount_2() { return &___visibleCount_2; }
	inline void set_visibleCount_2(int32_t value)
	{
		___visibleCount_2 = value;
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
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


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
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
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// Pathfinding.Connection
struct Connection_tD2B630AE1AEC23473343F09B8848EE83DF457A21 
{
public:
	// Pathfinding.GraphNode Pathfinding.Connection::node
	GraphNode_t5AE5B598437EAB21EE8089C9BB31651680B24505 * ___node_0;
	// System.UInt32 Pathfinding.Connection::cost
	uint32_t ___cost_1;
	// System.Byte Pathfinding.Connection::shapeEdge
	uint8_t ___shapeEdge_2;

public:
	inline static int32_t get_offset_of_node_0() { return static_cast<int32_t>(offsetof(Connection_tD2B630AE1AEC23473343F09B8848EE83DF457A21, ___node_0)); }
	inline GraphNode_t5AE5B598437EAB21EE8089C9BB31651680B24505 * get_node_0() const { return ___node_0; }
	inline GraphNode_t5AE5B598437EAB21EE8089C9BB31651680B24505 ** get_address_of_node_0() { return &___node_0; }
	inline void set_node_0(GraphNode_t5AE5B598437EAB21EE8089C9BB31651680B24505 * value)
	{
		___node_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___node_0), (void*)value);
	}

	inline static int32_t get_offset_of_cost_1() { return static_cast<int32_t>(offsetof(Connection_tD2B630AE1AEC23473343F09B8848EE83DF457A21, ___cost_1)); }
	inline uint32_t get_cost_1() const { return ___cost_1; }
	inline uint32_t* get_address_of_cost_1() { return &___cost_1; }
	inline void set_cost_1(uint32_t value)
	{
		___cost_1 = value;
	}

	inline static int32_t get_offset_of_shapeEdge_2() { return static_cast<int32_t>(offsetof(Connection_tD2B630AE1AEC23473343F09B8848EE83DF457A21, ___shapeEdge_2)); }
	inline uint8_t get_shapeEdge_2() const { return ___shapeEdge_2; }
	inline uint8_t* get_address_of_shapeEdge_2() { return &___shapeEdge_2; }
	inline void set_shapeEdge_2(uint8_t value)
	{
		___shapeEdge_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Pathfinding.Connection
struct Connection_tD2B630AE1AEC23473343F09B8848EE83DF457A21_marshaled_pinvoke
{
	GraphNode_t5AE5B598437EAB21EE8089C9BB31651680B24505 * ___node_0;
	uint32_t ___cost_1;
	uint8_t ___shapeEdge_2;
};
// Native definition for COM marshalling of Pathfinding.Connection
struct Connection_tD2B630AE1AEC23473343F09B8848EE83DF457A21_marshaled_com
{
	GraphNode_t5AE5B598437EAB21EE8089C9BB31651680B24505 * ___node_0;
	uint32_t ___cost_1;
	uint8_t ___shapeEdge_2;
};

// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
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

// Pathfinding.Util.Guid
struct Guid_t29470440A187F5227D4D850F2BFDED117FE2C05F 
{
public:
	// System.UInt64 Pathfinding.Util.Guid::_a
	uint64_t ____a_3;
	// System.UInt64 Pathfinding.Util.Guid::_b
	uint64_t ____b_4;

public:
	inline static int32_t get_offset_of__a_3() { return static_cast<int32_t>(offsetof(Guid_t29470440A187F5227D4D850F2BFDED117FE2C05F, ____a_3)); }
	inline uint64_t get__a_3() const { return ____a_3; }
	inline uint64_t* get_address_of__a_3() { return &____a_3; }
	inline void set__a_3(uint64_t value)
	{
		____a_3 = value;
	}

	inline static int32_t get_offset_of__b_4() { return static_cast<int32_t>(offsetof(Guid_t29470440A187F5227D4D850F2BFDED117FE2C05F, ____b_4)); }
	inline uint64_t get__b_4() const { return ____b_4; }
	inline uint64_t* get_address_of__b_4() { return &____b_4; }
	inline void set__b_4(uint64_t value)
	{
		____b_4 = value;
	}
};

struct Guid_t29470440A187F5227D4D850F2BFDED117FE2C05F_StaticFields
{
public:
	// Pathfinding.Util.Guid Pathfinding.Util.Guid::zero
	Guid_t29470440A187F5227D4D850F2BFDED117FE2C05F  ___zero_1;
	// System.String Pathfinding.Util.Guid::zeroString
	String_t* ___zeroString_2;
	// System.Random Pathfinding.Util.Guid::random
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___random_5;
	// System.Text.StringBuilder Pathfinding.Util.Guid::text
	StringBuilder_t * ___text_6;

public:
	inline static int32_t get_offset_of_zero_1() { return static_cast<int32_t>(offsetof(Guid_t29470440A187F5227D4D850F2BFDED117FE2C05F_StaticFields, ___zero_1)); }
	inline Guid_t29470440A187F5227D4D850F2BFDED117FE2C05F  get_zero_1() const { return ___zero_1; }
	inline Guid_t29470440A187F5227D4D850F2BFDED117FE2C05F * get_address_of_zero_1() { return &___zero_1; }
	inline void set_zero_1(Guid_t29470440A187F5227D4D850F2BFDED117FE2C05F  value)
	{
		___zero_1 = value;
	}

	inline static int32_t get_offset_of_zeroString_2() { return static_cast<int32_t>(offsetof(Guid_t29470440A187F5227D4D850F2BFDED117FE2C05F_StaticFields, ___zeroString_2)); }
	inline String_t* get_zeroString_2() const { return ___zeroString_2; }
	inline String_t** get_address_of_zeroString_2() { return &___zeroString_2; }
	inline void set_zeroString_2(String_t* value)
	{
		___zeroString_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___zeroString_2), (void*)value);
	}

	inline static int32_t get_offset_of_random_5() { return static_cast<int32_t>(offsetof(Guid_t29470440A187F5227D4D850F2BFDED117FE2C05F_StaticFields, ___random_5)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_random_5() const { return ___random_5; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_random_5() { return &___random_5; }
	inline void set_random_5(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___random_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___random_5), (void*)value);
	}

	inline static int32_t get_offset_of_text_6() { return static_cast<int32_t>(offsetof(Guid_t29470440A187F5227D4D850F2BFDED117FE2C05F_StaticFields, ___text_6)); }
	inline StringBuilder_t * get_text_6() const { return ___text_6; }
	inline StringBuilder_t ** get_address_of_text_6() { return &___text_6; }
	inline void set_text_6(StringBuilder_t * value)
	{
		___text_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_6), (void*)value);
	}
};


// Pathfinding.Int3
struct Int3_t2D1CEFEB4CE42AD8A3266E14F88533BF54BED72A 
{
public:
	// System.Int32 Pathfinding.Int3::x
	int32_t ___x_0;
	// System.Int32 Pathfinding.Int3::y
	int32_t ___y_1;
	// System.Int32 Pathfinding.Int3::z
	int32_t ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Int3_t2D1CEFEB4CE42AD8A3266E14F88533BF54BED72A, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Int3_t2D1CEFEB4CE42AD8A3266E14F88533BF54BED72A, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Int3_t2D1CEFEB4CE42AD8A3266E14F88533BF54BED72A, ___z_2)); }
	inline int32_t get_z_2() const { return ___z_2; }
	inline int32_t* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(int32_t value)
	{
		___z_2 = value;
	}
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


// UnityEngine.Experimental.GlobalIllumination.LinearColor
struct LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 
{
public:
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_red
	float ___m_red_0;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_green
	float ___m_green_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_blue
	float ___m_blue_2;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_intensity
	float ___m_intensity_3;

public:
	inline static int32_t get_offset_of_m_red_0() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_red_0)); }
	inline float get_m_red_0() const { return ___m_red_0; }
	inline float* get_address_of_m_red_0() { return &___m_red_0; }
	inline void set_m_red_0(float value)
	{
		___m_red_0 = value;
	}

	inline static int32_t get_offset_of_m_green_1() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_green_1)); }
	inline float get_m_green_1() const { return ___m_green_1; }
	inline float* get_address_of_m_green_1() { return &___m_green_1; }
	inline void set_m_green_1(float value)
	{
		___m_green_1 = value;
	}

	inline static int32_t get_offset_of_m_blue_2() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_blue_2)); }
	inline float get_m_blue_2() const { return ___m_blue_2; }
	inline float* get_address_of_m_blue_2() { return &___m_blue_2; }
	inline void set_m_blue_2(float value)
	{
		___m_blue_2 = value;
	}

	inline static int32_t get_offset_of_m_intensity_3() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_intensity_3)); }
	inline float get_m_intensity_3() const { return ___m_intensity_3; }
	inline float* get_address_of_m_intensity_3() { return &___m_intensity_3; }
	inline void set_m_intensity_3(float value)
	{
		___m_intensity_3 = value;
	}
};


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
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
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
public:

public:
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


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
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
	float ___x_0;
	// System.Single UnityEngine.Vector4::y
	float ___y_1;
	// System.Single UnityEngine.Vector4::z
	float ___z_2;
	// System.Single UnityEngine.Vector4::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_4;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_7;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_4)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_6() const { return ___positiveInfinityVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_6() { return &___positiveInfinityVector_6; }
	inline void set_positiveInfinityVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_6 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_7() const { return ___negativeInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_7() { return &___negativeInfinityVector_7; }
	inline void set_negativeInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_7 = value;
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


// UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2 
{
public:
	// System.Int32 UnityEngine.BeforeRenderHelper/OrderBlock::order
	int32_t ___order_0;
	// UnityEngine.Events.UnityAction UnityEngine.BeforeRenderHelper/OrderBlock::callback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___callback_1;

public:
	inline static int32_t get_offset_of_order_0() { return static_cast<int32_t>(offsetof(OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2, ___order_0)); }
	inline int32_t get_order_0() const { return ___order_0; }
	inline int32_t* get_address_of_order_0() { return &___order_0; }
	inline void set_order_0(int32_t value)
	{
		___order_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2, ___callback_1)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_callback_1() const { return ___callback_1; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshaled_pinvoke
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
// Native definition for COM marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshaled_com
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};

// Pathfinding.Util.RetainedGizmos/MeshWithHash
struct MeshWithHash_tDD6E138102909D123582D74F821742CA016BD538 
{
public:
	// System.UInt64 Pathfinding.Util.RetainedGizmos/MeshWithHash::hash
	uint64_t ___hash_0;
	// UnityEngine.Mesh Pathfinding.Util.RetainedGizmos/MeshWithHash::mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh_1;
	// System.Boolean Pathfinding.Util.RetainedGizmos/MeshWithHash::lines
	bool ___lines_2;

public:
	inline static int32_t get_offset_of_hash_0() { return static_cast<int32_t>(offsetof(MeshWithHash_tDD6E138102909D123582D74F821742CA016BD538, ___hash_0)); }
	inline uint64_t get_hash_0() const { return ___hash_0; }
	inline uint64_t* get_address_of_hash_0() { return &___hash_0; }
	inline void set_hash_0(uint64_t value)
	{
		___hash_0 = value;
	}

	inline static int32_t get_offset_of_mesh_1() { return static_cast<int32_t>(offsetof(MeshWithHash_tDD6E138102909D123582D74F821742CA016BD538, ___mesh_1)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_mesh_1() const { return ___mesh_1; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_mesh_1() { return &___mesh_1; }
	inline void set_mesh_1(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___mesh_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_1), (void*)value);
	}

	inline static int32_t get_offset_of_lines_2() { return static_cast<int32_t>(offsetof(MeshWithHash_tDD6E138102909D123582D74F821742CA016BD538, ___lines_2)); }
	inline bool get_lines_2() const { return ___lines_2; }
	inline bool* get_address_of_lines_2() { return &___lines_2; }
	inline void set_lines_2(bool value)
	{
		___lines_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Pathfinding.Util.RetainedGizmos/MeshWithHash
struct MeshWithHash_tDD6E138102909D123582D74F821742CA016BD538_marshaled_pinvoke
{
	uint64_t ___hash_0;
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh_1;
	int32_t ___lines_2;
};
// Native definition for COM marshalling of Pathfinding.Util.RetainedGizmos/MeshWithHash
struct MeshWithHash_tDD6E138102909D123582D74F821742CA016BD538_marshaled_com
{
	uint64_t ___hash_0;
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh_1;
	int32_t ___lines_2;
};

// UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 
{
public:
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateCallback
	SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateState
	RuntimeObject * ___m_DelagateState_1;
	// System.Threading.ManualResetEvent UnityEngine.UnitySynchronizationContext/WorkRequest::m_WaitHandle
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_WaitHandle_2;

public:
	inline static int32_t get_offset_of_m_DelagateCallback_0() { return static_cast<int32_t>(offsetof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393, ___m_DelagateCallback_0)); }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * get_m_DelagateCallback_0() const { return ___m_DelagateCallback_0; }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C ** get_address_of_m_DelagateCallback_0() { return &___m_DelagateCallback_0; }
	inline void set_m_DelagateCallback_0(SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * value)
	{
		___m_DelagateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelagateCallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DelagateState_1() { return static_cast<int32_t>(offsetof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393, ___m_DelagateState_1)); }
	inline RuntimeObject * get_m_DelagateState_1() const { return ___m_DelagateState_1; }
	inline RuntimeObject ** get_address_of_m_DelagateState_1() { return &___m_DelagateState_1; }
	inline void set_m_DelagateState_1(RuntimeObject * value)
	{
		___m_DelagateState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelagateState_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_WaitHandle_2() { return static_cast<int32_t>(offsetof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393, ___m_WaitHandle_2)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_m_WaitHandle_2() const { return ___m_WaitHandle_2; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_m_WaitHandle_2() { return &___m_WaitHandle_2; }
	inline void set_m_WaitHandle_2(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___m_WaitHandle_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitHandle_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_WaitHandle_2;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_WaitHandle_2;
};

// System.Collections.Generic.List`1/Enumerator<Pathfinding.Connection>
struct Enumerator_t9C4833CAEB36745A09DB267FAE8460B36027264E 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Connection_tD2B630AE1AEC23473343F09B8848EE83DF457A21  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t9C4833CAEB36745A09DB267FAE8460B36027264E, ___list_0)); }
	inline List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 * get_list_0() const { return ___list_0; }
	inline List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t9C4833CAEB36745A09DB267FAE8460B36027264E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t9C4833CAEB36745A09DB267FAE8460B36027264E, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t9C4833CAEB36745A09DB267FAE8460B36027264E, ___current_3)); }
	inline Connection_tD2B630AE1AEC23473343F09B8848EE83DF457A21  get_current_3() const { return ___current_3; }
	inline Connection_tD2B630AE1AEC23473343F09B8848EE83DF457A21 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Connection_tD2B630AE1AEC23473343F09B8848EE83DF457A21  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___node_0), (void*)NULL);
	}
};


// System.Linq.Enumerable/Iterator`1<Pathfinding.Connection>
struct Iterator_1_tD7E9D63D1FBE49097BB305994FF97A4EA391AEF3  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	Connection_tD2B630AE1AEC23473343F09B8848EE83DF457A21  ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_tD7E9D63D1FBE49097BB305994FF97A4EA391AEF3, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_tD7E9D63D1FBE49097BB305994FF97A4EA391AEF3, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_tD7E9D63D1FBE49097BB305994FF97A4EA391AEF3, ___current_2)); }
	inline Connection_tD2B630AE1AEC23473343F09B8848EE83DF457A21  get_current_2() const { return ___current_2; }
	inline Connection_tD2B630AE1AEC23473343F09B8848EE83DF457A21 * get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(Connection_tD2B630AE1AEC23473343F09B8848EE83DF457A21  value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_2))->___node_0), (void*)NULL);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.Object>
struct KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57, ___key_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_key_0() const { return ___key_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereListIterator`1::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereListIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereListIterator`1::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___enumerator_5)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___current_3), (void*)NULL);
		#endif
	}
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// System.ExceptionArgument
struct ExceptionArgument_t750CCD4C657BCB2C185560CC68330BC0313B8737 
{
public:
	// System.Int32 System.ExceptionArgument::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExceptionArgument_t750CCD4C657BCB2C185560CC68330BC0313B8737, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.FalloffType
struct FalloffType_t983DA2C11C909629E51BD1D4CF088C689C9863CB 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.FalloffType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FalloffType_t983DA2C11C909629E51BD1D4CF088C689C9863CB, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Pathfinding.GraphNode
struct GraphNode_t5AE5B598437EAB21EE8089C9BB31651680B24505  : public RuntimeObject
{
public:
	// System.Int32 Pathfinding.GraphNode::nodeIndex
	int32_t ___nodeIndex_0;
	// System.UInt32 Pathfinding.GraphNode::flags
	uint32_t ___flags_1;
	// System.UInt32 Pathfinding.GraphNode::penalty
	uint32_t ___penalty_2;
	// Pathfinding.Int3 Pathfinding.GraphNode::position
	Int3_t2D1CEFEB4CE42AD8A3266E14F88533BF54BED72A  ___position_7;

public:
	inline static int32_t get_offset_of_nodeIndex_0() { return static_cast<int32_t>(offsetof(GraphNode_t5AE5B598437EAB21EE8089C9BB31651680B24505, ___nodeIndex_0)); }
	inline int32_t get_nodeIndex_0() const { return ___nodeIndex_0; }
	inline int32_t* get_address_of_nodeIndex_0() { return &___nodeIndex_0; }
	inline void set_nodeIndex_0(int32_t value)
	{
		___nodeIndex_0 = value;
	}

	inline static int32_t get_offset_of_flags_1() { return static_cast<int32_t>(offsetof(GraphNode_t5AE5B598437EAB21EE8089C9BB31651680B24505, ___flags_1)); }
	inline uint32_t get_flags_1() const { return ___flags_1; }
	inline uint32_t* get_address_of_flags_1() { return &___flags_1; }
	inline void set_flags_1(uint32_t value)
	{
		___flags_1 = value;
	}

	inline static int32_t get_offset_of_penalty_2() { return static_cast<int32_t>(offsetof(GraphNode_t5AE5B598437EAB21EE8089C9BB31651680B24505, ___penalty_2)); }
	inline uint32_t get_penalty_2() const { return ___penalty_2; }
	inline uint32_t* get_address_of_penalty_2() { return &___penalty_2; }
	inline void set_penalty_2(uint32_t value)
	{
		___penalty_2 = value;
	}

	inline static int32_t get_offset_of_position_7() { return static_cast<int32_t>(offsetof(GraphNode_t5AE5B598437EAB21EE8089C9BB31651680B24505, ___position_7)); }
	inline Int3_t2D1CEFEB4CE42AD8A3266E14F88533BF54BED72A  get_position_7() const { return ___position_7; }
	inline Int3_t2D1CEFEB4CE42AD8A3266E14F88533BF54BED72A * get_address_of_position_7() { return &___position_7; }
	inline void set_position_7(Int3_t2D1CEFEB4CE42AD8A3266E14F88533BF54BED72A  value)
	{
		___position_7 = value;
	}
};


// Pathfinding.Heuristic
struct Heuristic_tA8A2C6540A09E3EE191B837DB54D4A056B357568 
{
public:
	// System.Int32 Pathfinding.Heuristic::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Heuristic_tA8A2C6540A09E3EE191B837DB54D4A056B357568, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightMode
struct LightMode_t9D89979F39C1DBB9CD1E275BDD77C7EA1B506491 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightMode::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightMode_t9D89979F39C1DBB9CD1E275BDD77C7EA1B506491, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightType
struct LightType_t4205DE4BEF130CE507C87172DAB60E5B1EB05552 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightType_t4205DE4BEF130CE507C87172DAB60E5B1EB05552, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.MeshUpdateFlags
struct MeshUpdateFlags_t6CC8A3E19F8A286528978810AB6FFAEEB6A125B5 
{
public:
	// System.Int32 UnityEngine.Rendering.MeshUpdateFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MeshUpdateFlags_t6CC8A3E19F8A286528978810AB6FFAEEB6A125B5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pathfinding.NavGraph
struct NavGraph_t478B9800AFB14C593281ADB34B05A2B630DC480F  : public RuntimeObject
{
public:
	// AstarPath Pathfinding.NavGraph::active
	AstarPath_tAA71ED121384376E88F7ED29580E23A7B4063CBA * ___active_0;
	// Pathfinding.Util.Guid Pathfinding.NavGraph::guid
	Guid_t29470440A187F5227D4D850F2BFDED117FE2C05F  ___guid_1;
	// System.UInt32 Pathfinding.NavGraph::initialPenalty
	uint32_t ___initialPenalty_2;
	// System.Boolean Pathfinding.NavGraph::open
	bool ___open_3;
	// System.UInt32 Pathfinding.NavGraph::graphIndex
	uint32_t ___graphIndex_4;
	// System.String Pathfinding.NavGraph::name
	String_t* ___name_5;
	// System.Boolean Pathfinding.NavGraph::drawGizmos
	bool ___drawGizmos_6;
	// System.Boolean Pathfinding.NavGraph::infoScreenOpen
	bool ___infoScreenOpen_7;
	// System.String Pathfinding.NavGraph::serializedEditorSettings
	String_t* ___serializedEditorSettings_8;
	// UnityEngine.Matrix4x4 Pathfinding.NavGraph::matrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___matrix_9;
	// UnityEngine.Matrix4x4 Pathfinding.NavGraph::inverseMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___inverseMatrix_10;

public:
	inline static int32_t get_offset_of_active_0() { return static_cast<int32_t>(offsetof(NavGraph_t478B9800AFB14C593281ADB34B05A2B630DC480F, ___active_0)); }
	inline AstarPath_tAA71ED121384376E88F7ED29580E23A7B4063CBA * get_active_0() const { return ___active_0; }
	inline AstarPath_tAA71ED121384376E88F7ED29580E23A7B4063CBA ** get_address_of_active_0() { return &___active_0; }
	inline void set_active_0(AstarPath_tAA71ED121384376E88F7ED29580E23A7B4063CBA * value)
	{
		___active_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___active_0), (void*)value);
	}

	inline static int32_t get_offset_of_guid_1() { return static_cast<int32_t>(offsetof(NavGraph_t478B9800AFB14C593281ADB34B05A2B630DC480F, ___guid_1)); }
	inline Guid_t29470440A187F5227D4D850F2BFDED117FE2C05F  get_guid_1() const { return ___guid_1; }
	inline Guid_t29470440A187F5227D4D850F2BFDED117FE2C05F * get_address_of_guid_1() { return &___guid_1; }
	inline void set_guid_1(Guid_t29470440A187F5227D4D850F2BFDED117FE2C05F  value)
	{
		___guid_1 = value;
	}

	inline static int32_t get_offset_of_initialPenalty_2() { return static_cast<int32_t>(offsetof(NavGraph_t478B9800AFB14C593281ADB34B05A2B630DC480F, ___initialPenalty_2)); }
	inline uint32_t get_initialPenalty_2() const { return ___initialPenalty_2; }
	inline uint32_t* get_address_of_initialPenalty_2() { return &___initialPenalty_2; }
	inline void set_initialPenalty_2(uint32_t value)
	{
		___initialPenalty_2 = value;
	}

	inline static int32_t get_offset_of_open_3() { return static_cast<int32_t>(offsetof(NavGraph_t478B9800AFB14C593281ADB34B05A2B630DC480F, ___open_3)); }
	inline bool get_open_3() const { return ___open_3; }
	inline bool* get_address_of_open_3() { return &___open_3; }
	inline void set_open_3(bool value)
	{
		___open_3 = value;
	}

	inline static int32_t get_offset_of_graphIndex_4() { return static_cast<int32_t>(offsetof(NavGraph_t478B9800AFB14C593281ADB34B05A2B630DC480F, ___graphIndex_4)); }
	inline uint32_t get_graphIndex_4() const { return ___graphIndex_4; }
	inline uint32_t* get_address_of_graphIndex_4() { return &___graphIndex_4; }
	inline void set_graphIndex_4(uint32_t value)
	{
		___graphIndex_4 = value;
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(NavGraph_t478B9800AFB14C593281ADB34B05A2B630DC480F, ___name_5)); }
	inline String_t* get_name_5() const { return ___name_5; }
	inline String_t** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(String_t* value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_5), (void*)value);
	}

	inline static int32_t get_offset_of_drawGizmos_6() { return static_cast<int32_t>(offsetof(NavGraph_t478B9800AFB14C593281ADB34B05A2B630DC480F, ___drawGizmos_6)); }
	inline bool get_drawGizmos_6() const { return ___drawGizmos_6; }
	inline bool* get_address_of_drawGizmos_6() { return &___drawGizmos_6; }
	inline void set_drawGizmos_6(bool value)
	{
		___drawGizmos_6 = value;
	}

	inline static int32_t get_offset_of_infoScreenOpen_7() { return static_cast<int32_t>(offsetof(NavGraph_t478B9800AFB14C593281ADB34B05A2B630DC480F, ___infoScreenOpen_7)); }
	inline bool get_infoScreenOpen_7() const { return ___infoScreenOpen_7; }
	inline bool* get_address_of_infoScreenOpen_7() { return &___infoScreenOpen_7; }
	inline void set_infoScreenOpen_7(bool value)
	{
		___infoScreenOpen_7 = value;
	}

	inline static int32_t get_offset_of_serializedEditorSettings_8() { return static_cast<int32_t>(offsetof(NavGraph_t478B9800AFB14C593281ADB34B05A2B630DC480F, ___serializedEditorSettings_8)); }
	inline String_t* get_serializedEditorSettings_8() const { return ___serializedEditorSettings_8; }
	inline String_t** get_address_of_serializedEditorSettings_8() { return &___serializedEditorSettings_8; }
	inline void set_serializedEditorSettings_8(String_t* value)
	{
		___serializedEditorSettings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializedEditorSettings_8), (void*)value);
	}

	inline static int32_t get_offset_of_matrix_9() { return static_cast<int32_t>(offsetof(NavGraph_t478B9800AFB14C593281ADB34B05A2B630DC480F, ___matrix_9)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_matrix_9() const { return ___matrix_9; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_matrix_9() { return &___matrix_9; }
	inline void set_matrix_9(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___matrix_9 = value;
	}

	inline static int32_t get_offset_of_inverseMatrix_10() { return static_cast<int32_t>(offsetof(NavGraph_t478B9800AFB14C593281ADB34B05A2B630DC480F, ___inverseMatrix_10)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_inverseMatrix_10() const { return ___inverseMatrix_10; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_inverseMatrix_10() { return &___inverseMatrix_10; }
	inline void set_inverseMatrix_10(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___inverseMatrix_10 = value;
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

// System.Reflection.PInfo
struct PInfo_tA2A7DDE9FEBB5094D5B84BD73638EDAFC2689635 
{
public:
	// System.Int32 System.Reflection.PInfo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PInfo_tA2A7DDE9FEBB5094D5B84BD73638EDAFC2689635, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pathfinding.PathCompleteState
struct PathCompleteState_t397F39A5A2B358EFD818B159B7CD48CA121F8695 
{
public:
	// System.Int32 Pathfinding.PathCompleteState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PathCompleteState_t397F39A5A2B358EFD818B159B7CD48CA121F8695, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pathfinding.PathState
struct PathState_t2318D03AC8FB5C48066CE6DA52788A5DFB565EEB 
{
public:
	// System.Int32 Pathfinding.PathState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PathState_t2318D03AC8FB5C48066CE6DA52788A5DFB565EEB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Plane
struct Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_2;

public:
	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_Distance_2() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Distance_2)); }
	inline float get_m_Distance_2() const { return ___m_Distance_2; }
	inline float* get_address_of_m_Distance_2() { return &___m_Distance_2; }
	inline void set_m_Distance_2(float value)
	{
		___m_Distance_2 = value;
	}
};


// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_StaticFields
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_StaticFields, ___m_Null_2)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Null_2 = value;
	}
};


// System.Reflection.PropertyAttributes
struct PropertyAttributes_tD4697434E7DA092DDE18E7D5863B2BC2EA5CD3C1 
{
public:
	// System.Int32 System.Reflection.PropertyAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyAttributes_tD4697434E7DA092DDE18E7D5863B2BC2EA5CD3C1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// System.Reflection.RuntimePropertyInfo
struct RuntimePropertyInfo_tBFADAB74EBBB380C7FF1B5004FDD5A39447574B5  : public PropertyInfo_t
{
public:

public:
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.Threading.Tasks.TaskCreationOptions
struct TaskCreationOptions_t469019F1B0F93FA60337952E265311E8048D2112 
{
public:
	// System.Int32 System.Threading.Tasks.TaskCreationOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskCreationOptions_t469019F1B0F93FA60337952E265311E8048D2112, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.VertexAttribute
struct VertexAttribute_t9B763063E3B1705070D4DB8BC32F21F0FB30867C 
{
public:
	// System.Int32 UnityEngine.Rendering.VertexAttribute::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexAttribute_t9B763063E3B1705070D4DB8BC32F21F0FB30867C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.VertexAttributeFormat
struct VertexAttributeFormat_tE5FC93A96237AAF63142B0E521925CAE4F283485 
{
public:
	// System.Int32 UnityEngine.Rendering.VertexAttributeFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexAttributeFormat_tE5FC93A96237AAF63142B0E521925CAE4F283485, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Camera/RenderRequestMode
struct RenderRequestMode_tCB120B82DED523ADBA2D6093A1A8ABF17D94A313 
{
public:
	// System.Int32 UnityEngine.Camera/RenderRequestMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderRequestMode_tCB120B82DED523ADBA2D6093A1A8ABF17D94A313, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Camera/RenderRequestOutputSpace
struct RenderRequestOutputSpace_t8EB93E4720B2D1BAB624A04ADB473C37C7F3D6A5 
{
public:
	// System.Int32 UnityEngine.Camera/RenderRequestOutputSpace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderRequestOutputSpace_t8EB93E4720B2D1BAB624A04ADB473C37C7F3D6A5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pathfinding.Funnel/PathPart
struct PathPart_t28329F7CAAE0992C55E6AF1419C79F7AFBE7B046 
{
public:
	// System.Int32 Pathfinding.Funnel/PathPart::startIndex
	int32_t ___startIndex_0;
	// System.Int32 Pathfinding.Funnel/PathPart::endIndex
	int32_t ___endIndex_1;
	// UnityEngine.Vector3 Pathfinding.Funnel/PathPart::startPoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startPoint_2;
	// UnityEngine.Vector3 Pathfinding.Funnel/PathPart::endPoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endPoint_3;
	// System.Boolean Pathfinding.Funnel/PathPart::isLink
	bool ___isLink_4;

public:
	inline static int32_t get_offset_of_startIndex_0() { return static_cast<int32_t>(offsetof(PathPart_t28329F7CAAE0992C55E6AF1419C79F7AFBE7B046, ___startIndex_0)); }
	inline int32_t get_startIndex_0() const { return ___startIndex_0; }
	inline int32_t* get_address_of_startIndex_0() { return &___startIndex_0; }
	inline void set_startIndex_0(int32_t value)
	{
		___startIndex_0 = value;
	}

	inline static int32_t get_offset_of_endIndex_1() { return static_cast<int32_t>(offsetof(PathPart_t28329F7CAAE0992C55E6AF1419C79F7AFBE7B046, ___endIndex_1)); }
	inline int32_t get_endIndex_1() const { return ___endIndex_1; }
	inline int32_t* get_address_of_endIndex_1() { return &___endIndex_1; }
	inline void set_endIndex_1(int32_t value)
	{
		___endIndex_1 = value;
	}

	inline static int32_t get_offset_of_startPoint_2() { return static_cast<int32_t>(offsetof(PathPart_t28329F7CAAE0992C55E6AF1419C79F7AFBE7B046, ___startPoint_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startPoint_2() const { return ___startPoint_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startPoint_2() { return &___startPoint_2; }
	inline void set_startPoint_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startPoint_2 = value;
	}

	inline static int32_t get_offset_of_endPoint_3() { return static_cast<int32_t>(offsetof(PathPart_t28329F7CAAE0992C55E6AF1419C79F7AFBE7B046, ___endPoint_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_endPoint_3() const { return ___endPoint_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_endPoint_3() { return &___endPoint_3; }
	inline void set_endPoint_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___endPoint_3 = value;
	}

	inline static int32_t get_offset_of_isLink_4() { return static_cast<int32_t>(offsetof(PathPart_t28329F7CAAE0992C55E6AF1419C79F7AFBE7B046, ___isLink_4)); }
	inline bool get_isLink_4() const { return ___isLink_4; }
	inline bool* get_address_of_isLink_4() { return &___isLink_4; }
	inline void set_isLink_4(bool value)
	{
		___isLink_4 = value;
	}
};

// Native definition for P/Invoke marshalling of Pathfinding.Funnel/PathPart
struct PathPart_t28329F7CAAE0992C55E6AF1419C79F7AFBE7B046_marshaled_pinvoke
{
	int32_t ___startIndex_0;
	int32_t ___endIndex_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startPoint_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endPoint_3;
	int32_t ___isLink_4;
};
// Native definition for COM marshalling of Pathfinding.Funnel/PathPart
struct PathPart_t28329F7CAAE0992C55E6AF1419C79F7AFBE7B046_marshaled_com
{
	int32_t ___startIndex_0;
	int32_t ___endIndex_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startPoint_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endPoint_3;
	int32_t ___isLink_4;
};

// UnityEngine.MeshSubsetCombineUtility/MeshInstance
struct MeshInstance_t59CE3427703DF1108911FDF5A6A9241237614BEB 
{
public:
	// System.Int32 UnityEngine.MeshSubsetCombineUtility/MeshInstance::meshInstanceID
	int32_t ___meshInstanceID_0;
	// System.Int32 UnityEngine.MeshSubsetCombineUtility/MeshInstance::rendererInstanceID
	int32_t ___rendererInstanceID_1;
	// System.Int32 UnityEngine.MeshSubsetCombineUtility/MeshInstance::additionalVertexStreamsMeshInstanceID
	int32_t ___additionalVertexStreamsMeshInstanceID_2;
	// System.Int32 UnityEngine.MeshSubsetCombineUtility/MeshInstance::enlightenVertexStreamMeshInstanceID
	int32_t ___enlightenVertexStreamMeshInstanceID_3;
	// UnityEngine.Matrix4x4 UnityEngine.MeshSubsetCombineUtility/MeshInstance::transform
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___transform_4;
	// UnityEngine.Vector4 UnityEngine.MeshSubsetCombineUtility/MeshInstance::lightmapScaleOffset
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___lightmapScaleOffset_5;
	// UnityEngine.Vector4 UnityEngine.MeshSubsetCombineUtility/MeshInstance::realtimeLightmapScaleOffset
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___realtimeLightmapScaleOffset_6;

public:
	inline static int32_t get_offset_of_meshInstanceID_0() { return static_cast<int32_t>(offsetof(MeshInstance_t59CE3427703DF1108911FDF5A6A9241237614BEB, ___meshInstanceID_0)); }
	inline int32_t get_meshInstanceID_0() const { return ___meshInstanceID_0; }
	inline int32_t* get_address_of_meshInstanceID_0() { return &___meshInstanceID_0; }
	inline void set_meshInstanceID_0(int32_t value)
	{
		___meshInstanceID_0 = value;
	}

	inline static int32_t get_offset_of_rendererInstanceID_1() { return static_cast<int32_t>(offsetof(MeshInstance_t59CE3427703DF1108911FDF5A6A9241237614BEB, ___rendererInstanceID_1)); }
	inline int32_t get_rendererInstanceID_1() const { return ___rendererInstanceID_1; }
	inline int32_t* get_address_of_rendererInstanceID_1() { return &___rendererInstanceID_1; }
	inline void set_rendererInstanceID_1(int32_t value)
	{
		___rendererInstanceID_1 = value;
	}

	inline static int32_t get_offset_of_additionalVertexStreamsMeshInstanceID_2() { return static_cast<int32_t>(offsetof(MeshInstance_t59CE3427703DF1108911FDF5A6A9241237614BEB, ___additionalVertexStreamsMeshInstanceID_2)); }
	inline int32_t get_additionalVertexStreamsMeshInstanceID_2() const { return ___additionalVertexStreamsMeshInstanceID_2; }
	inline int32_t* get_address_of_additionalVertexStreamsMeshInstanceID_2() { return &___additionalVertexStreamsMeshInstanceID_2; }
	inline void set_additionalVertexStreamsMeshInstanceID_2(int32_t value)
	{
		___additionalVertexStreamsMeshInstanceID_2 = value;
	}

	inline static int32_t get_offset_of_enlightenVertexStreamMeshInstanceID_3() { return static_cast<int32_t>(offsetof(MeshInstance_t59CE3427703DF1108911FDF5A6A9241237614BEB, ___enlightenVertexStreamMeshInstanceID_3)); }
	inline int32_t get_enlightenVertexStreamMeshInstanceID_3() const { return ___enlightenVertexStreamMeshInstanceID_3; }
	inline int32_t* get_address_of_enlightenVertexStreamMeshInstanceID_3() { return &___enlightenVertexStreamMeshInstanceID_3; }
	inline void set_enlightenVertexStreamMeshInstanceID_3(int32_t value)
	{
		___enlightenVertexStreamMeshInstanceID_3 = value;
	}

	inline static int32_t get_offset_of_transform_4() { return static_cast<int32_t>(offsetof(MeshInstance_t59CE3427703DF1108911FDF5A6A9241237614BEB, ___transform_4)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_transform_4() const { return ___transform_4; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_transform_4() { return &___transform_4; }
	inline void set_transform_4(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___transform_4 = value;
	}

	inline static int32_t get_offset_of_lightmapScaleOffset_5() { return static_cast<int32_t>(offsetof(MeshInstance_t59CE3427703DF1108911FDF5A6A9241237614BEB, ___lightmapScaleOffset_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_lightmapScaleOffset_5() const { return ___lightmapScaleOffset_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_lightmapScaleOffset_5() { return &___lightmapScaleOffset_5; }
	inline void set_lightmapScaleOffset_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___lightmapScaleOffset_5 = value;
	}

	inline static int32_t get_offset_of_realtimeLightmapScaleOffset_6() { return static_cast<int32_t>(offsetof(MeshInstance_t59CE3427703DF1108911FDF5A6A9241237614BEB, ___realtimeLightmapScaleOffset_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_realtimeLightmapScaleOffset_6() const { return ___realtimeLightmapScaleOffset_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_realtimeLightmapScaleOffset_6() { return &___realtimeLightmapScaleOffset_6; }
	inline void set_realtimeLightmapScaleOffset_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___realtimeLightmapScaleOffset_6 = value;
	}
};


// UnityEngine.MeshSubsetCombineUtility/SubMeshInstance
struct SubMeshInstance_t1660534E00E3BC37BB22435A242B054DCAC5BDB6 
{
public:
	// System.Int32 UnityEngine.MeshSubsetCombineUtility/SubMeshInstance::meshInstanceID
	int32_t ___meshInstanceID_0;
	// System.Int32 UnityEngine.MeshSubsetCombineUtility/SubMeshInstance::vertexOffset
	int32_t ___vertexOffset_1;
	// System.Int32 UnityEngine.MeshSubsetCombineUtility/SubMeshInstance::gameObjectInstanceID
	int32_t ___gameObjectInstanceID_2;
	// System.Int32 UnityEngine.MeshSubsetCombineUtility/SubMeshInstance::subMeshIndex
	int32_t ___subMeshIndex_3;
	// UnityEngine.Matrix4x4 UnityEngine.MeshSubsetCombineUtility/SubMeshInstance::transform
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___transform_4;

public:
	inline static int32_t get_offset_of_meshInstanceID_0() { return static_cast<int32_t>(offsetof(SubMeshInstance_t1660534E00E3BC37BB22435A242B054DCAC5BDB6, ___meshInstanceID_0)); }
	inline int32_t get_meshInstanceID_0() const { return ___meshInstanceID_0; }
	inline int32_t* get_address_of_meshInstanceID_0() { return &___meshInstanceID_0; }
	inline void set_meshInstanceID_0(int32_t value)
	{
		___meshInstanceID_0 = value;
	}

	inline static int32_t get_offset_of_vertexOffset_1() { return static_cast<int32_t>(offsetof(SubMeshInstance_t1660534E00E3BC37BB22435A242B054DCAC5BDB6, ___vertexOffset_1)); }
	inline int32_t get_vertexOffset_1() const { return ___vertexOffset_1; }
	inline int32_t* get_address_of_vertexOffset_1() { return &___vertexOffset_1; }
	inline void set_vertexOffset_1(int32_t value)
	{
		___vertexOffset_1 = value;
	}

	inline static int32_t get_offset_of_gameObjectInstanceID_2() { return static_cast<int32_t>(offsetof(SubMeshInstance_t1660534E00E3BC37BB22435A242B054DCAC5BDB6, ___gameObjectInstanceID_2)); }
	inline int32_t get_gameObjectInstanceID_2() const { return ___gameObjectInstanceID_2; }
	inline int32_t* get_address_of_gameObjectInstanceID_2() { return &___gameObjectInstanceID_2; }
	inline void set_gameObjectInstanceID_2(int32_t value)
	{
		___gameObjectInstanceID_2 = value;
	}

	inline static int32_t get_offset_of_subMeshIndex_3() { return static_cast<int32_t>(offsetof(SubMeshInstance_t1660534E00E3BC37BB22435A242B054DCAC5BDB6, ___subMeshIndex_3)); }
	inline int32_t get_subMeshIndex_3() const { return ___subMeshIndex_3; }
	inline int32_t* get_address_of_subMeshIndex_3() { return &___subMeshIndex_3; }
	inline void set_subMeshIndex_3(int32_t value)
	{
		___subMeshIndex_3 = value;
	}

	inline static int32_t get_offset_of_transform_4() { return static_cast<int32_t>(offsetof(SubMeshInstance_t1660534E00E3BC37BB22435A242B054DCAC5BDB6, ___transform_4)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_transform_4() const { return ___transform_4; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_transform_4() { return &___transform_4; }
	inline void set_transform_4(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___transform_4 = value;
	}
};


// Pathfinding.PointGraph/NodeDistanceMode
struct NodeDistanceMode_tD982CD74F670FD12E4C6A5359988D8C26306C8AB 
{
public:
	// System.Int32 Pathfinding.PointGraph/NodeDistanceMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NodeDistanceMode_tD982CD74F670FD12E4C6A5359988D8C26306C8AB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>
struct NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Int32>
struct NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Plane>
struct NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849, ___m_result_22)); }
	inline bool get_m_result_22() const { return ___m_result_22; }
	inline bool* get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(bool value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17, ___m_result_22)); }
	inline RuntimeObject * get_m_result_22() const { return ___m_result_22; }
	inline RuntimeObject ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(RuntimeObject * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Linq.Enumerable/WhereArrayIterator`1<Pathfinding.Connection>
struct WhereArrayIterator_1_t7E78F2A55C3655A42485D3855D61F808319EC9F2  : public Iterator_1_tD7E9D63D1FBE49097BB305994FF97A4EA391AEF3
{
public:
	// TSource[] System.Linq.Enumerable/WhereArrayIterator`1::source
	ConnectionU5BU5D_t946DE1BF1E4E05FF8695E89F55505806D050AB5D* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereArrayIterator`1::predicate
	Func_2_t12A684E31209EBE9CC8B5B4A20EE11EE7E9125D8 * ___predicate_4;
	// System.Int32 System.Linq.Enumerable/WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7E78F2A55C3655A42485D3855D61F808319EC9F2, ___source_3)); }
	inline ConnectionU5BU5D_t946DE1BF1E4E05FF8695E89F55505806D050AB5D* get_source_3() const { return ___source_3; }
	inline ConnectionU5BU5D_t946DE1BF1E4E05FF8695E89F55505806D050AB5D** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ConnectionU5BU5D_t946DE1BF1E4E05FF8695E89F55505806D050AB5D* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7E78F2A55C3655A42485D3855D61F808319EC9F2, ___predicate_4)); }
	inline Func_2_t12A684E31209EBE9CC8B5B4A20EE11EE7E9125D8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t12A684E31209EBE9CC8B5B4A20EE11EE7E9125D8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t12A684E31209EBE9CC8B5B4A20EE11EE7E9125D8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7E78F2A55C3655A42485D3855D61F808319EC9F2, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<Pathfinding.Connection>
struct WhereEnumerableIterator_1_tF8FC4B4721B79F66E3FA482D7E83494170107A7D  : public Iterator_1_tD7E9D63D1FBE49097BB305994FF97A4EA391AEF3
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t12A684E31209EBE9CC8B5B4A20EE11EE7E9125D8 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tF8FC4B4721B79F66E3FA482D7E83494170107A7D, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tF8FC4B4721B79F66E3FA482D7E83494170107A7D, ___predicate_4)); }
	inline Func_2_t12A684E31209EBE9CC8B5B4A20EE11EE7E9125D8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t12A684E31209EBE9CC8B5B4A20EE11EE7E9125D8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t12A684E31209EBE9CC8B5B4A20EE11EE7E9125D8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tF8FC4B4721B79F66E3FA482D7E83494170107A7D, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereListIterator`1<Pathfinding.Connection>
struct WhereListIterator_1_t7F14C4772E31328D835EC9AD64507C1AC11768B2  : public Iterator_1_tD7E9D63D1FBE49097BB305994FF97A4EA391AEF3
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereListIterator`1::source
	List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereListIterator`1::predicate
	Func_2_t12A684E31209EBE9CC8B5B4A20EE11EE7E9125D8 * ___predicate_4;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereListIterator`1::enumerator
	Enumerator_t9C4833CAEB36745A09DB267FAE8460B36027264E  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t7F14C4772E31328D835EC9AD64507C1AC11768B2, ___source_3)); }
	inline List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 * get_source_3() const { return ___source_3; }
	inline List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t7F14C4772E31328D835EC9AD64507C1AC11768B2, ___predicate_4)); }
	inline Func_2_t12A684E31209EBE9CC8B5B4A20EE11EE7E9125D8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t12A684E31209EBE9CC8B5B4A20EE11EE7E9125D8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t12A684E31209EBE9CC8B5B4A20EE11EE7E9125D8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t7F14C4772E31328D835EC9AD64507C1AC11768B2, ___enumerator_5)); }
	inline Enumerator_t9C4833CAEB36745A09DB267FAE8460B36027264E  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_t9C4833CAEB36745A09DB267FAE8460B36027264E * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_t9C4833CAEB36745A09DB267FAE8460B36027264E  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_5))->___current_3))->___node_0), (void*)NULL);
		#endif
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


// UnityEngine.Experimental.GlobalIllumination.LightDataGI
struct LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 
{
public:
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::instanceID
	int32_t ___instanceID_0;
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieID
	int32_t ___cookieID_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieScale
	float ___cookieScale_2;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::color
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_3;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::indirectColor
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_4;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.LightDataGI::orientation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_5;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.LightDataGI::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::coneAngle
	float ___coneAngle_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::innerConeAngle
	float ___innerConeAngle_9;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape0
	float ___shape0_10;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape1
	float ___shape1_11;
	// UnityEngine.Experimental.GlobalIllumination.LightType UnityEngine.Experimental.GlobalIllumination.LightDataGI::type
	uint8_t ___type_12;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightDataGI::mode
	uint8_t ___mode_13;
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightDataGI::shadow
	uint8_t ___shadow_14;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.LightDataGI::falloff
	uint8_t ___falloff_15;

public:
	inline static int32_t get_offset_of_instanceID_0() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___instanceID_0)); }
	inline int32_t get_instanceID_0() const { return ___instanceID_0; }
	inline int32_t* get_address_of_instanceID_0() { return &___instanceID_0; }
	inline void set_instanceID_0(int32_t value)
	{
		___instanceID_0 = value;
	}

	inline static int32_t get_offset_of_cookieID_1() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___cookieID_1)); }
	inline int32_t get_cookieID_1() const { return ___cookieID_1; }
	inline int32_t* get_address_of_cookieID_1() { return &___cookieID_1; }
	inline void set_cookieID_1(int32_t value)
	{
		___cookieID_1 = value;
	}

	inline static int32_t get_offset_of_cookieScale_2() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___cookieScale_2)); }
	inline float get_cookieScale_2() const { return ___cookieScale_2; }
	inline float* get_address_of_cookieScale_2() { return &___cookieScale_2; }
	inline void set_cookieScale_2(float value)
	{
		___cookieScale_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___color_3)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_color_3() const { return ___color_3; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_indirectColor_4() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___indirectColor_4)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_indirectColor_4() const { return ___indirectColor_4; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_indirectColor_4() { return &___indirectColor_4; }
	inline void set_indirectColor_4(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___indirectColor_4 = value;
	}

	inline static int32_t get_offset_of_orientation_5() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___orientation_5)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_orientation_5() const { return ___orientation_5; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_orientation_5() { return &___orientation_5; }
	inline void set_orientation_5(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___orientation_5 = value;
	}

	inline static int32_t get_offset_of_position_6() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___position_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_6() const { return ___position_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_6() { return &___position_6; }
	inline void set_position_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_6 = value;
	}

	inline static int32_t get_offset_of_range_7() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___range_7)); }
	inline float get_range_7() const { return ___range_7; }
	inline float* get_address_of_range_7() { return &___range_7; }
	inline void set_range_7(float value)
	{
		___range_7 = value;
	}

	inline static int32_t get_offset_of_coneAngle_8() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___coneAngle_8)); }
	inline float get_coneAngle_8() const { return ___coneAngle_8; }
	inline float* get_address_of_coneAngle_8() { return &___coneAngle_8; }
	inline void set_coneAngle_8(float value)
	{
		___coneAngle_8 = value;
	}

	inline static int32_t get_offset_of_innerConeAngle_9() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___innerConeAngle_9)); }
	inline float get_innerConeAngle_9() const { return ___innerConeAngle_9; }
	inline float* get_address_of_innerConeAngle_9() { return &___innerConeAngle_9; }
	inline void set_innerConeAngle_9(float value)
	{
		___innerConeAngle_9 = value;
	}

	inline static int32_t get_offset_of_shape0_10() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shape0_10)); }
	inline float get_shape0_10() const { return ___shape0_10; }
	inline float* get_address_of_shape0_10() { return &___shape0_10; }
	inline void set_shape0_10(float value)
	{
		___shape0_10 = value;
	}

	inline static int32_t get_offset_of_shape1_11() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shape1_11)); }
	inline float get_shape1_11() const { return ___shape1_11; }
	inline float* get_address_of_shape1_11() { return &___shape1_11; }
	inline void set_shape1_11(float value)
	{
		___shape1_11 = value;
	}

	inline static int32_t get_offset_of_type_12() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___type_12)); }
	inline uint8_t get_type_12() const { return ___type_12; }
	inline uint8_t* get_address_of_type_12() { return &___type_12; }
	inline void set_type_12(uint8_t value)
	{
		___type_12 = value;
	}

	inline static int32_t get_offset_of_mode_13() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___mode_13)); }
	inline uint8_t get_mode_13() const { return ___mode_13; }
	inline uint8_t* get_address_of_mode_13() { return &___mode_13; }
	inline void set_mode_13(uint8_t value)
	{
		___mode_13 = value;
	}

	inline static int32_t get_offset_of_shadow_14() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shadow_14)); }
	inline uint8_t get_shadow_14() const { return ___shadow_14; }
	inline uint8_t* get_address_of_shadow_14() { return &___shadow_14; }
	inline void set_shadow_14(uint8_t value)
	{
		___shadow_14 = value;
	}

	inline static int32_t get_offset_of_falloff_15() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___falloff_15)); }
	inline uint8_t get_falloff_15() const { return ___falloff_15; }
	inline uint8_t* get_address_of_falloff_15() { return &___falloff_15; }
	inline void set_falloff_15(uint8_t value)
	{
		___falloff_15 = value;
	}
};


// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82 
{
public:
	// System.Type System.Reflection.MonoPropertyInfo::parent
	Type_t * ___parent_0;
	// System.Type System.Reflection.MonoPropertyInfo::declaring_type
	Type_t * ___declaring_type_1;
	// System.String System.Reflection.MonoPropertyInfo::name
	String_t* ___name_2;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::get_method
	MethodInfo_t * ___get_method_3;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::set_method
	MethodInfo_t * ___set_method_4;
	// System.Reflection.PropertyAttributes System.Reflection.MonoPropertyInfo::attrs
	int32_t ___attrs_5;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82, ___parent_0)); }
	inline Type_t * get_parent_0() const { return ___parent_0; }
	inline Type_t ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Type_t * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_0), (void*)value);
	}

	inline static int32_t get_offset_of_declaring_type_1() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82, ___declaring_type_1)); }
	inline Type_t * get_declaring_type_1() const { return ___declaring_type_1; }
	inline Type_t ** get_address_of_declaring_type_1() { return &___declaring_type_1; }
	inline void set_declaring_type_1(Type_t * value)
	{
		___declaring_type_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___declaring_type_1), (void*)value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_2), (void*)value);
	}

	inline static int32_t get_offset_of_get_method_3() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82, ___get_method_3)); }
	inline MethodInfo_t * get_get_method_3() const { return ___get_method_3; }
	inline MethodInfo_t ** get_address_of_get_method_3() { return &___get_method_3; }
	inline void set_get_method_3(MethodInfo_t * value)
	{
		___get_method_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_method_3), (void*)value);
	}

	inline static int32_t get_offset_of_set_method_4() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82, ___set_method_4)); }
	inline MethodInfo_t * get_set_method_4() const { return ___set_method_4; }
	inline MethodInfo_t ** get_address_of_set_method_4() { return &___set_method_4; }
	inline void set_set_method_4(MethodInfo_t * value)
	{
		___set_method_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___set_method_4), (void*)value);
	}

	inline static int32_t get_offset_of_attrs_5() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82, ___attrs_5)); }
	inline int32_t get_attrs_5() const { return ___attrs_5; }
	inline int32_t* get_address_of_attrs_5() { return &___attrs_5; }
	inline void set_attrs_5(int32_t value)
	{
		___attrs_5 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82_marshaled_pinvoke
{
	Type_t * ___parent_0;
	Type_t * ___declaring_type_1;
	char* ___name_2;
	MethodInfo_t * ___get_method_3;
	MethodInfo_t * ___set_method_4;
	int32_t ___attrs_5;
};
// Native definition for COM marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82_marshaled_com
{
	Type_t * ___parent_0;
	Type_t * ___declaring_type_1;
	Il2CppChar* ___name_2;
	MethodInfo_t * ___get_method_3;
	MethodInfo_t * ___set_method_4;
	int32_t ___attrs_5;
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

// Pathfinding.Path
struct Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7  : public RuntimeObject
{
public:
	// Pathfinding.PathHandler Pathfinding.Path::pathHandler
	PathHandler_tED4DEF6D91FE97D38F1BEC4265F79E310F2C5DBF * ___pathHandler_0;
	// Pathfinding.OnPathDelegate Pathfinding.Path::callback
	OnPathDelegate_t824E79FFEB44F4E6F741465A50AB35F00FBCC687 * ___callback_1;
	// Pathfinding.OnPathDelegate Pathfinding.Path::immediateCallback
	OnPathDelegate_t824E79FFEB44F4E6F741465A50AB35F00FBCC687 * ___immediateCallback_2;
	// Pathfinding.PathState Pathfinding.Path::<PipelineState>k__BackingField
	int32_t ___U3CPipelineStateU3Ek__BackingField_3;
	// System.Object Pathfinding.Path::stateLock
	RuntimeObject * ___stateLock_4;
	// Pathfinding.ITraversalProvider Pathfinding.Path::traversalProvider
	RuntimeObject* ___traversalProvider_5;
	// Pathfinding.PathCompleteState Pathfinding.Path::completeState
	int32_t ___completeState_6;
	// System.String Pathfinding.Path::<errorLog>k__BackingField
	String_t* ___U3CerrorLogU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<Pathfinding.GraphNode> Pathfinding.Path::path
	List_1_t595A305572F661DD70A982373D01036D7970824F * ___path_8;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Pathfinding.Path::vectorPath
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___vectorPath_9;
	// Pathfinding.PathNode Pathfinding.Path::currentR
	PathNode_t43E01D5D5BB359AF635866FA5BBF4D5453B879B1 * ___currentR_10;
	// System.Single Pathfinding.Path::duration
	float ___duration_11;
	// System.Int32 Pathfinding.Path::searchedNodes
	int32_t ___searchedNodes_12;
	// System.Boolean Pathfinding.Path::<Pathfinding.IPathInternals.Pooled>k__BackingField
	bool ___U3CPathfinding_IPathInternals_PooledU3Ek__BackingField_13;
	// System.Boolean Pathfinding.Path::hasBeenReset
	bool ___hasBeenReset_14;
	// Pathfinding.NNConstraint Pathfinding.Path::nnConstraint
	NNConstraint_tE3DA220E07B2C79E784789762C68A252D30D12A0 * ___nnConstraint_15;
	// Pathfinding.Path Pathfinding.Path::next
	Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7 * ___next_16;
	// Pathfinding.Heuristic Pathfinding.Path::heuristic
	int32_t ___heuristic_17;
	// System.Single Pathfinding.Path::heuristicScale
	float ___heuristicScale_18;
	// System.UInt16 Pathfinding.Path::<pathID>k__BackingField
	uint16_t ___U3CpathIDU3Ek__BackingField_19;
	// Pathfinding.GraphNode Pathfinding.Path::hTargetNode
	GraphNode_t5AE5B598437EAB21EE8089C9BB31651680B24505 * ___hTargetNode_20;
	// Pathfinding.Int3 Pathfinding.Path::hTarget
	Int3_t2D1CEFEB4CE42AD8A3266E14F88533BF54BED72A  ___hTarget_21;
	// System.Int32 Pathfinding.Path::enabledTags
	int32_t ___enabledTags_22;
	// System.Int32[] Pathfinding.Path::internalTagPenalties
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___internalTagPenalties_24;
	// System.Int32[] Pathfinding.Path::manualTagPenalties
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___manualTagPenalties_25;
	// System.Collections.Generic.List`1<System.Object> Pathfinding.Path::claimed
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___claimed_26;
	// System.Boolean Pathfinding.Path::releasedNotSilent
	bool ___releasedNotSilent_27;

public:
	inline static int32_t get_offset_of_pathHandler_0() { return static_cast<int32_t>(offsetof(Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7, ___pathHandler_0)); }
	inline PathHandler_tED4DEF6D91FE97D38F1BEC4265F79E310F2C5DBF * get_pathHandler_0() const { return ___pathHandler_0; }
	inline PathHandler_tED4DEF6D91FE97D38F1BEC4265F79E310F2C5DBF ** get_address_of_pathHandler_0() { return &___pathHandler_0; }
	inline void set_pathHandler_0(PathHandler_tED4DEF6D91FE97D38F1BEC4265F79E310F2C5DBF * value)
	{
		___pathHandler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pathHandler_0), (void*)value);
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7, ___callback_1)); }
	inline OnPathDelegate_t824E79FFEB44F4E6F741465A50AB35F00FBCC687 * get_callback_1() const { return ___callback_1; }
	inline OnPathDelegate_t824E79FFEB44F4E6F741465A50AB35F00FBCC687 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(OnPathDelegate_t824E79FFEB44F4E6F741465A50AB35F00FBCC687 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_1), (void*)value);
	}

	inline static int32_t get_offset_of_immediateCallback_2() { return static_cast<int32_t>(offsetof(Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7, ___immediateCallback_2)); }
	inline OnPathDelegate_t824E79FFEB44F4E6F741465A50AB35F00FBCC687 * get_immediateCallback_2() const { return ___immediateCallback_2; }
	inline OnPathDelegate_t824E79FFEB44F4E6F741465A50AB35F00FBCC687 ** get_address_of_immediateCallback_2() { return &___immediateCallback_2; }
	inline void set_immediateCallback_2(OnPathDelegate_t824E79FFEB44F4E6F741465A50AB35F00FBCC687 * value)
	{
		___immediateCallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___immediateCallback_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPipelineStateU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7, ___U3CPipelineStateU3Ek__BackingField_3)); }
	inline int32_t get_U3CPipelineStateU3Ek__BackingField_3() const { return ___U3CPipelineStateU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CPipelineStateU3Ek__BackingField_3() { return &___U3CPipelineStateU3Ek__BackingField_3; }
	inline void set_U3CPipelineStateU3Ek__BackingField_3(int32_t value)
	{
		___U3CPipelineStateU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_stateLock_4() { return static_cast<int32_t>(offsetof(Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7, ___stateLock_4)); }
	inline RuntimeObject * get_stateLock_4() const { return ___stateLock_4; }
	inline RuntimeObject ** get_address_of_stateLock_4() { return &___stateLock_4; }
	inline void set_stateLock_4(RuntimeObject * value)
	{
		___stateLock_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateLock_4), (void*)value);
	}

	inline static int32_t get_offset_of_traversalProvider_5() { return static_cast<int32_t>(offsetof(Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7, ___traversalProvider_5)); }
	inline RuntimeObject* get_traversalProvider_5() const { return ___traversalProvider_5; }
	inline RuntimeObject** get_address_of_traversalProvider_5() { return &___traversalProvider_5; }
	inline void set_traversalProvider_5(RuntimeObject* value)
	{
		___traversalProvider_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___traversalProvider_5), (void*)value);
	}

	inline static int32_t get_offset_of_completeState_6() { return static_cast<int32_t>(offsetof(Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7, ___completeState_6)); }
	inline int32_t get_completeState_6() const { return ___completeState_6; }
	inline int32_t* get_address_of_completeState_6() { return &___completeState_6; }
	inline void set_completeState_6(int32_t value)
	{
		___completeState_6 = value;
	}

	inline static int32_t get_offset_of_U3CerrorLogU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7, ___U3CerrorLogU3Ek__BackingField_7)); }
	inline String_t* get_U3CerrorLogU3Ek__BackingField_7() const { return ___U3CerrorLogU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CerrorLogU3Ek__BackingField_7() { return &___U3CerrorLogU3Ek__BackingField_7; }
	inline void set_U3CerrorLogU3Ek__BackingField_7(String_t* value)
	{
		___U3CerrorLogU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CerrorLogU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_path_8() { return static_cast<int32_t>(offsetof(Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7, ___path_8)); }
	inline List_1_t595A305572F661DD70A982373D01036D7970824F * get_path_8() const { return ___path_8; }
	inline List_1_t595A305572F661DD70A982373D01036D7970824F ** get_address_of_path_8() { return &___path_8; }
	inline void set_path_8(List_1_t595A305572F661DD70A982373D01036D7970824F * value)
	{
		___path_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_8), (void*)value);
	}

	inline static int32_t get_offset_of_vectorPath_9() { return static_cast<int32_t>(offsetof(Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7, ___vectorPath_9)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_vectorPath_9() const { return ___vectorPath_9; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_vectorPath_9() { return &___vectorPath_9; }
	inline void set_vectorPath_9(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___vectorPath_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vectorPath_9), (void*)value);
	}

	inline static int32_t get_offset_of_currentR_10() { return static_cast<int32_t>(offsetof(Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7, ___currentR_10)); }
	inline PathNode_t43E01D5D5BB359AF635866FA5BBF4D5453B879B1 * get_currentR_10() const { return ___currentR_10; }
	inline PathNode_t43E01D5D5BB359AF635866FA5BBF4D5453B879B1 ** get_address_of_currentR_10() { return &___currentR_10; }
	inline void set_currentR_10(PathNode_t43E01D5D5BB359AF635866FA5BBF4D5453B879B1 * value)
	{
		___currentR_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentR_10), (void*)value);
	}

	inline static int32_t get_offset_of_duration_11() { return static_cast<int32_t>(offsetof(Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7, ___duration_11)); }
	inline float get_duration_11() const { return ___duration_11; }
	inline float* get_address_of_duration_11() { return &___duration_11; }
	inline void set_duration_11(float value)
	{
		___duration_11 = value;
	}

	inline static int32_t get_offset_of_searchedNodes_12() { return static_cast<int32_t>(offsetof(Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7, ___searchedNodes_12)); }
	inline int32_t get_searchedNodes_12() const { return ___searchedNodes_12; }
	inline int32_t* get_address_of_searchedNodes_12() { return &___searchedNodes_12; }
	inline void set_searchedNodes_12(int32_t value)
	{
		___searchedNodes_12 = value;
	}

	inline static int32_t get_offset_of_U3CPathfinding_IPathInternals_PooledU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7, ___U3CPathfinding_IPathInternals_PooledU3Ek__BackingField_13)); }
	inline bool get_U3CPathfinding_IPathInternals_PooledU3Ek__BackingField_13() const { return ___U3CPathfinding_IPathInternals_PooledU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CPathfinding_IPathInternals_PooledU3Ek__BackingField_13() { return &___U3CPathfinding_IPathInternals_PooledU3Ek__BackingField_13; }
	inline void set_U3CPathfinding_IPathInternals_PooledU3Ek__BackingField_13(bool value)
	{
		___U3CPathfinding_IPathInternals_PooledU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_hasBeenReset_14() { return static_cast<int32_t>(offsetof(Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7, ___hasBeenReset_14)); }
	inline bool get_hasBeenReset_14() const { return ___hasBeenReset_14; }
	inline bool* get_address_of_hasBeenReset_14() { return &___hasBeenReset_14; }
	inline void set_hasBeenReset_14(bool value)
	{
		___hasBeenReset_14 = value;
	}

	inline static int32_t get_offset_of_nnConstraint_15() { return static_cast<int32_t>(offsetof(Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7, ___nnConstraint_15)); }
	inline NNConstraint_tE3DA220E07B2C79E784789762C68A252D30D12A0 * get_nnConstraint_15() const { return ___nnConstraint_15; }
	inline NNConstraint_tE3DA220E07B2C79E784789762C68A252D30D12A0 ** get_address_of_nnConstraint_15() { return &___nnConstraint_15; }
	inline void set_nnConstraint_15(NNConstraint_tE3DA220E07B2C79E784789762C68A252D30D12A0 * value)
	{
		___nnConstraint_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nnConstraint_15), (void*)value);
	}

	inline static int32_t get_offset_of_next_16() { return static_cast<int32_t>(offsetof(Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7, ___next_16)); }
	inline Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7 * get_next_16() const { return ___next_16; }
	inline Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7 ** get_address_of_next_16() { return &___next_16; }
	inline void set_next_16(Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7 * value)
	{
		___next_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_16), (void*)value);
	}

	inline static int32_t get_offset_of_heuristic_17() { return static_cast<int32_t>(offsetof(Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7, ___heuristic_17)); }
	inline int32_t get_heuristic_17() const { return ___heuristic_17; }
	inline int32_t* get_address_of_heuristic_17() { return &___heuristic_17; }
	inline void set_heuristic_17(int32_t value)
	{
		___heuristic_17 = value;
	}

	inline static int32_t get_offset_of_heuristicScale_18() { return static_cast<int32_t>(offsetof(Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7, ___heuristicScale_18)); }
	inline float get_heuristicScale_18() const { return ___heuristicScale_18; }
	inline float* get_address_of_heuristicScale_18() { return &___heuristicScale_18; }
	inline void set_heuristicScale_18(float value)
	{
		___heuristicScale_18 = value;
	}

	inline static int32_t get_offset_of_U3CpathIDU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7, ___U3CpathIDU3Ek__BackingField_19)); }
	inline uint16_t get_U3CpathIDU3Ek__BackingField_19() const { return ___U3CpathIDU3Ek__BackingField_19; }
	inline uint16_t* get_address_of_U3CpathIDU3Ek__BackingField_19() { return &___U3CpathIDU3Ek__BackingField_19; }
	inline void set_U3CpathIDU3Ek__BackingField_19(uint16_t value)
	{
		___U3CpathIDU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_hTargetNode_20() { return static_cast<int32_t>(offsetof(Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7, ___hTargetNode_20)); }
	inline GraphNode_t5AE5B598437EAB21EE8089C9BB31651680B24505 * get_hTargetNode_20() const { return ___hTargetNode_20; }
	inline GraphNode_t5AE5B598437EAB21EE8089C9BB31651680B24505 ** get_address_of_hTargetNode_20() { return &___hTargetNode_20; }
	inline void set_hTargetNode_20(GraphNode_t5AE5B598437EAB21EE8089C9BB31651680B24505 * value)
	{
		___hTargetNode_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hTargetNode_20), (void*)value);
	}

	inline static int32_t get_offset_of_hTarget_21() { return static_cast<int32_t>(offsetof(Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7, ___hTarget_21)); }
	inline Int3_t2D1CEFEB4CE42AD8A3266E14F88533BF54BED72A  get_hTarget_21() const { return ___hTarget_21; }
	inline Int3_t2D1CEFEB4CE42AD8A3266E14F88533BF54BED72A * get_address_of_hTarget_21() { return &___hTarget_21; }
	inline void set_hTarget_21(Int3_t2D1CEFEB4CE42AD8A3266E14F88533BF54BED72A  value)
	{
		___hTarget_21 = value;
	}

	inline static int32_t get_offset_of_enabledTags_22() { return static_cast<int32_t>(offsetof(Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7, ___enabledTags_22)); }
	inline int32_t get_enabledTags_22() const { return ___enabledTags_22; }
	inline int32_t* get_address_of_enabledTags_22() { return &___enabledTags_22; }
	inline void set_enabledTags_22(int32_t value)
	{
		___enabledTags_22 = value;
	}

	inline static int32_t get_offset_of_internalTagPenalties_24() { return static_cast<int32_t>(offsetof(Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7, ___internalTagPenalties_24)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_internalTagPenalties_24() const { return ___internalTagPenalties_24; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_internalTagPenalties_24() { return &___internalTagPenalties_24; }
	inline void set_internalTagPenalties_24(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___internalTagPenalties_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalTagPenalties_24), (void*)value);
	}

	inline static int32_t get_offset_of_manualTagPenalties_25() { return static_cast<int32_t>(offsetof(Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7, ___manualTagPenalties_25)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_manualTagPenalties_25() const { return ___manualTagPenalties_25; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_manualTagPenalties_25() { return &___manualTagPenalties_25; }
	inline void set_manualTagPenalties_25(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___manualTagPenalties_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___manualTagPenalties_25), (void*)value);
	}

	inline static int32_t get_offset_of_claimed_26() { return static_cast<int32_t>(offsetof(Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7, ___claimed_26)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_claimed_26() const { return ___claimed_26; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_claimed_26() { return &___claimed_26; }
	inline void set_claimed_26(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___claimed_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___claimed_26), (void*)value);
	}

	inline static int32_t get_offset_of_releasedNotSilent_27() { return static_cast<int32_t>(offsetof(Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7, ___releasedNotSilent_27)); }
	inline bool get_releasedNotSilent_27() const { return ___releasedNotSilent_27; }
	inline bool* get_address_of_releasedNotSilent_27() { return &___releasedNotSilent_27; }
	inline void set_releasedNotSilent_27(bool value)
	{
		___releasedNotSilent_27 = value;
	}
};

struct Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7_StaticFields
{
public:
	// System.Int32[] Pathfinding.Path::ZeroTagPenalties
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___ZeroTagPenalties_23;

public:
	inline static int32_t get_offset_of_ZeroTagPenalties_23() { return static_cast<int32_t>(offsetof(Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7_StaticFields, ___ZeroTagPenalties_23)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_ZeroTagPenalties_23() const { return ___ZeroTagPenalties_23; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_ZeroTagPenalties_23() { return &___ZeroTagPenalties_23; }
	inline void set_ZeroTagPenalties_23(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___ZeroTagPenalties_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ZeroTagPenalties_23), (void*)value);
	}
};


// Pathfinding.PointGraph
struct PointGraph_t331222A85E3E7A36C2455C0F461DD57EAB864B8E  : public NavGraph_t478B9800AFB14C593281ADB34B05A2B630DC480F
{
public:
	// UnityEngine.Transform Pathfinding.PointGraph::root
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___root_11;
	// System.String Pathfinding.PointGraph::searchTag
	String_t* ___searchTag_12;
	// System.Single Pathfinding.PointGraph::maxDistance
	float ___maxDistance_13;
	// UnityEngine.Vector3 Pathfinding.PointGraph::limits
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___limits_14;
	// System.Boolean Pathfinding.PointGraph::raycast
	bool ___raycast_15;
	// System.Boolean Pathfinding.PointGraph::use2DPhysics
	bool ___use2DPhysics_16;
	// System.Boolean Pathfinding.PointGraph::thickRaycast
	bool ___thickRaycast_17;
	// System.Single Pathfinding.PointGraph::thickRaycastRadius
	float ___thickRaycastRadius_18;
	// System.Boolean Pathfinding.PointGraph::recursive
	bool ___recursive_19;
	// UnityEngine.LayerMask Pathfinding.PointGraph::mask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask_20;
	// Pathfinding.PointNode[] Pathfinding.PointGraph::nodes
	PointNodeU5BU5D_tF9C5ED2DCDDA4D1868F2CE616C5748A1846961C6* ___nodes_21;
	// Pathfinding.PointGraph/NodeDistanceMode Pathfinding.PointGraph::nearestNodeDistanceMode
	int32_t ___nearestNodeDistanceMode_22;
	// System.Int32 Pathfinding.PointGraph::<nodeCount>k__BackingField
	int32_t ___U3CnodeCountU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_root_11() { return static_cast<int32_t>(offsetof(PointGraph_t331222A85E3E7A36C2455C0F461DD57EAB864B8E, ___root_11)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_root_11() const { return ___root_11; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_root_11() { return &___root_11; }
	inline void set_root_11(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___root_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_11), (void*)value);
	}

	inline static int32_t get_offset_of_searchTag_12() { return static_cast<int32_t>(offsetof(PointGraph_t331222A85E3E7A36C2455C0F461DD57EAB864B8E, ___searchTag_12)); }
	inline String_t* get_searchTag_12() const { return ___searchTag_12; }
	inline String_t** get_address_of_searchTag_12() { return &___searchTag_12; }
	inline void set_searchTag_12(String_t* value)
	{
		___searchTag_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___searchTag_12), (void*)value);
	}

	inline static int32_t get_offset_of_maxDistance_13() { return static_cast<int32_t>(offsetof(PointGraph_t331222A85E3E7A36C2455C0F461DD57EAB864B8E, ___maxDistance_13)); }
	inline float get_maxDistance_13() const { return ___maxDistance_13; }
	inline float* get_address_of_maxDistance_13() { return &___maxDistance_13; }
	inline void set_maxDistance_13(float value)
	{
		___maxDistance_13 = value;
	}

	inline static int32_t get_offset_of_limits_14() { return static_cast<int32_t>(offsetof(PointGraph_t331222A85E3E7A36C2455C0F461DD57EAB864B8E, ___limits_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_limits_14() const { return ___limits_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_limits_14() { return &___limits_14; }
	inline void set_limits_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___limits_14 = value;
	}

	inline static int32_t get_offset_of_raycast_15() { return static_cast<int32_t>(offsetof(PointGraph_t331222A85E3E7A36C2455C0F461DD57EAB864B8E, ___raycast_15)); }
	inline bool get_raycast_15() const { return ___raycast_15; }
	inline bool* get_address_of_raycast_15() { return &___raycast_15; }
	inline void set_raycast_15(bool value)
	{
		___raycast_15 = value;
	}

	inline static int32_t get_offset_of_use2DPhysics_16() { return static_cast<int32_t>(offsetof(PointGraph_t331222A85E3E7A36C2455C0F461DD57EAB864B8E, ___use2DPhysics_16)); }
	inline bool get_use2DPhysics_16() const { return ___use2DPhysics_16; }
	inline bool* get_address_of_use2DPhysics_16() { return &___use2DPhysics_16; }
	inline void set_use2DPhysics_16(bool value)
	{
		___use2DPhysics_16 = value;
	}

	inline static int32_t get_offset_of_thickRaycast_17() { return static_cast<int32_t>(offsetof(PointGraph_t331222A85E3E7A36C2455C0F461DD57EAB864B8E, ___thickRaycast_17)); }
	inline bool get_thickRaycast_17() const { return ___thickRaycast_17; }
	inline bool* get_address_of_thickRaycast_17() { return &___thickRaycast_17; }
	inline void set_thickRaycast_17(bool value)
	{
		___thickRaycast_17 = value;
	}

	inline static int32_t get_offset_of_thickRaycastRadius_18() { return static_cast<int32_t>(offsetof(PointGraph_t331222A85E3E7A36C2455C0F461DD57EAB864B8E, ___thickRaycastRadius_18)); }
	inline float get_thickRaycastRadius_18() const { return ___thickRaycastRadius_18; }
	inline float* get_address_of_thickRaycastRadius_18() { return &___thickRaycastRadius_18; }
	inline void set_thickRaycastRadius_18(float value)
	{
		___thickRaycastRadius_18 = value;
	}

	inline static int32_t get_offset_of_recursive_19() { return static_cast<int32_t>(offsetof(PointGraph_t331222A85E3E7A36C2455C0F461DD57EAB864B8E, ___recursive_19)); }
	inline bool get_recursive_19() const { return ___recursive_19; }
	inline bool* get_address_of_recursive_19() { return &___recursive_19; }
	inline void set_recursive_19(bool value)
	{
		___recursive_19 = value;
	}

	inline static int32_t get_offset_of_mask_20() { return static_cast<int32_t>(offsetof(PointGraph_t331222A85E3E7A36C2455C0F461DD57EAB864B8E, ___mask_20)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_mask_20() const { return ___mask_20; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_mask_20() { return &___mask_20; }
	inline void set_mask_20(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___mask_20 = value;
	}

	inline static int32_t get_offset_of_nodes_21() { return static_cast<int32_t>(offsetof(PointGraph_t331222A85E3E7A36C2455C0F461DD57EAB864B8E, ___nodes_21)); }
	inline PointNodeU5BU5D_tF9C5ED2DCDDA4D1868F2CE616C5748A1846961C6* get_nodes_21() const { return ___nodes_21; }
	inline PointNodeU5BU5D_tF9C5ED2DCDDA4D1868F2CE616C5748A1846961C6** get_address_of_nodes_21() { return &___nodes_21; }
	inline void set_nodes_21(PointNodeU5BU5D_tF9C5ED2DCDDA4D1868F2CE616C5748A1846961C6* value)
	{
		___nodes_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nodes_21), (void*)value);
	}

	inline static int32_t get_offset_of_nearestNodeDistanceMode_22() { return static_cast<int32_t>(offsetof(PointGraph_t331222A85E3E7A36C2455C0F461DD57EAB864B8E, ___nearestNodeDistanceMode_22)); }
	inline int32_t get_nearestNodeDistanceMode_22() const { return ___nearestNodeDistanceMode_22; }
	inline int32_t* get_address_of_nearestNodeDistanceMode_22() { return &___nearestNodeDistanceMode_22; }
	inline void set_nearestNodeDistanceMode_22(int32_t value)
	{
		___nearestNodeDistanceMode_22 = value;
	}

	inline static int32_t get_offset_of_U3CnodeCountU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointGraph_t331222A85E3E7A36C2455C0F461DD57EAB864B8E, ___U3CnodeCountU3Ek__BackingField_23)); }
	inline int32_t get_U3CnodeCountU3Ek__BackingField_23() const { return ___U3CnodeCountU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CnodeCountU3Ek__BackingField_23() { return &___U3CnodeCountU3Ek__BackingField_23; }
	inline void set_U3CnodeCountU3Ek__BackingField_23(int32_t value)
	{
		___U3CnodeCountU3Ek__BackingField_23 = value;
	}
};


// Pathfinding.PointNode
struct PointNode_tF9D54771A269730EC0E0BEC46F3F361B817EF222  : public GraphNode_t5AE5B598437EAB21EE8089C9BB31651680B24505
{
public:
	// Pathfinding.Connection[] Pathfinding.PointNode::connections
	ConnectionU5BU5D_t946DE1BF1E4E05FF8695E89F55505806D050AB5D* ___connections_20;
	// UnityEngine.GameObject Pathfinding.PointNode::gameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject_21;

public:
	inline static int32_t get_offset_of_connections_20() { return static_cast<int32_t>(offsetof(PointNode_tF9D54771A269730EC0E0BEC46F3F361B817EF222, ___connections_20)); }
	inline ConnectionU5BU5D_t946DE1BF1E4E05FF8695E89F55505806D050AB5D* get_connections_20() const { return ___connections_20; }
	inline ConnectionU5BU5D_t946DE1BF1E4E05FF8695E89F55505806D050AB5D** get_address_of_connections_20() { return &___connections_20; }
	inline void set_connections_20(ConnectionU5BU5D_t946DE1BF1E4E05FF8695E89F55505806D050AB5D* value)
	{
		___connections_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connections_20), (void*)value);
	}

	inline static int32_t get_offset_of_gameObject_21() { return static_cast<int32_t>(offsetof(PointNode_tF9D54771A269730EC0E0BEC46F3F361B817EF222, ___gameObject_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameObject_21() const { return ___gameObject_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameObject_21() { return &___gameObject_21; }
	inline void set_gameObject_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameObject_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObject_21), (void*)value);
	}
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Camera/RenderRequest
struct RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94 
{
public:
	// UnityEngine.Camera/RenderRequestMode UnityEngine.Camera/RenderRequest::m_CameraRenderMode
	int32_t ___m_CameraRenderMode_0;
	// UnityEngine.RenderTexture UnityEngine.Camera/RenderRequest::m_ResultRT
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___m_ResultRT_1;
	// UnityEngine.Camera/RenderRequestOutputSpace UnityEngine.Camera/RenderRequest::m_OutputSpace
	int32_t ___m_OutputSpace_2;

public:
	inline static int32_t get_offset_of_m_CameraRenderMode_0() { return static_cast<int32_t>(offsetof(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94, ___m_CameraRenderMode_0)); }
	inline int32_t get_m_CameraRenderMode_0() const { return ___m_CameraRenderMode_0; }
	inline int32_t* get_address_of_m_CameraRenderMode_0() { return &___m_CameraRenderMode_0; }
	inline void set_m_CameraRenderMode_0(int32_t value)
	{
		___m_CameraRenderMode_0 = value;
	}

	inline static int32_t get_offset_of_m_ResultRT_1() { return static_cast<int32_t>(offsetof(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94, ___m_ResultRT_1)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_m_ResultRT_1() const { return ___m_ResultRT_1; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_m_ResultRT_1() { return &___m_ResultRT_1; }
	inline void set_m_ResultRT_1(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___m_ResultRT_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ResultRT_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_OutputSpace_2() { return static_cast<int32_t>(offsetof(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94, ___m_OutputSpace_2)); }
	inline int32_t get_m_OutputSpace_2() const { return ___m_OutputSpace_2; }
	inline int32_t* get_address_of_m_OutputSpace_2() { return &___m_OutputSpace_2; }
	inline void set_m_OutputSpace_2(int32_t value)
	{
		___m_OutputSpace_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Camera/RenderRequest
struct RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshaled_pinvoke
{
	int32_t ___m_CameraRenderMode_0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___m_ResultRT_1;
	int32_t ___m_OutputSpace_2;
};
// Native definition for COM marshalling of UnityEngine.Camera/RenderRequest
struct RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshaled_com
{
	int32_t ___m_CameraRenderMode_0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___m_ResultRT_1;
	int32_t ___m_OutputSpace_2;
};

// UnityEngine.MeshSubsetCombineUtility/MeshContainer
struct MeshContainer_tAE1C7A12F69A59346957D31E93D757361A70EDB2 
{
public:
	// UnityEngine.GameObject UnityEngine.MeshSubsetCombineUtility/MeshContainer::gameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject_0;
	// UnityEngine.MeshSubsetCombineUtility/MeshInstance UnityEngine.MeshSubsetCombineUtility/MeshContainer::instance
	MeshInstance_t59CE3427703DF1108911FDF5A6A9241237614BEB  ___instance_1;
	// System.Collections.Generic.List`1<UnityEngine.MeshSubsetCombineUtility/SubMeshInstance> UnityEngine.MeshSubsetCombineUtility/MeshContainer::subMeshInstances
	List_1_tAE24AB92F8203073F34FFCC54D01A4BCE246465B * ___subMeshInstances_2;

public:
	inline static int32_t get_offset_of_gameObject_0() { return static_cast<int32_t>(offsetof(MeshContainer_tAE1C7A12F69A59346957D31E93D757361A70EDB2, ___gameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameObject_0() const { return ___gameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameObject_0() { return &___gameObject_0; }
	inline void set_gameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_instance_1() { return static_cast<int32_t>(offsetof(MeshContainer_tAE1C7A12F69A59346957D31E93D757361A70EDB2, ___instance_1)); }
	inline MeshInstance_t59CE3427703DF1108911FDF5A6A9241237614BEB  get_instance_1() const { return ___instance_1; }
	inline MeshInstance_t59CE3427703DF1108911FDF5A6A9241237614BEB * get_address_of_instance_1() { return &___instance_1; }
	inline void set_instance_1(MeshInstance_t59CE3427703DF1108911FDF5A6A9241237614BEB  value)
	{
		___instance_1 = value;
	}

	inline static int32_t get_offset_of_subMeshInstances_2() { return static_cast<int32_t>(offsetof(MeshContainer_tAE1C7A12F69A59346957D31E93D757361A70EDB2, ___subMeshInstances_2)); }
	inline List_1_tAE24AB92F8203073F34FFCC54D01A4BCE246465B * get_subMeshInstances_2() const { return ___subMeshInstances_2; }
	inline List_1_tAE24AB92F8203073F34FFCC54D01A4BCE246465B ** get_address_of_subMeshInstances_2() { return &___subMeshInstances_2; }
	inline void set_subMeshInstances_2(List_1_tAE24AB92F8203073F34FFCC54D01A4BCE246465B * value)
	{
		___subMeshInstances_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subMeshInstances_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.MeshSubsetCombineUtility/MeshContainer
struct MeshContainer_tAE1C7A12F69A59346957D31E93D757361A70EDB2_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject_0;
	MeshInstance_t59CE3427703DF1108911FDF5A6A9241237614BEB  ___instance_1;
	List_1_tAE24AB92F8203073F34FFCC54D01A4BCE246465B * ___subMeshInstances_2;
};
// Native definition for COM marshalling of UnityEngine.MeshSubsetCombineUtility/MeshContainer
struct MeshContainer_tAE1C7A12F69A59346957D31E93D757361A70EDB2_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject_0;
	MeshInstance_t59CE3427703DF1108911FDF5A6A9241237614BEB  ___instance_1;
	List_1_tAE24AB92F8203073F34FFCC54D01A4BCE246465B * ___subMeshInstances_2;
};

// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Pathfinding.Connection,System.Boolean>
struct Func_2_t12A684E31209EBE9CC8B5B4A20EE11EE7E9125D8  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Int64>
struct Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.UInt32>
struct Func_2_tC3246CBAFBB962E2C6075141A9B6BFC365266428  : public MulticastDelegate_t
{
public:

public:
};


// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
struct Getter_2_t81181C5D3C83EE61FFA30B3479BF4F9FC6ECBBDB  : public MulticastDelegate_t
{
public:

public:
};


// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct StaticGetter_1_t34703320355FB45822699F7FF6C0BC577E0DDA01  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Reflection.MonoProperty
struct MonoProperty_t  : public RuntimePropertyInfo_tBFADAB74EBBB380C7FF1B5004FDD5A39447574B5
{
public:
	// System.IntPtr System.Reflection.MonoProperty::klass
	intptr_t ___klass_0;
	// System.IntPtr System.Reflection.MonoProperty::prop
	intptr_t ___prop_1;
	// System.Reflection.MonoPropertyInfo System.Reflection.MonoProperty::info
	MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82  ___info_2;
	// System.Reflection.PInfo System.Reflection.MonoProperty::cached
	int32_t ___cached_3;
	// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::cached_getter
	GetterAdapter_t4638094A6814F5738CB2D77994423EEBAB6F342A * ___cached_getter_4;

public:
	inline static int32_t get_offset_of_klass_0() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___klass_0)); }
	inline intptr_t get_klass_0() const { return ___klass_0; }
	inline intptr_t* get_address_of_klass_0() { return &___klass_0; }
	inline void set_klass_0(intptr_t value)
	{
		___klass_0 = value;
	}

	inline static int32_t get_offset_of_prop_1() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___prop_1)); }
	inline intptr_t get_prop_1() const { return ___prop_1; }
	inline intptr_t* get_address_of_prop_1() { return &___prop_1; }
	inline void set_prop_1(intptr_t value)
	{
		___prop_1 = value;
	}

	inline static int32_t get_offset_of_info_2() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___info_2)); }
	inline MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82  get_info_2() const { return ___info_2; }
	inline MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82 * get_address_of_info_2() { return &___info_2; }
	inline void set_info_2(MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82  value)
	{
		___info_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___info_2))->___parent_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___info_2))->___declaring_type_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___info_2))->___name_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___info_2))->___get_method_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___info_2))->___set_method_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_cached_3() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___cached_3)); }
	inline int32_t get_cached_3() const { return ___cached_3; }
	inline int32_t* get_address_of_cached_3() { return &___cached_3; }
	inline void set_cached_3(int32_t value)
	{
		___cached_3 = value;
	}

	inline static int32_t get_offset_of_cached_getter_4() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___cached_getter_4)); }
	inline GetterAdapter_t4638094A6814F5738CB2D77994423EEBAB6F342A * get_cached_getter_4() const { return ___cached_getter_4; }
	inline GetterAdapter_t4638094A6814F5738CB2D77994423EEBAB6F342A ** get_address_of_cached_getter_4() { return &___cached_getter_4; }
	inline void set_cached_getter_4(GetterAdapter_t4638094A6814F5738CB2D77994423EEBAB6F342A * value)
	{
		___cached_getter_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_getter_4), (void*)value);
	}
};


// System.Reflection.TypeInfo
struct TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F  : public Type_t
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// System.RuntimeType
struct RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07  : public TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F
{
public:
	// System.MonoTypeInfo System.RuntimeType::type_info
	MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79 * ___type_info_26;
	// System.Object System.RuntimeType::GenericCache
	RuntimeObject * ___GenericCache_27;
	// System.Reflection.RuntimeConstructorInfo System.RuntimeType::m_serializationCtor
	RuntimeConstructorInfo_t9B65F4BAA154E6B8888A68FA9BA02993090876BB * ___m_serializationCtor_28;

public:
	inline static int32_t get_offset_of_type_info_26() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07, ___type_info_26)); }
	inline MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79 * get_type_info_26() const { return ___type_info_26; }
	inline MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79 ** get_address_of_type_info_26() { return &___type_info_26; }
	inline void set_type_info_26(MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79 * value)
	{
		___type_info_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_info_26), (void*)value);
	}

	inline static int32_t get_offset_of_GenericCache_27() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07, ___GenericCache_27)); }
	inline RuntimeObject * get_GenericCache_27() const { return ___GenericCache_27; }
	inline RuntimeObject ** get_address_of_GenericCache_27() { return &___GenericCache_27; }
	inline void set_GenericCache_27(RuntimeObject * value)
	{
		___GenericCache_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GenericCache_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_serializationCtor_28() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07, ___m_serializationCtor_28)); }
	inline RuntimeConstructorInfo_t9B65F4BAA154E6B8888A68FA9BA02993090876BB * get_m_serializationCtor_28() const { return ___m_serializationCtor_28; }
	inline RuntimeConstructorInfo_t9B65F4BAA154E6B8888A68FA9BA02993090876BB ** get_address_of_m_serializationCtor_28() { return &___m_serializationCtor_28; }
	inline void set_m_serializationCtor_28(RuntimeConstructorInfo_t9B65F4BAA154E6B8888A68FA9BA02993090876BB * value)
	{
		___m_serializationCtor_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_serializationCtor_28), (void*)value);
	}
};

struct RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_StaticFields
{
public:
	// System.RuntimeType System.RuntimeType::ValueType
	RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * ___ValueType_10;
	// System.RuntimeType System.RuntimeType::EnumType
	RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * ___EnumType_11;
	// System.RuntimeType System.RuntimeType::ObjectType
	RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * ___ObjectType_12;
	// System.RuntimeType System.RuntimeType::StringType
	RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * ___StringType_13;
	// System.RuntimeType System.RuntimeType::DelegateType
	RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * ___DelegateType_14;
	// System.Type[] System.RuntimeType::s_SICtorParamTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___s_SICtorParamTypes_15;
	// System.RuntimeType System.RuntimeType::s_typedRef
	RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * ___s_typedRef_25;

public:
	inline static int32_t get_offset_of_ValueType_10() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_StaticFields, ___ValueType_10)); }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * get_ValueType_10() const { return ___ValueType_10; }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 ** get_address_of_ValueType_10() { return &___ValueType_10; }
	inline void set_ValueType_10(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * value)
	{
		___ValueType_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ValueType_10), (void*)value);
	}

	inline static int32_t get_offset_of_EnumType_11() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_StaticFields, ___EnumType_11)); }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * get_EnumType_11() const { return ___EnumType_11; }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 ** get_address_of_EnumType_11() { return &___EnumType_11; }
	inline void set_EnumType_11(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * value)
	{
		___EnumType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnumType_11), (void*)value);
	}

	inline static int32_t get_offset_of_ObjectType_12() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_StaticFields, ___ObjectType_12)); }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * get_ObjectType_12() const { return ___ObjectType_12; }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 ** get_address_of_ObjectType_12() { return &___ObjectType_12; }
	inline void set_ObjectType_12(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * value)
	{
		___ObjectType_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ObjectType_12), (void*)value);
	}

	inline static int32_t get_offset_of_StringType_13() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_StaticFields, ___StringType_13)); }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * get_StringType_13() const { return ___StringType_13; }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 ** get_address_of_StringType_13() { return &___StringType_13; }
	inline void set_StringType_13(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * value)
	{
		___StringType_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringType_13), (void*)value);
	}

	inline static int32_t get_offset_of_DelegateType_14() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_StaticFields, ___DelegateType_14)); }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * get_DelegateType_14() const { return ___DelegateType_14; }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 ** get_address_of_DelegateType_14() { return &___DelegateType_14; }
	inline void set_DelegateType_14(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * value)
	{
		___DelegateType_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DelegateType_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_SICtorParamTypes_15() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_StaticFields, ___s_SICtorParamTypes_15)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_s_SICtorParamTypes_15() const { return ___s_SICtorParamTypes_15; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_s_SICtorParamTypes_15() { return &___s_SICtorParamTypes_15; }
	inline void set_s_SICtorParamTypes_15(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___s_SICtorParamTypes_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SICtorParamTypes_15), (void*)value);
	}

	inline static int32_t get_offset_of_s_typedRef_25() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_StaticFields, ___s_typedRef_25)); }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * get_s_typedRef_25() const { return ___s_typedRef_25; }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 ** get_address_of_s_typedRef_25() { return &___s_typedRef_25; }
	inline void set_s_typedRef_25(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * value)
	{
		___s_typedRef_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_typedRef_25), (void*)value);
	}
};


// Pathfinding.VersionedMonoBehaviour
struct VersionedMonoBehaviour_tB264BC698B0793C6B129C523154FDA258541EBBB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Pathfinding.VersionedMonoBehaviour::version
	int32_t ___version_4;

public:
	inline static int32_t get_offset_of_version_4() { return static_cast<int32_t>(offsetof(VersionedMonoBehaviour_tB264BC698B0793C6B129C523154FDA258541EBBB, ___version_4)); }
	inline int32_t get_version_4() const { return ___version_4; }
	inline int32_t* get_address_of_version_4() { return &___version_4; }
	inline void set_version_4(int32_t value)
	{
		___version_4 = value;
	}
};


// Pathfinding.GraphModifier
struct GraphModifier_t3DD71426410B9F14077B110BB8DFAC8C83B72F9B  : public VersionedMonoBehaviour_tB264BC698B0793C6B129C523154FDA258541EBBB
{
public:
	// Pathfinding.GraphModifier Pathfinding.GraphModifier::prev
	GraphModifier_t3DD71426410B9F14077B110BB8DFAC8C83B72F9B * ___prev_6;
	// Pathfinding.GraphModifier Pathfinding.GraphModifier::next
	GraphModifier_t3DD71426410B9F14077B110BB8DFAC8C83B72F9B * ___next_7;
	// System.UInt64 Pathfinding.GraphModifier::uniqueID
	uint64_t ___uniqueID_8;

public:
	inline static int32_t get_offset_of_prev_6() { return static_cast<int32_t>(offsetof(GraphModifier_t3DD71426410B9F14077B110BB8DFAC8C83B72F9B, ___prev_6)); }
	inline GraphModifier_t3DD71426410B9F14077B110BB8DFAC8C83B72F9B * get_prev_6() const { return ___prev_6; }
	inline GraphModifier_t3DD71426410B9F14077B110BB8DFAC8C83B72F9B ** get_address_of_prev_6() { return &___prev_6; }
	inline void set_prev_6(GraphModifier_t3DD71426410B9F14077B110BB8DFAC8C83B72F9B * value)
	{
		___prev_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prev_6), (void*)value);
	}

	inline static int32_t get_offset_of_next_7() { return static_cast<int32_t>(offsetof(GraphModifier_t3DD71426410B9F14077B110BB8DFAC8C83B72F9B, ___next_7)); }
	inline GraphModifier_t3DD71426410B9F14077B110BB8DFAC8C83B72F9B * get_next_7() const { return ___next_7; }
	inline GraphModifier_t3DD71426410B9F14077B110BB8DFAC8C83B72F9B ** get_address_of_next_7() { return &___next_7; }
	inline void set_next_7(GraphModifier_t3DD71426410B9F14077B110BB8DFAC8C83B72F9B * value)
	{
		___next_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_7), (void*)value);
	}

	inline static int32_t get_offset_of_uniqueID_8() { return static_cast<int32_t>(offsetof(GraphModifier_t3DD71426410B9F14077B110BB8DFAC8C83B72F9B, ___uniqueID_8)); }
	inline uint64_t get_uniqueID_8() const { return ___uniqueID_8; }
	inline uint64_t* get_address_of_uniqueID_8() { return &___uniqueID_8; }
	inline void set_uniqueID_8(uint64_t value)
	{
		___uniqueID_8 = value;
	}
};

struct GraphModifier_t3DD71426410B9F14077B110BB8DFAC8C83B72F9B_StaticFields
{
public:
	// Pathfinding.GraphModifier Pathfinding.GraphModifier::root
	GraphModifier_t3DD71426410B9F14077B110BB8DFAC8C83B72F9B * ___root_5;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Pathfinding.GraphModifier> Pathfinding.GraphModifier::usedIDs
	Dictionary_2_t03F4DD9957703A38E34DAD34D8EDCF5C71D197DA * ___usedIDs_9;

public:
	inline static int32_t get_offset_of_root_5() { return static_cast<int32_t>(offsetof(GraphModifier_t3DD71426410B9F14077B110BB8DFAC8C83B72F9B_StaticFields, ___root_5)); }
	inline GraphModifier_t3DD71426410B9F14077B110BB8DFAC8C83B72F9B * get_root_5() const { return ___root_5; }
	inline GraphModifier_t3DD71426410B9F14077B110BB8DFAC8C83B72F9B ** get_address_of_root_5() { return &___root_5; }
	inline void set_root_5(GraphModifier_t3DD71426410B9F14077B110BB8DFAC8C83B72F9B * value)
	{
		___root_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_5), (void*)value);
	}

	inline static int32_t get_offset_of_usedIDs_9() { return static_cast<int32_t>(offsetof(GraphModifier_t3DD71426410B9F14077B110BB8DFAC8C83B72F9B_StaticFields, ___usedIDs_9)); }
	inline Dictionary_2_t03F4DD9957703A38E34DAD34D8EDCF5C71D197DA * get_usedIDs_9() const { return ___usedIDs_9; }
	inline Dictionary_2_t03F4DD9957703A38E34DAD34D8EDCF5C71D197DA ** get_address_of_usedIDs_9() { return &___usedIDs_9; }
	inline void set_usedIDs_9(Dictionary_2_t03F4DD9957703A38E34DAD34D8EDCF5C71D197DA * value)
	{
		___usedIDs_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___usedIDs_9), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// Pathfinding.Connection[]
struct ConnectionU5BU5D_t946DE1BF1E4E05FF8695E89F55505806D050AB5D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Connection_tD2B630AE1AEC23473343F09B8848EE83DF457A21  m_Items[1];

public:
	inline Connection_tD2B630AE1AEC23473343F09B8848EE83DF457A21  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Connection_tD2B630AE1AEC23473343F09B8848EE83DF457A21 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Connection_tD2B630AE1AEC23473343F09B8848EE83DF457A21  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___node_0), (void*)NULL);
	}
	inline Connection_tD2B630AE1AEC23473343F09B8848EE83DF457A21  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Connection_tD2B630AE1AEC23473343F09B8848EE83DF457A21 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Connection_tD2B630AE1AEC23473343F09B8848EE83DF457A21  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___node_0), (void*)NULL);
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
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  m_Items[1];

public:
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  m_Items[1];

public:
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Object[]
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * m_Items[1];

public:
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Pathfinding.PointNode[]
struct PointNodeU5BU5D_tF9C5ED2DCDDA4D1868F2CE616C5748A1846961C6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PointNode_tF9D54771A269730EC0E0BEC46F3F361B817EF222 * m_Items[1];

public:
	inline PointNode_tF9D54771A269730EC0E0BEC46F3F361B817EF222 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PointNode_tF9D54771A269730EC0E0BEC46F3F361B817EF222 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PointNode_tF9D54771A269730EC0E0BEC46F3F361B817EF222 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PointNode_tF9D54771A269730EC0E0BEC46F3F361B817EF222 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PointNode_tF9D54771A269730EC0E0BEC46F3F361B817EF222 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PointNode_tF9D54771A269730EC0E0BEC46F3F361B817EF222 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Linq.Buffer`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_1__ctor_mA024B62BA07A1D33F2FB4339135C5541A875E961_gshared (Buffer_1_tB294332D6A9005ABB8E979A62BA34A1CB39C10A7 * __this, RuntimeObject* ___source0, const RuntimeMethod* method);
// TElement[] System.Linq.Buffer`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Buffer_1_ToArray_m274B7B792C3090C653C48BABCC80EFD3C4C79B9F_gshared (Buffer_1_tB294332D6A9005ABB8E979A62BA34A1CB39C10A7 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mE985A35FC727FA9F519564063C5C5063209ADDA8_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_gshared_inline (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Stack_1_Pop_m883C5DEF33CA2E556AC710A9BE26F8BD2D4B182C_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m6B0D36DF5FAE8766ACB4727C05AC4766633A6FA7_gshared (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mA113B07C4C03A7CFBA37EE72824E5795AF960BE0_gshared (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_m6110D5C26F4DEC60704B85CFF991B12BD43C0027_gshared (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationPosePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationRemoveScalePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationScriptPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisRuntimeObject_mD023115A11ECA201E029F7C2BA23A36233C32413_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);

// System.Exception System.Linq.Error::ArgumentNull(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (String_t* ___s0, const RuntimeMethod* method);
// System.Void System.Linq.Buffer`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
inline void Buffer_1__ctor_mA024B62BA07A1D33F2FB4339135C5541A875E961 (Buffer_1_tB294332D6A9005ABB8E979A62BA34A1CB39C10A7 * __this, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	((  void (*) (Buffer_1_tB294332D6A9005ABB8E979A62BA34A1CB39C10A7 *, RuntimeObject*, const RuntimeMethod*))Buffer_1__ctor_mA024B62BA07A1D33F2FB4339135C5541A875E961_gshared)(__this, ___source0, method);
}
// TElement[] System.Linq.Buffer`1<System.Object>::ToArray()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Buffer_1_ToArray_m274B7B792C3090C653C48BABCC80EFD3C4C79B9F (Buffer_1_tB294332D6A9005ABB8E979A62BA34A1CB39C10A7 * __this, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (Buffer_1_tB294332D6A9005ABB8E979A62BA34A1CB39C10A7 *, const RuntimeMethod*))Buffer_1_ToArray_m274B7B792C3090C653C48BABCC80EFD3C4C79B9F_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * GameObject_AddComponent_mD183856CB5A1CCF1576221D7D6CEBC4092E734B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, Type_t * ___componentType0, const RuntimeMethod* method);
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * GameObject_GetComponent_mDF0C55D6EE63B6CA0DD45D627AD267004D6EC473 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * GameObject_GetComponentsInternal_mF491A337A167109189E2AB839584697EB2672E7D (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, Type_t * ___type0, bool ___useSearchTypeAsArrayReturnType1, bool ___recursive2, bool ___includeInactive3, bool ___reverse4, RuntimeObject * ___resultList5, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.String System.Environment::GetResourceString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617 (String_t* ___key0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegateInternal(System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_GetFunctionPointerForDelegateInternal_m2E54B2DA0F4B8DDB47CDD4C619508F89D34C5027 (Delegate_t * ___d0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr(System.Object,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToPtr_m25366DC7AB7C32DBCD2E0113585848466F207954 (RuntimeObject * ___structure0, intptr_t ___ptr1, bool ___fDeleteOld2, const RuntimeMethod* method);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m40103AA97DC582C557B912CF4BBE86A4D166F803 (RuntimeArray * ___sourceArray0, RuntimeArray * ___destinationArray1, int32_t ___length2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mesh::DefaultDimensionForChannel(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_DefaultDimensionForChannel_m95062483A5D77AC517FE0F87EC41250CFDDEF8FD (int32_t ___channel0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mesh::get_canAccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mesh_get_canAccess_m991B64F0FA651459A7E0DD4526D7EF0384F1792F (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mesh::HasVertexAttribute(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mesh_HasVertexAttribute_m55371DBBBA8C77FBF6404F0D7989C0C7BDE3275C (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___attr0, const RuntimeMethod* method);
// System.Array UnityEngine.Mesh::GetAllocArrayFromChannelImpl(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * Mesh_GetAllocArrayFromChannelImpl_m9EC298F950FDC7F699CB02A265AAE1E1E580B541 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::PrintErrorCantAccessChannel(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_PrintErrorCantAccessChannel_m39BB0FADC48525EAE52AA38AC8D7EE5BA650294C (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___ch0, const RuntimeMethod* method);
// System.Int32 UnityEngine.NoAllocHelpers::SafeLength(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_m02DFDBC654748FCB895D2ADDC5E5C92415C3A4B2 (RuntimeArray * ___values0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::SetSizedArrayForChannel(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32,System.Array,System.Int32,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetSizedArrayForChannel_m4E03A6A18D0C5BB49E89828AE7A0DD34BB20E7CC (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, RuntimeArray * ___values3, int32_t ___valuesArrayLength4, int32_t ___valuesStart5, int32_t ___valuesCount6, int32_t ___flags7, const RuntimeMethod* method);
// System.Array UnityEngine.NoAllocHelpers::ExtractArrayFromList(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * NoAllocHelpers_ExtractArrayFromList_m097334749C829402A9634BF025A54F3918D238DD (RuntimeObject * ___list0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Rendering.VertexAttribute UnityEngine.Mesh::GetUVChannel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_GetUVChannel_m9566A8802F5B87D061A2812FEF94230F8EA1CBBF (int32_t ___uvIndex0, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Object_FindObjectOfType_mFDEFCE84CE9C644F2B51DCC26CDAC78AC7E89B1B (Type_t * ___type0, bool ___includeInactive1, const RuntimeMethod* method);
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* Object_FindObjectsOfType_m0AEB81CC6F1D224A6F4DCC7D553482D54FC03C5A (Type_t * ___type0, bool ___includeInactive1, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Object_Instantiate_mADD3254CB5E6AB56FBB6964FE4B930F5187AB5AD (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Stack`1<Pathfinding.Path>>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m29507C3863A4A7CFA2E6056009ED2E21C7AA636F (Dictionary_2_t253D50DC0EE6FC08EEE5130FF02303EF92688438 * __this, Type_t * ___key0, Stack_1_tD6ADE73B94BEEF9FA151886F9D2C77392198A8B8 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t253D50DC0EE6FC08EEE5130FF02303EF92688438 *, Type_t *, Stack_1_tD6ADE73B94BEEF9FA151886F9D2C77392198A8B8 **, const RuntimeMethod*))Dictionary_2_TryGetValue_mE985A35FC727FA9F519564063C5C5063209ADDA8_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 System.Collections.Generic.Stack`1<Pathfinding.Path>::get_Count()
inline int32_t Stack_1_get_Count_mD292C55EEBE1CEAE6783505A3CF56728089B215B_inline (Stack_1_tD6ADE73B94BEEF9FA151886F9D2C77392198A8B8 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_tD6ADE73B94BEEF9FA151886F9D2C77392198A8B8 *, const RuntimeMethod*))Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.Stack`1<Pathfinding.Path>::Pop()
inline Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7 * Stack_1_Pop_mB0D6330490ABCF049B6B9C0C63861BD2C3C9970D (Stack_1_tD6ADE73B94BEEF9FA151886F9D2C77392198A8B8 * __this, const RuntimeMethod* method)
{
	return ((  Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7 * (*) (Stack_1_tD6ADE73B94BEEF9FA151886F9D2C77392198A8B8 *, const RuntimeMethod*))Stack_1_Pop_m883C5DEF33CA2E556AC710A9BE26F8BD2D4B182C_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Int32>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m74C828B5DCF04ED785A7E51ED731256B988ACA3F (Dictionary_2_t6CE7336785D73EB9AC6DBFDBCB55D4CF15047CB7 * __this, Type_t * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6CE7336785D73EB9AC6DBFDBCB55D4CF15047CB7 *, Type_t *, const RuntimeMethod*))Dictionary_2_ContainsKey_m6B0D36DF5FAE8766ACB4727C05AC4766633A6FA7_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Int32>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m48622C461B49F93ED769FD774561C5DD6CFF7339 (Dictionary_2_t6CE7336785D73EB9AC6DBFDBCB55D4CF15047CB7 * __this, Type_t * ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6CE7336785D73EB9AC6DBFDBCB55D4CF15047CB7 *, Type_t *, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_mA113B07C4C03A7CFBA37EE72824E5795AF960BE0_gshared)(__this, ___key0, ___value1, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Type,System.Int32>::get_Item(!0)
inline int32_t Dictionary_2_get_Item_m5DC830FD33B88605B2AA1FEC7DE1A432315F3466 (Dictionary_2_t6CE7336785D73EB9AC6DBFDBCB55D4CF15047CB7 * __this, Type_t * ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t6CE7336785D73EB9AC6DBFDBCB55D4CF15047CB7 *, Type_t *, const RuntimeMethod*))Dictionary_2_get_Item_m6110D5C26F4DEC60704B85CFF991B12BD43C0027_gshared)(__this, ___key0, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMixerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationPosePlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationRemoveScalePlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationScriptPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<System.Object>()
inline bool PlayableHandle_IsPlayableOfType_TisRuntimeObject_mD023115A11ECA201E029F7C2BA23A36233C32413 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisRuntimeObject_mD023115A11ECA201E029F7C2BA23A36233C32413_gshared)(__this, method);
}
// System.Int32 Pathfinding.PointGraph::get_nodeCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointGraph_get_nodeCount_mCF9187A2FBD716D5100561F312529F76B1C00440_inline (PointGraph_t331222A85E3E7A36C2455C0F461DD57EAB864B8E * __this, const RuntimeMethod* method);
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void System.Array::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_m6AF950973942E09BAB1F21B055BBD2CD58C980B2 (RuntimeArray * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method);
// System.Void Pathfinding.PointNode::SetPosition(Pathfinding.Int3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointNode_SetPosition_m0C614485CF2645F48D8817CCD4A4250A0F370883_inline (PointNode_tF9D54771A269730EC0E0BEC46F3F361B817EF222 * __this, Int3_t2D1CEFEB4CE42AD8A3266E14F88533BF54BED72A  ___value0, const RuntimeMethod* method);
// System.Void Pathfinding.GraphNode::set_GraphIndex(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphNode_set_GraphIndex_mFC4BF4F39C2213D8CA0EE160C25718866C7C39FC (GraphNode_t5AE5B598437EAB21EE8089C9BB31651680B24505 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Void Pathfinding.GraphNode::set_Walkable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphNode_set_Walkable_m9D6C618B5469ECB2A93898FD5BEDF9A25406D5ED (GraphNode_t5AE5B598437EAB21EE8089C9BB31651680B24505 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Pathfinding.PointGraph::set_nodeCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointGraph_set_nodeCount_m3A11A2B6E0995261C3498E7446FA04835E1868F3_inline (PointGraph_t331222A85E3E7A36C2455C0F461DD57EAB864B8E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.RuntimeTypeHandle::HasReferences(System.RuntimeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeTypeHandle_HasReferences_m4838780BFA354CC3379547DE1595EA5D865D7DC2 (RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * ___type0, const RuntimeMethod* method);
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * ScriptableObject_CreateInstance_m5371BDC0B4F60FE15914A7BB3FBE07D0ACA0A8D4 (Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90 (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5 (int32_t ___argument0, const RuntimeMethod* method);
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy<System.Object,System.Int32>(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_ThenBy_TisRuntimeObject_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mC7FD4D2CB4D97DAD6DFF1EFA91D15FFE41F3AFC5_gshared (RuntimeObject* ___source0, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___keySelector1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1;
		L_1 = Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_ThenBy_TisRuntimeObject_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mC7FD4D2CB4D97DAD6DFF1EFA91D15FFE41F3AFC5_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_3 = ___keySelector1;
		RuntimeObject* L_4;
		L_4 = GenericInterfaceFuncInvoker3< RuntimeObject*, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, RuntimeObject*, bool >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (RuntimeObject*)L_2, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_3, (RuntimeObject*)NULL, (bool)0);
		return (RuntimeObject*)L_4;
	}
}
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy<System.Object,System.Int64>(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_ThenBy_TisRuntimeObject_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_mC0423406F04EBEA559B8F8A325A511592A2B668A_gshared (RuntimeObject* ___source0, Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * ___keySelector1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1;
		L_1 = Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_ThenBy_TisRuntimeObject_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_mC0423406F04EBEA559B8F8A325A511592A2B668A_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * L_3 = ___keySelector1;
		RuntimeObject* L_4;
		L_4 = GenericInterfaceFuncInvoker3< RuntimeObject*, Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *, RuntimeObject*, bool >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (RuntimeObject*)L_2, (Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *)L_3, (RuntimeObject*)NULL, (bool)0);
		return (RuntimeObject*)L_4;
	}
}
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy<System.Object,System.Object>(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_ThenBy_TisRuntimeObject_TisRuntimeObject_m2279EF05F58E64223C7F035666211E2BC45274A2_gshared (RuntimeObject* ___source0, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___keySelector1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1;
		L_1 = Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_ThenBy_TisRuntimeObject_TisRuntimeObject_m2279EF05F58E64223C7F035666211E2BC45274A2_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_3 = ___keySelector1;
		RuntimeObject* L_4;
		L_4 = GenericInterfaceFuncInvoker3< RuntimeObject*, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject*, bool >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (RuntimeObject*)L_2, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_3, (RuntimeObject*)NULL, (bool)0);
		return (RuntimeObject*)L_4;
	}
}
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy<System.Object,System.UInt32>(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_ThenBy_TisRuntimeObject_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m278DE85CD4637FC5BC5897059235A51D0D43319F_gshared (RuntimeObject* ___source0, Func_2_tC3246CBAFBB962E2C6075141A9B6BFC365266428 * ___keySelector1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1;
		L_1 = Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_ThenBy_TisRuntimeObject_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m278DE85CD4637FC5BC5897059235A51D0D43319F_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		Func_2_tC3246CBAFBB962E2C6075141A9B6BFC365266428 * L_3 = ___keySelector1;
		RuntimeObject* L_4;
		L_4 = GenericInterfaceFuncInvoker3< RuntimeObject*, Func_2_tC3246CBAFBB962E2C6075141A9B6BFC365266428 *, RuntimeObject*, bool >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (RuntimeObject*)L_2, (Func_2_tC3246CBAFBB962E2C6075141A9B6BFC365266428 *)L_3, (RuntimeObject*)NULL, (bool)0);
		return (RuntimeObject*)L_4;
	}
}
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Enumerable_ToArray_TisRuntimeObject_mEB06425105813A21FC826C4144F8456EAE2304DE_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	Buffer_1_tB294332D6A9005ABB8E979A62BA34A1CB39C10A7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1;
		L_1 = Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_ToArray_TisRuntimeObject_mEB06425105813A21FC826C4144F8456EAE2304DE_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		Buffer_1_tB294332D6A9005ABB8E979A62BA34A1CB39C10A7  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Buffer_1__ctor_mA024B62BA07A1D33F2FB4339135C5541A875E961((&L_3), (RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (Buffer_1_tB294332D6A9005ABB8E979A62BA34A1CB39C10A7 )L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4;
		L_4 = Buffer_1_ToArray_m274B7B792C3090C653C48BABCC80EFD3C4C79B9F((Buffer_1_tB294332D6A9005ABB8E979A62BA34A1CB39C10A7 *)(Buffer_1_tB294332D6A9005ABB8E979A62BA34A1CB39C10A7 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_4;
	}
}
// System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary<System.Object,System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * Enumerable_ToDictionary_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mDA6A7F2B6E8A2386EFDE5C9A39390756ED6B6049_gshared (RuntimeObject* ___source0, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___keySelector1, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___elementSelector2, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___source0;
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_1 = ___keySelector1;
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___elementSelector2;
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_3;
		L_3 = ((  Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * (*) (RuntimeObject*, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_0, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, (RuntimeObject*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_3;
	}
}
// System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary<System.Object,System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * Enumerable_ToDictionary_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mCC85F7110F6E48C86573AE7A20E1073697D0FC6C_gshared (RuntimeObject* ___source0, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___keySelector1, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___elementSelector2, RuntimeObject* ___comparer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1;
		L_1 = Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_ToDictionary_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mCC85F7110F6E48C86573AE7A20E1073697D0FC6C_RuntimeMethod_var)));
	}

IL_000e:
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___keySelector1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3;
		L_3 = Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral12D34C4D5361DBE1804B6F49EDED3C800B442095)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_ToDictionary_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mCC85F7110F6E48C86573AE7A20E1073697D0FC6C_RuntimeMethod_var)));
	}

IL_001c:
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_4 = ___elementSelector2;
		if (L_4)
		{
			goto IL_002a;
		}
	}
	{
		Exception_t * L_5;
		L_5 = Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0FDD716E74C52D972A9997C1B342B1A650D1D139)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_ToDictionary_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mCC85F7110F6E48C86573AE7A20E1073697D0FC6C_RuntimeMethod_var)));
	}

IL_002a:
	{
		RuntimeObject* L_6 = ___comparer3;
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_7 = (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_7, (RuntimeObject*)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_7;
		RuntimeObject* L_8 = ___source0;
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (RuntimeObject*)L_8);
		V_1 = (RuntimeObject*)L_9;
	}

IL_0038:
	try
	{// begin try (depth: 1)
		{
			goto IL_0055;
		}

IL_003a:
		{
			RuntimeObject* L_10 = V_1;
			RuntimeObject * L_11;
			L_11 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 3), (RuntimeObject*)L_10);
			V_2 = (RuntimeObject *)L_11;
			Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_12 = V_0;
			Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_13 = ___keySelector1;
			RuntimeObject * L_14 = V_2;
			RuntimeObject * L_15;
			L_15 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_13, (RuntimeObject *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
			Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_16 = ___elementSelector2;
			RuntimeObject * L_17 = V_2;
			RuntimeObject * L_18;
			L_18 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_16, (RuntimeObject *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
			((  void (*) (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_12, (RuntimeObject *)L_15, (RuntimeObject *)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		}

IL_0055:
		{
			RuntimeObject* L_19 = V_1;
			bool L_20;
			L_20 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
			if (L_20)
			{
				goto IL_003a;
			}
		}

IL_005d:
		{
			IL2CPP_LEAVE(0x69, FINALLY_005f);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{// begin finally (depth: 1)
		{
			RuntimeObject* L_21 = V_1;
			if (!L_21)
			{
				goto IL_0068;
			}
		}

IL_0062:
		{
			RuntimeObject* L_22 = V_1;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_22);
		}

IL_0068:
		{
			IL2CPP_END_FINALLY(95)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x69, IL_0069)
	}

IL_0069:
	{
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_23 = V_0;
		return (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_23;
	}
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<Pathfinding.Connection>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 * Enumerable_ToList_TisConnection_tD2B630AE1AEC23473343F09B8848EE83DF457A21_m5B320B3E843618A608341E15BA43F1EE9A852130_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1;
		L_1 = Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_ToList_TisConnection_tD2B630AE1AEC23473343F09B8848EE83DF457A21_m5B320B3E843618A608341E15BA43F1EE9A852130_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 * L_3 = (List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_3, (RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 *)L_3;
	}
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Enumerable_ToList_TisRuntimeObject_m3AB0AB30DAC385C2DF8A16D5CB8D3D41F62C751F_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1;
		L_1 = Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_ToList_TisRuntimeObject_m3AB0AB30DAC385C2DF8A16D5CB8D3D41F62C751F_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_3, (RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<Pathfinding.Connection>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisConnection_tD2B630AE1AEC23473343F09B8848EE83DF457A21_m9561CFD60F8325D319FC3864BBD313F21579E214_gshared (RuntimeObject* ___source0, Func_2_t12A684E31209EBE9CC8B5B4A20EE11EE7E9125D8 * ___predicate1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1;
		L_1 = Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_Where_TisConnection_tD2B630AE1AEC23473343F09B8848EE83DF457A21_m9561CFD60F8325D319FC3864BBD313F21579E214_RuntimeMethod_var)));
	}

IL_000e:
	{
		Func_2_t12A684E31209EBE9CC8B5B4A20EE11EE7E9125D8 * L_2 = ___predicate1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3;
		L_3 = Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_Where_TisConnection_tD2B630AE1AEC23473343F09B8848EE83DF457A21_m9561CFD60F8325D319FC3864BBD313F21579E214_RuntimeMethod_var)));
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___source0;
		if (!((Iterator_1_tD7E9D63D1FBE49097BB305994FF97A4EA391AEF3 *)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))))
		{
			goto IL_0031;
		}
	}
	{
		RuntimeObject* L_5 = ___source0;
		Func_2_t12A684E31209EBE9CC8B5B4A20EE11EE7E9125D8 * L_6 = ___predicate1;
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker1< RuntimeObject*, Func_2_t12A684E31209EBE9CC8B5B4A20EE11EE7E9125D8 * >::Invoke(14 /* System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1<Pathfinding.Connection>::Where(System.Func`2<TSource,System.Boolean>) */, (Iterator_1_tD7E9D63D1FBE49097BB305994FF97A4EA391AEF3 *)((Iterator_1_tD7E9D63D1FBE49097BB305994FF97A4EA391AEF3 *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))), (Func_2_t12A684E31209EBE9CC8B5B4A20EE11EE7E9125D8 *)L_6);
		return (RuntimeObject*)L_7;
	}

IL_0031:
	{
		RuntimeObject* L_8 = ___source0;
		if (!((ConnectionU5BU5D_t946DE1BF1E4E05FF8695E89F55505806D050AB5D*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_9 = ___source0;
		Func_2_t12A684E31209EBE9CC8B5B4A20EE11EE7E9125D8 * L_10 = ___predicate1;
		WhereArrayIterator_1_t7E78F2A55C3655A42485D3855D61F808319EC9F2 * L_11 = (WhereArrayIterator_1_t7E78F2A55C3655A42485D3855D61F808319EC9F2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (WhereArrayIterator_1_t7E78F2A55C3655A42485D3855D61F808319EC9F2 *, ConnectionU5BU5D_t946DE1BF1E4E05FF8695E89F55505806D050AB5D*, Func_2_t12A684E31209EBE9CC8B5B4A20EE11EE7E9125D8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_11, (ConnectionU5BU5D_t946DE1BF1E4E05FF8695E89F55505806D050AB5D*)((ConnectionU5BU5D_t946DE1BF1E4E05FF8695E89F55505806D050AB5D*)Castclass((RuntimeObject*)L_9, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))), (Func_2_t12A684E31209EBE9CC8B5B4A20EE11EE7E9125D8 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		return (RuntimeObject*)L_11;
	}

IL_0046:
	{
		RuntimeObject* L_12 = ___source0;
		if (!((List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 *)IsInst((RuntimeObject*)L_12, IL2CPP_RGCTX_DATA(method->rgctx_data, 5))))
		{
			goto IL_005b;
		}
	}
	{
		RuntimeObject* L_13 = ___source0;
		Func_2_t12A684E31209EBE9CC8B5B4A20EE11EE7E9125D8 * L_14 = ___predicate1;
		WhereListIterator_1_t7F14C4772E31328D835EC9AD64507C1AC11768B2 * L_15 = (WhereListIterator_1_t7F14C4772E31328D835EC9AD64507C1AC11768B2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 6));
		((  void (*) (WhereListIterator_1_t7F14C4772E31328D835EC9AD64507C1AC11768B2 *, List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 *, Func_2_t12A684E31209EBE9CC8B5B4A20EE11EE7E9125D8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7)->methodPointer)(L_15, (List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 *)((List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 *)Castclass((RuntimeObject*)L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 5))), (Func_2_t12A684E31209EBE9CC8B5B4A20EE11EE7E9125D8 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7));
		return (RuntimeObject*)L_15;
	}

IL_005b:
	{
		RuntimeObject* L_16 = ___source0;
		Func_2_t12A684E31209EBE9CC8B5B4A20EE11EE7E9125D8 * L_17 = ___predicate1;
		WhereEnumerableIterator_1_tF8FC4B4721B79F66E3FA482D7E83494170107A7D * L_18 = (WhereEnumerableIterator_1_tF8FC4B4721B79F66E3FA482D7E83494170107A7D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 8));
		((  void (*) (WhereEnumerableIterator_1_tF8FC4B4721B79F66E3FA482D7E83494170107A7D *, RuntimeObject*, Func_2_t12A684E31209EBE9CC8B5B4A20EE11EE7E9125D8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 9)->methodPointer)(L_18, (RuntimeObject*)L_16, (Func_2_t12A684E31209EBE9CC8B5B4A20EE11EE7E9125D8 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 9));
		return (RuntimeObject*)L_18;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_mD8AE6780E78249FC87B2344E09D130624E70D7DA_gshared (RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1;
		L_1 = Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_Where_TisRuntimeObject_mD8AE6780E78249FC87B2344E09D130624E70D7DA_RuntimeMethod_var)));
	}

IL_000e:
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3;
		L_3 = Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_Where_TisRuntimeObject_mD8AE6780E78249FC87B2344E09D130624E70D7DA_RuntimeMethod_var)));
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___source0;
		if (!((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))))
		{
			goto IL_0031;
		}
	}
	{
		RuntimeObject* L_5 = ___source0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = ___predicate1;
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker1< RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * >::Invoke(14 /* System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>) */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))), (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_6);
		return (RuntimeObject*)L_7;
	}

IL_0031:
	{
		RuntimeObject* L_8 = ___source0;
		if (!((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_9 = ___source0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_10 = ___predicate1;
		WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * L_11 = (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_11, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)Castclass((RuntimeObject*)L_9, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))), (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		return (RuntimeObject*)L_11;
	}

IL_0046:
	{
		RuntimeObject* L_12 = ___source0;
		if (!((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)IsInst((RuntimeObject*)L_12, IL2CPP_RGCTX_DATA(method->rgctx_data, 5))))
		{
			goto IL_005b;
		}
	}
	{
		RuntimeObject* L_13 = ___source0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_14 = ___predicate1;
		WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * L_15 = (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 6));
		((  void (*) (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7)->methodPointer)(L_15, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)Castclass((RuntimeObject*)L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 5))), (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7));
		return (RuntimeObject*)L_15;
	}

IL_005b:
	{
		RuntimeObject* L_16 = ___source0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_17 = ___predicate1;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_18 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 8));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 9)->methodPointer)(L_18, (RuntimeObject*)L_16, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 9));
		return (RuntimeObject*)L_18;
	}
}
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mF5562A0C81CEDFE1C295F7E16FC6904B5057CB2D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_2;
		L_2 = GameObject_AddComponent_mD183856CB5A1CCF1576221D7D6CEBC4092E734B8((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001e;
	}

IL_001e:
	{
		RuntimeObject * L_3 = V_0;
		return (RuntimeObject *)L_3;
	}
}
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_2;
		L_2 = GameObject_GetComponent_mDF0C55D6EE63B6CA0DD45D627AD267004D6EC473((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0019;
	}

IL_0019:
	{
		RuntimeObject * L_3 = V_0;
		return (RuntimeObject *)L_3;
	}
}
// System.Void UnityEngine.GameObject::GetComponentsInChildren<System.Object>(System.Boolean,System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_GetComponentsInChildren_TisRuntimeObject_mCE4AC493D2A17500C22BF00EBF35082CB49637EC_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___includeInactive0, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___results1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		bool L_2 = ___includeInactive0;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = ___results1;
		RuntimeArray * L_4;
		L_4 = GameObject_GetComponentsInternal_mF491A337A167109189E2AB839584697EB2672E7D((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)__this, (Type_t *)L_1, (bool)1, (bool)1, (bool)L_2, (bool)0, (RuntimeObject *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1<T> Pathfinding.GraphModifier::GetModifiersOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * GraphModifier_GetModifiersOfType_TisRuntimeObject_m068570E7D1068B9DBB789B355FF5B2D4401F3875_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphModifier_t3DD71426410B9F14077B110BB8DFAC8C83B72F9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GraphModifier_t3DD71426410B9F14077B110BB8DFAC8C83B72F9B * V_0 = NULL;
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	{
		// var current = root;
		IL2CPP_RUNTIME_CLASS_INIT(GraphModifier_t3DD71426410B9F14077B110BB8DFAC8C83B72F9B_il2cpp_TypeInfo_var);
		GraphModifier_t3DD71426410B9F14077B110BB8DFAC8C83B72F9B * L_0 = ((GraphModifier_t3DD71426410B9F14077B110BB8DFAC8C83B72F9B_StaticFields*)il2cpp_codegen_static_fields_for(GraphModifier_t3DD71426410B9F14077B110BB8DFAC8C83B72F9B_il2cpp_TypeInfo_var))->get_root_5();
		V_0 = (GraphModifier_t3DD71426410B9F14077B110BB8DFAC8C83B72F9B *)L_0;
		// var result = new List<T>();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_1 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_1;
		goto IL_0036;
	}

IL_000e:
	{
		// var cast = current as T;
		GraphModifier_t3DD71426410B9F14077B110BB8DFAC8C83B72F9B * L_2 = V_0;
		V_2 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))), IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		// if (cast != null) result.Add(cast);
		RuntimeObject * L_3 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// if (cast != null) result.Add(cast);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_5 = V_1;
		RuntimeObject * L_6 = V_2;
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_5, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
	}

IL_002f:
	{
		// current = current.next;
		GraphModifier_t3DD71426410B9F14077B110BB8DFAC8C83B72F9B * L_7 = V_0;
		GraphModifier_t3DD71426410B9F14077B110BB8DFAC8C83B72F9B * L_8 = (GraphModifier_t3DD71426410B9F14077B110BB8DFAC8C83B72F9B *)L_7->get_next_7();
		V_0 = (GraphModifier_t3DD71426410B9F14077B110BB8DFAC8C83B72F9B *)L_8;
	}

IL_0036:
	{
		// while (current != null) {
		GraphModifier_t3DD71426410B9F14077B110BB8DFAC8C83B72F9B * L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_000e;
		}
	}
	{
		// return result;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_11 = V_1;
		return (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_11;
	}
}
// T System.Runtime.CompilerServices.JitHelpers::UnsafeCast<System.Object>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JitHelpers_UnsafeCast_TisRuntimeObject_m65F1FE64476CD8C086EE70218E2B4FC805013F1E_gshared (RuntimeObject * ___o0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___o0;
		RuntimeObject * L_1;
		L_1 = ((  RuntimeObject * (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_1;
	}
}
// System.Int32 System.Runtime.CompilerServices.JitHelpers::UnsafeEnumCast<System.Int32Enum>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JitHelpers_UnsafeEnumCast_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m23AF1F7EC0B6880CB19E5C34CDCCB6546A57517E_gshared (int32_t ___val0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___val0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (int32_t)L_1;
	}
}
// T System.Threading.LazyInitializer::EnsureInitialized<System.Object>(T&,System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * LazyInitializer_EnsureInitialized_TisRuntimeObject_m335DECAF42379960212D868094AAE4DA98DFBB1B_gshared (RuntimeObject ** ___target0, Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___valueFactory1, const RuntimeMethod* method)
{
	{
		RuntimeObject ** L_0 = ___target0;
		RuntimeObject * L_1;
		L_1 = VolatileRead((RuntimeObject **)(RuntimeObject **)L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject ** L_2 = ___target0;
		RuntimeObject * L_3 = (*(RuntimeObject **)L_2);
		return (RuntimeObject *)L_3;
	}

IL_0014:
	{
		RuntimeObject ** L_4 = ___target0;
		Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * L_5 = ___valueFactory1;
		RuntimeObject * L_6;
		L_6 = ((  RuntimeObject * (*) (RuntimeObject **, Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((RuntimeObject **)(RuntimeObject **)L_4, (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return (RuntimeObject *)L_6;
	}
}
// T System.Threading.LazyInitializer::EnsureInitializedCore<System.Object>(T&,System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * LazyInitializer_EnsureInitializedCore_TisRuntimeObject_mC468F357800B4B6457ADD417CB364875AE5F30A5_gshared (RuntimeObject ** ___target0, Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___valueFactory1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * L_0 = ___valueFactory1;
		RuntimeObject * L_1;
		L_1 = ((  RuntimeObject * (*) (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (RuntimeObject *)L_1;
		RuntimeObject * L_2 = V_0;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_3;
		L_3 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE958A63C0675D65C92182FC45CE3E78A8DD48061)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_4 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_4, (String_t*)L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LazyInitializer_EnsureInitializedCore_TisRuntimeObject_mC468F357800B4B6457ADD417CB364875AE5F30A5_RuntimeMethod_var)));
	}

IL_001f:
	{
		RuntimeObject ** L_5 = ___target0;
		RuntimeObject * L_6 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_7 = V_1;
		RuntimeObject * L_8;
		L_8 = InterlockedCompareExchangeImpl<RuntimeObject *>((RuntimeObject **)(RuntimeObject **)L_5, (RuntimeObject *)L_6, (RuntimeObject *)L_7);
		RuntimeObject ** L_9 = ___target0;
		RuntimeObject * L_10 = (*(RuntimeObject **)L_9);
		return (RuntimeObject *)L_10;
	}
}
// System.Void Pathfinding.Util.ListExtensions::ClearFast<UnityEngine.Color32>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListExtensions_ClearFast_TisColor32_tDB54A78627878A7D2DE42BB028D64306A18E858D_mCFD7604EB6A2ECB23C4EAE5529AAF4B483019A6F_gshared (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * ___list0, const RuntimeMethod* method)
{
	{
		// if (list.Count*2 < list.Capacity) {
		List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * L_0 = ___list0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * L_2 = ___list0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)2))) >= ((int32_t)L_3)))
		{
			goto IL_001e;
		}
	}
	{
		// list.RemoveRange(0, list.Count);
		List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * L_4 = ___list0;
		List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * L_5 = ___list0;
		int32_t L_6;
		L_6 = ((  int32_t (*) (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		((  void (*) (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 *)L_4, (int32_t)0, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// } else {
		return;
	}

IL_001e:
	{
		// list.Clear();
		List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * L_7 = ___list0;
		((  void (*) (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void Pathfinding.Util.ListExtensions::ClearFast<Pathfinding.Connection>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListExtensions_ClearFast_TisConnection_tD2B630AE1AEC23473343F09B8848EE83DF457A21_m6EBFC9A848B50C2C052AB11A948FC7581A146356_gshared (List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 * ___list0, const RuntimeMethod* method)
{
	{
		// if (list.Count*2 < list.Capacity) {
		List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 * L_0 = ___list0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 * L_2 = ___list0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)2))) >= ((int32_t)L_3)))
		{
			goto IL_001e;
		}
	}
	{
		// list.RemoveRange(0, list.Count);
		List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 * L_4 = ___list0;
		List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 * L_5 = ___list0;
		int32_t L_6;
		L_6 = ((  int32_t (*) (List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		((  void (*) (List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 *)L_4, (int32_t)0, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// } else {
		return;
	}

IL_001e:
	{
		// list.Clear();
		List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 * L_7 = ___list0;
		((  void (*) (List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void Pathfinding.Util.ListExtensions::ClearFast<Pathfinding.Int3>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListExtensions_ClearFast_TisInt3_t2D1CEFEB4CE42AD8A3266E14F88533BF54BED72A_m81798A09B12ADF2B9A2DA436E638035AB183A94B_gshared (List_1_tFE64456C0A7009756022233F6A62DD908233A250 * ___list0, const RuntimeMethod* method)
{
	{
		// if (list.Count*2 < list.Capacity) {
		List_1_tFE64456C0A7009756022233F6A62DD908233A250 * L_0 = ___list0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (List_1_tFE64456C0A7009756022233F6A62DD908233A250 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_tFE64456C0A7009756022233F6A62DD908233A250 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		List_1_tFE64456C0A7009756022233F6A62DD908233A250 * L_2 = ___list0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (List_1_tFE64456C0A7009756022233F6A62DD908233A250 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_tFE64456C0A7009756022233F6A62DD908233A250 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)2))) >= ((int32_t)L_3)))
		{
			goto IL_001e;
		}
	}
	{
		// list.RemoveRange(0, list.Count);
		List_1_tFE64456C0A7009756022233F6A62DD908233A250 * L_4 = ___list0;
		List_1_tFE64456C0A7009756022233F6A62DD908233A250 * L_5 = ___list0;
		int32_t L_6;
		L_6 = ((  int32_t (*) (List_1_tFE64456C0A7009756022233F6A62DD908233A250 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_tFE64456C0A7009756022233F6A62DD908233A250 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		((  void (*) (List_1_tFE64456C0A7009756022233F6A62DD908233A250 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_tFE64456C0A7009756022233F6A62DD908233A250 *)L_4, (int32_t)0, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// } else {
		return;
	}

IL_001e:
	{
		// list.Clear();
		List_1_tFE64456C0A7009756022233F6A62DD908233A250 * L_7 = ___list0;
		((  void (*) (List_1_tFE64456C0A7009756022233F6A62DD908233A250 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((List_1_tFE64456C0A7009756022233F6A62DD908233A250 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void Pathfinding.Util.ListExtensions::ClearFast<System.Int32>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListExtensions_ClearFast_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m5EBF89A75458D91E553864096CD558CC303107EE_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___list0, const RuntimeMethod* method)
{
	{
		// if (list.Count*2 < list.Capacity) {
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = ___list0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_2 = ___list0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)2))) >= ((int32_t)L_3)))
		{
			goto IL_001e;
		}
	}
	{
		// list.RemoveRange(0, list.Count);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_4 = ___list0;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_5 = ___list0;
		int32_t L_6;
		L_6 = ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_4, (int32_t)0, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// } else {
		return;
	}

IL_001e:
	{
		// list.Clear();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_7 = ___list0;
		((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void Pathfinding.Util.ListExtensions::ClearFast<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListExtensions_ClearFast_TisRuntimeObject_m6BA344B755521684A64A46ADF273C24B16AD2A53_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list0, const RuntimeMethod* method)
{
	{
		// if (list.Count*2 < list.Capacity) {
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___list0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_2 = ___list0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)2))) >= ((int32_t)L_3)))
		{
			goto IL_001e;
		}
	}
	{
		// list.RemoveRange(0, list.Count);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_4 = ___list0;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_5 = ___list0;
		int32_t L_6;
		L_6 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_4, (int32_t)0, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// } else {
		return;
	}

IL_001e:
	{
		// list.Clear();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_7 = ___list0;
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void Pathfinding.Util.ListExtensions::ClearFast<System.Single>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListExtensions_ClearFast_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m0148F895C205DCB1D1DB6C1E7AAE8EE96DF6B61A_gshared (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * ___list0, const RuntimeMethod* method)
{
	{
		// if (list.Count*2 < list.Capacity) {
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_0 = ___list0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_2 = ___list0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)2))) >= ((int32_t)L_3)))
		{
			goto IL_001e;
		}
	}
	{
		// list.RemoveRange(0, list.Count);
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_4 = ___list0;
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_5 = ___list0;
		int32_t L_6;
		L_6 = ((  int32_t (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		((  void (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)L_4, (int32_t)0, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// } else {
		return;
	}

IL_001e:
	{
		// list.Clear();
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_7 = ___list0;
		((  void (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void Pathfinding.Util.ListExtensions::ClearFast<System.UInt32>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListExtensions_ClearFast_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mCB8051BEF750AB09C837DAE75058E08408430443_gshared (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * ___list0, const RuntimeMethod* method)
{
	{
		// if (list.Count*2 < list.Capacity) {
		List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * L_0 = ___list0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * L_2 = ___list0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)2))) >= ((int32_t)L_3)))
		{
			goto IL_001e;
		}
	}
	{
		// list.RemoveRange(0, list.Count);
		List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * L_4 = ___list0;
		List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * L_5 = ___list0;
		int32_t L_6;
		L_6 = ((  int32_t (*) (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		((  void (*) (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 *)L_4, (int32_t)0, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// } else {
		return;
	}

IL_001e:
	{
		// list.Clear();
		List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * L_7 = ___list0;
		((  void (*) (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void Pathfinding.Util.ListExtensions::ClearFast<UnityEngine.Vector2>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListExtensions_ClearFast_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m8C5CA1D32F291FA7EBE30678BEEF28E1246E11B5_gshared (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * ___list0, const RuntimeMethod* method)
{
	{
		// if (list.Count*2 < list.Capacity) {
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_0 = ___list0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_2 = ___list0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)2))) >= ((int32_t)L_3)))
		{
			goto IL_001e;
		}
	}
	{
		// list.RemoveRange(0, list.Count);
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_4 = ___list0;
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_5 = ___list0;
		int32_t L_6;
		L_6 = ((  int32_t (*) (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		((  void (*) (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)L_4, (int32_t)0, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// } else {
		return;
	}

IL_001e:
	{
		// list.Clear();
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_7 = ___list0;
		((  void (*) (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void Pathfinding.Util.ListExtensions::ClearFast<UnityEngine.Vector3>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListExtensions_ClearFast_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m2486A7EE12D28F7B915351C4C91DFFB9E5CFAEE3_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___list0, const RuntimeMethod* method)
{
	{
		// if (list.Count*2 < list.Capacity) {
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = ___list0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_2 = ___list0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)2))) >= ((int32_t)L_3)))
		{
			goto IL_001e;
		}
	}
	{
		// list.RemoveRange(0, list.Count);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_4 = ___list0;
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_5 = ___list0;
		int32_t L_6;
		L_6 = ((  int32_t (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)L_4, (int32_t)0, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// } else {
		return;
	}

IL_001e:
	{
		// list.Clear();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_7 = ___list0;
		((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void Pathfinding.Util.ListExtensions::ClearFast<Pathfinding.Funnel/PathPart>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListExtensions_ClearFast_TisPathPart_t28329F7CAAE0992C55E6AF1419C79F7AFBE7B046_m15853EED51EE61B110C17EA95428B3AFF8A6E046_gshared (List_1_t3266DC211C10C02679DF7A782E145C888C6176D9 * ___list0, const RuntimeMethod* method)
{
	{
		// if (list.Count*2 < list.Capacity) {
		List_1_t3266DC211C10C02679DF7A782E145C888C6176D9 * L_0 = ___list0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (List_1_t3266DC211C10C02679DF7A782E145C888C6176D9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3266DC211C10C02679DF7A782E145C888C6176D9 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		List_1_t3266DC211C10C02679DF7A782E145C888C6176D9 * L_2 = ___list0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (List_1_t3266DC211C10C02679DF7A782E145C888C6176D9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t3266DC211C10C02679DF7A782E145C888C6176D9 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)2))) >= ((int32_t)L_3)))
		{
			goto IL_001e;
		}
	}
	{
		// list.RemoveRange(0, list.Count);
		List_1_t3266DC211C10C02679DF7A782E145C888C6176D9 * L_4 = ___list0;
		List_1_t3266DC211C10C02679DF7A782E145C888C6176D9 * L_5 = ___list0;
		int32_t L_6;
		L_6 = ((  int32_t (*) (List_1_t3266DC211C10C02679DF7A782E145C888C6176D9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3266DC211C10C02679DF7A782E145C888C6176D9 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		((  void (*) (List_1_t3266DC211C10C02679DF7A782E145C888C6176D9 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t3266DC211C10C02679DF7A782E145C888C6176D9 *)L_4, (int32_t)0, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// } else {
		return;
	}

IL_001e:
	{
		// list.Clear();
		List_1_t3266DC211C10C02679DF7A782E145C888C6176D9 * L_7 = ___list0;
		((  void (*) (List_1_t3266DC211C10C02679DF7A782E145C888C6176D9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((List_1_t3266DC211C10C02679DF7A782E145C888C6176D9 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		// }
		return;
	}
}
// T[] Pathfinding.Util.ListExtensions::ToArrayFromPool<Pathfinding.Connection>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionU5BU5D_t946DE1BF1E4E05FF8695E89F55505806D050AB5D* ListExtensions_ToArrayFromPool_TisConnection_tD2B630AE1AEC23473343F09B8848EE83DF457A21_mD81938B378757C5C76FA7C84624ADDCC4D19CC9D_gshared (List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 * ___list0, const RuntimeMethod* method)
{
	ConnectionU5BU5D_t946DE1BF1E4E05FF8695E89F55505806D050AB5D* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var arr = ArrayPool<T>.ClaimWithExactLength (list.Count);
		List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 * L_0 = ___list0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		ConnectionU5BU5D_t946DE1BF1E4E05FF8695E89F55505806D050AB5D* L_2;
		L_2 = ((  ConnectionU5BU5D_t946DE1BF1E4E05FF8695E89F55505806D050AB5D* (*) (int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (ConnectionU5BU5D_t946DE1BF1E4E05FF8695E89F55505806D050AB5D*)L_2;
		// for (int i = 0; i < arr.Length; i++) {
		V_1 = (int32_t)0;
		goto IL_0022;
	}

IL_0010:
	{
		// arr[i] = list[i];
		ConnectionU5BU5D_t946DE1BF1E4E05FF8695E89F55505806D050AB5D* L_3 = V_0;
		int32_t L_4 = V_1;
		List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 * L_5 = ___list0;
		int32_t L_6 = V_1;
		Connection_tD2B630AE1AEC23473343F09B8848EE83DF457A21  L_7;
		L_7 = ((  Connection_tD2B630AE1AEC23473343F09B8848EE83DF457A21  (*) (List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((List_1_tDDE03018C1FA4E5E5CF30B146BEC9E4775332415 *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (Connection_tD2B630AE1AEC23473343F09B8848EE83DF457A21 )L_7);
		// for (int i = 0; i < arr.Length; i++) {
		int32_t L_8 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0022:
	{
		// for (int i = 0; i < arr.Length; i++) {
		int32_t L_9 = V_1;
		ConnectionU5BU5D_t946DE1BF1E4E05FF8695E89F55505806D050AB5D* L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0010;
		}
	}
	{
		// return arr;
		ConnectionU5BU5D_t946DE1BF1E4E05FF8695E89F55505806D050AB5D* L_11 = V_0;
		return (ConnectionU5BU5D_t946DE1BF1E4E05FF8695E89F55505806D050AB5D*)L_11;
	}
}
// T[] Pathfinding.Util.ListExtensions::ToArrayFromPool<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ListExtensions_ToArrayFromPool_TisRuntimeObject_m6159CDEB044661C9D93D8ADF10674D31C5F2CE7E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list0, const RuntimeMethod* method)
{
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var arr = ArrayPool<T>.ClaimWithExactLength (list.Count);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___list0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2;
		L_2 = ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2;
		// for (int i = 0; i < arr.Length; i++) {
		V_1 = (int32_t)0;
		goto IL_0022;
	}

IL_0010:
	{
		// arr[i] = list[i];
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = V_0;
		int32_t L_4 = V_1;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_5 = ___list0;
		int32_t L_6 = V_1;
		RuntimeObject * L_7;
		L_7 = ((  RuntimeObject * (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (RuntimeObject *)L_7);
		// for (int i = 0; i < arr.Length; i++) {
		int32_t L_8 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0022:
	{
		// for (int i = 0; i < arr.Length; i++) {
		int32_t L_9 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0010;
		}
	}
	{
		// return arr;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = V_0;
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_11;
	}
}
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegate<System.Object>(TDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_mD91654279F4ECE4BB0BA5638D9ACD9D8479B82B0_gshared (RuntimeObject * ___d0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___d0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_mD91654279F4ECE4BB0BA5638D9ACD9D8479B82B0_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject * L_2 = ___d0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = Marshal_GetFunctionPointerForDelegateInternal_m2E54B2DA0F4B8DDB47CDD4C619508F89D34C5027((Delegate_t *)((Delegate_t *)Castclass((RuntimeObject*)L_2, Delegate_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return (intptr_t)L_3;
	}
}
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr<System.Object>(T,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToPtr_TisRuntimeObject_mE5C5061650C5303400815A31C01F218D9AB553D3_gshared (RuntimeObject * ___structure0, intptr_t ___ptr1, bool ___fDeleteOld2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___structure0;
		intptr_t L_1 = ___ptr1;
		bool L_2 = ___fDeleteOld2;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_StructureToPtr_m25366DC7AB7C32DBCD2E0113585848466F207954((RuntimeObject *)L_0, (intptr_t)L_1, (bool)L_2, /*hidden argument*/NULL);
		return;
	}
}
// T[] Pathfinding.Util.Memory::ShrinkArray<System.Object>(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Memory_ShrinkArray_TisRuntimeObject_mE15392306E3CF944954C429DB051D9E3F6917823_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___arr0, int32_t ___newLength1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	{
		// newLength = Math.Min(newLength, arr.Length);
		int32_t L_0 = ___newLength1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___arr0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574((int32_t)L_0, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), /*hidden argument*/NULL);
		___newLength1 = (int32_t)L_2;
		// var shrunkArr = new T[newLength];
		int32_t L_3 = ___newLength1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_4;
		// Array.Copy(arr, shrunkArr, newLength);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = ___arr0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = V_0;
		int32_t L_7 = ___newLength1;
		Array_Copy_m40103AA97DC582C557B912CF4BBE86A4D166F803((RuntimeArray *)(RuntimeArray *)L_5, (RuntimeArray *)(RuntimeArray *)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		// return shrunkArr;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = V_0;
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_8;
	}
}
// System.Void Pathfinding.Util.Memory::Swap<System.Int32>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Memory_Swap_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mA2430CDE99F12FDE487A492511C433CF9D7DF806_gshared (int32_t* ___a0, int32_t* ___b1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// T tmp = a;
		int32_t* L_0 = ___a0;
		int32_t L_1 = (*(int32_t*)L_0);
		V_0 = (int32_t)L_1;
		// a = b;
		int32_t* L_2 = ___a0;
		int32_t* L_3 = ___b1;
		int32_t L_4 = (*(int32_t*)L_3);
		*(int32_t*)L_2 = L_4;
		// b = tmp;
		int32_t* L_5 = ___b1;
		int32_t L_6 = V_0;
		*(int32_t*)L_5 = L_6;
		// }
		return;
	}
}
// System.Void Pathfinding.Util.Memory::Swap<System.Object>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Memory_Swap_TisRuntimeObject_m04372245D4558C30C22E6A79714F3B14A082034C_gshared (RuntimeObject ** ___a0, RuntimeObject ** ___b1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		// T tmp = a;
		RuntimeObject ** L_0 = ___a0;
		RuntimeObject * L_1 = (*(RuntimeObject **)L_0);
		V_0 = (RuntimeObject *)L_1;
		// a = b;
		RuntimeObject ** L_2 = ___a0;
		RuntimeObject ** L_3 = ___b1;
		RuntimeObject * L_4 = (*(RuntimeObject **)L_3);
		*(RuntimeObject **)L_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_2, (void*)L_4);
		// b = tmp;
		RuntimeObject ** L_5 = ___b1;
		RuntimeObject * L_6 = V_0;
		*(RuntimeObject **)L_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_5, (void*)L_6);
		// }
		return;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<System.Object>(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Mesh_GetAllocArrayFromChannel_TisRuntimeObject_m583BF12839004CCF135F1FBDBB877CE6F72E50D1_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2;
		L_2 = Mesh_DefaultDimensionForChannel_m95062483A5D77AC517FE0F87EC41250CFDDEF8FD((int32_t)L_1, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3;
		L_3 = ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		goto IL_0012;
	}

IL_0012:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_0;
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector3>(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* Mesh_GetAllocArrayFromChannel_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m14F8D17CA7104103274E817EDE9F571000A2E714_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2;
		L_2 = Mesh_DefaultDimensionForChannel_m95062483A5D77AC517FE0F87EC41250CFDDEF8FD((int32_t)L_1, /*hidden argument*/NULL);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_3;
		L_3 = ((  Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* (*) (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_3;
		goto IL_0012;
	}

IL_0012:
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_4 = V_0;
		return (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<System.Object>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Mesh_GetAllocArrayFromChannel_TisRuntimeObject_m174D33F66C386906721284C51C905A13920B5BC6_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_2 = NULL;
	{
		bool L_0;
		L_0 = Mesh_get_canAccess_m991B64F0FA651459A7E0DD4526D7EF0384F1792F((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, /*hidden argument*/NULL);
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___channel0;
		bool L_3;
		L_3 = Mesh_HasVertexAttribute_m55371DBBBA8C77FBF6404F0D7989C0C7BDE3275C((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_2, /*hidden argument*/NULL);
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___channel0;
		int32_t L_6 = ___format1;
		int32_t L_7 = ___dim2;
		RuntimeArray * L_8;
		L_8 = Mesh_GetAllocArrayFromChannelImpl_m9EC298F950FDC7F699CB02A265AAE1E1E580B541((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		V_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___channel0;
		Mesh_PrintErrorCantAccessChannel_m39BB0FADC48525EAE52AA38AC8D7EE5BA650294C((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_10;
		goto IL_003e;
	}

IL_003e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = V_2;
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_11;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector3>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* Mesh_GetAllocArrayFromChannel_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mCBC78D32DC52768EEAD1BDC1A1B201916AC57C85_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_2 = NULL;
	{
		bool L_0;
		L_0 = Mesh_get_canAccess_m991B64F0FA651459A7E0DD4526D7EF0384F1792F((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, /*hidden argument*/NULL);
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___channel0;
		bool L_3;
		L_3 = Mesh_HasVertexAttribute_m55371DBBBA8C77FBF6404F0D7989C0C7BDE3275C((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_2, /*hidden argument*/NULL);
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___channel0;
		int32_t L_6 = ___format1;
		int32_t L_7 = ___dim2;
		RuntimeArray * L_8;
		L_8 = Mesh_GetAllocArrayFromChannelImpl_m9EC298F950FDC7F699CB02A265AAE1E1E580B541((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		V_2 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___channel0;
		Mesh_PrintErrorCantAccessChannel_m39BB0FADC48525EAE52AA38AC8D7EE5BA650294C((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_10 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_2 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_10;
		goto IL_003e;
	}

IL_003e:
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_11 = V_2;
		return (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_11;
	}
}
// System.Void UnityEngine.Mesh::SetArrayForChannel<UnityEngine.Color>(UnityEngine.Rendering.VertexAttribute,T[],UnityEngine.Rendering.MeshUpdateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetArrayForChannel_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_mFDC1B30FC478AFB9244E6BD449DB9BE6426D3003_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___values1, int32_t ___flags2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_0 = ___values1;
		int32_t L_1;
		L_1 = NoAllocHelpers_SafeLength_m02DFDBC654748FCB895D2ADDC5E5C92415C3A4B2((RuntimeArray *)(RuntimeArray *)L_0, /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = ___channel0;
		int32_t L_3 = ___channel0;
		int32_t L_4;
		L_4 = Mesh_DefaultDimensionForChannel_m95062483A5D77AC517FE0F87EC41250CFDDEF8FD((int32_t)L_3, /*hidden argument*/NULL);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_5 = ___values1;
		int32_t L_6 = V_0;
		int32_t L_7 = V_0;
		int32_t L_8 = ___flags2;
		Mesh_SetSizedArrayForChannel_m4E03A6A18D0C5BB49E89828AE7A0DD34BB20E7CC((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_2, (int32_t)0, (int32_t)L_4, (RuntimeArray *)(RuntimeArray *)L_5, (int32_t)L_6, (int32_t)0, (int32_t)L_7, (int32_t)L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetArrayForChannel<System.Object>(UnityEngine.Rendering.VertexAttribute,T[],UnityEngine.Rendering.MeshUpdateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetArrayForChannel_TisRuntimeObject_mE7189BF0A9BB992C6B2DBB1246D9435AB0D3F870_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___values1, int32_t ___flags2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___values1;
		int32_t L_1;
		L_1 = NoAllocHelpers_SafeLength_m02DFDBC654748FCB895D2ADDC5E5C92415C3A4B2((RuntimeArray *)(RuntimeArray *)L_0, /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = ___channel0;
		int32_t L_3 = ___channel0;
		int32_t L_4;
		L_4 = Mesh_DefaultDimensionForChannel_m95062483A5D77AC517FE0F87EC41250CFDDEF8FD((int32_t)L_3, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = ___values1;
		int32_t L_6 = V_0;
		int32_t L_7 = V_0;
		int32_t L_8 = ___flags2;
		Mesh_SetSizedArrayForChannel_m4E03A6A18D0C5BB49E89828AE7A0DD34BB20E7CC((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_2, (int32_t)0, (int32_t)L_4, (RuntimeArray *)(RuntimeArray *)L_5, (int32_t)L_6, (int32_t)0, (int32_t)L_7, (int32_t)L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetArrayForChannel<UnityEngine.Vector2>(UnityEngine.Rendering.VertexAttribute,T[],UnityEngine.Rendering.MeshUpdateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetArrayForChannel_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m1C33FE320AC61358F23C60D0B8738A0180DDBBCA_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___values1, int32_t ___flags2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_0 = ___values1;
		int32_t L_1;
		L_1 = NoAllocHelpers_SafeLength_m02DFDBC654748FCB895D2ADDC5E5C92415C3A4B2((RuntimeArray *)(RuntimeArray *)L_0, /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = ___channel0;
		int32_t L_3 = ___channel0;
		int32_t L_4;
		L_4 = Mesh_DefaultDimensionForChannel_m95062483A5D77AC517FE0F87EC41250CFDDEF8FD((int32_t)L_3, /*hidden argument*/NULL);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_5 = ___values1;
		int32_t L_6 = V_0;
		int32_t L_7 = V_0;
		int32_t L_8 = ___flags2;
		Mesh_SetSizedArrayForChannel_m4E03A6A18D0C5BB49E89828AE7A0DD34BB20E7CC((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_2, (int32_t)0, (int32_t)L_4, (RuntimeArray *)(RuntimeArray *)L_5, (int32_t)L_6, (int32_t)0, (int32_t)L_7, (int32_t)L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetArrayForChannel<UnityEngine.Vector3>(UnityEngine.Rendering.VertexAttribute,T[],UnityEngine.Rendering.MeshUpdateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetArrayForChannel_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mC784E449391ECD67AB65239797E61C5442171DA0_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___values1, int32_t ___flags2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = ___values1;
		int32_t L_1;
		L_1 = NoAllocHelpers_SafeLength_m02DFDBC654748FCB895D2ADDC5E5C92415C3A4B2((RuntimeArray *)(RuntimeArray *)L_0, /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = ___channel0;
		int32_t L_3 = ___channel0;
		int32_t L_4;
		L_4 = Mesh_DefaultDimensionForChannel_m95062483A5D77AC517FE0F87EC41250CFDDEF8FD((int32_t)L_3, /*hidden argument*/NULL);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_5 = ___values1;
		int32_t L_6 = V_0;
		int32_t L_7 = V_0;
		int32_t L_8 = ___flags2;
		Mesh_SetSizedArrayForChannel_m4E03A6A18D0C5BB49E89828AE7A0DD34BB20E7CC((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_2, (int32_t)0, (int32_t)L_4, (RuntimeArray *)(RuntimeArray *)L_5, (int32_t)L_6, (int32_t)0, (int32_t)L_7, (int32_t)L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetListForChannel<System.Object>(UnityEngine.Rendering.VertexAttribute,System.Collections.Generic.List`1<T>,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetListForChannel_TisRuntimeObject_mD292363F37CC4F6F0D826D76B1555DD1D0AB357F_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___values1, int32_t ___start2, int32_t ___length3, int32_t ___flags4, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2;
		L_2 = Mesh_DefaultDimensionForChannel_m95062483A5D77AC517FE0F87EC41250CFDDEF8FD((int32_t)L_1, /*hidden argument*/NULL);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = ___values1;
		RuntimeArray * L_4;
		L_4 = NoAllocHelpers_ExtractArrayFromList_m097334749C829402A9634BF025A54F3918D238DD((RuntimeObject *)L_3, /*hidden argument*/NULL);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_5 = ___values1;
		int32_t L_6;
		L_6 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_7 = ___start2;
		int32_t L_8 = ___length3;
		int32_t L_9 = ___flags4;
		Mesh_SetSizedArrayForChannel_m4E03A6A18D0C5BB49E89828AE7A0DD34BB20E7CC((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, (RuntimeArray *)L_4, (int32_t)L_6, (int32_t)L_7, (int32_t)L_8, (int32_t)L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetListForChannel<UnityEngine.Vector3>(UnityEngine.Rendering.VertexAttribute,System.Collections.Generic.List`1<T>,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetListForChannel_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m6C8827311A6892758B8BB33900FAF8A506C35799_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___values1, int32_t ___start2, int32_t ___length3, int32_t ___flags4, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2;
		L_2 = Mesh_DefaultDimensionForChannel_m95062483A5D77AC517FE0F87EC41250CFDDEF8FD((int32_t)L_1, /*hidden argument*/NULL);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_3 = ___values1;
		RuntimeArray * L_4;
		L_4 = NoAllocHelpers_ExtractArrayFromList_m097334749C829402A9634BF025A54F3918D238DD((RuntimeObject *)L_3, /*hidden argument*/NULL);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_5 = ___values1;
		int32_t L_6;
		L_6 = ((  int32_t (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_7 = ___start2;
		int32_t L_8 = ___length3;
		int32_t L_9 = ___flags4;
		Mesh_SetSizedArrayForChannel_m4E03A6A18D0C5BB49E89828AE7A0DD34BB20E7CC((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, (RuntimeArray *)L_4, (int32_t)L_6, (int32_t)L_7, (int32_t)L_8, (int32_t)L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetListForChannel<UnityEngine.Color32>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32,System.Collections.Generic.List`1<T>,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetListForChannel_TisColor32_tDB54A78627878A7D2DE42BB028D64306A18E858D_m0608982D55ED5474732E31678B737C058F570683_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * ___values3, int32_t ___start4, int32_t ___length5, int32_t ___flags6, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___format1;
		int32_t L_2 = ___dim2;
		List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * L_3 = ___values3;
		RuntimeArray * L_4;
		L_4 = NoAllocHelpers_ExtractArrayFromList_m097334749C829402A9634BF025A54F3918D238DD((RuntimeObject *)L_3, /*hidden argument*/NULL);
		List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * L_5 = ___values3;
		int32_t L_6;
		L_6 = ((  int32_t (*) (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_7 = ___start4;
		int32_t L_8 = ___length5;
		int32_t L_9 = ___flags6;
		Mesh_SetSizedArrayForChannel_m4E03A6A18D0C5BB49E89828AE7A0DD34BB20E7CC((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_0, (int32_t)L_1, (int32_t)L_2, (RuntimeArray *)L_4, (int32_t)L_6, (int32_t)L_7, (int32_t)L_8, (int32_t)L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetListForChannel<System.Object>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32,System.Collections.Generic.List`1<T>,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetListForChannel_TisRuntimeObject_mD1B8D9C230F8DCA941A13EB3E46F18DCBB3CEDD2_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___values3, int32_t ___start4, int32_t ___length5, int32_t ___flags6, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___format1;
		int32_t L_2 = ___dim2;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = ___values3;
		RuntimeArray * L_4;
		L_4 = NoAllocHelpers_ExtractArrayFromList_m097334749C829402A9634BF025A54F3918D238DD((RuntimeObject *)L_3, /*hidden argument*/NULL);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_5 = ___values3;
		int32_t L_6;
		L_6 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_7 = ___start4;
		int32_t L_8 = ___length5;
		int32_t L_9 = ___flags6;
		Mesh_SetSizedArrayForChannel_m4E03A6A18D0C5BB49E89828AE7A0DD34BB20E7CC((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_0, (int32_t)L_1, (int32_t)L_2, (RuntimeArray *)L_4, (int32_t)L_6, (int32_t)L_7, (int32_t)L_8, (int32_t)L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetListForChannel<UnityEngine.Vector2>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32,System.Collections.Generic.List`1<T>,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetListForChannel_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m7B00BF7F81A9B8CE6E97461203E9AF49F0ED1C45_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * ___values3, int32_t ___start4, int32_t ___length5, int32_t ___flags6, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___format1;
		int32_t L_2 = ___dim2;
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_3 = ___values3;
		RuntimeArray * L_4;
		L_4 = NoAllocHelpers_ExtractArrayFromList_m097334749C829402A9634BF025A54F3918D238DD((RuntimeObject *)L_3, /*hidden argument*/NULL);
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_5 = ___values3;
		int32_t L_6;
		L_6 = ((  int32_t (*) (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_7 = ___start4;
		int32_t L_8 = ___length5;
		int32_t L_9 = ___flags6;
		Mesh_SetSizedArrayForChannel_m4E03A6A18D0C5BB49E89828AE7A0DD34BB20E7CC((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_0, (int32_t)L_1, (int32_t)L_2, (RuntimeArray *)L_4, (int32_t)L_6, (int32_t)L_7, (int32_t)L_8, (int32_t)L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetUvsImpl<System.Object>(System.Int32,System.Int32,System.Collections.Generic.List`1<T>,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUvsImpl_TisRuntimeObject_m3AAD58B5CFD8B4AEAB782AD37AC1ED097EA2272E_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___uvIndex0, int32_t ___dim1, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___uvs2, int32_t ___start3, int32_t ___length4, int32_t ___flags5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C5D219B15338D87684A3DB22B945597AD4BD46);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___uvIndex0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___uvIndex0;
		G_B3_0 = ((((int32_t)L_1) > ((int32_t)7))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485((RuntimeObject *)_stringLiteralA3C5D219B15338D87684A3DB22B945597AD4BD46, /*hidden argument*/NULL);
		goto IL_0034;
	}

IL_001e:
	{
		int32_t L_3 = ___uvIndex0;
		int32_t L_4;
		L_4 = Mesh_GetUVChannel_m9566A8802F5B87D061A2812FEF94230F8EA1CBBF((int32_t)L_3, /*hidden argument*/NULL);
		int32_t L_5 = ___dim1;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_6 = ___uvs2;
		int32_t L_7 = ___start3;
		int32_t L_8 = ___length4;
		int32_t L_9 = ___flags5;
		((  void (*) (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *, int32_t, int32_t, int32_t, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_4, (int32_t)0, (int32_t)L_5, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_6, (int32_t)L_7, (int32_t)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
	}

IL_0034:
	{
		return;
	}
}
// System.Void UnityEngine.Mesh::SetUvsImpl<UnityEngine.Vector2>(System.Int32,System.Int32,System.Collections.Generic.List`1<T>,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUvsImpl_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m37DEAC14D6A04E431CF74E23836D073F91AFA47F_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___uvIndex0, int32_t ___dim1, List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * ___uvs2, int32_t ___start3, int32_t ___length4, int32_t ___flags5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C5D219B15338D87684A3DB22B945597AD4BD46);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___uvIndex0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___uvIndex0;
		G_B3_0 = ((((int32_t)L_1) > ((int32_t)7))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485((RuntimeObject *)_stringLiteralA3C5D219B15338D87684A3DB22B945597AD4BD46, /*hidden argument*/NULL);
		goto IL_0034;
	}

IL_001e:
	{
		int32_t L_3 = ___uvIndex0;
		int32_t L_4;
		L_4 = Mesh_GetUVChannel_m9566A8802F5B87D061A2812FEF94230F8EA1CBBF((int32_t)L_3, /*hidden argument*/NULL);
		int32_t L_5 = ___dim1;
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_6 = ___uvs2;
		int32_t L_7 = ___start3;
		int32_t L_8 = ___length4;
		int32_t L_9 = ___flags5;
		((  void (*) (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *, int32_t, int32_t, int32_t, List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_4, (int32_t)0, (int32_t)L_5, (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)L_6, (int32_t)L_7, (int32_t)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
	}

IL_0034:
	{
		return;
	}
}
// System.Object System.Reflection.MonoProperty::GetterAdapterFrame<System.Object,System.Object>(System.Reflection.MonoProperty/Getter`2<T,R>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MonoProperty_GetterAdapterFrame_TisRuntimeObject_TisRuntimeObject_m377CC1AF2F41BEBCDC6F49C8681F6051F5193F2C_gshared (Getter_2_t81181C5D3C83EE61FFA30B3479BF4F9FC6ECBBDB * ___getter0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	{
		Getter_2_t81181C5D3C83EE61FFA30B3479BF4F9FC6ECBBDB * L_0 = ___getter0;
		RuntimeObject * L_1 = ___obj1;
		RuntimeObject * L_2;
		L_2 = ((  RuntimeObject * (*) (Getter_2_t81181C5D3C83EE61FFA30B3479BF4F9FC6ECBBDB *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Getter_2_t81181C5D3C83EE61FFA30B3479BF4F9FC6ECBBDB *)L_0, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (RuntimeObject *)L_2;
	}
}
// System.Object System.Reflection.MonoProperty::StaticGetterAdapterFrame<System.Object>(System.Reflection.MonoProperty/StaticGetter`1<R>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MonoProperty_StaticGetterAdapterFrame_TisRuntimeObject_m2757BB1DECF0ADDC1A919FCBE2B240F5776FBB6C_gshared (StaticGetter_1_t34703320355FB45822699F7FF6C0BC577E0DDA01 * ___getter0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	{
		StaticGetter_1_t34703320355FB45822699F7FF6C0BC577E0DDA01 * L_0 = ___getter0;
		RuntimeObject * L_1;
		L_1 = ((  RuntimeObject * (*) (StaticGetter_1_t34703320355FB45822699F7FF6C0BC577E0DDA01 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((StaticGetter_1_t34703320355FB45822699F7FF6C0BC577E0DDA01 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_1;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE_mF70C47B740C2E9552387D28642C50ECD5ED5748D_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA  L_3 = V_1;
		V_0 = (NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA )L_3;
		NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA  L_4 = V_0;
		V_2 = (NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA  L_5 = V_2;
		return (NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Byte>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m38F468CD9930A95B57C900167F1D8E8BBFE58F8C_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  L_3 = V_1;
		V_0 = (NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 )L_3;
		NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  L_4 = V_0;
		V_2 = (NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  L_5 = V_2;
		return (NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Int32>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m46DB83FD5FBF8652FF5B550AC233D1F3C7A11946_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  L_3 = V_1;
		V_0 = (NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 )L_3;
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  L_4 = V_0;
		V_2 = (NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  L_5 = V_2;
		return (NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2_m4B0D92F22EFC4DDF9749F88AA456D0113FDE9FA4_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  L_3 = V_1;
		V_0 = (NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 )L_3;
		NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  L_4 = V_0;
		V_2 = (NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  L_5 = V_2;
		return (NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Plane>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_t80844BF2332EAFC1DDEDD616A950242031A115C7_m5EBEBCC6C96686CA500CCFB690BDDE1CB6B89A00_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E  L_3 = V_1;
		V_0 = (NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E )L_3;
		NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E  L_4 = V_0;
		V_2 = (NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E  L_5 = V_2;
		return (NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E )L_5;
	}
}
// System.Int32 UnityEngine.NoAllocHelpers::SafeLength<UnityEngine.Color32>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisColor32_tDB54A78627878A7D2DE42BB028D64306A18E858D_m7ADFE5D6421DA5FE6C42607FFD823A0A076CAB2B_gshared (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * ___values0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * L_0 = ___values0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * L_1 = ___values0;
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return (int32_t)L_3;
	}
}
// System.Int32 UnityEngine.NoAllocHelpers::SafeLength<System.Int32>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mB27BF722E366253632F54C2E6B6C6CE5E78EB3F7_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___values0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = ___values0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_1 = ___values0;
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return (int32_t)L_3;
	}
}
// System.Int32 UnityEngine.NoAllocHelpers::SafeLength<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisRuntimeObject_m0F78AEBE90F49803686AB07A60DE2517B6177F35_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___values0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___values0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = ___values0;
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return (int32_t)L_3;
	}
}
// System.Int32 UnityEngine.NoAllocHelpers::SafeLength<UnityEngine.Vector2>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m60289E26497C626663CF5BB30BA377DF50D3CE6A_gshared (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * ___values0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_0 = ___values0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_1 = ___values0;
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return (int32_t)L_3;
	}
}
// System.Int32 UnityEngine.NoAllocHelpers::SafeLength<UnityEngine.Vector3>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mD377C1C2210179278166FBF20D5E51B77A3F97EF_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___values0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = ___values0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_1 = ___values0;
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return (int32_t)L_3;
	}
}
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_mBE0814B07DA8DDD57407CC2F0C8051AEC27D34BC_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_2;
		L_2 = Object_FindObjectOfType_mFDEFCE84CE9C644F2B51DCC26CDAC78AC7E89B1B((Type_t *)L_1, (bool)0, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0019;
	}

IL_0019:
	{
		RuntimeObject * L_3 = V_0;
		return (RuntimeObject *)L_3;
	}
}
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Object_FindObjectsOfType_TisRuntimeObject_m3A432305B0F99DFE33069276B3907E866E847A1F_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* L_2;
		L_2 = Object_FindObjectsOfType_m0AEB81CC6F1D224A6F4DCC7D553482D54FC03C5A((Type_t *)L_1, (bool)0, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3;
		L_3 = ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		goto IL_0019;
	}

IL_0019:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_0;
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_4;
	}
}
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m02BDA2BE9BA7A8D6BB8554AE3E32ED6EF05EDC0C_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___original0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___position1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2 = ___rotation2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_3;
		L_3 = Object_Instantiate_mADD3254CB5E6AB56FBB6964FE4B930F5187AB5AD((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_0, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_2, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0016;
	}

IL_0016:
	{
		RuntimeObject * L_4 = V_0;
		return (RuntimeObject *)L_4;
	}
}
// T Pathfinding.PathPool::GetPath<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PathPool_GetPath_TisRuntimeObject_m6B9FB2A812EF5B84F564A053B146A99346F6A425_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m74C828B5DCF04ED785A7E51ED731256B988ACA3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m29507C3863A4A7CFA2E6056009ED2E21C7AA636F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m5DC830FD33B88605B2AA1FEC7DE1A432315F3466_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m48622C461B49F93ED769FD774561C5DD6CFF7339_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPathInternals_t32CCCA7F7986E390B2DB49892E56B5D6D71C35A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathPool_t8FD152A71709D0BBB4826431E2CBA14A6EDC6398_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mB0D6330490ABCF049B6B9C0C63861BD2C3C9970D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_mD292C55EEBE1CEAE6783505A3CF56728089B215B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t253D50DC0EE6FC08EEE5130FF02303EF92688438 * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	Stack_1_tD6ADE73B94BEEF9FA151886F9D2C77392198A8B8 * V_3 = NULL;
	Type_t * V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (pool) {
		IL2CPP_RUNTIME_CLASS_INIT(PathPool_t8FD152A71709D0BBB4826431E2CBA14A6EDC6398_il2cpp_TypeInfo_var);
		Dictionary_2_t253D50DC0EE6FC08EEE5130FF02303EF92688438 * L_0 = ((PathPool_t8FD152A71709D0BBB4826431E2CBA14A6EDC6398_StaticFields*)il2cpp_codegen_static_fields_for(PathPool_t8FD152A71709D0BBB4826431E2CBA14A6EDC6398_il2cpp_TypeInfo_var))->get_pool_0();
		V_0 = (Dictionary_2_t253D50DC0EE6FC08EEE5130FF02303EF92688438 *)L_0;
		V_1 = (bool)0;
	}

IL_0008:
	try
	{// begin try (depth: 1)
		{
			Dictionary_2_t253D50DC0EE6FC08EEE5130FF02303EF92688438 * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_1, (bool*)(bool*)(&V_1), /*hidden argument*/NULL);
			// if (pool.TryGetValue(typeof(T), out poolStack) && poolStack.Count > 0) {
			IL2CPP_RUNTIME_CLASS_INIT(PathPool_t8FD152A71709D0BBB4826431E2CBA14A6EDC6398_il2cpp_TypeInfo_var);
			Dictionary_2_t253D50DC0EE6FC08EEE5130FF02303EF92688438 * L_2 = ((PathPool_t8FD152A71709D0BBB4826431E2CBA14A6EDC6398_StaticFields*)il2cpp_codegen_static_fields_for(PathPool_t8FD152A71709D0BBB4826431E2CBA14A6EDC6398_il2cpp_TypeInfo_var))->get_pool_0();
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_4;
			L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_3, /*hidden argument*/NULL);
			bool L_5;
			L_5 = Dictionary_2_TryGetValue_m29507C3863A4A7CFA2E6056009ED2E21C7AA636F((Dictionary_2_t253D50DC0EE6FC08EEE5130FF02303EF92688438 *)L_2, (Type_t *)L_4, (Stack_1_tD6ADE73B94BEEF9FA151886F9D2C77392198A8B8 **)(Stack_1_tD6ADE73B94BEEF9FA151886F9D2C77392198A8B8 **)(&V_3), /*hidden argument*/Dictionary_2_TryGetValue_m29507C3863A4A7CFA2E6056009ED2E21C7AA636F_RuntimeMethod_var);
			if (!L_5)
			{
				goto IL_0044;
			}
		}

IL_0028:
		{
			Stack_1_tD6ADE73B94BEEF9FA151886F9D2C77392198A8B8 * L_6 = V_3;
			int32_t L_7;
			L_7 = Stack_1_get_Count_mD292C55EEBE1CEAE6783505A3CF56728089B215B_inline((Stack_1_tD6ADE73B94BEEF9FA151886F9D2C77392198A8B8 *)L_6, /*hidden argument*/Stack_1_get_Count_mD292C55EEBE1CEAE6783505A3CF56728089B215B_RuntimeMethod_var);
			if ((((int32_t)L_7) <= ((int32_t)0)))
			{
				goto IL_0044;
			}
		}

IL_0031:
		{
			// result = poolStack.Pop() as T;
			Stack_1_tD6ADE73B94BEEF9FA151886F9D2C77392198A8B8 * L_8 = V_3;
			Path_t76E4E21D76766639A4AF7C3513EC7A296F7D72C7 * L_9;
			L_9 = Stack_1_Pop_mB0D6330490ABCF049B6B9C0C63861BD2C3C9970D((Stack_1_tD6ADE73B94BEEF9FA151886F9D2C77392198A8B8 *)L_8, /*hidden argument*/Stack_1_Pop_mB0D6330490ABCF049B6B9C0C63861BD2C3C9970D_RuntimeMethod_var);
			V_2 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_9, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
			// } else {
			goto IL_009b;
		}

IL_0044:
		{
			// result = new T();
			RuntimeObject * L_10;
			L_10 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
			V_2 = (RuntimeObject *)L_10;
			// if (!totalCreated.ContainsKey(typeof(T))) {
			IL2CPP_RUNTIME_CLASS_INIT(PathPool_t8FD152A71709D0BBB4826431E2CBA14A6EDC6398_il2cpp_TypeInfo_var);
			Dictionary_2_t6CE7336785D73EB9AC6DBFDBCB55D4CF15047CB7 * L_11 = ((PathPool_t8FD152A71709D0BBB4826431E2CBA14A6EDC6398_StaticFields*)il2cpp_codegen_static_fields_for(PathPool_t8FD152A71709D0BBB4826431E2CBA14A6EDC6398_il2cpp_TypeInfo_var))->get_totalCreated_1();
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_12 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_13;
			L_13 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_12, /*hidden argument*/NULL);
			bool L_14;
			L_14 = Dictionary_2_ContainsKey_m74C828B5DCF04ED785A7E51ED731256B988ACA3F((Dictionary_2_t6CE7336785D73EB9AC6DBFDBCB55D4CF15047CB7 *)L_11, (Type_t *)L_13, /*hidden argument*/Dictionary_2_ContainsKey_m74C828B5DCF04ED785A7E51ED731256B988ACA3F_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_0075;
			}
		}

IL_0060:
		{
			// totalCreated[typeof(T)] = 0;
			IL2CPP_RUNTIME_CLASS_INIT(PathPool_t8FD152A71709D0BBB4826431E2CBA14A6EDC6398_il2cpp_TypeInfo_var);
			Dictionary_2_t6CE7336785D73EB9AC6DBFDBCB55D4CF15047CB7 * L_15 = ((PathPool_t8FD152A71709D0BBB4826431E2CBA14A6EDC6398_StaticFields*)il2cpp_codegen_static_fields_for(PathPool_t8FD152A71709D0BBB4826431E2CBA14A6EDC6398_il2cpp_TypeInfo_var))->get_totalCreated_1();
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_16 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_17;
			L_17 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_16, /*hidden argument*/NULL);
			Dictionary_2_set_Item_m48622C461B49F93ED769FD774561C5DD6CFF7339((Dictionary_2_t6CE7336785D73EB9AC6DBFDBCB55D4CF15047CB7 *)L_15, (Type_t *)L_17, (int32_t)0, /*hidden argument*/Dictionary_2_set_Item_m48622C461B49F93ED769FD774561C5DD6CFF7339_RuntimeMethod_var);
		}

IL_0075:
		{
			// totalCreated[typeof(T)]++;
			IL2CPP_RUNTIME_CLASS_INIT(PathPool_t8FD152A71709D0BBB4826431E2CBA14A6EDC6398_il2cpp_TypeInfo_var);
			Dictionary_2_t6CE7336785D73EB9AC6DBFDBCB55D4CF15047CB7 * L_18 = ((PathPool_t8FD152A71709D0BBB4826431E2CBA14A6EDC6398_StaticFields*)il2cpp_codegen_static_fields_for(PathPool_t8FD152A71709D0BBB4826431E2CBA14A6EDC6398_il2cpp_TypeInfo_var))->get_totalCreated_1();
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_20;
			L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_19, /*hidden argument*/NULL);
			V_4 = (Type_t *)L_20;
			Dictionary_2_t6CE7336785D73EB9AC6DBFDBCB55D4CF15047CB7 * L_21 = (Dictionary_2_t6CE7336785D73EB9AC6DBFDBCB55D4CF15047CB7 *)L_18;
			Type_t * L_22 = V_4;
			int32_t L_23;
			L_23 = Dictionary_2_get_Item_m5DC830FD33B88605B2AA1FEC7DE1A432315F3466((Dictionary_2_t6CE7336785D73EB9AC6DBFDBCB55D4CF15047CB7 *)L_21, (Type_t *)L_22, /*hidden argument*/Dictionary_2_get_Item_m5DC830FD33B88605B2AA1FEC7DE1A432315F3466_RuntimeMethod_var);
			V_5 = (int32_t)L_23;
			Type_t * L_24 = V_4;
			int32_t L_25 = V_5;
			Dictionary_2_set_Item_m48622C461B49F93ED769FD774561C5DD6CFF7339((Dictionary_2_t6CE7336785D73EB9AC6DBFDBCB55D4CF15047CB7 *)L_21, (Type_t *)L_24, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1)), /*hidden argument*/Dictionary_2_set_Item_m48622C461B49F93ED769FD774561C5DD6CFF7339_RuntimeMethod_var);
		}

IL_009b:
		{
			// ((IPathInternals)result).Pooled = false;
			RuntimeObject * L_26 = V_2;
			InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void Pathfinding.IPathInternals::set_Pooled(System.Boolean) */, IPathInternals_t32CCCA7F7986E390B2DB49892E56B5D6D71C35A4_il2cpp_TypeInfo_var, (RuntimeObject*)L_26, (bool)0);
			// ((IPathInternals)result).Reset();
			RuntimeObject * L_27 = V_2;
			InterfaceActionInvoker0::Invoke(5 /* System.Void Pathfinding.IPathInternals::Reset() */, IPathInternals_t32CCCA7F7986E390B2DB49892E56B5D6D71C35A4_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
			// return result;
			RuntimeObject * L_28 = V_2;
			V_6 = (RuntimeObject *)L_28;
			IL2CPP_LEAVE(0xC1, FINALLY_00b7);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b7;
	}

FINALLY_00b7:
	{// begin finally (depth: 1)
		{
			bool L_29 = V_1;
			if (!L_29)
			{
				goto IL_00c0;
			}
		}

IL_00ba:
		{
			Dictionary_2_t253D50DC0EE6FC08EEE5130FF02303EF92688438 * L_30 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_30, /*hidden argument*/NULL);
		}

IL_00c0:
		{
			IL2CPP_END_FINALLY(183)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(183)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xC1, IL_00c1)
	}

IL_00c1:
	{
		// }
		RuntimeObject * L_31 = V_6;
		return (RuntimeObject *)L_31;
	}
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationPosePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationRemoveScalePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationScriptPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisRuntimeObject_mD023115A11ECA201E029F7C2BA23A36233C32413_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisRuntimeObject_mD023115A11ECA201E029F7C2BA23A36233C32413_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisRuntimeObject_mD023115A11ECA201E029F7C2BA23A36233C32413(_thisAdjusted, method);
	return _returnValue;
}
// T Pathfinding.PointGraph::AddNode<System.Object>(T,Pathfinding.Int3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PointGraph_AddNode_TisRuntimeObject_mB4C009B7E7C4E9A5FF0B4FC3BB5CBDC2AB10A219_gshared (PointGraph_t331222A85E3E7A36C2455C0F461DD57EAB864B8E * __this, RuntimeObject * ___node0, Int3_t2D1CEFEB4CE42AD8A3266E14F88533BF54BED72A  ___position1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointNodeU5BU5D_tF9C5ED2DCDDA4D1868F2CE616C5748A1846961C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointNodeU5BU5D_tF9C5ED2DCDDA4D1868F2CE616C5748A1846961C6* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		// if (nodes == null || nodeCount == nodes.Length) {
		PointNodeU5BU5D_tF9C5ED2DCDDA4D1868F2CE616C5748A1846961C6* L_0 = (PointNodeU5BU5D_tF9C5ED2DCDDA4D1868F2CE616C5748A1846961C6*)__this->get_nodes_21();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1;
		L_1 = PointGraph_get_nodeCount_mCF9187A2FBD716D5100561F312529F76B1C00440_inline((PointGraph_t331222A85E3E7A36C2455C0F461DD57EAB864B8E *)__this, /*hidden argument*/NULL);
		PointNodeU5BU5D_tF9C5ED2DCDDA4D1868F2CE616C5748A1846961C6* L_2 = (PointNodeU5BU5D_tF9C5ED2DCDDA4D1868F2CE616C5748A1846961C6*)__this->get_nodes_21();
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))))
		{
			goto IL_005e;
		}
	}

IL_0018:
	{
		// var newNodes = new PointNode[nodes != null ? System.Math.Max(nodes.Length+4, nodes.Length*2) : 4];
		PointNodeU5BU5D_tF9C5ED2DCDDA4D1868F2CE616C5748A1846961C6* L_3 = (PointNodeU5BU5D_tF9C5ED2DCDDA4D1868F2CE616C5748A1846961C6*)__this->get_nodes_21();
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		G_B5_0 = 4;
		goto IL_003c;
	}

IL_0023:
	{
		PointNodeU5BU5D_tF9C5ED2DCDDA4D1868F2CE616C5748A1846961C6* L_4 = (PointNodeU5BU5D_tF9C5ED2DCDDA4D1868F2CE616C5748A1846961C6*)__this->get_nodes_21();
		PointNodeU5BU5D_tF9C5ED2DCDDA4D1868F2CE616C5748A1846961C6* L_5 = (PointNodeU5BU5D_tF9C5ED2DCDDA4D1868F2CE616C5748A1846961C6*)__this->get_nodes_21();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), (int32_t)4)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), (int32_t)2)), /*hidden argument*/NULL);
		G_B5_0 = L_6;
	}

IL_003c:
	{
		PointNodeU5BU5D_tF9C5ED2DCDDA4D1868F2CE616C5748A1846961C6* L_7 = (PointNodeU5BU5D_tF9C5ED2DCDDA4D1868F2CE616C5748A1846961C6*)(PointNodeU5BU5D_tF9C5ED2DCDDA4D1868F2CE616C5748A1846961C6*)SZArrayNew(PointNodeU5BU5D_tF9C5ED2DCDDA4D1868F2CE616C5748A1846961C6_il2cpp_TypeInfo_var, (uint32_t)G_B5_0);
		V_0 = (PointNodeU5BU5D_tF9C5ED2DCDDA4D1868F2CE616C5748A1846961C6*)L_7;
		// if (nodes != null) nodes.CopyTo(newNodes, 0);
		PointNodeU5BU5D_tF9C5ED2DCDDA4D1868F2CE616C5748A1846961C6* L_8 = (PointNodeU5BU5D_tF9C5ED2DCDDA4D1868F2CE616C5748A1846961C6*)__this->get_nodes_21();
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		// if (nodes != null) nodes.CopyTo(newNodes, 0);
		PointNodeU5BU5D_tF9C5ED2DCDDA4D1868F2CE616C5748A1846961C6* L_9 = (PointNodeU5BU5D_tF9C5ED2DCDDA4D1868F2CE616C5748A1846961C6*)__this->get_nodes_21();
		PointNodeU5BU5D_tF9C5ED2DCDDA4D1868F2CE616C5748A1846961C6* L_10 = V_0;
		Array_CopyTo_m6AF950973942E09BAB1F21B055BBD2CD58C980B2((RuntimeArray *)(RuntimeArray *)L_9, (RuntimeArray *)(RuntimeArray *)L_10, (int32_t)0, /*hidden argument*/NULL);
	}

IL_0057:
	{
		// nodes = newNodes;
		PointNodeU5BU5D_tF9C5ED2DCDDA4D1868F2CE616C5748A1846961C6* L_11 = V_0;
		__this->set_nodes_21(L_11);
	}

IL_005e:
	{
		// node.SetPosition(position);
		RuntimeObject * L_12 = ___node0;
		Int3_t2D1CEFEB4CE42AD8A3266E14F88533BF54BED72A  L_13 = ___position1;
		PointNode_SetPosition_m0C614485CF2645F48D8817CCD4A4250A0F370883_inline((PointNode_tF9D54771A269730EC0E0BEC46F3F361B817EF222 *)L_12, (Int3_t2D1CEFEB4CE42AD8A3266E14F88533BF54BED72A )L_13, /*hidden argument*/NULL);
		// node.GraphIndex = graphIndex;
		RuntimeObject * L_14 = ___node0;
		uint32_t L_15 = (uint32_t)((NavGraph_t478B9800AFB14C593281ADB34B05A2B630DC480F *)__this)->get_graphIndex_4();
		GraphNode_set_GraphIndex_mFC4BF4F39C2213D8CA0EE160C25718866C7C39FC((GraphNode_t5AE5B598437EAB21EE8089C9BB31651680B24505 *)L_14, (uint32_t)L_15, /*hidden argument*/NULL);
		// node.Walkable = true;
		RuntimeObject * L_16 = ___node0;
		GraphNode_set_Walkable_m9D6C618B5469ECB2A93898FD5BEDF9A25406D5ED((GraphNode_t5AE5B598437EAB21EE8089C9BB31651680B24505 *)L_16, (bool)1, /*hidden argument*/NULL);
		// nodes[nodeCount] = node;
		PointNodeU5BU5D_tF9C5ED2DCDDA4D1868F2CE616C5748A1846961C6* L_17 = (PointNodeU5BU5D_tF9C5ED2DCDDA4D1868F2CE616C5748A1846961C6*)__this->get_nodes_21();
		int32_t L_18;
		L_18 = PointGraph_get_nodeCount_mCF9187A2FBD716D5100561F312529F76B1C00440_inline((PointGraph_t331222A85E3E7A36C2455C0F461DD57EAB864B8E *)__this, /*hidden argument*/NULL);
		RuntimeObject * L_19 = ___node0;
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18), (PointNode_tF9D54771A269730EC0E0BEC46F3F361B817EF222 *)L_19);
		// nodeCount++;
		int32_t L_20;
		L_20 = PointGraph_get_nodeCount_mCF9187A2FBD716D5100561F312529F76B1C00440_inline((PointGraph_t331222A85E3E7A36C2455C0F461DD57EAB864B8E *)__this, /*hidden argument*/NULL);
		V_1 = (int32_t)L_20;
		int32_t L_21 = V_1;
		PointGraph_set_nodeCount_m3A11A2B6E0995261C3498E7446FA04835E1868F3_inline((PointGraph_t331222A85E3E7A36C2455C0F461DD57EAB864B8E *)__this, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)), /*hidden argument*/NULL);
		// return node;
		RuntimeObject * L_22 = ___node0;
		return (RuntimeObject *)L_22;
	}
}
// T[] UnityEngine.Resources::ConvertObjects<System.Object>(UnityEngine.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Resources_ConvertObjects_TisRuntimeObject_mF57A8363F3D0B1A66E273AEB25CAFF5555FCC98C_gshared (ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* ___rawObjects0, const RuntimeMethod* method)
{
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	bool V_1 = false;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* L_0 = ___rawObjects0;
		V_1 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL;
		goto IL_003d;
	}

IL_000d:
	{
		ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* L_2 = ___rawObjects0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))));
		V_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		V_3 = (int32_t)0;
		goto IL_002d;
	}

IL_001a:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_0;
		int32_t L_5 = V_3;
		ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* L_6 = ___rawObjects0;
		int32_t L_7 = V_3;
		int32_t L_8 = L_7;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_9, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))));
		int32_t L_10 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = V_0;
		V_4 = (bool)((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))? 1 : 0);
		bool L_13 = V_4;
		if (L_13)
		{
			goto IL_001a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = V_0;
		V_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_14;
		goto IL_003d;
	}

IL_003d:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = V_2;
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_15;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mC389C88529EF229E1BABC989C94EE2223BD56AD0_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB((Type_t *)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_m4838780BFA354CC3379547DE1595EA5D865D7DC2((RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 *)((RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 *)IsInst((RuntimeObject*)L_4, RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return (bool)L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisRuntimeObject_m2AC7D63AB4EDAEC644206513E9541129F65EB86E_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB((Type_t *)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_m4838780BFA354CC3379547DE1595EA5D865D7DC2((RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 *)((RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 *)IsInst((RuntimeObject*)L_4, RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return (bool)L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<System.UInt64>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mF552D2867782C1926517BB58B43E2A77A2A82CA7_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB((Type_t *)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_m4838780BFA354CC3379547DE1595EA5D865D7DC2((RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 *)((RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 *)IsInst((RuntimeObject*)L_4, RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return (bool)L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<Pathfinding.GraphUpdateProcessor/GUOSingle>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisGUOSingle_t06B8CB1ECBB94957213C6FFABE2B744C0AC77C7D_m3A9DFB7E4E3D3D85A84EF17F7E5E097DB24EA271_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB((Type_t *)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_m4838780BFA354CC3379547DE1595EA5D865D7DC2((RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 *)((RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 *)IsInst((RuntimeObject*)L_4, RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return (bool)L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// T UnityEngine.ScriptableObject::CreateInstance<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ScriptableObject_CreateInstance_TisRuntimeObject_mF4140C4B5E93F4E297B82702364BB7455E2E4EBE_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * L_2;
		L_2 = ScriptableObject_CreateInstance_m5371BDC0B4F60FE15914A7BB3FBE07D0ACA0A8D4((Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0018;
	}

IL_0018:
	{
		RuntimeObject * L_3 = V_0;
		return (RuntimeObject *)L_3;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCancellation<System.Boolean>(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * Task_FromCancellation_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m3C15186841F33612A68B89A44894D0B59E6CA158_gshared (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(&___cancellationToken0), /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_1 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromCancellation_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m3C15186841F33612A68B89A44894D0B59E6CA158_RuntimeMethod_var)));
	}

IL_0014:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_2 = V_0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = ___cancellationToken0;
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_4 = (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *, bool, bool, int32_t, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_4, (bool)1, (bool)L_2, (int32_t)0, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)L_4;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCancellation<System.Object>(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * Task_FromCancellation_TisRuntimeObject_mDCFCAA9748F69C3D41CF86D2BC21A7EA08ABB314_gshared (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(&___cancellationToken0), /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_1 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromCancellation_TisRuntimeObject_mDCFCAA9748F69C3D41CF86D2BC21A7EA08ABB314_RuntimeMethod_var)));
	}

IL_0014:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_2 = V_0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = ___cancellationToken0;
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_4 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, bool, RuntimeObject *, int32_t, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_4, (bool)1, (RuntimeObject *)L_2, (int32_t)0, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_4;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.Object>>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisKeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57_mA4806A887115203276C18C332B40C1DAC07D5497_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Boolean>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC3BB9FC4C7E94DCAE7A53412E162A14F1EA42022_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Byte>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mD3FF229DCBAB38C2923A0DD20744B833969AA61E_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Color32>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisColor32_tDB54A78627878A7D2DE42BB028D64306A18E858D_mB86B8897F2F4044A68F9A3B03DDED5ADB01A7274_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<Pathfinding.Connection>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisConnection_tD2B630AE1AEC23473343F09B8848EE83DF457A21_mBF8DBCE95D1165EF7B5412AE4C8CF45802AC9B41_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	Connection_tD2B630AE1AEC23473343F09B8848EE83DF457A21  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Connection_tD2B630AE1AEC23473343F09B8848EE83DF457A21 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<Pathfinding.Int3>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt3_t2D1CEFEB4CE42AD8A3266E14F88533BF54BED72A_m7A596FE7509B6312A2FB073C03F49F98673D53B1_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	Int3_t2D1CEFEB4CE42AD8A3266E14F88533BF54BED72A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Int3_t2D1CEFEB4CE42AD8A3266E14F88533BF54BED72A ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Int32>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m5865AA873219669B49B7CD22B8F5037B78624444_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Int32Enum>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m09C495E3282F1EB4D86AFD41E4A1D71D28013202_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Object>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m539AEA437A51B6A554E8ADD3076EDA49258FFF2F_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.RaycastHit2D>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4_mACCA4234150FCFC9F678AB4A55C779DBB0A9427D_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Single>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m725C0271801F3A66BFD397B5C1210DBA009259C8_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.UInt32>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m8DA06E08B90BDBC222C8F0858BAF6B73DFD3996B_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint32_t));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Vector2>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mC42556DEFBEF6FFAD69BEF457B15E484D2A3855D_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Vector3>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mE2606512887650500549E97A027D886C84CBF61C_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.BeforeRenderHelper/OrderBlock>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisOrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_m524E3CF7C698B1C70A686928AF4E31E0FB01FD6D_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Camera/RenderRequest>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_m8CC8BBE8B343B5710C3AA0F32012D23AC131AFFD_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<Pathfinding.Funnel/PathPart>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisPathPart_t28329F7CAAE0992C55E6AF1419C79F7AFBE7B046_m51FAD2D2B5013C6FA44890BB6774981BCD13FCE1_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	PathPart_t28329F7CAAE0992C55E6AF1419C79F7AFBE7B046  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PathPart_t28329F7CAAE0992C55E6AF1419C79F7AFBE7B046 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.MeshSubsetCombineUtility/MeshContainer>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMeshContainer_tAE1C7A12F69A59346957D31E93D757361A70EDB2_m30F1738383C4D772602C8AAF93EA41871AF4B0BD_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	MeshContainer_tAE1C7A12F69A59346957D31E93D757361A70EDB2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MeshContainer_tAE1C7A12F69A59346957D31E93D757361A70EDB2 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.MeshSubsetCombineUtility/MeshInstance>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMeshInstance_t59CE3427703DF1108911FDF5A6A9241237614BEB_m05075F9085708DB07D79FE7C51FB52419EEFAD69_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	MeshInstance_t59CE3427703DF1108911FDF5A6A9241237614BEB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MeshInstance_t59CE3427703DF1108911FDF5A6A9241237614BEB ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.MeshSubsetCombineUtility/SubMeshInstance>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSubMeshInstance_t1660534E00E3BC37BB22435A242B054DCAC5BDB6_mBD9AB6B2C8108168372EC29627158B6B965CDB41_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	SubMeshInstance_t1660534E00E3BC37BB22435A242B054DCAC5BDB6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SubMeshInstance_t1660534E00E3BC37BB22435A242B054DCAC5BDB6 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<Pathfinding.Util.RetainedGizmos/MeshWithHash>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMeshWithHash_tDD6E138102909D123582D74F821742CA016BD538_m32B4AA3A3E57E4E418D18F0916197EE307594E54_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	MeshWithHash_tDD6E138102909D123582D74F821742CA016BD538  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MeshWithHash_tDD6E138102909D123582D74F821742CA016BD538 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.UnitySynchronizationContext/WorkRequest>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisWorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_mAA66AF0A6DC5C07BA4B170C83C4E741F47BDED75_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Tuple`2<T1,T2> System.Tuple::Create<System.Object,System.Object>(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * Tuple_Create_TisRuntimeObject_TisRuntimeObject_mF2FBEB401CAD0B09FEB37EE161291AA74B698F75_gshared (RuntimeObject * ___item10, RuntimeObject * ___item21, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___item10;
		RuntimeObject * L_1 = ___item21;
		Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * L_2 = (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_2, (RuntimeObject *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 *)L_2;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  UnsafeUtility_ReadArrayElement_TisBatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE_m1440CE5633412E3C1D3001135F2B0F61E8386B17_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE );
		BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  L_3 = (*(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Byte>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m67D8855CBE489026EAF5EA8C90218F55725F53D3_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (uint8_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Int32>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m9E085E01C3226E293E23B792BA610B180A700E9F_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (int32_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  UnsafeUtility_ReadArrayElement_TisLightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2_mFE6D2FB242F4F5B5C50CC2EEF07B7D8A439C4D1D_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 );
		LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  L_3 = (*(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Object>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * UnsafeUtility_ReadArrayElement_TisRuntimeObject_m0323D0A3D6692F6B69EA44D6E7B2AA64F66C4777_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(RuntimeObject *);
		RuntimeObject * L_3 = (*(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (RuntimeObject *)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Plane>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  UnsafeUtility_ReadArrayElement_TisPlane_t80844BF2332EAFC1DDEDD616A950242031A115C7_mFD2701F529985122FF354FE234A2AB6E5D47FC0C_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 );
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  L_3 = (*(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 )L_3;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE_m1D58CBFDD53E1CB541D16CCF8DE4E26A4FE2C936_gshared (void* ___destination0, int32_t ___index1, BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE );
		BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  L_3 = ___value2;
		*(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Byte>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mA70DA76446E650B5A4E730737BB0424B03DDA863_gshared (void* ___destination0, int32_t ___index1, uint8_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = ___value2;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Int32>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mB9BC153EF3EB42C858EC5F8E7A3637DD1B486A9C_gshared (void* ___destination0, int32_t ___index1, int32_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = ___value2;
		*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisLightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2_mA5815A33A2D823CD88B2A0A00314773D9E716829_gshared (void* ___destination0, int32_t ___index1, LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 );
		LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  L_3 = ___value2;
		*(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Object>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisRuntimeObject_mC1F6C4E4652461CA6AEB546A6DA9BD38C7FBEF6D_gshared (void* ___destination0, int32_t ___index1, RuntimeObject * ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(RuntimeObject *);
		RuntimeObject * L_3 = ___value2;
		*(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))), (void*)L_3);
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Plane>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPlane_t80844BF2332EAFC1DDEDD616A950242031A115C7_mCE70D24A9D2128E16099BDE32F28E21C5CAF033C_gshared (void* ___destination0, int32_t ___index1, Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 );
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  L_3 = ___value2;
		*(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// T System.Threading.Volatile::Read<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Volatile_Read_TisRuntimeObject_mA22CA9EE821A72ACF450FE1060CE5F1B0F251D13_gshared (RuntimeObject ** ___location0, const RuntimeMethod* method)
{
	return VolatileRead(___location0);
}
// System.Void System.Threading.Volatile::Write<System.Object>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volatile_Write_TisRuntimeObject_m66FD7558B688CFF32051E9CAF2769F3E5F0F0FE0_gshared (RuntimeObject ** ___location0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	VolatileWrite(___location0, ___value1);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointGraph_get_nodeCount_mCF9187A2FBD716D5100561F312529F76B1C00440_inline (PointGraph_t331222A85E3E7A36C2455C0F461DD57EAB864B8E * __this, const RuntimeMethod* method)
{
	{
		// public int nodeCount { get; protected set; }
		int32_t L_0 = __this->get_U3CnodeCountU3Ek__BackingField_23();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointNode_SetPosition_m0C614485CF2645F48D8817CCD4A4250A0F370883_inline (PointNode_tF9D54771A269730EC0E0BEC46F3F361B817EF222 * __this, Int3_t2D1CEFEB4CE42AD8A3266E14F88533BF54BED72A  ___value0, const RuntimeMethod* method)
{
	{
		// position = value;
		Int3_t2D1CEFEB4CE42AD8A3266E14F88533BF54BED72A  L_0 = ___value0;
		((GraphNode_t5AE5B598437EAB21EE8089C9BB31651680B24505 *)__this)->set_position_7(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointGraph_set_nodeCount_m3A11A2B6E0995261C3498E7446FA04835E1868F3_inline (PointGraph_t331222A85E3E7A36C2455C0F461DD57EAB864B8E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int nodeCount { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CnodeCountU3Ek__BackingField_23(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_gshared_inline (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_1();
		return (int32_t)L_0;
	}
}
