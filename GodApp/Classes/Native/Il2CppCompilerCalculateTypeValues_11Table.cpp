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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.String
struct String_t;
// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t609721825;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Collections.ICollection
struct ICollection_t554836955;
// System.Collections.Hashtable
struct Hashtable_t3133650694;
// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct _Item_t1118674511;
// System.Collections.ArrayList
struct ArrayList_t3556881782;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t2105318126;
// System.Collections.IComparer
struct IComparer_t2589530522;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1797816912;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t1693114608;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1665409445;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t4261731784;
// System.ComponentModel.AsyncOperation
struct AsyncOperation_t10321140;
// System.ComponentModel.DoWorkEventHandler
struct DoWorkEventHandler_t3426838256;
// System.ComponentModel.ProgressChangedEventHandler
struct ProgressChangedEventHandler_t86532026;
// System.ComponentModel.RunWorkerCompletedEventHandler
struct RunWorkerCompletedEventHandler_t518695059;
// System.Delegate
struct Delegate_t530926524;
// System.ComponentModel.ListEntry
struct ListEntry_t2023760102;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t2766431899;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t952012675;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_t541953592;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t1584964580;
// System.Attribute[]
struct AttributeU5BU5D_t426525381;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t2705720300;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2351198994;
// System.Type
struct Type_t;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t2127283394;
// System.Char[]
struct CharU5BU5D_t2530504538;
// System.ComponentModel.TypeConverter
struct TypeConverter_t2001479086;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t2060833979;
// System.ComponentModel.ISite
struct ISite_t3273805677;
// System.Void
struct Void_t1245378934;
// System.String[]
struct StringU5BU5D_t4149809840;
// System.Exception
struct Exception_t3383010872;
// System.ComponentModel.CategoryAttribute
struct CategoryAttribute_t889864541;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t2550494111;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t2477178921;
// System.IAsyncResult
struct IAsyncResult_t1556696284;
// System.AsyncCallback
struct AsyncCallback_t3759202327;




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
#ifndef U3CMODULEU3E_T3931798274_H
#define U3CMODULEU3E_T3931798274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t3931798274 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T3931798274_H
#ifndef _ITEM_T1118674511_H
#define _ITEM_T1118674511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct  _Item_t1118674511  : public RuntimeObject
{
public:
	// System.String System.Collections.Specialized.NameObjectCollectionBase/_Item::key
	String_t* ___key_0;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase/_Item::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(_Item_t1118674511, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(_Item_t1118674511, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _ITEM_T1118674511_H
#ifndef _KEYSENUMERATOR_T2102342573_H
#define _KEYSENUMERATOR_T2102342573_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator
struct  _KeysEnumerator_t2102342573  : public RuntimeObject
{
public:
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator::m_collection
	NameObjectCollectionBase_t609721825 * ___m_collection_0;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator::m_position
	int32_t ___m_position_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(_KeysEnumerator_t2102342573, ___m_collection_0)); }
	inline NameObjectCollectionBase_t609721825 * get_m_collection_0() const { return ___m_collection_0; }
	inline NameObjectCollectionBase_t609721825 ** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(NameObjectCollectionBase_t609721825 * value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_collection_0), value);
	}

	inline static int32_t get_offset_of_m_position_1() { return static_cast<int32_t>(offsetof(_KeysEnumerator_t2102342573, ___m_position_1)); }
	inline int32_t get_m_position_1() const { return ___m_position_1; }
	inline int32_t* get_address_of_m_position_1() { return &___m_position_1; }
	inline void set_m_position_1(int32_t value)
	{
		___m_position_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _KEYSENUMERATOR_T2102342573_H
#ifndef KEYSCOLLECTION_T1693114608_H
#define KEYSCOLLECTION_T1693114608_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct  KeysCollection_t1693114608  : public RuntimeObject
{
public:
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::m_collection
	NameObjectCollectionBase_t609721825 * ___m_collection_0;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(KeysCollection_t1693114608, ___m_collection_0)); }
	inline NameObjectCollectionBase_t609721825 * get_m_collection_0() const { return ___m_collection_0; }
	inline NameObjectCollectionBase_t609721825 ** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(NameObjectCollectionBase_t609721825 * value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_collection_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYSCOLLECTION_T1693114608_H
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
#ifndef INSTANCEDESCRIPTOR_T4179180459_H
#define INSTANCEDESCRIPTOR_T4179180459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.Serialization.InstanceDescriptor
struct  InstanceDescriptor_t4179180459  : public RuntimeObject
{
public:
	// System.Reflection.MemberInfo System.ComponentModel.Design.Serialization.InstanceDescriptor::member
	MemberInfo_t * ___member_0;
	// System.Collections.ICollection System.ComponentModel.Design.Serialization.InstanceDescriptor::arguments
	RuntimeObject* ___arguments_1;
	// System.Boolean System.ComponentModel.Design.Serialization.InstanceDescriptor::isComplete
	bool ___isComplete_2;

public:
	inline static int32_t get_offset_of_member_0() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t4179180459, ___member_0)); }
	inline MemberInfo_t * get_member_0() const { return ___member_0; }
	inline MemberInfo_t ** get_address_of_member_0() { return &___member_0; }
	inline void set_member_0(MemberInfo_t * value)
	{
		___member_0 = value;
		Il2CppCodeGenWriteBarrier((&___member_0), value);
	}

	inline static int32_t get_offset_of_arguments_1() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t4179180459, ___arguments_1)); }
	inline RuntimeObject* get_arguments_1() const { return ___arguments_1; }
	inline RuntimeObject** get_address_of_arguments_1() { return &___arguments_1; }
	inline void set_arguments_1(RuntimeObject* value)
	{
		___arguments_1 = value;
		Il2CppCodeGenWriteBarrier((&___arguments_1), value);
	}

	inline static int32_t get_offset_of_isComplete_2() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t4179180459, ___isComplete_2)); }
	inline bool get_isComplete_2() const { return ___isComplete_2; }
	inline bool* get_address_of_isComplete_2() { return &___isComplete_2; }
	inline void set_isComplete_2(bool value)
	{
		___isComplete_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANCEDESCRIPTOR_T4179180459_H
#ifndef CULTUREINFOCOMPARER_T3003882517_H
#define CULTUREINFOCOMPARER_T3003882517_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter/CultureInfoComparer
struct  CultureInfoComparer_t3003882517  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCOMPARER_T3003882517_H
#ifndef NAMEOBJECTCOLLECTIONBASE_T609721825_H
#define NAMEOBJECTCOLLECTIONBASE_T609721825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase
struct  NameObjectCollectionBase_t609721825  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.NameObjectCollectionBase::m_ItemsContainer
	Hashtable_t3133650694 * ___m_ItemsContainer_0;
	// System.Collections.Specialized.NameObjectCollectionBase/_Item System.Collections.Specialized.NameObjectCollectionBase::m_NullKeyItem
	_Item_t1118674511 * ___m_NullKeyItem_1;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::m_ItemsArray
	ArrayList_t3556881782 * ___m_ItemsArray_2;
	// System.Collections.IHashCodeProvider System.Collections.Specialized.NameObjectCollectionBase::m_hashprovider
	RuntimeObject* ___m_hashprovider_3;
	// System.Collections.IComparer System.Collections.Specialized.NameObjectCollectionBase::m_comparer
	RuntimeObject* ___m_comparer_4;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::m_defCapacity
	int32_t ___m_defCapacity_5;
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::m_readonly
	bool ___m_readonly_6;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::infoCopy
	SerializationInfo_t1797816912 * ___infoCopy_7;
	// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::keyscoll
	KeysCollection_t1693114608 * ___keyscoll_8;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::equality_comparer
	RuntimeObject* ___equality_comparer_9;

public:
	inline static int32_t get_offset_of_m_ItemsContainer_0() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t609721825, ___m_ItemsContainer_0)); }
	inline Hashtable_t3133650694 * get_m_ItemsContainer_0() const { return ___m_ItemsContainer_0; }
	inline Hashtable_t3133650694 ** get_address_of_m_ItemsContainer_0() { return &___m_ItemsContainer_0; }
	inline void set_m_ItemsContainer_0(Hashtable_t3133650694 * value)
	{
		___m_ItemsContainer_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemsContainer_0), value);
	}

	inline static int32_t get_offset_of_m_NullKeyItem_1() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t609721825, ___m_NullKeyItem_1)); }
	inline _Item_t1118674511 * get_m_NullKeyItem_1() const { return ___m_NullKeyItem_1; }
	inline _Item_t1118674511 ** get_address_of_m_NullKeyItem_1() { return &___m_NullKeyItem_1; }
	inline void set_m_NullKeyItem_1(_Item_t1118674511 * value)
	{
		___m_NullKeyItem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_NullKeyItem_1), value);
	}

	inline static int32_t get_offset_of_m_ItemsArray_2() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t609721825, ___m_ItemsArray_2)); }
	inline ArrayList_t3556881782 * get_m_ItemsArray_2() const { return ___m_ItemsArray_2; }
	inline ArrayList_t3556881782 ** get_address_of_m_ItemsArray_2() { return &___m_ItemsArray_2; }
	inline void set_m_ItemsArray_2(ArrayList_t3556881782 * value)
	{
		___m_ItemsArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemsArray_2), value);
	}

	inline static int32_t get_offset_of_m_hashprovider_3() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t609721825, ___m_hashprovider_3)); }
	inline RuntimeObject* get_m_hashprovider_3() const { return ___m_hashprovider_3; }
	inline RuntimeObject** get_address_of_m_hashprovider_3() { return &___m_hashprovider_3; }
	inline void set_m_hashprovider_3(RuntimeObject* value)
	{
		___m_hashprovider_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_hashprovider_3), value);
	}

	inline static int32_t get_offset_of_m_comparer_4() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t609721825, ___m_comparer_4)); }
	inline RuntimeObject* get_m_comparer_4() const { return ___m_comparer_4; }
	inline RuntimeObject** get_address_of_m_comparer_4() { return &___m_comparer_4; }
	inline void set_m_comparer_4(RuntimeObject* value)
	{
		___m_comparer_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_comparer_4), value);
	}

	inline static int32_t get_offset_of_m_defCapacity_5() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t609721825, ___m_defCapacity_5)); }
	inline int32_t get_m_defCapacity_5() const { return ___m_defCapacity_5; }
	inline int32_t* get_address_of_m_defCapacity_5() { return &___m_defCapacity_5; }
	inline void set_m_defCapacity_5(int32_t value)
	{
		___m_defCapacity_5 = value;
	}

	inline static int32_t get_offset_of_m_readonly_6() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t609721825, ___m_readonly_6)); }
	inline bool get_m_readonly_6() const { return ___m_readonly_6; }
	inline bool* get_address_of_m_readonly_6() { return &___m_readonly_6; }
	inline void set_m_readonly_6(bool value)
	{
		___m_readonly_6 = value;
	}

	inline static int32_t get_offset_of_infoCopy_7() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t609721825, ___infoCopy_7)); }
	inline SerializationInfo_t1797816912 * get_infoCopy_7() const { return ___infoCopy_7; }
	inline SerializationInfo_t1797816912 ** get_address_of_infoCopy_7() { return &___infoCopy_7; }
	inline void set_infoCopy_7(SerializationInfo_t1797816912 * value)
	{
		___infoCopy_7 = value;
		Il2CppCodeGenWriteBarrier((&___infoCopy_7), value);
	}

	inline static int32_t get_offset_of_keyscoll_8() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t609721825, ___keyscoll_8)); }
	inline KeysCollection_t1693114608 * get_keyscoll_8() const { return ___keyscoll_8; }
	inline KeysCollection_t1693114608 ** get_address_of_keyscoll_8() { return &___keyscoll_8; }
	inline void set_keyscoll_8(KeysCollection_t1693114608 * value)
	{
		___keyscoll_8 = value;
		Il2CppCodeGenWriteBarrier((&___keyscoll_8), value);
	}

	inline static int32_t get_offset_of_equality_comparer_9() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t609721825, ___equality_comparer_9)); }
	inline RuntimeObject* get_equality_comparer_9() const { return ___equality_comparer_9; }
	inline RuntimeObject** get_address_of_equality_comparer_9() { return &___equality_comparer_9; }
	inline void set_equality_comparer_9(RuntimeObject* value)
	{
		___equality_comparer_9 = value;
		Il2CppCodeGenWriteBarrier((&___equality_comparer_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEOBJECTCOLLECTIONBASE_T609721825_H
#ifndef DESIGNERTRANSACTION_T152248144_H
#define DESIGNERTRANSACTION_T152248144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.DesignerTransaction
struct  DesignerTransaction_t152248144  : public RuntimeObject
{
public:
	// System.Boolean System.ComponentModel.Design.DesignerTransaction::committed
	bool ___committed_0;
	// System.Boolean System.ComponentModel.Design.DesignerTransaction::canceled
	bool ___canceled_1;

public:
	inline static int32_t get_offset_of_committed_0() { return static_cast<int32_t>(offsetof(DesignerTransaction_t152248144, ___committed_0)); }
	inline bool get_committed_0() const { return ___committed_0; }
	inline bool* get_address_of_committed_0() { return &___committed_0; }
	inline void set_committed_0(bool value)
	{
		___committed_0 = value;
	}

	inline static int32_t get_offset_of_canceled_1() { return static_cast<int32_t>(offsetof(DesignerTransaction_t152248144, ___canceled_1)); }
	inline bool get_canceled_1() const { return ___canceled_1; }
	inline bool* get_address_of_canceled_1() { return &___canceled_1; }
	inline void set_canceled_1(bool value)
	{
		___canceled_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERTRANSACTION_T152248144_H
#ifndef ASYNCOPERATION_T10321140_H
#define ASYNCOPERATION_T10321140_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AsyncOperation
struct  AsyncOperation_t10321140  : public RuntimeObject
{
public:
	// System.Threading.SynchronizationContext System.ComponentModel.AsyncOperation::ctx
	SynchronizationContext_t4261731784 * ___ctx_0;
	// System.Object System.ComponentModel.AsyncOperation::state
	RuntimeObject * ___state_1;
	// System.Boolean System.ComponentModel.AsyncOperation::done
	bool ___done_2;

public:
	inline static int32_t get_offset_of_ctx_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t10321140, ___ctx_0)); }
	inline SynchronizationContext_t4261731784 * get_ctx_0() const { return ___ctx_0; }
	inline SynchronizationContext_t4261731784 ** get_address_of_ctx_0() { return &___ctx_0; }
	inline void set_ctx_0(SynchronizationContext_t4261731784 * value)
	{
		___ctx_0 = value;
		Il2CppCodeGenWriteBarrier((&___ctx_0), value);
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t10321140, ___state_1)); }
	inline RuntimeObject * get_state_1() const { return ___state_1; }
	inline RuntimeObject ** get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(RuntimeObject * value)
	{
		___state_1 = value;
		Il2CppCodeGenWriteBarrier((&___state_1), value);
	}

	inline static int32_t get_offset_of_done_2() { return static_cast<int32_t>(offsetof(AsyncOperation_t10321140, ___done_2)); }
	inline bool get_done_2() const { return ___done_2; }
	inline bool* get_address_of_done_2() { return &___done_2; }
	inline void set_done_2(bool value)
	{
		___done_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCOPERATION_T10321140_H
#ifndef ASYNCOPERATIONMANAGER_T3205135273_H
#define ASYNCOPERATIONMANAGER_T3205135273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AsyncOperationManager
struct  AsyncOperationManager_t3205135273  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCOPERATIONMANAGER_T3205135273_H
#ifndef ATTRIBUTECOLLECTION_T2705720300_H
#define ATTRIBUTECOLLECTION_T2705720300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AttributeCollection
struct  AttributeCollection_t2705720300  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.AttributeCollection::attrList
	ArrayList_t3556881782 * ___attrList_0;

public:
	inline static int32_t get_offset_of_attrList_0() { return static_cast<int32_t>(offsetof(AttributeCollection_t2705720300, ___attrList_0)); }
	inline ArrayList_t3556881782 * get_attrList_0() const { return ___attrList_0; }
	inline ArrayList_t3556881782 ** get_address_of_attrList_0() { return &___attrList_0; }
	inline void set_attrList_0(ArrayList_t3556881782 * value)
	{
		___attrList_0 = value;
		Il2CppCodeGenWriteBarrier((&___attrList_0), value);
	}
};

struct AttributeCollection_t2705720300_StaticFields
{
public:
	// System.ComponentModel.AttributeCollection System.ComponentModel.AttributeCollection::Empty
	AttributeCollection_t2705720300 * ___Empty_1;

public:
	inline static int32_t get_offset_of_Empty_1() { return static_cast<int32_t>(offsetof(AttributeCollection_t2705720300_StaticFields, ___Empty_1)); }
	inline AttributeCollection_t2705720300 * get_Empty_1() const { return ___Empty_1; }
	inline AttributeCollection_t2705720300 ** get_address_of_Empty_1() { return &___Empty_1; }
	inline void set_Empty_1(AttributeCollection_t2705720300 * value)
	{
		___Empty_1 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTECOLLECTION_T2705720300_H
#ifndef BACKGROUNDWORKER_T1200524790_H
#define BACKGROUNDWORKER_T1200524790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BackgroundWorker
struct  BackgroundWorker_t1200524790  : public RuntimeObject
{
public:
	// System.ComponentModel.AsyncOperation System.ComponentModel.BackgroundWorker::async
	AsyncOperation_t10321140 * ___async_0;
	// System.Boolean System.ComponentModel.BackgroundWorker::cancel_pending
	bool ___cancel_pending_1;
	// System.Boolean System.ComponentModel.BackgroundWorker::report_progress
	bool ___report_progress_2;
	// System.Boolean System.ComponentModel.BackgroundWorker::support_cancel
	bool ___support_cancel_3;
	// System.ComponentModel.DoWorkEventHandler System.ComponentModel.BackgroundWorker::DoWork
	DoWorkEventHandler_t3426838256 * ___DoWork_4;
	// System.ComponentModel.ProgressChangedEventHandler System.ComponentModel.BackgroundWorker::ProgressChanged
	ProgressChangedEventHandler_t86532026 * ___ProgressChanged_5;
	// System.ComponentModel.RunWorkerCompletedEventHandler System.ComponentModel.BackgroundWorker::RunWorkerCompleted
	RunWorkerCompletedEventHandler_t518695059 * ___RunWorkerCompleted_6;

public:
	inline static int32_t get_offset_of_async_0() { return static_cast<int32_t>(offsetof(BackgroundWorker_t1200524790, ___async_0)); }
	inline AsyncOperation_t10321140 * get_async_0() const { return ___async_0; }
	inline AsyncOperation_t10321140 ** get_address_of_async_0() { return &___async_0; }
	inline void set_async_0(AsyncOperation_t10321140 * value)
	{
		___async_0 = value;
		Il2CppCodeGenWriteBarrier((&___async_0), value);
	}

	inline static int32_t get_offset_of_cancel_pending_1() { return static_cast<int32_t>(offsetof(BackgroundWorker_t1200524790, ___cancel_pending_1)); }
	inline bool get_cancel_pending_1() const { return ___cancel_pending_1; }
	inline bool* get_address_of_cancel_pending_1() { return &___cancel_pending_1; }
	inline void set_cancel_pending_1(bool value)
	{
		___cancel_pending_1 = value;
	}

	inline static int32_t get_offset_of_report_progress_2() { return static_cast<int32_t>(offsetof(BackgroundWorker_t1200524790, ___report_progress_2)); }
	inline bool get_report_progress_2() const { return ___report_progress_2; }
	inline bool* get_address_of_report_progress_2() { return &___report_progress_2; }
	inline void set_report_progress_2(bool value)
	{
		___report_progress_2 = value;
	}

	inline static int32_t get_offset_of_support_cancel_3() { return static_cast<int32_t>(offsetof(BackgroundWorker_t1200524790, ___support_cancel_3)); }
	inline bool get_support_cancel_3() const { return ___support_cancel_3; }
	inline bool* get_address_of_support_cancel_3() { return &___support_cancel_3; }
	inline void set_support_cancel_3(bool value)
	{
		___support_cancel_3 = value;
	}

	inline static int32_t get_offset_of_DoWork_4() { return static_cast<int32_t>(offsetof(BackgroundWorker_t1200524790, ___DoWork_4)); }
	inline DoWorkEventHandler_t3426838256 * get_DoWork_4() const { return ___DoWork_4; }
	inline DoWorkEventHandler_t3426838256 ** get_address_of_DoWork_4() { return &___DoWork_4; }
	inline void set_DoWork_4(DoWorkEventHandler_t3426838256 * value)
	{
		___DoWork_4 = value;
		Il2CppCodeGenWriteBarrier((&___DoWork_4), value);
	}

	inline static int32_t get_offset_of_ProgressChanged_5() { return static_cast<int32_t>(offsetof(BackgroundWorker_t1200524790, ___ProgressChanged_5)); }
	inline ProgressChangedEventHandler_t86532026 * get_ProgressChanged_5() const { return ___ProgressChanged_5; }
	inline ProgressChangedEventHandler_t86532026 ** get_address_of_ProgressChanged_5() { return &___ProgressChanged_5; }
	inline void set_ProgressChanged_5(ProgressChangedEventHandler_t86532026 * value)
	{
		___ProgressChanged_5 = value;
		Il2CppCodeGenWriteBarrier((&___ProgressChanged_5), value);
	}

	inline static int32_t get_offset_of_RunWorkerCompleted_6() { return static_cast<int32_t>(offsetof(BackgroundWorker_t1200524790, ___RunWorkerCompleted_6)); }
	inline RunWorkerCompletedEventHandler_t518695059 * get_RunWorkerCompleted_6() const { return ___RunWorkerCompleted_6; }
	inline RunWorkerCompletedEventHandler_t518695059 ** get_address_of_RunWorkerCompleted_6() { return &___RunWorkerCompleted_6; }
	inline void set_RunWorkerCompleted_6(RunWorkerCompletedEventHandler_t518695059 * value)
	{
		___RunWorkerCompleted_6 = value;
		Il2CppCodeGenWriteBarrier((&___RunWorkerCompleted_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BACKGROUNDWORKER_T1200524790_H
#ifndef LISTENTRY_T2023760102_H
#define LISTENTRY_T2023760102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListEntry
struct  ListEntry_t2023760102  : public RuntimeObject
{
public:
	// System.Object System.ComponentModel.ListEntry::key
	RuntimeObject * ___key_0;
	// System.Delegate System.ComponentModel.ListEntry::value
	Delegate_t530926524 * ___value_1;
	// System.ComponentModel.ListEntry System.ComponentModel.ListEntry::next
	ListEntry_t2023760102 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(ListEntry_t2023760102, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ListEntry_t2023760102, ___value_1)); }
	inline Delegate_t530926524 * get_value_1() const { return ___value_1; }
	inline Delegate_t530926524 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Delegate_t530926524 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(ListEntry_t2023760102, ___next_2)); }
	inline ListEntry_t2023760102 * get_next_2() const { return ___next_2; }
	inline ListEntry_t2023760102 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(ListEntry_t2023760102 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTENTRY_T2023760102_H
#ifndef EVENTDESCRIPTORCOLLECTION_T4005238403_H
#define EVENTDESCRIPTORCOLLECTION_T4005238403_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventDescriptorCollection
struct  EventDescriptorCollection_t4005238403  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.EventDescriptorCollection::eventList
	ArrayList_t3556881782 * ___eventList_0;
	// System.Boolean System.ComponentModel.EventDescriptorCollection::isReadOnly
	bool ___isReadOnly_1;

public:
	inline static int32_t get_offset_of_eventList_0() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t4005238403, ___eventList_0)); }
	inline ArrayList_t3556881782 * get_eventList_0() const { return ___eventList_0; }
	inline ArrayList_t3556881782 ** get_address_of_eventList_0() { return &___eventList_0; }
	inline void set_eventList_0(ArrayList_t3556881782 * value)
	{
		___eventList_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventList_0), value);
	}

	inline static int32_t get_offset_of_isReadOnly_1() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t4005238403, ___isReadOnly_1)); }
	inline bool get_isReadOnly_1() const { return ___isReadOnly_1; }
	inline bool* get_address_of_isReadOnly_1() { return &___isReadOnly_1; }
	inline void set_isReadOnly_1(bool value)
	{
		___isReadOnly_1 = value;
	}
};

