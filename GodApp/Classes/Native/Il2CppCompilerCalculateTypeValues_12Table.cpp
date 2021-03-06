﻿#include "il2cpp-config.h"

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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.Collections.ICollection
struct ICollection_t554836955;
// System.IntPtr[]
struct IntPtrU5BU5D_t2684230882;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t3485469650;
// System.ComponentModel.TypeDescriptionProvider/EmptyCustomTypeDescriptor
struct EmptyCustomTypeDescriptor_t4065268776;
// System.Collections.ArrayList
struct ArrayList_t3556881782;
// System.ComponentModel.IComNativeDescriptorHandler
struct IComNativeDescriptorHandler_t3999589817;
// System.Collections.Hashtable
struct Hashtable_t3133650694;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>
struct Dictionary_2_t814100428;
// System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>
struct Dictionary_2_t697607967;
// System.EventHandler
struct EventHandler_t2810727911;
// System.ComponentModel.RefreshEventHandler
struct RefreshEventHandler_t632229546;
// System.Type
struct Type_t;
// System.ComponentModel.EventDescriptor
struct EventDescriptor_t2366424953;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t1106879253;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t2705720300;
// System.WeakReference
struct WeakReference_t3270700386;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t2060833979;
// System.ComponentModel.ISite
struct ISite_t3273805677;
// System.Attribute[]
struct AttributeU5BU5D_t426525381;
// System.Collections.IComparer
struct IComparer_t2589530522;
// System.ComponentModel.LicenseContext
struct LicenseContext_t1040877086;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t952012675;
// System.Void
struct Void_t1245378934;
// System.Exception
struct Exception_t3383010872;
// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t1714785636;
// System.ComponentModel.IComponent
struct IComponent_t4058201696;
// System.ComponentModel.EventDescriptorCollection
struct EventDescriptorCollection_t4005238403;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t1536878629;
// System.Type[]
struct TypeU5BU5D_t2017049419;
// System.Char[]
struct CharU5BU5D_t2530504538;
// System.ComponentModel.TypeConverter
struct TypeConverter_t2001479086;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Collections.Queue
struct Queue_t2016903012;
// System.Threading.Thread
struct Thread_t3080374559;
// System.Net.EndPoint
struct EndPoint_t1993784231;




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
#ifndef VALUETYPE_T2679416583_H
#define VALUETYPE_T2679416583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t2679416583  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t2679416583_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2679416583_marshaled_com
{
};
#endif // VALUETYPE_T2679416583_H
#ifndef TYPECONVERTER_T2001479086_H
#define TYPECONVERTER_T2001479086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t2001479086  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T2001479086_H
#ifndef STANDARDVALUESCOLLECTION_T2127283394_H
#define STANDARDVALUESCOLLECTION_T2127283394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter/StandardValuesCollection
struct  StandardValuesCollection_t2127283394  : public RuntimeObject
{
public:
	// System.Collections.ICollection System.ComponentModel.TypeConverter/StandardValuesCollection::values
	RuntimeObject* ___values_0;

public:
	inline static int32_t get_offset_of_values_0() { return static_cast<int32_t>(offsetof(StandardValuesCollection_t2127283394, ___values_0)); }
	inline RuntimeObject* get_values_0() const { return ___values_0; }
	inline RuntimeObject** get_address_of_values_0() { return &___values_0; }
	inline void set_values_0(RuntimeObject* value)
	{
		___values_0 = value;
		Il2CppCodeGenWriteBarrier((&___values_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STANDARDVALUESCOLLECTION_T2127283394_H
#ifndef EXCEPTION_T3383010872_H
#define EXCEPTION_T3383010872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t3383010872  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t2684230882* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t3383010872 * ___inner_exception_1;
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
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t3383010872, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t2684230882* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t2684230882** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t2684230882* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t3383010872, ___inner_exception_1)); }
	inline Exception_t3383010872 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t3383010872 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t3383010872 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t3383010872, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t3383010872, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t3383010872, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t3383010872, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t3383010872, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t3383010872, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t3383010872, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t3383010872, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t3383010872, ____data_10)); }
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
#endif // EXCEPTION_T3383010872_H
#ifndef TYPEDESCRIPTIONPROVIDER_T1714785636_H
#define TYPEDESCRIPTIONPROVIDER_T1714785636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptionProvider
struct  TypeDescriptionProvider_t1714785636  : public RuntimeObject
{
public:
	// System.ComponentModel.TypeDescriptionProvider/EmptyCustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::_emptyCustomTypeDescriptor
	EmptyCustomTypeDescriptor_t4065268776 * ____emptyCustomTypeDescriptor_0;
	// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptionProvider::_parent
	TypeDescriptionProvider_t1714785636 * ____parent_1;

public:
	inline static int32_t get_offset_of__emptyCustomTypeDescriptor_0() { return static_cast<int32_t>(offsetof(TypeDescriptionProvider_t1714785636, ____emptyCustomTypeDescriptor_0)); }
	inline EmptyCustomTypeDescriptor_t4065268776 * get__emptyCustomTypeDescriptor_0() const { return ____emptyCustomTypeDescriptor_0; }
	inline EmptyCustomTypeDescriptor_t4065268776 ** get_address_of__emptyCustomTypeDescriptor_0() { return &____emptyCustomTypeDescriptor_0; }
	inline void set__emptyCustomTypeDescriptor_0(EmptyCustomTypeDescriptor_t4065268776 * value)
	{
		____emptyCustomTypeDescriptor_0 = value;
		Il2CppCodeGenWriteBarrier((&____emptyCustomTypeDescriptor_0), value);
	}

	inline static int32_t get_offset_of__parent_1() { return static_cast<int32_t>(offsetof(TypeDescriptionProvider_t1714785636, ____parent_1)); }
	inline TypeDescriptionProvider_t1714785636 * get__parent_1() const { return ____parent_1; }
	inline TypeDescriptionProvider_t1714785636 ** get_address_of__parent_1() { return &____parent_1; }
	inline void set__parent_1(TypeDescriptionProvider_t1714785636 * value)
	{
		____parent_1 = value;
		Il2CppCodeGenWriteBarrier((&____parent_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTIONPROVIDER_T1714785636_H
#ifndef TYPEDESCRIPTOR_T3113491348_H
#define TYPEDESCRIPTOR_T3113491348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor
struct  TypeDescriptor_t3113491348  : public RuntimeObject
{
public:

public:
};

struct TypeDescriptor_t3113491348_StaticFields
{
public:
	// System.Object System.ComponentModel.TypeDescriptor::creatingDefaultConverters
	RuntimeObject * ___creatingDefaultConverters_0;
	// System.Collections.ArrayList System.ComponentModel.TypeDescriptor::defaultConverters
	ArrayList_t3556881782 * ___defaultConverters_1;
	// System.ComponentModel.IComNativeDescriptorHandler System.ComponentModel.TypeDescriptor::descriptorHandler
	RuntimeObject* ___descriptorHandler_2;
	// System.Collections.Hashtable System.ComponentModel.TypeDescriptor::componentTable
	Hashtable_t3133650694 * ___componentTable_3;
	// System.Collections.Hashtable System.ComponentModel.TypeDescriptor::typeTable
	Hashtable_t3133650694 * ___typeTable_4;
	// System.Collections.Hashtable System.ComponentModel.TypeDescriptor::editors
	Hashtable_t3133650694 * ___editors_5;
	// System.Object System.ComponentModel.TypeDescriptor::typeDescriptionProvidersLock
	RuntimeObject * ___typeDescriptionProvidersLock_6;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>> System.ComponentModel.TypeDescriptor::typeDescriptionProviders
	Dictionary_2_t814100428 * ___typeDescriptionProviders_7;
	// System.Object System.ComponentModel.TypeDescriptor::componentDescriptionProvidersLock
	RuntimeObject * ___componentDescriptionProvidersLock_8;
	// System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>> System.ComponentModel.TypeDescriptor::componentDescriptionProviders
	Dictionary_2_t697607967 * ___componentDescriptionProviders_9;
	// System.EventHandler System.ComponentModel.TypeDescriptor::onDispose
	EventHandler_t2810727911 * ___onDispose_10;
	// System.ComponentModel.RefreshEventHandler System.ComponentModel.TypeDescriptor::Refreshed
	RefreshEventHandler_t632229546 * ___Refreshed_11;

public:
	inline static int32_t get_offset_of_creatingDefaultConverters_0() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3113491348_StaticFields, ___creatingDefaultConverters_0)); }
	inline RuntimeObject * get_creatingDefaultConverters_0() const { return ___creatingDefaultConverters_0; }
	inline RuntimeObject ** get_address_of_creatingDefaultConverters_0() { return &___creatingDefaultConverters_0; }
	inline void set_creatingDefaultConverters_0(RuntimeObject * value)
	{
		___creatingDefaultConverters_0 = value;
		Il2CppCodeGenWriteBarrier((&___creatingDefaultConverters_0), value);
	}

	inline static int32_t get_offset_of_defaultConverters_1() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3113491348_StaticFields, ___defaultConverters_1)); }
	inline ArrayList_t3556881782 * get_defaultConverters_1() const { return ___defaultConverters_1; }
	inline ArrayList_t3556881782 ** get_address_of_defaultConverters_1() { return &___defaultConverters_1; }
	inline void set_defaultConverters_1(ArrayList_t3556881782 * value)
	{
		___defaultConverters_1 = value;
		Il2CppCodeGenWriteBarrier((&___defaultConverters_1), value);
	}

	inline static int32_t get_offset_of_descriptorHandler_2() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3113491348_StaticFields, ___descriptorHandler_2)); }
	inline RuntimeObject* get_descriptorHandler_2() const { return ___descriptorHandler_2; }
	inline RuntimeObject** get_address_of_descriptorHandler_2() { return &___descriptorHandler_2; }
	inline void set_descriptorHandler_2(RuntimeObject* value)
	{
		___descriptorHandler_2 = value;
		Il2CppCodeGenWriteBarrier((&___descriptorHandler_2), value);
	}

	inline static int32_t get_offset_of_componentTable_3() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3113491348_StaticFields, ___componentTable_3)); }
	inline Hashtable_t3133650694 * get_componentTable_3() const { return ___componentTable_3; }
	inline Hashtable_t3133650694 ** get_address_of_componentTable_3() { return &___componentTable_3; }
	inline void set_componentTable_3(Hashtable_t3133650694 * value)
	{
		___componentTable_3 = value;
		Il2CppCodeGenWriteBarrier((&___componentTable_3), value);
	}

	inline static int32_t get_offset_of_typeTable_4() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3113491348_StaticFields, ___typeTable_4)); }
	inline Hashtable_t3133650694 * get_typeTable_4() const { return ___typeTable_4; }
	inline Hashtable_t3133650694 ** get_address_of_typeTable_4() { return &___typeTable_4; }
	inline void set_typeTable_4(Hashtable_t3133650694 * value)
	{
		___typeTable_4 = value;
		Il2CppCodeGenWriteBarrier((&___typeTable_4), value);
	}

	inline static int32_t get_offset_of_editors_5() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3113491348_StaticFields, ___editors_5)); }
	inline Hashtable_t3133650694 * get_editors_5() const { return ___editors_5; }
	inline Hashtable_t3133650694 ** get_address_of_editors_5() { return &___editors_5; }
	inline void set_editors_5(Hashtable_t3133650694 * value)
	{
		___editors_5 = value;
		Il2CppCodeGenWriteBarrier((&___editors_5), value);
	}

	inline static int32_t get_offset_of_typeDescriptionProvidersLock_6() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3113491348_StaticFields, ___typeDescriptionProvidersLock_6)); }
	inline RuntimeObject * get_typeDescriptionProvidersLock_6() const { return ___typeDescriptionProvidersLock_6; }
	inline RuntimeObject ** get_address_of_typeDescriptionProvidersLock_6() { return &___typeDescriptionProvidersLock_6; }
	inline void set_typeDescriptionProvidersLock_6(RuntimeObject * value)
	{
		___typeDescriptionProvidersLock_6 = value;
		Il2CppCodeGenWriteBarrier((&___typeDescriptionProvidersLock_6), value);
	}

	inline static int32_t get_offset_of_typeDescriptionProviders_7() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3113491348_StaticFields, ___typeDescriptionProviders_7)); }
	inline Dictionary_2_t814100428 * get_typeDescriptionProviders_7() const { return ___typeDescriptionProviders_7; }
	inline Dictionary_2_t814100428 ** get_address_of_typeDescriptionProviders_7() { return &___typeDescriptionProviders_7; }
	inline void set_typeDescriptionProviders_7(Dictionary_2_t814100428 * value)
	{
		___typeDescriptionProviders_7 = value;
		Il2CppCodeGenWriteBarrier((&___typeDescriptionProviders_7), value);
	}

	inline static int32_t get_offset_of_componentDescriptionProvidersLock_8() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3113491348_StaticFields, ___componentDescriptionProvidersLock_8)); }
	inline RuntimeObject * get_componentDescriptionProvidersLock_8() const { return ___componentDescriptionProvidersLock_8; }
	inline RuntimeObject ** get_address_of_componentDescriptionProvidersLock_8() { return &___componentDescriptionProvidersLock_8; }
	inline void set_componentDescriptionProvidersLock_8(RuntimeObject * value)
	{
		___componentDescriptionProvidersLock_8 = value;
		Il2CppCodeGenWriteBarrier((&___componentDescriptionProvidersLock_8), value);
	}

	inline static int32_t get_offset_of_componentDescriptionProviders_9() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3113491348_StaticFields, ___componentDescriptionProviders_9)); }
	inline Dictionary_2_t697607967 * get_componentDescriptionProviders_9() const { return ___componentDescriptionProviders_9; }
	inline Dictionary_2_t697607967 ** get_address_of_componentDescriptionProviders_9() { return &___componentDescriptionProviders_9; }
	inline void set_componentDescriptionProviders_9(Dictionary_2_t697607967 * value)
	{
		___componentDescriptionProviders_9 = value;
		Il2CppCodeGenWriteBarrier((&___componentDescriptionProviders_9), value);
	}

	inline static int32_t get_offset_of_onDispose_10() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3113491348_StaticFields, ___onDispose_10)); }
	inline EventHandler_t2810727911 * get_onDispose_10() const { return ___onDispose_10; }
	inline EventHandler_t2810727911 ** get_address_of_onDispose_10() { return &___onDispose_10; }
	inline void set_onDispose_10(EventHandler_t2810727911 * value)
	{
		___onDispose_10 = value;
		Il2CppCodeGenWriteBarrier((&___onDispose_10), value);
	}

	inline static int32_t get_offset_of_Refreshed_11() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3113491348_StaticFields, ___Refreshed_11)); }
	inline RefreshEventHandler_t632229546 * get_Refreshed_11() const { return ___Refreshed_11; }
	inline RefreshEventHandler_t632229546 ** get_address_of_Refreshed_11() { return &___Refreshed_11; }
	inline void set_Refreshed_11(RefreshEventHandler_t632229546 * value)
	{
		___Refreshed_11 = value;
		Il2CppCodeGenWriteBarrier((&___Refreshed_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTOR_T3113491348_H
#ifndef PROPERTYDESCRIPTORCOLLECTION_T1536878629_H
#define PROPERTYDESCRIPTORCOLLECTION_T1536878629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptorCollection
struct  PropertyDescriptorCollection_t1536878629  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.PropertyDescriptorCollection::properties
	ArrayList_t3556881782 * ___properties_1;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::readOnly
	bool ___readOnly_2;

public:
	inline static int32_t get_offset_of_properties_1() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t1536878629, ___properties_1)); }
	inline ArrayList_t3556881782 * get_properties_1() const { return ___properties_1; }
	inline ArrayList_t3556881782 ** get_address_of_properties_1() { return &___properties_1; }
	inline void set_properties_1(ArrayList_t3556881782 * value)
	{
		___properties_1 = value;
		Il2CppCodeGenWriteBarrier((&___properties_1), value);
	}

	inline static int32_t get_offset_of_readOnly_2() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t1536878629, ___readOnly_2)); }
	inline bool get_readOnly_2() const { return ___readOnly_2; }
	inline bool* get_address_of_readOnly_2() { return &___readOnly_2; }
	inline void set_readOnly_2(bool value)
	{
		___readOnly_2 = value;
	}
};

