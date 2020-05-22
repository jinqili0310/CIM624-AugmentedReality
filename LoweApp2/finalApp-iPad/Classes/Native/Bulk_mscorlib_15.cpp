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

#include "il2cpp-class-internals.h"
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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.ArgumentException
struct ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60;
// System.ArgumentNullException
struct ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4;
// System.AsyncCallback
struct AsyncCallback_t74ABD1277F711E7FBDCB00E169A63DEFD39E86A2;
// System.Byte
struct Byte_t4C3393E6E7EAD06B53234C05564190D9A2D7B149;
// System.Char[]
struct CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744;
// System.Collections.ArrayList
struct ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F;
// System.Collections.Hashtable
struct Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82;
// System.Collections.IDictionary
struct IDictionary_tD35B9437F08BE98D1E0B295CC73C48E168CAB316;
// System.DBNull
struct DBNull_tE7FF9F06B07B9177FEA5297B657A3A7688526B6A;
// System.DelegateData
struct DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9;
// System.Double
struct Double_t2011D65DAF7D1FCBE71DD4CBDFA69A8F24643159;
// System.EventArgs
struct EventArgs_tA4C15C1D2AB4B139169B1942C1477933E00DCA17;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_tDA33C24465239FB383C4C2CDAAC43B9AD3CB7F05;
// System.IntPtr[]
struct IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659;
// System.NotSupportedException
struct NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6;
// System.Object[]
struct ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_tF7DED67E7D9BC1FAD7061838365480A13D2A0539;
// System.Reflection.MemberFilter
struct MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.Module
struct Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8;
// System.Reflection.TypeFilter
struct TypeFilter_t302222D6EE873CCA463EAC9F0D6BC173DC63E4DB;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t60655AFF5E0E6F26B4B3C7391AD4D098F6246770;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2;
// System.Security.PermissionSet
struct PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B;
// System.Security.Policy.Evidence
struct Evidence_t9ACD05D8C0E5A1F59CD16AF01459BBD955376A4B;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B;
// System.SystemException
struct SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532;
// System.UInt16
struct UInt16_t1FF1E02102FB09D5656DF30E5299DD359E497E9B;
// System.UnauthorizedAccessException
struct UnauthorizedAccessException_t593701C7ADFE096EC0340554C2E030FFCEEC369B;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB7988286F96CF5350E4037A92C900D84BB7FB650;
// System.UnitySerializationHolder
struct UnitySerializationHolder_t1F3CD67778C9EC0C6F3A05CC6F44A4CC047B7307;
// System.ValueType
struct ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C;
// System.Version
struct Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15;
// System.Void
struct Void_tDB81A15FA2AB53E2401A76B745D215397B29F783;
// System.WeakReference
struct WeakReference_t748C76A5CAD65471521659008DBC57191528AA9C;
// System.__Il2CppComDelegate
struct __Il2CppComDelegate_t67B66A584C55DA33A97319518FAD9D61A503C4EE;
// System.__Il2CppComObject
struct Il2CppComObject;

extern RuntimeClass* ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744_il2cpp_TypeInfo_var;
extern RuntimeClass* Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_il2cpp_TypeInfo_var;
extern RuntimeClass* DBNull_tE7FF9F06B07B9177FEA5297B657A3A7688526B6A_il2cpp_TypeInfo_var;
extern RuntimeClass* EventArgs_tA4C15C1D2AB4B139169B1942C1477933E00DCA17_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* UIntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral18C9D4621EF6C3113CE1F960346D7603E88406E8;
extern String_t* _stringLiteral236206AA94046090214FF4A105F3B4133E858761;
extern String_t* _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727;
extern String_t* _stringLiteral59BD0A3FF43B32849B319E645D4798D8A5D1E889;
extern String_t* _stringLiteral7E95DB629C3A5AA1BCFEB547A0BD39A78FE49276;
extern String_t* _stringLiteral80754AF91BFB6D1073585B046FE0A474CE868509;
extern String_t* _stringLiteral81CADB6DAE0B42FA83FD2FAB0350567E31D0D22E;
extern String_t* _stringLiteralA9914DA9D64B4FCE39273016F570714425122C67;
extern String_t* _stringLiteralAAA827AD7A55F65B85FD76E652CBB0654EC9FAA9;
extern String_t* _stringLiteralB35BB38DF9605E4C5858316B7853A16E42EA6997;
extern String_t* _stringLiteralC692273DEB2772DA307FFE37041FEF77BF4BAA97;
extern String_t* _stringLiteralC744A537945159E700B780360B5746414DE20CF9;
extern String_t* _stringLiteralD3B81375F999BE146F923A83BD6CBA9441E1F676;
extern String_t* _stringLiteralE5E429BCC9C2E4A41A3C7A4D96203BE6CB273B11;
extern String_t* _stringLiteralEAE79D6E0CFF76FC7A3BB78723690B0B2367F849;
extern String_t* _stringLiteralF0541457E2B7EF76AA2DDC177C44B4FF6B95E9C5;
extern String_t* _stringLiteralFEE63D97CA760412103B668617F8B29605625B7D;
extern const RuntimeMethod* UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m117ECE6EA8017FA6250B7D59CFE40D794090C9D6_RuntimeMethod_var;
extern const RuntimeMethod* UnitySerializationHolder_GetObjectData_m0DCDAB7ABB802E5313B2338B881AE1D1CE6690B4_RuntimeMethod_var;
extern const RuntimeMethod* UnitySerializationHolder_GetRealObject_mF8313A14C107679F256BA37709809BB82D225BC3_RuntimeMethod_var;
extern const RuntimeMethod* Version_CheckedSet_m8F93592250413F64CD48EE56635B87BD10E01775_RuntimeMethod_var;
extern const RuntimeMethod* Version_CompareTo_m4F37357349BB41DAC8C61271CBBF52F6B7A3D55A_RuntimeMethod_var;
extern const RuntimeMethod* Version__ctor_mAE9D244FEE1023A26514EE0339E7D6F26824F0F7_RuntimeMethod_var;
extern const RuntimeMethod* WeakReference_GetObjectData_m6F403EAD74C64EAF575E933D67FB2CB026332D3C_RuntimeMethod_var;
extern const RuntimeMethod* WeakReference__ctor_mDC58C556A72BFE11C54C39871D33C568B41D7297_RuntimeMethod_var;
extern const RuntimeType* RuntimeObject_0_0_0_var;
extern const RuntimeType* UnitySerializationHolder_t1F3CD67778C9EC0C6F3A05CC6F44A4CC047B7307_0_0_0_var;
extern const uint32_t UIntPtr_Equals_m099FA719C2D00C6231F941B1651A1165743C84CA_MetadataUsageId;
extern const uint32_t UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m117ECE6EA8017FA6250B7D59CFE40D794090C9D6_MetadataUsageId;
extern const uint32_t UIntPtr__cctor_m5CEC59A10CF421074BA41EF798AC069ABB40ECCE_MetadataUsageId;
extern const uint32_t UnauthorizedAccessException__ctor_mF27352A019FCA746707FE8467D70623327A29286_MetadataUsageId;
extern const uint32_t UnhandledExceptionEventArgs__ctor_m6C5F64C155794F0CAC13285CEE09322B174921F4_MetadataUsageId;
extern const uint32_t UnitySerializationHolder_GetAssemblyData_m338AAACCF7E61D386AD8A8DAD2CDE2DDEB33FC04_MetadataUsageId;
extern const uint32_t UnitySerializationHolder_GetDBNullData_m6A872BB3305DE2035081EE77FF61D4D0C9EE5CB4_MetadataUsageId;
extern const uint32_t UnitySerializationHolder_GetModuleData_mB5E09BEB03A8103DA240D489112B93DA92DB9AE2_MetadataUsageId;
extern const uint32_t UnitySerializationHolder_GetObjectData_m0DCDAB7ABB802E5313B2338B881AE1D1CE6690B4_MetadataUsageId;
extern const uint32_t UnitySerializationHolder_GetRealObject_mF8313A14C107679F256BA37709809BB82D225BC3_MetadataUsageId;
extern const uint32_t UnitySerializationHolder_GetTypeData_mE58EEADEA8C2086B9DE4A8313711AB62F1C1CA58_MetadataUsageId;
extern const uint32_t UnitySerializationHolder__ctor_mAB880030F40C641C423D92F8982190FC09B3DBE0_MetadataUsageId;
extern const uint32_t Version_CheckedSet_m8F93592250413F64CD48EE56635B87BD10E01775_MetadataUsageId;
extern const uint32_t Version_Clone_m0319BD2CFF4E0725CA77F9F3DFE442360ACE988D_MetadataUsageId;
extern const uint32_t Version_CompareTo_m4F37357349BB41DAC8C61271CBBF52F6B7A3D55A_MetadataUsageId;
extern const uint32_t Version_CreateFromString_mB297062B77739173A87608B0E639C49D6ACBE196_MetadataUsageId;
extern const uint32_t Version_Equals_m18CE65889EF5C9C32F4D787A8D89B0E90E401C4B_MetadataUsageId;
extern const uint32_t Version_ToString_mE2E6C0AA16DD48999BCF49B5BF35969B8240227A_MetadataUsageId;
extern const uint32_t Version__ctor_mAE9D244FEE1023A26514EE0339E7D6F26824F0F7_MetadataUsageId;
extern const uint32_t WeakReference_GetObjectData_m6F403EAD74C64EAF575E933D67FB2CB026332D3C_MetadataUsageId;
extern const uint32_t WeakReference__ctor_mDC58C556A72BFE11C54C39871D33C568B41D7297_MetadataUsageId;

struct CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744;
struct ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D;
struct StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef DBNULL_TE7FF9F06B07B9177FEA5297B657A3A7688526B6A_H
#define DBNULL_TE7FF9F06B07B9177FEA5297B657A3A7688526B6A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DBNull
struct  DBNull_tE7FF9F06B07B9177FEA5297B657A3A7688526B6A  : public RuntimeObject
{
public:

public:
};