struct EventDescriptorCollection_t4005238403_StaticFields
{
public:
	// System.ComponentModel.EventDescriptorCollection System.ComponentModel.EventDescriptorCollection::Empty
	EventDescriptorCollection_t4005238403 * ___Empty_2;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t4005238403_StaticFields, ___Empty_2)); }
	inline EventDescriptorCollection_t4005238403 * get_Empty_2() const { return ___Empty_2; }
	inline EventDescriptorCollection_t4005238403 ** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(EventDescriptorCollection_t4005238403 * value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTDESCRIPTORCOLLECTION_T4005238403_H
#ifndef ENUMCOMPARER_T3319211562_H
#define ENUMCOMPARER_T3319211562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter/EnumComparer
struct  EnumComparer_t3319211562  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMCOMPARER_T3319211562_H
#ifndef EVENTHANDLERLIST_T2060833979_H
#define EVENTHANDLERLIST_T2060833979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventHandlerList
struct  EventHandlerList_t2060833979  : public RuntimeObject
{
public:
	// System.ComponentModel.ListEntry System.ComponentModel.EventHandlerList::entries
	ListEntry_t2023760102 * ___entries_0;
	// System.Delegate System.ComponentModel.EventHandlerList::null_entry
	Delegate_t530926524 * ___null_entry_1;

public:
	inline static int32_t get_offset_of_entries_0() { return static_cast<int32_t>(offsetof(EventHandlerList_t2060833979, ___entries_0)); }
	inline ListEntry_t2023760102 * get_entries_0() const { return ___entries_0; }
	inline ListEntry_t2023760102 ** get_address_of_entries_0() { return &___entries_0; }
	inline void set_entries_0(ListEntry_t2023760102 * value)
	{
		___entries_0 = value;
		Il2CppCodeGenWriteBarrier((&___entries_0), value);
	}

	inline static int32_t get_offset_of_null_entry_1() { return static_cast<int32_t>(offsetof(EventHandlerList_t2060833979, ___null_entry_1)); }
	inline Delegate_t530926524 * get_null_entry_1() const { return ___null_entry_1; }
	inline Delegate_t530926524 ** get_address_of_null_entry_1() { return &___null_entry_1; }
	inline void set_null_entry_1(Delegate_t530926524 * value)
	{
		___null_entry_1 = value;
		Il2CppCodeGenWriteBarrier((&___null_entry_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLERLIST_T2060833979_H
#ifndef DICTIONARYNODECOLLECTIONENUMERATOR_T2686277774_H
#define DICTIONARYNODECOLLECTIONENUMERATOR_T2686277774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNodeCollection/DictionaryNodeCollectionEnumerator
struct  DictionaryNodeCollectionEnumerator_t2686277774  : public RuntimeObject
{
public:
	// System.Collections.IDictionaryEnumerator System.Collections.Specialized.ListDictionary/DictionaryNodeCollection/DictionaryNodeCollectionEnumerator::inner
	RuntimeObject* ___inner_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeCollection/DictionaryNodeCollectionEnumerator::isKeyList
	bool ___isKeyList_1;

public:
	inline static int32_t get_offset_of_inner_0() { return static_cast<int32_t>(offsetof(DictionaryNodeCollectionEnumerator_t2686277774, ___inner_0)); }
	inline RuntimeObject* get_inner_0() const { return ___inner_0; }
	inline RuntimeObject** get_address_of_inner_0() { return &___inner_0; }
	inline void set_inner_0(RuntimeObject* value)
	{
		___inner_0 = value;
		Il2CppCodeGenWriteBarrier((&___inner_0), value);
	}

	inline static int32_t get_offset_of_isKeyList_1() { return static_cast<int32_t>(offsetof(DictionaryNodeCollectionEnumerator_t2686277774, ___isKeyList_1)); }
	inline bool get_isKeyList_1() const { return ___isKeyList_1; }
	inline bool* get_address_of_isKeyList_1() { return &___isKeyList_1; }
	inline void set_isKeyList_1(bool value)
	{
		___isKeyList_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODECOLLECTIONENUMERATOR_T2686277774_H
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
#ifndef DICTIONARYNODEENUMERATOR_T738045227_H
#define DICTIONARYNODEENUMERATOR_T738045227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator
struct  DictionaryNodeEnumerator_t738045227  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::dict
	ListDictionary_t541953592 * ___dict_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::isAtStart
	bool ___isAtStart_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::current
	DictionaryNode_t1584964580 * ___current_2;
	// System.Int32 System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::version
	int32_t ___version_3;

public:
	inline static int32_t get_offset_of_dict_0() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t738045227, ___dict_0)); }
	inline ListDictionary_t541953592 * get_dict_0() const { return ___dict_0; }
	inline ListDictionary_t541953592 ** get_address_of_dict_0() { return &___dict_0; }
	inline void set_dict_0(ListDictionary_t541953592 * value)
	{
		___dict_0 = value;
		Il2CppCodeGenWriteBarrier((&___dict_0), value);
	}

	inline static int32_t get_offset_of_isAtStart_1() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t738045227, ___isAtStart_1)); }
	inline bool get_isAtStart_1() const { return ___isAtStart_1; }
	inline bool* get_address_of_isAtStart_1() { return &___isAtStart_1; }
	inline void set_isAtStart_1(bool value)
	{
		___isAtStart_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t738045227, ___current_2)); }
	inline DictionaryNode_t1584964580 * get_current_2() const { return ___current_2; }
	inline DictionaryNode_t1584964580 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(DictionaryNode_t1584964580 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((&___current_2), value);
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t738045227, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODEENUMERATOR_T738045227_H
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
#ifndef DICTIONARYNODECOLLECTION_T388003767_H
#define DICTIONARYNODECOLLECTION_T388003767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNodeCollection
struct  DictionaryNodeCollection_t388003767  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/DictionaryNodeCollection::dict
	ListDictionary_t541953592 * ___dict_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeCollection::isKeyList
	bool ___isKeyList_1;

public:
	inline static int32_t get_offset_of_dict_0() { return static_cast<int32_t>(offsetof(DictionaryNodeCollection_t388003767, ___dict_0)); }
	inline ListDictionary_t541953592 * get_dict_0() const { return ___dict_0; }
	inline ListDictionary_t541953592 ** get_address_of_dict_0() { return &___dict_0; }
	inline void set_dict_0(ListDictionary_t541953592 * value)
	{
		___dict_0 = value;
		Il2CppCodeGenWriteBarrier((&___dict_0), value);
	}

	inline static int32_t get_offset_of_isKeyList_1() { return static_cast<int32_t>(offsetof(DictionaryNodeCollection_t388003767, ___isKeyList_1)); }
	inline bool get_isKeyList_1() const { return ___isKeyList_1; }
	inline bool* get_address_of_isKeyList_1() { return &___isKeyList_1; }
	inline void set_isKeyList_1(bool value)
	{
		___isKeyList_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODECOLLECTION_T388003767_H
#ifndef READONLYCOLLECTIONBASE_T4027908575_H
#define READONLYCOLLECTIONBASE_T4027908575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ReadOnlyCollectionBase
struct  ReadOnlyCollectionBase_t4027908575  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ReadOnlyCollectionBase::list
	ArrayList_t3556881782 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollectionBase_t4027908575, ___list_0)); }
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
#endif // READONLYCOLLECTIONBASE_T4027908575_H
#ifndef MARSHALBYREFOBJECT_T674105259_H
#define MARSHALBYREFOBJECT_T674105259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t674105259  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2351198994 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t674105259, ____identity_0)); }
	inline ServerIdentity_t2351198994 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2351198994 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2351198994 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T674105259_H
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
#ifndef HYBRIDDICTIONARY_T3537612488_H
#define HYBRIDDICTIONARY_T3537612488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.HybridDictionary
struct  HybridDictionary_t3537612488  : public RuntimeObject
{
public:
	// System.Boolean System.Collections.Specialized.HybridDictionary::caseInsensitive
	bool ___caseInsensitive_0;
	// System.Collections.Hashtable System.Collections.Specialized.HybridDictionary::hashtable
	Hashtable_t3133650694 * ___hashtable_1;
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.HybridDictionary::list
	ListDictionary_t541953592 * ___list_2;

public:
	inline static int32_t get_offset_of_caseInsensitive_0() { return static_cast<int32_t>(offsetof(HybridDictionary_t3537612488, ___caseInsensitive_0)); }
	inline bool get_caseInsensitive_0() const { return ___caseInsensitive_0; }
	inline bool* get_address_of_caseInsensitive_0() { return &___caseInsensitive_0; }
	inline void set_caseInsensitive_0(bool value)
	{
		___caseInsensitive_0 = value;
	}