struct PropertyDescriptorCollection_t1536878629_StaticFields
{
public:
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptorCollection::Empty
	PropertyDescriptorCollection_t1536878629 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t1536878629_StaticFields, ___Empty_0)); }
	inline PropertyDescriptorCollection_t1536878629 * get_Empty_0() const { return ___Empty_0; }
	inline PropertyDescriptorCollection_t1536878629 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(PropertyDescriptorCollection_t1536878629 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTORCOLLECTION_T1536878629_H
#ifndef INFO_T2409457902_H
#define INFO_T2409457902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Info
struct  Info_t2409457902  : public RuntimeObject
{
public:
	// System.Type System.ComponentModel.Info::_infoType
	Type_t * ____infoType_0;
	// System.ComponentModel.EventDescriptor System.ComponentModel.Info::_defaultEvent
	EventDescriptor_t2366424953 * ____defaultEvent_1;
	// System.Boolean System.ComponentModel.Info::_gotDefaultEvent
	bool ____gotDefaultEvent_2;
	// System.ComponentModel.PropertyDescriptor System.ComponentModel.Info::_defaultProperty
	PropertyDescriptor_t1106879253 * ____defaultProperty_3;
	// System.Boolean System.ComponentModel.Info::_gotDefaultProperty
	bool ____gotDefaultProperty_4;
	// System.ComponentModel.AttributeCollection System.ComponentModel.Info::_attributes
	AttributeCollection_t2705720300 * ____attributes_5;

public:
	inline static int32_t get_offset_of__infoType_0() { return static_cast<int32_t>(offsetof(Info_t2409457902, ____infoType_0)); }
	inline Type_t * get__infoType_0() const { return ____infoType_0; }
	inline Type_t ** get_address_of__infoType_0() { return &____infoType_0; }
	inline void set__infoType_0(Type_t * value)
	{
		____infoType_0 = value;
		Il2CppCodeGenWriteBarrier((&____infoType_0), value);
	}

	inline static int32_t get_offset_of__defaultEvent_1() { return static_cast<int32_t>(offsetof(Info_t2409457902, ____defaultEvent_1)); }
	inline EventDescriptor_t2366424953 * get__defaultEvent_1() const { return ____defaultEvent_1; }
	inline EventDescriptor_t2366424953 ** get_address_of__defaultEvent_1() { return &____defaultEvent_1; }
	inline void set__defaultEvent_1(EventDescriptor_t2366424953 * value)
	{
		____defaultEvent_1 = value;
		Il2CppCodeGenWriteBarrier((&____defaultEvent_1), value);
	}

	inline static int32_t get_offset_of__gotDefaultEvent_2() { return static_cast<int32_t>(offsetof(Info_t2409457902, ____gotDefaultEvent_2)); }
	inline bool get__gotDefaultEvent_2() const { return ____gotDefaultEvent_2; }
	inline bool* get_address_of__gotDefaultEvent_2() { return &____gotDefaultEvent_2; }
	inline void set__gotDefaultEvent_2(bool value)
	{
		____gotDefaultEvent_2 = value;
	}

	inline static int32_t get_offset_of__defaultProperty_3() { return static_cast<int32_t>(offsetof(Info_t2409457902, ____defaultProperty_3)); }
	inline PropertyDescriptor_t1106879253 * get__defaultProperty_3() const { return ____defaultProperty_3; }
	inline PropertyDescriptor_t1106879253 ** get_address_of__defaultProperty_3() { return &____defaultProperty_3; }
	inline void set__defaultProperty_3(PropertyDescriptor_t1106879253 * value)
	{
		____defaultProperty_3 = value;
		Il2CppCodeGenWriteBarrier((&____defaultProperty_3), value);
	}

	inline static int32_t get_offset_of__gotDefaultProperty_4() { return static_cast<int32_t>(offsetof(Info_t2409457902, ____gotDefaultProperty_4)); }
	inline bool get__gotDefaultProperty_4() const { return ____gotDefaultProperty_4; }
	inline bool* get_address_of__gotDefaultProperty_4() { return &____gotDefaultProperty_4; }
	inline void set__gotDefaultProperty_4(bool value)
	{
		____gotDefaultProperty_4 = value;
	}

	inline static int32_t get_offset_of__attributes_5() { return static_cast<int32_t>(offsetof(Info_t2409457902, ____attributes_5)); }
	inline AttributeCollection_t2705720300 * get__attributes_5() const { return ____attributes_5; }
	inline AttributeCollection_t2705720300 ** get_address_of__attributes_5() { return &____attributes_5; }
	inline void set__attributes_5(AttributeCollection_t2705720300 * value)
	{
		____attributes_5 = value;
		Il2CppCodeGenWriteBarrier((&____attributes_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INFO_T2409457902_H
#ifndef WEAKOBJECTWRAPPER_T4057492967_H
#define WEAKOBJECTWRAPPER_T4057492967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.WeakObjectWrapper
struct  WeakObjectWrapper_t4057492967  : public RuntimeObject
{
public:
	// System.Int32 System.ComponentModel.WeakObjectWrapper::<TargetHashCode>k__BackingField
	int32_t ___U3CTargetHashCodeU3Ek__BackingField_0;
	// System.WeakReference System.ComponentModel.WeakObjectWrapper::<Weak>k__BackingField
	WeakReference_t3270700386 * ___U3CWeakU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CTargetHashCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WeakObjectWrapper_t4057492967, ___U3CTargetHashCodeU3Ek__BackingField_0)); }
	inline int32_t get_U3CTargetHashCodeU3Ek__BackingField_0() const { return ___U3CTargetHashCodeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CTargetHashCodeU3Ek__BackingField_0() { return &___U3CTargetHashCodeU3Ek__BackingField_0; }
	inline void set_U3CTargetHashCodeU3Ek__BackingField_0(int32_t value)
	{
		___U3CTargetHashCodeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CWeakU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WeakObjectWrapper_t4057492967, ___U3CWeakU3Ek__BackingField_1)); }
	inline WeakReference_t3270700386 * get_U3CWeakU3Ek__BackingField_1() const { return ___U3CWeakU3Ek__BackingField_1; }
	inline WeakReference_t3270700386 ** get_address_of_U3CWeakU3Ek__BackingField_1() { return &___U3CWeakU3Ek__BackingField_1; }
	inline void set_U3CWeakU3Ek__BackingField_1(WeakReference_t3270700386 * value)
	{
		___U3CWeakU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CWeakU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKOBJECTWRAPPER_T4057492967_H
#ifndef MEMBERDESCRIPTORCOMPARER_T2555538544_H
#define MEMBERDESCRIPTORCOMPARER_T2555538544_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor/MemberDescriptorComparer
struct  MemberDescriptorComparer_t2555538544  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERDESCRIPTORCOMPARER_T2555538544_H
#ifndef MARSHALBYVALUECOMPONENT_T2437023999_H
#define MARSHALBYVALUECOMPONENT_T2437023999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MarshalByValueComponent
struct  MarshalByValueComponent_t2437023999  : public RuntimeObject
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.MarshalByValueComponent::eventList
	EventHandlerList_t2060833979 * ___eventList_0;
	// System.ComponentModel.ISite System.ComponentModel.MarshalByValueComponent::mySite
	RuntimeObject* ___mySite_1;
	// System.Object System.ComponentModel.MarshalByValueComponent::disposedEvent
	RuntimeObject * ___disposedEvent_2;

public:
	inline static int32_t get_offset_of_eventList_0() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t2437023999, ___eventList_0)); }
	inline EventHandlerList_t2060833979 * get_eventList_0() const { return ___eventList_0; }
	inline EventHandlerList_t2060833979 ** get_address_of_eventList_0() { return &___eventList_0; }
	inline void set_eventList_0(EventHandlerList_t2060833979 * value)
	{
		___eventList_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventList_0), value);
	}

	inline static int32_t get_offset_of_mySite_1() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t2437023999, ___mySite_1)); }
	inline RuntimeObject* get_mySite_1() const { return ___mySite_1; }
	inline RuntimeObject** get_address_of_mySite_1() { return &___mySite_1; }
	inline void set_mySite_1(RuntimeObject* value)
	{
		___mySite_1 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_1), value);
	}

	inline static int32_t get_offset_of_disposedEvent_2() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t2437023999, ___disposedEvent_2)); }
	inline RuntimeObject * get_disposedEvent_2() const { return ___disposedEvent_2; }
	inline RuntimeObject ** get_address_of_disposedEvent_2() { return &___disposedEvent_2; }
	inline void set_disposedEvent_2(RuntimeObject * value)
	{
		___disposedEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___disposedEvent_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYVALUECOMPONENT_T2437023999_H
#ifndef DEBUG_T252663237_H
#define DEBUG_T252663237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Debug
struct  Debug_t252663237  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUG_T252663237_H
#ifndef STOPWATCH_T3361256120_H
#define STOPWATCH_T3361256120_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Stopwatch
struct  Stopwatch_t3361256120  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t3361256120, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t3361256120, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t3361256120, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t3361256120_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t3361256120_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t3361256120_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STOPWATCH_T3361256120_H
#ifndef LISTSORTDESCRIPTIONCOLLECTION_T921216496_H
#define LISTSORTDESCRIPTIONCOLLECTION_T921216496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListSortDescriptionCollection
struct  ListSortDescriptionCollection_t921216496  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.ListSortDescriptionCollection::list
	ArrayList_t3556881782 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ListSortDescriptionCollection_t921216496, ___list_0)); }
	inline ArrayList_t3556881782 * get_list_0() const { return ___list_0; }
	inline ArrayList_t3556881782 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t3556881782 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTSORTDESCRIPTIONCOLLECTION_T921216496_H
#ifndef LINGEROPTION_T411771771_H
#define LINGEROPTION_T411771771_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.LingerOption
struct  LingerOption_t411771771  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Sockets.LingerOption::enabled
	bool ___enabled_0;
	// System.Int32 System.Net.Sockets.LingerOption::seconds
	int32_t ___seconds_1;