struct DBNull_tE7FF9F06B07B9177FEA5297B657A3A7688526B6A_StaticFields
{
public:
	// System.DBNull System.DBNull::Value
	DBNull_tE7FF9F06B07B9177FEA5297B657A3A7688526B6A * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(DBNull_tE7FF9F06B07B9177FEA5297B657A3A7688526B6A_StaticFields, ___Value_0)); }
	inline DBNull_tE7FF9F06B07B9177FEA5297B657A3A7688526B6A * get_Value_0() const { return ___Value_0; }
	inline DBNull_tE7FF9F06B07B9177FEA5297B657A3A7688526B6A ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(DBNull_tE7FF9F06B07B9177FEA5297B657A3A7688526B6A * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBNULL_TE7FF9F06B07B9177FEA5297B657A3A7688526B6A_H
#ifndef EVENTARGS_TA4C15C1D2AB4B139169B1942C1477933E00DCA17_H
#define EVENTARGS_TA4C15C1D2AB4B139169B1942C1477933E00DCA17_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_tA4C15C1D2AB4B139169B1942C1477933E00DCA17  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tA4C15C1D2AB4B139169B1942C1477933E00DCA17_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tA4C15C1D2AB4B139169B1942C1477933E00DCA17 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tA4C15C1D2AB4B139169B1942C1477933E00DCA17_StaticFields, ___Empty_0)); }
	inline EventArgs_tA4C15C1D2AB4B139169B1942C1477933E00DCA17 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tA4C15C1D2AB4B139169B1942C1477933E00DCA17 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tA4C15C1D2AB4B139169B1942C1477933E00DCA17 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_TA4C15C1D2AB4B139169B1942C1477933E00DCA17_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef SERIALIZATIONINFO_T778922F6A5AACC38C8F326D3338A91D6D72B11E2_H
#define SERIALIZATIONINFO_T778922F6A5AACC38C8F326D3338A91D6D72B11E2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationInfo::serialized
	Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * ___serialized_0;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationInfo::values
	ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * ___values_1;
	// System.String System.Runtime.Serialization.SerializationInfo::assemblyName
	String_t* ___assemblyName_2;
	// System.String System.Runtime.Serialization.SerializationInfo::fullTypeName
	String_t* ___fullTypeName_3;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::converter
	RuntimeObject* ___converter_4;

public:
	inline static int32_t get_offset_of_serialized_0() { return static_cast<int32_t>(offsetof(SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2, ___serialized_0)); }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * get_serialized_0() const { return ___serialized_0; }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 ** get_address_of_serialized_0() { return &___serialized_0; }
	inline void set_serialized_0(Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * value)
	{
		___serialized_0 = value;
		Il2CppCodeGenWriteBarrier((&___serialized_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2, ___values_1)); }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * get_values_1() const { return ___values_1; }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F ** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}

	inline static int32_t get_offset_of_assemblyName_2() { return static_cast<int32_t>(offsetof(SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2, ___assemblyName_2)); }
	inline String_t* get_assemblyName_2() const { return ___assemblyName_2; }
	inline String_t** get_address_of_assemblyName_2() { return &___assemblyName_2; }
	inline void set_assemblyName_2(String_t* value)
	{
		___assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_2), value);
	}

	inline static int32_t get_offset_of_fullTypeName_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2, ___fullTypeName_3)); }
	inline String_t* get_fullTypeName_3() const { return ___fullTypeName_3; }
	inline String_t** get_address_of_fullTypeName_3() { return &___fullTypeName_3; }
	inline void set_fullTypeName_3(String_t* value)
	{
		___fullTypeName_3 = value;
		Il2CppCodeGenWriteBarrier((&___fullTypeName_3), value);
	}

	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2, ___converter_4)); }
	inline RuntimeObject* get_converter_4() const { return ___converter_4; }
	inline RuntimeObject** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(RuntimeObject* value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier((&___converter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFO_T778922F6A5AACC38C8F326D3338A91D6D72B11E2_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#define VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_com
{
};
#endif // VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#ifndef VERSION_TD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15_H
#define VERSION_TD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Version
struct  Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_1;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_2;
	// System.Int32 System.Version::_Build
	int32_t ____Build_3;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_4;

public:
	inline static int32_t get_offset_of__Major_1() { return static_cast<int32_t>(offsetof(Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15, ____Major_1)); }
	inline int32_t get__Major_1() const { return ____Major_1; }
	inline int32_t* get_address_of__Major_1() { return &____Major_1; }
	inline void set__Major_1(int32_t value)
	{
		____Major_1 = value;
	}

	inline static int32_t get_offset_of__Minor_2() { return static_cast<int32_t>(offsetof(Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15, ____Minor_2)); }
	inline int32_t get__Minor_2() const { return ____Minor_2; }
	inline int32_t* get_address_of__Minor_2() { return &____Minor_2; }
	inline void set__Minor_2(int32_t value)
	{
		____Minor_2 = value;
	}

	inline static int32_t get_offset_of__Build_3() { return static_cast<int32_t>(offsetof(Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15, ____Build_3)); }
	inline int32_t get__Build_3() const { return ____Build_3; }
	inline int32_t* get_address_of__Build_3() { return &____Build_3; }
	inline void set__Build_3(int32_t value)
	{
		____Build_3 = value;
	}

	inline static int32_t get_offset_of__Revision_4() { return static_cast<int32_t>(offsetof(Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15, ____Revision_4)); }
	inline int32_t get__Revision_4() const { return ____Revision_4; }
	inline int32_t* get_address_of__Revision_4() { return &____Revision_4; }
	inline void set__Revision_4(int32_t value)
	{
		____Revision_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERSION_TD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15_H
#ifndef IL2CPPCOMOBJECT_H
#define IL2CPPCOMOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComObject

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IL2CPPCOMOBJECT_H
#ifndef BOOLEAN_T92E4792324DA9B716F339A3B965A14965E99A4EF_H
#define BOOLEAN_T92E4792324DA9B716F339A3B965A14965E99A4EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T92E4792324DA9B716F339A3B965A14965E99A4EF_H
#ifndef CHAR_T2AF4E0DF8B57497BF49A6A8822F574113ADA8432_H
#define CHAR_T2AF4E0DF8B57497BF49A6A8822F574113ADA8432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T2AF4E0DF8B57497BF49A6A8822F574113ADA8432_H
#ifndef ENUM_T5AAC444DFCAA78411386665A25FE3CD3169879EF_H
#define ENUM_T5AAC444DFCAA78411386665A25FE3CD3169879EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF  : public ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C
{
public:

public:
};

struct Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_marshaled_com
{
};
#endif // ENUM_T5AAC444DFCAA78411386665A25FE3CD3169879EF_H
#ifndef INT32_TC16F64335CE8B56D99229DE94BB3A876ED55FE87_H
#define INT32_TC16F64335CE8B56D99229DE94BB3A876ED55FE87_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_TC16F64335CE8B56D99229DE94BB3A876ED55FE87_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef GCHANDLE_TE002D24915851AD73ACC0F503601C384273C3060_H
#define GCHANDLE_TE002D24915851AD73ACC0F503601C384273C3060_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_tE002D24915851AD73ACC0F503601C384273C3060, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_TE002D24915851AD73ACC0F503601C384273C3060_H
#ifndef SYSTEMEXCEPTION_T81A06ADD519539D252788D75E44AFFBE6580E301_H
#define SYSTEMEXCEPTION_T81A06ADD519539D252788D75E44AFFBE6580E301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T81A06ADD519539D252788D75E44AFFBE6580E301_H
#ifndef UINT32_T69F92C53356907895162C7F31D87C59F9141D3B8_H
#define UINT32_T69F92C53356907895162C7F31D87C59F9141D3B8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t69F92C53356907895162C7F31D87C59F9141D3B8 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t69F92C53356907895162C7F31D87C59F9141D3B8, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T69F92C53356907895162C7F31D87C59F9141D3B8_H
#ifndef UINT64_T9739CEA7F47A9C2DB5DDEAE34A1CE4B78AF8B29F_H
#define UINT64_T9739CEA7F47A9C2DB5DDEAE34A1CE4B78AF8B29F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t9739CEA7F47A9C2DB5DDEAE34A1CE4B78AF8B29F 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt64_t9739CEA7F47A9C2DB5DDEAE34A1CE4B78AF8B29F, ___m_value_2)); }
	inline uint64_t get_m_value_2() const { return ___m_value_2; }
	inline uint64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T9739CEA7F47A9C2DB5DDEAE34A1CE4B78AF8B29F_H
#ifndef UINTPTR_T_H
#define UINTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTPTR_T_H
#ifndef UNHANDLEDEXCEPTIONEVENTARGS_T2B19479B2BC866C465A8E07BEA9C6027CB168BA2_H
#define UNHANDLEDEXCEPTIONEVENTARGS_T2B19479B2BC866C465A8E07BEA9C6027CB168BA2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventArgs
struct  UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2  : public EventArgs_tA4C15C1D2AB4B139169B1942C1477933E00DCA17
{
public:
	// System.Object System.UnhandledExceptionEventArgs::exception
	RuntimeObject * ___exception_1;
	// System.Boolean System.UnhandledExceptionEventArgs::m_isTerminating
	bool ___m_isTerminating_2;

public:
	inline static int32_t get_offset_of_exception_1() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2, ___exception_1)); }
	inline RuntimeObject * get_exception_1() const { return ___exception_1; }
	inline RuntimeObject ** get_address_of_exception_1() { return &___exception_1; }
	inline void set_exception_1(RuntimeObject * value)
	{
		___exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___exception_1), value);
	}

	inline static int32_t get_offset_of_m_isTerminating_2() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2, ___m_isTerminating_2)); }
	inline bool get_m_isTerminating_2() const { return ___m_isTerminating_2; }
	inline bool* get_address_of_m_isTerminating_2() { return &___m_isTerminating_2; }
	inline void set_m_isTerminating_2(bool value)
	{
		___m_isTerminating_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTARGS_T2B19479B2BC866C465A8E07BEA9C6027CB168BA2_H
#ifndef VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#define VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_tDB81A15FA2AB53E2401A76B745D215397B29F783 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#ifndef __IL2CPPCOMDELEGATE_T67B66A584C55DA33A97319518FAD9D61A503C4EE_H
#define __IL2CPPCOMDELEGATE_T67B66A584C55DA33A97319518FAD9D61A503C4EE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComDelegate
struct  __Il2CppComDelegate_t67B66A584C55DA33A97319518FAD9D61A503C4EE  : public Il2CppComObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __IL2CPPCOMDELEGATE_T67B66A584C55DA33A97319518FAD9D61A503C4EE_H
#ifndef ARGUMENTEXCEPTION_T62D3E79ABA478354E3BFBA10C9BF16549AF82D60_H
#define ARGUMENTEXCEPTION_T62D3E79ABA478354E3BFBA10C9BF16549AF82D60_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60  : public SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T62D3E79ABA478354E3BFBA10C9BF16549AF82D60_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 * ___data_8;

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
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
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

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_8)); }
	inline DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 * get_data_8() const { return ___data_8; }
	inline DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T_H