	inline static int32_t get_offset_of_hashtable_1() { return static_cast<int32_t>(offsetof(HybridDictionary_t3537612488, ___hashtable_1)); }
	inline Hashtable_t3133650694 * get_hashtable_1() const { return ___hashtable_1; }
	inline Hashtable_t3133650694 ** get_address_of_hashtable_1() { return &___hashtable_1; }
	inline void set_hashtable_1(Hashtable_t3133650694 * value)
	{
		___hashtable_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashtable_1), value);
	}

	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(HybridDictionary_t3537612488, ___list_2)); }
	inline ListDictionary_t541953592 * get_list_2() const { return ___list_2; }
	inline ListDictionary_t541953592 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(ListDictionary_t541953592 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier((&___list_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HYBRIDDICTIONARY_T3537612488_H
#ifndef LISTDICTIONARY_T541953592_H
#define LISTDICTIONARY_T541953592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary
struct  ListDictionary_t541953592  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Specialized.ListDictionary::count
	int32_t ___count_0;
	// System.Int32 System.Collections.Specialized.ListDictionary::version
	int32_t ___version_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::head
	DictionaryNode_t1584964580 * ___head_2;
	// System.Collections.IComparer System.Collections.Specialized.ListDictionary::comparer
	RuntimeObject* ___comparer_3;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(ListDictionary_t541953592, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(ListDictionary_t541953592, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_head_2() { return static_cast<int32_t>(offsetof(ListDictionary_t541953592, ___head_2)); }
	inline DictionaryNode_t1584964580 * get_head_2() const { return ___head_2; }
	inline DictionaryNode_t1584964580 ** get_address_of_head_2() { return &___head_2; }
	inline void set_head_2(DictionaryNode_t1584964580 * value)
	{
		___head_2 = value;
		Il2CppCodeGenWriteBarrier((&___head_2), value);
	}

	inline static int32_t get_offset_of_comparer_3() { return static_cast<int32_t>(offsetof(ListDictionary_t541953592, ___comparer_3)); }
	inline RuntimeObject* get_comparer_3() const { return ___comparer_3; }
	inline RuntimeObject** get_address_of_comparer_3() { return &___comparer_3; }
	inline void set_comparer_3(RuntimeObject* value)
	{
		___comparer_3 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTDICTIONARY_T541953592_H
#ifndef DICTIONARYNODE_T1584964580_H
#define DICTIONARYNODE_T1584964580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNode
struct  DictionaryNode_t1584964580  : public RuntimeObject
{
public:
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::value
	RuntimeObject * ___value_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNode::next
	DictionaryNode_t1584964580 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(DictionaryNode_t1584964580, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(DictionaryNode_t1584964580, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(DictionaryNode_t1584964580, ___next_2)); }
	inline DictionaryNode_t1584964580 * get_next_2() const { return ___next_2; }
	inline DictionaryNode_t1584964580 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(DictionaryNode_t1584964580 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODE_T1584964580_H
#ifndef LOCALE_T1555723068_H
#define LOCALE_T1555723068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Locale
struct  Locale_t1555723068  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALE_T1555723068_H
#ifndef DEFAULTEVENTATTRIBUTE_T3932160556_H
#define DEFAULTEVENTATTRIBUTE_T3932160556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultEventAttribute
struct  DefaultEventAttribute_t3932160556  : public Attribute_t4057762188
{
public:
	// System.String System.ComponentModel.DefaultEventAttribute::eventName
	String_t* ___eventName_0;

public:
	inline static int32_t get_offset_of_eventName_0() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t3932160556, ___eventName_0)); }
	inline String_t* get_eventName_0() const { return ___eventName_0; }
	inline String_t** get_address_of_eventName_0() { return &___eventName_0; }
	inline void set_eventName_0(String_t* value)
	{
		___eventName_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventName_0), value);
	}
};

struct DefaultEventAttribute_t3932160556_StaticFields
{
public:
	// System.ComponentModel.DefaultEventAttribute System.ComponentModel.DefaultEventAttribute::Default
	DefaultEventAttribute_t3932160556 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t3932160556_StaticFields, ___Default_1)); }
	inline DefaultEventAttribute_t3932160556 * get_Default_1() const { return ___Default_1; }
	inline DefaultEventAttribute_t3932160556 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultEventAttribute_t3932160556 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTEVENTATTRIBUTE_T3932160556_H
#ifndef DEFAULTPROPERTYATTRIBUTE_T523854110_H
#define DEFAULTPROPERTYATTRIBUTE_T523854110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultPropertyAttribute
struct  DefaultPropertyAttribute_t523854110  : public Attribute_t4057762188
{
public:
	// System.String System.ComponentModel.DefaultPropertyAttribute::property_name
	String_t* ___property_name_0;

public:
	inline static int32_t get_offset_of_property_name_0() { return static_cast<int32_t>(offsetof(DefaultPropertyAttribute_t523854110, ___property_name_0)); }
	inline String_t* get_property_name_0() const { return ___property_name_0; }
	inline String_t** get_address_of_property_name_0() { return &___property_name_0; }
	inline void set_property_name_0(String_t* value)
	{
		___property_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___property_name_0), value);
	}
};

struct DefaultPropertyAttribute_t523854110_StaticFields
{
public:
	// System.ComponentModel.DefaultPropertyAttribute System.ComponentModel.DefaultPropertyAttribute::Default
	DefaultPropertyAttribute_t523854110 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultPropertyAttribute_t523854110_StaticFields, ___Default_1)); }
	inline DefaultPropertyAttribute_t523854110 * get_Default_1() const { return ___Default_1; }
	inline DefaultPropertyAttribute_t523854110 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultPropertyAttribute_t523854110 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTPROPERTYATTRIBUTE_T523854110_H
#ifndef DEFAULTVALUEATTRIBUTE_T718856340_H
#define DEFAULTVALUEATTRIBUTE_T718856340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultValueAttribute
struct  DefaultValueAttribute_t718856340  : public Attribute_t4057762188
{
public:
	// System.Object System.ComponentModel.DefaultValueAttribute::DefaultValue
	RuntimeObject * ___DefaultValue_0;

public:
	inline static int32_t get_offset_of_DefaultValue_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_t718856340, ___DefaultValue_0)); }
	inline RuntimeObject * get_DefaultValue_0() const { return ___DefaultValue_0; }
	inline RuntimeObject ** get_address_of_DefaultValue_0() { return &___DefaultValue_0; }
	inline void set_DefaultValue_0(RuntimeObject * value)
	{
		___DefaultValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValue_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTVALUEATTRIBUTE_T718856340_H
#ifndef DESIGNERCATEGORYATTRIBUTE_T3620524307_H
#define DESIGNERCATEGORYATTRIBUTE_T3620524307_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerCategoryAttribute
struct  DesignerCategoryAttribute_t3620524307  : public Attribute_t4057762188
{
public:
	// System.String System.ComponentModel.DesignerCategoryAttribute::category
	String_t* ___category_0;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t3620524307, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}
};

struct DesignerCategoryAttribute_t3620524307_StaticFields
{
public:
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Component
	DesignerCategoryAttribute_t3620524307 * ___Component_1;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Form
	DesignerCategoryAttribute_t3620524307 * ___Form_2;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Generic
	DesignerCategoryAttribute_t3620524307 * ___Generic_3;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Default
	DesignerCategoryAttribute_t3620524307 * ___Default_4;

public:
	inline static int32_t get_offset_of_Component_1() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t3620524307_StaticFields, ___Component_1)); }
	inline DesignerCategoryAttribute_t3620524307 * get_Component_1() const { return ___Component_1; }
	inline DesignerCategoryAttribute_t3620524307 ** get_address_of_Component_1() { return &___Component_1; }
	inline void set_Component_1(DesignerCategoryAttribute_t3620524307 * value)
	{
		___Component_1 = value;
		Il2CppCodeGenWriteBarrier((&___Component_1), value);
	}

	inline static int32_t get_offset_of_Form_2() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t3620524307_StaticFields, ___Form_2)); }
	inline DesignerCategoryAttribute_t3620524307 * get_Form_2() const { return ___Form_2; }
	inline DesignerCategoryAttribute_t3620524307 ** get_address_of_Form_2() { return &___Form_2; }
	inline void set_Form_2(DesignerCategoryAttribute_t3620524307 * value)
	{
		___Form_2 = value;
		Il2CppCodeGenWriteBarrier((&___Form_2), value);
	}

	inline static int32_t get_offset_of_Generic_3() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t3620524307_StaticFields, ___Generic_3)); }
	inline DesignerCategoryAttribute_t3620524307 * get_Generic_3() const { return ___Generic_3; }
	inline DesignerCategoryAttribute_t3620524307 ** get_address_of_Generic_3() { return &___Generic_3; }
	inline void set_Generic_3(DesignerCategoryAttribute_t3620524307 * value)
	{
		___Generic_3 = value;
		Il2CppCodeGenWriteBarrier((&___Generic_3), value);
	}

	inline static int32_t get_offset_of_Default_4() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t3620524307_StaticFields, ___Default_4)); }
	inline DesignerCategoryAttribute_t3620524307 * get_Default_4() const { return ___Default_4; }
	inline DesignerCategoryAttribute_t3620524307 ** get_address_of_Default_4() { return &___Default_4; }
	inline void set_Default_4(DesignerCategoryAttribute_t3620524307 * value)
	{
		___Default_4 = value;
		Il2CppCodeGenWriteBarrier((&___Default_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERCATEGORYATTRIBUTE_T3620524307_H
#ifndef DESCRIPTIONATTRIBUTE_T1430095322_H
#define DESCRIPTIONATTRIBUTE_T1430095322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DescriptionAttribute
struct  DescriptionAttribute_t1430095322  : public Attribute_t4057762188
{
public:
	// System.String System.ComponentModel.DescriptionAttribute::desc
	String_t* ___desc_0;

public:
	inline static int32_t get_offset_of_desc_0() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t1430095322, ___desc_0)); }
	inline String_t* get_desc_0() const { return ___desc_0; }
	inline String_t** get_address_of_desc_0() { return &___desc_0; }
	inline void set_desc_0(String_t* value)
	{
		___desc_0 = value;
		Il2CppCodeGenWriteBarrier((&___desc_0), value);
	}
};

struct DescriptionAttribute_t1430095322_StaticFields
{
public:
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_t1430095322 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t1430095322_StaticFields, ___Default_1)); }
	inline DescriptionAttribute_t1430095322 * get_Default_1() const { return ___Default_1; }
	inline DescriptionAttribute_t1430095322 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DescriptionAttribute_t1430095322 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRIPTIONATTRIBUTE_T1430095322_H
#ifndef DESIGNONLYATTRIBUTE_T2627194611_H
#define DESIGNONLYATTRIBUTE_T2627194611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignOnlyAttribute
struct  DesignOnlyAttribute_t2627194611  : public Attribute_t4057762188
{
public:
	// System.Boolean System.ComponentModel.DesignOnlyAttribute::design_only
	bool ___design_only_0;

public:
	inline static int32_t get_offset_of_design_only_0() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t2627194611, ___design_only_0)); }
	inline bool get_design_only_0() const { return ___design_only_0; }
	inline bool* get_address_of_design_only_0() { return &___design_only_0; }
	inline void set_design_only_0(bool value)
	{
		___design_only_0 = value;
	}
};