public:
	inline static int32_t get_offset_of_enabled_0() { return static_cast<int32_t>(offsetof(LingerOption_t411771771, ___enabled_0)); }
	inline bool get_enabled_0() const { return ___enabled_0; }
	inline bool* get_address_of_enabled_0() { return &___enabled_0; }
	inline void set_enabled_0(bool value)
	{
		___enabled_0 = value;
	}

	inline static int32_t get_offset_of_seconds_1() { return static_cast<int32_t>(offsetof(LingerOption_t411771771, ___seconds_1)); }
	inline int32_t get_seconds_1() const { return ___seconds_1; }
	inline int32_t* get_address_of_seconds_1() { return &___seconds_1; }
	inline void set_seconds_1(int32_t value)
	{
		___seconds_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINGEROPTION_T411771771_H
#ifndef MEMBERDESCRIPTOR_T4285166121_H
#define MEMBERDESCRIPTOR_T4285166121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor
struct  MemberDescriptor_t4285166121  : public RuntimeObject
{
public:
	// System.String System.ComponentModel.MemberDescriptor::name
	String_t* ___name_0;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::attrs
	AttributeU5BU5D_t426525381* ___attrs_1;
	// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::attrCollection
	AttributeCollection_t2705720300 * ___attrCollection_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MemberDescriptor_t4285166121, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_attrs_1() { return static_cast<int32_t>(offsetof(MemberDescriptor_t4285166121, ___attrs_1)); }
	inline AttributeU5BU5D_t426525381* get_attrs_1() const { return ___attrs_1; }
	inline AttributeU5BU5D_t426525381** get_address_of_attrs_1() { return &___attrs_1; }
	inline void set_attrs_1(AttributeU5BU5D_t426525381* value)
	{
		___attrs_1 = value;
		Il2CppCodeGenWriteBarrier((&___attrs_1), value);
	}

	inline static int32_t get_offset_of_attrCollection_2() { return static_cast<int32_t>(offsetof(MemberDescriptor_t4285166121, ___attrCollection_2)); }
	inline AttributeCollection_t2705720300 * get_attrCollection_2() const { return ___attrCollection_2; }
	inline AttributeCollection_t2705720300 ** get_address_of_attrCollection_2() { return &___attrCollection_2; }
	inline void set_attrCollection_2(AttributeCollection_t2705720300 * value)
	{
		___attrCollection_2 = value;
		Il2CppCodeGenWriteBarrier((&___attrCollection_2), value);
	}
};

struct MemberDescriptor_t4285166121_StaticFields
{
public:
	// System.Collections.IComparer System.ComponentModel.MemberDescriptor::default_comparer
	RuntimeObject* ___default_comparer_3;

public:
	inline static int32_t get_offset_of_default_comparer_3() { return static_cast<int32_t>(offsetof(MemberDescriptor_t4285166121_StaticFields, ___default_comparer_3)); }
	inline RuntimeObject* get_default_comparer_3() const { return ___default_comparer_3; }
	inline RuntimeObject** get_address_of_default_comparer_3() { return &___default_comparer_3; }
	inline void set_default_comparer_3(RuntimeObject* value)
	{
		___default_comparer_3 = value;
		Il2CppCodeGenWriteBarrier((&___default_comparer_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERDESCRIPTOR_T4285166121_H
#ifndef ATTRIBUTE_T4057762188_H
#define ATTRIBUTE_T4057762188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t4057762188  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T4057762188_H
#ifndef EQUALITYCOMPARER_1_T1974443624_H
#define EQUALITYCOMPARER_1_T1974443624_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.EqualityComparer`1<System.ComponentModel.WeakObjectWrapper>
struct  EqualityComparer_1_t1974443624  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t1974443624_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1::_default
	EqualityComparer_1_t1974443624 * ____default_0;

public:
	inline static int32_t get_offset_of__default_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t1974443624_StaticFields, ____default_0)); }
	inline EqualityComparer_1_t1974443624 * get__default_0() const { return ____default_0; }
	inline EqualityComparer_1_t1974443624 ** get_address_of__default_0() { return &____default_0; }
	inline void set__default_0(EqualityComparer_1_t1974443624 * value)
	{
		____default_0 = value;
		Il2CppCodeGenWriteBarrier((&____default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EQUALITYCOMPARER_1_T1974443624_H
#ifndef LICENSEPROVIDER_T4154406734_H
#define LICENSEPROVIDER_T4154406734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseProvider
struct  LicenseProvider_t4154406734  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSEPROVIDER_T4154406734_H
#ifndef LICENSEMANAGER_T3249413197_H
#define LICENSEMANAGER_T3249413197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseManager
struct  LicenseManager_t3249413197  : public RuntimeObject
{
public:

public:
};

struct LicenseManager_t3249413197_StaticFields
{
public:
	// System.ComponentModel.LicenseContext System.ComponentModel.LicenseManager::mycontext
	LicenseContext_t1040877086 * ___mycontext_0;
	// System.Object System.ComponentModel.LicenseManager::contextLockUser
	RuntimeObject * ___contextLockUser_1;
	// System.Object System.ComponentModel.LicenseManager::lockObject
	RuntimeObject * ___lockObject_2;

public:
	inline static int32_t get_offset_of_mycontext_0() { return static_cast<int32_t>(offsetof(LicenseManager_t3249413197_StaticFields, ___mycontext_0)); }
	inline LicenseContext_t1040877086 * get_mycontext_0() const { return ___mycontext_0; }
	inline LicenseContext_t1040877086 ** get_address_of_mycontext_0() { return &___mycontext_0; }
	inline void set_mycontext_0(LicenseContext_t1040877086 * value)
	{
		___mycontext_0 = value;
		Il2CppCodeGenWriteBarrier((&___mycontext_0), value);
	}

	inline static int32_t get_offset_of_contextLockUser_1() { return static_cast<int32_t>(offsetof(LicenseManager_t3249413197_StaticFields, ___contextLockUser_1)); }
	inline RuntimeObject * get_contextLockUser_1() const { return ___contextLockUser_1; }
	inline RuntimeObject ** get_address_of_contextLockUser_1() { return &___contextLockUser_1; }
	inline void set_contextLockUser_1(RuntimeObject * value)
	{
		___contextLockUser_1 = value;
		Il2CppCodeGenWriteBarrier((&___contextLockUser_1), value);
	}

	inline static int32_t get_offset_of_lockObject_2() { return static_cast<int32_t>(offsetof(LicenseManager_t3249413197_StaticFields, ___lockObject_2)); }
	inline RuntimeObject * get_lockObject_2() const { return ___lockObject_2; }
	inline RuntimeObject ** get_address_of_lockObject_2() { return &___lockObject_2; }
	inline void set_lockObject_2(RuntimeObject * value)
	{
		___lockObject_2 = value;
		Il2CppCodeGenWriteBarrier((&___lockObject_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSEMANAGER_T3249413197_H
#ifndef CUSTOMTYPEDESCRIPTOR_T2263899598_H
#define CUSTOMTYPEDESCRIPTOR_T2263899598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CustomTypeDescriptor
struct  CustomTypeDescriptor_t2263899598  : public RuntimeObject
{
public:
	// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.CustomTypeDescriptor::_parent
	RuntimeObject* ____parent_0;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(CustomTypeDescriptor_t2263899598, ____parent_0)); }
	inline RuntimeObject* get__parent_0() const { return ____parent_0; }
	inline RuntimeObject** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(RuntimeObject* value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((&____parent_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMTYPEDESCRIPTOR_T2263899598_H
#ifndef LICENSECONTEXT_T1040877086_H
#define LICENSECONTEXT_T1040877086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseContext
struct  LicenseContext_t1040877086  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSECONTEXT_T1040877086_H
#ifndef LICENSE_T421640234_H
#define LICENSE_T421640234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.License
struct  License_t421640234  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSE_T421640234_H
#ifndef MULTICASTOPTION_T3405587728_H
#define MULTICASTOPTION_T3405587728_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.MulticastOption
struct  MulticastOption_t3405587728  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTOPTION_T3405587728_H
#ifndef EVENTARGS_T3467505009_H
#define EVENTARGS_T3467505009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3467505009  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3467505009_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3467505009 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3467505009_StaticFields, ___Empty_0)); }
	inline EventArgs_t3467505009 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3467505009 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3467505009 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3467505009_H
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
#ifndef TYPECONVERTERATTRIBUTE_T3855605381_H
#define TYPECONVERTERATTRIBUTE_T3855605381_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverterAttribute
struct  TypeConverterAttribute_t3855605381  : public Attribute_t4057762188
{
public:
	// System.String System.ComponentModel.TypeConverterAttribute::converter_type
	String_t* ___converter_type_1;

public:
	inline static int32_t get_offset_of_converter_type_1() { return static_cast<int32_t>(offsetof(TypeConverterAttribute_t3855605381, ___converter_type_1)); }
	inline String_t* get_converter_type_1() const { return ___converter_type_1; }
	inline String_t** get_address_of_converter_type_1() { return &___converter_type_1; }
	inline void set_converter_type_1(String_t* value)
	{
		___converter_type_1 = value;
		Il2CppCodeGenWriteBarrier((&___converter_type_1), value);
	}
};

struct TypeConverterAttribute_t3855605381_StaticFields
{
public:
	// System.ComponentModel.TypeConverterAttribute System.ComponentModel.TypeConverterAttribute::Default
	TypeConverterAttribute_t3855605381 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(TypeConverterAttribute_t3855605381_StaticFields, ___Default_0)); }
	inline TypeConverterAttribute_t3855605381 * get_Default_0() const { return ___Default_0; }
	inline TypeConverterAttribute_t3855605381 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(TypeConverterAttribute_t3855605381 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTERATTRIBUTE_T3855605381_H
#ifndef ASYNCCOMPLETEDEVENTARGS_T2745088064_H
#define ASYNCCOMPLETEDEVENTARGS_T2745088064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AsyncCompletedEventArgs
struct  AsyncCompletedEventArgs_t2745088064  : public EventArgs_t3467505009
{
public:
	// System.Exception System.ComponentModel.AsyncCompletedEventArgs::_error
	Exception_t3383010872 * ____error_1;
	// System.Boolean System.ComponentModel.AsyncCompletedEventArgs::_cancelled
	bool ____cancelled_2;
	// System.Object System.ComponentModel.AsyncCompletedEventArgs::_userState
	RuntimeObject * ____userState_3;

public:
	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(AsyncCompletedEventArgs_t2745088064, ____error_1)); }
	inline Exception_t3383010872 * get__error_1() const { return ____error_1; }
	inline Exception_t3383010872 ** get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(Exception_t3383010872 * value)
	{
		____error_1 = value;
		Il2CppCodeGenWriteBarrier((&____error_1), value);
	}

	inline static int32_t get_offset_of__cancelled_2() { return static_cast<int32_t>(offsetof(AsyncCompletedEventArgs_t2745088064, ____cancelled_2)); }
	inline bool get__cancelled_2() const { return ____cancelled_2; }
	inline bool* get_address_of__cancelled_2() { return &____cancelled_2; }
	inline void set__cancelled_2(bool value)
	{
		____cancelled_2 = value;
	}

	inline static int32_t get_offset_of__userState_3() { return static_cast<int32_t>(offsetof(AsyncCompletedEventArgs_t2745088064, ____userState_3)); }
	inline RuntimeObject * get__userState_3() const { return ____userState_3; }
	inline RuntimeObject ** get_address_of__userState_3() { return &____userState_3; }
	inline void set__userState_3(RuntimeObject * value)
	{
		____userState_3 = value;
		Il2CppCodeGenWriteBarrier((&____userState_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCOMPLETEDEVENTARGS_T2745088064_H
#ifndef EMPTYCUSTOMTYPEDESCRIPTOR_T4065268776_H
#define EMPTYCUSTOMTYPEDESCRIPTOR_T4065268776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptionProvider/EmptyCustomTypeDescriptor
struct  EmptyCustomTypeDescriptor_t4065268776  : public CustomTypeDescriptor_t2263899598
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMPTYCUSTOMTYPEDESCRIPTOR_T4065268776_H
#ifndef EVENTDESCRIPTOR_T2366424953_H
#define EVENTDESCRIPTOR_T2366424953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventDescriptor
struct  EventDescriptor_t2366424953  : public MemberDescriptor_t4285166121
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTDESCRIPTOR_T2366424953_H
#ifndef ATTRIBUTEPROVIDER_T556314230_H
#define ATTRIBUTEPROVIDER_T556314230_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/AttributeProvider
struct  AttributeProvider_t556314230  : public TypeDescriptionProvider_t1714785636
{
public:
	// System.Attribute[] System.ComponentModel.TypeDescriptor/AttributeProvider::attributes
	AttributeU5BU5D_t426525381* ___attributes_2;

public:
	inline static int32_t get_offset_of_attributes_2() { return static_cast<int32_t>(offsetof(AttributeProvider_t556314230, ___attributes_2)); }
	inline AttributeU5BU5D_t426525381* get_attributes_2() const { return ___attributes_2; }
	inline AttributeU5BU5D_t426525381** get_address_of_attributes_2() { return &___attributes_2; }
	inline void set_attributes_2(AttributeU5BU5D_t426525381* value)
	{
		___attributes_2 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEPROVIDER_T556314230_H
#ifndef ATTRIBUTETYPEDESCRIPTOR_T1922290657_H
#define ATTRIBUTETYPEDESCRIPTOR_T1922290657_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/AttributeProvider/AttributeTypeDescriptor
struct  AttributeTypeDescriptor_t1922290657  : public CustomTypeDescriptor_t2263899598
{
public:
	// System.Attribute[] System.ComponentModel.TypeDescriptor/AttributeProvider/AttributeTypeDescriptor::attributes
	AttributeU5BU5D_t426525381* ___attributes_1;

public:
	inline static int32_t get_offset_of_attributes_1() { return static_cast<int32_t>(offsetof(AttributeTypeDescriptor_t1922290657, ___attributes_1)); }
	inline AttributeU5BU5D_t426525381* get_attributes_1() const { return ___attributes_1; }
	inline AttributeU5BU5D_t426525381** get_address_of_attributes_1() { return &___attributes_1; }
	inline void set_attributes_1(AttributeU5BU5D_t426525381* value)
	{
		___attributes_1 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTETYPEDESCRIPTOR_T1922290657_H
#ifndef DEFAULTTYPEDESCRIPTIONPROVIDER_T3395722130_H
#define DEFAULTTYPEDESCRIPTIONPROVIDER_T3395722130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/DefaultTypeDescriptionProvider
struct  DefaultTypeDescriptionProvider_t3395722130  : public TypeDescriptionProvider_t1714785636
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTTYPEDESCRIPTIONPROVIDER_T3395722130_H
#ifndef DEFAULTTYPEDESCRIPTOR_T3471409565_H
#define DEFAULTTYPEDESCRIPTOR_T3471409565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/DefaultTypeDescriptor
struct  DefaultTypeDescriptor_t3471409565  : public CustomTypeDescriptor_t2263899598
{
public:
	// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor/DefaultTypeDescriptor::owner
	TypeDescriptionProvider_t1714785636 * ___owner_1;
	// System.Type System.ComponentModel.TypeDescriptor/DefaultTypeDescriptor::objectType
	Type_t * ___objectType_2;
	// System.Object System.ComponentModel.TypeDescriptor/DefaultTypeDescriptor::instance
	RuntimeObject * ___instance_3;

public:
	inline static int32_t get_offset_of_owner_1() { return static_cast<int32_t>(offsetof(DefaultTypeDescriptor_t3471409565, ___owner_1)); }
	inline TypeDescriptionProvider_t1714785636 * get_owner_1() const { return ___owner_1; }
	inline TypeDescriptionProvider_t1714785636 ** get_address_of_owner_1() { return &___owner_1; }
	inline void set_owner_1(TypeDescriptionProvider_t1714785636 * value)
	{
		___owner_1 = value;
		Il2CppCodeGenWriteBarrier((&___owner_1), value);
	}

	inline static int32_t get_offset_of_objectType_2() { return static_cast<int32_t>(offsetof(DefaultTypeDescriptor_t3471409565, ___objectType_2)); }
	inline Type_t * get_objectType_2() const { return ___objectType_2; }
	inline Type_t ** get_address_of_objectType_2() { return &___objectType_2; }
	inline void set_objectType_2(Type_t * value)
	{
		___objectType_2 = value;
		Il2CppCodeGenWriteBarrier((&___objectType_2), value);
	}

	inline static int32_t get_offset_of_instance_3() { return static_cast<int32_t>(offsetof(DefaultTypeDescriptor_t3471409565, ___instance_3)); }
	inline RuntimeObject * get_instance_3() const { return ___instance_3; }
	inline RuntimeObject ** get_address_of_instance_3() { return &___instance_3; }
	inline void set_instance_3(RuntimeObject * value)
	{
		___instance_3 = value;
		Il2CppCodeGenWriteBarrier((&___instance_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTTYPEDESCRIPTOR_T3471409565_H
#ifndef COMPONENTINFO_T1068897431_H
#define COMPONENTINFO_T1068897431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentInfo
struct  ComponentInfo_t1068897431  : public Info_t2409457902
{
public:
	// System.ComponentModel.IComponent System.ComponentModel.ComponentInfo::_component
	RuntimeObject* ____component_6;
	// System.ComponentModel.EventDescriptorCollection System.ComponentModel.ComponentInfo::_events
	EventDescriptorCollection_t4005238403 * ____events_7;
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ComponentInfo::_properties
	PropertyDescriptorCollection_t1536878629 * ____properties_8;

public:
	inline static int32_t get_offset_of__component_6() { return static_cast<int32_t>(offsetof(ComponentInfo_t1068897431, ____component_6)); }
	inline RuntimeObject* get__component_6() const { return ____component_6; }
	inline RuntimeObject** get_address_of__component_6() { return &____component_6; }
	inline void set__component_6(RuntimeObject* value)
	{
		____component_6 = value;
		Il2CppCodeGenWriteBarrier((&____component_6), value);
	}

	inline static int32_t get_offset_of__events_7() { return static_cast<int32_t>(offsetof(ComponentInfo_t1068897431, ____events_7)); }
	inline EventDescriptorCollection_t4005238403 * get__events_7() const { return ____events_7; }
	inline EventDescriptorCollection_t4005238403 ** get_address_of__events_7() { return &____events_7; }
	inline void set__events_7(EventDescriptorCollection_t4005238403 * value)
	{
		____events_7 = value;
		Il2CppCodeGenWriteBarrier((&____events_7), value);
	}

	inline static int32_t get_offset_of__properties_8() { return static_cast<int32_t>(offsetof(ComponentInfo_t1068897431, ____properties_8)); }
	inline PropertyDescriptorCollection_t1536878629 * get__properties_8() const { return ____properties_8; }
	inline PropertyDescriptorCollection_t1536878629 ** get_address_of__properties_8() { return &____properties_8; }
	inline void set__properties_8(PropertyDescriptorCollection_t1536878629 * value)
	{
		____properties_8 = value;
		Il2CppCodeGenWriteBarrier((&____properties_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTINFO_T1068897431_H
#ifndef TYPEINFO_T911236085_H
#define TYPEINFO_T911236085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeInfo
struct  TypeInfo_t911236085  : public Info_t2409457902
{
public:
	// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeInfo::_events
	EventDescriptorCollection_t4005238403 * ____events_6;
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeInfo::_properties
	PropertyDescriptorCollection_t1536878629 * ____properties_7;

public:
	inline static int32_t get_offset_of__events_6() { return static_cast<int32_t>(offsetof(TypeInfo_t911236085, ____events_6)); }
	inline EventDescriptorCollection_t4005238403 * get__events_6() const { return ____events_6; }
	inline EventDescriptorCollection_t4005238403 ** get_address_of__events_6() { return &____events_6; }
	inline void set__events_6(EventDescriptorCollection_t4005238403 * value)
	{
		____events_6 = value;
		Il2CppCodeGenWriteBarrier((&____events_6), value);
	}

	inline static int32_t get_offset_of__properties_7() { return static_cast<int32_t>(offsetof(TypeInfo_t911236085, ____properties_7)); }
	inline PropertyDescriptorCollection_t1536878629 * get__properties_7() const { return ____properties_7; }
	inline PropertyDescriptorCollection_t1536878629 ** get_address_of__properties_7() { return &____properties_7; }
	inline void set__properties_7(PropertyDescriptorCollection_t1536878629 * value)
	{
		____properties_7 = value;
		Il2CppCodeGenWriteBarrier((&____properties_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFO_T911236085_H
#ifndef TYPELISTCONVERTER_T3223085335_H
#define TYPELISTCONVERTER_T3223085335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeListConverter
struct  TypeListConverter_t3223085335  : public TypeConverter_t2001479086
{
public:
	// System.Type[] System.ComponentModel.TypeListConverter::types
	TypeU5BU5D_t2017049419* ___types_0;

public:
	inline static int32_t get_offset_of_types_0() { return static_cast<int32_t>(offsetof(TypeListConverter_t3223085335, ___types_0)); }
	inline TypeU5BU5D_t2017049419* get_types_0() const { return ___types_0; }
	inline TypeU5BU5D_t2017049419** get_address_of_types_0() { return &___types_0; }
	inline void set_types_0(TypeU5BU5D_t2017049419* value)
	{
		___types_0 = value;
		Il2CppCodeGenWriteBarrier((&___types_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELISTCONVERTER_T3223085335_H
#ifndef WEAKOBJECTWRAPPERCOMPARER_T4059002358_H
#define WEAKOBJECTWRAPPERCOMPARER_T4059002358_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.WeakObjectWrapperComparer
struct  WeakObjectWrapperComparer_t4059002358  : public EqualityComparer_1_t1974443624
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKOBJECTWRAPPERCOMPARER_T4059002358_H
#ifndef ENUM_T3445510764_H
#define ENUM_T3445510764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t3445510764  : public ValueType_t2679416583
{
public:

public:
};

struct Enum_t3445510764_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t2530504538* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t3445510764_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t2530504538* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t2530504538** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t2530504538* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t3445510764_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t3445510764_marshaled_com
{
};
#endif // ENUM_T3445510764_H
#ifndef TOOLBOXITEMATTRIBUTE_T2072845446_H
#define TOOLBOXITEMATTRIBUTE_T2072845446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ToolboxItemAttribute
struct  ToolboxItemAttribute_t2072845446  : public Attribute_t4057762188
{
public:
	// System.Type System.ComponentModel.ToolboxItemAttribute::itemType
	Type_t * ___itemType_3;
	// System.String System.ComponentModel.ToolboxItemAttribute::itemTypeName
	String_t* ___itemTypeName_4;

public:
	inline static int32_t get_offset_of_itemType_3() { return static_cast<int32_t>(offsetof(ToolboxItemAttribute_t2072845446, ___itemType_3)); }
	inline Type_t * get_itemType_3() const { return ___itemType_3; }
	inline Type_t ** get_address_of_itemType_3() { return &___itemType_3; }
	inline void set_itemType_3(Type_t * value)
	{
		___itemType_3 = value;
		Il2CppCodeGenWriteBarrier((&___itemType_3), value);
	}

	inline static int32_t get_offset_of_itemTypeName_4() { return static_cast<int32_t>(offsetof(ToolboxItemAttribute_t2072845446, ___itemTypeName_4)); }
	inline String_t* get_itemTypeName_4() const { return ___itemTypeName_4; }
	inline String_t** get_address_of_itemTypeName_4() { return &___itemTypeName_4; }
	inline void set_itemTypeName_4(String_t* value)
	{
		___itemTypeName_4 = value;
		Il2CppCodeGenWriteBarrier((&___itemTypeName_4), value);
	}
};

struct ToolboxItemAttribute_t2072845446_StaticFields
{
public:
	// System.ComponentModel.ToolboxItemAttribute System.ComponentModel.ToolboxItemAttribute::Default
	ToolboxItemAttribute_t2072845446 * ___Default_1;
	// System.ComponentModel.ToolboxItemAttribute System.ComponentModel.ToolboxItemAttribute::None
	ToolboxItemAttribute_t2072845446 * ___None_2;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(ToolboxItemAttribute_t2072845446_StaticFields, ___Default_1)); }
	inline ToolboxItemAttribute_t2072845446 * get_Default_1() const { return ___Default_1; }
	inline ToolboxItemAttribute_t2072845446 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(ToolboxItemAttribute_t2072845446 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_None_2() { return static_cast<int32_t>(offsetof(ToolboxItemAttribute_t2072845446_StaticFields, ___None_2)); }
	inline ToolboxItemAttribute_t2072845446 * get_None_2() const { return ___None_2; }
	inline ToolboxItemAttribute_t2072845446 ** get_address_of_None_2() { return &___None_2; }
	inline void set_None_2(ToolboxItemAttribute_t2072845446 * value)
	{
		___None_2 = value;
		Il2CppCodeGenWriteBarrier((&___None_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOOLBOXITEMATTRIBUTE_T2072845446_H
#ifndef SYSTEMEXCEPTION_T3687712284_H
#define SYSTEMEXCEPTION_T3687712284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t3687712284  : public Exception_t3383010872
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T3687712284_H
#ifndef BASENUMBERCONVERTER_T982962682_H
#define BASENUMBERCONVERTER_T982962682_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BaseNumberConverter
struct  BaseNumberConverter_t982962682  : public TypeConverter_t2001479086
{
public:
	// System.Type System.ComponentModel.BaseNumberConverter::InnerType
	Type_t * ___InnerType_0;

public:
	inline static int32_t get_offset_of_InnerType_0() { return static_cast<int32_t>(offsetof(BaseNumberConverter_t982962682, ___InnerType_0)); }
	inline Type_t * get_InnerType_0() const { return ___InnerType_0; }
	inline Type_t ** get_address_of_InnerType_0() { return &___InnerType_0; }
	inline void set_InnerType_0(Type_t * value)
	{
		___InnerType_0 = value;
		Il2CppCodeGenWriteBarrier((&___InnerType_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASENUMBERCONVERTER_T982962682_H
#ifndef WRAPPEDTYPEDESCRIPTIONPROVIDER_T3355158449_H
#define WRAPPEDTYPEDESCRIPTIONPROVIDER_T3355158449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider
struct  WrappedTypeDescriptionProvider_t3355158449  : public TypeDescriptionProvider_t1714785636
{
public:
	// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::<Wrapped>k__BackingField
	TypeDescriptionProvider_t1714785636 * ___U3CWrappedU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CWrappedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(WrappedTypeDescriptionProvider_t3355158449, ___U3CWrappedU3Ek__BackingField_2)); }
	inline TypeDescriptionProvider_t1714785636 * get_U3CWrappedU3Ek__BackingField_2() const { return ___U3CWrappedU3Ek__BackingField_2; }
	inline TypeDescriptionProvider_t1714785636 ** get_address_of_U3CWrappedU3Ek__BackingField_2() { return &___U3CWrappedU3Ek__BackingField_2; }
	inline void set_U3CWrappedU3Ek__BackingField_2(TypeDescriptionProvider_t1714785636 * value)
	{
		___U3CWrappedU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CWrappedU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRAPPEDTYPEDESCRIPTIONPROVIDER_T3355158449_H
#ifndef TIMESPANCONVERTER_T2334158690_H
#define TIMESPANCONVERTER_T2334158690_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TimeSpanConverter
struct  TimeSpanConverter_t2334158690  : public TypeConverter_t2001479086
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPANCONVERTER_T2334158690_H
#ifndef IMMUTABLEOBJECTATTRIBUTE_T1329569688_H
#define IMMUTABLEOBJECTATTRIBUTE_T1329569688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ImmutableObjectAttribute
struct  ImmutableObjectAttribute_t1329569688  : public Attribute_t4057762188
{
public:
	// System.Boolean System.ComponentModel.ImmutableObjectAttribute::immutable
	bool ___immutable_0;

public:
	inline static int32_t get_offset_of_immutable_0() { return static_cast<int32_t>(offsetof(ImmutableObjectAttribute_t1329569688, ___immutable_0)); }
	inline bool get_immutable_0() const { return ___immutable_0; }
	inline bool* get_address_of_immutable_0() { return &___immutable_0; }
	inline void set_immutable_0(bool value)
	{
		___immutable_0 = value;
	}
};

struct ImmutableObjectAttribute_t1329569688_StaticFields
{
public:
	// System.ComponentModel.ImmutableObjectAttribute System.ComponentModel.ImmutableObjectAttribute::Default
	ImmutableObjectAttribute_t1329569688 * ___Default_1;
	// System.ComponentModel.ImmutableObjectAttribute System.ComponentModel.ImmutableObjectAttribute::No
	ImmutableObjectAttribute_t1329569688 * ___No_2;
	// System.ComponentModel.ImmutableObjectAttribute System.ComponentModel.ImmutableObjectAttribute::Yes
	ImmutableObjectAttribute_t1329569688 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(ImmutableObjectAttribute_t1329569688_StaticFields, ___Default_1)); }
	inline ImmutableObjectAttribute_t1329569688 * get_Default_1() const { return ___Default_1; }
	inline ImmutableObjectAttribute_t1329569688 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(ImmutableObjectAttribute_t1329569688 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(ImmutableObjectAttribute_t1329569688_StaticFields, ___No_2)); }
	inline ImmutableObjectAttribute_t1329569688 * get_No_2() const { return ___No_2; }
	inline ImmutableObjectAttribute_t1329569688 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(ImmutableObjectAttribute_t1329569688 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(ImmutableObjectAttribute_t1329569688_StaticFields, ___Yes_3)); }
	inline ImmutableObjectAttribute_t1329569688 * get_Yes_3() const { return ___Yes_3; }
	inline ImmutableObjectAttribute_t1329569688 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(ImmutableObjectAttribute_t1329569688 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMMUTABLEOBJECTATTRIBUTE_T1329569688_H
#ifndef PASSWORDPROPERTYTEXTATTRIBUTE_T4175288806_H
#define PASSWORDPROPERTYTEXTATTRIBUTE_T4175288806_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PasswordPropertyTextAttribute
struct  PasswordPropertyTextAttribute_t4175288806  : public Attribute_t4057762188
{
public:
	// System.Boolean System.ComponentModel.PasswordPropertyTextAttribute::_password
	bool ____password_3;

public:
	inline static int32_t get_offset_of__password_3() { return static_cast<int32_t>(offsetof(PasswordPropertyTextAttribute_t4175288806, ____password_3)); }
	inline bool get__password_3() const { return ____password_3; }
	inline bool* get_address_of__password_3() { return &____password_3; }
	inline void set__password_3(bool value)
	{
		____password_3 = value;
	}
};

struct PasswordPropertyTextAttribute_t4175288806_StaticFields
{
public:
	// System.ComponentModel.PasswordPropertyTextAttribute System.ComponentModel.PasswordPropertyTextAttribute::Default
	PasswordPropertyTextAttribute_t4175288806 * ___Default_0;
	// System.ComponentModel.PasswordPropertyTextAttribute System.ComponentModel.PasswordPropertyTextAttribute::No
	PasswordPropertyTextAttribute_t4175288806 * ___No_1;
	// System.ComponentModel.PasswordPropertyTextAttribute System.ComponentModel.PasswordPropertyTextAttribute::Yes
	PasswordPropertyTextAttribute_t4175288806 * ___Yes_2;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(PasswordPropertyTextAttribute_t4175288806_StaticFields, ___Default_0)); }
	inline PasswordPropertyTextAttribute_t4175288806 * get_Default_0() const { return ___Default_0; }
	inline PasswordPropertyTextAttribute_t4175288806 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(PasswordPropertyTextAttribute_t4175288806 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}

	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(PasswordPropertyTextAttribute_t4175288806_StaticFields, ___No_1)); }
	inline PasswordPropertyTextAttribute_t4175288806 * get_No_1() const { return ___No_1; }
	inline PasswordPropertyTextAttribute_t4175288806 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(PasswordPropertyTextAttribute_t4175288806 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Yes_2() { return static_cast<int32_t>(offsetof(PasswordPropertyTextAttribute_t4175288806_StaticFields, ___Yes_2)); }
	inline PasswordPropertyTextAttribute_t4175288806 * get_Yes_2() const { return ___Yes_2; }
	inline PasswordPropertyTextAttribute_t4175288806 ** get_address_of_Yes_2() { return &___Yes_2; }
	inline void set_Yes_2(PasswordPropertyTextAttribute_t4175288806 * value)
	{
		___Yes_2 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PASSWORDPROPERTYTEXTATTRIBUTE_T4175288806_H
#ifndef MERGABLEPROPERTYATTRIBUTE_T1387620956_H
#define MERGABLEPROPERTYATTRIBUTE_T1387620956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MergablePropertyAttribute
struct  MergablePropertyAttribute_t1387620956  : public Attribute_t4057762188
{
public:
	// System.Boolean System.ComponentModel.MergablePropertyAttribute::mergable
	bool ___mergable_0;

public:
	inline static int32_t get_offset_of_mergable_0() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t1387620956, ___mergable_0)); }
	inline bool get_mergable_0() const { return ___mergable_0; }
	inline bool* get_address_of_mergable_0() { return &___mergable_0; }
	inline void set_mergable_0(bool value)
	{
		___mergable_0 = value;
	}
};

struct MergablePropertyAttribute_t1387620956_StaticFields
{
public:
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::Default
	MergablePropertyAttribute_t1387620956 * ___Default_1;
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::No
	MergablePropertyAttribute_t1387620956 * ___No_2;
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::Yes
	MergablePropertyAttribute_t1387620956 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t1387620956_StaticFields, ___Default_1)); }
	inline MergablePropertyAttribute_t1387620956 * get_Default_1() const { return ___Default_1; }
	inline MergablePropertyAttribute_t1387620956 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(MergablePropertyAttribute_t1387620956 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t1387620956_StaticFields, ___No_2)); }
	inline MergablePropertyAttribute_t1387620956 * get_No_2() const { return ___No_2; }
	inline MergablePropertyAttribute_t1387620956 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(MergablePropertyAttribute_t1387620956 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t1387620956_StaticFields, ___Yes_3)); }
	inline MergablePropertyAttribute_t1387620956 * get_Yes_3() const { return ___Yes_3; }
	inline MergablePropertyAttribute_t1387620956 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(MergablePropertyAttribute_t1387620956 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MERGABLEPROPERTYATTRIBUTE_T1387620956_H
#ifndef NOTIFYPARENTPROPERTYATTRIBUTE_T516405740_H
#define NOTIFYPARENTPROPERTYATTRIBUTE_T516405740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.NotifyParentPropertyAttribute
struct  NotifyParentPropertyAttribute_t516405740  : public Attribute_t4057762188
{
public:
	// System.Boolean System.ComponentModel.NotifyParentPropertyAttribute::notifyParent
	bool ___notifyParent_0;

public:
	inline static int32_t get_offset_of_notifyParent_0() { return static_cast<int32_t>(offsetof(NotifyParentPropertyAttribute_t516405740, ___notifyParent_0)); }
	inline bool get_notifyParent_0() const { return ___notifyParent_0; }
	inline bool* get_address_of_notifyParent_0() { return &___notifyParent_0; }
	inline void set_notifyParent_0(bool value)
	{
		___notifyParent_0 = value;
	}
};

struct NotifyParentPropertyAttribute_t516405740_StaticFields
{
public:
	// System.ComponentModel.NotifyParentPropertyAttribute System.ComponentModel.NotifyParentPropertyAttribute::Default
	NotifyParentPropertyAttribute_t516405740 * ___Default_1;
	// System.ComponentModel.NotifyParentPropertyAttribute System.ComponentModel.NotifyParentPropertyAttribute::No
	NotifyParentPropertyAttribute_t516405740 * ___No_2;
	// System.ComponentModel.NotifyParentPropertyAttribute System.ComponentModel.NotifyParentPropertyAttribute::Yes
	NotifyParentPropertyAttribute_t516405740 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(NotifyParentPropertyAttribute_t516405740_StaticFields, ___Default_1)); }
	inline NotifyParentPropertyAttribute_t516405740 * get_Default_1() const { return ___Default_1; }
	inline NotifyParentPropertyAttribute_t516405740 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(NotifyParentPropertyAttribute_t516405740 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(NotifyParentPropertyAttribute_t516405740_StaticFields, ___No_2)); }
	inline NotifyParentPropertyAttribute_t516405740 * get_No_2() const { return ___No_2; }
	inline NotifyParentPropertyAttribute_t516405740 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(NotifyParentPropertyAttribute_t516405740 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(NotifyParentPropertyAttribute_t516405740_StaticFields, ___Yes_3)); }
	inline NotifyParentPropertyAttribute_t516405740 * get_Yes_3() const { return ___Yes_3; }
	inline NotifyParentPropertyAttribute_t516405740 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(NotifyParentPropertyAttribute_t516405740 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIFYPARENTPROPERTYATTRIBUTE_T516405740_H
#ifndef NULLABLECONVERTER_T3062560719_H
#define NULLABLECONVERTER_T3062560719_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.NullableConverter
struct  NullableConverter_t3062560719  : public TypeConverter_t2001479086
{
public:
	// System.Type System.ComponentModel.NullableConverter::nullableType
	Type_t * ___nullableType_0;
	// System.Type System.ComponentModel.NullableConverter::underlyingType
	Type_t * ___underlyingType_1;
	// System.ComponentModel.TypeConverter System.ComponentModel.NullableConverter::underlyingTypeConverter
	TypeConverter_t2001479086 * ___underlyingTypeConverter_2;

public:
	inline static int32_t get_offset_of_nullableType_0() { return static_cast<int32_t>(offsetof(NullableConverter_t3062560719, ___nullableType_0)); }
	inline Type_t * get_nullableType_0() const { return ___nullableType_0; }
	inline Type_t ** get_address_of_nullableType_0() { return &___nullableType_0; }
	inline void set_nullableType_0(Type_t * value)
	{
		___nullableType_0 = value;
		Il2CppCodeGenWriteBarrier((&___nullableType_0), value);
	}

	inline static int32_t get_offset_of_underlyingType_1() { return static_cast<int32_t>(offsetof(NullableConverter_t3062560719, ___underlyingType_1)); }
	inline Type_t * get_underlyingType_1() const { return ___underlyingType_1; }
	inline Type_t ** get_address_of_underlyingType_1() { return &___underlyingType_1; }
	inline void set_underlyingType_1(Type_t * value)
	{
		___underlyingType_1 = value;
		Il2CppCodeGenWriteBarrier((&___underlyingType_1), value);
	}

	inline static int32_t get_offset_of_underlyingTypeConverter_2() { return static_cast<int32_t>(offsetof(NullableConverter_t3062560719, ___underlyingTypeConverter_2)); }
	inline TypeConverter_t2001479086 * get_underlyingTypeConverter_2() const { return ___underlyingTypeConverter_2; }
	inline TypeConverter_t2001479086 ** get_address_of_underlyingTypeConverter_2() { return &___underlyingTypeConverter_2; }
	inline void set_underlyingTypeConverter_2(TypeConverter_t2001479086 * value)
	{
		___underlyingTypeConverter_2 = value;
		Il2CppCodeGenWriteBarrier((&___underlyingTypeConverter_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLECONVERTER_T3062560719_H
#ifndef LOCALIZABLEATTRIBUTE_T2452750308_H
#define LOCALIZABLEATTRIBUTE_T2452750308_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LocalizableAttribute
struct  LocalizableAttribute_t2452750308  : public Attribute_t4057762188
{
public:
	// System.Boolean System.ComponentModel.LocalizableAttribute::localizable
	bool ___localizable_0;

public:
	inline static int32_t get_offset_of_localizable_0() { return static_cast<int32_t>(offsetof(LocalizableAttribute_t2452750308, ___localizable_0)); }
	inline bool get_localizable_0() const { return ___localizable_0; }
	inline bool* get_address_of_localizable_0() { return &___localizable_0; }
	inline void set_localizable_0(bool value)
	{
		___localizable_0 = value;
	}
};

struct LocalizableAttribute_t2452750308_StaticFields
{
public:
	// System.ComponentModel.LocalizableAttribute System.ComponentModel.LocalizableAttribute::Default
	LocalizableAttribute_t2452750308 * ___Default_1;
	// System.ComponentModel.LocalizableAttribute System.ComponentModel.LocalizableAttribute::No
	LocalizableAttribute_t2452750308 * ___No_2;
	// System.ComponentModel.LocalizableAttribute System.ComponentModel.LocalizableAttribute::Yes
	LocalizableAttribute_t2452750308 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(LocalizableAttribute_t2452750308_StaticFields, ___Default_1)); }
	inline LocalizableAttribute_t2452750308 * get_Default_1() const { return ___Default_1; }
	inline LocalizableAttribute_t2452750308 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(LocalizableAttribute_t2452750308 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(LocalizableAttribute_t2452750308_StaticFields, ___No_2)); }
	inline LocalizableAttribute_t2452750308 * get_No_2() const { return ___No_2; }
	inline LocalizableAttribute_t2452750308 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(LocalizableAttribute_t2452750308 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(LocalizableAttribute_t2452750308_StaticFields, ___Yes_3)); }
	inline LocalizableAttribute_t2452750308 * get_Yes_3() const { return ___Yes_3; }
	inline LocalizableAttribute_t2452750308 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(LocalizableAttribute_t2452750308 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALIZABLEATTRIBUTE_T2452750308_H
#ifndef PROGRESSCHANGEDEVENTARGS_T2200913891_H
#define PROGRESSCHANGEDEVENTARGS_T2200913891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ProgressChangedEventArgs
struct  ProgressChangedEventArgs_t2200913891  : public EventArgs_t3467505009
{
public:
	// System.Int32 System.ComponentModel.ProgressChangedEventArgs::progress
	int32_t ___progress_1;
	// System.Object System.ComponentModel.ProgressChangedEventArgs::state
	RuntimeObject * ___state_2;

public:
	inline static int32_t get_offset_of_progress_1() { return static_cast<int32_t>(offsetof(ProgressChangedEventArgs_t2200913891, ___progress_1)); }
	inline int32_t get_progress_1() const { return ___progress_1; }
	inline int32_t* get_address_of_progress_1() { return &___progress_1; }
	inline void set_progress_1(int32_t value)
	{
		___progress_1 = value;
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(ProgressChangedEventArgs_t2200913891, ___state_2)); }
	inline RuntimeObject * get_state_2() const { return ___state_2; }
	inline RuntimeObject ** get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(RuntimeObject * value)
	{
		___state_2 = value;
		Il2CppCodeGenWriteBarrier((&___state_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROGRESSCHANGEDEVENTARGS_T2200913891_H
#ifndef PROPERTYCHANGEDEVENTARGS_T174171780_H
#define PROPERTYCHANGEDEVENTARGS_T174171780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyChangedEventArgs
struct  PropertyChangedEventArgs_t174171780  : public EventArgs_t3467505009
{
public:
	// System.String System.ComponentModel.PropertyChangedEventArgs::propertyName
	String_t* ___propertyName_1;

public:
	inline static int32_t get_offset_of_propertyName_1() { return static_cast<int32_t>(offsetof(PropertyChangedEventArgs_t174171780, ___propertyName_1)); }
	inline String_t* get_propertyName_1() const { return ___propertyName_1; }
	inline String_t** get_address_of_propertyName_1() { return &___propertyName_1; }
	inline void set_propertyName_1(String_t* value)
	{
		___propertyName_1 = value;
		Il2CppCodeGenWriteBarrier((&___propertyName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYCHANGEDEVENTARGS_T174171780_H
#ifndef PROPERTYDESCRIPTOR_T1106879253_H
#define PROPERTYDESCRIPTOR_T1106879253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptor
struct  PropertyDescriptor_t1106879253  : public MemberDescriptor_t4285166121
{
public:
	// System.ComponentModel.TypeConverter System.ComponentModel.PropertyDescriptor::converter
	TypeConverter_t2001479086 * ___converter_4;
	// System.Collections.Hashtable System.ComponentModel.PropertyDescriptor::notifiers
	Hashtable_t3133650694 * ___notifiers_5;

public:
	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t1106879253, ___converter_4)); }
	inline TypeConverter_t2001479086 * get_converter_4() const { return ___converter_4; }
	inline TypeConverter_t2001479086 ** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(TypeConverter_t2001479086 * value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier((&___converter_4), value);
	}

	inline static int32_t get_offset_of_notifiers_5() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t1106879253, ___notifiers_5)); }
	inline Hashtable_t3133650694 * get_notifiers_5() const { return ___notifiers_5; }
	inline Hashtable_t3133650694 ** get_address_of_notifiers_5() { return &___notifiers_5; }
	inline void set_notifiers_5(Hashtable_t3133650694 * value)
	{
		___notifiers_5 = value;
		Il2CppCodeGenWriteBarrier((&___notifiers_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTOR_T1106879253_H
#ifndef READONLYATTRIBUTE_T2682526613_H
#define READONLYATTRIBUTE_T2682526613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReadOnlyAttribute
struct  ReadOnlyAttribute_t2682526613  : public Attribute_t4057762188
{
public:
	// System.Boolean System.ComponentModel.ReadOnlyAttribute::read_only
	bool ___read_only_0;

public:
	inline static int32_t get_offset_of_read_only_0() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t2682526613, ___read_only_0)); }
	inline bool get_read_only_0() const { return ___read_only_0; }
	inline bool* get_address_of_read_only_0() { return &___read_only_0; }
	inline void set_read_only_0(bool value)
	{
		___read_only_0 = value;
	}
};

struct ReadOnlyAttribute_t2682526613_StaticFields
{
public:
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::No
	ReadOnlyAttribute_t2682526613 * ___No_1;
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::Yes
	ReadOnlyAttribute_t2682526613 * ___Yes_2;
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::Default
	ReadOnlyAttribute_t2682526613 * ___Default_3;

public:
	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t2682526613_StaticFields, ___No_1)); }
	inline ReadOnlyAttribute_t2682526613 * get_No_1() const { return ___No_1; }
	inline ReadOnlyAttribute_t2682526613 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(ReadOnlyAttribute_t2682526613 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Yes_2() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t2682526613_StaticFields, ___Yes_2)); }
	inline ReadOnlyAttribute_t2682526613 * get_Yes_2() const { return ___Yes_2; }
	inline ReadOnlyAttribute_t2682526613 ** get_address_of_Yes_2() { return &___Yes_2; }
	inline void set_Yes_2(ReadOnlyAttribute_t2682526613 * value)
	{
		___Yes_2 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_2), value);
	}

	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t2682526613_StaticFields, ___Default_3)); }
	inline ReadOnlyAttribute_t2682526613 * get_Default_3() const { return ___Default_3; }
	inline ReadOnlyAttribute_t2682526613 ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(ReadOnlyAttribute_t2682526613 * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((&___Default_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYATTRIBUTE_T2682526613_H
#ifndef LISTBINDABLEATTRIBUTE_T1044692177_H
#define LISTBINDABLEATTRIBUTE_T1044692177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListBindableAttribute
struct  ListBindableAttribute_t1044692177  : public Attribute_t4057762188
{
public:
	// System.Boolean System.ComponentModel.ListBindableAttribute::bindable
	bool ___bindable_3;

public:
	inline static int32_t get_offset_of_bindable_3() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t1044692177, ___bindable_3)); }
	inline bool get_bindable_3() const { return ___bindable_3; }
	inline bool* get_address_of_bindable_3() { return &___bindable_3; }
	inline void set_bindable_3(bool value)
	{
		___bindable_3 = value;
	}
};

struct ListBindableAttribute_t1044692177_StaticFields
{
public:
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::Default
	ListBindableAttribute_t1044692177 * ___Default_0;
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::No
	ListBindableAttribute_t1044692177 * ___No_1;
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::Yes
	ListBindableAttribute_t1044692177 * ___Yes_2;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t1044692177_StaticFields, ___Default_0)); }
	inline ListBindableAttribute_t1044692177 * get_Default_0() const { return ___Default_0; }
	inline ListBindableAttribute_t1044692177 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ListBindableAttribute_t1044692177 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}

	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t1044692177_StaticFields, ___No_1)); }
	inline ListBindableAttribute_t1044692177 * get_No_1() const { return ___No_1; }
	inline ListBindableAttribute_t1044692177 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(ListBindableAttribute_t1044692177 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Yes_2() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t1044692177_StaticFields, ___Yes_2)); }
	inline ListBindableAttribute_t1044692177 * get_Yes_2() const { return ___Yes_2; }
	inline ListBindableAttribute_t1044692177 ** get_address_of_Yes_2() { return &___Yes_2; }
	inline void set_Yes_2(ListBindableAttribute_t1044692177 * value)
	{
		___Yes_2 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTBINDABLEATTRIBUTE_T1044692177_H
#ifndef RECOMMENDEDASCONFIGURABLEATTRIBUTE_T1608875019_H
#define RECOMMENDEDASCONFIGURABLEATTRIBUTE_T1608875019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RecommendedAsConfigurableAttribute
struct  RecommendedAsConfigurableAttribute_t1608875019  : public Attribute_t4057762188
{
public:
	// System.Boolean System.ComponentModel.RecommendedAsConfigurableAttribute::recommendedAsConfigurable
	bool ___recommendedAsConfigurable_0;

public:
	inline static int32_t get_offset_of_recommendedAsConfigurable_0() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t1608875019, ___recommendedAsConfigurable_0)); }
	inline bool get_recommendedAsConfigurable_0() const { return ___recommendedAsConfigurable_0; }
	inline bool* get_address_of_recommendedAsConfigurable_0() { return &___recommendedAsConfigurable_0; }
	inline void set_recommendedAsConfigurable_0(bool value)
	{
		___recommendedAsConfigurable_0 = value;
	}
};

struct RecommendedAsConfigurableAttribute_t1608875019_StaticFields
{
public:
	// System.ComponentModel.RecommendedAsConfigurableAttribute System.ComponentModel.RecommendedAsConfigurableAttribute::Default
	RecommendedAsConfigurableAttribute_t1608875019 * ___Default_1;
	// System.ComponentModel.RecommendedAsConfigurableAttribute System.ComponentModel.RecommendedAsConfigurableAttribute::No
	RecommendedAsConfigurableAttribute_t1608875019 * ___No_2;
	// System.ComponentModel.RecommendedAsConfigurableAttribute System.ComponentModel.RecommendedAsConfigurableAttribute::Yes
	RecommendedAsConfigurableAttribute_t1608875019 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t1608875019_StaticFields, ___Default_1)); }
	inline RecommendedAsConfigurableAttribute_t1608875019 * get_Default_1() const { return ___Default_1; }
	inline RecommendedAsConfigurableAttribute_t1608875019 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(RecommendedAsConfigurableAttribute_t1608875019 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t1608875019_StaticFields, ___No_2)); }
	inline RecommendedAsConfigurableAttribute_t1608875019 * get_No_2() const { return ___No_2; }
	inline RecommendedAsConfigurableAttribute_t1608875019 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(RecommendedAsConfigurableAttribute_t1608875019 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t1608875019_StaticFields, ___Yes_3)); }
	inline RecommendedAsConfigurableAttribute_t1608875019 * get_Yes_3() const { return ___Yes_3; }
	inline RecommendedAsConfigurableAttribute_t1608875019 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(RecommendedAsConfigurableAttribute_t1608875019 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECOMMENDEDASCONFIGURABLEATTRIBUTE_T1608875019_H
#ifndef LICENSEPROVIDERATTRIBUTE_T4140358910_H
#define LICENSEPROVIDERATTRIBUTE_T4140358910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseProviderAttribute
struct  LicenseProviderAttribute_t4140358910  : public Attribute_t4057762188
{
public:
	// System.Type System.ComponentModel.LicenseProviderAttribute::Provider
	Type_t * ___Provider_0;

public:
	inline static int32_t get_offset_of_Provider_0() { return static_cast<int32_t>(offsetof(LicenseProviderAttribute_t4140358910, ___Provider_0)); }
	inline Type_t * get_Provider_0() const { return ___Provider_0; }
	inline Type_t ** get_address_of_Provider_0() { return &___Provider_0; }
	inline void set_Provider_0(Type_t * value)
	{
		___Provider_0 = value;
		Il2CppCodeGenWriteBarrier((&___Provider_0), value);
	}
};

struct LicenseProviderAttribute_t4140358910_StaticFields
{
public:
	// System.ComponentModel.LicenseProviderAttribute System.ComponentModel.LicenseProviderAttribute::Default
	LicenseProviderAttribute_t4140358910 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(LicenseProviderAttribute_t4140358910_StaticFields, ___Default_1)); }
	inline LicenseProviderAttribute_t4140358910 * get_Default_1() const { return ___Default_1; }
	inline LicenseProviderAttribute_t4140358910 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(LicenseProviderAttribute_t4140358910 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSEPROVIDERATTRIBUTE_T4140358910_H
#ifndef REFRESHEVENTARGS_T4209660557_H
#define REFRESHEVENTARGS_T4209660557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RefreshEventArgs
struct  RefreshEventArgs_t4209660557  : public EventArgs_t3467505009
{
public:
	// System.Object System.ComponentModel.RefreshEventArgs::component
	RuntimeObject * ___component_1;
	// System.Type System.ComponentModel.RefreshEventArgs::type
	Type_t * ___type_2;

public:
	inline static int32_t get_offset_of_component_1() { return static_cast<int32_t>(offsetof(RefreshEventArgs_t4209660557, ___component_1)); }
	inline RuntimeObject * get_component_1() const { return ___component_1; }
	inline RuntimeObject ** get_address_of_component_1() { return &___component_1; }
	inline void set_component_1(RuntimeObject * value)
	{
		___component_1 = value;
		Il2CppCodeGenWriteBarrier((&___component_1), value);
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(RefreshEventArgs_t4209660557, ___type_2)); }
	inline Type_t * get_type_2() const { return ___type_2; }
	inline Type_t ** get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(Type_t * value)
	{
		___type_2 = value;
		Il2CppCodeGenWriteBarrier((&___type_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFRESHEVENTARGS_T4209660557_H
#ifndef LICFILELICENSE_T1036648628_H
#define LICFILELICENSE_T1036648628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicFileLicense
struct  LicFileLicense_t1036648628  : public License_t421640234
{
public:
	// System.String System.ComponentModel.LicFileLicense::_key
	String_t* ____key_0;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(LicFileLicense_t1036648628, ____key_0)); }
	inline String_t* get__key_0() const { return ____key_0; }
	inline String_t** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(String_t* value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((&____key_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICFILELICENSE_T1036648628_H
#ifndef LICFILELICENSEPROVIDER_T2265728714_H
#define LICFILELICENSEPROVIDER_T2265728714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicFileLicenseProvider
struct  LicFileLicenseProvider_t2265728714  : public LicenseProvider_t4154406734
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICFILELICENSEPROVIDER_T2265728714_H
#ifndef STRINGCONVERTER_T887781209_H
#define STRINGCONVERTER_T887781209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.StringConverter
struct  StringConverter_t887781209  : public TypeConverter_t2001479086
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCONVERTER_T887781209_H
#ifndef REFERENCECONVERTER_T335890391_H
#define REFERENCECONVERTER_T335890391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReferenceConverter
struct  ReferenceConverter_t335890391  : public TypeConverter_t2001479086
{
public:
	// System.Type System.ComponentModel.ReferenceConverter::reference_type
	Type_t * ___reference_type_0;

public:
	inline static int32_t get_offset_of_reference_type_0() { return static_cast<int32_t>(offsetof(ReferenceConverter_t335890391, ___reference_type_0)); }
	inline Type_t * get_reference_type_0() const { return ___reference_type_0; }
	inline Type_t ** get_address_of_reference_type_0() { return &___reference_type_0; }
	inline void set_reference_type_0(Type_t * value)
	{
		___reference_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___reference_type_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCECONVERTER_T335890391_H
#ifndef MULTILINESTRINGCONVERTER_T1641729073_H
#define MULTILINESTRINGCONVERTER_T1641729073_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MultilineStringConverter
struct  MultilineStringConverter_t1641729073  : public TypeConverter_t2001479086
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTILINESTRINGCONVERTER_T1641729073_H
#ifndef SOCKETSHUTDOWN_T932775079_H
#define SOCKETSHUTDOWN_T932775079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketShutdown
struct  SocketShutdown_t932775079 
{
public:
	// System.Int32 System.Net.Sockets.SocketShutdown::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SocketShutdown_t932775079, ___value___1)); }
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
#endif // SOCKETSHUTDOWN_T932775079_H
#ifndef SOCKETOPTIONNAME_T3690498778_H
#define SOCKETOPTIONNAME_T3690498778_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketOptionName
struct  SocketOptionName_t3690498778 
{
public:
	// System.Int32 System.Net.Sockets.SocketOptionName::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SocketOptionName_t3690498778, ___value___1)); }
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
#endif // SOCKETOPTIONNAME_T3690498778_H
#ifndef SOCKETOPTIONLEVEL_T2342624406_H
#define SOCKETOPTIONLEVEL_T2342624406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketOptionLevel
struct  SocketOptionLevel_t2342624406 
{
public:
	// System.Int32 System.Net.Sockets.SocketOptionLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SocketOptionLevel_t2342624406, ___value___1)); }
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
#endif // SOCKETOPTIONLEVEL_T2342624406_H
#ifndef SOCKETTYPE_T3757855023_H
#define SOCKETTYPE_T3757855023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketType
struct  SocketType_t3757855023 
{
public:
	// System.Int32 System.Net.Sockets.SocketType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SocketType_t3757855023, ___value___1)); }
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
#endif // SOCKETTYPE_T3757855023_H
#ifndef SOCKETFLAGS_T229667241_H
#define SOCKETFLAGS_T229667241_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketFlags
struct  SocketFlags_t229667241 
{
public:
	// System.Int32 System.Net.Sockets.SocketFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SocketFlags_t229667241, ___value___1)); }
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
#endif // SOCKETFLAGS_T229667241_H
#ifndef SINGLECONVERTER_T893801398_H
#define SINGLECONVERTER_T893801398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.SingleConverter
struct  SingleConverter_t893801398  : public BaseNumberConverter_t982962682
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLECONVERTER_T893801398_H
#ifndef LICENSEUSAGEMODE_T187440784_H
#define LICENSEUSAGEMODE_T187440784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseUsageMode
struct  LicenseUsageMode_t187440784 
{
public:
	// System.Int32 System.ComponentModel.LicenseUsageMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LicenseUsageMode_t187440784, ___value___1)); }
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
#endif // LICENSEUSAGEMODE_T187440784_H
#ifndef SOCKETERROR_T620004331_H
#define SOCKETERROR_T620004331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketError
struct  SocketError_t620004331 
{
public:
	// System.Int32 System.Net.Sockets.SocketError::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SocketError_t620004331, ___value___1)); }
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
#endif // SOCKETERROR_T620004331_H
#ifndef LICENSEEXCEPTION_T3720287574_H
#define LICENSEEXCEPTION_T3720287574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseException
struct  LicenseException_t3720287574  : public SystemException_t3687712284
{
public:
	// System.Type System.ComponentModel.LicenseException::type
	Type_t * ___type_11;

public:
	inline static int32_t get_offset_of_type_11() { return static_cast<int32_t>(offsetof(LicenseException_t3720287574, ___type_11)); }
	inline Type_t * get_type_11() const { return ___type_11; }
	inline Type_t ** get_address_of_type_11() { return &___type_11; }
	inline void set_type_11(Type_t * value)
	{
		___type_11 = value;
		Il2CppCodeGenWriteBarrier((&___type_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSEEXCEPTION_T3720287574_H
#ifndef INT64CONVERTER_T309682862_H
#define INT64CONVERTER_T309682862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int64Converter
struct  Int64Converter_t309682862  : public BaseNumberConverter_t982962682
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64CONVERTER_T309682862_H
#ifndef INT32CONVERTER_T1185672859_H
#define INT32CONVERTER_T1185672859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int32Converter
struct  Int32Converter_t1185672859  : public BaseNumberConverter_t982962682
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32CONVERTER_T1185672859_H
#ifndef EXTERNALEXCEPTION_T1426283347_H
#define EXTERNALEXCEPTION_T1426283347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t1426283347  : public SystemException_t3687712284
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTERNALEXCEPTION_T1426283347_H
#ifndef INT16CONVERTER_T2217135310_H
#define INT16CONVERTER_T2217135310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int16Converter
struct  Int16Converter_t2217135310  : public BaseNumberConverter_t982962682
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16CONVERTER_T2217135310_H
#ifndef ARGUMENTEXCEPTION_T3791057690_H
#define ARGUMENTEXCEPTION_T3791057690_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t3791057690  : public SystemException_t3687712284
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t3791057690, ___param_name_12)); }
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
#endif // ARGUMENTEXCEPTION_T3791057690_H
#ifndef SELECTMODE_T203572218_H
#define SELECTMODE_T203572218_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SelectMode
struct  SelectMode_t203572218 
{
public:
	// System.Int32 System.Net.Sockets.SelectMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectMode_t203572218, ___value___1)); }
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
#endif // SELECTMODE_T203572218_H
#ifndef SSLPOLICYERRORS_T969772011_H
#define SSLPOLICYERRORS_T969772011_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.SslPolicyErrors
struct  SslPolicyErrors_t969772011 
{
public:
	// System.Int32 System.Net.Security.SslPolicyErrors::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SslPolicyErrors_t969772011, ___value___1)); }
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
#endif // SSLPOLICYERRORS_T969772011_H
#ifndef UINT16CONVERTER_T8972920_H
#define UINT16CONVERTER_T8972920_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.UInt16Converter
struct  UInt16Converter_t8972920  : public BaseNumberConverter_t982962682
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16CONVERTER_T8972920_H
#ifndef TOOLBOXITEMFILTERTYPE_T4182929018_H
#define TOOLBOXITEMFILTERTYPE_T4182929018_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ToolboxItemFilterType
struct  ToolboxItemFilterType_t4182929018 
{
public:
	// System.Int32 System.ComponentModel.ToolboxItemFilterType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ToolboxItemFilterType_t4182929018, ___value___1)); }
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
#endif // TOOLBOXITEMFILTERTYPE_T4182929018_H
#ifndef SBYTECONVERTER_T3352699380_H
#define SBYTECONVERTER_T3352699380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.SByteConverter
struct  SByteConverter_t3352699380  : public BaseNumberConverter_t982962682
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTECONVERTER_T3352699380_H
#ifndef RUNWORKERCOMPLETEDEVENTARGS_T3786014255_H
#define RUNWORKERCOMPLETEDEVENTARGS_T3786014255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RunWorkerCompletedEventArgs
struct  RunWorkerCompletedEventArgs_t3786014255  : public AsyncCompletedEventArgs_t2745088064
{
public:
	// System.Object System.ComponentModel.RunWorkerCompletedEventArgs::result
	RuntimeObject * ___result_4;

public:
	inline static int32_t get_offset_of_result_4() { return static_cast<int32_t>(offsetof(RunWorkerCompletedEventArgs_t3786014255, ___result_4)); }
	inline RuntimeObject * get_result_4() const { return ___result_4; }
	inline RuntimeObject ** get_address_of_result_4() { return &___result_4; }
	inline void set_result_4(RuntimeObject * value)
	{
		___result_4 = value;
		Il2CppCodeGenWriteBarrier((&___result_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNWORKERCOMPLETEDEVENTARGS_T3786014255_H
#ifndef REFRESHPROPERTIES_T1336302741_H
#define REFRESHPROPERTIES_T1336302741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RefreshProperties
struct  RefreshProperties_t1336302741 
{
public:
	// System.Int32 System.ComponentModel.RefreshProperties::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RefreshProperties_t1336302741, ___value___1)); }
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
#endif // REFRESHPROPERTIES_T1336302741_H
#ifndef REFLECTIONPROPERTYDESCRIPTOR_T2666492849_H
#define REFLECTIONPROPERTYDESCRIPTOR_T2666492849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReflectionPropertyDescriptor
struct  ReflectionPropertyDescriptor_t2666492849  : public PropertyDescriptor_t1106879253
{
public:
	// System.Reflection.PropertyInfo System.ComponentModel.ReflectionPropertyDescriptor::_member
	PropertyInfo_t * ____member_6;
	// System.Type System.ComponentModel.ReflectionPropertyDescriptor::_componentType
	Type_t * ____componentType_7;
	// System.Type System.ComponentModel.ReflectionPropertyDescriptor::_propertyType
	Type_t * ____propertyType_8;
	// System.Reflection.PropertyInfo System.ComponentModel.ReflectionPropertyDescriptor::getter
	PropertyInfo_t * ___getter_9;
	// System.Reflection.PropertyInfo System.ComponentModel.ReflectionPropertyDescriptor::setter
	PropertyInfo_t * ___setter_10;
	// System.Boolean System.ComponentModel.ReflectionPropertyDescriptor::accessors_inited
	bool ___accessors_inited_11;

public:
	inline static int32_t get_offset_of__member_6() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t2666492849, ____member_6)); }
	inline PropertyInfo_t * get__member_6() const { return ____member_6; }
	inline PropertyInfo_t ** get_address_of__member_6() { return &____member_6; }
	inline void set__member_6(PropertyInfo_t * value)
	{
		____member_6 = value;
		Il2CppCodeGenWriteBarrier((&____member_6), value);
	}

	inline static int32_t get_offset_of__componentType_7() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t2666492849, ____componentType_7)); }
	inline Type_t * get__componentType_7() const { return ____componentType_7; }
	inline Type_t ** get_address_of__componentType_7() { return &____componentType_7; }
	inline void set__componentType_7(Type_t * value)
	{
		____componentType_7 = value;
		Il2CppCodeGenWriteBarrier((&____componentType_7), value);
	}

	inline static int32_t get_offset_of__propertyType_8() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t2666492849, ____propertyType_8)); }
	inline Type_t * get__propertyType_8() const { return ____propertyType_8; }
	inline Type_t ** get_address_of__propertyType_8() { return &____propertyType_8; }
	inline void set__propertyType_8(Type_t * value)
	{
		____propertyType_8 = value;
		Il2CppCodeGenWriteBarrier((&____propertyType_8), value);
	}

	inline static int32_t get_offset_of_getter_9() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t2666492849, ___getter_9)); }
	inline PropertyInfo_t * get_getter_9() const { return ___getter_9; }
	inline PropertyInfo_t ** get_address_of_getter_9() { return &___getter_9; }
	inline void set_getter_9(PropertyInfo_t * value)
	{
		___getter_9 = value;
		Il2CppCodeGenWriteBarrier((&___getter_9), value);
	}

	inline static int32_t get_offset_of_setter_10() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t2666492849, ___setter_10)); }
	inline PropertyInfo_t * get_setter_10() const { return ___setter_10; }
	inline PropertyInfo_t ** get_address_of_setter_10() { return &___setter_10; }
	inline void set_setter_10(PropertyInfo_t * value)
	{
		___setter_10 = value;
		Il2CppCodeGenWriteBarrier((&___setter_10), value);
	}

	inline static int32_t get_offset_of_accessors_inited_11() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t2666492849, ___accessors_inited_11)); }
	inline bool get_accessors_inited_11() const { return ___accessors_inited_11; }
	inline bool* get_address_of_accessors_inited_11() { return &___accessors_inited_11; }
	inline void set_accessors_inited_11(bool value)
	{
		___accessors_inited_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONPROPERTYDESCRIPTOR_T2666492849_H
#ifndef REFLECTIONEVENTDESCRIPTOR_T2983760607_H
#define REFLECTIONEVENTDESCRIPTOR_T2983760607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReflectionEventDescriptor
struct  ReflectionEventDescriptor_t2983760607  : public EventDescriptor_t2366424953
{
public:
	// System.Type System.ComponentModel.ReflectionEventDescriptor::_eventType
	Type_t * ____eventType_4;
	// System.Type System.ComponentModel.ReflectionEventDescriptor::_componentType
	Type_t * ____componentType_5;
	// System.Reflection.EventInfo System.ComponentModel.ReflectionEventDescriptor::_eventInfo
	EventInfo_t * ____eventInfo_6;
	// System.Reflection.MethodInfo System.ComponentModel.ReflectionEventDescriptor::add_method
	MethodInfo_t * ___add_method_7;
	// System.Reflection.MethodInfo System.ComponentModel.ReflectionEventDescriptor::remove_method
	MethodInfo_t * ___remove_method_8;

public:
	inline static int32_t get_offset_of__eventType_4() { return static_cast<int32_t>(offsetof(ReflectionEventDescriptor_t2983760607, ____eventType_4)); }
	inline Type_t * get__eventType_4() const { return ____eventType_4; }
	inline Type_t ** get_address_of__eventType_4() { return &____eventType_4; }
	inline void set__eventType_4(Type_t * value)
	{
		____eventType_4 = value;
		Il2CppCodeGenWriteBarrier((&____eventType_4), value);
	}

	inline static int32_t get_offset_of__componentType_5() { return static_cast<int32_t>(offsetof(ReflectionEventDescriptor_t2983760607, ____componentType_5)); }
	inline Type_t * get__componentType_5() const { return ____componentType_5; }
	inline Type_t ** get_address_of__componentType_5() { return &____componentType_5; }
	inline void set__componentType_5(Type_t * value)
	{
		____componentType_5 = value;
		Il2CppCodeGenWriteBarrier((&____componentType_5), value);
	}

	inline static int32_t get_offset_of__eventInfo_6() { return static_cast<int32_t>(offsetof(ReflectionEventDescriptor_t2983760607, ____eventInfo_6)); }
	inline EventInfo_t * get__eventInfo_6() const { return ____eventInfo_6; }
	inline EventInfo_t ** get_address_of__eventInfo_6() { return &____eventInfo_6; }
	inline void set__eventInfo_6(EventInfo_t * value)
	{
		____eventInfo_6 = value;
		Il2CppCodeGenWriteBarrier((&____eventInfo_6), value);
	}

	inline static int32_t get_offset_of_add_method_7() { return static_cast<int32_t>(offsetof(ReflectionEventDescriptor_t2983760607, ___add_method_7)); }
	inline MethodInfo_t * get_add_method_7() const { return ___add_method_7; }
	inline MethodInfo_t ** get_address_of_add_method_7() { return &___add_method_7; }
	inline void set_add_method_7(MethodInfo_t * value)
	{
		___add_method_7 = value;
		Il2CppCodeGenWriteBarrier((&___add_method_7), value);
	}

	inline static int32_t get_offset_of_remove_method_8() { return static_cast<int32_t>(offsetof(ReflectionEventDescriptor_t2983760607, ___remove_method_8)); }
	inline MethodInfo_t * get_remove_method_8() const { return ___remove_method_8; }
	inline MethodInfo_t ** get_address_of_remove_method_8() { return &___remove_method_8; }
	inline void set_remove_method_8(MethodInfo_t * value)
	{
		___remove_method_8 = value;
		Il2CppCodeGenWriteBarrier((&___remove_method_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONEVENTDESCRIPTOR_T2983760607_H
#ifndef PROTOCOLTYPE_T1114270032_H
#define PROTOCOLTYPE_T1114270032_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.ProtocolType
struct  ProtocolType_t1114270032 
{
public:
	// System.Int32 System.Net.Sockets.ProtocolType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ProtocolType_t1114270032, ___value___1)); }
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
#endif // PROTOCOLTYPE_T1114270032_H
#ifndef UINT32CONVERTER_T485048235_H
#define UINT32CONVERTER_T485048235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.UInt32Converter
struct  UInt32Converter_t485048235  : public BaseNumberConverter_t982962682
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32CONVERTER_T485048235_H
#ifndef SIMPLEPROPERTYDESCRIPTOR_T2406049043_H
#define SIMPLEPROPERTYDESCRIPTOR_T2406049043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter/SimplePropertyDescriptor
struct  SimplePropertyDescriptor_t2406049043  : public PropertyDescriptor_t1106879253
{
public:
	// System.Type System.ComponentModel.TypeConverter/SimplePropertyDescriptor::componentType
	Type_t * ___componentType_6;
	// System.Type System.ComponentModel.TypeConverter/SimplePropertyDescriptor::propertyType
	Type_t * ___propertyType_7;

public:
	inline static int32_t get_offset_of_componentType_6() { return static_cast<int32_t>(offsetof(SimplePropertyDescriptor_t2406049043, ___componentType_6)); }
	inline Type_t * get_componentType_6() const { return ___componentType_6; }
	inline Type_t ** get_address_of_componentType_6() { return &___componentType_6; }
	inline void set_componentType_6(Type_t * value)
	{
		___componentType_6 = value;
		Il2CppCodeGenWriteBarrier((&___componentType_6), value);
	}

	inline static int32_t get_offset_of_propertyType_7() { return static_cast<int32_t>(offsetof(SimplePropertyDescriptor_t2406049043, ___propertyType_7)); }
	inline Type_t * get_propertyType_7() const { return ___propertyType_7; }
	inline Type_t ** get_address_of_propertyType_7() { return &___propertyType_7; }
	inline void set_propertyType_7(Type_t * value)
	{
		___propertyType_7 = value;
		Il2CppCodeGenWriteBarrier((&___propertyType_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEPROPERTYDESCRIPTOR_T2406049043_H
#ifndef LISTSORTDIRECTION_T585248640_H
#define LISTSORTDIRECTION_T585248640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListSortDirection
struct  ListSortDirection_t585248640 
{
public:
	// System.Int32 System.ComponentModel.ListSortDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ListSortDirection_t585248640, ___value___1)); }
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
#endif // LISTSORTDIRECTION_T585248640_H
#ifndef AUTHENTICATIONLEVEL_T517901572_H
#define AUTHENTICATIONLEVEL_T517901572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.AuthenticationLevel
struct  AuthenticationLevel_t517901572 
{
public:
	// System.Int32 System.Net.Security.AuthenticationLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AuthenticationLevel_t517901572, ___value___1)); }
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
#endif // AUTHENTICATIONLEVEL_T517901572_H
#ifndef ADDRESSFAMILY_T1990452305_H
#define ADDRESSFAMILY_T1990452305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.AddressFamily
struct  AddressFamily_t1990452305 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AddressFamily_t1990452305, ___value___1)); }
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
#endif // ADDRESSFAMILY_T1990452305_H
#ifndef LISTCHANGEDTYPE_T1786206868_H
#define LISTCHANGEDTYPE_T1786206868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListChangedType
struct  ListChangedType_t1786206868 
{
public:
	// System.Int32 System.ComponentModel.ListChangedType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ListChangedType_t1786206868, ___value___1)); }
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
#endif // LISTCHANGEDTYPE_T1786206868_H
#ifndef UINT64CONVERTER_T948338202_H
#define UINT64CONVERTER_T948338202_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.UInt64Converter
struct  UInt64Converter_t948338202  : public BaseNumberConverter_t982962682
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64CONVERTER_T948338202_H
#ifndef LISTCHANGEDEVENTARGS_T2007542758_H
#define LISTCHANGEDEVENTARGS_T2007542758_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListChangedEventArgs
struct  ListChangedEventArgs_t2007542758  : public EventArgs_t3467505009
{
public:
	// System.ComponentModel.ListChangedType System.ComponentModel.ListChangedEventArgs::changedType
	int32_t ___changedType_1;
	// System.Int32 System.ComponentModel.ListChangedEventArgs::oldIndex
	int32_t ___oldIndex_2;
	// System.Int32 System.ComponentModel.ListChangedEventArgs::newIndex
	int32_t ___newIndex_3;
	// System.ComponentModel.PropertyDescriptor System.ComponentModel.ListChangedEventArgs::propDesc
	PropertyDescriptor_t1106879253 * ___propDesc_4;

public:
	inline static int32_t get_offset_of_changedType_1() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t2007542758, ___changedType_1)); }
	inline int32_t get_changedType_1() const { return ___changedType_1; }
	inline int32_t* get_address_of_changedType_1() { return &___changedType_1; }
	inline void set_changedType_1(int32_t value)
	{
		___changedType_1 = value;
	}

	inline static int32_t get_offset_of_oldIndex_2() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t2007542758, ___oldIndex_2)); }
	inline int32_t get_oldIndex_2() const { return ___oldIndex_2; }
	inline int32_t* get_address_of_oldIndex_2() { return &___oldIndex_2; }
	inline void set_oldIndex_2(int32_t value)
	{
		___oldIndex_2 = value;
	}

	inline static int32_t get_offset_of_newIndex_3() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t2007542758, ___newIndex_3)); }
	inline int32_t get_newIndex_3() const { return ___newIndex_3; }
	inline int32_t* get_address_of_newIndex_3() { return &___newIndex_3; }
	inline void set_newIndex_3(int32_t value)
	{
		___newIndex_3 = value;
	}

	inline static int32_t get_offset_of_propDesc_4() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t2007542758, ___propDesc_4)); }
	inline PropertyDescriptor_t1106879253 * get_propDesc_4() const { return ___propDesc_4; }
	inline PropertyDescriptor_t1106879253 ** get_address_of_propDesc_4() { return &___propDesc_4; }
	inline void set_propDesc_4(PropertyDescriptor_t1106879253 * value)
	{
		___propDesc_4 = value;
		Il2CppCodeGenWriteBarrier((&___propDesc_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTCHANGEDEVENTARGS_T2007542758_H
#ifndef WIN32EXCEPTION_T2504706595_H
#define WIN32EXCEPTION_T2504706595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Win32Exception
struct  Win32Exception_t2504706595  : public ExternalException_t1426283347
{
public:
	// System.Int32 System.ComponentModel.Win32Exception::native_error_code
	int32_t ___native_error_code_11;

public:
	inline static int32_t get_offset_of_native_error_code_11() { return static_cast<int32_t>(offsetof(Win32Exception_t2504706595, ___native_error_code_11)); }
	inline int32_t get_native_error_code_11() const { return ___native_error_code_11; }
	inline int32_t* get_address_of_native_error_code_11() { return &___native_error_code_11; }
	inline void set_native_error_code_11(int32_t value)
	{
		___native_error_code_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32EXCEPTION_T2504706595_H
#ifndef REFRESHPROPERTIESATTRIBUTE_T3650820490_H
#define REFRESHPROPERTIESATTRIBUTE_T3650820490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RefreshPropertiesAttribute
struct  RefreshPropertiesAttribute_t3650820490  : public Attribute_t4057762188
{
public:
	// System.ComponentModel.RefreshProperties System.ComponentModel.RefreshPropertiesAttribute::refresh
	int32_t ___refresh_0;

public:
	inline static int32_t get_offset_of_refresh_0() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t3650820490, ___refresh_0)); }
	inline int32_t get_refresh_0() const { return ___refresh_0; }
	inline int32_t* get_address_of_refresh_0() { return &___refresh_0; }
	inline void set_refresh_0(int32_t value)
	{
		___refresh_0 = value;
	}
};

struct RefreshPropertiesAttribute_t3650820490_StaticFields
{
public:
	// System.ComponentModel.RefreshPropertiesAttribute System.ComponentModel.RefreshPropertiesAttribute::All
	RefreshPropertiesAttribute_t3650820490 * ___All_1;
	// System.ComponentModel.RefreshPropertiesAttribute System.ComponentModel.RefreshPropertiesAttribute::Default
	RefreshPropertiesAttribute_t3650820490 * ___Default_2;
	// System.ComponentModel.RefreshPropertiesAttribute System.ComponentModel.RefreshPropertiesAttribute::Repaint
	RefreshPropertiesAttribute_t3650820490 * ___Repaint_3;

public:
	inline static int32_t get_offset_of_All_1() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t3650820490_StaticFields, ___All_1)); }
	inline RefreshPropertiesAttribute_t3650820490 * get_All_1() const { return ___All_1; }
	inline RefreshPropertiesAttribute_t3650820490 ** get_address_of_All_1() { return &___All_1; }
	inline void set_All_1(RefreshPropertiesAttribute_t3650820490 * value)
	{
		___All_1 = value;
		Il2CppCodeGenWriteBarrier((&___All_1), value);
	}

	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t3650820490_StaticFields, ___Default_2)); }
	inline RefreshPropertiesAttribute_t3650820490 * get_Default_2() const { return ___Default_2; }
	inline RefreshPropertiesAttribute_t3650820490 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(RefreshPropertiesAttribute_t3650820490 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier((&___Default_2), value);
	}

	inline static int32_t get_offset_of_Repaint_3() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t3650820490_StaticFields, ___Repaint_3)); }
	inline RefreshPropertiesAttribute_t3650820490 * get_Repaint_3() const { return ___Repaint_3; }
	inline RefreshPropertiesAttribute_t3650820490 ** get_address_of_Repaint_3() { return &___Repaint_3; }
	inline void set_Repaint_3(RefreshPropertiesAttribute_t3650820490 * value)
	{
		___Repaint_3 = value;
		Il2CppCodeGenWriteBarrier((&___Repaint_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFRESHPROPERTIESATTRIBUTE_T3650820490_H
#ifndef INVALIDENUMARGUMENTEXCEPTION_T1096832025_H
#define INVALIDENUMARGUMENTEXCEPTION_T1096832025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InvalidEnumArgumentException
struct  InvalidEnumArgumentException_t1096832025  : public ArgumentException_t3791057690
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDENUMARGUMENTEXCEPTION_T1096832025_H
#ifndef LISTSORTDESCRIPTION_T332394692_H
#define LISTSORTDESCRIPTION_T332394692_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListSortDescription
struct  ListSortDescription_t332394692  : public RuntimeObject
{
public:
	// System.ComponentModel.PropertyDescriptor System.ComponentModel.ListSortDescription::propertyDescriptor
	PropertyDescriptor_t1106879253 * ___propertyDescriptor_0;
	// System.ComponentModel.ListSortDirection System.ComponentModel.ListSortDescription::sortDirection
	int32_t ___sortDirection_1;

public:
	inline static int32_t get_offset_of_propertyDescriptor_0() { return static_cast<int32_t>(offsetof(ListSortDescription_t332394692, ___propertyDescriptor_0)); }
	inline PropertyDescriptor_t1106879253 * get_propertyDescriptor_0() const { return ___propertyDescriptor_0; }
	inline PropertyDescriptor_t1106879253 ** get_address_of_propertyDescriptor_0() { return &___propertyDescriptor_0; }
	inline void set_propertyDescriptor_0(PropertyDescriptor_t1106879253 * value)
	{
		___propertyDescriptor_0 = value;
		Il2CppCodeGenWriteBarrier((&___propertyDescriptor_0), value);
	}

	inline static int32_t get_offset_of_sortDirection_1() { return static_cast<int32_t>(offsetof(ListSortDescription_t332394692, ___sortDirection_1)); }
	inline int32_t get_sortDirection_1() const { return ___sortDirection_1; }
	inline int32_t* get_address_of_sortDirection_1() { return &___sortDirection_1; }
	inline void set_sortDirection_1(int32_t value)
	{
		___sortDirection_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTSORTDESCRIPTION_T332394692_H
#ifndef TOOLBOXITEMFILTERATTRIBUTE_T606232267_H
#define TOOLBOXITEMFILTERATTRIBUTE_T606232267_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ToolboxItemFilterAttribute
struct  ToolboxItemFilterAttribute_t606232267  : public Attribute_t4057762188
{
public:
	// System.String System.ComponentModel.ToolboxItemFilterAttribute::Filter
	String_t* ___Filter_0;
	// System.ComponentModel.ToolboxItemFilterType System.ComponentModel.ToolboxItemFilterAttribute::ItemFilterType
	int32_t ___ItemFilterType_1;

public:
	inline static int32_t get_offset_of_Filter_0() { return static_cast<int32_t>(offsetof(ToolboxItemFilterAttribute_t606232267, ___Filter_0)); }
	inline String_t* get_Filter_0() const { return ___Filter_0; }
	inline String_t** get_address_of_Filter_0() { return &___Filter_0; }
	inline void set_Filter_0(String_t* value)
	{
		___Filter_0 = value;
		Il2CppCodeGenWriteBarrier((&___Filter_0), value);
	}

	inline static int32_t get_offset_of_ItemFilterType_1() { return static_cast<int32_t>(offsetof(ToolboxItemFilterAttribute_t606232267, ___ItemFilterType_1)); }
	inline int32_t get_ItemFilterType_1() const { return ___ItemFilterType_1; }
	inline int32_t* get_address_of_ItemFilterType_1() { return &___ItemFilterType_1; }
	inline void set_ItemFilterType_1(int32_t value)
	{
		___ItemFilterType_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOOLBOXITEMFILTERATTRIBUTE_T606232267_H
#ifndef SOCKET_T916439903_H
#define SOCKET_T916439903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.Socket
struct  Socket_t916439903  : public RuntimeObject
{
public:
	// System.Collections.Queue System.Net.Sockets.Socket::readQ
	Queue_t2016903012 * ___readQ_0;
	// System.Collections.Queue System.Net.Sockets.Socket::writeQ
	Queue_t2016903012 * ___writeQ_1;
	// System.Boolean System.Net.Sockets.Socket::islistening
	bool ___islistening_2;
	// System.Boolean System.Net.Sockets.Socket::useoverlappedIO
	bool ___useoverlappedIO_3;
	// System.Int32 System.Net.Sockets.Socket::MinListenPort
	int32_t ___MinListenPort_4;
	// System.Int32 System.Net.Sockets.Socket::MaxListenPort
	int32_t ___MaxListenPort_5;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_8;
	// System.IntPtr System.Net.Sockets.Socket::socket
	intptr_t ___socket_9;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::address_family
	int32_t ___address_family_10;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socket_type
	int32_t ___socket_type_11;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocol_type
	int32_t ___protocol_type_12;
	// System.Boolean System.Net.Sockets.Socket::blocking
	bool ___blocking_13;
	// System.Threading.Thread System.Net.Sockets.Socket::blocking_thread
	Thread_t3080374559 * ___blocking_thread_14;
	// System.Boolean System.Net.Sockets.Socket::isbound
	bool ___isbound_15;
	// System.Int32 System.Net.Sockets.Socket::max_bind_count
	int32_t ___max_bind_count_17;
	// System.Boolean System.Net.Sockets.Socket::connected
	bool ___connected_18;
	// System.Boolean System.Net.Sockets.Socket::closed
	bool ___closed_19;
	// System.Boolean System.Net.Sockets.Socket::disposed
	bool ___disposed_20;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t1993784231 * ___seed_endpoint_21;

public:
	inline static int32_t get_offset_of_readQ_0() { return static_cast<int32_t>(offsetof(Socket_t916439903, ___readQ_0)); }
	inline Queue_t2016903012 * get_readQ_0() const { return ___readQ_0; }
	inline Queue_t2016903012 ** get_address_of_readQ_0() { return &___readQ_0; }
	inline void set_readQ_0(Queue_t2016903012 * value)
	{
		___readQ_0 = value;
		Il2CppCodeGenWriteBarrier((&___readQ_0), value);
	}

	inline static int32_t get_offset_of_writeQ_1() { return static_cast<int32_t>(offsetof(Socket_t916439903, ___writeQ_1)); }
	inline Queue_t2016903012 * get_writeQ_1() const { return ___writeQ_1; }
	inline Queue_t2016903012 ** get_address_of_writeQ_1() { return &___writeQ_1; }
	inline void set_writeQ_1(Queue_t2016903012 * value)
	{
		___writeQ_1 = value;
		Il2CppCodeGenWriteBarrier((&___writeQ_1), value);
	}

	inline static int32_t get_offset_of_islistening_2() { return static_cast<int32_t>(offsetof(Socket_t916439903, ___islistening_2)); }
	inline bool get_islistening_2() const { return ___islistening_2; }
	inline bool* get_address_of_islistening_2() { return &___islistening_2; }
	inline void set_islistening_2(bool value)
	{
		___islistening_2 = value;
	}

	inline static int32_t get_offset_of_useoverlappedIO_3() { return static_cast<int32_t>(offsetof(Socket_t916439903, ___useoverlappedIO_3)); }
	inline bool get_useoverlappedIO_3() const { return ___useoverlappedIO_3; }
	inline bool* get_address_of_useoverlappedIO_3() { return &___useoverlappedIO_3; }
	inline void set_useoverlappedIO_3(bool value)
	{
		___useoverlappedIO_3 = value;
	}

	inline static int32_t get_offset_of_MinListenPort_4() { return static_cast<int32_t>(offsetof(Socket_t916439903, ___MinListenPort_4)); }
	inline int32_t get_MinListenPort_4() const { return ___MinListenPort_4; }
	inline int32_t* get_address_of_MinListenPort_4() { return &___MinListenPort_4; }
	inline void set_MinListenPort_4(int32_t value)
	{
		___MinListenPort_4 = value;
	}

	inline static int32_t get_offset_of_MaxListenPort_5() { return static_cast<int32_t>(offsetof(Socket_t916439903, ___MaxListenPort_5)); }
	inline int32_t get_MaxListenPort_5() const { return ___MaxListenPort_5; }
	inline int32_t* get_address_of_MaxListenPort_5() { return &___MaxListenPort_5; }
	inline void set_MaxListenPort_5(int32_t value)
	{
		___MaxListenPort_5 = value;
	}

	inline static int32_t get_offset_of_linger_timeout_8() { return static_cast<int32_t>(offsetof(Socket_t916439903, ___linger_timeout_8)); }
	inline int32_t get_linger_timeout_8() const { return ___linger_timeout_8; }
	inline int32_t* get_address_of_linger_timeout_8() { return &___linger_timeout_8; }
	inline void set_linger_timeout_8(int32_t value)
	{
		___linger_timeout_8 = value;
	}

	inline static int32_t get_offset_of_socket_9() { return static_cast<int32_t>(offsetof(Socket_t916439903, ___socket_9)); }
	inline intptr_t get_socket_9() const { return ___socket_9; }
	inline intptr_t* get_address_of_socket_9() { return &___socket_9; }
	inline void set_socket_9(intptr_t value)
	{
		___socket_9 = value;
	}

	inline static int32_t get_offset_of_address_family_10() { return static_cast<int32_t>(offsetof(Socket_t916439903, ___address_family_10)); }
	inline int32_t get_address_family_10() const { return ___address_family_10; }
	inline int32_t* get_address_of_address_family_10() { return &___address_family_10; }
	inline void set_address_family_10(int32_t value)
	{
		___address_family_10 = value;
	}

	inline static int32_t get_offset_of_socket_type_11() { return static_cast<int32_t>(offsetof(Socket_t916439903, ___socket_type_11)); }
	inline int32_t get_socket_type_11() const { return ___socket_type_11; }
	inline int32_t* get_address_of_socket_type_11() { return &___socket_type_11; }
	inline void set_socket_type_11(int32_t value)
	{
		___socket_type_11 = value;
	}

	inline static int32_t get_offset_of_protocol_type_12() { return static_cast<int32_t>(offsetof(Socket_t916439903, ___protocol_type_12)); }
	inline int32_t get_protocol_type_12() const { return ___protocol_type_12; }
	inline int32_t* get_address_of_protocol_type_12() { return &___protocol_type_12; }
	inline void set_protocol_type_12(int32_t value)
	{
		___protocol_type_12 = value;
	}

	inline static int32_t get_offset_of_blocking_13() { return static_cast<int32_t>(offsetof(Socket_t916439903, ___blocking_13)); }
	inline bool get_blocking_13() const { return ___blocking_13; }
	inline bool* get_address_of_blocking_13() { return &___blocking_13; }
	inline void set_blocking_13(bool value)
	{
		___blocking_13 = value;
	}

	inline static int32_t get_offset_of_blocking_thread_14() { return static_cast<int32_t>(offsetof(Socket_t916439903, ___blocking_thread_14)); }
	inline Thread_t3080374559 * get_blocking_thread_14() const { return ___blocking_thread_14; }
	inline Thread_t3080374559 ** get_address_of_blocking_thread_14() { return &___blocking_thread_14; }
	inline void set_blocking_thread_14(Thread_t3080374559 * value)
	{
		___blocking_thread_14 = value;
		Il2CppCodeGenWriteBarrier((&___blocking_thread_14), value);
	}

	inline static int32_t get_offset_of_isbound_15() { return static_cast<int32_t>(offsetof(Socket_t916439903, ___isbound_15)); }
	inline bool get_isbound_15() const { return ___isbound_15; }
	inline bool* get_address_of_isbound_15() { return &___isbound_15; }
	inline void set_isbound_15(bool value)
	{
		___isbound_15 = value;
	}

	inline static int32_t get_offset_of_max_bind_count_17() { return static_cast<int32_t>(offsetof(Socket_t916439903, ___max_bind_count_17)); }
	inline int32_t get_max_bind_count_17() const { return ___max_bind_count_17; }
	inline int32_t* get_address_of_max_bind_count_17() { return &___max_bind_count_17; }
	inline void set_max_bind_count_17(int32_t value)
	{
		___max_bind_count_17 = value;
	}

	inline static int32_t get_offset_of_connected_18() { return static_cast<int32_t>(offsetof(Socket_t916439903, ___connected_18)); }
	inline bool get_connected_18() const { return ___connected_18; }
	inline bool* get_address_of_connected_18() { return &___connected_18; }
	inline void set_connected_18(bool value)
	{
		___connected_18 = value;
	}

	inline static int32_t get_offset_of_closed_19() { return static_cast<int32_t>(offsetof(Socket_t916439903, ___closed_19)); }
	inline bool get_closed_19() const { return ___closed_19; }
	inline bool* get_address_of_closed_19() { return &___closed_19; }
	inline void set_closed_19(bool value)
	{
		___closed_19 = value;
	}

	inline static int32_t get_offset_of_disposed_20() { return static_cast<int32_t>(offsetof(Socket_t916439903, ___disposed_20)); }
	inline bool get_disposed_20() const { return ___disposed_20; }
	inline bool* get_address_of_disposed_20() { return &___disposed_20; }
	inline void set_disposed_20(bool value)
	{
		___disposed_20 = value;
	}

	inline static int32_t get_offset_of_seed_endpoint_21() { return static_cast<int32_t>(offsetof(Socket_t916439903, ___seed_endpoint_21)); }
	inline EndPoint_t1993784231 * get_seed_endpoint_21() const { return ___seed_endpoint_21; }
	inline EndPoint_t1993784231 ** get_address_of_seed_endpoint_21() { return &___seed_endpoint_21; }
	inline void set_seed_endpoint_21(EndPoint_t1993784231 * value)
	{
		___seed_endpoint_21 = value;
		Il2CppCodeGenWriteBarrier((&___seed_endpoint_21), value);
	}
};

struct Socket_t916439903_StaticFields
{
public:
	// System.Int32 System.Net.Sockets.Socket::ipv4Supported
	int32_t ___ipv4Supported_6;
	// System.Int32 System.Net.Sockets.Socket::ipv6Supported
	int32_t ___ipv6Supported_7;
	// System.Int32 System.Net.Sockets.Socket::current_bind_count
	int32_t ___current_bind_count_16;
	// System.Reflection.MethodInfo System.Net.Sockets.Socket::check_socket_policy
	MethodInfo_t * ___check_socket_policy_22;

public:
	inline static int32_t get_offset_of_ipv4Supported_6() { return static_cast<int32_t>(offsetof(Socket_t916439903_StaticFields, ___ipv4Supported_6)); }
	inline int32_t get_ipv4Supported_6() const { return ___ipv4Supported_6; }
	inline int32_t* get_address_of_ipv4Supported_6() { return &___ipv4Supported_6; }
	inline void set_ipv4Supported_6(int32_t value)
	{
		___ipv4Supported_6 = value;
	}

	inline static int32_t get_offset_of_ipv6Supported_7() { return static_cast<int32_t>(offsetof(Socket_t916439903_StaticFields, ___ipv6Supported_7)); }
	inline int32_t get_ipv6Supported_7() const { return ___ipv6Supported_7; }
	inline int32_t* get_address_of_ipv6Supported_7() { return &___ipv6Supported_7; }
	inline void set_ipv6Supported_7(int32_t value)
	{
		___ipv6Supported_7 = value;
	}

	inline static int32_t get_offset_of_current_bind_count_16() { return static_cast<int32_t>(offsetof(Socket_t916439903_StaticFields, ___current_bind_count_16)); }
	inline int32_t get_current_bind_count_16() const { return ___current_bind_count_16; }
	inline int32_t* get_address_of_current_bind_count_16() { return &___current_bind_count_16; }
	inline void set_current_bind_count_16(int32_t value)
	{
		___current_bind_count_16 = value;
	}

	inline static int32_t get_offset_of_check_socket_policy_22() { return static_cast<int32_t>(offsetof(Socket_t916439903_StaticFields, ___check_socket_policy_22)); }
	inline MethodInfo_t * get_check_socket_policy_22() const { return ___check_socket_policy_22; }
	inline MethodInfo_t ** get_address_of_check_socket_policy_22() { return &___check_socket_policy_22; }
	inline void set_check_socket_policy_22(MethodInfo_t * value)
	{
		___check_socket_policy_22 = value;
		Il2CppCodeGenWriteBarrier((&___check_socket_policy_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKET_T916439903_H
#ifndef SOCKETEXCEPTION_T1538368328_H
#define SOCKETEXCEPTION_T1538368328_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketException
struct  SocketException_t1538368328  : public Win32Exception_t2504706595
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKETEXCEPTION_T1538368328_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1200 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1201 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1202 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1203 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1204 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1205 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1206 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1207 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1208 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1209 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1210 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1211 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1212 = { sizeof (ImmutableObjectAttribute_t1329569688), -1, sizeof(ImmutableObjectAttribute_t1329569688_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1212[4] = 
{
	ImmutableObjectAttribute_t1329569688::get_offset_of_immutable_0(),
	ImmutableObjectAttribute_t1329569688_StaticFields::get_offset_of_Default_1(),
	ImmutableObjectAttribute_t1329569688_StaticFields::get_offset_of_No_2(),
	ImmutableObjectAttribute_t1329569688_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1213 = { sizeof (Int16Converter_t2217135310), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1214 = { sizeof (Int32Converter_t1185672859), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1215 = { sizeof (Int64Converter_t309682862), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1216 = { sizeof (InvalidEnumArgumentException_t1096832025), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1217 = { sizeof (LicFileLicenseProvider_t2265728714), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1218 = { sizeof (LicFileLicense_t1036648628), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1218[1] = 
{
	LicFileLicense_t1036648628::get_offset_of__key_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1219 = { sizeof (License_t421640234), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1220 = { sizeof (LicenseContext_t1040877086), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1221 = { sizeof (LicenseException_t3720287574), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1221[1] = 
{
	LicenseException_t3720287574::get_offset_of_type_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1222 = { sizeof (LicenseManager_t3249413197), -1, sizeof(LicenseManager_t3249413197_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1222[3] = 
{
	LicenseManager_t3249413197_StaticFields::get_offset_of_mycontext_0(),
	LicenseManager_t3249413197_StaticFields::get_offset_of_contextLockUser_1(),
	LicenseManager_t3249413197_StaticFields::get_offset_of_lockObject_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1223 = { sizeof (LicenseProvider_t4154406734), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1224 = { sizeof (LicenseProviderAttribute_t4140358910), -1, sizeof(LicenseProviderAttribute_t4140358910_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1224[2] = 
{
	LicenseProviderAttribute_t4140358910::get_offset_of_Provider_0(),
	LicenseProviderAttribute_t4140358910_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1225 = { sizeof (LicenseUsageMode_t187440784)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1225[3] = 
{
	LicenseUsageMode_t187440784::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1226 = { sizeof (ListBindableAttribute_t1044692177), -1, sizeof(ListBindableAttribute_t1044692177_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1226[4] = 
{
	ListBindableAttribute_t1044692177_StaticFields::get_offset_of_Default_0(),
	ListBindableAttribute_t1044692177_StaticFields::get_offset_of_No_1(),
	ListBindableAttribute_t1044692177_StaticFields::get_offset_of_Yes_2(),
	ListBindableAttribute_t1044692177::get_offset_of_bindable_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1227 = { sizeof (ListChangedEventArgs_t2007542758), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1227[4] = 
{
	ListChangedEventArgs_t2007542758::get_offset_of_changedType_1(),
	ListChangedEventArgs_t2007542758::get_offset_of_oldIndex_2(),
	ListChangedEventArgs_t2007542758::get_offset_of_newIndex_3(),
	ListChangedEventArgs_t2007542758::get_offset_of_propDesc_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1228 = { sizeof (ListChangedType_t1786206868)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1228[9] = 
{
	ListChangedType_t1786206868::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1229 = { sizeof (ListSortDescription_t332394692), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1229[2] = 
{
	ListSortDescription_t332394692::get_offset_of_propertyDescriptor_0(),
	ListSortDescription_t332394692::get_offset_of_sortDirection_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1230 = { sizeof (ListSortDescriptionCollection_t921216496), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1230[1] = 
{
	ListSortDescriptionCollection_t921216496::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1231 = { sizeof (ListSortDirection_t585248640)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1231[3] = 
{
	ListSortDirection_t585248640::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1232 = { sizeof (LocalizableAttribute_t2452750308), -1, sizeof(LocalizableAttribute_t2452750308_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1232[4] = 
{
	LocalizableAttribute_t2452750308::get_offset_of_localizable_0(),
	LocalizableAttribute_t2452750308_StaticFields::get_offset_of_Default_1(),
	LocalizableAttribute_t2452750308_StaticFields::get_offset_of_No_2(),
	LocalizableAttribute_t2452750308_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1233 = { sizeof (MarshalByValueComponent_t2437023999), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1233[3] = 
{
	MarshalByValueComponent_t2437023999::get_offset_of_eventList_0(),
	MarshalByValueComponent_t2437023999::get_offset_of_mySite_1(),
	MarshalByValueComponent_t2437023999::get_offset_of_disposedEvent_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1234 = { sizeof (MemberDescriptor_t4285166121), -1, sizeof(MemberDescriptor_t4285166121_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1234[4] = 
{
	MemberDescriptor_t4285166121::get_offset_of_name_0(),
	MemberDescriptor_t4285166121::get_offset_of_attrs_1(),
	MemberDescriptor_t4285166121::get_offset_of_attrCollection_2(),
	MemberDescriptor_t4285166121_StaticFields::get_offset_of_default_comparer_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1235 = { sizeof (MemberDescriptorComparer_t2555538544), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1236 = { sizeof (MergablePropertyAttribute_t1387620956), -1, sizeof(MergablePropertyAttribute_t1387620956_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1236[4] = 
{
	MergablePropertyAttribute_t1387620956::get_offset_of_mergable_0(),
	MergablePropertyAttribute_t1387620956_StaticFields::get_offset_of_Default_1(),
	MergablePropertyAttribute_t1387620956_StaticFields::get_offset_of_No_2(),
	MergablePropertyAttribute_t1387620956_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1237 = { sizeof (MultilineStringConverter_t1641729073), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1238 = { sizeof (NotifyParentPropertyAttribute_t516405740), -1, sizeof(NotifyParentPropertyAttribute_t516405740_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1238[4] = 
{
	NotifyParentPropertyAttribute_t516405740::get_offset_of_notifyParent_0(),
	NotifyParentPropertyAttribute_t516405740_StaticFields::get_offset_of_Default_1(),
	NotifyParentPropertyAttribute_t516405740_StaticFields::get_offset_of_No_2(),
	NotifyParentPropertyAttribute_t516405740_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1239 = { sizeof (NullableConverter_t3062560719), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1239[3] = 
{
	NullableConverter_t3062560719::get_offset_of_nullableType_0(),
	NullableConverter_t3062560719::get_offset_of_underlyingType_1(),
	NullableConverter_t3062560719::get_offset_of_underlyingTypeConverter_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1240 = { sizeof (PasswordPropertyTextAttribute_t4175288806), -1, sizeof(PasswordPropertyTextAttribute_t4175288806_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1240[4] = 
{
	PasswordPropertyTextAttribute_t4175288806_StaticFields::get_offset_of_Default_0(),
	PasswordPropertyTextAttribute_t4175288806_StaticFields::get_offset_of_No_1(),
	PasswordPropertyTextAttribute_t4175288806_StaticFields::get_offset_of_Yes_2(),
	PasswordPropertyTextAttribute_t4175288806::get_offset_of__password_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1241 = { sizeof (ProgressChangedEventArgs_t2200913891), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1241[2] = 
{
	ProgressChangedEventArgs_t2200913891::get_offset_of_progress_1(),
	ProgressChangedEventArgs_t2200913891::get_offset_of_state_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1242 = { sizeof (PropertyChangedEventArgs_t174171780), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1242[1] = 
{
	PropertyChangedEventArgs_t174171780::get_offset_of_propertyName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1243 = { sizeof (PropertyDescriptor_t1106879253), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1243[2] = 
{
	PropertyDescriptor_t1106879253::get_offset_of_converter_4(),
	PropertyDescriptor_t1106879253::get_offset_of_notifiers_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1244 = { sizeof (PropertyDescriptorCollection_t1536878629), -1, sizeof(PropertyDescriptorCollection_t1536878629_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1244[3] = 
{
	PropertyDescriptorCollection_t1536878629_StaticFields::get_offset_of_Empty_0(),
	PropertyDescriptorCollection_t1536878629::get_offset_of_properties_1(),
	PropertyDescriptorCollection_t1536878629::get_offset_of_readOnly_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1245 = { sizeof (ReadOnlyAttribute_t2682526613), -1, sizeof(ReadOnlyAttribute_t2682526613_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1245[4] = 
{
	ReadOnlyAttribute_t2682526613::get_offset_of_read_only_0(),
	ReadOnlyAttribute_t2682526613_StaticFields::get_offset_of_No_1(),
	ReadOnlyAttribute_t2682526613_StaticFields::get_offset_of_Yes_2(),
	ReadOnlyAttribute_t2682526613_StaticFields::get_offset_of_Default_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1246 = { sizeof (RecommendedAsConfigurableAttribute_t1608875019), -1, sizeof(RecommendedAsConfigurableAttribute_t1608875019_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1246[4] = 
{
	RecommendedAsConfigurableAttribute_t1608875019::get_offset_of_recommendedAsConfigurable_0(),
	RecommendedAsConfigurableAttribute_t1608875019_StaticFields::get_offset_of_Default_1(),
	RecommendedAsConfigurableAttribute_t1608875019_StaticFields::get_offset_of_No_2(),
	RecommendedAsConfigurableAttribute_t1608875019_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1247 = { sizeof (ReferenceConverter_t335890391), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1247[1] = 
{
	ReferenceConverter_t335890391::get_offset_of_reference_type_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1248 = { sizeof (ReflectionEventDescriptor_t2983760607), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1248[5] = 
{
	ReflectionEventDescriptor_t2983760607::get_offset_of__eventType_4(),
	ReflectionEventDescriptor_t2983760607::get_offset_of__componentType_5(),
	ReflectionEventDescriptor_t2983760607::get_offset_of__eventInfo_6(),
	ReflectionEventDescriptor_t2983760607::get_offset_of_add_method_7(),
	ReflectionEventDescriptor_t2983760607::get_offset_of_remove_method_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1249 = { sizeof (ReflectionPropertyDescriptor_t2666492849), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1249[6] = 
{
	ReflectionPropertyDescriptor_t2666492849::get_offset_of__member_6(),
	ReflectionPropertyDescriptor_t2666492849::get_offset_of__componentType_7(),
	ReflectionPropertyDescriptor_t2666492849::get_offset_of__propertyType_8(),
	ReflectionPropertyDescriptor_t2666492849::get_offset_of_getter_9(),
	ReflectionPropertyDescriptor_t2666492849::get_offset_of_setter_10(),
	ReflectionPropertyDescriptor_t2666492849::get_offset_of_accessors_inited_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1250 = { sizeof (RefreshEventArgs_t4209660557), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1250[2] = 
{
	RefreshEventArgs_t4209660557::get_offset_of_component_1(),
	RefreshEventArgs_t4209660557::get_offset_of_type_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1251 = { sizeof (RefreshProperties_t1336302741)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1251[4] = 
{
	RefreshProperties_t1336302741::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1252 = { sizeof (RefreshPropertiesAttribute_t3650820490), -1, sizeof(RefreshPropertiesAttribute_t3650820490_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1252[4] = 
{
	RefreshPropertiesAttribute_t3650820490::get_offset_of_refresh_0(),
	RefreshPropertiesAttribute_t3650820490_StaticFields::get_offset_of_All_1(),
	RefreshPropertiesAttribute_t3650820490_StaticFields::get_offset_of_Default_2(),
	RefreshPropertiesAttribute_t3650820490_StaticFields::get_offset_of_Repaint_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1253 = { sizeof (RunWorkerCompletedEventArgs_t3786014255), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1253[1] = 
{
	RunWorkerCompletedEventArgs_t3786014255::get_offset_of_result_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1254 = { sizeof (SByteConverter_t3352699380), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1255 = { sizeof (SingleConverter_t893801398), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1256 = { sizeof (StringConverter_t887781209), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1257 = { sizeof (TimeSpanConverter_t2334158690), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1258 = { sizeof (ToolboxItemAttribute_t2072845446), -1, sizeof(ToolboxItemAttribute_t2072845446_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1258[5] = 
{
	0,
	ToolboxItemAttribute_t2072845446_StaticFields::get_offset_of_Default_1(),
	ToolboxItemAttribute_t2072845446_StaticFields::get_offset_of_None_2(),
	ToolboxItemAttribute_t2072845446::get_offset_of_itemType_3(),
	ToolboxItemAttribute_t2072845446::get_offset_of_itemTypeName_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1259 = { sizeof (ToolboxItemFilterAttribute_t606232267), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1259[2] = 
{
	ToolboxItemFilterAttribute_t606232267::get_offset_of_Filter_0(),
	ToolboxItemFilterAttribute_t606232267::get_offset_of_ItemFilterType_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1260 = { sizeof (ToolboxItemFilterType_t4182929018)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1260[5] = 
{
	ToolboxItemFilterType_t4182929018::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1261 = { sizeof (TypeConverter_t2001479086), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1262 = { sizeof (StandardValuesCollection_t2127283394), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1262[1] = 
{
	StandardValuesCollection_t2127283394::get_offset_of_values_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1263 = { sizeof (SimplePropertyDescriptor_t2406049043), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1263[2] = 
{
	SimplePropertyDescriptor_t2406049043::get_offset_of_componentType_6(),
	SimplePropertyDescriptor_t2406049043::get_offset_of_propertyType_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1264 = { sizeof (TypeConverterAttribute_t3855605381), -1, sizeof(TypeConverterAttribute_t3855605381_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1264[2] = 
{
	TypeConverterAttribute_t3855605381_StaticFields::get_offset_of_Default_0(),
	TypeConverterAttribute_t3855605381::get_offset_of_converter_type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1265 = { sizeof (TypeDescriptionProvider_t1714785636), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1265[2] = 
{
	TypeDescriptionProvider_t1714785636::get_offset_of__emptyCustomTypeDescriptor_0(),
	TypeDescriptionProvider_t1714785636::get_offset_of__parent_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1266 = { sizeof (EmptyCustomTypeDescriptor_t4065268776), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1267 = { sizeof (TypeDescriptor_t3113491348), -1, sizeof(TypeDescriptor_t3113491348_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1267[12] = 
{
	TypeDescriptor_t3113491348_StaticFields::get_offset_of_creatingDefaultConverters_0(),
	TypeDescriptor_t3113491348_StaticFields::get_offset_of_defaultConverters_1(),
	TypeDescriptor_t3113491348_StaticFields::get_offset_of_descriptorHandler_2(),
	TypeDescriptor_t3113491348_StaticFields::get_offset_of_componentTable_3(),
	TypeDescriptor_t3113491348_StaticFields::get_offset_of_typeTable_4(),
	TypeDescriptor_t3113491348_StaticFields::get_offset_of_editors_5(),
	TypeDescriptor_t3113491348_StaticFields::get_offset_of_typeDescriptionProvidersLock_6(),
	TypeDescriptor_t3113491348_StaticFields::get_offset_of_typeDescriptionProviders_7(),
	TypeDescriptor_t3113491348_StaticFields::get_offset_of_componentDescriptionProvidersLock_8(),
	TypeDescriptor_t3113491348_StaticFields::get_offset_of_componentDescriptionProviders_9(),
	TypeDescriptor_t3113491348_StaticFields::get_offset_of_onDispose_10(),
	TypeDescriptor_t3113491348_StaticFields::get_offset_of_Refreshed_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1268 = { sizeof (AttributeProvider_t556314230), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1268[1] = 
{
	AttributeProvider_t556314230::get_offset_of_attributes_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1269 = { sizeof (AttributeTypeDescriptor_t1922290657), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1269[1] = 
{
	AttributeTypeDescriptor_t1922290657::get_offset_of_attributes_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1270 = { sizeof (WrappedTypeDescriptionProvider_t3355158449), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1270[1] = 
{
	WrappedTypeDescriptionProvider_t3355158449::get_offset_of_U3CWrappedU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1271 = { sizeof (DefaultTypeDescriptor_t3471409565), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1271[3] = 
{
	DefaultTypeDescriptor_t3471409565::get_offset_of_owner_1(),
	DefaultTypeDescriptor_t3471409565::get_offset_of_objectType_2(),
	DefaultTypeDescriptor_t3471409565::get_offset_of_instance_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1272 = { sizeof (DefaultTypeDescriptionProvider_t3395722130), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1273 = { sizeof (Info_t2409457902), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1273[6] = 
{
	Info_t2409457902::get_offset_of__infoType_0(),
	Info_t2409457902::get_offset_of__defaultEvent_1(),
	Info_t2409457902::get_offset_of__gotDefaultEvent_2(),
	Info_t2409457902::get_offset_of__defaultProperty_3(),
	Info_t2409457902::get_offset_of__gotDefaultProperty_4(),
	Info_t2409457902::get_offset_of__attributes_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1274 = { sizeof (ComponentInfo_t1068897431), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1274[3] = 
{
	ComponentInfo_t1068897431::get_offset_of__component_6(),
	ComponentInfo_t1068897431::get_offset_of__events_7(),
	ComponentInfo_t1068897431::get_offset_of__properties_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1275 = { sizeof (TypeInfo_t911236085), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1275[2] = 
{
	TypeInfo_t911236085::get_offset_of__events_6(),
	TypeInfo_t911236085::get_offset_of__properties_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1276 = { sizeof (TypeListConverter_t3223085335), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1276[1] = 
{
	TypeListConverter_t3223085335::get_offset_of_types_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1277 = { sizeof (UInt16Converter_t8972920), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1278 = { sizeof (UInt32Converter_t485048235), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1279 = { sizeof (UInt64Converter_t948338202), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1280 = { sizeof (WeakObjectWrapper_t4057492967), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1280[2] = 
{
	WeakObjectWrapper_t4057492967::get_offset_of_U3CTargetHashCodeU3Ek__BackingField_0(),
	WeakObjectWrapper_t4057492967::get_offset_of_U3CWeakU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1281 = { sizeof (WeakObjectWrapperComparer_t4059002358), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1282 = { sizeof (Win32Exception_t2504706595), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1282[1] = 
{
	Win32Exception_t2504706595::get_offset_of_native_error_code_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1283 = { sizeof (Debug_t252663237), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1284 = { sizeof (Stopwatch_t3361256120), -1, sizeof(Stopwatch_t3361256120_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1284[5] = 
{
	Stopwatch_t3361256120_StaticFields::get_offset_of_Frequency_0(),
	Stopwatch_t3361256120_StaticFields::get_offset_of_IsHighResolution_1(),
	Stopwatch_t3361256120::get_offset_of_elapsed_2(),
	Stopwatch_t3361256120::get_offset_of_started_3(),
	Stopwatch_t3361256120::get_offset_of_is_running_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1285 = { sizeof (AuthenticationLevel_t517901572)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1285[4] = 
{
	AuthenticationLevel_t517901572::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1286 = { sizeof (SslPolicyErrors_t969772011)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1286[5] = 
{
	SslPolicyErrors_t969772011::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1287 = { sizeof (AddressFamily_t1990452305)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1287[32] = 
{
	AddressFamily_t1990452305::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1288 = { sizeof (LingerOption_t411771771), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1288[2] = 
{
	LingerOption_t411771771::get_offset_of_enabled_0(),
	LingerOption_t411771771::get_offset_of_seconds_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1289 = { sizeof (MulticastOption_t3405587728), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1290 = { sizeof (ProtocolType_t1114270032)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1290[26] = 
{
	ProtocolType_t1114270032::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1291 = { sizeof (SelectMode_t203572218)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1291[4] = 
{
	SelectMode_t203572218::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1292 = { sizeof (Socket_t916439903), -1, sizeof(Socket_t916439903_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1292[23] = 
{
	Socket_t916439903::get_offset_of_readQ_0(),
	Socket_t916439903::get_offset_of_writeQ_1(),
	Socket_t916439903::get_offset_of_islistening_2(),
	Socket_t916439903::get_offset_of_useoverlappedIO_3(),
	Socket_t916439903::get_offset_of_MinListenPort_4(),
	Socket_t916439903::get_offset_of_MaxListenPort_5(),
	Socket_t916439903_StaticFields::get_offset_of_ipv4Supported_6(),
	Socket_t916439903_StaticFields::get_offset_of_ipv6Supported_7(),
	Socket_t916439903::get_offset_of_linger_timeout_8(),
	Socket_t916439903::get_offset_of_socket_9(),
	Socket_t916439903::get_offset_of_address_family_10(),
	Socket_t916439903::get_offset_of_socket_type_11(),
	Socket_t916439903::get_offset_of_protocol_type_12(),
	Socket_t916439903::get_offset_of_blocking_13(),
	Socket_t916439903::get_offset_of_blocking_thread_14(),
	Socket_t916439903::get_offset_of_isbound_15(),
	Socket_t916439903_StaticFields::get_offset_of_current_bind_count_16(),
	Socket_t916439903::get_offset_of_max_bind_count_17(),
	Socket_t916439903::get_offset_of_connected_18(),
	Socket_t916439903::get_offset_of_closed_19(),
	Socket_t916439903::get_offset_of_disposed_20(),
	Socket_t916439903::get_offset_of_seed_endpoint_21(),
	Socket_t916439903_StaticFields::get_offset_of_check_socket_policy_22(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1293 = { sizeof (SocketError_t620004331)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1293[48] = 
{
	SocketError_t620004331::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1294 = { sizeof (SocketException_t1538368328), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1295 = { sizeof (SocketFlags_t229667241)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1295[11] = 
{
	SocketFlags_t229667241::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1296 = { sizeof (SocketOptionLevel_t2342624406)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1296[6] = 
{
	SocketOptionLevel_t2342624406::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1297 = { sizeof (SocketOptionName_t3690498778)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1297[44] = 
{
	SocketOptionName_t3690498778::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1298 = { sizeof (SocketShutdown_t932775079)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1298[4] = 
{
	SocketShutdown_t932775079::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1299 = { sizeof (SocketType_t3757855023)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1299[7] = 
{
	SocketType_t3757855023::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