#ifndef NOTSUPPORTEDEXCEPTION_T8C86714BF66E55D3F33E200FA7C385BC13C7E3B6_H
#define NOTSUPPORTEDEXCEPTION_T8C86714BF66E55D3F33E200FA7C385BC13C7E3B6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6  : public SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T8C86714BF66E55D3F33E200FA7C385BC13C7E3B6_H
#ifndef ASSEMBLY_T_H
#define ASSEMBLY_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly
struct  Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly_ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_tF7DED67E7D9BC1FAD7061838365480A13D2A0539 * ___resolve_event_holder_1;
	// System.Security.Policy.Evidence System.Reflection.Assembly::_evidence
	Evidence_t9ACD05D8C0E5A1F59CD16AF01459BBD955376A4B * ____evidence_2;
	// System.Security.PermissionSet System.Reflection.Assembly::_minimum
	PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B * ____minimum_3;
	// System.Security.PermissionSet System.Reflection.Assembly::_optional
	PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B * ____optional_4;
	// System.Security.PermissionSet System.Reflection.Assembly::_refuse
	PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B * ____refuse_5;
	// System.Security.PermissionSet System.Reflection.Assembly::_granted
	PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B * ____granted_6;
	// System.Security.PermissionSet System.Reflection.Assembly::_denied
	PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_tF7DED67E7D9BC1FAD7061838365480A13D2A0539 * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_tF7DED67E7D9BC1FAD7061838365480A13D2A0539 ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_tF7DED67E7D9BC1FAD7061838365480A13D2A0539 * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((&___resolve_event_holder_1), value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline Evidence_t9ACD05D8C0E5A1F59CD16AF01459BBD955376A4B * get__evidence_2() const { return ____evidence_2; }
	inline Evidence_t9ACD05D8C0E5A1F59CD16AF01459BBD955376A4B ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(Evidence_t9ACD05D8C0E5A1F59CD16AF01459BBD955376A4B * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_2), value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B * get__minimum_3() const { return ____minimum_3; }
	inline PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((&____minimum_3), value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B * get__optional_4() const { return ____optional_4; }
	inline PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((&____optional_4), value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B * get__refuse_5() const { return ____refuse_5; }
	inline PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((&____refuse_5), value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B * get__granted_6() const { return ____granted_6; }
	inline PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((&____granted_6), value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B * get__denied_7() const { return ____denied_7; }
	inline PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((&____denied_7), value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLY_T_H
#ifndef BINDINGFLAGS_T7FD4941D9115FF77D5F573F63A93BFBC5D1F63B2_H
#define BINDINGFLAGS_T7FD4941D9115FF77D5F573F63A93BFBC5D1F63B2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t7FD4941D9115FF77D5F573F63A93BFBC5D1F63B2 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t7FD4941D9115FF77D5F573F63A93BFBC5D1F63B2, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T7FD4941D9115FF77D5F573F63A93BFBC5D1F63B2_H
#ifndef GCHANDLETYPE_TE222D96905809FC8D4A6377409E3A6EDEFDD9C76_H
#define GCHANDLETYPE_TE222D96905809FC8D4A6377409E3A6EDEFDD9C76_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_tE222D96905809FC8D4A6377409E3A6EDEFDD9C76 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GCHandleType_tE222D96905809FC8D4A6377409E3A6EDEFDD9C76, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLETYPE_TE222D96905809FC8D4A6377409E3A6EDEFDD9C76_H
#ifndef STREAMINGCONTEXTSTATES_TF8A83A38064A2CFF4FDEC6CD633A5509C596E397_H
#define STREAMINGCONTEXTSTATES_TF8A83A38064A2CFF4FDEC6CD633A5509C596E397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_tF8A83A38064A2CFF4FDEC6CD633A5509C596E397 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF8A83A38064A2CFF4FDEC6CD633A5509C596E397, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMINGCONTEXTSTATES_TF8A83A38064A2CFF4FDEC6CD633A5509C596E397_H
#ifndef RUNTIMETYPEHANDLE_T58BB862EF56F46A9518F8ACA413EF7D70238F1AD_H
#define RUNTIMETYPEHANDLE_T58BB862EF56F46A9518F8ACA413EF7D70238F1AD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T58BB862EF56F46A9518F8ACA413EF7D70238F1AD_H
#ifndef UNAUTHORIZEDACCESSEXCEPTION_T593701C7ADFE096EC0340554C2E030FFCEEC369B_H
#define UNAUTHORIZEDACCESSEXCEPTION_T593701C7ADFE096EC0340554C2E030FFCEEC369B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnauthorizedAccessException
struct  UnauthorizedAccessException_t593701C7ADFE096EC0340554C2E030FFCEEC369B  : public SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNAUTHORIZEDACCESSEXCEPTION_T593701C7ADFE096EC0340554C2E030FFCEEC369B_H
#ifndef UNITYTYPE_T2B30A6EA527F7C6B2CB4B0D8F6D455F828A36E0E_H
#define UNITYTYPE_T2B30A6EA527F7C6B2CB4B0D8F6D455F828A36E0E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder_UnityType
struct  UnityType_t2B30A6EA527F7C6B2CB4B0D8F6D455F828A36E0E 
{
public:
	// System.Byte System.UnitySerializationHolder_UnityType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityType_t2B30A6EA527F7C6B2CB4B0D8F6D455F828A36E0E, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYTYPE_T2B30A6EA527F7C6B2CB4B0D8F6D455F828A36E0E_H
#ifndef WEAKREFERENCE_T748C76A5CAD65471521659008DBC57191528AA9C_H
#define WEAKREFERENCE_T748C76A5CAD65471521659008DBC57191528AA9C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WeakReference
struct  WeakReference_t748C76A5CAD65471521659008DBC57191528AA9C  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_tE002D24915851AD73ACC0F503601C384273C3060  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_t748C76A5CAD65471521659008DBC57191528AA9C, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_t748C76A5CAD65471521659008DBC57191528AA9C, ___gcHandle_1)); }
	inline GCHandle_tE002D24915851AD73ACC0F503601C384273C3060  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_tE002D24915851AD73ACC0F503601C384273C3060  value)
	{
		___gcHandle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKREFERENCE_T748C76A5CAD65471521659008DBC57191528AA9C_H
#ifndef ARGUMENTNULLEXCEPTION_T13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_H
#define ARGUMENTNULLEXCEPTION_T13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4  : public ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T34548D25A41CBE2BC60196610CCE14D9D56892D4_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T34548D25A41CBE2BC60196610CCE14D9D56892D4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4  : public ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60
{
public:
	// System.Object System.ArgumentOutOfRangeException::actual_value
	RuntimeObject * ___actual_value_13;

public:
	inline static int32_t get_offset_of_actual_value_13() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4, ___actual_value_13)); }
	inline RuntimeObject * get_actual_value_13() const { return ___actual_value_13; }
	inline RuntimeObject ** get_address_of_actual_value_13() { return &___actual_value_13; }
	inline void set_actual_value_13(RuntimeObject * value)
	{
		___actual_value_13 = value;
		Il2CppCodeGenWriteBarrier((&___actual_value_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T34548D25A41CBE2BC60196610CCE14D9D56892D4_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef MODULE_T6211282315B01A0EB488BB95BA1A73BBE5C6B7D8_H
#define MODULE_T6211282315B01A0EB488BB95BA1A73BBE5C6B7D8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Module
struct  Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Module::_impl
	intptr_t ____impl_3;
	// System.Reflection.Assembly System.Reflection.Module::assembly
	Assembly_t * ___assembly_4;
	// System.String System.Reflection.Module::fqname
	String_t* ___fqname_5;
	// System.String System.Reflection.Module::name
	String_t* ___name_6;
	// System.String System.Reflection.Module::scopename
	String_t* ___scopename_7;
	// System.Boolean System.Reflection.Module::is_resource
	bool ___is_resource_8;
	// System.Int32 System.Reflection.Module::token
	int32_t ___token_9;

public:
	inline static int32_t get_offset_of__impl_3() { return static_cast<int32_t>(offsetof(Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8, ____impl_3)); }
	inline intptr_t get__impl_3() const { return ____impl_3; }
	inline intptr_t* get_address_of__impl_3() { return &____impl_3; }
	inline void set__impl_3(intptr_t value)
	{
		____impl_3 = value;
	}

	inline static int32_t get_offset_of_assembly_4() { return static_cast<int32_t>(offsetof(Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8, ___assembly_4)); }
	inline Assembly_t * get_assembly_4() const { return ___assembly_4; }
	inline Assembly_t ** get_address_of_assembly_4() { return &___assembly_4; }
	inline void set_assembly_4(Assembly_t * value)
	{
		___assembly_4 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_4), value);
	}

	inline static int32_t get_offset_of_fqname_5() { return static_cast<int32_t>(offsetof(Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8, ___fqname_5)); }
	inline String_t* get_fqname_5() const { return ___fqname_5; }
	inline String_t** get_address_of_fqname_5() { return &___fqname_5; }
	inline void set_fqname_5(String_t* value)
	{
		___fqname_5 = value;
		Il2CppCodeGenWriteBarrier((&___fqname_5), value);
	}

	inline static int32_t get_offset_of_name_6() { return static_cast<int32_t>(offsetof(Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8, ___name_6)); }
	inline String_t* get_name_6() const { return ___name_6; }
	inline String_t** get_address_of_name_6() { return &___name_6; }
	inline void set_name_6(String_t* value)
	{
		___name_6 = value;
		Il2CppCodeGenWriteBarrier((&___name_6), value);
	}

	inline static int32_t get_offset_of_scopename_7() { return static_cast<int32_t>(offsetof(Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8, ___scopename_7)); }
	inline String_t* get_scopename_7() const { return ___scopename_7; }
	inline String_t** get_address_of_scopename_7() { return &___scopename_7; }
	inline void set_scopename_7(String_t* value)
	{
		___scopename_7 = value;
		Il2CppCodeGenWriteBarrier((&___scopename_7), value);
	}

	inline static int32_t get_offset_of_is_resource_8() { return static_cast<int32_t>(offsetof(Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8, ___is_resource_8)); }
	inline bool get_is_resource_8() const { return ___is_resource_8; }
	inline bool* get_address_of_is_resource_8() { return &___is_resource_8; }
	inline void set_is_resource_8(bool value)
	{
		___is_resource_8 = value;
	}

	inline static int32_t get_offset_of_token_9() { return static_cast<int32_t>(offsetof(Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8, ___token_9)); }
	inline int32_t get_token_9() const { return ___token_9; }
	inline int32_t* get_address_of_token_9() { return &___token_9; }
	inline void set_token_9(int32_t value)
	{
		___token_9 = value;
	}
};

struct Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8_StaticFields
{
public:
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_t302222D6EE873CCA463EAC9F0D6BC173DC63E4DB * ___FilterTypeName_1;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_t302222D6EE873CCA463EAC9F0D6BC173DC63E4DB * ___FilterTypeNameIgnoreCase_2;

public:
	inline static int32_t get_offset_of_FilterTypeName_1() { return static_cast<int32_t>(offsetof(Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8_StaticFields, ___FilterTypeName_1)); }
	inline TypeFilter_t302222D6EE873CCA463EAC9F0D6BC173DC63E4DB * get_FilterTypeName_1() const { return ___FilterTypeName_1; }
	inline TypeFilter_t302222D6EE873CCA463EAC9F0D6BC173DC63E4DB ** get_address_of_FilterTypeName_1() { return &___FilterTypeName_1; }
	inline void set_FilterTypeName_1(TypeFilter_t302222D6EE873CCA463EAC9F0D6BC173DC63E4DB * value)
	{
		___FilterTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeName_1), value);
	}

	inline static int32_t get_offset_of_FilterTypeNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8_StaticFields, ___FilterTypeNameIgnoreCase_2)); }
	inline TypeFilter_t302222D6EE873CCA463EAC9F0D6BC173DC63E4DB * get_FilterTypeNameIgnoreCase_2() const { return ___FilterTypeNameIgnoreCase_2; }
	inline TypeFilter_t302222D6EE873CCA463EAC9F0D6BC173DC63E4DB ** get_address_of_FilterTypeNameIgnoreCase_2() { return &___FilterTypeNameIgnoreCase_2; }
	inline void set_FilterTypeNameIgnoreCase_2(TypeFilter_t302222D6EE873CCA463EAC9F0D6BC173DC63E4DB * value)
	{
		___FilterTypeNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeNameIgnoreCase_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULE_T6211282315B01A0EB488BB95BA1A73BBE5C6B7D8_H
#ifndef STREAMINGCONTEXT_T6B0A404807D43232E95DD1A784BF4BA30FADBCC1_H
#define STREAMINGCONTEXT_T6B0A404807D43232E95DD1A784BF4BA30FADBCC1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1 
{
public:
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::state
	int32_t ___state_0;
	// System.Object System.Runtime.Serialization.StreamingContext::additional
	RuntimeObject * ___additional_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_additional_1() { return static_cast<int32_t>(offsetof(StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1, ___additional_1)); }
	inline RuntimeObject * get_additional_1() const { return ___additional_1; }
	inline RuntimeObject ** get_address_of_additional_1() { return &___additional_1; }
	inline void set_additional_1(RuntimeObject * value)
	{
		___additional_1 = value;
		Il2CppCodeGenWriteBarrier((&___additional_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1_marshaled_pinvoke
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1_marshaled_com
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
#endif // STREAMINGCONTEXT_T6B0A404807D43232E95DD1A784BF4BA30FADBCC1_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef UNITYSERIALIZATIONHOLDER_T1F3CD67778C9EC0C6F3A05CC6F44A4CC047B7307_H
#define UNITYSERIALIZATIONHOLDER_T1F3CD67778C9EC0C6F3A05CC6F44A4CC047B7307_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder
struct  UnitySerializationHolder_t1F3CD67778C9EC0C6F3A05CC6F44A4CC047B7307  : public RuntimeObject
{
public:
	// System.String System.UnitySerializationHolder::_data
	String_t* ____data_0;
	// System.UnitySerializationHolder_UnityType System.UnitySerializationHolder::_unityType
	uint8_t ____unityType_1;
	// System.String System.UnitySerializationHolder::_assemblyName
	String_t* ____assemblyName_2;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t1F3CD67778C9EC0C6F3A05CC6F44A4CC047B7307, ____data_0)); }
	inline String_t* get__data_0() const { return ____data_0; }
	inline String_t** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(String_t* value)
	{
		____data_0 = value;
		Il2CppCodeGenWriteBarrier((&____data_0), value);
	}

	inline static int32_t get_offset_of__unityType_1() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t1F3CD67778C9EC0C6F3A05CC6F44A4CC047B7307, ____unityType_1)); }
	inline uint8_t get__unityType_1() const { return ____unityType_1; }
	inline uint8_t* get_address_of__unityType_1() { return &____unityType_1; }
	inline void set__unityType_1(uint8_t value)
	{
		____unityType_1 = value;
	}

	inline static int32_t get_offset_of__assemblyName_2() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t1F3CD67778C9EC0C6F3A05CC6F44A4CC047B7307, ____assemblyName_2)); }
	inline String_t* get__assemblyName_2() const { return ____assemblyName_2; }
	inline String_t** get_address_of__assemblyName_2() { return &____assemblyName_2; }
	inline void set__assemblyName_2(String_t* value)
	{
		____assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&____assemblyName_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSERIALIZATIONHOLDER_T1F3CD67778C9EC0C6F3A05CC6F44A4CC047B7307_H
#ifndef ASYNCCALLBACK_T74ABD1277F711E7FBDCB00E169A63DEFD39E86A2_H
#define ASYNCCALLBACK_T74ABD1277F711E7FBDCB00E169A63DEFD39E86A2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t74ABD1277F711E7FBDCB00E169A63DEFD39E86A2  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T74ABD1277F711E7FBDCB00E169A63DEFD39E86A2_H
#ifndef UNHANDLEDEXCEPTIONEVENTHANDLER_TB7988286F96CF5350E4037A92C900D84BB7FB650_H
#define UNHANDLEDEXCEPTIONEVENTHANDLER_TB7988286F96CF5350E4037A92C900D84BB7FB650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventHandler
struct  UnhandledExceptionEventHandler_tB7988286F96CF5350E4037A92C900D84BB7FB650  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTHANDLER_TB7988286F96CF5350E4037A92C900D84BB7FB650_H
// System.Object[]
struct ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};