struct DesignOnlyAttribute_t2627194611_StaticFields
{
public:
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::Default
	DesignOnlyAttribute_t2627194611 * ___Default_1;
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::No
	DesignOnlyAttribute_t2627194611 * ___No_2;
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::Yes
	DesignOnlyAttribute_t2627194611 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t2627194611_StaticFields, ___Default_1)); }
	inline DesignOnlyAttribute_t2627194611 * get_Default_1() const { return ___Default_1; }
	inline DesignOnlyAttribute_t2627194611 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignOnlyAttribute_t2627194611 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t2627194611_StaticFields, ___No_2)); }
	inline DesignOnlyAttribute_t2627194611 * get_No_2() const { return ___No_2; }
	inline DesignOnlyAttribute_t2627194611 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(DesignOnlyAttribute_t2627194611 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t2627194611_StaticFields, ___Yes_3)); }
	inline DesignOnlyAttribute_t2627194611 * get_Yes_3() const { return ___Yes_3; }
	inline DesignOnlyAttribute_t2627194611 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(DesignOnlyAttribute_t2627194611 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNONLYATTRIBUTE_T2627194611_H
#ifndef DESIGNTIMEVISIBLEATTRIBUTE_T4221633075_H
#define DESIGNTIMEVISIBLEATTRIBUTE_T4221633075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignTimeVisibleAttribute
struct  DesignTimeVisibleAttribute_t4221633075  : public Attribute_t4057762188
{
public:
	// System.Boolean System.ComponentModel.DesignTimeVisibleAttribute::visible
	bool ___visible_0;

public:
	inline static int32_t get_offset_of_visible_0() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t4221633075, ___visible_0)); }
	inline bool get_visible_0() const { return ___visible_0; }
	inline bool* get_address_of_visible_0() { return &___visible_0; }
	inline void set_visible_0(bool value)
	{
		___visible_0 = value;
	}
};