// System.Void System.UIntPtr::.ctor(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void UIntPtr__ctor_m66E198CCA6B551D852448BC9B89FDCC1E61C60AA (uintptr_t* __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740 (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.UInt64)
extern "C" IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_mD1F127E2DEF9FCD92A4EE6545DAAB7BBB6E14F33 (SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * __this, String_t* ___name0, uint64_t ___value1, const RuntimeMethod* method);
// System.Void System.UIntPtr::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m117ECE6EA8017FA6250B7D59CFE40D794090C9D6 (uintptr_t* __this, SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___info0, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___context1, const RuntimeMethod* method);
// System.Boolean System.UIntPtr::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool UIntPtr_Equals_m099FA719C2D00C6231F941B1651A1165743C84CA (uintptr_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.UIntPtr::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t UIntPtr_GetHashCode_mAF75E1D8E3A055D68DD17DA3A99B29F260B68B04 (uintptr_t* __this, const RuntimeMethod* method);
// System.String System.UInt32::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* UInt32_ToString_mC174A5A4A8166D0F152D94A65CB535E4DAC99F4D (uint32_t* __this, const RuntimeMethod* method);
// System.String System.UIntPtr::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* UIntPtr_ToString_mECE076D76071F88BD61F186065317BCEE2DCDC73 (uintptr_t* __this, const RuntimeMethod* method);
// System.String Locale::GetText(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Locale_GetText_m8335AC363D872105D0CE318A9CB1001A15813542 (String_t* ___msg0, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void SystemException__ctor_m6D95D885FFDF04207E9E0EDAD84D0748CB9C2FA7 (SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Exception::set_HResult(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Exception_set_HResult_mADAD3BE64DB3BA39AAEDD7F0B1EF2AB7C4B53CDB (Exception_t * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void SystemException__ctor_m13CFB82265CAA809903F63991AB42817D6CC3534 (SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301 * __this, SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___info0, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___context1, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
extern "C" IL2CPP_METHOD_ATTR void EventArgs__ctor_mB712E19C94A622FFFE48714A6D43E02E9E6009D4 (EventArgs_tA4C15C1D2AB4B139169B1942C1477933E00DCA17 * __this, const RuntimeMethod* method);
// System.Void System.UnhandledExceptionEventHandler::Invoke(System.Object,System.UnhandledExceptionEventArgs)
extern "C" IL2CPP_METHOD_ATTR void UnhandledExceptionEventHandler_Invoke_m460740022E4A4F884803C974F64025D314E5D7CF (UnhandledExceptionEventHandler_tB7988286F96CF5350E4037A92C900D84BB7FB650 * __this, RuntimeObject * ___sender0, UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 * ___e1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.Runtime.Serialization.SerializationInfo::GetString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* SerializationInfo_GetString_m70A93D16FAA658E8F1D563A656F2E2025BE8906A (SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Int32 System.Runtime.Serialization.SerializationInfo::GetInt32(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m6AC6D412C57BCE31EE1D8E1224F6DECBF5A68B1A (SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m5B3E183DD8F7D38D1A1EAE3C2826EF8FBE127580 (SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * __this, String_t* ___name0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m17E95375C618FC19411D2E86E53497825B5A9D02 (SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73 (RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  ___handle0, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::SetType(System.Type)
extern "C" IL2CPP_METHOD_ATTR void SerializationInfo_SetType_m32D2E2BB46664D1A4B8B9051D4388ABAA3D6A58C (SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m993E65F4E4457CE1761C49B188A6CF858597BDDE (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.Reflection.Module::get_ScopeName()
extern "C" IL2CPP_METHOD_ATTR String_t* Module_get_ScopeName_m423C1390C2D28389CB72CD9115DDDC145406946A (Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8 * __this, const RuntimeMethod* method);
// System.Reflection.Assembly System.Reflection.Module::get_Assembly()
extern "C" IL2CPP_METHOD_ATTR Assembly_t * Module_get_Assembly_mE80B2C0600696E57AFA6FAFB516DB92A4E926E4D (Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mCD2944038AAC6677F82C713B8CB8C67CCF48EF10 (NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6 * __this, const RuntimeMethod* method);
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.String)
extern "C" IL2CPP_METHOD_ATTR Assembly_t * Assembly_Load_m430E0CB1BD58904D141BB0F73B1775862A0D2170 (String_t* ___assemblyString0, const RuntimeMethod* method);
// System.Reflection.Module System.Reflection.Assembly::GetModule(System.String)
extern "C" IL2CPP_METHOD_ATTR Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8 * Assembly_GetModule_m636C7961E007511E1BD09C455B06FBE78DF64BF0 (Assembly_t * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m631F783E957027CA661C281874882040F7693602 (NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.ValueType::InternalEquals(System.Object,System.Object,System.Object[]&)
extern "C" IL2CPP_METHOD_ATTR bool ValueType_InternalEquals_m9AE48614FA28894778698A3E84F0BDDDC325AB02 (RuntimeObject * ___o10, RuntimeObject * ___o21, ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D** ___fields2, const RuntimeMethod* method);
// System.Boolean System.ValueType::DefaultEquals(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ValueType_DefaultEquals_m5ECF7678A8DF137FF030DB9DAAA282DD684571DD (RuntimeObject * ___o10, RuntimeObject * ___o21, const RuntimeMethod* method);
// System.Int32 System.ValueType::InternalGetHashCode(System.Object,System.Object[]&)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueType_InternalGetHashCode_mA5925DF5288F5152C970140E62E0FE71DD99671E (RuntimeObject * ___o0, ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D** ___fields1, const RuntimeMethod* method);
// System.Void System.Version::CheckedSet(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Version_CheckedSet_m8F93592250413F64CD48EE56635B87BD10E01775 (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, int32_t ___defined0, int32_t ___major1, int32_t ___minor2, int32_t ___build3, int32_t ___revision4, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* String_Split_m3A8A48A00011BA5F135EBC797AD2B12E710A48CA (String_t* __this, CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___separator0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8917650A5D8F2F36C6B623A720DF2D2A630D3533 (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Int32_Parse_mF93B2C50DDBC196570E2EA8495DBA36F2CD75290 (String_t* ___s0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE814EB7B9A7E67CA0BD6A97F77497C9669A4FEEA (ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Version::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Version__ctor_m6F990EB264310E8E1AFDBCEC5668CDF132432F68 (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, int32_t ___major0, int32_t ___minor1, const RuntimeMethod* method);
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Version__ctor_m1F3F5FD07445CBBC0BDF9BF9F72A8C3DD6D5FB14 (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, int32_t ___major0, int32_t ___minor1, int32_t ___build2, const RuntimeMethod* method);
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Version__ctor_m28C37359BE6B006A3EB463BED789A76D1790E45B (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, int32_t ___major0, int32_t ___minor1, int32_t ___build2, int32_t ___revision3, const RuntimeMethod* method);
// System.Int32 System.Version::CompareTo(System.Version)
extern "C" IL2CPP_METHOD_ATTR int32_t Version_CompareTo_mF1ED7826B027AC4BEC76981ED28772F56C9CD6BE (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * ___value0, const RuntimeMethod* method);
// System.Boolean System.Version::Equals(System.Version)
extern "C" IL2CPP_METHOD_ATTR bool Version_Equals_m15047C69E4AA3AB29506EE211B87D491B2B0BFA5 (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
extern "C" IL2CPP_METHOD_ATTR bool Version_op_Equality_m5F34580D30263159C103136543F7723DB99C5215 (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * ___v10, Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * ___v21, const RuntimeMethod* method);
// System.Boolean System.Version::op_Inequality(System.Version,System.Version)
extern "C" IL2CPP_METHOD_ATTR bool Version_op_Inequality_m8791D9395E40AC1315BF1374388EB9B76864744E (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * ___v10, Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * ___v21, const RuntimeMethod* method);
// System.String System.Int32::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_mE7DFEEF8FFE4DA97DA211C49948D8E752E6B61C8 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mDF3A55D4269A0D2D7969D90C6D38B472E24DD445 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Char::IsDigit(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool Char_IsDigit_m64DFE12D7DCF1AC634EA805421E06B4B18E1C036 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4 (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.Object::Equals(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_Equals_m8F1D37CE67D713E8EF3E9433D942A7E0242F4838 (RuntimeObject * ___objA0, RuntimeObject * ___objB1, const RuntimeMethod* method);
// System.Void System.WeakReference::.ctor(System.Object,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void WeakReference__ctor_mC5B594C73AF6091B67523598417E90FCD8226CBA (WeakReference_t748C76A5CAD65471521659008DBC57191528AA9C * __this, RuntimeObject * ___target0, bool ___trackResurrection1, const RuntimeMethod* method);
// System.Void System.WeakReference::AllocateHandle(System.Object)
extern "C" IL2CPP_METHOD_ATTR void WeakReference_AllocateHandle_m11FEC60BC1D2F935BFE8CD5764477D802E922A40 (WeakReference_t748C76A5CAD65471521659008DBC57191528AA9C * __this, RuntimeObject * ___target0, const RuntimeMethod* method);
// System.Boolean System.Runtime.Serialization.SerializationInfo::GetBoolean(System.String)
extern "C" IL2CPP_METHOD_ATTR bool SerializationInfo_GetBoolean_mDF853D9D896D7FBFA8C89BCFDCF9230412A9563F (SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SerializationInfo_GetValue_m76CB68313C2DC35BB0F508B38E7F65E0A270D717 (SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * __this, String_t* ___name0, Type_t * ___type1, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
extern "C" IL2CPP_METHOD_ATTR GCHandle_tE002D24915851AD73ACC0F503601C384273C3060  GCHandle_Alloc_m068D1EE7DC287ED4258E2FB26BC67299CEA8A10C (RuntimeObject * ___value0, int32_t ___type1, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GCHandle_get_Target_mC3CAF98C66E4DD8164D291463ADF5BC5359543E0 (GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
extern "C" IL2CPP_METHOD_ATTR void GCHandle_Free_mE2DC9BE787C9CFD3AAAB1803738BD2ADCF0219B2 (GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Object_Finalize_mF771ED4CD6EB17CF862AA2B705F0E2CC0B4ADBED (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m5AABBD341C86E74174984842FA7F3FEEB35FA953 (SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Void System.__Il2CppComObject::Finalize()
extern "C" IL2CPP_METHOD_ATTR void __Il2CppComObject_Finalize_m682584A7F72588A85A4905DDE72083A32342558A (Il2CppComObject * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.UIntPtr::.ctor(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void UIntPtr__ctor_m66E198CCA6B551D852448BC9B89FDCC1E61C60AA (uintptr_t* __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		*__this = ((((uintptr_t)L_0)));
		return;
	}
}
extern "C"  void UIntPtr__ctor_m66E198CCA6B551D852448BC9B89FDCC1E61C60AA_AdjustorThunk (RuntimeObject * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + 1);
	UIntPtr__ctor_m66E198CCA6B551D852448BC9B89FDCC1E61C60AA(_thisAdjusted, ___value0, method);
}
// System.Void System.UIntPtr::.cctor()
extern "C" IL2CPP_METHOD_ATTR void UIntPtr__cctor_m5CEC59A10CF421074BA41EF798AC069ABB40ECCE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIntPtr__cctor_m5CEC59A10CF421074BA41EF798AC069ABB40ECCE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uintptr_t L_0;
		memset(&L_0, 0, sizeof(L_0));
		UIntPtr__ctor_m66E198CCA6B551D852448BC9B89FDCC1E61C60AA((&L_0), 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UIntPtr::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m117ECE6EA8017FA6250B7D59CFE40D794090C9D6 (uintptr_t* __this, SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___info0, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m117ECE6EA8017FA6250B7D59CFE40D794090C9D6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * L_1 = (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 *)il2cpp_codegen_object_new(ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740(L_1, _stringLiteral59BD0A3FF43B32849B319E645D4798D8A5D1E889, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m117ECE6EA8017FA6250B7D59CFE40D794090C9D6_RuntimeMethod_var);
	}

IL_0011:
	{
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_2 = ___info0;
		uintptr_t L_3 = *__this;
		NullCheck(L_2);
		SerializationInfo_AddValue_mD1F127E2DEF9FCD92A4EE6545DAAB7BBB6E14F33(L_2, _stringLiteralB35BB38DF9605E4C5858316B7853A16E42EA6997, (((int64_t)((uint64_t)L_3))), /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m117ECE6EA8017FA6250B7D59CFE40D794090C9D6_AdjustorThunk (RuntimeObject * __this, SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___info0, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___context1, const RuntimeMethod* method)
{
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + 1);
	UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m117ECE6EA8017FA6250B7D59CFE40D794090C9D6(_thisAdjusted, ___info0, ___context1, method);
}
// System.Boolean System.UIntPtr::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool UIntPtr_Equals_m099FA719C2D00C6231F941B1651A1165743C84CA (uintptr_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIntPtr_Equals_m099FA719C2D00C6231F941B1651A1165743C84CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uintptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, UIntPtr_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((*(uintptr_t*)((uintptr_t*)UnBox(L_1, UIntPtr_t_il2cpp_TypeInfo_var))));
		uintptr_t L_2 = *__this;
		uintptr_t L_3 = V_0;
		return (bool)((((intptr_t)L_2) == ((intptr_t)L_3))? 1 : 0);
	}

IL_0022:
	{
		return (bool)0;
	}
}
extern "C"  bool UIntPtr_Equals_m099FA719C2D00C6231F941B1651A1165743C84CA_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + 1);
	return UIntPtr_Equals_m099FA719C2D00C6231F941B1651A1165743C84CA(_thisAdjusted, ___obj0, method);
}
// System.Int32 System.UIntPtr::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t UIntPtr_GetHashCode_mAF75E1D8E3A055D68DD17DA3A99B29F260B68B04 (uintptr_t* __this, const RuntimeMethod* method)
{
	{
		uintptr_t L_0 = *__this;
		return (((int32_t)((int32_t)L_0)));
	}
}
extern "C"  int32_t UIntPtr_GetHashCode_mAF75E1D8E3A055D68DD17DA3A99B29F260B68B04_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + 1);
	return UIntPtr_GetHashCode_mAF75E1D8E3A055D68DD17DA3A99B29F260B68B04(_thisAdjusted, method);
}
// System.String System.UIntPtr::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* UIntPtr_ToString_mECE076D76071F88BD61F186065317BCEE2DCDC73 (uintptr_t* __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uintptr_t L_0 = *__this;
		V_0 = (((int32_t)((uint32_t)L_0)));
		String_t* L_1 = UInt32_ToString_mC174A5A4A8166D0F152D94A65CB535E4DAC99F4D((uint32_t*)(&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  String_t* UIntPtr_ToString_mECE076D76071F88BD61F186065317BCEE2DCDC73_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + 1);
	return UIntPtr_ToString_mECE076D76071F88BD61F186065317BCEE2DCDC73(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.UnauthorizedAccessException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnauthorizedAccessException__ctor_mF27352A019FCA746707FE8467D70623327A29286 (UnauthorizedAccessException_t593701C7ADFE096EC0340554C2E030FFCEEC369B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnauthorizedAccessException__ctor_mF27352A019FCA746707FE8467D70623327A29286_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Locale_GetText_m8335AC363D872105D0CE318A9CB1001A15813542(_stringLiteral81CADB6DAE0B42FA83FD2FAB0350567E31D0D22E, /*hidden argument*/NULL);
		SystemException__ctor_m6D95D885FFDF04207E9E0EDAD84D0748CB9C2FA7(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_mADAD3BE64DB3BA39AAEDD7F0B1EF2AB7C4B53CDB(__this, ((int32_t)-2146233088), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnauthorizedAccessException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnauthorizedAccessException__ctor_m1837095F59B24115D16F5CC3A4F488A9B45B6838 (UnauthorizedAccessException_t593701C7ADFE096EC0340554C2E030FFCEEC369B * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		SystemException__ctor_m6D95D885FFDF04207E9E0EDAD84D0748CB9C2FA7(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_mADAD3BE64DB3BA39AAEDD7F0B1EF2AB7C4B53CDB(__this, ((int32_t)-2146233088), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnauthorizedAccessException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void UnauthorizedAccessException__ctor_m40BD61240D8F7FA5B8B8DADC9B7B186DBF968E17 (UnauthorizedAccessException_t593701C7ADFE096EC0340554C2E030FFCEEC369B * __this, SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___info0, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___context1, const RuntimeMethod* method)
{
	{
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_0 = ___info0;
		StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  L_1 = ___context1;
		SystemException__ctor_m13CFB82265CAA809903F63991AB42817D6CC3534(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void System.UnhandledExceptionEventArgs::.ctor(System.Object,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UnhandledExceptionEventArgs__ctor_m6C5F64C155794F0CAC13285CEE09322B174921F4 (UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 * __this, RuntimeObject * ___exception0, bool ___isTerminating1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnhandledExceptionEventArgs__ctor_m6C5F64C155794F0CAC13285CEE09322B174921F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tA4C15C1D2AB4B139169B1942C1477933E00DCA17_il2cpp_TypeInfo_var);
		EventArgs__ctor_mB712E19C94A622FFFE48714A6D43E02E9E6009D4(__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___exception0;
		__this->set_exception_1(L_0);
		bool L_1 = ___isTerminating1;
		__this->set_m_isTerminating_2(L_1);
		return;
	}
}
// System.Object System.UnhandledExceptionEventArgs::get_ExceptionObject()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * UnhandledExceptionEventArgs_get_ExceptionObject_mC8F5491EA9B57E2326F01A664F0A6523D9FAF8DE (UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_exception_1();
		return L_0;
	}
}
// System.Boolean System.UnhandledExceptionEventArgs::get_IsTerminating()
extern "C" IL2CPP_METHOD_ATTR bool UnhandledExceptionEventArgs_get_IsTerminating_m01779BB68E0EFE15E8CC46D6DF47DFCEE22E0096 (UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_isTerminating_2();
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
// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnhandledExceptionEventHandler__ctor_m7E23C62668D3C8082A36382C85CEDEFB45165FAB (UnhandledExceptionEventHandler_tB7988286F96CF5350E4037A92C900D84BB7FB650 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void System.UnhandledExceptionEventHandler::Invoke(System.Object,System.UnhandledExceptionEventArgs)
extern "C" IL2CPP_METHOD_ATTR void UnhandledExceptionEventHandler_Invoke_m460740022E4A4F884803C974F64025D314E5D7CF (UnhandledExceptionEventHandler_tB7988286F96CF5350E4037A92C900D84BB7FB650 * __this, RuntimeObject * ___sender0, UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 * ___e1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnhandledExceptionEventHandler_Invoke_m460740022E4A4F884803C974F64025D314E5D7CF((UnhandledExceptionEventHandler_tB7988286F96CF5350E4037A92C900D84BB7FB650 *)__this->get_prev_9(), ___sender0, ___e1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	if (!il2cpp_codegen_method_is_virtual(targetMethod))
	{
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	}
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
	if (___methodIsStatic)
	{
		if (___parameterCount == 2)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (void*, RuntimeObject *, UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
		}
	}
	else if (___parameterCount != 2)
	{
		// open
		if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
		{
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 * >::Invoke(targetMethod, ___sender0, ___e1);
					else
						GenericVirtActionInvoker1< UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 * >::Invoke(targetMethod, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
					else
						VirtActionInvoker1< UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
				}
			}
		}
		else
		{
			typedef void (*FunctionPointerType) (RuntimeObject *, UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
		}
	}
	else
	{
		// closed
		if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
		{
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
					else
						VirtActionInvoker2< RuntimeObject *, UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
				}
			}
		}
		else
		{
			typedef void (*FunctionPointerType) (void*, RuntimeObject *, UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
		}
	}
}
// System.IAsyncResult System.UnhandledExceptionEventHandler::BeginInvoke(System.Object,System.UnhandledExceptionEventArgs,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnhandledExceptionEventHandler_BeginInvoke_m5A0132DEB69F3FDDC4849B5B929107C3B8DA6385 (UnhandledExceptionEventHandler_tB7988286F96CF5350E4037A92C900D84BB7FB650 * __this, RuntimeObject * ___sender0, UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 * ___e1, AsyncCallback_t74ABD1277F711E7FBDCB00E169A63DEFD39E86A2 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void System.UnhandledExceptionEventHandler::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnhandledExceptionEventHandler_EndInvoke_m0B7AB330573BC13C493071793143309E1C307389 (UnhandledExceptionEventHandler_tB7988286F96CF5350E4037A92C900D84BB7FB650 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void UnitySerializationHolder__ctor_mAB880030F40C641C423D92F8982190FC09B3DBE0 (UnitySerializationHolder_t1F3CD67778C9EC0C6F3A05CC6F44A4CC047B7307 * __this, SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___info0, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___ctx1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder__ctor_mAB880030F40C641C423D92F8982190FC09B3DBE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_0 = ___info0;
		NullCheck(L_0);
		String_t* L_1 = SerializationInfo_GetString_m70A93D16FAA658E8F1D563A656F2E2025BE8906A(L_0, _stringLiteralE5E429BCC9C2E4A41A3C7A4D96203BE6CB273B11, /*hidden argument*/NULL);
		__this->set__data_0(L_1);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_2 = ___info0;
		NullCheck(L_2);
		int32_t L_3 = SerializationInfo_GetInt32_m6AC6D412C57BCE31EE1D8E1224F6DECBF5A68B1A(L_2, _stringLiteralD3B81375F999BE146F923A83BD6CBA9441E1F676, /*hidden argument*/NULL);
		__this->set__unityType_1((((int32_t)((uint8_t)L_3))));
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_4 = ___info0;
		NullCheck(L_4);
		String_t* L_5 = SerializationInfo_GetString_m70A93D16FAA658E8F1D563A656F2E2025BE8906A(L_4, _stringLiteralF0541457E2B7EF76AA2DDC177C44B4FF6B95E9C5, /*hidden argument*/NULL);
		__this->set__assemblyName_2(L_5);
		return;
	}
}
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void UnitySerializationHolder_GetTypeData_mE58EEADEA8C2086B9DE4A8313711AB62F1C1CA58 (Type_t * ___instance0, SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___info1, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___ctx2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetTypeData_mE58EEADEA8C2086B9DE4A8313711AB62F1C1CA58_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_0 = ___info1;
		Type_t * L_1 = ___instance0;
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(42 /* System.String System.Type::get_FullName() */, L_1);
		NullCheck(L_0);
		SerializationInfo_AddValue_m5B3E183DD8F7D38D1A1EAE3C2826EF8FBE127580(L_0, _stringLiteralE5E429BCC9C2E4A41A3C7A4D96203BE6CB273B11, L_2, /*hidden argument*/NULL);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_3 = ___info1;
		NullCheck(L_3);
		SerializationInfo_AddValue_m17E95375C618FC19411D2E86E53497825B5A9D02(L_3, _stringLiteralD3B81375F999BE146F923A83BD6CBA9441E1F676, 4, /*hidden argument*/NULL);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_4 = ___info1;
		Type_t * L_5 = ___instance0;
		NullCheck(L_5);
		Assembly_t * L_6 = VirtFuncInvoker0< Assembly_t * >::Invoke(38 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_5);
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Reflection.Assembly::get_FullName() */, L_6);
		NullCheck(L_4);
		SerializationInfo_AddValue_m5B3E183DD8F7D38D1A1EAE3C2826EF8FBE127580(L_4, _stringLiteralF0541457E2B7EF76AA2DDC177C44B4FF6B95E9C5, L_7, /*hidden argument*/NULL);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_8 = ___info1;
		RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  L_9 = { reinterpret_cast<intptr_t> (UnitySerializationHolder_t1F3CD67778C9EC0C6F3A05CC6F44A4CC047B7307_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		SerializationInfo_SetType_m32D2E2BB46664D1A4B8B9051D4388ABAA3D6A58C(L_8, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void UnitySerializationHolder_GetDBNullData_m6A872BB3305DE2035081EE77FF61D4D0C9EE5CB4 (DBNull_tE7FF9F06B07B9177FEA5297B657A3A7688526B6A * ___instance0, SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___info1, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___ctx2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetDBNullData_m6A872BB3305DE2035081EE77FF61D4D0C9EE5CB4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_0 = ___info1;
		NullCheck(L_0);
		SerializationInfo_AddValue_m5B3E183DD8F7D38D1A1EAE3C2826EF8FBE127580(L_0, _stringLiteralE5E429BCC9C2E4A41A3C7A4D96203BE6CB273B11, NULL, /*hidden argument*/NULL);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_1 = ___info1;
		NullCheck(L_1);
		SerializationInfo_AddValue_m17E95375C618FC19411D2E86E53497825B5A9D02(L_1, _stringLiteralD3B81375F999BE146F923A83BD6CBA9441E1F676, 2, /*hidden argument*/NULL);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_2 = ___info1;
		DBNull_tE7FF9F06B07B9177FEA5297B657A3A7688526B6A * L_3 = ___instance0;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m993E65F4E4457CE1761C49B188A6CF858597BDDE(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Assembly_t * L_5 = VirtFuncInvoker0< Assembly_t * >::Invoke(38 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_4);
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Reflection.Assembly::get_FullName() */, L_5);
		NullCheck(L_2);
		SerializationInfo_AddValue_m5B3E183DD8F7D38D1A1EAE3C2826EF8FBE127580(L_2, _stringLiteralF0541457E2B7EF76AA2DDC177C44B4FF6B95E9C5, L_6, /*hidden argument*/NULL);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_7 = ___info1;
		RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  L_8 = { reinterpret_cast<intptr_t> (UnitySerializationHolder_t1F3CD67778C9EC0C6F3A05CC6F44A4CC047B7307_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		SerializationInfo_SetType_m32D2E2BB46664D1A4B8B9051D4388ABAA3D6A58C(L_7, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnitySerializationHolder::GetAssemblyData(System.Reflection.Assembly,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void UnitySerializationHolder_GetAssemblyData_m338AAACCF7E61D386AD8A8DAD2CDE2DDEB33FC04 (Assembly_t * ___instance0, SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___info1, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___ctx2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetAssemblyData_m338AAACCF7E61D386AD8A8DAD2CDE2DDEB33FC04_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_0 = ___info1;
		Assembly_t * L_1 = ___instance0;
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Reflection.Assembly::get_FullName() */, L_1);
		NullCheck(L_0);
		SerializationInfo_AddValue_m5B3E183DD8F7D38D1A1EAE3C2826EF8FBE127580(L_0, _stringLiteralE5E429BCC9C2E4A41A3C7A4D96203BE6CB273B11, L_2, /*hidden argument*/NULL);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_3 = ___info1;
		NullCheck(L_3);
		SerializationInfo_AddValue_m17E95375C618FC19411D2E86E53497825B5A9D02(L_3, _stringLiteralD3B81375F999BE146F923A83BD6CBA9441E1F676, 6, /*hidden argument*/NULL);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_4 = ___info1;
		Assembly_t * L_5 = ___instance0;
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Reflection.Assembly::get_FullName() */, L_5);
		NullCheck(L_4);
		SerializationInfo_AddValue_m5B3E183DD8F7D38D1A1EAE3C2826EF8FBE127580(L_4, _stringLiteralF0541457E2B7EF76AA2DDC177C44B4FF6B95E9C5, L_6, /*hidden argument*/NULL);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_7 = ___info1;
		RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  L_8 = { reinterpret_cast<intptr_t> (UnitySerializationHolder_t1F3CD67778C9EC0C6F3A05CC6F44A4CC047B7307_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		SerializationInfo_SetType_m32D2E2BB46664D1A4B8B9051D4388ABAA3D6A58C(L_7, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void UnitySerializationHolder_GetModuleData_mB5E09BEB03A8103DA240D489112B93DA92DB9AE2 (Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8 * ___instance0, SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___info1, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___ctx2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetModuleData_mB5E09BEB03A8103DA240D489112B93DA92DB9AE2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_0 = ___info1;
		Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8 * L_1 = ___instance0;
		NullCheck(L_1);
		String_t* L_2 = Module_get_ScopeName_m423C1390C2D28389CB72CD9115DDDC145406946A(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		SerializationInfo_AddValue_m5B3E183DD8F7D38D1A1EAE3C2826EF8FBE127580(L_0, _stringLiteralE5E429BCC9C2E4A41A3C7A4D96203BE6CB273B11, L_2, /*hidden argument*/NULL);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_3 = ___info1;
		NullCheck(L_3);
		SerializationInfo_AddValue_m17E95375C618FC19411D2E86E53497825B5A9D02(L_3, _stringLiteralD3B81375F999BE146F923A83BD6CBA9441E1F676, 5, /*hidden argument*/NULL);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_4 = ___info1;
		Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8 * L_5 = ___instance0;
		NullCheck(L_5);
		Assembly_t * L_6 = Module_get_Assembly_mE80B2C0600696E57AFA6FAFB516DB92A4E926E4D(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Reflection.Assembly::get_FullName() */, L_6);
		NullCheck(L_4);
		SerializationInfo_AddValue_m5B3E183DD8F7D38D1A1EAE3C2826EF8FBE127580(L_4, _stringLiteralF0541457E2B7EF76AA2DDC177C44B4FF6B95E9C5, L_7, /*hidden argument*/NULL);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_8 = ___info1;
		RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  L_9 = { reinterpret_cast<intptr_t> (UnitySerializationHolder_t1F3CD67778C9EC0C6F3A05CC6F44A4CC047B7307_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		SerializationInfo_SetType_m32D2E2BB46664D1A4B8B9051D4388ABAA3D6A58C(L_8, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void UnitySerializationHolder_GetObjectData_m0DCDAB7ABB802E5313B2338B881AE1D1CE6690B4 (UnitySerializationHolder_t1F3CD67778C9EC0C6F3A05CC6F44A4CC047B7307 * __this, SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___info0, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetObjectData_m0DCDAB7ABB802E5313B2338B881AE1D1CE6690B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6 * L_0 = (NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6 *)il2cpp_codegen_object_new(NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mCD2944038AAC6677F82C713B8CB8C67CCF48EF10(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, UnitySerializationHolder_GetObjectData_m0DCDAB7ABB802E5313B2338B881AE1D1CE6690B4_RuntimeMethod_var);
	}
}
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * UnitySerializationHolder_GetRealObject_mF8313A14C107679F256BA37709809BB82D225BC3 (UnitySerializationHolder_t1F3CD67778C9EC0C6F3A05CC6F44A4CC047B7307 * __this, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetRealObject_mF8313A14C107679F256BA37709809BB82D225BC3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Assembly_t * V_0 = NULL;
	Assembly_t * V_1 = NULL;
	uint8_t V_2 = 0;
	{
		uint8_t L_0 = __this->get__unityType_1();
		V_2 = L_0;
		uint8_t L_1 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)2)))
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_006c;
			}
			case 2:
			{
				goto IL_0028;
			}
			case 3:
			{
				goto IL_0047;
			}
			case 4:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_0028:
	{
		String_t* L_2 = __this->get__assemblyName_2();
		Assembly_t * L_3 = Assembly_Load_m430E0CB1BD58904D141BB0F73B1775862A0D2170(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Assembly_t * L_4 = V_0;
		String_t* L_5 = __this->get__data_0();
		NullCheck(L_4);
		Type_t * L_6 = VirtFuncInvoker1< Type_t *, String_t* >::Invoke(30 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_4, L_5);
		return L_6;
	}

IL_0041:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DBNull_tE7FF9F06B07B9177FEA5297B657A3A7688526B6A_il2cpp_TypeInfo_var);
		DBNull_tE7FF9F06B07B9177FEA5297B657A3A7688526B6A * L_7 = ((DBNull_tE7FF9F06B07B9177FEA5297B657A3A7688526B6A_StaticFields*)il2cpp_codegen_static_fields_for(DBNull_tE7FF9F06B07B9177FEA5297B657A3A7688526B6A_il2cpp_TypeInfo_var))->get_Value_0();
		return L_7;
	}

IL_0047:
	{
		String_t* L_8 = __this->get__assemblyName_2();
		Assembly_t * L_9 = Assembly_Load_m430E0CB1BD58904D141BB0F73B1775862A0D2170(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		Assembly_t * L_10 = V_1;
		String_t* L_11 = __this->get__data_0();
		NullCheck(L_10);
		Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8 * L_12 = Assembly_GetModule_m636C7961E007511E1BD09C455B06FBE78DF64BF0(L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_0060:
	{
		String_t* L_13 = __this->get__data_0();
		Assembly_t * L_14 = Assembly_Load_m430E0CB1BD58904D141BB0F73B1775862A0D2170(L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_006c:
	{
		String_t* L_15 = Locale_GetText_m8335AC363D872105D0CE318A9CB1001A15813542(_stringLiteralAAA827AD7A55F65B85FD76E652CBB0654EC9FAA9, /*hidden argument*/NULL);
		NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6 * L_16 = (NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6 *)il2cpp_codegen_object_new(NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m631F783E957027CA661C281874882040F7693602(L_16, L_15, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, NULL, UnitySerializationHolder_GetRealObject_mF8313A14C107679F256BA37709809BB82D225BC3_RuntimeMethod_var);
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
// Conversion methods for marshalling of: System.ValueType
extern "C" void ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshal_pinvoke(const ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C& unmarshaled, ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_pinvoke& marshaled)
{
}
extern "C" void ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshal_pinvoke_back(const ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_pinvoke& marshaled, ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: System.ValueType
extern "C" void ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshal_pinvoke_cleanup(ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.ValueType
extern "C" void ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshal_com(const ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C& unmarshaled, ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_com& marshaled)
{
}
extern "C" void ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshal_com_back(const ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_com& marshaled, ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: System.ValueType
extern "C" void ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshal_com_cleanup(ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_com& marshaled)
{
}
// System.Void System.ValueType::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ValueType__ctor_m39F50153DCEB689667848F175A9BB6B65F143231 (RuntimeObject * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.ValueType::InternalEquals(System.Object,System.Object,System.Object[]U26)
extern "C" IL2CPP_METHOD_ATTR bool ValueType_InternalEquals_m9AE48614FA28894778698A3E84F0BDDDC325AB02 (RuntimeObject * ___o10, RuntimeObject * ___o21, ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D** ___fields2, const RuntimeMethod* method)
{
	typedef bool (*ValueType_InternalEquals_m9AE48614FA28894778698A3E84F0BDDDC325AB02_ftn) (RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D**);
	using namespace il2cpp::icalls;
	return  ((ValueType_InternalEquals_m9AE48614FA28894778698A3E84F0BDDDC325AB02_ftn)mscorlib::System::ValueType::InternalEquals) (___o10, ___o21, ___fields2);
}
// System.Boolean System.ValueType::DefaultEquals(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ValueType_DefaultEquals_m5ECF7678A8DF137FF030DB9DAAA282DD684571DD (RuntimeObject * ___o10, RuntimeObject * ___o21, const RuntimeMethod* method)
{
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	{
		RuntimeObject * L_0 = ___o21;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (bool)0;
	}

IL_0008:
	{
		RuntimeObject * L_1 = ___o10;
		RuntimeObject * L_2 = ___o21;
		bool L_3 = ValueType_InternalEquals_m9AE48614FA28894778698A3E84F0BDDDC325AB02(L_1, L_2, (ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D**)(&V_0), /*hidden argument*/NULL);
		V_1 = L_3;
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_4 = V_0;
		if (L_4)
		{
			goto IL_001a;
		}
	}
	{
		bool L_5 = V_1;
		return L_5;
	}

IL_001a:
	{
		V_2 = 0;
		goto IL_0053;
	}

IL_0021:
	{
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_6 = V_0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_10 = V_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		RuntimeObject * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_4 = L_13;
		RuntimeObject * L_14 = V_3;
		if (L_14)
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject * L_15 = V_4;
		if (L_15)
		{
			goto IL_003e;
		}
	}
	{
		goto IL_004f;
	}

IL_003e:
	{
		return (bool)0;
	}

IL_0040:
	{
		RuntimeObject * L_16 = V_3;
		RuntimeObject * L_17 = V_4;
		NullCheck(L_16);
		bool L_18 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_16, L_17);
		if (L_18)
		{
			goto IL_004f;
		}
	}
	{
		return (bool)0;
	}

IL_004f:
	{
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)2));
	}

IL_0053:
	{
		int32_t L_20 = V_2;
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_21 = V_0;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_21)->max_length)))))))
		{
			goto IL_0021;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean System.ValueType::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ValueType_Equals_mC74993A343BE399434D64AFBDEDD4D106552A4DD (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		bool L_1 = ValueType_DefaultEquals_m5ECF7678A8DF137FF030DB9DAAA282DD684571DD(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.ValueType::InternalGetHashCode(System.Object,System.Object[]U26)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueType_InternalGetHashCode_mA5925DF5288F5152C970140E62E0FE71DD99671E (RuntimeObject * ___o0, ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D** ___fields1, const RuntimeMethod* method)
{
	typedef int32_t (*ValueType_InternalGetHashCode_mA5925DF5288F5152C970140E62E0FE71DD99671E_ftn) (RuntimeObject *, ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D**);
	using namespace il2cpp::icalls;
	return  ((ValueType_InternalGetHashCode_mA5925DF5288F5152C970140E62E0FE71DD99671E_ftn)mscorlib::System::ValueType::InternalGetHashCode) (___o0, ___fields1);
}
// System.Int32 System.ValueType::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t ValueType_GetHashCode_mA042016A2E69D10748C8D69CC1BB513405CE5194 (RuntimeObject * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ValueType_InternalGetHashCode_mA5925DF5288F5152C970140E62E0FE71DD99671E(__this, (ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D**)(&V_0), /*hidden argument*/NULL);
		V_1 = L_0;
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		V_2 = 0;
		goto IL_002d;
	}

IL_0016:
	{
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_2 = V_0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_1;
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_7 = V_0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		int32_t L_11 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_10);
		V_1 = ((int32_t)((int32_t)L_6^(int32_t)L_11));
	}

IL_0029:
	{
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002d:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))
		{
			goto IL_0016;
		}
	}

IL_0036:
	{
		int32_t L_15 = V_1;
		return L_15;
	}
}
// System.String System.ValueType::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* ValueType_ToString_m9E0CE6CAA3E602708A61386A0414B39B10AEE7AE (RuntimeObject * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = Object_GetType_m993E65F4E4457CE1761C49B188A6CF858597BDDE(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(42 /* System.String System.Type::get_FullName() */, L_0);
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
// System.Void System.Version::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Version__ctor_m5B61667691CB66D4D8A582B4ED5FD08A4C76E4AD (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		Version_CheckedSet_m8F93592250413F64CD48EE56635B87BD10E01775(__this, 2, 0, 0, (-1), (-1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Version::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Version__ctor_mAE9D244FEE1023A26514EE0339E7D6F26824F0F7 (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, String_t* ___version0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version__ctor_mAE9D244FEE1023A26514EE0339E7D6F26824F0F7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		V_2 = (-1);
		V_3 = (-1);
		V_4 = (-1);
		V_5 = (-1);
		String_t* L_0 = ___version0;
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * L_1 = (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 *)il2cpp_codegen_object_new(ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740(L_1, _stringLiteralC692273DEB2772DA307FFE37041FEF77BF4BAA97, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Version__ctor_mAE9D244FEE1023A26514EE0339E7D6F26824F0F7_RuntimeMethod_var);
	}

IL_0021:
	{
		String_t* L_2 = ___version0;
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_3 = (CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744*)SZArrayNew(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck(L_2);
		StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* L_5 = String_Split_m3A8A48A00011BA5F135EBC797AD2B12E710A48CA(L_2, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* L_6 = V_1;
		NullCheck(L_6);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length))));
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)2)))
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) <= ((int32_t)4)))
		{
			goto IL_0055;
		}
	}

IL_0045:
	{
		String_t* L_9 = Locale_GetText_m8335AC363D872105D0CE318A9CB1001A15813542(_stringLiteral236206AA94046090214FF4A105F3B4133E858761, /*hidden argument*/NULL);
		ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * L_10 = (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 *)il2cpp_codegen_object_new(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m8917650A5D8F2F36C6B623A720DF2D2A630D3533(L_10, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, Version__ctor_mAE9D244FEE1023A26514EE0339E7D6F26824F0F7_RuntimeMethod_var);
	}

IL_0055:
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0065;
		}
	}
	{
		StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = 0;
		String_t* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15 = Int32_Parse_mF93B2C50DDBC196570E2EA8495DBA36F2CD75290(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
	}

IL_0065:
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) <= ((int32_t)1)))
		{
			goto IL_0075;
		}
	}
	{
		StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* L_17 = V_1;
		NullCheck(L_17);
		int32_t L_18 = 1;
		String_t* L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		int32_t L_20 = Int32_Parse_mF93B2C50DDBC196570E2EA8495DBA36F2CD75290(L_19, /*hidden argument*/NULL);
		V_3 = L_20;
	}

IL_0075:
	{
		int32_t L_21 = V_0;
		if ((((int32_t)L_21) <= ((int32_t)2)))
		{
			goto IL_0086;
		}
	}
	{
		StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23 = 2;
		String_t* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		int32_t L_25 = Int32_Parse_mF93B2C50DDBC196570E2EA8495DBA36F2CD75290(L_24, /*hidden argument*/NULL);
		V_4 = L_25;
	}

IL_0086:
	{
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) <= ((int32_t)3)))
		{
			goto IL_0097;
		}
	}
	{
		StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* L_27 = V_1;
		NullCheck(L_27);
		int32_t L_28 = 3;
		String_t* L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30 = Int32_Parse_mF93B2C50DDBC196570E2EA8495DBA36F2CD75290(L_29, /*hidden argument*/NULL);
		V_5 = L_30;
	}

IL_0097:
	{
		int32_t L_31 = V_0;
		int32_t L_32 = V_2;
		int32_t L_33 = V_3;
		int32_t L_34 = V_4;
		int32_t L_35 = V_5;
		Version_CheckedSet_m8F93592250413F64CD48EE56635B87BD10E01775(__this, L_31, L_32, L_33, L_34, L_35, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Version::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Version__ctor_m6F990EB264310E8E1AFDBCEC5668CDF132432F68 (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, int32_t ___major0, int32_t ___minor1, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___major0;
		int32_t L_1 = ___minor1;
		Version_CheckedSet_m8F93592250413F64CD48EE56635B87BD10E01775(__this, 2, L_0, L_1, 0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Version__ctor_m1F3F5FD07445CBBC0BDF9BF9F72A8C3DD6D5FB14 (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, int32_t ___major0, int32_t ___minor1, int32_t ___build2, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___major0;
		int32_t L_1 = ___minor1;
		int32_t L_2 = ___build2;
		Version_CheckedSet_m8F93592250413F64CD48EE56635B87BD10E01775(__this, 3, L_0, L_1, L_2, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Version__ctor_m28C37359BE6B006A3EB463BED789A76D1790E45B (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, int32_t ___major0, int32_t ___minor1, int32_t ___build2, int32_t ___revision3, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___major0;
		int32_t L_1 = ___minor1;
		int32_t L_2 = ___build2;
		int32_t L_3 = ___revision3;
		Version_CheckedSet_m8F93592250413F64CD48EE56635B87BD10E01775(__this, 4, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Version::CheckedSet(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Version_CheckedSet_m8F93592250413F64CD48EE56635B87BD10E01775 (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, int32_t ___defined0, int32_t ___major1, int32_t ___minor2, int32_t ___build3, int32_t ___revision4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_CheckedSet_m8F93592250413F64CD48EE56635B87BD10E01775_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___major1;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4 * L_1 = (ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE814EB7B9A7E67CA0BD6A97F77497C9669A4FEEA(L_1, _stringLiteral18C9D4621EF6C3113CE1F960346D7603E88406E8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Version_CheckedSet_m8F93592250413F64CD48EE56635B87BD10E01775_RuntimeMethod_var);
	}

IL_0012:
	{
		int32_t L_2 = ___major1;
		__this->set__Major_1(L_2);
		int32_t L_3 = ___minor2;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4 * L_4 = (ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE814EB7B9A7E67CA0BD6A97F77497C9669A4FEEA(L_4, _stringLiteralFEE63D97CA760412103B668617F8B29605625B7D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, Version_CheckedSet_m8F93592250413F64CD48EE56635B87BD10E01775_RuntimeMethod_var);
	}

IL_002b:
	{
		int32_t L_5 = ___minor2;
		__this->set__Minor_2(L_5);
		int32_t L_6 = ___defined0;
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_0048;
		}
	}
	{
		__this->set__Build_3((-1));
		__this->set__Revision_4((-1));
		return;
	}

IL_0048:
	{
		int32_t L_7 = ___build3;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_005b;
		}
	}
	{
		ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4 * L_8 = (ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE814EB7B9A7E67CA0BD6A97F77497C9669A4FEEA(L_8, _stringLiteral80754AF91BFB6D1073585B046FE0A474CE868509, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, Version_CheckedSet_m8F93592250413F64CD48EE56635B87BD10E01775_RuntimeMethod_var);
	}

IL_005b:
	{
		int32_t L_9 = ___build3;
		__this->set__Build_3(L_9);
		int32_t L_10 = ___defined0;
		if ((!(((uint32_t)L_10) == ((uint32_t)3))))
		{
			goto IL_0072;
		}
	}
	{
		__this->set__Revision_4((-1));
		return;
	}

IL_0072:
	{
		int32_t L_11 = ___revision4;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0085;
		}
	}
	{
		ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4 * L_12 = (ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE814EB7B9A7E67CA0BD6A97F77497C9669A4FEEA(L_12, _stringLiteralEAE79D6E0CFF76FC7A3BB78723690B0B2367F849, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NULL, Version_CheckedSet_m8F93592250413F64CD48EE56635B87BD10E01775_RuntimeMethod_var);
	}

IL_0085:
	{
		int32_t L_13 = ___revision4;
		__this->set__Revision_4(L_13);
		return;
	}
}
// System.Int32 System.Version::get_Build()
extern "C" IL2CPP_METHOD_ATTR int32_t Version_get_Build_mF061A6FFB35801906963DE7901A530FBAFC36491 (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Build_3();
		return L_0;
	}
}
// System.Int32 System.Version::get_Major()
extern "C" IL2CPP_METHOD_ATTR int32_t Version_get_Major_m4A9DDD158AFDEB162A3A9FA783F4BF35CA61522F (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Major_1();
		return L_0;
	}
}
// System.Int32 System.Version::get_Minor()
extern "C" IL2CPP_METHOD_ATTR int32_t Version_get_Minor_mDC7B24612208AEE7FDA96539738703C0B23F9571 (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Minor_2();
		return L_0;
	}
}
// System.Int32 System.Version::get_Revision()
extern "C" IL2CPP_METHOD_ATTR int32_t Version_get_Revision_mF69C3C5BD255C31BA26F7225F6341E20456F0D33 (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Revision_4();
		return L_0;
	}
}
// System.Object System.Version::Clone()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Version_Clone_m0319BD2CFF4E0725CA77F9F3DFE442360ACE988D (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_Clone_m0319BD2CFF4E0725CA77F9F3DFE442360ACE988D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get__Build_3();
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = __this->get__Major_1();
		int32_t L_2 = __this->get__Minor_2();
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_3 = (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 *)il2cpp_codegen_object_new(Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15_il2cpp_TypeInfo_var);
		Version__ctor_m6F990EB264310E8E1AFDBCEC5668CDF132432F68(L_3, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_001e:
	{
		int32_t L_4 = __this->get__Revision_4();
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_5 = __this->get__Major_1();
		int32_t L_6 = __this->get__Minor_2();
		int32_t L_7 = __this->get__Build_3();
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_8 = (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 *)il2cpp_codegen_object_new(Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15_il2cpp_TypeInfo_var);
		Version__ctor_m1F3F5FD07445CBBC0BDF9BF9F72A8C3DD6D5FB14(L_8, L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0042:
	{
		int32_t L_9 = __this->get__Major_1();
		int32_t L_10 = __this->get__Minor_2();
		int32_t L_11 = __this->get__Build_3();
		int32_t L_12 = __this->get__Revision_4();
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_13 = (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 *)il2cpp_codegen_object_new(Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15_il2cpp_TypeInfo_var);
		Version__ctor_m28C37359BE6B006A3EB463BED789A76D1790E45B(L_13, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Int32 System.Version::CompareTo(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t Version_CompareTo_m4F37357349BB41DAC8C61271CBBF52F6B7A3D55A (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, RuntimeObject * ___version0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_CompareTo_m4F37357349BB41DAC8C61271CBBF52F6B7A3D55A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___version0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 1;
	}

IL_0008:
	{
		RuntimeObject * L_1 = ___version0;
		if (((Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 *)IsInstSealed((RuntimeObject*)L_1, Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_2 = Locale_GetText_m8335AC363D872105D0CE318A9CB1001A15813542(_stringLiteralC744A537945159E700B780360B5746414DE20CF9, /*hidden argument*/NULL);
		ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * L_3 = (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 *)il2cpp_codegen_object_new(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m8917650A5D8F2F36C6B623A720DF2D2A630D3533(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Version_CompareTo_m4F37357349BB41DAC8C61271CBBF52F6B7A3D55A_RuntimeMethod_var);
	}

IL_0023:
	{
		RuntimeObject * L_4 = ___version0;
		int32_t L_5 = Version_CompareTo_mF1ED7826B027AC4BEC76981ED28772F56C9CD6BE(__this, ((Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 *)CastclassSealed((RuntimeObject*)L_4, Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean System.Version::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Version_Equals_m18CE65889EF5C9C32F4D787A8D89B0E90E401C4B (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_Equals_m18CE65889EF5C9C32F4D787A8D89B0E90E401C4B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		bool L_1 = Version_Equals_m15047C69E4AA3AB29506EE211B87D491B2B0BFA5(__this, ((Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 *)IsInstSealed((RuntimeObject*)L_0, Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Version::CompareTo(System.Version)
extern "C" IL2CPP_METHOD_ATTR int32_t Version_CompareTo_mF1ED7826B027AC4BEC76981ED28772F56C9CD6BE (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * ___value0, const RuntimeMethod* method)
{
	{
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_0 = ___value0;
		bool L_1 = Version_op_Equality_m5F34580D30263159C103136543F7723DB99C5215(L_0, (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return 1;
	}

IL_000e:
	{
		int32_t L_2 = __this->get__Major_1();
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_3 = ___value0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get__Major_1();
		if ((((int32_t)L_2) <= ((int32_t)L_4)))
		{
			goto IL_0021;
		}
	}
	{
		return 1;
	}

IL_0021:
	{
		int32_t L_5 = __this->get__Major_1();
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_6 = ___value0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get__Major_1();
		if ((((int32_t)L_5) >= ((int32_t)L_7)))
		{
			goto IL_0034;
		}
	}
	{
		return (-1);
	}

IL_0034:
	{
		int32_t L_8 = __this->get__Minor_2();
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_9 = ___value0;
		NullCheck(L_9);
		int32_t L_10 = L_9->get__Minor_2();
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_0047;
		}
	}
	{
		return 1;
	}

IL_0047:
	{
		int32_t L_11 = __this->get__Minor_2();
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_12 = ___value0;
		NullCheck(L_12);
		int32_t L_13 = L_12->get__Minor_2();
		if ((((int32_t)L_11) >= ((int32_t)L_13)))
		{
			goto IL_005a;
		}
	}
	{
		return (-1);
	}

IL_005a:
	{
		int32_t L_14 = __this->get__Build_3();
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_15 = ___value0;
		NullCheck(L_15);
		int32_t L_16 = L_15->get__Build_3();
		if ((((int32_t)L_14) <= ((int32_t)L_16)))
		{
			goto IL_006d;
		}
	}
	{
		return 1;
	}

IL_006d:
	{
		int32_t L_17 = __this->get__Build_3();
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_18 = ___value0;
		NullCheck(L_18);
		int32_t L_19 = L_18->get__Build_3();
		if ((((int32_t)L_17) >= ((int32_t)L_19)))
		{
			goto IL_0080;
		}
	}
	{
		return (-1);
	}

IL_0080:
	{
		int32_t L_20 = __this->get__Revision_4();
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_21 = ___value0;
		NullCheck(L_21);
		int32_t L_22 = L_21->get__Revision_4();
		if ((((int32_t)L_20) <= ((int32_t)L_22)))
		{
			goto IL_0093;
		}
	}
	{
		return 1;
	}

IL_0093:
	{
		int32_t L_23 = __this->get__Revision_4();
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_24 = ___value0;
		NullCheck(L_24);
		int32_t L_25 = L_24->get__Revision_4();
		if ((((int32_t)L_23) >= ((int32_t)L_25)))
		{
			goto IL_00a6;
		}
	}
	{
		return (-1);
	}

IL_00a6:
	{
		return 0;
	}
}
// System.Boolean System.Version::Equals(System.Version)
extern "C" IL2CPP_METHOD_ATTR bool Version_Equals_m15047C69E4AA3AB29506EE211B87D491B2B0BFA5 (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * ___obj0, const RuntimeMethod* method)
{
	int32_t G_B6_0 = 0;
	{
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_0 = ___obj0;
		bool L_1 = Version_op_Inequality_m8791D9395E40AC1315BF1374388EB9B76864744E(L_0, (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_2 = ___obj0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get__Major_1();
		int32_t L_4 = __this->get__Major_1();
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_004f;
		}
	}
	{
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_5 = ___obj0;
		NullCheck(L_5);
		int32_t L_6 = L_5->get__Minor_2();
		int32_t L_7 = __this->get__Minor_2();
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_004f;
		}
	}
	{
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_8 = ___obj0;
		NullCheck(L_8);
		int32_t L_9 = L_8->get__Build_3();
		int32_t L_10 = __this->get__Build_3();
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_004f;
		}
	}
	{
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_11 = ___obj0;
		NullCheck(L_11);
		int32_t L_12 = L_11->get__Revision_4();
		int32_t L_13 = __this->get__Revision_4();
		G_B6_0 = ((((int32_t)L_12) == ((int32_t)L_13))? 1 : 0);
		goto IL_0050;
	}

IL_004f:
	{
		G_B6_0 = 0;
	}

IL_0050:
	{
		return (bool)G_B6_0;
	}
}
// System.Int32 System.Version::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Version_GetHashCode_mFC8BA40180FEDE8538D4EBF7B441B87B221735C5 (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Revision_4();
		int32_t L_1 = __this->get__Build_3();
		int32_t L_2 = __this->get__Minor_2();
		int32_t L_3 = __this->get__Major_1();
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_1<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_2<<(int32_t)8))))|(int32_t)L_3));
	}
}
// System.String System.Version::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Version_ToString_mE2E6C0AA16DD48999BCF49B5BF35969B8240227A (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_ToString_mE2E6C0AA16DD48999BCF49B5BF35969B8240227A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t* L_0 = __this->get_address_of__Major_1();
		String_t* L_1 = Int32_ToString_mE7DFEEF8FFE4DA97DA211C49948D8E752E6B61C8((int32_t*)L_0, /*hidden argument*/NULL);
		int32_t* L_2 = __this->get_address_of__Minor_2();
		String_t* L_3 = Int32_ToString_mE7DFEEF8FFE4DA97DA211C49948D8E752E6B61C8((int32_t*)L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_mDF3A55D4269A0D2D7969D90C6D38B472E24DD445(L_1, _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = __this->get__Build_3();
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_6 = V_0;
		int32_t* L_7 = __this->get_address_of__Build_3();
		String_t* L_8 = Int32_ToString_mE7DFEEF8FFE4DA97DA211C49948D8E752E6B61C8((int32_t*)L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_mDF3A55D4269A0D2D7969D90C6D38B472E24DD445(L_6, _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
	}

IL_0044:
	{
		int32_t L_10 = __this->get__Revision_4();
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_0067;
		}
	}
	{
		String_t* L_11 = V_0;
		int32_t* L_12 = __this->get_address_of__Revision_4();
		String_t* L_13 = Int32_ToString_mE7DFEEF8FFE4DA97DA211C49948D8E752E6B61C8((int32_t*)L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_mDF3A55D4269A0D2D7969D90C6D38B472E24DD445(L_11, _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
	}

IL_0067:
	{
		String_t* L_15 = V_0;
		return L_15;
	}
}
// System.Version System.Version::CreateFromString(System.String)
extern "C" IL2CPP_METHOD_ATTR Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * Version_CreateFromString_mB297062B77739173A87608B0E639C49D6ACBE196 (String_t* ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_CreateFromString_mB297062B77739173A87608B0E639C49D6ACBE196_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Il2CppChar V_7 = 0x0;
	int32_t V_8 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_4 = 1;
		V_5 = (-1);
		String_t* L_0 = ___info0;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_1 = (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 *)il2cpp_codegen_object_new(Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15_il2cpp_TypeInfo_var);
		Version__ctor_m28C37359BE6B006A3EB463BED789A76D1790E45B(L_1, 0, 0, 0, 0, /*hidden argument*/NULL);
		return L_1;
	}

IL_001e:
	{
		V_6 = 0;
		goto IL_00c8;
	}

IL_0026:
	{
		String_t* L_2 = ___info0;
		int32_t L_3 = V_6;
		NullCheck(L_2);
		Il2CppChar L_4 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_2, L_3, /*hidden argument*/NULL);
		V_7 = L_4;
		Il2CppChar L_5 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_il2cpp_TypeInfo_var);
		bool L_6 = Char_IsDigit_m64DFE12D7DCF1AC634EA805421E06B4B18E1C036(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_7 = V_5;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		Il2CppChar L_8 = V_7;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)48)));
		goto IL_005d;
	}

IL_0050:
	{
		int32_t L_9 = V_5;
		Il2CppChar L_10 = V_7;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)((int32_t)10))), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)((int32_t)48)))));
	}

IL_005d:
	{
		goto IL_00b5;
	}

IL_0062:
	{
		int32_t L_11 = V_5;
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		int32_t L_12 = V_4;
		V_8 = L_12;
		int32_t L_13 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)))
		{
			case 0:
			{
				goto IL_008c;
			}
			case 1:
			{
				goto IL_0094;
			}
			case 2:
			{
				goto IL_009c;
			}
			case 3:
			{
				goto IL_00a4;
			}
		}
	}
	{
		goto IL_00ac;
	}

IL_008c:
	{
		int32_t L_14 = V_5;
		V_0 = L_14;
		goto IL_00ac;
	}

IL_0094:
	{
		int32_t L_15 = V_5;
		V_1 = L_15;
		goto IL_00ac;
	}

IL_009c:
	{
		int32_t L_16 = V_5;
		V_2 = L_16;
		goto IL_00ac;
	}

IL_00a4:
	{
		int32_t L_17 = V_5;
		V_3 = L_17;
		goto IL_00ac;
	}

IL_00ac:
	{
		V_5 = (-1);
		int32_t L_18 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_00b5:
	{
		int32_t L_19 = V_4;
		if ((!(((uint32_t)L_19) == ((uint32_t)5))))
		{
			goto IL_00c2;
		}
	}
	{
		goto IL_00d5;
	}

IL_00c2:
	{
		int32_t L_20 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_00c8:
	{
		int32_t L_21 = V_6;
		String_t* L_22 = ___info0;
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_22, /*hidden argument*/NULL);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_0026;
		}
	}

IL_00d5:
	{
		int32_t L_24 = V_5;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_011f;
		}
	}
	{
		int32_t L_25 = V_4;
		V_8 = L_25;
		int32_t L_26 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)1)))
		{
			case 0:
			{
				goto IL_00ff;
			}
			case 1:
			{
				goto IL_0107;
			}
			case 2:
			{
				goto IL_010f;
			}
			case 3:
			{
				goto IL_0117;
			}
		}
	}
	{
		goto IL_011f;
	}

IL_00ff:
	{
		int32_t L_27 = V_5;
		V_0 = L_27;
		goto IL_011f;
	}

IL_0107:
	{
		int32_t L_28 = V_5;
		V_1 = L_28;
		goto IL_011f;
	}

IL_010f:
	{
		int32_t L_29 = V_5;
		V_2 = L_29;
		goto IL_011f;
	}

IL_0117:
	{
		int32_t L_30 = V_5;
		V_3 = L_30;
		goto IL_011f;
	}

IL_011f:
	{
		int32_t L_31 = V_0;
		int32_t L_32 = V_1;
		int32_t L_33 = V_2;
		int32_t L_34 = V_3;
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_35 = (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 *)il2cpp_codegen_object_new(Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15_il2cpp_TypeInfo_var);
		Version__ctor_m28C37359BE6B006A3EB463BED789A76D1790E45B(L_35, L_31, L_32, L_33, L_34, /*hidden argument*/NULL);
		return L_35;
	}
}
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
extern "C" IL2CPP_METHOD_ATTR bool Version_op_Equality_m5F34580D30263159C103136543F7723DB99C5215 (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * ___v10, Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * ___v21, const RuntimeMethod* method)
{
	{
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_0 = ___v10;
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_1 = ___v21;
		bool L_2 = Object_Equals_m8F1D37CE67D713E8EF3E9433D942A7E0242F4838(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Version::op_Inequality(System.Version,System.Version)
extern "C" IL2CPP_METHOD_ATTR bool Version_op_Inequality_m8791D9395E40AC1315BF1374388EB9B76864744E (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * ___v10, Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * ___v21, const RuntimeMethod* method)
{
	{
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_0 = ___v10;
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_1 = ___v21;
		bool L_2 = Object_Equals_m8F1D37CE67D713E8EF3E9433D942A7E0242F4838(L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Version::op_LessThan(System.Version,System.Version)
extern "C" IL2CPP_METHOD_ATTR bool Version_op_LessThan_mA3FC4BF0ED270AD14C2A3AE213BB992A5278D16A (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * ___v10, Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * ___v21, const RuntimeMethod* method)
{
	{
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_0 = ___v10;
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_1 = ___v21;
		NullCheck(L_0);
		int32_t L_2 = Version_CompareTo_mF1ED7826B027AC4BEC76981ED28772F56C9CD6BE(L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) < ((int32_t)0))? 1 : 0);
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
// System.Void System.WeakReference::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WeakReference__ctor_mF5281FF677CE7296D9BC067F76B5845B795ED493 (WeakReference_t748C76A5CAD65471521659008DBC57191528AA9C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WeakReference::.ctor(System.Object)
extern "C" IL2CPP_METHOD_ATTR void WeakReference__ctor_m08834282FB2323A002C2C2179CF6D89A12AB531E (WeakReference_t748C76A5CAD65471521659008DBC57191528AA9C * __this, RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___target0;
		WeakReference__ctor_mC5B594C73AF6091B67523598417E90FCD8226CBA(__this, L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WeakReference::.ctor(System.Object,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void WeakReference__ctor_mC5B594C73AF6091B67523598417E90FCD8226CBA (WeakReference_t748C76A5CAD65471521659008DBC57191528AA9C * __this, RuntimeObject * ___target0, bool ___trackResurrection1, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		bool L_0 = ___trackResurrection1;
		__this->set_isLongReference_0(L_0);
		RuntimeObject * L_1 = ___target0;
		WeakReference_AllocateHandle_m11FEC60BC1D2F935BFE8CD5764477D802E922A40(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WeakReference::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void WeakReference__ctor_mDC58C556A72BFE11C54C39871D33C568B41D7297 (WeakReference_t748C76A5CAD65471521659008DBC57191528AA9C * __this, SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___info0, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeakReference__ctor_mDC58C556A72BFE11C54C39871D33C568B41D7297_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * L_1 = (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 *)il2cpp_codegen_object_new(ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740(L_1, _stringLiteral59BD0A3FF43B32849B319E645D4798D8A5D1E889, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WeakReference__ctor_mDC58C556A72BFE11C54C39871D33C568B41D7297_RuntimeMethod_var);
	}

IL_0017:
	{
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_2 = ___info0;
		NullCheck(L_2);
		bool L_3 = SerializationInfo_GetBoolean_mDF853D9D896D7FBFA8C89BCFDCF9230412A9563F(L_2, _stringLiteralA9914DA9D64B4FCE39273016F570714425122C67, /*hidden argument*/NULL);
		__this->set_isLongReference_0(L_3);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_4 = ___info0;
		RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  L_5 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject * L_7 = SerializationInfo_GetValue_m76CB68313C2DC35BB0F508B38E7F65E0A270D717(L_4, _stringLiteral7E95DB629C3A5AA1BCFEB547A0BD39A78FE49276, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		RuntimeObject * L_8 = V_0;
		WeakReference_AllocateHandle_m11FEC60BC1D2F935BFE8CD5764477D802E922A40(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WeakReference::AllocateHandle(System.Object)
extern "C" IL2CPP_METHOD_ATTR void WeakReference_AllocateHandle_m11FEC60BC1D2F935BFE8CD5764477D802E922A40 (WeakReference_t748C76A5CAD65471521659008DBC57191528AA9C * __this, RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isLongReference_0();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject * L_1 = ___target0;
		GCHandle_tE002D24915851AD73ACC0F503601C384273C3060  L_2 = GCHandle_Alloc_m068D1EE7DC287ED4258E2FB26BC67299CEA8A10C(L_1, 1, /*hidden argument*/NULL);
		__this->set_gcHandle_1(L_2);
		goto IL_002a;
	}

IL_001d:
	{
		RuntimeObject * L_3 = ___target0;
		GCHandle_tE002D24915851AD73ACC0F503601C384273C3060  L_4 = GCHandle_Alloc_m068D1EE7DC287ED4258E2FB26BC67299CEA8A10C(L_3, 0, /*hidden argument*/NULL);
		__this->set_gcHandle_1(L_4);
	}

IL_002a:
	{
		return;
	}
}
// System.Object System.WeakReference::get_Target()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * WeakReference_get_Target_m2AFC3F118C06565263021EE23361246DF034B476 (WeakReference_t748C76A5CAD65471521659008DBC57191528AA9C * __this, const RuntimeMethod* method)
{
	{
		GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 * L_0 = __this->get_address_of_gcHandle_1();
		RuntimeObject * L_1 = GCHandle_get_Target_mC3CAF98C66E4DD8164D291463ADF5BC5359543E0((GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.WeakReference::get_TrackResurrection()
extern "C" IL2CPP_METHOD_ATTR bool WeakReference_get_TrackResurrection_m8F218C5610103B4DA1AB9A172B3827145951765B (WeakReference_t748C76A5CAD65471521659008DBC57191528AA9C * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isLongReference_0();
		return L_0;
	}
}
// System.Void System.WeakReference::Finalize()
extern "C" IL2CPP_METHOD_ATTR void WeakReference_Finalize_mAD793FFA7BE8BFBBE8066124CE9924A3EDA8AF76 (WeakReference_t748C76A5CAD65471521659008DBC57191528AA9C * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 * L_0 = __this->get_address_of_gcHandle_1();
		GCHandle_Free_mE2DC9BE787C9CFD3AAAB1803738BD2ADCF0219B2((GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 *)L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x17, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		Object_Finalize_mF771ED4CD6EB17CF862AA2B705F0E2CC0B4ADBED(__this, /*hidden argument*/NULL);
		IL2CPP_RESET_LEAVE(0x17);
		IL2CPP_END_FINALLY(16)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_JUMP_TBL(0x17, IL_0017)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0017:
	{
		return;
	}
}
// System.Void System.WeakReference::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void WeakReference_GetObjectData_m6F403EAD74C64EAF575E933D67FB2CB026332D3C (WeakReference_t748C76A5CAD65471521659008DBC57191528AA9C * __this, SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___info0, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeakReference_GetObjectData_m6F403EAD74C64EAF575E933D67FB2CB026332D3C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * L_1 = (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 *)il2cpp_codegen_object_new(ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740(L_1, _stringLiteral59BD0A3FF43B32849B319E645D4798D8A5D1E889, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WeakReference_GetObjectData_m6F403EAD74C64EAF575E933D67FB2CB026332D3C_RuntimeMethod_var);
	}

IL_0011:
	{
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_2 = ___info0;
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.WeakReference::get_TrackResurrection() */, __this);
		NullCheck(L_2);
		SerializationInfo_AddValue_m5AABBD341C86E74174984842FA7F3FEEB35FA953(L_2, _stringLiteralA9914DA9D64B4FCE39273016F570714425122C67, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_4 = ___info0;
		RuntimeObject * L_5 = VirtFuncInvoker0< RuntimeObject * >::Invoke(5 /* System.Object System.WeakReference::get_Target() */, __this);
		NullCheck(L_4);
		SerializationInfo_AddValue_m5B3E183DD8F7D38D1A1EAE3C2826EF8FBE127580(L_4, _stringLiteral7E95DB629C3A5AA1BCFEB547A0BD39A78FE49276, L_5, /*hidden argument*/NULL);
		goto IL_004a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0038;
		throw e;
	}

CATCH_0038:
	{ // begin catch(System.Exception)
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_6 = ___info0;
		NullCheck(L_6);
		SerializationInfo_AddValue_m5B3E183DD8F7D38D1A1EAE3C2826EF8FBE127580(L_6, _stringLiteral7E95DB629C3A5AA1BCFEB547A0BD39A78FE49276, NULL, /*hidden argument*/NULL);
		goto IL_004a;
	} // end catch (depth: 1)

IL_004a:
	{
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
// System.Void System.__Il2CppComDelegate::Finalize()
extern "C" IL2CPP_METHOD_ATTR void __Il2CppComDelegate_Finalize_mD9F2891A4915AE5C5C30C16D2002FE751F8D156B (__Il2CppComDelegate_t67B66A584C55DA33A97319518FAD9D61A503C4EE * __this, const RuntimeMethod* method)
{
	__Il2CppComObject_Finalize_m682584A7F72588A85A4905DDE72083A32342558A(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.__Il2CppComObject::Finalize()
extern "C" IL2CPP_METHOD_ATTR void __Il2CppComObject_Finalize_m682584A7F72588A85A4905DDE72083A32342558A (Il2CppComObject * __this, const RuntimeMethod* method)
{
	if (__this->identity != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime((RuntimeObject*)__this))
		{
			il2cpp_codegen_il2cpp_com_object_cleanup(__this);
		}
		__this->identity->Release();
		__this->identity = NULL;
	}

	Object_Finalize_mF771ED4CD6EB17CF862AA2B705F0E2CC0B4ADBED(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