struct DesignTimeVisibleAttribute_t4221633075_StaticFields
{
public:
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::Default
	DesignTimeVisibleAttribute_t4221633075 * ___Default_1;
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::No
	DesignTimeVisibleAttribute_t4221633075 * ___No_2;
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::Yes
	DesignTimeVisibleAttribute_t4221633075 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t4221633075_StaticFields, ___Default_1)); }
	inline DesignTimeVisibleAttribute_t4221633075 * get_Default_1() const { return ___Default_1; }
	inline DesignTimeVisibleAttribute_t4221633075 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignTimeVisibleAttribute_t4221633075 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t4221633075_StaticFields, ___No_2)); }
	inline DesignTimeVisibleAttribute_t4221633075 * get_No_2() const { return ___No_2; }
	inline DesignTimeVisibleAttribute_t4221633075 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(DesignTimeVisibleAttribute_t4221633075 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t4221633075_StaticFields, ___Yes_3)); }
	inline DesignTimeVisibleAttribute_t4221633075 * get_Yes_3() const { return ___Yes_3; }
	inline DesignTimeVisibleAttribute_t4221633075 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(DesignTimeVisibleAttribute_t4221633075 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNTIMEVISIBLEATTRIBUTE_T4221633075_H
#ifndef DESIGNERATTRIBUTE_T1662077259_H
#define DESIGNERATTRIBUTE_T1662077259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerAttribute
struct  DesignerAttribute_t1662077259  : public Attribute_t4057762188
{
public:
	// System.String System.ComponentModel.DesignerAttribute::name
	String_t* ___name_0;
	// System.String System.ComponentModel.DesignerAttribute::basetypename
	String_t* ___basetypename_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DesignerAttribute_t1662077259, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_basetypename_1() { return static_cast<int32_t>(offsetof(DesignerAttribute_t1662077259, ___basetypename_1)); }
	inline String_t* get_basetypename_1() const { return ___basetypename_1; }
	inline String_t** get_address_of_basetypename_1() { return &___basetypename_1; }
	inline void set_basetypename_1(String_t* value)
	{
		___basetypename_1 = value;
		Il2CppCodeGenWriteBarrier((&___basetypename_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERATTRIBUTE_T1662077259_H
#ifndef DISPLAYNAMEATTRIBUTE_T3131223357_H
#define DISPLAYNAMEATTRIBUTE_T3131223357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DisplayNameAttribute
struct  DisplayNameAttribute_t3131223357  : public Attribute_t4057762188
{
public:
	// System.String System.ComponentModel.DisplayNameAttribute::attributeDisplayName
	String_t* ___attributeDisplayName_1;

public:
	inline static int32_t get_offset_of_attributeDisplayName_1() { return static_cast<int32_t>(offsetof(DisplayNameAttribute_t3131223357, ___attributeDisplayName_1)); }
	inline String_t* get_attributeDisplayName_1() const { return ___attributeDisplayName_1; }
	inline String_t** get_address_of_attributeDisplayName_1() { return &___attributeDisplayName_1; }
	inline void set_attributeDisplayName_1(String_t* value)
	{
		___attributeDisplayName_1 = value;
		Il2CppCodeGenWriteBarrier((&___attributeDisplayName_1), value);
	}
};

struct DisplayNameAttribute_t3131223357_StaticFields
{
public:
	// System.ComponentModel.DisplayNameAttribute System.ComponentModel.DisplayNameAttribute::Default
	DisplayNameAttribute_t3131223357 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(DisplayNameAttribute_t3131223357_StaticFields, ___Default_0)); }
	inline DisplayNameAttribute_t3131223357 * get_Default_0() const { return ___Default_0; }
	inline DisplayNameAttribute_t3131223357 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(DisplayNameAttribute_t3131223357 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAYNAMEATTRIBUTE_T3131223357_H
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
#ifndef EDITORATTRIBUTE_T3977105537_H
#define EDITORATTRIBUTE_T3977105537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorAttribute
struct  EditorAttribute_t3977105537  : public Attribute_t4057762188
{
public:
	// System.String System.ComponentModel.EditorAttribute::name
	String_t* ___name_0;
	// System.String System.ComponentModel.EditorAttribute::basename
	String_t* ___basename_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(EditorAttribute_t3977105537, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_basename_1() { return static_cast<int32_t>(offsetof(EditorAttribute_t3977105537, ___basename_1)); }
	inline String_t* get_basename_1() const { return ___basename_1; }
	inline String_t** get_address_of_basename_1() { return &___basename_1; }
	inline void set_basename_1(String_t* value)
	{
		___basename_1 = value;
		Il2CppCodeGenWriteBarrier((&___basename_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORATTRIBUTE_T3977105537_H
#ifndef ENUMCONVERTER_T4070564949_H
#define ENUMCONVERTER_T4070564949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter
struct  EnumConverter_t4070564949  : public TypeConverter_t2001479086
{
public:
	// System.Type System.ComponentModel.EnumConverter::type
	Type_t * ___type_0;
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.EnumConverter::stdValues
	StandardValuesCollection_t2127283394 * ___stdValues_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(EnumConverter_t4070564949, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_stdValues_1() { return static_cast<int32_t>(offsetof(EnumConverter_t4070564949, ___stdValues_1)); }
	inline StandardValuesCollection_t2127283394 * get_stdValues_1() const { return ___stdValues_1; }
	inline StandardValuesCollection_t2127283394 ** get_address_of_stdValues_1() { return &___stdValues_1; }
	inline void set_stdValues_1(StandardValuesCollection_t2127283394 * value)
	{
		___stdValues_1 = value;
		Il2CppCodeGenWriteBarrier((&___stdValues_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMCONVERTER_T4070564949_H
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
#ifndef VOID_T1245378934_H
#define VOID_T1245378934_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1245378934 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1245378934_H
#ifndef EXPANDABLEOBJECTCONVERTER_T911608726_H
#define EXPANDABLEOBJECTCONVERTER_T911608726_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ExpandableObjectConverter
struct  ExpandableObjectConverter_t911608726  : public TypeConverter_t2001479086
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPANDABLEOBJECTCONVERTER_T911608726_H
#ifndef GUIDCONVERTER_T2782744234_H
#define GUIDCONVERTER_T2782744234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.GuidConverter
struct  GuidConverter_t2782744234  : public TypeConverter_t2001479086
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDCONVERTER_T2782744234_H
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
#ifndef DOWORKEVENTARGS_T1318081810_H
#define DOWORKEVENTARGS_T1318081810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DoWorkEventArgs
struct  DoWorkEventArgs_t1318081810  : public EventArgs_t3467505009
{
public:
	// System.Object System.ComponentModel.DoWorkEventArgs::arg
	RuntimeObject * ___arg_1;
	// System.Object System.ComponentModel.DoWorkEventArgs::result
	RuntimeObject * ___result_2;
	// System.Boolean System.ComponentModel.DoWorkEventArgs::cancel
	bool ___cancel_3;

public:
	inline static int32_t get_offset_of_arg_1() { return static_cast<int32_t>(offsetof(DoWorkEventArgs_t1318081810, ___arg_1)); }
	inline RuntimeObject * get_arg_1() const { return ___arg_1; }
	inline RuntimeObject ** get_address_of_arg_1() { return &___arg_1; }
	inline void set_arg_1(RuntimeObject * value)
	{
		___arg_1 = value;
		Il2CppCodeGenWriteBarrier((&___arg_1), value);
	}

	inline static int32_t get_offset_of_result_2() { return static_cast<int32_t>(offsetof(DoWorkEventArgs_t1318081810, ___result_2)); }
	inline RuntimeObject * get_result_2() const { return ___result_2; }
	inline RuntimeObject ** get_address_of_result_2() { return &___result_2; }
	inline void set_result_2(RuntimeObject * value)
	{
		___result_2 = value;
		Il2CppCodeGenWriteBarrier((&___result_2), value);
	}

	inline static int32_t get_offset_of_cancel_3() { return static_cast<int32_t>(offsetof(DoWorkEventArgs_t1318081810, ___cancel_3)); }
	inline bool get_cancel_3() const { return ___cancel_3; }
	inline bool* get_address_of_cancel_3() { return &___cancel_3; }
	inline void set_cancel_3(bool value)
	{
		___cancel_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOWORKEVENTARGS_T1318081810_H
#ifndef COMPONENT_T2996391308_H
#define COMPONENT_T2996391308_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Component
struct  Component_t2996391308  : public MarshalByRefObject_t674105259
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::event_handlers
	EventHandlerList_t2060833979 * ___event_handlers_1;
	// System.ComponentModel.ISite System.ComponentModel.Component::mySite
	RuntimeObject* ___mySite_2;
	// System.Object System.ComponentModel.Component::disposedEvent
	RuntimeObject * ___disposedEvent_3;

public:
	inline static int32_t get_offset_of_event_handlers_1() { return static_cast<int32_t>(offsetof(Component_t2996391308, ___event_handlers_1)); }
	inline EventHandlerList_t2060833979 * get_event_handlers_1() const { return ___event_handlers_1; }
	inline EventHandlerList_t2060833979 ** get_address_of_event_handlers_1() { return &___event_handlers_1; }
	inline void set_event_handlers_1(EventHandlerList_t2060833979 * value)
	{
		___event_handlers_1 = value;
		Il2CppCodeGenWriteBarrier((&___event_handlers_1), value);
	}

	inline static int32_t get_offset_of_mySite_2() { return static_cast<int32_t>(offsetof(Component_t2996391308, ___mySite_2)); }
	inline RuntimeObject* get_mySite_2() const { return ___mySite_2; }
	inline RuntimeObject** get_address_of_mySite_2() { return &___mySite_2; }
	inline void set_mySite_2(RuntimeObject* value)
	{
		___mySite_2 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_2), value);
	}

	inline static int32_t get_offset_of_disposedEvent_3() { return static_cast<int32_t>(offsetof(Component_t2996391308, ___disposedEvent_3)); }
	inline RuntimeObject * get_disposedEvent_3() const { return ___disposedEvent_3; }
	inline RuntimeObject ** get_address_of_disposedEvent_3() { return &___disposedEvent_3; }
	inline void set_disposedEvent_3(RuntimeObject * value)
	{
		___disposedEvent_3 = value;
		Il2CppCodeGenWriteBarrier((&___disposedEvent_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T2996391308_H
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
#ifndef NAMEVALUECOLLECTION_T3558975363_H
#define NAMEVALUECOLLECTION_T3558975363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameValueCollection
struct  NameValueCollection_t3558975363  : public NameObjectCollectionBase_t609721825
{
public:
	// System.String[] System.Collections.Specialized.NameValueCollection::cachedAllKeys
	StringU5BU5D_t4149809840* ___cachedAllKeys_10;
	// System.String[] System.Collections.Specialized.NameValueCollection::cachedAll
	StringU5BU5D_t4149809840* ___cachedAll_11;

public:
	inline static int32_t get_offset_of_cachedAllKeys_10() { return static_cast<int32_t>(offsetof(NameValueCollection_t3558975363, ___cachedAllKeys_10)); }
	inline StringU5BU5D_t4149809840* get_cachedAllKeys_10() const { return ___cachedAllKeys_10; }
	inline StringU5BU5D_t4149809840** get_address_of_cachedAllKeys_10() { return &___cachedAllKeys_10; }
	inline void set_cachedAllKeys_10(StringU5BU5D_t4149809840* value)
	{
		___cachedAllKeys_10 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAllKeys_10), value);
	}

	inline static int32_t get_offset_of_cachedAll_11() { return static_cast<int32_t>(offsetof(NameValueCollection_t3558975363, ___cachedAll_11)); }
	inline StringU5BU5D_t4149809840* get_cachedAll_11() const { return ___cachedAll_11; }
	inline StringU5BU5D_t4149809840** get_address_of_cachedAll_11() { return &___cachedAll_11; }
	inline void set_cachedAll_11(StringU5BU5D_t4149809840* value)
	{
		___cachedAll_11 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAll_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEVALUECOLLECTION_T3558975363_H
#ifndef DATETIMECONVERTER_T478313019_H
#define DATETIMECONVERTER_T478313019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DateTimeConverter
struct  DateTimeConverter_t478313019  : public TypeConverter_t2001479086
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMECONVERTER_T478313019_H
#ifndef BOOLEANCONVERTER_T3282595427_H
#define BOOLEANCONVERTER_T3282595427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BooleanConverter
struct  BooleanConverter_t3282595427  : public TypeConverter_t2001479086
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEANCONVERTER_T3282595427_H
#ifndef BROWSABLEATTRIBUTE_T1361691770_H
#define BROWSABLEATTRIBUTE_T1361691770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BrowsableAttribute
struct  BrowsableAttribute_t1361691770  : public Attribute_t4057762188
{
public:
	// System.Boolean System.ComponentModel.BrowsableAttribute::browsable
	bool ___browsable_0;

public:
	inline static int32_t get_offset_of_browsable_0() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t1361691770, ___browsable_0)); }
	inline bool get_browsable_0() const { return ___browsable_0; }
	inline bool* get_address_of_browsable_0() { return &___browsable_0; }
	inline void set_browsable_0(bool value)
	{
		___browsable_0 = value;
	}
};

struct BrowsableAttribute_t1361691770_StaticFields
{
public:
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Default
	BrowsableAttribute_t1361691770 * ___Default_1;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::No
	BrowsableAttribute_t1361691770 * ___No_2;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Yes
	BrowsableAttribute_t1361691770 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t1361691770_StaticFields, ___Default_1)); }
	inline BrowsableAttribute_t1361691770 * get_Default_1() const { return ___Default_1; }
	inline BrowsableAttribute_t1361691770 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(BrowsableAttribute_t1361691770 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t1361691770_StaticFields, ___No_2)); }
	inline BrowsableAttribute_t1361691770 * get_No_2() const { return ___No_2; }
	inline BrowsableAttribute_t1361691770 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(BrowsableAttribute_t1361691770 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t1361691770_StaticFields, ___Yes_3)); }
	inline BrowsableAttribute_t1361691770 * get_Yes_3() const { return ___Yes_3; }
	inline BrowsableAttribute_t1361691770 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(BrowsableAttribute_t1361691770 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BROWSABLEATTRIBUTE_T1361691770_H
#ifndef MONOTODOATTRIBUTE_T2595381982_H
#define MONOTODOATTRIBUTE_T2595381982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTODOAttribute
struct  MonoTODOAttribute_t2595381982  : public Attribute_t4057762188
{
public:
	// System.String System.MonoTODOAttribute::comment
	String_t* ___comment_0;

public:
	inline static int32_t get_offset_of_comment_0() { return static_cast<int32_t>(offsetof(MonoTODOAttribute_t2595381982, ___comment_0)); }
	inline String_t* get_comment_0() const { return ___comment_0; }
	inline String_t** get_address_of_comment_0() { return &___comment_0; }
	inline void set_comment_0(String_t* value)
	{
		___comment_0 = value;
		Il2CppCodeGenWriteBarrier((&___comment_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTODOATTRIBUTE_T2595381982_H
#ifndef U24ARRAYTYPEU244_T2805914011_H
#define U24ARRAYTYPEU244_T2805914011_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$4
struct  U24ArrayTypeU244_t2805914011 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU244_t2805914011__padding[4];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU244_T2805914011_H
#ifndef U24ARRAYTYPEU2416_T2916704539_H
#define U24ARRAYTYPEU2416_T2916704539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$16
struct  U24ArrayTypeU2416_t2916704539 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2416_t2916704539__padding[16];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2416_T2916704539_H
#ifndef U24ARRAYTYPEU2412_T18308275_H
#define U24ARRAYTYPEU2412_T18308275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$12
struct  U24ArrayTypeU2412_t18308275 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2412_t18308275__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2412_T18308275_H
#ifndef CANCELEVENTARGS_T3665995220_H
#define CANCELEVENTARGS_T3665995220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CancelEventArgs
struct  CancelEventArgs_t3665995220  : public EventArgs_t3467505009
{
public:
	// System.Boolean System.ComponentModel.CancelEventArgs::cancel
	bool ___cancel_1;

public:
	inline static int32_t get_offset_of_cancel_1() { return static_cast<int32_t>(offsetof(CancelEventArgs_t3665995220, ___cancel_1)); }
	inline bool get_cancel_1() const { return ___cancel_1; }
	inline bool* get_address_of_cancel_1() { return &___cancel_1; }
	inline void set_cancel_1(bool value)
	{
		___cancel_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANCELEVENTARGS_T3665995220_H
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
#ifndef CATEGORYATTRIBUTE_T889864541_H
#define CATEGORYATTRIBUTE_T889864541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CategoryAttribute
struct  CategoryAttribute_t889864541  : public Attribute_t4057762188
{
public:
	// System.String System.ComponentModel.CategoryAttribute::category
	String_t* ___category_0;
	// System.Boolean System.ComponentModel.CategoryAttribute::IsLocalized
	bool ___IsLocalized_1;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(CategoryAttribute_t889864541, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}

	inline static int32_t get_offset_of_IsLocalized_1() { return static_cast<int32_t>(offsetof(CategoryAttribute_t889864541, ___IsLocalized_1)); }
	inline bool get_IsLocalized_1() const { return ___IsLocalized_1; }
	inline bool* get_address_of_IsLocalized_1() { return &___IsLocalized_1; }
	inline void set_IsLocalized_1(bool value)
	{
		___IsLocalized_1 = value;
	}
};

struct CategoryAttribute_t889864541_StaticFields
{
public:
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::action
	CategoryAttribute_t889864541 * ___action_2;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::appearance
	CategoryAttribute_t889864541 * ___appearance_3;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::behaviour
	CategoryAttribute_t889864541 * ___behaviour_4;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::data
	CategoryAttribute_t889864541 * ___data_5;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::def
	CategoryAttribute_t889864541 * ___def_6;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::design
	CategoryAttribute_t889864541 * ___design_7;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::drag_drop
	CategoryAttribute_t889864541 * ___drag_drop_8;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::focus
	CategoryAttribute_t889864541 * ___focus_9;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::format
	CategoryAttribute_t889864541 * ___format_10;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::key
	CategoryAttribute_t889864541 * ___key_11;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::layout
	CategoryAttribute_t889864541 * ___layout_12;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::mouse
	CategoryAttribute_t889864541 * ___mouse_13;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::window_style
	CategoryAttribute_t889864541 * ___window_style_14;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::async
	CategoryAttribute_t889864541 * ___async_15;
	// System.Object System.ComponentModel.CategoryAttribute::lockobj
	RuntimeObject * ___lockobj_16;

public:
	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(CategoryAttribute_t889864541_StaticFields, ___action_2)); }
	inline CategoryAttribute_t889864541 * get_action_2() const { return ___action_2; }
	inline CategoryAttribute_t889864541 ** get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(CategoryAttribute_t889864541 * value)
	{
		___action_2 = value;
		Il2CppCodeGenWriteBarrier((&___action_2), value);
	}

	inline static int32_t get_offset_of_appearance_3() { return static_cast<int32_t>(offsetof(CategoryAttribute_t889864541_StaticFields, ___appearance_3)); }
	inline CategoryAttribute_t889864541 * get_appearance_3() const { return ___appearance_3; }
	inline CategoryAttribute_t889864541 ** get_address_of_appearance_3() { return &___appearance_3; }
	inline void set_appearance_3(CategoryAttribute_t889864541 * value)
	{
		___appearance_3 = value;
		Il2CppCodeGenWriteBarrier((&___appearance_3), value);
	}

	inline static int32_t get_offset_of_behaviour_4() { return static_cast<int32_t>(offsetof(CategoryAttribute_t889864541_StaticFields, ___behaviour_4)); }
	inline CategoryAttribute_t889864541 * get_behaviour_4() const { return ___behaviour_4; }
	inline CategoryAttribute_t889864541 ** get_address_of_behaviour_4() { return &___behaviour_4; }
	inline void set_behaviour_4(CategoryAttribute_t889864541 * value)
	{
		___behaviour_4 = value;
		Il2CppCodeGenWriteBarrier((&___behaviour_4), value);
	}

	inline static int32_t get_offset_of_data_5() { return static_cast<int32_t>(offsetof(CategoryAttribute_t889864541_StaticFields, ___data_5)); }
	inline CategoryAttribute_t889864541 * get_data_5() const { return ___data_5; }
	inline CategoryAttribute_t889864541 ** get_address_of_data_5() { return &___data_5; }
	inline void set_data_5(CategoryAttribute_t889864541 * value)
	{
		___data_5 = value;
		Il2CppCodeGenWriteBarrier((&___data_5), value);
	}

	inline static int32_t get_offset_of_def_6() { return static_cast<int32_t>(offsetof(CategoryAttribute_t889864541_StaticFields, ___def_6)); }
	inline CategoryAttribute_t889864541 * get_def_6() const { return ___def_6; }
	inline CategoryAttribute_t889864541 ** get_address_of_def_6() { return &___def_6; }
	inline void set_def_6(CategoryAttribute_t889864541 * value)
	{
		___def_6 = value;
		Il2CppCodeGenWriteBarrier((&___def_6), value);
	}

	inline static int32_t get_offset_of_design_7() { return static_cast<int32_t>(offsetof(CategoryAttribute_t889864541_StaticFields, ___design_7)); }
	inline CategoryAttribute_t889864541 * get_design_7() const { return ___design_7; }
	inline CategoryAttribute_t889864541 ** get_address_of_design_7() { return &___design_7; }
	inline void set_design_7(CategoryAttribute_t889864541 * value)
	{
		___design_7 = value;
		Il2CppCodeGenWriteBarrier((&___design_7), value);
	}

	inline static int32_t get_offset_of_drag_drop_8() { return static_cast<int32_t>(offsetof(CategoryAttribute_t889864541_StaticFields, ___drag_drop_8)); }
	inline CategoryAttribute_t889864541 * get_drag_drop_8() const { return ___drag_drop_8; }
	inline CategoryAttribute_t889864541 ** get_address_of_drag_drop_8() { return &___drag_drop_8; }
	inline void set_drag_drop_8(CategoryAttribute_t889864541 * value)
	{
		___drag_drop_8 = value;
		Il2CppCodeGenWriteBarrier((&___drag_drop_8), value);
	}

	inline static int32_t get_offset_of_focus_9() { return static_cast<int32_t>(offsetof(CategoryAttribute_t889864541_StaticFields, ___focus_9)); }
	inline CategoryAttribute_t889864541 * get_focus_9() const { return ___focus_9; }
	inline CategoryAttribute_t889864541 ** get_address_of_focus_9() { return &___focus_9; }
	inline void set_focus_9(CategoryAttribute_t889864541 * value)
	{
		___focus_9 = value;
		Il2CppCodeGenWriteBarrier((&___focus_9), value);
	}

	inline static int32_t get_offset_of_format_10() { return static_cast<int32_t>(offsetof(CategoryAttribute_t889864541_StaticFields, ___format_10)); }
	inline CategoryAttribute_t889864541 * get_format_10() const { return ___format_10; }
	inline CategoryAttribute_t889864541 ** get_address_of_format_10() { return &___format_10; }
	inline void set_format_10(CategoryAttribute_t889864541 * value)
	{
		___format_10 = value;
		Il2CppCodeGenWriteBarrier((&___format_10), value);
	}

	inline static int32_t get_offset_of_key_11() { return static_cast<int32_t>(offsetof(CategoryAttribute_t889864541_StaticFields, ___key_11)); }
	inline CategoryAttribute_t889864541 * get_key_11() const { return ___key_11; }
	inline CategoryAttribute_t889864541 ** get_address_of_key_11() { return &___key_11; }
	inline void set_key_11(CategoryAttribute_t889864541 * value)
	{
		___key_11 = value;
		Il2CppCodeGenWriteBarrier((&___key_11), value);
	}

	inline static int32_t get_offset_of_layout_12() { return static_cast<int32_t>(offsetof(CategoryAttribute_t889864541_StaticFields, ___layout_12)); }
	inline CategoryAttribute_t889864541 * get_layout_12() const { return ___layout_12; }
	inline CategoryAttribute_t889864541 ** get_address_of_layout_12() { return &___layout_12; }
	inline void set_layout_12(CategoryAttribute_t889864541 * value)
	{
		___layout_12 = value;
		Il2CppCodeGenWriteBarrier((&___layout_12), value);
	}

	inline static int32_t get_offset_of_mouse_13() { return static_cast<int32_t>(offsetof(CategoryAttribute_t889864541_StaticFields, ___mouse_13)); }
	inline CategoryAttribute_t889864541 * get_mouse_13() const { return ___mouse_13; }
	inline CategoryAttribute_t889864541 ** get_address_of_mouse_13() { return &___mouse_13; }
	inline void set_mouse_13(CategoryAttribute_t889864541 * value)
	{
		___mouse_13 = value;
		Il2CppCodeGenWriteBarrier((&___mouse_13), value);
	}

	inline static int32_t get_offset_of_window_style_14() { return static_cast<int32_t>(offsetof(CategoryAttribute_t889864541_StaticFields, ___window_style_14)); }
	inline CategoryAttribute_t889864541 * get_window_style_14() const { return ___window_style_14; }
	inline CategoryAttribute_t889864541 ** get_address_of_window_style_14() { return &___window_style_14; }
	inline void set_window_style_14(CategoryAttribute_t889864541 * value)
	{
		___window_style_14 = value;
		Il2CppCodeGenWriteBarrier((&___window_style_14), value);
	}

	inline static int32_t get_offset_of_async_15() { return static_cast<int32_t>(offsetof(CategoryAttribute_t889864541_StaticFields, ___async_15)); }
	inline CategoryAttribute_t889864541 * get_async_15() const { return ___async_15; }
	inline CategoryAttribute_t889864541 ** get_address_of_async_15() { return &___async_15; }
	inline void set_async_15(CategoryAttribute_t889864541 * value)
	{
		___async_15 = value;
		Il2CppCodeGenWriteBarrier((&___async_15), value);
	}

	inline static int32_t get_offset_of_lockobj_16() { return static_cast<int32_t>(offsetof(CategoryAttribute_t889864541_StaticFields, ___lockobj_16)); }
	inline RuntimeObject * get_lockobj_16() const { return ___lockobj_16; }
	inline RuntimeObject ** get_address_of_lockobj_16() { return &___lockobj_16; }
	inline void set_lockobj_16(RuntimeObject * value)
	{
		___lockobj_16 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CATEGORYATTRIBUTE_T889864541_H
#ifndef U24ARRAYTYPEU2448_T3660962612_H
#define U24ARRAYTYPEU2448_T3660962612_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$48
struct  U24ArrayTypeU2448_t3660962612 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2448_t3660962612__padding[48];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2448_T3660962612_H
#ifndef CHARCONVERTER_T542705543_H
#define CHARCONVERTER_T542705543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CharConverter
struct  CharConverter_t542705543  : public TypeConverter_t2001479086
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARCONVERTER_T542705543_H
#ifndef U24ARRAYTYPEU2432_T1339992381_H
#define U24ARRAYTYPEU2432_T1339992381_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$32
struct  U24ArrayTypeU2432_t1339992381 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2432_t1339992381__padding[32];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2432_T1339992381_H
#ifndef U24ARRAYTYPEU2420_T2641520735_H
#define U24ARRAYTYPEU2420_T2641520735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$20
struct  U24ArrayTypeU2420_t2641520735 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2420_t2641520735__padding[20];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2420_T2641520735_H
#ifndef COLLECTIONCONVERTER_T931347293_H
#define COLLECTIONCONVERTER_T931347293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionConverter
struct  CollectionConverter_t931347293  : public TypeConverter_t2001479086
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCONVERTER_T931347293_H
#ifndef U24ARRAYTYPEU24256_T4177536843_H
#define U24ARRAYTYPEU24256_T4177536843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$256
struct  U24ArrayTypeU24256_t4177536843 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24256_t4177536843__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24256_T4177536843_H
#ifndef COMPONENTCOLLECTION_T2022985066_H
#define COMPONENTCOLLECTION_T2022985066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentCollection
struct  ComponentCollection_t2022985066  : public ReadOnlyCollectionBase_t4027908575
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCOLLECTION_T2022985066_H
#ifndef U24ARRAYTYPEU243132_T3340097257_H
#define U24ARRAYTYPEU243132_T3340097257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$3132
struct  U24ArrayTypeU243132_t3340097257 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU243132_t3340097257__padding[3132];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU243132_T3340097257_H
#ifndef CULTUREINFOCONVERTER_T1462377855_H
#define CULTUREINFOCONVERTER_T1462377855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter
struct  CultureInfoConverter_t1462377855  : public TypeConverter_t2001479086
{
public:
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.CultureInfoConverter::_standardValues
	StandardValuesCollection_t2127283394 * ____standardValues_0;

public:
	inline static int32_t get_offset_of__standardValues_0() { return static_cast<int32_t>(offsetof(CultureInfoConverter_t1462377855, ____standardValues_0)); }
	inline StandardValuesCollection_t2127283394 * get__standardValues_0() const { return ____standardValues_0; }
	inline StandardValuesCollection_t2127283394 ** get_address_of__standardValues_0() { return &____standardValues_0; }
	inline void set__standardValues_0(StandardValuesCollection_t2127283394 * value)
	{
		____standardValues_0 = value;
		Il2CppCodeGenWriteBarrier((&____standardValues_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCONVERTER_T1462377855_H
#ifndef U24ARRAYTYPEU2464_T3454428726_H
#define U24ARRAYTYPEU2464_T3454428726_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$64
struct  U24ArrayTypeU2464_t3454428726 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2464_t3454428726__padding[64];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2464_T3454428726_H
#ifndef RUNTIMELICENSECONTEXT_T1034181371_H
#define RUNTIMELICENSECONTEXT_T1034181371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.RuntimeLicenseContext
struct  RuntimeLicenseContext_t1034181371  : public LicenseContext_t1040877086
{
public:
	// System.Collections.Hashtable System.ComponentModel.Design.RuntimeLicenseContext::extraassemblies
	Hashtable_t3133650694 * ___extraassemblies_0;
	// System.Collections.Hashtable System.ComponentModel.Design.RuntimeLicenseContext::keys
	Hashtable_t3133650694 * ___keys_1;

public:
	inline static int32_t get_offset_of_extraassemblies_0() { return static_cast<int32_t>(offsetof(RuntimeLicenseContext_t1034181371, ___extraassemblies_0)); }
	inline Hashtable_t3133650694 * get_extraassemblies_0() const { return ___extraassemblies_0; }
	inline Hashtable_t3133650694 ** get_address_of_extraassemblies_0() { return &___extraassemblies_0; }
	inline void set_extraassemblies_0(Hashtable_t3133650694 * value)
	{
		___extraassemblies_0 = value;
		Il2CppCodeGenWriteBarrier((&___extraassemblies_0), value);
	}

	inline static int32_t get_offset_of_keys_1() { return static_cast<int32_t>(offsetof(RuntimeLicenseContext_t1034181371, ___keys_1)); }
	inline Hashtable_t3133650694 * get_keys_1() const { return ___keys_1; }
	inline Hashtable_t3133650694 ** get_address_of_keys_1() { return &___keys_1; }
	inline void set_keys_1(Hashtable_t3133650694 * value)
	{
		___keys_1 = value;
		Il2CppCodeGenWriteBarrier((&___keys_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMELICENSECONTEXT_T1034181371_H
#ifndef MONONOTSUPPORTEDATTRIBUTE_T3541619152_H
#define MONONOTSUPPORTEDATTRIBUTE_T3541619152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoNotSupportedAttribute
struct  MonoNotSupportedAttribute_t3541619152  : public MonoTODOAttribute_t2595381982
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONONOTSUPPORTEDATTRIBUTE_T3541619152_H
#ifndef DECIMALCONVERTER_T1565655735_H
#define DECIMALCONVERTER_T1565655735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DecimalConverter
struct  DecimalConverter_t1565655735  : public BaseNumberConverter_t982962682
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMALCONVERTER_T1565655735_H
#ifndef ARRAYPROPERTYDESCRIPTOR_T2000432523_H
#define ARRAYPROPERTYDESCRIPTOR_T2000432523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor
struct  ArrayPropertyDescriptor_t2000432523  : public PropertyDescriptor_t1106879253
{
public:
	// System.Int32 System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::index
	int32_t ___index_6;
	// System.Type System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::array_type
	Type_t * ___array_type_7;

public:
	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(ArrayPropertyDescriptor_t2000432523, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}

	inline static int32_t get_offset_of_array_type_7() { return static_cast<int32_t>(offsetof(ArrayPropertyDescriptor_t2000432523, ___array_type_7)); }
	inline Type_t * get_array_type_7() const { return ___array_type_7; }
	inline Type_t ** get_address_of_array_type_7() { return &___array_type_7; }
	inline void set_array_type_7(Type_t * value)
	{
		___array_type_7 = value;
		Il2CppCodeGenWriteBarrier((&___array_type_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYPROPERTYDESCRIPTOR_T2000432523_H
#ifndef BINDABLESUPPORT_T2889004419_H
#define BINDABLESUPPORT_T2889004419_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BindableSupport
struct  BindableSupport_t2889004419 
{
public:
	// System.Int32 System.ComponentModel.BindableSupport::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindableSupport_t2889004419, ___value___1)); }
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
#endif // BINDABLESUPPORT_T2889004419_H
#ifndef EDITORBROWSABLESTATE_T3457220815_H
#define EDITORBROWSABLESTATE_T3457220815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableState
struct  EditorBrowsableState_t3457220815 
{
public:
	// System.Int32 System.ComponentModel.EditorBrowsableState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EditorBrowsableState_t3457220815, ___value___1)); }
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
#endif // EDITORBROWSABLESTATE_T3457220815_H
#ifndef BYTECONVERTER_T2402810964_H
#define BYTECONVERTER_T2402810964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ByteConverter
struct  ByteConverter_t2402810964  : public BaseNumberConverter_t982962682
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTECONVERTER_T2402810964_H
#ifndef DOUBLECONVERTER_T1638652508_H
#define DOUBLECONVERTER_T1638652508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DoubleConverter
struct  DoubleConverter_t1638652508  : public BaseNumberConverter_t982962682
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLECONVERTER_T1638652508_H
#ifndef DESIGNERSERIALIZATIONVISIBILITY_T2518880192_H
#define DESIGNERSERIALIZATIONVISIBILITY_T2518880192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibility
struct  DesignerSerializationVisibility_t2518880192 
{
public:
	// System.Int32 System.ComponentModel.DesignerSerializationVisibility::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibility_t2518880192, ___value___1)); }
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
#endif // DESIGNERSERIALIZATIONVISIBILITY_T2518880192_H
#ifndef COLLECTIONCHANGEACTION_T880686322_H
#define COLLECTIONCHANGEACTION_T880686322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeAction
struct  CollectionChangeAction_t880686322 
{
public:
	// System.Int32 System.ComponentModel.CollectionChangeAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CollectionChangeAction_t880686322, ___value___1)); }
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
#endif // COLLECTIONCHANGEACTION_T880686322_H
#ifndef DELEGATE_T530926524_H
#define DELEGATE_T530926524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t530926524  : public RuntimeObject
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
	DelegateData_t2550494111 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t530926524, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t530926524, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t530926524, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t530926524, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t530926524, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t530926524, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t530926524, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t530926524, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t530926524, ___data_8)); }
	inline DelegateData_t2550494111 * get_data_8() const { return ___data_8; }
	inline DelegateData_t2550494111 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t2550494111 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T530926524_H
#ifndef COMPONENTCONVERTER_T283990366_H
#define COMPONENTCONVERTER_T283990366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentConverter
struct  ComponentConverter_t283990366  : public ReferenceConverter_t335890391
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCONVERTER_T283990366_H
#ifndef ARRAYCONVERTER_T3338762869_H
#define ARRAYCONVERTER_T3338762869_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ArrayConverter
struct  ArrayConverter_t3338762869  : public CollectionConverter_t931347293
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYCONVERTER_T3338762869_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2604662338_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2604662338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t2604662338  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t2604662338_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$3132 <PrivateImplementationDetails>::$$field-0
	U24ArrayTypeU243132_t3340097257  ___U24U24fieldU2D0_0;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-5
	U24ArrayTypeU24256_t4177536843  ___U24U24fieldU2D5_1;
	// <PrivateImplementationDetails>/$ArrayType$20 <PrivateImplementationDetails>::$$field-6
	U24ArrayTypeU2420_t2641520735  ___U24U24fieldU2D6_2;
	// <PrivateImplementationDetails>/$ArrayType$32 <PrivateImplementationDetails>::$$field-7
	U24ArrayTypeU2432_t1339992381  ___U24U24fieldU2D7_3;
	// <PrivateImplementationDetails>/$ArrayType$48 <PrivateImplementationDetails>::$$field-8
	U24ArrayTypeU2448_t3660962612  ___U24U24fieldU2D8_4;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-9
	U24ArrayTypeU2464_t3454428726  ___U24U24fieldU2D9_5;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-11
	U24ArrayTypeU2464_t3454428726  ___U24U24fieldU2D11_6;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-12
	U24ArrayTypeU2464_t3454428726  ___U24U24fieldU2D12_7;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-13
	U24ArrayTypeU2464_t3454428726  ___U24U24fieldU2D13_8;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-14
	U24ArrayTypeU2412_t18308275  ___U24U24fieldU2D14_9;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-15
	U24ArrayTypeU2412_t18308275  ___U24U24fieldU2D15_10;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-16
	U24ArrayTypeU2412_t18308275  ___U24U24fieldU2D16_11;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-17
	U24ArrayTypeU2416_t2916704539  ___U24U24fieldU2D17_12;
	// <PrivateImplementationDetails>/$ArrayType$4 <PrivateImplementationDetails>::$$field-21
	U24ArrayTypeU244_t2805914011  ___U24U24fieldU2D21_13;
	// <PrivateImplementationDetails>/$ArrayType$4 <PrivateImplementationDetails>::$$field-22
	U24ArrayTypeU244_t2805914011  ___U24U24fieldU2D22_14;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2604662338_StaticFields, ___U24U24fieldU2D0_0)); }
	inline U24ArrayTypeU243132_t3340097257  get_U24U24fieldU2D0_0() const { return ___U24U24fieldU2D0_0; }
	inline U24ArrayTypeU243132_t3340097257 * get_address_of_U24U24fieldU2D0_0() { return &___U24U24fieldU2D0_0; }
	inline void set_U24U24fieldU2D0_0(U24ArrayTypeU243132_t3340097257  value)
	{
		___U24U24fieldU2D0_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D5_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2604662338_StaticFields, ___U24U24fieldU2D5_1)); }
	inline U24ArrayTypeU24256_t4177536843  get_U24U24fieldU2D5_1() const { return ___U24U24fieldU2D5_1; }
	inline U24ArrayTypeU24256_t4177536843 * get_address_of_U24U24fieldU2D5_1() { return &___U24U24fieldU2D5_1; }
	inline void set_U24U24fieldU2D5_1(U24ArrayTypeU24256_t4177536843  value)
	{
		___U24U24fieldU2D5_1 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D6_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2604662338_StaticFields, ___U24U24fieldU2D6_2)); }
	inline U24ArrayTypeU2420_t2641520735  get_U24U24fieldU2D6_2() const { return ___U24U24fieldU2D6_2; }
	inline U24ArrayTypeU2420_t2641520735 * get_address_of_U24U24fieldU2D6_2() { return &___U24U24fieldU2D6_2; }
	inline void set_U24U24fieldU2D6_2(U24ArrayTypeU2420_t2641520735  value)
	{
		___U24U24fieldU2D6_2 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D7_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2604662338_StaticFields, ___U24U24fieldU2D7_3)); }
	inline U24ArrayTypeU2432_t1339992381  get_U24U24fieldU2D7_3() const { return ___U24U24fieldU2D7_3; }
	inline U24ArrayTypeU2432_t1339992381 * get_address_of_U24U24fieldU2D7_3() { return &___U24U24fieldU2D7_3; }
	inline void set_U24U24fieldU2D7_3(U24ArrayTypeU2432_t1339992381  value)
	{
		___U24U24fieldU2D7_3 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D8_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2604662338_StaticFields, ___U24U24fieldU2D8_4)); }
	inline U24ArrayTypeU2448_t3660962612  get_U24U24fieldU2D8_4() const { return ___U24U24fieldU2D8_4; }
	inline U24ArrayTypeU2448_t3660962612 * get_address_of_U24U24fieldU2D8_4() { return &___U24U24fieldU2D8_4; }
	inline void set_U24U24fieldU2D8_4(U24ArrayTypeU2448_t3660962612  value)
	{
		___U24U24fieldU2D8_4 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D9_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2604662338_StaticFields, ___U24U24fieldU2D9_5)); }
	inline U24ArrayTypeU2464_t3454428726  get_U24U24fieldU2D9_5() const { return ___U24U24fieldU2D9_5; }
	inline U24ArrayTypeU2464_t3454428726 * get_address_of_U24U24fieldU2D9_5() { return &___U24U24fieldU2D9_5; }
	inline void set_U24U24fieldU2D9_5(U24ArrayTypeU2464_t3454428726  value)
	{
		___U24U24fieldU2D9_5 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D11_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2604662338_StaticFields, ___U24U24fieldU2D11_6)); }
	inline U24ArrayTypeU2464_t3454428726  get_U24U24fieldU2D11_6() const { return ___U24U24fieldU2D11_6; }
	inline U24ArrayTypeU2464_t3454428726 * get_address_of_U24U24fieldU2D11_6() { return &___U24U24fieldU2D11_6; }
	inline void set_U24U24fieldU2D11_6(U24ArrayTypeU2464_t3454428726  value)
	{
		___U24U24fieldU2D11_6 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D12_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2604662338_StaticFields, ___U24U24fieldU2D12_7)); }
	inline U24ArrayTypeU2464_t3454428726  get_U24U24fieldU2D12_7() const { return ___U24U24fieldU2D12_7; }
	inline U24ArrayTypeU2464_t3454428726 * get_address_of_U24U24fieldU2D12_7() { return &___U24U24fieldU2D12_7; }
	inline void set_U24U24fieldU2D12_7(U24ArrayTypeU2464_t3454428726  value)
	{
		___U24U24fieldU2D12_7 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D13_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2604662338_StaticFields, ___U24U24fieldU2D13_8)); }
	inline U24ArrayTypeU2464_t3454428726  get_U24U24fieldU2D13_8() const { return ___U24U24fieldU2D13_8; }
	inline U24ArrayTypeU2464_t3454428726 * get_address_of_U24U24fieldU2D13_8() { return &___U24U24fieldU2D13_8; }
	inline void set_U24U24fieldU2D13_8(U24ArrayTypeU2464_t3454428726  value)
	{
		___U24U24fieldU2D13_8 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D14_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2604662338_StaticFields, ___U24U24fieldU2D14_9)); }
	inline U24ArrayTypeU2412_t18308275  get_U24U24fieldU2D14_9() const { return ___U24U24fieldU2D14_9; }
	inline U24ArrayTypeU2412_t18308275 * get_address_of_U24U24fieldU2D14_9() { return &___U24U24fieldU2D14_9; }
	inline void set_U24U24fieldU2D14_9(U24ArrayTypeU2412_t18308275  value)
	{
		___U24U24fieldU2D14_9 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D15_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2604662338_StaticFields, ___U24U24fieldU2D15_10)); }
	inline U24ArrayTypeU2412_t18308275  get_U24U24fieldU2D15_10() const { return ___U24U24fieldU2D15_10; }
	inline U24ArrayTypeU2412_t18308275 * get_address_of_U24U24fieldU2D15_10() { return &___U24U24fieldU2D15_10; }
	inline void set_U24U24fieldU2D15_10(U24ArrayTypeU2412_t18308275  value)
	{
		___U24U24fieldU2D15_10 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D16_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2604662338_StaticFields, ___U24U24fieldU2D16_11)); }
	inline U24ArrayTypeU2412_t18308275  get_U24U24fieldU2D16_11() const { return ___U24U24fieldU2D16_11; }
	inline U24ArrayTypeU2412_t18308275 * get_address_of_U24U24fieldU2D16_11() { return &___U24U24fieldU2D16_11; }
	inline void set_U24U24fieldU2D16_11(U24ArrayTypeU2412_t18308275  value)
	{
		___U24U24fieldU2D16_11 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D17_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2604662338_StaticFields, ___U24U24fieldU2D17_12)); }
	inline U24ArrayTypeU2416_t2916704539  get_U24U24fieldU2D17_12() const { return ___U24U24fieldU2D17_12; }
	inline U24ArrayTypeU2416_t2916704539 * get_address_of_U24U24fieldU2D17_12() { return &___U24U24fieldU2D17_12; }
	inline void set_U24U24fieldU2D17_12(U24ArrayTypeU2416_t2916704539  value)
	{
		___U24U24fieldU2D17_12 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D21_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2604662338_StaticFields, ___U24U24fieldU2D21_13)); }
	inline U24ArrayTypeU244_t2805914011  get_U24U24fieldU2D21_13() const { return ___U24U24fieldU2D21_13; }
	inline U24ArrayTypeU244_t2805914011 * get_address_of_U24U24fieldU2D21_13() { return &___U24U24fieldU2D21_13; }
	inline void set_U24U24fieldU2D21_13(U24ArrayTypeU244_t2805914011  value)
	{
		___U24U24fieldU2D21_13 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D22_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2604662338_StaticFields, ___U24U24fieldU2D22_14)); }
	inline U24ArrayTypeU244_t2805914011  get_U24U24fieldU2D22_14() const { return ___U24U24fieldU2D22_14; }
	inline U24ArrayTypeU244_t2805914011 * get_address_of_U24U24fieldU2D22_14() { return &___U24U24fieldU2D22_14; }
	inline void set_U24U24fieldU2D22_14(U24ArrayTypeU244_t2805914011  value)
	{
		___U24U24fieldU2D22_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2604662338_H
#ifndef EDITORBROWSABLEATTRIBUTE_T1739136341_H
#define EDITORBROWSABLEATTRIBUTE_T1739136341_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableAttribute
struct  EditorBrowsableAttribute_t1739136341  : public Attribute_t4057762188
{
public:
	// System.ComponentModel.EditorBrowsableState System.ComponentModel.EditorBrowsableAttribute::state
	int32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(EditorBrowsableAttribute_t1739136341, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORBROWSABLEATTRIBUTE_T1739136341_H
#ifndef MULTICASTDELEGATE_T1834935894_H
#define MULTICASTDELEGATE_T1834935894_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t1834935894  : public Delegate_t530926524
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t1834935894 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t1834935894 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1834935894, ___prev_9)); }
	inline MulticastDelegate_t1834935894 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t1834935894 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t1834935894 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1834935894, ___kpm_next_10)); }
	inline MulticastDelegate_t1834935894 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t1834935894 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t1834935894 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T1834935894_H
#ifndef DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T3474551747_H
#define DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T3474551747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibilityAttribute
struct  DesignerSerializationVisibilityAttribute_t3474551747  : public Attribute_t4057762188
{
public:
	// System.ComponentModel.DesignerSerializationVisibility System.ComponentModel.DesignerSerializationVisibilityAttribute::visibility
	int32_t ___visibility_0;

public:
	inline static int32_t get_offset_of_visibility_0() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t3474551747, ___visibility_0)); }
	inline int32_t get_visibility_0() const { return ___visibility_0; }
	inline int32_t* get_address_of_visibility_0() { return &___visibility_0; }
	inline void set_visibility_0(int32_t value)
	{
		___visibility_0 = value;
	}
};

struct DesignerSerializationVisibilityAttribute_t3474551747_StaticFields
{
public:
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Default
	DesignerSerializationVisibilityAttribute_t3474551747 * ___Default_1;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Content
	DesignerSerializationVisibilityAttribute_t3474551747 * ___Content_2;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Hidden
	DesignerSerializationVisibilityAttribute_t3474551747 * ___Hidden_3;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Visible
	DesignerSerializationVisibilityAttribute_t3474551747 * ___Visible_4;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t3474551747_StaticFields, ___Default_1)); }
	inline DesignerSerializationVisibilityAttribute_t3474551747 * get_Default_1() const { return ___Default_1; }
	inline DesignerSerializationVisibilityAttribute_t3474551747 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignerSerializationVisibilityAttribute_t3474551747 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_Content_2() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t3474551747_StaticFields, ___Content_2)); }
	inline DesignerSerializationVisibilityAttribute_t3474551747 * get_Content_2() const { return ___Content_2; }
	inline DesignerSerializationVisibilityAttribute_t3474551747 ** get_address_of_Content_2() { return &___Content_2; }
	inline void set_Content_2(DesignerSerializationVisibilityAttribute_t3474551747 * value)
	{
		___Content_2 = value;
		Il2CppCodeGenWriteBarrier((&___Content_2), value);
	}

	inline static int32_t get_offset_of_Hidden_3() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t3474551747_StaticFields, ___Hidden_3)); }
	inline DesignerSerializationVisibilityAttribute_t3474551747 * get_Hidden_3() const { return ___Hidden_3; }
	inline DesignerSerializationVisibilityAttribute_t3474551747 ** get_address_of_Hidden_3() { return &___Hidden_3; }
	inline void set_Hidden_3(DesignerSerializationVisibilityAttribute_t3474551747 * value)
	{
		___Hidden_3 = value;
		Il2CppCodeGenWriteBarrier((&___Hidden_3), value);
	}

	inline static int32_t get_offset_of_Visible_4() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t3474551747_StaticFields, ___Visible_4)); }
	inline DesignerSerializationVisibilityAttribute_t3474551747 * get_Visible_4() const { return ___Visible_4; }
	inline DesignerSerializationVisibilityAttribute_t3474551747 ** get_address_of_Visible_4() { return &___Visible_4; }
	inline void set_Visible_4(DesignerSerializationVisibilityAttribute_t3474551747 * value)
	{
		___Visible_4 = value;
		Il2CppCodeGenWriteBarrier((&___Visible_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T3474551747_H
#ifndef COLLECTIONCHANGEEVENTARGS_T920514057_H
#define COLLECTIONCHANGEEVENTARGS_T920514057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeEventArgs
struct  CollectionChangeEventArgs_t920514057  : public EventArgs_t3467505009
{
public:
	// System.ComponentModel.CollectionChangeAction System.ComponentModel.CollectionChangeEventArgs::changeAction
	int32_t ___changeAction_1;
	// System.Object System.ComponentModel.CollectionChangeEventArgs::theElement
	RuntimeObject * ___theElement_2;

public:
	inline static int32_t get_offset_of_changeAction_1() { return static_cast<int32_t>(offsetof(CollectionChangeEventArgs_t920514057, ___changeAction_1)); }
	inline int32_t get_changeAction_1() const { return ___changeAction_1; }
	inline int32_t* get_address_of_changeAction_1() { return &___changeAction_1; }
	inline void set_changeAction_1(int32_t value)
	{
		___changeAction_1 = value;
	}

	inline static int32_t get_offset_of_theElement_2() { return static_cast<int32_t>(offsetof(CollectionChangeEventArgs_t920514057, ___theElement_2)); }
	inline RuntimeObject * get_theElement_2() const { return ___theElement_2; }
	inline RuntimeObject ** get_address_of_theElement_2() { return &___theElement_2; }
	inline void set_theElement_2(RuntimeObject * value)
	{
		___theElement_2 = value;
		Il2CppCodeGenWriteBarrier((&___theElement_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCHANGEEVENTARGS_T920514057_H
#ifndef PROCESSWORKEREVENTHANDLER_T1485813510_H
#define PROCESSWORKEREVENTHANDLER_T1485813510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BackgroundWorker/ProcessWorkerEventHandler
struct  ProcessWorkerEventHandler_t1485813510  : public MulticastDelegate_t1834935894
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROCESSWORKEREVENTHANDLER_T1485813510_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1100 = { sizeof (U3CPrivateImplementationDetailsU3E_t2604662338), -1, sizeof(U3CPrivateImplementationDetailsU3E_t2604662338_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1100[15] = 
{
	U3CPrivateImplementationDetailsU3E_t2604662338_StaticFields::get_offset_of_U24U24fieldU2D0_0(),
	U3CPrivateImplementationDetailsU3E_t2604662338_StaticFields::get_offset_of_U24U24fieldU2D5_1(),
	U3CPrivateImplementationDetailsU3E_t2604662338_StaticFields::get_offset_of_U24U24fieldU2D6_2(),
	U3CPrivateImplementationDetailsU3E_t2604662338_StaticFields::get_offset_of_U24U24fieldU2D7_3(),
	U3CPrivateImplementationDetailsU3E_t2604662338_StaticFields::get_offset_of_U24U24fieldU2D8_4(),
	U3CPrivateImplementationDetailsU3E_t2604662338_StaticFields::get_offset_of_U24U24fieldU2D9_5(),
	U3CPrivateImplementationDetailsU3E_t2604662338_StaticFields::get_offset_of_U24U24fieldU2D11_6(),
	U3CPrivateImplementationDetailsU3E_t2604662338_StaticFields::get_offset_of_U24U24fieldU2D12_7(),
	U3CPrivateImplementationDetailsU3E_t2604662338_StaticFields::get_offset_of_U24U24fieldU2D13_8(),
	U3CPrivateImplementationDetailsU3E_t2604662338_StaticFields::get_offset_of_U24U24fieldU2D14_9(),
	U3CPrivateImplementationDetailsU3E_t2604662338_StaticFields::get_offset_of_U24U24fieldU2D15_10(),
	U3CPrivateImplementationDetailsU3E_t2604662338_StaticFields::get_offset_of_U24U24fieldU2D16_11(),
	U3CPrivateImplementationDetailsU3E_t2604662338_StaticFields::get_offset_of_U24U24fieldU2D17_12(),
	U3CPrivateImplementationDetailsU3E_t2604662338_StaticFields::get_offset_of_U24U24fieldU2D21_13(),
	U3CPrivateImplementationDetailsU3E_t2604662338_StaticFields::get_offset_of_U24U24fieldU2D22_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1101 = { sizeof (U24ArrayTypeU243132_t3340097257)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU243132_t3340097257 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1102 = { sizeof (U24ArrayTypeU24256_t4177536843)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24256_t4177536843 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1103 = { sizeof (U24ArrayTypeU2420_t2641520735)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2420_t2641520735 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1104 = { sizeof (U24ArrayTypeU2432_t1339992381)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2432_t1339992381 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1105 = { sizeof (U24ArrayTypeU2448_t3660962612)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2448_t3660962612 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1106 = { sizeof (U24ArrayTypeU2464_t3454428726)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2464_t3454428726 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1107 = { sizeof (U24ArrayTypeU2412_t18308275)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2412_t18308275 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1108 = { sizeof (U24ArrayTypeU2416_t2916704539)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2416_t2916704539 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1109 = { sizeof (U24ArrayTypeU244_t2805914011)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU244_t2805914011 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1110 = { sizeof (U3CModuleU3E_t3931798274), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1111 = { sizeof (Locale_t1555723068), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1112 = { sizeof (MonoTODOAttribute_t2595381982), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1112[1] = 
{
	MonoTODOAttribute_t2595381982::get_offset_of_comment_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1113 = { sizeof (MonoNotSupportedAttribute_t3541619152), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1114 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1114[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1115 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1115[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1116 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1116[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1117 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1117[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1118 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1118[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1119 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1119[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1120 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1120[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1121 = { sizeof (HybridDictionary_t3537612488), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1121[3] = 
{
	HybridDictionary_t3537612488::get_offset_of_caseInsensitive_0(),
	HybridDictionary_t3537612488::get_offset_of_hashtable_1(),
	HybridDictionary_t3537612488::get_offset_of_list_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1122 = { sizeof (ListDictionary_t541953592), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1122[4] = 
{
	ListDictionary_t541953592::get_offset_of_count_0(),
	ListDictionary_t541953592::get_offset_of_version_1(),
	ListDictionary_t541953592::get_offset_of_head_2(),
	ListDictionary_t541953592::get_offset_of_comparer_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1123 = { sizeof (DictionaryNode_t1584964580), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1123[3] = 
{
	DictionaryNode_t1584964580::get_offset_of_key_0(),
	DictionaryNode_t1584964580::get_offset_of_value_1(),
	DictionaryNode_t1584964580::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1124 = { sizeof (DictionaryNodeEnumerator_t738045227), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1124[4] = 
{
	DictionaryNodeEnumerator_t738045227::get_offset_of_dict_0(),
	DictionaryNodeEnumerator_t738045227::get_offset_of_isAtStart_1(),
	DictionaryNodeEnumerator_t738045227::get_offset_of_current_2(),
	DictionaryNodeEnumerator_t738045227::get_offset_of_version_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1125 = { sizeof (DictionaryNodeCollection_t388003767), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1125[2] = 
{
	DictionaryNodeCollection_t388003767::get_offset_of_dict_0(),
	DictionaryNodeCollection_t388003767::get_offset_of_isKeyList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1126 = { sizeof (DictionaryNodeCollectionEnumerator_t2686277774), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1126[2] = 
{
	DictionaryNodeCollectionEnumerator_t2686277774::get_offset_of_inner_0(),
	DictionaryNodeCollectionEnumerator_t2686277774::get_offset_of_isKeyList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1127 = { sizeof (NameObjectCollectionBase_t609721825), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1127[10] = 
{
	NameObjectCollectionBase_t609721825::get_offset_of_m_ItemsContainer_0(),
	NameObjectCollectionBase_t609721825::get_offset_of_m_NullKeyItem_1(),
	NameObjectCollectionBase_t609721825::get_offset_of_m_ItemsArray_2(),
	NameObjectCollectionBase_t609721825::get_offset_of_m_hashprovider_3(),
	NameObjectCollectionBase_t609721825::get_offset_of_m_comparer_4(),
	NameObjectCollectionBase_t609721825::get_offset_of_m_defCapacity_5(),
	NameObjectCollectionBase_t609721825::get_offset_of_m_readonly_6(),
	NameObjectCollectionBase_t609721825::get_offset_of_infoCopy_7(),
	NameObjectCollectionBase_t609721825::get_offset_of_keyscoll_8(),
	NameObjectCollectionBase_t609721825::get_offset_of_equality_comparer_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1128 = { sizeof (_Item_t1118674511), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1128[2] = 
{
	_Item_t1118674511::get_offset_of_key_0(),
	_Item_t1118674511::get_offset_of_value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1129 = { sizeof (_KeysEnumerator_t2102342573), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1129[2] = 
{
	_KeysEnumerator_t2102342573::get_offset_of_m_collection_0(),
	_KeysEnumerator_t2102342573::get_offset_of_m_position_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1130 = { sizeof (KeysCollection_t1693114608), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1130[1] = 
{
	KeysCollection_t1693114608::get_offset_of_m_collection_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1131 = { sizeof (NameValueCollection_t3558975363), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1131[2] = 
{
	NameValueCollection_t3558975363::get_offset_of_cachedAllKeys_10(),
	NameValueCollection_t3558975363::get_offset_of_cachedAll_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1132 = { sizeof (InstanceDescriptor_t4179180459), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1132[3] = 
{
	InstanceDescriptor_t4179180459::get_offset_of_member_0(),
	InstanceDescriptor_t4179180459::get_offset_of_arguments_1(),
	InstanceDescriptor_t4179180459::get_offset_of_isComplete_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1133 = { sizeof (DesignerTransaction_t152248144), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1133[2] = 
{
	DesignerTransaction_t152248144::get_offset_of_committed_0(),
	DesignerTransaction_t152248144::get_offset_of_canceled_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1134 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1135 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1136 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1137 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1138 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1139 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1140 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1141 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1142 = { sizeof (RuntimeLicenseContext_t1034181371), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1142[2] = 
{
	RuntimeLicenseContext_t1034181371::get_offset_of_extraassemblies_0(),
	RuntimeLicenseContext_t1034181371::get_offset_of_keys_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1143 = { sizeof (ArrayConverter_t3338762869), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1144 = { sizeof (ArrayPropertyDescriptor_t2000432523), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1144[2] = 
{
	ArrayPropertyDescriptor_t2000432523::get_offset_of_index_6(),
	ArrayPropertyDescriptor_t2000432523::get_offset_of_array_type_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1145 = { sizeof (AsyncCompletedEventArgs_t2745088064), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1145[3] = 
{
	AsyncCompletedEventArgs_t2745088064::get_offset_of__error_1(),
	AsyncCompletedEventArgs_t2745088064::get_offset_of__cancelled_2(),
	AsyncCompletedEventArgs_t2745088064::get_offset_of__userState_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1146 = { sizeof (AsyncOperation_t10321140), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1146[3] = 
{
	AsyncOperation_t10321140::get_offset_of_ctx_0(),
	AsyncOperation_t10321140::get_offset_of_state_1(),
	AsyncOperation_t10321140::get_offset_of_done_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1147 = { sizeof (AsyncOperationManager_t3205135273), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1148 = { sizeof (AttributeCollection_t2705720300), -1, sizeof(AttributeCollection_t2705720300_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1148[2] = 
{
	AttributeCollection_t2705720300::get_offset_of_attrList_0(),
	AttributeCollection_t2705720300_StaticFields::get_offset_of_Empty_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1149 = { sizeof (BackgroundWorker_t1200524790), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1149[7] = 
{
	BackgroundWorker_t1200524790::get_offset_of_async_0(),
	BackgroundWorker_t1200524790::get_offset_of_cancel_pending_1(),
	BackgroundWorker_t1200524790::get_offset_of_report_progress_2(),
	BackgroundWorker_t1200524790::get_offset_of_support_cancel_3(),
	BackgroundWorker_t1200524790::get_offset_of_DoWork_4(),
	BackgroundWorker_t1200524790::get_offset_of_ProgressChanged_5(),
	BackgroundWorker_t1200524790::get_offset_of_RunWorkerCompleted_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1150 = { sizeof (ProcessWorkerEventHandler_t1485813510), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1151 = { sizeof (BaseNumberConverter_t982962682), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1151[1] = 
{
	BaseNumberConverter_t982962682::get_offset_of_InnerType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1152 = { sizeof (BindableSupport_t2889004419)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1152[4] = 
{
	BindableSupport_t2889004419::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1153 = { sizeof (BooleanConverter_t3282595427), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1154 = { sizeof (BrowsableAttribute_t1361691770), -1, sizeof(BrowsableAttribute_t1361691770_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1154[4] = 
{
	BrowsableAttribute_t1361691770::get_offset_of_browsable_0(),
	BrowsableAttribute_t1361691770_StaticFields::get_offset_of_Default_1(),
	BrowsableAttribute_t1361691770_StaticFields::get_offset_of_No_2(),
	BrowsableAttribute_t1361691770_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1155 = { sizeof (ByteConverter_t2402810964), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1156 = { sizeof (CancelEventArgs_t3665995220), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1156[1] = 
{
	CancelEventArgs_t3665995220::get_offset_of_cancel_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1157 = { sizeof (CategoryAttribute_t889864541), -1, sizeof(CategoryAttribute_t889864541_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1157[17] = 
{
	CategoryAttribute_t889864541::get_offset_of_category_0(),
	CategoryAttribute_t889864541::get_offset_of_IsLocalized_1(),
	CategoryAttribute_t889864541_StaticFields::get_offset_of_action_2(),
	CategoryAttribute_t889864541_StaticFields::get_offset_of_appearance_3(),
	CategoryAttribute_t889864541_StaticFields::get_offset_of_behaviour_4(),
	CategoryAttribute_t889864541_StaticFields::get_offset_of_data_5(),
	CategoryAttribute_t889864541_StaticFields::get_offset_of_def_6(),
	CategoryAttribute_t889864541_StaticFields::get_offset_of_design_7(),
	CategoryAttribute_t889864541_StaticFields::get_offset_of_drag_drop_8(),
	CategoryAttribute_t889864541_StaticFields::get_offset_of_focus_9(),
	CategoryAttribute_t889864541_StaticFields::get_offset_of_format_10(),
	CategoryAttribute_t889864541_StaticFields::get_offset_of_key_11(),
	CategoryAttribute_t889864541_StaticFields::get_offset_of_layout_12(),
	CategoryAttribute_t889864541_StaticFields::get_offset_of_mouse_13(),
	CategoryAttribute_t889864541_StaticFields::get_offset_of_window_style_14(),
	CategoryAttribute_t889864541_StaticFields::get_offset_of_async_15(),
	CategoryAttribute_t889864541_StaticFields::get_offset_of_lockobj_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1158 = { sizeof (CharConverter_t542705543), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1159 = { sizeof (CollectionChangeAction_t880686322)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1159[4] = 
{
	CollectionChangeAction_t880686322::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1160 = { sizeof (CollectionChangeEventArgs_t920514057), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1160[2] = 
{
	CollectionChangeEventArgs_t920514057::get_offset_of_changeAction_1(),
	CollectionChangeEventArgs_t920514057::get_offset_of_theElement_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1161 = { sizeof (CollectionConverter_t931347293), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1162 = { sizeof (Component_t2996391308), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1162[3] = 
{
	Component_t2996391308::get_offset_of_event_handlers_1(),
	Component_t2996391308::get_offset_of_mySite_2(),
	Component_t2996391308::get_offset_of_disposedEvent_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1163 = { sizeof (ComponentCollection_t2022985066), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1164 = { sizeof (ComponentConverter_t283990366), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1165 = { sizeof (CultureInfoConverter_t1462377855), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1165[1] = 
{
	CultureInfoConverter_t1462377855::get_offset_of__standardValues_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1166 = { sizeof (CultureInfoComparer_t3003882517), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1167 = { sizeof (CustomTypeDescriptor_t2263899598), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1167[1] = 
{
	CustomTypeDescriptor_t2263899598::get_offset_of__parent_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1168 = { sizeof (DateTimeConverter_t478313019), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1169 = { sizeof (DecimalConverter_t1565655735), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1170 = { sizeof (DefaultEventAttribute_t3932160556), -1, sizeof(DefaultEventAttribute_t3932160556_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1170[2] = 
{
	DefaultEventAttribute_t3932160556::get_offset_of_eventName_0(),
	DefaultEventAttribute_t3932160556_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1171 = { sizeof (DefaultPropertyAttribute_t523854110), -1, sizeof(DefaultPropertyAttribute_t523854110_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1171[2] = 
{
	DefaultPropertyAttribute_t523854110::get_offset_of_property_name_0(),
	DefaultPropertyAttribute_t523854110_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1172 = { sizeof (DefaultValueAttribute_t718856340), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1172[1] = 
{
	DefaultValueAttribute_t718856340::get_offset_of_DefaultValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1173 = { sizeof (DescriptionAttribute_t1430095322), -1, sizeof(DescriptionAttribute_t1430095322_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1173[2] = 
{
	DescriptionAttribute_t1430095322::get_offset_of_desc_0(),
	DescriptionAttribute_t1430095322_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1174 = { sizeof (DesignOnlyAttribute_t2627194611), -1, sizeof(DesignOnlyAttribute_t2627194611_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1174[4] = 
{
	DesignOnlyAttribute_t2627194611::get_offset_of_design_only_0(),
	DesignOnlyAttribute_t2627194611_StaticFields::get_offset_of_Default_1(),
	DesignOnlyAttribute_t2627194611_StaticFields::get_offset_of_No_2(),
	DesignOnlyAttribute_t2627194611_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1175 = { sizeof (DesignTimeVisibleAttribute_t4221633075), -1, sizeof(DesignTimeVisibleAttribute_t4221633075_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1175[4] = 
{
	DesignTimeVisibleAttribute_t4221633075::get_offset_of_visible_0(),
	DesignTimeVisibleAttribute_t4221633075_StaticFields::get_offset_of_Default_1(),
	DesignTimeVisibleAttribute_t4221633075_StaticFields::get_offset_of_No_2(),
	DesignTimeVisibleAttribute_t4221633075_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1176 = { sizeof (DesignerAttribute_t1662077259), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1176[2] = 
{
	DesignerAttribute_t1662077259::get_offset_of_name_0(),
	DesignerAttribute_t1662077259::get_offset_of_basetypename_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1177 = { sizeof (DesignerCategoryAttribute_t3620524307), -1, sizeof(DesignerCategoryAttribute_t3620524307_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1177[5] = 
{
	DesignerCategoryAttribute_t3620524307::get_offset_of_category_0(),
	DesignerCategoryAttribute_t3620524307_StaticFields::get_offset_of_Component_1(),
	DesignerCategoryAttribute_t3620524307_StaticFields::get_offset_of_Form_2(),
	DesignerCategoryAttribute_t3620524307_StaticFields::get_offset_of_Generic_3(),
	DesignerCategoryAttribute_t3620524307_StaticFields::get_offset_of_Default_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1178 = { sizeof (DesignerSerializationVisibility_t2518880192)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1178[4] = 
{
	DesignerSerializationVisibility_t2518880192::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1179 = { sizeof (DesignerSerializationVisibilityAttribute_t3474551747), -1, sizeof(DesignerSerializationVisibilityAttribute_t3474551747_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1179[5] = 
{
	DesignerSerializationVisibilityAttribute_t3474551747::get_offset_of_visibility_0(),
	DesignerSerializationVisibilityAttribute_t3474551747_StaticFields::get_offset_of_Default_1(),
	DesignerSerializationVisibilityAttribute_t3474551747_StaticFields::get_offset_of_Content_2(),
	DesignerSerializationVisibilityAttribute_t3474551747_StaticFields::get_offset_of_Hidden_3(),
	DesignerSerializationVisibilityAttribute_t3474551747_StaticFields::get_offset_of_Visible_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1180 = { sizeof (DisplayNameAttribute_t3131223357), -1, sizeof(DisplayNameAttribute_t3131223357_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1180[2] = 
{
	DisplayNameAttribute_t3131223357_StaticFields::get_offset_of_Default_0(),
	DisplayNameAttribute_t3131223357::get_offset_of_attributeDisplayName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1181 = { sizeof (DoWorkEventArgs_t1318081810), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1181[3] = 
{
	DoWorkEventArgs_t1318081810::get_offset_of_arg_1(),
	DoWorkEventArgs_t1318081810::get_offset_of_result_2(),
	DoWorkEventArgs_t1318081810::get_offset_of_cancel_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1182 = { sizeof (DoubleConverter_t1638652508), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1183 = { sizeof (EditorAttribute_t3977105537), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1183[2] = 
{
	EditorAttribute_t3977105537::get_offset_of_name_0(),
	EditorAttribute_t3977105537::get_offset_of_basename_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1184 = { sizeof (EditorBrowsableAttribute_t1739136341), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1184[1] = 
{
	EditorBrowsableAttribute_t1739136341::get_offset_of_state_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1185 = { sizeof (EditorBrowsableState_t3457220815)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1185[4] = 
{
	EditorBrowsableState_t3457220815::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1186 = { sizeof (EnumConverter_t4070564949), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1186[2] = 
{
	EnumConverter_t4070564949::get_offset_of_type_0(),
	EnumConverter_t4070564949::get_offset_of_stdValues_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1187 = { sizeof (EnumComparer_t3319211562), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1188 = { sizeof (EventDescriptor_t2366424953), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1189 = { sizeof (EventDescriptorCollection_t4005238403), -1, sizeof(EventDescriptorCollection_t4005238403_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1189[3] = 
{
	EventDescriptorCollection_t4005238403::get_offset_of_eventList_0(),
	EventDescriptorCollection_t4005238403::get_offset_of_isReadOnly_1(),
	EventDescriptorCollection_t4005238403_StaticFields::get_offset_of_Empty_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1190 = { sizeof (ListEntry_t2023760102), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1190[3] = 
{
	ListEntry_t2023760102::get_offset_of_key_0(),
	ListEntry_t2023760102::get_offset_of_value_1(),
	ListEntry_t2023760102::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1191 = { sizeof (EventHandlerList_t2060833979), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1191[2] = 
{
	EventHandlerList_t2060833979::get_offset_of_entries_0(),
	EventHandlerList_t2060833979::get_offset_of_null_entry_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1192 = { sizeof (ExpandableObjectConverter_t911608726), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1193 = { sizeof (GuidConverter_t2782744234), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1194 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1195 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1196 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1197 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1198 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1199 = { 0, -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
