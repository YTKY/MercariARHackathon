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
struct NameObjectCollectionBase_t4027231775;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Collections.ICollection
struct ICollection_t2481385116;
// System.Collections.Hashtable
struct Hashtable_t1307174541;
// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct _Item_t3914469720;
// System.Collections.ArrayList
struct ArrayList_t2942397298;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t3358984048;
// System.Collections.IComparer
struct IComparer_t1783888550;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2882213123;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t1290011700;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1229754686;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t123571666;
// System.ComponentModel.AsyncOperation
struct AsyncOperation_t1181924997;
// System.ComponentModel.DoWorkEventHandler
struct DoWorkEventHandler_t3013247645;
// System.ComponentModel.ProgressChangedEventHandler
struct ProgressChangedEventHandler_t256820854;
// System.ComponentModel.RunWorkerCompletedEventHandler
struct RunWorkerCompletedEventHandler_t322181211;
// System.Delegate
struct Delegate_t132796138;
// System.ComponentModel.ListEntry
struct ListEntry_t1397902113;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t2794217844;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t2596628391;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_t1495247392;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t4226704692;
// System.Attribute[]
struct AttributeU5BU5D_t225346258;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t3289094355;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t3364289775;
// System.Type
struct Type_t;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t1740473589;
// System.Char[]
struct CharU5BU5D_t1569978218;
// System.ComponentModel.TypeConverter
struct TypeConverter_t2207633881;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t2484400441;
// System.ComponentModel.ISite
struct ISite_t2909219945;
// System.Void
struct Void_t387164986;
// System.String[]
struct StringU5BU5D_t2383004514;
// System.Exception
struct Exception_t380910560;
// System.ComponentModel.CategoryAttribute
struct CategoryAttribute_t4075104885;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t3033384353;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t3529868515;
// System.IAsyncResult
struct IAsyncResult_t556579867;
// System.AsyncCallback
struct AsyncCallback_t2695875564;




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
#ifndef U3CMODULEU3E_T2344662619_H
#define U3CMODULEU3E_T2344662619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2344662619 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T2344662619_H
#ifndef _ITEM_T3914469720_H
#define _ITEM_T3914469720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct  _Item_t3914469720  : public RuntimeObject
{
public:
	// System.String System.Collections.Specialized.NameObjectCollectionBase/_Item::key
	String_t* ___key_0;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase/_Item::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(_Item_t3914469720, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(_Item_t3914469720, ___value_1)); }
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
#endif // _ITEM_T3914469720_H
#ifndef _KEYSENUMERATOR_T3754994426_H
#define _KEYSENUMERATOR_T3754994426_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator
struct  _KeysEnumerator_t3754994426  : public RuntimeObject
{
public:
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator::m_collection
	NameObjectCollectionBase_t4027231775 * ___m_collection_0;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator::m_position
	int32_t ___m_position_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(_KeysEnumerator_t3754994426, ___m_collection_0)); }
	inline NameObjectCollectionBase_t4027231775 * get_m_collection_0() const { return ___m_collection_0; }
	inline NameObjectCollectionBase_t4027231775 ** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(NameObjectCollectionBase_t4027231775 * value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_collection_0), value);
	}

	inline static int32_t get_offset_of_m_position_1() { return static_cast<int32_t>(offsetof(_KeysEnumerator_t3754994426, ___m_position_1)); }
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
#endif // _KEYSENUMERATOR_T3754994426_H
#ifndef KEYSCOLLECTION_T1290011700_H
#define KEYSCOLLECTION_T1290011700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct  KeysCollection_t1290011700  : public RuntimeObject
{
public:
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::m_collection
	NameObjectCollectionBase_t4027231775 * ___m_collection_0;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(KeysCollection_t1290011700, ___m_collection_0)); }
	inline NameObjectCollectionBase_t4027231775 * get_m_collection_0() const { return ___m_collection_0; }
	inline NameObjectCollectionBase_t4027231775 ** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(NameObjectCollectionBase_t4027231775 * value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_collection_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYSCOLLECTION_T1290011700_H
#ifndef VALUETYPE_T728981031_H
#define VALUETYPE_T728981031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t728981031  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t728981031_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t728981031_marshaled_com
{
};
#endif // VALUETYPE_T728981031_H
#ifndef INSTANCEDESCRIPTOR_T3800365837_H
#define INSTANCEDESCRIPTOR_T3800365837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.Serialization.InstanceDescriptor
struct  InstanceDescriptor_t3800365837  : public RuntimeObject
{
public:
	// System.Reflection.MemberInfo System.ComponentModel.Design.Serialization.InstanceDescriptor::member
	MemberInfo_t * ___member_0;
	// System.Collections.ICollection System.ComponentModel.Design.Serialization.InstanceDescriptor::arguments
	RuntimeObject* ___arguments_1;
	// System.Boolean System.ComponentModel.Design.Serialization.InstanceDescriptor::isComplete
	bool ___isComplete_2;

public:
	inline static int32_t get_offset_of_member_0() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t3800365837, ___member_0)); }
	inline MemberInfo_t * get_member_0() const { return ___member_0; }
	inline MemberInfo_t ** get_address_of_member_0() { return &___member_0; }
	inline void set_member_0(MemberInfo_t * value)
	{
		___member_0 = value;
		Il2CppCodeGenWriteBarrier((&___member_0), value);
	}

	inline static int32_t get_offset_of_arguments_1() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t3800365837, ___arguments_1)); }
	inline RuntimeObject* get_arguments_1() const { return ___arguments_1; }
	inline RuntimeObject** get_address_of_arguments_1() { return &___arguments_1; }
	inline void set_arguments_1(RuntimeObject* value)
	{
		___arguments_1 = value;
		Il2CppCodeGenWriteBarrier((&___arguments_1), value);
	}

	inline static int32_t get_offset_of_isComplete_2() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t3800365837, ___isComplete_2)); }
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
#endif // INSTANCEDESCRIPTOR_T3800365837_H
#ifndef CULTUREINFOCOMPARER_T4146592826_H
#define CULTUREINFOCOMPARER_T4146592826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter/CultureInfoComparer
struct  CultureInfoComparer_t4146592826  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCOMPARER_T4146592826_H
#ifndef NAMEOBJECTCOLLECTIONBASE_T4027231775_H
#define NAMEOBJECTCOLLECTIONBASE_T4027231775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase
struct  NameObjectCollectionBase_t4027231775  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.NameObjectCollectionBase::m_ItemsContainer
	Hashtable_t1307174541 * ___m_ItemsContainer_0;
	// System.Collections.Specialized.NameObjectCollectionBase/_Item System.Collections.Specialized.NameObjectCollectionBase::m_NullKeyItem
	_Item_t3914469720 * ___m_NullKeyItem_1;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::m_ItemsArray
	ArrayList_t2942397298 * ___m_ItemsArray_2;
	// System.Collections.IHashCodeProvider System.Collections.Specialized.NameObjectCollectionBase::m_hashprovider
	RuntimeObject* ___m_hashprovider_3;
	// System.Collections.IComparer System.Collections.Specialized.NameObjectCollectionBase::m_comparer
	RuntimeObject* ___m_comparer_4;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::m_defCapacity
	int32_t ___m_defCapacity_5;
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::m_readonly
	bool ___m_readonly_6;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::infoCopy
	SerializationInfo_t2882213123 * ___infoCopy_7;
	// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::keyscoll
	KeysCollection_t1290011700 * ___keyscoll_8;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::equality_comparer
	RuntimeObject* ___equality_comparer_9;

public:
	inline static int32_t get_offset_of_m_ItemsContainer_0() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t4027231775, ___m_ItemsContainer_0)); }
	inline Hashtable_t1307174541 * get_m_ItemsContainer_0() const { return ___m_ItemsContainer_0; }
	inline Hashtable_t1307174541 ** get_address_of_m_ItemsContainer_0() { return &___m_ItemsContainer_0; }
	inline void set_m_ItemsContainer_0(Hashtable_t1307174541 * value)
	{
		___m_ItemsContainer_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemsContainer_0), value);
	}

	inline static int32_t get_offset_of_m_NullKeyItem_1() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t4027231775, ___m_NullKeyItem_1)); }
	inline _Item_t3914469720 * get_m_NullKeyItem_1() const { return ___m_NullKeyItem_1; }
	inline _Item_t3914469720 ** get_address_of_m_NullKeyItem_1() { return &___m_NullKeyItem_1; }
	inline void set_m_NullKeyItem_1(_Item_t3914469720 * value)
	{
		___m_NullKeyItem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_NullKeyItem_1), value);
	}

	inline static int32_t get_offset_of_m_ItemsArray_2() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t4027231775, ___m_ItemsArray_2)); }
	inline ArrayList_t2942397298 * get_m_ItemsArray_2() const { return ___m_ItemsArray_2; }
	inline ArrayList_t2942397298 ** get_address_of_m_ItemsArray_2() { return &___m_ItemsArray_2; }
	inline void set_m_ItemsArray_2(ArrayList_t2942397298 * value)
	{
		___m_ItemsArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemsArray_2), value);
	}

	inline static int32_t get_offset_of_m_hashprovider_3() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t4027231775, ___m_hashprovider_3)); }
	inline RuntimeObject* get_m_hashprovider_3() const { return ___m_hashprovider_3; }
	inline RuntimeObject** get_address_of_m_hashprovider_3() { return &___m_hashprovider_3; }
	inline void set_m_hashprovider_3(RuntimeObject* value)
	{
		___m_hashprovider_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_hashprovider_3), value);
	}

	inline static int32_t get_offset_of_m_comparer_4() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t4027231775, ___m_comparer_4)); }
	inline RuntimeObject* get_m_comparer_4() const { return ___m_comparer_4; }
	inline RuntimeObject** get_address_of_m_comparer_4() { return &___m_comparer_4; }
	inline void set_m_comparer_4(RuntimeObject* value)
	{
		___m_comparer_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_comparer_4), value);
	}

	inline static int32_t get_offset_of_m_defCapacity_5() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t4027231775, ___m_defCapacity_5)); }
	inline int32_t get_m_defCapacity_5() const { return ___m_defCapacity_5; }
	inline int32_t* get_address_of_m_defCapacity_5() { return &___m_defCapacity_5; }
	inline void set_m_defCapacity_5(int32_t value)
	{
		___m_defCapacity_5 = value;
	}

	inline static int32_t get_offset_of_m_readonly_6() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t4027231775, ___m_readonly_6)); }
	inline bool get_m_readonly_6() const { return ___m_readonly_6; }
	inline bool* get_address_of_m_readonly_6() { return &___m_readonly_6; }
	inline void set_m_readonly_6(bool value)
	{
		___m_readonly_6 = value;
	}

	inline static int32_t get_offset_of_infoCopy_7() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t4027231775, ___infoCopy_7)); }
	inline SerializationInfo_t2882213123 * get_infoCopy_7() const { return ___infoCopy_7; }
	inline SerializationInfo_t2882213123 ** get_address_of_infoCopy_7() { return &___infoCopy_7; }
	inline void set_infoCopy_7(SerializationInfo_t2882213123 * value)
	{
		___infoCopy_7 = value;
		Il2CppCodeGenWriteBarrier((&___infoCopy_7), value);
	}

	inline static int32_t get_offset_of_keyscoll_8() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t4027231775, ___keyscoll_8)); }
	inline KeysCollection_t1290011700 * get_keyscoll_8() const { return ___keyscoll_8; }
	inline KeysCollection_t1290011700 ** get_address_of_keyscoll_8() { return &___keyscoll_8; }
	inline void set_keyscoll_8(KeysCollection_t1290011700 * value)
	{
		___keyscoll_8 = value;
		Il2CppCodeGenWriteBarrier((&___keyscoll_8), value);
	}

	inline static int32_t get_offset_of_equality_comparer_9() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t4027231775, ___equality_comparer_9)); }
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
#endif // NAMEOBJECTCOLLECTIONBASE_T4027231775_H
#ifndef DESIGNERTRANSACTION_T1714213149_H
#define DESIGNERTRANSACTION_T1714213149_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.DesignerTransaction
struct  DesignerTransaction_t1714213149  : public RuntimeObject
{
public:
	// System.Boolean System.ComponentModel.Design.DesignerTransaction::committed
	bool ___committed_0;
	// System.Boolean System.ComponentModel.Design.DesignerTransaction::canceled
	bool ___canceled_1;

public:
	inline static int32_t get_offset_of_committed_0() { return static_cast<int32_t>(offsetof(DesignerTransaction_t1714213149, ___committed_0)); }
	inline bool get_committed_0() const { return ___committed_0; }
	inline bool* get_address_of_committed_0() { return &___committed_0; }
	inline void set_committed_0(bool value)
	{
		___committed_0 = value;
	}

	inline static int32_t get_offset_of_canceled_1() { return static_cast<int32_t>(offsetof(DesignerTransaction_t1714213149, ___canceled_1)); }
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
#endif // DESIGNERTRANSACTION_T1714213149_H
#ifndef ASYNCOPERATION_T1181924997_H
#define ASYNCOPERATION_T1181924997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AsyncOperation
struct  AsyncOperation_t1181924997  : public RuntimeObject
{
public:
	// System.Threading.SynchronizationContext System.ComponentModel.AsyncOperation::ctx
	SynchronizationContext_t123571666 * ___ctx_0;
	// System.Object System.ComponentModel.AsyncOperation::state
	RuntimeObject * ___state_1;
	// System.Boolean System.ComponentModel.AsyncOperation::done
	bool ___done_2;

public:
	inline static int32_t get_offset_of_ctx_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t1181924997, ___ctx_0)); }
	inline SynchronizationContext_t123571666 * get_ctx_0() const { return ___ctx_0; }
	inline SynchronizationContext_t123571666 ** get_address_of_ctx_0() { return &___ctx_0; }
	inline void set_ctx_0(SynchronizationContext_t123571666 * value)
	{
		___ctx_0 = value;
		Il2CppCodeGenWriteBarrier((&___ctx_0), value);
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t1181924997, ___state_1)); }
	inline RuntimeObject * get_state_1() const { return ___state_1; }
	inline RuntimeObject ** get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(RuntimeObject * value)
	{
		___state_1 = value;
		Il2CppCodeGenWriteBarrier((&___state_1), value);
	}

	inline static int32_t get_offset_of_done_2() { return static_cast<int32_t>(offsetof(AsyncOperation_t1181924997, ___done_2)); }
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
#endif // ASYNCOPERATION_T1181924997_H
#ifndef ASYNCOPERATIONMANAGER_T4204786643_H
#define ASYNCOPERATIONMANAGER_T4204786643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AsyncOperationManager
struct  AsyncOperationManager_t4204786643  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCOPERATIONMANAGER_T4204786643_H
#ifndef ATTRIBUTECOLLECTION_T3289094355_H
#define ATTRIBUTECOLLECTION_T3289094355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AttributeCollection
struct  AttributeCollection_t3289094355  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.AttributeCollection::attrList
	ArrayList_t2942397298 * ___attrList_0;

public:
	inline static int32_t get_offset_of_attrList_0() { return static_cast<int32_t>(offsetof(AttributeCollection_t3289094355, ___attrList_0)); }
	inline ArrayList_t2942397298 * get_attrList_0() const { return ___attrList_0; }
	inline ArrayList_t2942397298 ** get_address_of_attrList_0() { return &___attrList_0; }
	inline void set_attrList_0(ArrayList_t2942397298 * value)
	{
		___attrList_0 = value;
		Il2CppCodeGenWriteBarrier((&___attrList_0), value);
	}
};

struct AttributeCollection_t3289094355_StaticFields
{
public:
	// System.ComponentModel.AttributeCollection System.ComponentModel.AttributeCollection::Empty
	AttributeCollection_t3289094355 * ___Empty_1;

public:
	inline static int32_t get_offset_of_Empty_1() { return static_cast<int32_t>(offsetof(AttributeCollection_t3289094355_StaticFields, ___Empty_1)); }
	inline AttributeCollection_t3289094355 * get_Empty_1() const { return ___Empty_1; }
	inline AttributeCollection_t3289094355 ** get_address_of_Empty_1() { return &___Empty_1; }
	inline void set_Empty_1(AttributeCollection_t3289094355 * value)
	{
		___Empty_1 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTECOLLECTION_T3289094355_H
#ifndef BACKGROUNDWORKER_T3787263176_H
#define BACKGROUNDWORKER_T3787263176_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BackgroundWorker
struct  BackgroundWorker_t3787263176  : public RuntimeObject
{
public:
	// System.ComponentModel.AsyncOperation System.ComponentModel.BackgroundWorker::async
	AsyncOperation_t1181924997 * ___async_0;
	// System.Boolean System.ComponentModel.BackgroundWorker::cancel_pending
	bool ___cancel_pending_1;
	// System.Boolean System.ComponentModel.BackgroundWorker::report_progress
	bool ___report_progress_2;
	// System.Boolean System.ComponentModel.BackgroundWorker::support_cancel
	bool ___support_cancel_3;
	// System.ComponentModel.DoWorkEventHandler System.ComponentModel.BackgroundWorker::DoWork
	DoWorkEventHandler_t3013247645 * ___DoWork_4;
	// System.ComponentModel.ProgressChangedEventHandler System.ComponentModel.BackgroundWorker::ProgressChanged
	ProgressChangedEventHandler_t256820854 * ___ProgressChanged_5;
	// System.ComponentModel.RunWorkerCompletedEventHandler System.ComponentModel.BackgroundWorker::RunWorkerCompleted
	RunWorkerCompletedEventHandler_t322181211 * ___RunWorkerCompleted_6;

public:
	inline static int32_t get_offset_of_async_0() { return static_cast<int32_t>(offsetof(BackgroundWorker_t3787263176, ___async_0)); }
	inline AsyncOperation_t1181924997 * get_async_0() const { return ___async_0; }
	inline AsyncOperation_t1181924997 ** get_address_of_async_0() { return &___async_0; }
	inline void set_async_0(AsyncOperation_t1181924997 * value)
	{
		___async_0 = value;
		Il2CppCodeGenWriteBarrier((&___async_0), value);
	}

	inline static int32_t get_offset_of_cancel_pending_1() { return static_cast<int32_t>(offsetof(BackgroundWorker_t3787263176, ___cancel_pending_1)); }
	inline bool get_cancel_pending_1() const { return ___cancel_pending_1; }
	inline bool* get_address_of_cancel_pending_1() { return &___cancel_pending_1; }
	inline void set_cancel_pending_1(bool value)
	{
		___cancel_pending_1 = value;
	}

	inline static int32_t get_offset_of_report_progress_2() { return static_cast<int32_t>(offsetof(BackgroundWorker_t3787263176, ___report_progress_2)); }
	inline bool get_report_progress_2() const { return ___report_progress_2; }
	inline bool* get_address_of_report_progress_2() { return &___report_progress_2; }
	inline void set_report_progress_2(bool value)
	{
		___report_progress_2 = value;
	}

	inline static int32_t get_offset_of_support_cancel_3() { return static_cast<int32_t>(offsetof(BackgroundWorker_t3787263176, ___support_cancel_3)); }
	inline bool get_support_cancel_3() const { return ___support_cancel_3; }
	inline bool* get_address_of_support_cancel_3() { return &___support_cancel_3; }
	inline void set_support_cancel_3(bool value)
	{
		___support_cancel_3 = value;
	}

	inline static int32_t get_offset_of_DoWork_4() { return static_cast<int32_t>(offsetof(BackgroundWorker_t3787263176, ___DoWork_4)); }
	inline DoWorkEventHandler_t3013247645 * get_DoWork_4() const { return ___DoWork_4; }
	inline DoWorkEventHandler_t3013247645 ** get_address_of_DoWork_4() { return &___DoWork_4; }
	inline void set_DoWork_4(DoWorkEventHandler_t3013247645 * value)
	{
		___DoWork_4 = value;
		Il2CppCodeGenWriteBarrier((&___DoWork_4), value);
	}

	inline static int32_t get_offset_of_ProgressChanged_5() { return static_cast<int32_t>(offsetof(BackgroundWorker_t3787263176, ___ProgressChanged_5)); }
	inline ProgressChangedEventHandler_t256820854 * get_ProgressChanged_5() const { return ___ProgressChanged_5; }
	inline ProgressChangedEventHandler_t256820854 ** get_address_of_ProgressChanged_5() { return &___ProgressChanged_5; }
	inline void set_ProgressChanged_5(ProgressChangedEventHandler_t256820854 * value)
	{
		___ProgressChanged_5 = value;
		Il2CppCodeGenWriteBarrier((&___ProgressChanged_5), value);
	}

	inline static int32_t get_offset_of_RunWorkerCompleted_6() { return static_cast<int32_t>(offsetof(BackgroundWorker_t3787263176, ___RunWorkerCompleted_6)); }
	inline RunWorkerCompletedEventHandler_t322181211 * get_RunWorkerCompleted_6() const { return ___RunWorkerCompleted_6; }
	inline RunWorkerCompletedEventHandler_t322181211 ** get_address_of_RunWorkerCompleted_6() { return &___RunWorkerCompleted_6; }
	inline void set_RunWorkerCompleted_6(RunWorkerCompletedEventHandler_t322181211 * value)
	{
		___RunWorkerCompleted_6 = value;
		Il2CppCodeGenWriteBarrier((&___RunWorkerCompleted_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BACKGROUNDWORKER_T3787263176_H
#ifndef LISTENTRY_T1397902113_H
#define LISTENTRY_T1397902113_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListEntry
struct  ListEntry_t1397902113  : public RuntimeObject
{
public:
	// System.Object System.ComponentModel.ListEntry::key
	RuntimeObject * ___key_0;
	// System.Delegate System.ComponentModel.ListEntry::value
	Delegate_t132796138 * ___value_1;
	// System.ComponentModel.ListEntry System.ComponentModel.ListEntry::next
	ListEntry_t1397902113 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(ListEntry_t1397902113, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ListEntry_t1397902113, ___value_1)); }
	inline Delegate_t132796138 * get_value_1() const { return ___value_1; }
	inline Delegate_t132796138 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Delegate_t132796138 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(ListEntry_t1397902113, ___next_2)); }
	inline ListEntry_t1397902113 * get_next_2() const { return ___next_2; }
	inline ListEntry_t1397902113 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(ListEntry_t1397902113 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTENTRY_T1397902113_H
#ifndef EVENTDESCRIPTORCOLLECTION_T1410963755_H
#define EVENTDESCRIPTORCOLLECTION_T1410963755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventDescriptorCollection
struct  EventDescriptorCollection_t1410963755  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.EventDescriptorCollection::eventList
	ArrayList_t2942397298 * ___eventList_0;
	// System.Boolean System.ComponentModel.EventDescriptorCollection::isReadOnly
	bool ___isReadOnly_1;

public:
	inline static int32_t get_offset_of_eventList_0() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t1410963755, ___eventList_0)); }
	inline ArrayList_t2942397298 * get_eventList_0() const { return ___eventList_0; }
	inline ArrayList_t2942397298 ** get_address_of_eventList_0() { return &___eventList_0; }
	inline void set_eventList_0(ArrayList_t2942397298 * value)
	{
		___eventList_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventList_0), value);
	}

	inline static int32_t get_offset_of_isReadOnly_1() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t1410963755, ___isReadOnly_1)); }
	inline bool get_isReadOnly_1() const { return ___isReadOnly_1; }
	inline bool* get_address_of_isReadOnly_1() { return &___isReadOnly_1; }
	inline void set_isReadOnly_1(bool value)
	{
		___isReadOnly_1 = value;
	}
};

struct EventDescriptorCollection_t1410963755_StaticFields
{
public:
	// System.ComponentModel.EventDescriptorCollection System.ComponentModel.EventDescriptorCollection::Empty
	EventDescriptorCollection_t1410963755 * ___Empty_2;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t1410963755_StaticFields, ___Empty_2)); }
	inline EventDescriptorCollection_t1410963755 * get_Empty_2() const { return ___Empty_2; }
	inline EventDescriptorCollection_t1410963755 ** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(EventDescriptorCollection_t1410963755 * value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTDESCRIPTORCOLLECTION_T1410963755_H
#ifndef ENUMCOMPARER_T3408608039_H
#define ENUMCOMPARER_T3408608039_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter/EnumComparer
struct  EnumComparer_t3408608039  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMCOMPARER_T3408608039_H
#ifndef EVENTHANDLERLIST_T2484400441_H
#define EVENTHANDLERLIST_T2484400441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventHandlerList
struct  EventHandlerList_t2484400441  : public RuntimeObject
{
public:
	// System.ComponentModel.ListEntry System.ComponentModel.EventHandlerList::entries
	ListEntry_t1397902113 * ___entries_0;
	// System.Delegate System.ComponentModel.EventHandlerList::null_entry
	Delegate_t132796138 * ___null_entry_1;

public:
	inline static int32_t get_offset_of_entries_0() { return static_cast<int32_t>(offsetof(EventHandlerList_t2484400441, ___entries_0)); }
	inline ListEntry_t1397902113 * get_entries_0() const { return ___entries_0; }
	inline ListEntry_t1397902113 ** get_address_of_entries_0() { return &___entries_0; }
	inline void set_entries_0(ListEntry_t1397902113 * value)
	{
		___entries_0 = value;
		Il2CppCodeGenWriteBarrier((&___entries_0), value);
	}

	inline static int32_t get_offset_of_null_entry_1() { return static_cast<int32_t>(offsetof(EventHandlerList_t2484400441, ___null_entry_1)); }
	inline Delegate_t132796138 * get_null_entry_1() const { return ___null_entry_1; }
	inline Delegate_t132796138 ** get_address_of_null_entry_1() { return &___null_entry_1; }
	inline void set_null_entry_1(Delegate_t132796138 * value)
	{
		___null_entry_1 = value;
		Il2CppCodeGenWriteBarrier((&___null_entry_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLERLIST_T2484400441_H
#ifndef DICTIONARYNODECOLLECTIONENUMERATOR_T3136818834_H
#define DICTIONARYNODECOLLECTIONENUMERATOR_T3136818834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNodeCollection/DictionaryNodeCollectionEnumerator
struct  DictionaryNodeCollectionEnumerator_t3136818834  : public RuntimeObject
{
public:
	// System.Collections.IDictionaryEnumerator System.Collections.Specialized.ListDictionary/DictionaryNodeCollection/DictionaryNodeCollectionEnumerator::inner
	RuntimeObject* ___inner_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeCollection/DictionaryNodeCollectionEnumerator::isKeyList
	bool ___isKeyList_1;

public:
	inline static int32_t get_offset_of_inner_0() { return static_cast<int32_t>(offsetof(DictionaryNodeCollectionEnumerator_t3136818834, ___inner_0)); }
	inline RuntimeObject* get_inner_0() const { return ___inner_0; }
	inline RuntimeObject** get_address_of_inner_0() { return &___inner_0; }
	inline void set_inner_0(RuntimeObject* value)
	{
		___inner_0 = value;
		Il2CppCodeGenWriteBarrier((&___inner_0), value);
	}

	inline static int32_t get_offset_of_isKeyList_1() { return static_cast<int32_t>(offsetof(DictionaryNodeCollectionEnumerator_t3136818834, ___isKeyList_1)); }
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
#endif // DICTIONARYNODECOLLECTIONENUMERATOR_T3136818834_H
#ifndef CUSTOMTYPEDESCRIPTOR_T4075760490_H
#define CUSTOMTYPEDESCRIPTOR_T4075760490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CustomTypeDescriptor
struct  CustomTypeDescriptor_t4075760490  : public RuntimeObject
{
public:
	// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.CustomTypeDescriptor::_parent
	RuntimeObject* ____parent_0;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(CustomTypeDescriptor_t4075760490, ____parent_0)); }
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
#endif // CUSTOMTYPEDESCRIPTOR_T4075760490_H
#ifndef DICTIONARYNODEENUMERATOR_T3243060357_H
#define DICTIONARYNODEENUMERATOR_T3243060357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator
struct  DictionaryNodeEnumerator_t3243060357  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::dict
	ListDictionary_t1495247392 * ___dict_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::isAtStart
	bool ___isAtStart_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::current
	DictionaryNode_t4226704692 * ___current_2;
	// System.Int32 System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::version
	int32_t ___version_3;

public:
	inline static int32_t get_offset_of_dict_0() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t3243060357, ___dict_0)); }
	inline ListDictionary_t1495247392 * get_dict_0() const { return ___dict_0; }
	inline ListDictionary_t1495247392 ** get_address_of_dict_0() { return &___dict_0; }
	inline void set_dict_0(ListDictionary_t1495247392 * value)
	{
		___dict_0 = value;
		Il2CppCodeGenWriteBarrier((&___dict_0), value);
	}

	inline static int32_t get_offset_of_isAtStart_1() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t3243060357, ___isAtStart_1)); }
	inline bool get_isAtStart_1() const { return ___isAtStart_1; }
	inline bool* get_address_of_isAtStart_1() { return &___isAtStart_1; }
	inline void set_isAtStart_1(bool value)
	{
		___isAtStart_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t3243060357, ___current_2)); }
	inline DictionaryNode_t4226704692 * get_current_2() const { return ___current_2; }
	inline DictionaryNode_t4226704692 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(DictionaryNode_t4226704692 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((&___current_2), value);
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t3243060357, ___version_3)); }
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
#endif // DICTIONARYNODEENUMERATOR_T3243060357_H
#ifndef MEMBERDESCRIPTOR_T298054629_H
#define MEMBERDESCRIPTOR_T298054629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor
struct  MemberDescriptor_t298054629  : public RuntimeObject
{
public:
	// System.String System.ComponentModel.MemberDescriptor::name
	String_t* ___name_0;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::attrs
	AttributeU5BU5D_t225346258* ___attrs_1;
	// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::attrCollection
	AttributeCollection_t3289094355 * ___attrCollection_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MemberDescriptor_t298054629, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_attrs_1() { return static_cast<int32_t>(offsetof(MemberDescriptor_t298054629, ___attrs_1)); }
	inline AttributeU5BU5D_t225346258* get_attrs_1() const { return ___attrs_1; }
	inline AttributeU5BU5D_t225346258** get_address_of_attrs_1() { return &___attrs_1; }
	inline void set_attrs_1(AttributeU5BU5D_t225346258* value)
	{
		___attrs_1 = value;
		Il2CppCodeGenWriteBarrier((&___attrs_1), value);
	}

	inline static int32_t get_offset_of_attrCollection_2() { return static_cast<int32_t>(offsetof(MemberDescriptor_t298054629, ___attrCollection_2)); }
	inline AttributeCollection_t3289094355 * get_attrCollection_2() const { return ___attrCollection_2; }
	inline AttributeCollection_t3289094355 ** get_address_of_attrCollection_2() { return &___attrCollection_2; }
	inline void set_attrCollection_2(AttributeCollection_t3289094355 * value)
	{
		___attrCollection_2 = value;
		Il2CppCodeGenWriteBarrier((&___attrCollection_2), value);
	}
};

struct MemberDescriptor_t298054629_StaticFields
{
public:
	// System.Collections.IComparer System.ComponentModel.MemberDescriptor::default_comparer
	RuntimeObject* ___default_comparer_3;

public:
	inline static int32_t get_offset_of_default_comparer_3() { return static_cast<int32_t>(offsetof(MemberDescriptor_t298054629_StaticFields, ___default_comparer_3)); }
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
#endif // MEMBERDESCRIPTOR_T298054629_H
#ifndef DICTIONARYNODECOLLECTION_T114733765_H
#define DICTIONARYNODECOLLECTION_T114733765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNodeCollection
struct  DictionaryNodeCollection_t114733765  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/DictionaryNodeCollection::dict
	ListDictionary_t1495247392 * ___dict_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeCollection::isKeyList
	bool ___isKeyList_1;

public:
	inline static int32_t get_offset_of_dict_0() { return static_cast<int32_t>(offsetof(DictionaryNodeCollection_t114733765, ___dict_0)); }
	inline ListDictionary_t1495247392 * get_dict_0() const { return ___dict_0; }
	inline ListDictionary_t1495247392 ** get_address_of_dict_0() { return &___dict_0; }
	inline void set_dict_0(ListDictionary_t1495247392 * value)
	{
		___dict_0 = value;
		Il2CppCodeGenWriteBarrier((&___dict_0), value);
	}

	inline static int32_t get_offset_of_isKeyList_1() { return static_cast<int32_t>(offsetof(DictionaryNodeCollection_t114733765, ___isKeyList_1)); }
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
#endif // DICTIONARYNODECOLLECTION_T114733765_H
#ifndef READONLYCOLLECTIONBASE_T202851394_H
#define READONLYCOLLECTIONBASE_T202851394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ReadOnlyCollectionBase
struct  ReadOnlyCollectionBase_t202851394  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ReadOnlyCollectionBase::list
	ArrayList_t2942397298 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollectionBase_t202851394, ___list_0)); }
	inline ArrayList_t2942397298 * get_list_0() const { return ___list_0; }
	inline ArrayList_t2942397298 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t2942397298 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTIONBASE_T202851394_H
#ifndef MARSHALBYREFOBJECT_T1336189526_H
#define MARSHALBYREFOBJECT_T1336189526_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t1336189526  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t3364289775 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t1336189526, ____identity_0)); }
	inline ServerIdentity_t3364289775 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t3364289775 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t3364289775 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T1336189526_H
#ifndef TYPECONVERTER_T2207633881_H
#define TYPECONVERTER_T2207633881_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t2207633881  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T2207633881_H
#ifndef EVENTARGS_T1316716651_H
#define EVENTARGS_T1316716651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t1316716651  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t1316716651_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t1316716651 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t1316716651_StaticFields, ___Empty_0)); }
	inline EventArgs_t1316716651 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t1316716651 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t1316716651 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T1316716651_H
#ifndef LICENSECONTEXT_T1792599635_H
#define LICENSECONTEXT_T1792599635_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseContext
struct  LicenseContext_t1792599635  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSECONTEXT_T1792599635_H
#ifndef ATTRIBUTE_T3357033155_H
#define ATTRIBUTE_T3357033155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t3357033155  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T3357033155_H
#ifndef HYBRIDDICTIONARY_T3961037581_H
#define HYBRIDDICTIONARY_T3961037581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.HybridDictionary
struct  HybridDictionary_t3961037581  : public RuntimeObject
{
public:
	// System.Boolean System.Collections.Specialized.HybridDictionary::caseInsensitive
	bool ___caseInsensitive_0;
	// System.Collections.Hashtable System.Collections.Specialized.HybridDictionary::hashtable
	Hashtable_t1307174541 * ___hashtable_1;
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.HybridDictionary::list
	ListDictionary_t1495247392 * ___list_2;

public:
	inline static int32_t get_offset_of_caseInsensitive_0() { return static_cast<int32_t>(offsetof(HybridDictionary_t3961037581, ___caseInsensitive_0)); }
	inline bool get_caseInsensitive_0() const { return ___caseInsensitive_0; }
	inline bool* get_address_of_caseInsensitive_0() { return &___caseInsensitive_0; }
	inline void set_caseInsensitive_0(bool value)
	{
		___caseInsensitive_0 = value;
	}

	inline static int32_t get_offset_of_hashtable_1() { return static_cast<int32_t>(offsetof(HybridDictionary_t3961037581, ___hashtable_1)); }
	inline Hashtable_t1307174541 * get_hashtable_1() const { return ___hashtable_1; }
	inline Hashtable_t1307174541 ** get_address_of_hashtable_1() { return &___hashtable_1; }
	inline void set_hashtable_1(Hashtable_t1307174541 * value)
	{
		___hashtable_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashtable_1), value);
	}

	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(HybridDictionary_t3961037581, ___list_2)); }
	inline ListDictionary_t1495247392 * get_list_2() const { return ___list_2; }
	inline ListDictionary_t1495247392 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(ListDictionary_t1495247392 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier((&___list_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HYBRIDDICTIONARY_T3961037581_H
#ifndef LISTDICTIONARY_T1495247392_H
#define LISTDICTIONARY_T1495247392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary
struct  ListDictionary_t1495247392  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Specialized.ListDictionary::count
	int32_t ___count_0;
	// System.Int32 System.Collections.Specialized.ListDictionary::version
	int32_t ___version_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::head
	DictionaryNode_t4226704692 * ___head_2;
	// System.Collections.IComparer System.Collections.Specialized.ListDictionary::comparer
	RuntimeObject* ___comparer_3;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(ListDictionary_t1495247392, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(ListDictionary_t1495247392, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_head_2() { return static_cast<int32_t>(offsetof(ListDictionary_t1495247392, ___head_2)); }
	inline DictionaryNode_t4226704692 * get_head_2() const { return ___head_2; }
	inline DictionaryNode_t4226704692 ** get_address_of_head_2() { return &___head_2; }
	inline void set_head_2(DictionaryNode_t4226704692 * value)
	{
		___head_2 = value;
		Il2CppCodeGenWriteBarrier((&___head_2), value);
	}

	inline static int32_t get_offset_of_comparer_3() { return static_cast<int32_t>(offsetof(ListDictionary_t1495247392, ___comparer_3)); }
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
#endif // LISTDICTIONARY_T1495247392_H
#ifndef DICTIONARYNODE_T4226704692_H
#define DICTIONARYNODE_T4226704692_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNode
struct  DictionaryNode_t4226704692  : public RuntimeObject
{
public:
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::value
	RuntimeObject * ___value_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNode::next
	DictionaryNode_t4226704692 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(DictionaryNode_t4226704692, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(DictionaryNode_t4226704692, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(DictionaryNode_t4226704692, ___next_2)); }
	inline DictionaryNode_t4226704692 * get_next_2() const { return ___next_2; }
	inline DictionaryNode_t4226704692 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(DictionaryNode_t4226704692 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODE_T4226704692_H
#ifndef LOCALE_T282586533_H
#define LOCALE_T282586533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Locale
struct  Locale_t282586533  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALE_T282586533_H
#ifndef DEFAULTEVENTATTRIBUTE_T143032877_H
#define DEFAULTEVENTATTRIBUTE_T143032877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultEventAttribute
struct  DefaultEventAttribute_t143032877  : public Attribute_t3357033155
{
public:
	// System.String System.ComponentModel.DefaultEventAttribute::eventName
	String_t* ___eventName_0;

public:
	inline static int32_t get_offset_of_eventName_0() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t143032877, ___eventName_0)); }
	inline String_t* get_eventName_0() const { return ___eventName_0; }
	inline String_t** get_address_of_eventName_0() { return &___eventName_0; }
	inline void set_eventName_0(String_t* value)
	{
		___eventName_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventName_0), value);
	}
};

struct DefaultEventAttribute_t143032877_StaticFields
{
public:
	// System.ComponentModel.DefaultEventAttribute System.ComponentModel.DefaultEventAttribute::Default
	DefaultEventAttribute_t143032877 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t143032877_StaticFields, ___Default_1)); }
	inline DefaultEventAttribute_t143032877 * get_Default_1() const { return ___Default_1; }
	inline DefaultEventAttribute_t143032877 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultEventAttribute_t143032877 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTEVENTATTRIBUTE_T143032877_H
#ifndef DEFAULTPROPERTYATTRIBUTE_T1267664127_H
#define DEFAULTPROPERTYATTRIBUTE_T1267664127_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultPropertyAttribute
struct  DefaultPropertyAttribute_t1267664127  : public Attribute_t3357033155
{
public:
	// System.String System.ComponentModel.DefaultPropertyAttribute::property_name
	String_t* ___property_name_0;

public:
	inline static int32_t get_offset_of_property_name_0() { return static_cast<int32_t>(offsetof(DefaultPropertyAttribute_t1267664127, ___property_name_0)); }
	inline String_t* get_property_name_0() const { return ___property_name_0; }
	inline String_t** get_address_of_property_name_0() { return &___property_name_0; }
	inline void set_property_name_0(String_t* value)
	{
		___property_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___property_name_0), value);
	}
};

struct DefaultPropertyAttribute_t1267664127_StaticFields
{
public:
	// System.ComponentModel.DefaultPropertyAttribute System.ComponentModel.DefaultPropertyAttribute::Default
	DefaultPropertyAttribute_t1267664127 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultPropertyAttribute_t1267664127_StaticFields, ___Default_1)); }
	inline DefaultPropertyAttribute_t1267664127 * get_Default_1() const { return ___Default_1; }
	inline DefaultPropertyAttribute_t1267664127 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultPropertyAttribute_t1267664127 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTPROPERTYATTRIBUTE_T1267664127_H
#ifndef DEFAULTVALUEATTRIBUTE_T1312506284_H
#define DEFAULTVALUEATTRIBUTE_T1312506284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultValueAttribute
struct  DefaultValueAttribute_t1312506284  : public Attribute_t3357033155
{
public:
	// System.Object System.ComponentModel.DefaultValueAttribute::DefaultValue
	RuntimeObject * ___DefaultValue_0;

public:
	inline static int32_t get_offset_of_DefaultValue_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_t1312506284, ___DefaultValue_0)); }
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
#endif // DEFAULTVALUEATTRIBUTE_T1312506284_H
#ifndef DESIGNERCATEGORYATTRIBUTE_T56080939_H
#define DESIGNERCATEGORYATTRIBUTE_T56080939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerCategoryAttribute
struct  DesignerCategoryAttribute_t56080939  : public Attribute_t3357033155
{
public:
	// System.String System.ComponentModel.DesignerCategoryAttribute::category
	String_t* ___category_0;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t56080939, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}
};

struct DesignerCategoryAttribute_t56080939_StaticFields
{
public:
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Component
	DesignerCategoryAttribute_t56080939 * ___Component_1;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Form
	DesignerCategoryAttribute_t56080939 * ___Form_2;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Generic
	DesignerCategoryAttribute_t56080939 * ___Generic_3;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Default
	DesignerCategoryAttribute_t56080939 * ___Default_4;

public:
	inline static int32_t get_offset_of_Component_1() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t56080939_StaticFields, ___Component_1)); }
	inline DesignerCategoryAttribute_t56080939 * get_Component_1() const { return ___Component_1; }
	inline DesignerCategoryAttribute_t56080939 ** get_address_of_Component_1() { return &___Component_1; }
	inline void set_Component_1(DesignerCategoryAttribute_t56080939 * value)
	{
		___Component_1 = value;
		Il2CppCodeGenWriteBarrier((&___Component_1), value);
	}

	inline static int32_t get_offset_of_Form_2() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t56080939_StaticFields, ___Form_2)); }
	inline DesignerCategoryAttribute_t56080939 * get_Form_2() const { return ___Form_2; }
	inline DesignerCategoryAttribute_t56080939 ** get_address_of_Form_2() { return &___Form_2; }
	inline void set_Form_2(DesignerCategoryAttribute_t56080939 * value)
	{
		___Form_2 = value;
		Il2CppCodeGenWriteBarrier((&___Form_2), value);
	}

	inline static int32_t get_offset_of_Generic_3() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t56080939_StaticFields, ___Generic_3)); }
	inline DesignerCategoryAttribute_t56080939 * get_Generic_3() const { return ___Generic_3; }
	inline DesignerCategoryAttribute_t56080939 ** get_address_of_Generic_3() { return &___Generic_3; }
	inline void set_Generic_3(DesignerCategoryAttribute_t56080939 * value)
	{
		___Generic_3 = value;
		Il2CppCodeGenWriteBarrier((&___Generic_3), value);
	}

	inline static int32_t get_offset_of_Default_4() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t56080939_StaticFields, ___Default_4)); }
	inline DesignerCategoryAttribute_t56080939 * get_Default_4() const { return ___Default_4; }
	inline DesignerCategoryAttribute_t56080939 ** get_address_of_Default_4() { return &___Default_4; }
	inline void set_Default_4(DesignerCategoryAttribute_t56080939 * value)
	{
		___Default_4 = value;
		Il2CppCodeGenWriteBarrier((&___Default_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERCATEGORYATTRIBUTE_T56080939_H
#ifndef DESCRIPTIONATTRIBUTE_T2031275091_H
#define DESCRIPTIONATTRIBUTE_T2031275091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DescriptionAttribute
struct  DescriptionAttribute_t2031275091  : public Attribute_t3357033155
{
public:
	// System.String System.ComponentModel.DescriptionAttribute::desc
	String_t* ___desc_0;

public:
	inline static int32_t get_offset_of_desc_0() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t2031275091, ___desc_0)); }
	inline String_t* get_desc_0() const { return ___desc_0; }
	inline String_t** get_address_of_desc_0() { return &___desc_0; }
	inline void set_desc_0(String_t* value)
	{
		___desc_0 = value;
		Il2CppCodeGenWriteBarrier((&___desc_0), value);
	}
};

struct DescriptionAttribute_t2031275091_StaticFields
{
public:
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_t2031275091 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t2031275091_StaticFields, ___Default_1)); }
	inline DescriptionAttribute_t2031275091 * get_Default_1() const { return ___Default_1; }
	inline DescriptionAttribute_t2031275091 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DescriptionAttribute_t2031275091 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRIPTIONATTRIBUTE_T2031275091_H
#ifndef DESIGNONLYATTRIBUTE_T2867166797_H
#define DESIGNONLYATTRIBUTE_T2867166797_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignOnlyAttribute
struct  DesignOnlyAttribute_t2867166797  : public Attribute_t3357033155
{
public:
	// System.Boolean System.ComponentModel.DesignOnlyAttribute::design_only
	bool ___design_only_0;

public:
	inline static int32_t get_offset_of_design_only_0() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t2867166797, ___design_only_0)); }
	inline bool get_design_only_0() const { return ___design_only_0; }
	inline bool* get_address_of_design_only_0() { return &___design_only_0; }
	inline void set_design_only_0(bool value)
	{
		___design_only_0 = value;
	}
};

struct DesignOnlyAttribute_t2867166797_StaticFields
{
public:
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::Default
	DesignOnlyAttribute_t2867166797 * ___Default_1;
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::No
	DesignOnlyAttribute_t2867166797 * ___No_2;
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::Yes
	DesignOnlyAttribute_t2867166797 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t2867166797_StaticFields, ___Default_1)); }
	inline DesignOnlyAttribute_t2867166797 * get_Default_1() const { return ___Default_1; }
	inline DesignOnlyAttribute_t2867166797 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignOnlyAttribute_t2867166797 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t2867166797_StaticFields, ___No_2)); }
	inline DesignOnlyAttribute_t2867166797 * get_No_2() const { return ___No_2; }
	inline DesignOnlyAttribute_t2867166797 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(DesignOnlyAttribute_t2867166797 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t2867166797_StaticFields, ___Yes_3)); }
	inline DesignOnlyAttribute_t2867166797 * get_Yes_3() const { return ___Yes_3; }
	inline DesignOnlyAttribute_t2867166797 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(DesignOnlyAttribute_t2867166797 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNONLYATTRIBUTE_T2867166797_H
#ifndef DESIGNTIMEVISIBLEATTRIBUTE_T480323330_H
#define DESIGNTIMEVISIBLEATTRIBUTE_T480323330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignTimeVisibleAttribute
struct  DesignTimeVisibleAttribute_t480323330  : public Attribute_t3357033155
{
public:
	// System.Boolean System.ComponentModel.DesignTimeVisibleAttribute::visible
	bool ___visible_0;

public:
	inline static int32_t get_offset_of_visible_0() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t480323330, ___visible_0)); }
	inline bool get_visible_0() const { return ___visible_0; }
	inline bool* get_address_of_visible_0() { return &___visible_0; }
	inline void set_visible_0(bool value)
	{
		___visible_0 = value;
	}
};

struct DesignTimeVisibleAttribute_t480323330_StaticFields
{
public:
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::Default
	DesignTimeVisibleAttribute_t480323330 * ___Default_1;
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::No
	DesignTimeVisibleAttribute_t480323330 * ___No_2;
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::Yes
	DesignTimeVisibleAttribute_t480323330 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t480323330_StaticFields, ___Default_1)); }
	inline DesignTimeVisibleAttribute_t480323330 * get_Default_1() const { return ___Default_1; }
	inline DesignTimeVisibleAttribute_t480323330 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignTimeVisibleAttribute_t480323330 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t480323330_StaticFields, ___No_2)); }
	inline DesignTimeVisibleAttribute_t480323330 * get_No_2() const { return ___No_2; }
	inline DesignTimeVisibleAttribute_t480323330 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(DesignTimeVisibleAttribute_t480323330 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t480323330_StaticFields, ___Yes_3)); }
	inline DesignTimeVisibleAttribute_t480323330 * get_Yes_3() const { return ___Yes_3; }
	inline DesignTimeVisibleAttribute_t480323330 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(DesignTimeVisibleAttribute_t480323330 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNTIMEVISIBLEATTRIBUTE_T480323330_H
#ifndef DESIGNERATTRIBUTE_T854709892_H
#define DESIGNERATTRIBUTE_T854709892_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerAttribute
struct  DesignerAttribute_t854709892  : public Attribute_t3357033155
{
public:
	// System.String System.ComponentModel.DesignerAttribute::name
	String_t* ___name_0;
	// System.String System.ComponentModel.DesignerAttribute::basetypename
	String_t* ___basetypename_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DesignerAttribute_t854709892, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_basetypename_1() { return static_cast<int32_t>(offsetof(DesignerAttribute_t854709892, ___basetypename_1)); }
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
#endif // DESIGNERATTRIBUTE_T854709892_H
#ifndef DISPLAYNAMEATTRIBUTE_T312470342_H
#define DISPLAYNAMEATTRIBUTE_T312470342_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DisplayNameAttribute
struct  DisplayNameAttribute_t312470342  : public Attribute_t3357033155
{
public:
	// System.String System.ComponentModel.DisplayNameAttribute::attributeDisplayName
	String_t* ___attributeDisplayName_1;

public:
	inline static int32_t get_offset_of_attributeDisplayName_1() { return static_cast<int32_t>(offsetof(DisplayNameAttribute_t312470342, ___attributeDisplayName_1)); }
	inline String_t* get_attributeDisplayName_1() const { return ___attributeDisplayName_1; }
	inline String_t** get_address_of_attributeDisplayName_1() { return &___attributeDisplayName_1; }
	inline void set_attributeDisplayName_1(String_t* value)
	{
		___attributeDisplayName_1 = value;
		Il2CppCodeGenWriteBarrier((&___attributeDisplayName_1), value);
	}
};

struct DisplayNameAttribute_t312470342_StaticFields
{
public:
	// System.ComponentModel.DisplayNameAttribute System.ComponentModel.DisplayNameAttribute::Default
	DisplayNameAttribute_t312470342 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(DisplayNameAttribute_t312470342_StaticFields, ___Default_0)); }
	inline DisplayNameAttribute_t312470342 * get_Default_0() const { return ___Default_0; }
	inline DisplayNameAttribute_t312470342 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(DisplayNameAttribute_t312470342 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAYNAMEATTRIBUTE_T312470342_H
#ifndef REFERENCECONVERTER_T1263219375_H
#define REFERENCECONVERTER_T1263219375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReferenceConverter
struct  ReferenceConverter_t1263219375  : public TypeConverter_t2207633881
{
public:
	// System.Type System.ComponentModel.ReferenceConverter::reference_type
	Type_t * ___reference_type_0;

public:
	inline static int32_t get_offset_of_reference_type_0() { return static_cast<int32_t>(offsetof(ReferenceConverter_t1263219375, ___reference_type_0)); }
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
#endif // REFERENCECONVERTER_T1263219375_H
#ifndef EDITORATTRIBUTE_T1114242975_H
#define EDITORATTRIBUTE_T1114242975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorAttribute
struct  EditorAttribute_t1114242975  : public Attribute_t3357033155
{
public:
	// System.String System.ComponentModel.EditorAttribute::name
	String_t* ___name_0;
	// System.String System.ComponentModel.EditorAttribute::basename
	String_t* ___basename_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(EditorAttribute_t1114242975, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_basename_1() { return static_cast<int32_t>(offsetof(EditorAttribute_t1114242975, ___basename_1)); }
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
#endif // EDITORATTRIBUTE_T1114242975_H
#ifndef ENUMCONVERTER_T3352285778_H
#define ENUMCONVERTER_T3352285778_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter
struct  EnumConverter_t3352285778  : public TypeConverter_t2207633881
{
public:
	// System.Type System.ComponentModel.EnumConverter::type
	Type_t * ___type_0;
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.EnumConverter::stdValues
	StandardValuesCollection_t1740473589 * ___stdValues_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(EnumConverter_t3352285778, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_stdValues_1() { return static_cast<int32_t>(offsetof(EnumConverter_t3352285778, ___stdValues_1)); }
	inline StandardValuesCollection_t1740473589 * get_stdValues_1() const { return ___stdValues_1; }
	inline StandardValuesCollection_t1740473589 ** get_address_of_stdValues_1() { return &___stdValues_1; }
	inline void set_stdValues_1(StandardValuesCollection_t1740473589 * value)
	{
		___stdValues_1 = value;
		Il2CppCodeGenWriteBarrier((&___stdValues_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMCONVERTER_T3352285778_H
#ifndef EVENTDESCRIPTOR_T3413893703_H
#define EVENTDESCRIPTOR_T3413893703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventDescriptor
struct  EventDescriptor_t3413893703  : public MemberDescriptor_t298054629
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTDESCRIPTOR_T3413893703_H
#ifndef ENUM_T348024492_H
#define ENUM_T348024492_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t348024492  : public ValueType_t728981031
{
public:

public:
};

struct Enum_t348024492_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1569978218* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t348024492_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1569978218* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1569978218** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1569978218* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t348024492_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t348024492_marshaled_com
{
};
#endif // ENUM_T348024492_H
#ifndef VOID_T387164986_H
#define VOID_T387164986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t387164986 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T387164986_H
#ifndef EXPANDABLEOBJECTCONVERTER_T3793876_H
#define EXPANDABLEOBJECTCONVERTER_T3793876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ExpandableObjectConverter
struct  ExpandableObjectConverter_t3793876  : public TypeConverter_t2207633881
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPANDABLEOBJECTCONVERTER_T3793876_H
#ifndef GUIDCONVERTER_T3301629015_H
#define GUIDCONVERTER_T3301629015_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.GuidConverter
struct  GuidConverter_t3301629015  : public TypeConverter_t2207633881
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDCONVERTER_T3301629015_H
#ifndef PROPERTYDESCRIPTOR_T3067554772_H
#define PROPERTYDESCRIPTOR_T3067554772_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptor
struct  PropertyDescriptor_t3067554772  : public MemberDescriptor_t298054629
{
public:
	// System.ComponentModel.TypeConverter System.ComponentModel.PropertyDescriptor::converter
	TypeConverter_t2207633881 * ___converter_4;
	// System.Collections.Hashtable System.ComponentModel.PropertyDescriptor::notifiers
	Hashtable_t1307174541 * ___notifiers_5;

public:
	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t3067554772, ___converter_4)); }
	inline TypeConverter_t2207633881 * get_converter_4() const { return ___converter_4; }
	inline TypeConverter_t2207633881 ** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(TypeConverter_t2207633881 * value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier((&___converter_4), value);
	}

	inline static int32_t get_offset_of_notifiers_5() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t3067554772, ___notifiers_5)); }
	inline Hashtable_t1307174541 * get_notifiers_5() const { return ___notifiers_5; }
	inline Hashtable_t1307174541 ** get_address_of_notifiers_5() { return &___notifiers_5; }
	inline void set_notifiers_5(Hashtable_t1307174541 * value)
	{
		___notifiers_5 = value;
		Il2CppCodeGenWriteBarrier((&___notifiers_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTOR_T3067554772_H
#ifndef DOWORKEVENTARGS_T3074036282_H
#define DOWORKEVENTARGS_T3074036282_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DoWorkEventArgs
struct  DoWorkEventArgs_t3074036282  : public EventArgs_t1316716651
{
public:
	// System.Object System.ComponentModel.DoWorkEventArgs::arg
	RuntimeObject * ___arg_1;
	// System.Object System.ComponentModel.DoWorkEventArgs::result
	RuntimeObject * ___result_2;
	// System.Boolean System.ComponentModel.DoWorkEventArgs::cancel
	bool ___cancel_3;

public:
	inline static int32_t get_offset_of_arg_1() { return static_cast<int32_t>(offsetof(DoWorkEventArgs_t3074036282, ___arg_1)); }
	inline RuntimeObject * get_arg_1() const { return ___arg_1; }
	inline RuntimeObject ** get_address_of_arg_1() { return &___arg_1; }
	inline void set_arg_1(RuntimeObject * value)
	{
		___arg_1 = value;
		Il2CppCodeGenWriteBarrier((&___arg_1), value);
	}

	inline static int32_t get_offset_of_result_2() { return static_cast<int32_t>(offsetof(DoWorkEventArgs_t3074036282, ___result_2)); }
	inline RuntimeObject * get_result_2() const { return ___result_2; }
	inline RuntimeObject ** get_address_of_result_2() { return &___result_2; }
	inline void set_result_2(RuntimeObject * value)
	{
		___result_2 = value;
		Il2CppCodeGenWriteBarrier((&___result_2), value);
	}

	inline static int32_t get_offset_of_cancel_3() { return static_cast<int32_t>(offsetof(DoWorkEventArgs_t3074036282, ___cancel_3)); }
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
#endif // DOWORKEVENTARGS_T3074036282_H
#ifndef COMPONENT_T4185232579_H
#define COMPONENT_T4185232579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Component
struct  Component_t4185232579  : public MarshalByRefObject_t1336189526
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::event_handlers
	EventHandlerList_t2484400441 * ___event_handlers_1;
	// System.ComponentModel.ISite System.ComponentModel.Component::mySite
	RuntimeObject* ___mySite_2;
	// System.Object System.ComponentModel.Component::disposedEvent
	RuntimeObject * ___disposedEvent_3;

public:
	inline static int32_t get_offset_of_event_handlers_1() { return static_cast<int32_t>(offsetof(Component_t4185232579, ___event_handlers_1)); }
	inline EventHandlerList_t2484400441 * get_event_handlers_1() const { return ___event_handlers_1; }
	inline EventHandlerList_t2484400441 ** get_address_of_event_handlers_1() { return &___event_handlers_1; }
	inline void set_event_handlers_1(EventHandlerList_t2484400441 * value)
	{
		___event_handlers_1 = value;
		Il2CppCodeGenWriteBarrier((&___event_handlers_1), value);
	}

	inline static int32_t get_offset_of_mySite_2() { return static_cast<int32_t>(offsetof(Component_t4185232579, ___mySite_2)); }
	inline RuntimeObject* get_mySite_2() const { return ___mySite_2; }
	inline RuntimeObject** get_address_of_mySite_2() { return &___mySite_2; }
	inline void set_mySite_2(RuntimeObject* value)
	{
		___mySite_2 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_2), value);
	}

	inline static int32_t get_offset_of_disposedEvent_3() { return static_cast<int32_t>(offsetof(Component_t4185232579, ___disposedEvent_3)); }
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
#endif // COMPONENT_T4185232579_H
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
#ifndef BASENUMBERCONVERTER_T1304543369_H
#define BASENUMBERCONVERTER_T1304543369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BaseNumberConverter
struct  BaseNumberConverter_t1304543369  : public TypeConverter_t2207633881
{
public:
	// System.Type System.ComponentModel.BaseNumberConverter::InnerType
	Type_t * ___InnerType_0;

public:
	inline static int32_t get_offset_of_InnerType_0() { return static_cast<int32_t>(offsetof(BaseNumberConverter_t1304543369, ___InnerType_0)); }
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
#endif // BASENUMBERCONVERTER_T1304543369_H
#ifndef NAMEVALUECOLLECTION_T122369437_H
#define NAMEVALUECOLLECTION_T122369437_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameValueCollection
struct  NameValueCollection_t122369437  : public NameObjectCollectionBase_t4027231775
{
public:
	// System.String[] System.Collections.Specialized.NameValueCollection::cachedAllKeys
	StringU5BU5D_t2383004514* ___cachedAllKeys_10;
	// System.String[] System.Collections.Specialized.NameValueCollection::cachedAll
	StringU5BU5D_t2383004514* ___cachedAll_11;

public:
	inline static int32_t get_offset_of_cachedAllKeys_10() { return static_cast<int32_t>(offsetof(NameValueCollection_t122369437, ___cachedAllKeys_10)); }
	inline StringU5BU5D_t2383004514* get_cachedAllKeys_10() const { return ___cachedAllKeys_10; }
	inline StringU5BU5D_t2383004514** get_address_of_cachedAllKeys_10() { return &___cachedAllKeys_10; }
	inline void set_cachedAllKeys_10(StringU5BU5D_t2383004514* value)
	{
		___cachedAllKeys_10 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAllKeys_10), value);
	}

	inline static int32_t get_offset_of_cachedAll_11() { return static_cast<int32_t>(offsetof(NameValueCollection_t122369437, ___cachedAll_11)); }
	inline StringU5BU5D_t2383004514* get_cachedAll_11() const { return ___cachedAll_11; }
	inline StringU5BU5D_t2383004514** get_address_of_cachedAll_11() { return &___cachedAll_11; }
	inline void set_cachedAll_11(StringU5BU5D_t2383004514* value)
	{
		___cachedAll_11 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAll_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEVALUECOLLECTION_T122369437_H
#ifndef DATETIMECONVERTER_T1756933353_H
#define DATETIMECONVERTER_T1756933353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DateTimeConverter
struct  DateTimeConverter_t1756933353  : public TypeConverter_t2207633881
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMECONVERTER_T1756933353_H
#ifndef BOOLEANCONVERTER_T2393799264_H
#define BOOLEANCONVERTER_T2393799264_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BooleanConverter
struct  BooleanConverter_t2393799264  : public TypeConverter_t2207633881
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEANCONVERTER_T2393799264_H
#ifndef BROWSABLEATTRIBUTE_T2969220437_H
#define BROWSABLEATTRIBUTE_T2969220437_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BrowsableAttribute
struct  BrowsableAttribute_t2969220437  : public Attribute_t3357033155
{
public:
	// System.Boolean System.ComponentModel.BrowsableAttribute::browsable
	bool ___browsable_0;

public:
	inline static int32_t get_offset_of_browsable_0() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t2969220437, ___browsable_0)); }
	inline bool get_browsable_0() const { return ___browsable_0; }
	inline bool* get_address_of_browsable_0() { return &___browsable_0; }
	inline void set_browsable_0(bool value)
	{
		___browsable_0 = value;
	}
};

struct BrowsableAttribute_t2969220437_StaticFields
{
public:
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Default
	BrowsableAttribute_t2969220437 * ___Default_1;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::No
	BrowsableAttribute_t2969220437 * ___No_2;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Yes
	BrowsableAttribute_t2969220437 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t2969220437_StaticFields, ___Default_1)); }
	inline BrowsableAttribute_t2969220437 * get_Default_1() const { return ___Default_1; }
	inline BrowsableAttribute_t2969220437 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(BrowsableAttribute_t2969220437 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t2969220437_StaticFields, ___No_2)); }
	inline BrowsableAttribute_t2969220437 * get_No_2() const { return ___No_2; }
	inline BrowsableAttribute_t2969220437 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(BrowsableAttribute_t2969220437 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t2969220437_StaticFields, ___Yes_3)); }
	inline BrowsableAttribute_t2969220437 * get_Yes_3() const { return ___Yes_3; }
	inline BrowsableAttribute_t2969220437 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(BrowsableAttribute_t2969220437 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BROWSABLEATTRIBUTE_T2969220437_H
#ifndef MONOTODOATTRIBUTE_T3384035574_H
#define MONOTODOATTRIBUTE_T3384035574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTODOAttribute
struct  MonoTODOAttribute_t3384035574  : public Attribute_t3357033155
{
public:
	// System.String System.MonoTODOAttribute::comment
	String_t* ___comment_0;

public:
	inline static int32_t get_offset_of_comment_0() { return static_cast<int32_t>(offsetof(MonoTODOAttribute_t3384035574, ___comment_0)); }
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
#endif // MONOTODOATTRIBUTE_T3384035574_H
#ifndef U24ARRAYTYPEU244_T3787476164_H
#define U24ARRAYTYPEU244_T3787476164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$4
struct  U24ArrayTypeU244_t3787476164 
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
		uint8_t U24ArrayTypeU244_t3787476164__padding[4];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU244_T3787476164_H
#ifndef U24ARRAYTYPEU2416_T2663438154_H
#define U24ARRAYTYPEU2416_T2663438154_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$16
struct  U24ArrayTypeU2416_t2663438154 
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
		uint8_t U24ArrayTypeU2416_t2663438154__padding[16];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2416_T2663438154_H
#ifndef U24ARRAYTYPEU2412_T2667971566_H
#define U24ARRAYTYPEU2412_T2667971566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$12
struct  U24ArrayTypeU2412_t2667971566 
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
		uint8_t U24ArrayTypeU2412_t2667971566__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2412_T2667971566_H
#ifndef CANCELEVENTARGS_T3239927959_H
#define CANCELEVENTARGS_T3239927959_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CancelEventArgs
struct  CancelEventArgs_t3239927959  : public EventArgs_t1316716651
{
public:
	// System.Boolean System.ComponentModel.CancelEventArgs::cancel
	bool ___cancel_1;

public:
	inline static int32_t get_offset_of_cancel_1() { return static_cast<int32_t>(offsetof(CancelEventArgs_t3239927959, ___cancel_1)); }
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
#endif // CANCELEVENTARGS_T3239927959_H
#ifndef ASYNCCOMPLETEDEVENTARGS_T597599062_H
#define ASYNCCOMPLETEDEVENTARGS_T597599062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AsyncCompletedEventArgs
struct  AsyncCompletedEventArgs_t597599062  : public EventArgs_t1316716651
{
public:
	// System.Exception System.ComponentModel.AsyncCompletedEventArgs::_error
	Exception_t380910560 * ____error_1;
	// System.Boolean System.ComponentModel.AsyncCompletedEventArgs::_cancelled
	bool ____cancelled_2;
	// System.Object System.ComponentModel.AsyncCompletedEventArgs::_userState
	RuntimeObject * ____userState_3;

public:
	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(AsyncCompletedEventArgs_t597599062, ____error_1)); }
	inline Exception_t380910560 * get__error_1() const { return ____error_1; }
	inline Exception_t380910560 ** get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(Exception_t380910560 * value)
	{
		____error_1 = value;
		Il2CppCodeGenWriteBarrier((&____error_1), value);
	}

	inline static int32_t get_offset_of__cancelled_2() { return static_cast<int32_t>(offsetof(AsyncCompletedEventArgs_t597599062, ____cancelled_2)); }
	inline bool get__cancelled_2() const { return ____cancelled_2; }
	inline bool* get_address_of__cancelled_2() { return &____cancelled_2; }
	inline void set__cancelled_2(bool value)
	{
		____cancelled_2 = value;
	}

	inline static int32_t get_offset_of__userState_3() { return static_cast<int32_t>(offsetof(AsyncCompletedEventArgs_t597599062, ____userState_3)); }
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
#endif // ASYNCCOMPLETEDEVENTARGS_T597599062_H
#ifndef CATEGORYATTRIBUTE_T4075104885_H
#define CATEGORYATTRIBUTE_T4075104885_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CategoryAttribute
struct  CategoryAttribute_t4075104885  : public Attribute_t3357033155
{
public:
	// System.String System.ComponentModel.CategoryAttribute::category
	String_t* ___category_0;
	// System.Boolean System.ComponentModel.CategoryAttribute::IsLocalized
	bool ___IsLocalized_1;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(CategoryAttribute_t4075104885, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}

	inline static int32_t get_offset_of_IsLocalized_1() { return static_cast<int32_t>(offsetof(CategoryAttribute_t4075104885, ___IsLocalized_1)); }
	inline bool get_IsLocalized_1() const { return ___IsLocalized_1; }
	inline bool* get_address_of_IsLocalized_1() { return &___IsLocalized_1; }
	inline void set_IsLocalized_1(bool value)
	{
		___IsLocalized_1 = value;
	}
};

struct CategoryAttribute_t4075104885_StaticFields
{
public:
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::action
	CategoryAttribute_t4075104885 * ___action_2;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::appearance
	CategoryAttribute_t4075104885 * ___appearance_3;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::behaviour
	CategoryAttribute_t4075104885 * ___behaviour_4;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::data
	CategoryAttribute_t4075104885 * ___data_5;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::def
	CategoryAttribute_t4075104885 * ___def_6;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::design
	CategoryAttribute_t4075104885 * ___design_7;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::drag_drop
	CategoryAttribute_t4075104885 * ___drag_drop_8;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::focus
	CategoryAttribute_t4075104885 * ___focus_9;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::format
	CategoryAttribute_t4075104885 * ___format_10;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::key
	CategoryAttribute_t4075104885 * ___key_11;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::layout
	CategoryAttribute_t4075104885 * ___layout_12;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::mouse
	CategoryAttribute_t4075104885 * ___mouse_13;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::window_style
	CategoryAttribute_t4075104885 * ___window_style_14;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::async
	CategoryAttribute_t4075104885 * ___async_15;
	// System.Object System.ComponentModel.CategoryAttribute::lockobj
	RuntimeObject * ___lockobj_16;

public:
	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(CategoryAttribute_t4075104885_StaticFields, ___action_2)); }
	inline CategoryAttribute_t4075104885 * get_action_2() const { return ___action_2; }
	inline CategoryAttribute_t4075104885 ** get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(CategoryAttribute_t4075104885 * value)
	{
		___action_2 = value;
		Il2CppCodeGenWriteBarrier((&___action_2), value);
	}

	inline static int32_t get_offset_of_appearance_3() { return static_cast<int32_t>(offsetof(CategoryAttribute_t4075104885_StaticFields, ___appearance_3)); }
	inline CategoryAttribute_t4075104885 * get_appearance_3() const { return ___appearance_3; }
	inline CategoryAttribute_t4075104885 ** get_address_of_appearance_3() { return &___appearance_3; }
	inline void set_appearance_3(CategoryAttribute_t4075104885 * value)
	{
		___appearance_3 = value;
		Il2CppCodeGenWriteBarrier((&___appearance_3), value);
	}

	inline static int32_t get_offset_of_behaviour_4() { return static_cast<int32_t>(offsetof(CategoryAttribute_t4075104885_StaticFields, ___behaviour_4)); }
	inline CategoryAttribute_t4075104885 * get_behaviour_4() const { return ___behaviour_4; }
	inline CategoryAttribute_t4075104885 ** get_address_of_behaviour_4() { return &___behaviour_4; }
	inline void set_behaviour_4(CategoryAttribute_t4075104885 * value)
	{
		___behaviour_4 = value;
		Il2CppCodeGenWriteBarrier((&___behaviour_4), value);
	}

	inline static int32_t get_offset_of_data_5() { return static_cast<int32_t>(offsetof(CategoryAttribute_t4075104885_StaticFields, ___data_5)); }
	inline CategoryAttribute_t4075104885 * get_data_5() const { return ___data_5; }
	inline CategoryAttribute_t4075104885 ** get_address_of_data_5() { return &___data_5; }
	inline void set_data_5(CategoryAttribute_t4075104885 * value)
	{
		___data_5 = value;
		Il2CppCodeGenWriteBarrier((&___data_5), value);
	}

	inline static int32_t get_offset_of_def_6() { return static_cast<int32_t>(offsetof(CategoryAttribute_t4075104885_StaticFields, ___def_6)); }
	inline CategoryAttribute_t4075104885 * get_def_6() const { return ___def_6; }
	inline CategoryAttribute_t4075104885 ** get_address_of_def_6() { return &___def_6; }
	inline void set_def_6(CategoryAttribute_t4075104885 * value)
	{
		___def_6 = value;
		Il2CppCodeGenWriteBarrier((&___def_6), value);
	}

	inline static int32_t get_offset_of_design_7() { return static_cast<int32_t>(offsetof(CategoryAttribute_t4075104885_StaticFields, ___design_7)); }
	inline CategoryAttribute_t4075104885 * get_design_7() const { return ___design_7; }
	inline CategoryAttribute_t4075104885 ** get_address_of_design_7() { return &___design_7; }
	inline void set_design_7(CategoryAttribute_t4075104885 * value)
	{
		___design_7 = value;
		Il2CppCodeGenWriteBarrier((&___design_7), value);
	}

	inline static int32_t get_offset_of_drag_drop_8() { return static_cast<int32_t>(offsetof(CategoryAttribute_t4075104885_StaticFields, ___drag_drop_8)); }
	inline CategoryAttribute_t4075104885 * get_drag_drop_8() const { return ___drag_drop_8; }
	inline CategoryAttribute_t4075104885 ** get_address_of_drag_drop_8() { return &___drag_drop_8; }
	inline void set_drag_drop_8(CategoryAttribute_t4075104885 * value)
	{
		___drag_drop_8 = value;
		Il2CppCodeGenWriteBarrier((&___drag_drop_8), value);
	}

	inline static int32_t get_offset_of_focus_9() { return static_cast<int32_t>(offsetof(CategoryAttribute_t4075104885_StaticFields, ___focus_9)); }
	inline CategoryAttribute_t4075104885 * get_focus_9() const { return ___focus_9; }
	inline CategoryAttribute_t4075104885 ** get_address_of_focus_9() { return &___focus_9; }
	inline void set_focus_9(CategoryAttribute_t4075104885 * value)
	{
		___focus_9 = value;
		Il2CppCodeGenWriteBarrier((&___focus_9), value);
	}

	inline static int32_t get_offset_of_format_10() { return static_cast<int32_t>(offsetof(CategoryAttribute_t4075104885_StaticFields, ___format_10)); }
	inline CategoryAttribute_t4075104885 * get_format_10() const { return ___format_10; }
	inline CategoryAttribute_t4075104885 ** get_address_of_format_10() { return &___format_10; }
	inline void set_format_10(CategoryAttribute_t4075104885 * value)
	{
		___format_10 = value;
		Il2CppCodeGenWriteBarrier((&___format_10), value);
	}

	inline static int32_t get_offset_of_key_11() { return static_cast<int32_t>(offsetof(CategoryAttribute_t4075104885_StaticFields, ___key_11)); }
	inline CategoryAttribute_t4075104885 * get_key_11() const { return ___key_11; }
	inline CategoryAttribute_t4075104885 ** get_address_of_key_11() { return &___key_11; }
	inline void set_key_11(CategoryAttribute_t4075104885 * value)
	{
		___key_11 = value;
		Il2CppCodeGenWriteBarrier((&___key_11), value);
	}

	inline static int32_t get_offset_of_layout_12() { return static_cast<int32_t>(offsetof(CategoryAttribute_t4075104885_StaticFields, ___layout_12)); }
	inline CategoryAttribute_t4075104885 * get_layout_12() const { return ___layout_12; }
	inline CategoryAttribute_t4075104885 ** get_address_of_layout_12() { return &___layout_12; }
	inline void set_layout_12(CategoryAttribute_t4075104885 * value)
	{
		___layout_12 = value;
		Il2CppCodeGenWriteBarrier((&___layout_12), value);
	}

	inline static int32_t get_offset_of_mouse_13() { return static_cast<int32_t>(offsetof(CategoryAttribute_t4075104885_StaticFields, ___mouse_13)); }
	inline CategoryAttribute_t4075104885 * get_mouse_13() const { return ___mouse_13; }
	inline CategoryAttribute_t4075104885 ** get_address_of_mouse_13() { return &___mouse_13; }
	inline void set_mouse_13(CategoryAttribute_t4075104885 * value)
	{
		___mouse_13 = value;
		Il2CppCodeGenWriteBarrier((&___mouse_13), value);
	}

	inline static int32_t get_offset_of_window_style_14() { return static_cast<int32_t>(offsetof(CategoryAttribute_t4075104885_StaticFields, ___window_style_14)); }
	inline CategoryAttribute_t4075104885 * get_window_style_14() const { return ___window_style_14; }
	inline CategoryAttribute_t4075104885 ** get_address_of_window_style_14() { return &___window_style_14; }
	inline void set_window_style_14(CategoryAttribute_t4075104885 * value)
	{
		___window_style_14 = value;
		Il2CppCodeGenWriteBarrier((&___window_style_14), value);
	}

	inline static int32_t get_offset_of_async_15() { return static_cast<int32_t>(offsetof(CategoryAttribute_t4075104885_StaticFields, ___async_15)); }
	inline CategoryAttribute_t4075104885 * get_async_15() const { return ___async_15; }
	inline CategoryAttribute_t4075104885 ** get_address_of_async_15() { return &___async_15; }
	inline void set_async_15(CategoryAttribute_t4075104885 * value)
	{
		___async_15 = value;
		Il2CppCodeGenWriteBarrier((&___async_15), value);
	}

	inline static int32_t get_offset_of_lockobj_16() { return static_cast<int32_t>(offsetof(CategoryAttribute_t4075104885_StaticFields, ___lockobj_16)); }
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
#endif // CATEGORYATTRIBUTE_T4075104885_H
#ifndef U24ARRAYTYPEU2448_T3738919834_H
#define U24ARRAYTYPEU2448_T3738919834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$48
struct  U24ArrayTypeU2448_t3738919834 
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
		uint8_t U24ArrayTypeU2448_t3738919834__padding[48];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2448_T3738919834_H
#ifndef CHARCONVERTER_T3147734147_H
#define CHARCONVERTER_T3147734147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CharConverter
struct  CharConverter_t3147734147  : public TypeConverter_t2207633881
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARCONVERTER_T3147734147_H
#ifndef U24ARRAYTYPEU2432_T3920185505_H
#define U24ARRAYTYPEU2432_T3920185505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$32
struct  U24ArrayTypeU2432_t3920185505 
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
		uint8_t U24ArrayTypeU2432_t3920185505__padding[32];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2432_T3920185505_H
#ifndef U24ARRAYTYPEU2420_T3311881286_H
#define U24ARRAYTYPEU2420_T3311881286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$20
struct  U24ArrayTypeU2420_t3311881286 
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
		uint8_t U24ArrayTypeU2420_t3311881286__padding[20];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2420_T3311881286_H
#ifndef COLLECTIONCONVERTER_T1572711904_H
#define COLLECTIONCONVERTER_T1572711904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionConverter
struct  CollectionConverter_t1572711904  : public TypeConverter_t2207633881
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCONVERTER_T1572711904_H
#ifndef U24ARRAYTYPEU24256_T4178967213_H
#define U24ARRAYTYPEU24256_T4178967213_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$256
struct  U24ArrayTypeU24256_t4178967213 
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
		uint8_t U24ArrayTypeU24256_t4178967213__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24256_T4178967213_H
#ifndef COMPONENTCOLLECTION_T846785179_H
#define COMPONENTCOLLECTION_T846785179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentCollection
struct  ComponentCollection_t846785179  : public ReadOnlyCollectionBase_t202851394
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCOLLECTION_T846785179_H
#ifndef U24ARRAYTYPEU243132_T3128226517_H
#define U24ARRAYTYPEU243132_T3128226517_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$3132
struct  U24ArrayTypeU243132_t3128226517 
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
		uint8_t U24ArrayTypeU243132_t3128226517__padding[3132];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU243132_T3128226517_H
#ifndef CULTUREINFOCONVERTER_T1411395944_H
#define CULTUREINFOCONVERTER_T1411395944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter
struct  CultureInfoConverter_t1411395944  : public TypeConverter_t2207633881
{
public:
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.CultureInfoConverter::_standardValues
	StandardValuesCollection_t1740473589 * ____standardValues_0;

public:
	inline static int32_t get_offset_of__standardValues_0() { return static_cast<int32_t>(offsetof(CultureInfoConverter_t1411395944, ____standardValues_0)); }
	inline StandardValuesCollection_t1740473589 * get__standardValues_0() const { return ____standardValues_0; }
	inline StandardValuesCollection_t1740473589 ** get_address_of__standardValues_0() { return &____standardValues_0; }
	inline void set__standardValues_0(StandardValuesCollection_t1740473589 * value)
	{
		____standardValues_0 = value;
		Il2CppCodeGenWriteBarrier((&____standardValues_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCONVERTER_T1411395944_H
#ifndef U24ARRAYTYPEU2464_T1934486055_H
#define U24ARRAYTYPEU2464_T1934486055_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$64
struct  U24ArrayTypeU2464_t1934486055 
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
		uint8_t U24ArrayTypeU2464_t1934486055__padding[64];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2464_T1934486055_H
#ifndef RUNTIMELICENSECONTEXT_T753632689_H
#define RUNTIMELICENSECONTEXT_T753632689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.RuntimeLicenseContext
struct  RuntimeLicenseContext_t753632689  : public LicenseContext_t1792599635
{
public:
	// System.Collections.Hashtable System.ComponentModel.Design.RuntimeLicenseContext::extraassemblies
	Hashtable_t1307174541 * ___extraassemblies_0;
	// System.Collections.Hashtable System.ComponentModel.Design.RuntimeLicenseContext::keys
	Hashtable_t1307174541 * ___keys_1;

public:
	inline static int32_t get_offset_of_extraassemblies_0() { return static_cast<int32_t>(offsetof(RuntimeLicenseContext_t753632689, ___extraassemblies_0)); }
	inline Hashtable_t1307174541 * get_extraassemblies_0() const { return ___extraassemblies_0; }
	inline Hashtable_t1307174541 ** get_address_of_extraassemblies_0() { return &___extraassemblies_0; }
	inline void set_extraassemblies_0(Hashtable_t1307174541 * value)
	{
		___extraassemblies_0 = value;
		Il2CppCodeGenWriteBarrier((&___extraassemblies_0), value);
	}

	inline static int32_t get_offset_of_keys_1() { return static_cast<int32_t>(offsetof(RuntimeLicenseContext_t753632689, ___keys_1)); }
	inline Hashtable_t1307174541 * get_keys_1() const { return ___keys_1; }
	inline Hashtable_t1307174541 ** get_address_of_keys_1() { return &___keys_1; }
	inline void set_keys_1(Hashtable_t1307174541 * value)
	{
		___keys_1 = value;
		Il2CppCodeGenWriteBarrier((&___keys_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMELICENSECONTEXT_T753632689_H
#ifndef MONONOTSUPPORTEDATTRIBUTE_T3637172374_H
#define MONONOTSUPPORTEDATTRIBUTE_T3637172374_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoNotSupportedAttribute
struct  MonoNotSupportedAttribute_t3637172374  : public MonoTODOAttribute_t3384035574
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONONOTSUPPORTEDATTRIBUTE_T3637172374_H
#ifndef DECIMALCONVERTER_T635244599_H
#define DECIMALCONVERTER_T635244599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DecimalConverter
struct  DecimalConverter_t635244599  : public BaseNumberConverter_t1304543369
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMALCONVERTER_T635244599_H
#ifndef ARRAYPROPERTYDESCRIPTOR_T3875291426_H
#define ARRAYPROPERTYDESCRIPTOR_T3875291426_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor
struct  ArrayPropertyDescriptor_t3875291426  : public PropertyDescriptor_t3067554772
{
public:
	// System.Int32 System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::index
	int32_t ___index_6;
	// System.Type System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::array_type
	Type_t * ___array_type_7;

public:
	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(ArrayPropertyDescriptor_t3875291426, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}

	inline static int32_t get_offset_of_array_type_7() { return static_cast<int32_t>(offsetof(ArrayPropertyDescriptor_t3875291426, ___array_type_7)); }
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
#endif // ARRAYPROPERTYDESCRIPTOR_T3875291426_H
#ifndef BINDABLESUPPORT_T2110019213_H
#define BINDABLESUPPORT_T2110019213_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BindableSupport
struct  BindableSupport_t2110019213 
{
public:
	// System.Int32 System.ComponentModel.BindableSupport::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindableSupport_t2110019213, ___value___1)); }
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
#endif // BINDABLESUPPORT_T2110019213_H
#ifndef EDITORBROWSABLESTATE_T4247386193_H
#define EDITORBROWSABLESTATE_T4247386193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableState
struct  EditorBrowsableState_t4247386193 
{
public:
	// System.Int32 System.ComponentModel.EditorBrowsableState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EditorBrowsableState_t4247386193, ___value___1)); }
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
#endif // EDITORBROWSABLESTATE_T4247386193_H
#ifndef BYTECONVERTER_T3588249457_H
#define BYTECONVERTER_T3588249457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ByteConverter
struct  ByteConverter_t3588249457  : public BaseNumberConverter_t1304543369
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTECONVERTER_T3588249457_H
#ifndef DOUBLECONVERTER_T1397857508_H
#define DOUBLECONVERTER_T1397857508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DoubleConverter
struct  DoubleConverter_t1397857508  : public BaseNumberConverter_t1304543369
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLECONVERTER_T1397857508_H
#ifndef DESIGNERSERIALIZATIONVISIBILITY_T3230447700_H
#define DESIGNERSERIALIZATIONVISIBILITY_T3230447700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibility
struct  DesignerSerializationVisibility_t3230447700 
{
public:
	// System.Int32 System.ComponentModel.DesignerSerializationVisibility::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibility_t3230447700, ___value___1)); }
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
#endif // DESIGNERSERIALIZATIONVISIBILITY_T3230447700_H
#ifndef COLLECTIONCHANGEACTION_T2260200082_H
#define COLLECTIONCHANGEACTION_T2260200082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeAction
struct  CollectionChangeAction_t2260200082 
{
public:
	// System.Int32 System.ComponentModel.CollectionChangeAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CollectionChangeAction_t2260200082, ___value___1)); }
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
#endif // COLLECTIONCHANGEACTION_T2260200082_H
#ifndef DELEGATE_T132796138_H
#define DELEGATE_T132796138_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t132796138  : public RuntimeObject
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
	DelegateData_t3033384353 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t132796138, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t132796138, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t132796138, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t132796138, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t132796138, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t132796138, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t132796138, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t132796138, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t132796138, ___data_8)); }
	inline DelegateData_t3033384353 * get_data_8() const { return ___data_8; }
	inline DelegateData_t3033384353 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t3033384353 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T132796138_H
#ifndef COMPONENTCONVERTER_T2894024830_H
#define COMPONENTCONVERTER_T2894024830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentConverter
struct  ComponentConverter_t2894024830  : public ReferenceConverter_t1263219375
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCONVERTER_T2894024830_H
#ifndef ARRAYCONVERTER_T696562788_H
#define ARRAYCONVERTER_T696562788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ArrayConverter
struct  ArrayConverter_t696562788  : public CollectionConverter_t1572711904
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYCONVERTER_T696562788_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T572724547_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T572724547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t572724547  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t572724547_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$3132 <PrivateImplementationDetails>::$$field-0
	U24ArrayTypeU243132_t3128226517  ___U24U24fieldU2D0_0;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-5
	U24ArrayTypeU24256_t4178967213  ___U24U24fieldU2D5_1;
	// <PrivateImplementationDetails>/$ArrayType$20 <PrivateImplementationDetails>::$$field-6
	U24ArrayTypeU2420_t3311881286  ___U24U24fieldU2D6_2;
	// <PrivateImplementationDetails>/$ArrayType$32 <PrivateImplementationDetails>::$$field-7
	U24ArrayTypeU2432_t3920185505  ___U24U24fieldU2D7_3;
	// <PrivateImplementationDetails>/$ArrayType$48 <PrivateImplementationDetails>::$$field-8
	U24ArrayTypeU2448_t3738919834  ___U24U24fieldU2D8_4;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-9
	U24ArrayTypeU2464_t1934486055  ___U24U24fieldU2D9_5;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-11
	U24ArrayTypeU2464_t1934486055  ___U24U24fieldU2D11_6;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-12
	U24ArrayTypeU2464_t1934486055  ___U24U24fieldU2D12_7;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-13
	U24ArrayTypeU2464_t1934486055  ___U24U24fieldU2D13_8;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-14
	U24ArrayTypeU2412_t2667971566  ___U24U24fieldU2D14_9;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-15
	U24ArrayTypeU2412_t2667971566  ___U24U24fieldU2D15_10;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-16
	U24ArrayTypeU2412_t2667971566  ___U24U24fieldU2D16_11;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-17
	U24ArrayTypeU2416_t2663438154  ___U24U24fieldU2D17_12;
	// <PrivateImplementationDetails>/$ArrayType$4 <PrivateImplementationDetails>::$$field-21
	U24ArrayTypeU244_t3787476164  ___U24U24fieldU2D21_13;
	// <PrivateImplementationDetails>/$ArrayType$4 <PrivateImplementationDetails>::$$field-22
	U24ArrayTypeU244_t3787476164  ___U24U24fieldU2D22_14;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t572724547_StaticFields, ___U24U24fieldU2D0_0)); }
	inline U24ArrayTypeU243132_t3128226517  get_U24U24fieldU2D0_0() const { return ___U24U24fieldU2D0_0; }
	inline U24ArrayTypeU243132_t3128226517 * get_address_of_U24U24fieldU2D0_0() { return &___U24U24fieldU2D0_0; }
	inline void set_U24U24fieldU2D0_0(U24ArrayTypeU243132_t3128226517  value)
	{
		___U24U24fieldU2D0_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D5_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t572724547_StaticFields, ___U24U24fieldU2D5_1)); }
	inline U24ArrayTypeU24256_t4178967213  get_U24U24fieldU2D5_1() const { return ___U24U24fieldU2D5_1; }
	inline U24ArrayTypeU24256_t4178967213 * get_address_of_U24U24fieldU2D5_1() { return &___U24U24fieldU2D5_1; }
	inline void set_U24U24fieldU2D5_1(U24ArrayTypeU24256_t4178967213  value)
	{
		___U24U24fieldU2D5_1 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D6_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t572724547_StaticFields, ___U24U24fieldU2D6_2)); }
	inline U24ArrayTypeU2420_t3311881286  get_U24U24fieldU2D6_2() const { return ___U24U24fieldU2D6_2; }
	inline U24ArrayTypeU2420_t3311881286 * get_address_of_U24U24fieldU2D6_2() { return &___U24U24fieldU2D6_2; }
	inline void set_U24U24fieldU2D6_2(U24ArrayTypeU2420_t3311881286  value)
	{
		___U24U24fieldU2D6_2 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D7_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t572724547_StaticFields, ___U24U24fieldU2D7_3)); }
	inline U24ArrayTypeU2432_t3920185505  get_U24U24fieldU2D7_3() const { return ___U24U24fieldU2D7_3; }
	inline U24ArrayTypeU2432_t3920185505 * get_address_of_U24U24fieldU2D7_3() { return &___U24U24fieldU2D7_3; }
	inline void set_U24U24fieldU2D7_3(U24ArrayTypeU2432_t3920185505  value)
	{
		___U24U24fieldU2D7_3 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D8_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t572724547_StaticFields, ___U24U24fieldU2D8_4)); }
	inline U24ArrayTypeU2448_t3738919834  get_U24U24fieldU2D8_4() const { return ___U24U24fieldU2D8_4; }
	inline U24ArrayTypeU2448_t3738919834 * get_address_of_U24U24fieldU2D8_4() { return &___U24U24fieldU2D8_4; }
	inline void set_U24U24fieldU2D8_4(U24ArrayTypeU2448_t3738919834  value)
	{
		___U24U24fieldU2D8_4 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D9_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t572724547_StaticFields, ___U24U24fieldU2D9_5)); }
	inline U24ArrayTypeU2464_t1934486055  get_U24U24fieldU2D9_5() const { return ___U24U24fieldU2D9_5; }
	inline U24ArrayTypeU2464_t1934486055 * get_address_of_U24U24fieldU2D9_5() { return &___U24U24fieldU2D9_5; }
	inline void set_U24U24fieldU2D9_5(U24ArrayTypeU2464_t1934486055  value)
	{
		___U24U24fieldU2D9_5 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D11_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t572724547_StaticFields, ___U24U24fieldU2D11_6)); }
	inline U24ArrayTypeU2464_t1934486055  get_U24U24fieldU2D11_6() const { return ___U24U24fieldU2D11_6; }
	inline U24ArrayTypeU2464_t1934486055 * get_address_of_U24U24fieldU2D11_6() { return &___U24U24fieldU2D11_6; }
	inline void set_U24U24fieldU2D11_6(U24ArrayTypeU2464_t1934486055  value)
	{
		___U24U24fieldU2D11_6 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D12_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t572724547_StaticFields, ___U24U24fieldU2D12_7)); }
	inline U24ArrayTypeU2464_t1934486055  get_U24U24fieldU2D12_7() const { return ___U24U24fieldU2D12_7; }
	inline U24ArrayTypeU2464_t1934486055 * get_address_of_U24U24fieldU2D12_7() { return &___U24U24fieldU2D12_7; }
	inline void set_U24U24fieldU2D12_7(U24ArrayTypeU2464_t1934486055  value)
	{
		___U24U24fieldU2D12_7 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D13_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t572724547_StaticFields, ___U24U24fieldU2D13_8)); }
	inline U24ArrayTypeU2464_t1934486055  get_U24U24fieldU2D13_8() const { return ___U24U24fieldU2D13_8; }
	inline U24ArrayTypeU2464_t1934486055 * get_address_of_U24U24fieldU2D13_8() { return &___U24U24fieldU2D13_8; }
	inline void set_U24U24fieldU2D13_8(U24ArrayTypeU2464_t1934486055  value)
	{
		___U24U24fieldU2D13_8 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D14_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t572724547_StaticFields, ___U24U24fieldU2D14_9)); }
	inline U24ArrayTypeU2412_t2667971566  get_U24U24fieldU2D14_9() const { return ___U24U24fieldU2D14_9; }
	inline U24ArrayTypeU2412_t2667971566 * get_address_of_U24U24fieldU2D14_9() { return &___U24U24fieldU2D14_9; }
	inline void set_U24U24fieldU2D14_9(U24ArrayTypeU2412_t2667971566  value)
	{
		___U24U24fieldU2D14_9 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D15_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t572724547_StaticFields, ___U24U24fieldU2D15_10)); }
	inline U24ArrayTypeU2412_t2667971566  get_U24U24fieldU2D15_10() const { return ___U24U24fieldU2D15_10; }
	inline U24ArrayTypeU2412_t2667971566 * get_address_of_U24U24fieldU2D15_10() { return &___U24U24fieldU2D15_10; }
	inline void set_U24U24fieldU2D15_10(U24ArrayTypeU2412_t2667971566  value)
	{
		___U24U24fieldU2D15_10 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D16_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t572724547_StaticFields, ___U24U24fieldU2D16_11)); }
	inline U24ArrayTypeU2412_t2667971566  get_U24U24fieldU2D16_11() const { return ___U24U24fieldU2D16_11; }
	inline U24ArrayTypeU2412_t2667971566 * get_address_of_U24U24fieldU2D16_11() { return &___U24U24fieldU2D16_11; }
	inline void set_U24U24fieldU2D16_11(U24ArrayTypeU2412_t2667971566  value)
	{
		___U24U24fieldU2D16_11 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D17_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t572724547_StaticFields, ___U24U24fieldU2D17_12)); }
	inline U24ArrayTypeU2416_t2663438154  get_U24U24fieldU2D17_12() const { return ___U24U24fieldU2D17_12; }
	inline U24ArrayTypeU2416_t2663438154 * get_address_of_U24U24fieldU2D17_12() { return &___U24U24fieldU2D17_12; }
	inline void set_U24U24fieldU2D17_12(U24ArrayTypeU2416_t2663438154  value)
	{
		___U24U24fieldU2D17_12 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D21_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t572724547_StaticFields, ___U24U24fieldU2D21_13)); }
	inline U24ArrayTypeU244_t3787476164  get_U24U24fieldU2D21_13() const { return ___U24U24fieldU2D21_13; }
	inline U24ArrayTypeU244_t3787476164 * get_address_of_U24U24fieldU2D21_13() { return &___U24U24fieldU2D21_13; }
	inline void set_U24U24fieldU2D21_13(U24ArrayTypeU244_t3787476164  value)
	{
		___U24U24fieldU2D21_13 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D22_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t572724547_StaticFields, ___U24U24fieldU2D22_14)); }
	inline U24ArrayTypeU244_t3787476164  get_U24U24fieldU2D22_14() const { return ___U24U24fieldU2D22_14; }
	inline U24ArrayTypeU244_t3787476164 * get_address_of_U24U24fieldU2D22_14() { return &___U24U24fieldU2D22_14; }
	inline void set_U24U24fieldU2D22_14(U24ArrayTypeU244_t3787476164  value)
	{
		___U24U24fieldU2D22_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T572724547_H
#ifndef EDITORBROWSABLEATTRIBUTE_T3755734553_H
#define EDITORBROWSABLEATTRIBUTE_T3755734553_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableAttribute
struct  EditorBrowsableAttribute_t3755734553  : public Attribute_t3357033155
{
public:
	// System.ComponentModel.EditorBrowsableState System.ComponentModel.EditorBrowsableAttribute::state
	int32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(EditorBrowsableAttribute_t3755734553, ___state_0)); }
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
#endif // EDITORBROWSABLEATTRIBUTE_T3755734553_H
#ifndef MULTICASTDELEGATE_T1995717369_H
#define MULTICASTDELEGATE_T1995717369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t1995717369  : public Delegate_t132796138
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t1995717369 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t1995717369 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1995717369, ___prev_9)); }
	inline MulticastDelegate_t1995717369 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t1995717369 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t1995717369 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1995717369, ___kpm_next_10)); }
	inline MulticastDelegate_t1995717369 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t1995717369 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t1995717369 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T1995717369_H
#ifndef DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T231685785_H
#define DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T231685785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibilityAttribute
struct  DesignerSerializationVisibilityAttribute_t231685785  : public Attribute_t3357033155
{
public:
	// System.ComponentModel.DesignerSerializationVisibility System.ComponentModel.DesignerSerializationVisibilityAttribute::visibility
	int32_t ___visibility_0;

public:
	inline static int32_t get_offset_of_visibility_0() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t231685785, ___visibility_0)); }
	inline int32_t get_visibility_0() const { return ___visibility_0; }
	inline int32_t* get_address_of_visibility_0() { return &___visibility_0; }
	inline void set_visibility_0(int32_t value)
	{
		___visibility_0 = value;
	}
};

struct DesignerSerializationVisibilityAttribute_t231685785_StaticFields
{
public:
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Default
	DesignerSerializationVisibilityAttribute_t231685785 * ___Default_1;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Content
	DesignerSerializationVisibilityAttribute_t231685785 * ___Content_2;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Hidden
	DesignerSerializationVisibilityAttribute_t231685785 * ___Hidden_3;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Visible
	DesignerSerializationVisibilityAttribute_t231685785 * ___Visible_4;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t231685785_StaticFields, ___Default_1)); }
	inline DesignerSerializationVisibilityAttribute_t231685785 * get_Default_1() const { return ___Default_1; }
	inline DesignerSerializationVisibilityAttribute_t231685785 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignerSerializationVisibilityAttribute_t231685785 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_Content_2() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t231685785_StaticFields, ___Content_2)); }
	inline DesignerSerializationVisibilityAttribute_t231685785 * get_Content_2() const { return ___Content_2; }
	inline DesignerSerializationVisibilityAttribute_t231685785 ** get_address_of_Content_2() { return &___Content_2; }
	inline void set_Content_2(DesignerSerializationVisibilityAttribute_t231685785 * value)
	{
		___Content_2 = value;
		Il2CppCodeGenWriteBarrier((&___Content_2), value);
	}

	inline static int32_t get_offset_of_Hidden_3() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t231685785_StaticFields, ___Hidden_3)); }
	inline DesignerSerializationVisibilityAttribute_t231685785 * get_Hidden_3() const { return ___Hidden_3; }
	inline DesignerSerializationVisibilityAttribute_t231685785 ** get_address_of_Hidden_3() { return &___Hidden_3; }
	inline void set_Hidden_3(DesignerSerializationVisibilityAttribute_t231685785 * value)
	{
		___Hidden_3 = value;
		Il2CppCodeGenWriteBarrier((&___Hidden_3), value);
	}

	inline static int32_t get_offset_of_Visible_4() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t231685785_StaticFields, ___Visible_4)); }
	inline DesignerSerializationVisibilityAttribute_t231685785 * get_Visible_4() const { return ___Visible_4; }
	inline DesignerSerializationVisibilityAttribute_t231685785 ** get_address_of_Visible_4() { return &___Visible_4; }
	inline void set_Visible_4(DesignerSerializationVisibilityAttribute_t231685785 * value)
	{
		___Visible_4 = value;
		Il2CppCodeGenWriteBarrier((&___Visible_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T231685785_H
#ifndef COLLECTIONCHANGEEVENTARGS_T3682809487_H
#define COLLECTIONCHANGEEVENTARGS_T3682809487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeEventArgs
struct  CollectionChangeEventArgs_t3682809487  : public EventArgs_t1316716651
{
public:
	// System.ComponentModel.CollectionChangeAction System.ComponentModel.CollectionChangeEventArgs::changeAction
	int32_t ___changeAction_1;
	// System.Object System.ComponentModel.CollectionChangeEventArgs::theElement
	RuntimeObject * ___theElement_2;

public:
	inline static int32_t get_offset_of_changeAction_1() { return static_cast<int32_t>(offsetof(CollectionChangeEventArgs_t3682809487, ___changeAction_1)); }
	inline int32_t get_changeAction_1() const { return ___changeAction_1; }
	inline int32_t* get_address_of_changeAction_1() { return &___changeAction_1; }
	inline void set_changeAction_1(int32_t value)
	{
		___changeAction_1 = value;
	}

	inline static int32_t get_offset_of_theElement_2() { return static_cast<int32_t>(offsetof(CollectionChangeEventArgs_t3682809487, ___theElement_2)); }
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
#endif // COLLECTIONCHANGEEVENTARGS_T3682809487_H
#ifndef PROCESSWORKEREVENTHANDLER_T4086145683_H
#define PROCESSWORKEREVENTHANDLER_T4086145683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BackgroundWorker/ProcessWorkerEventHandler
struct  ProcessWorkerEventHandler_t4086145683  : public MulticastDelegate_t1995717369
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROCESSWORKEREVENTHANDLER_T4086145683_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1100 = { sizeof (U3CPrivateImplementationDetailsU3E_t572724547), -1, sizeof(U3CPrivateImplementationDetailsU3E_t572724547_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1100[15] = 
{
	U3CPrivateImplementationDetailsU3E_t572724547_StaticFields::get_offset_of_U24U24fieldU2D0_0(),
	U3CPrivateImplementationDetailsU3E_t572724547_StaticFields::get_offset_of_U24U24fieldU2D5_1(),
	U3CPrivateImplementationDetailsU3E_t572724547_StaticFields::get_offset_of_U24U24fieldU2D6_2(),
	U3CPrivateImplementationDetailsU3E_t572724547_StaticFields::get_offset_of_U24U24fieldU2D7_3(),
	U3CPrivateImplementationDetailsU3E_t572724547_StaticFields::get_offset_of_U24U24fieldU2D8_4(),
	U3CPrivateImplementationDetailsU3E_t572724547_StaticFields::get_offset_of_U24U24fieldU2D9_5(),
	U3CPrivateImplementationDetailsU3E_t572724547_StaticFields::get_offset_of_U24U24fieldU2D11_6(),
	U3CPrivateImplementationDetailsU3E_t572724547_StaticFields::get_offset_of_U24U24fieldU2D12_7(),
	U3CPrivateImplementationDetailsU3E_t572724547_StaticFields::get_offset_of_U24U24fieldU2D13_8(),
	U3CPrivateImplementationDetailsU3E_t572724547_StaticFields::get_offset_of_U24U24fieldU2D14_9(),
	U3CPrivateImplementationDetailsU3E_t572724547_StaticFields::get_offset_of_U24U24fieldU2D15_10(),
	U3CPrivateImplementationDetailsU3E_t572724547_StaticFields::get_offset_of_U24U24fieldU2D16_11(),
	U3CPrivateImplementationDetailsU3E_t572724547_StaticFields::get_offset_of_U24U24fieldU2D17_12(),
	U3CPrivateImplementationDetailsU3E_t572724547_StaticFields::get_offset_of_U24U24fieldU2D21_13(),
	U3CPrivateImplementationDetailsU3E_t572724547_StaticFields::get_offset_of_U24U24fieldU2D22_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1101 = { sizeof (U24ArrayTypeU243132_t3128226517)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU243132_t3128226517 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1102 = { sizeof (U24ArrayTypeU24256_t4178967213)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24256_t4178967213 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1103 = { sizeof (U24ArrayTypeU2420_t3311881286)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2420_t3311881286 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1104 = { sizeof (U24ArrayTypeU2432_t3920185505)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2432_t3920185505 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1105 = { sizeof (U24ArrayTypeU2448_t3738919834)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2448_t3738919834 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1106 = { sizeof (U24ArrayTypeU2464_t1934486055)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2464_t1934486055 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1107 = { sizeof (U24ArrayTypeU2412_t2667971566)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2412_t2667971566 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1108 = { sizeof (U24ArrayTypeU2416_t2663438154)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2416_t2663438154 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1109 = { sizeof (U24ArrayTypeU244_t3787476164)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU244_t3787476164 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1110 = { sizeof (U3CModuleU3E_t2344662619), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1111 = { sizeof (Locale_t282586533), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1112 = { sizeof (MonoTODOAttribute_t3384035574), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1112[1] = 
{
	MonoTODOAttribute_t3384035574::get_offset_of_comment_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1113 = { sizeof (MonoNotSupportedAttribute_t3637172374), -1, 0, 0 };
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1121 = { sizeof (HybridDictionary_t3961037581), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1121[3] = 
{
	HybridDictionary_t3961037581::get_offset_of_caseInsensitive_0(),
	HybridDictionary_t3961037581::get_offset_of_hashtable_1(),
	HybridDictionary_t3961037581::get_offset_of_list_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1122 = { sizeof (ListDictionary_t1495247392), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1122[4] = 
{
	ListDictionary_t1495247392::get_offset_of_count_0(),
	ListDictionary_t1495247392::get_offset_of_version_1(),
	ListDictionary_t1495247392::get_offset_of_head_2(),
	ListDictionary_t1495247392::get_offset_of_comparer_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1123 = { sizeof (DictionaryNode_t4226704692), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1123[3] = 
{
	DictionaryNode_t4226704692::get_offset_of_key_0(),
	DictionaryNode_t4226704692::get_offset_of_value_1(),
	DictionaryNode_t4226704692::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1124 = { sizeof (DictionaryNodeEnumerator_t3243060357), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1124[4] = 
{
	DictionaryNodeEnumerator_t3243060357::get_offset_of_dict_0(),
	DictionaryNodeEnumerator_t3243060357::get_offset_of_isAtStart_1(),
	DictionaryNodeEnumerator_t3243060357::get_offset_of_current_2(),
	DictionaryNodeEnumerator_t3243060357::get_offset_of_version_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1125 = { sizeof (DictionaryNodeCollection_t114733765), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1125[2] = 
{
	DictionaryNodeCollection_t114733765::get_offset_of_dict_0(),
	DictionaryNodeCollection_t114733765::get_offset_of_isKeyList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1126 = { sizeof (DictionaryNodeCollectionEnumerator_t3136818834), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1126[2] = 
{
	DictionaryNodeCollectionEnumerator_t3136818834::get_offset_of_inner_0(),
	DictionaryNodeCollectionEnumerator_t3136818834::get_offset_of_isKeyList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1127 = { sizeof (NameObjectCollectionBase_t4027231775), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1127[10] = 
{
	NameObjectCollectionBase_t4027231775::get_offset_of_m_ItemsContainer_0(),
	NameObjectCollectionBase_t4027231775::get_offset_of_m_NullKeyItem_1(),
	NameObjectCollectionBase_t4027231775::get_offset_of_m_ItemsArray_2(),
	NameObjectCollectionBase_t4027231775::get_offset_of_m_hashprovider_3(),
	NameObjectCollectionBase_t4027231775::get_offset_of_m_comparer_4(),
	NameObjectCollectionBase_t4027231775::get_offset_of_m_defCapacity_5(),
	NameObjectCollectionBase_t4027231775::get_offset_of_m_readonly_6(),
	NameObjectCollectionBase_t4027231775::get_offset_of_infoCopy_7(),
	NameObjectCollectionBase_t4027231775::get_offset_of_keyscoll_8(),
	NameObjectCollectionBase_t4027231775::get_offset_of_equality_comparer_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1128 = { sizeof (_Item_t3914469720), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1128[2] = 
{
	_Item_t3914469720::get_offset_of_key_0(),
	_Item_t3914469720::get_offset_of_value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1129 = { sizeof (_KeysEnumerator_t3754994426), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1129[2] = 
{
	_KeysEnumerator_t3754994426::get_offset_of_m_collection_0(),
	_KeysEnumerator_t3754994426::get_offset_of_m_position_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1130 = { sizeof (KeysCollection_t1290011700), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1130[1] = 
{
	KeysCollection_t1290011700::get_offset_of_m_collection_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1131 = { sizeof (NameValueCollection_t122369437), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1131[2] = 
{
	NameValueCollection_t122369437::get_offset_of_cachedAllKeys_10(),
	NameValueCollection_t122369437::get_offset_of_cachedAll_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1132 = { sizeof (InstanceDescriptor_t3800365837), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1132[3] = 
{
	InstanceDescriptor_t3800365837::get_offset_of_member_0(),
	InstanceDescriptor_t3800365837::get_offset_of_arguments_1(),
	InstanceDescriptor_t3800365837::get_offset_of_isComplete_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1133 = { sizeof (DesignerTransaction_t1714213149), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1133[2] = 
{
	DesignerTransaction_t1714213149::get_offset_of_committed_0(),
	DesignerTransaction_t1714213149::get_offset_of_canceled_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1134 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1135 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1136 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1137 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1138 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1139 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1140 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1141 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1142 = { sizeof (RuntimeLicenseContext_t753632689), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1142[2] = 
{
	RuntimeLicenseContext_t753632689::get_offset_of_extraassemblies_0(),
	RuntimeLicenseContext_t753632689::get_offset_of_keys_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1143 = { sizeof (ArrayConverter_t696562788), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1144 = { sizeof (ArrayPropertyDescriptor_t3875291426), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1144[2] = 
{
	ArrayPropertyDescriptor_t3875291426::get_offset_of_index_6(),
	ArrayPropertyDescriptor_t3875291426::get_offset_of_array_type_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1145 = { sizeof (AsyncCompletedEventArgs_t597599062), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1145[3] = 
{
	AsyncCompletedEventArgs_t597599062::get_offset_of__error_1(),
	AsyncCompletedEventArgs_t597599062::get_offset_of__cancelled_2(),
	AsyncCompletedEventArgs_t597599062::get_offset_of__userState_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1146 = { sizeof (AsyncOperation_t1181924997), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1146[3] = 
{
	AsyncOperation_t1181924997::get_offset_of_ctx_0(),
	AsyncOperation_t1181924997::get_offset_of_state_1(),
	AsyncOperation_t1181924997::get_offset_of_done_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1147 = { sizeof (AsyncOperationManager_t4204786643), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1148 = { sizeof (AttributeCollection_t3289094355), -1, sizeof(AttributeCollection_t3289094355_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1148[2] = 
{
	AttributeCollection_t3289094355::get_offset_of_attrList_0(),
	AttributeCollection_t3289094355_StaticFields::get_offset_of_Empty_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1149 = { sizeof (BackgroundWorker_t3787263176), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1149[7] = 
{
	BackgroundWorker_t3787263176::get_offset_of_async_0(),
	BackgroundWorker_t3787263176::get_offset_of_cancel_pending_1(),
	BackgroundWorker_t3787263176::get_offset_of_report_progress_2(),
	BackgroundWorker_t3787263176::get_offset_of_support_cancel_3(),
	BackgroundWorker_t3787263176::get_offset_of_DoWork_4(),
	BackgroundWorker_t3787263176::get_offset_of_ProgressChanged_5(),
	BackgroundWorker_t3787263176::get_offset_of_RunWorkerCompleted_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1150 = { sizeof (ProcessWorkerEventHandler_t4086145683), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1151 = { sizeof (BaseNumberConverter_t1304543369), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1151[1] = 
{
	BaseNumberConverter_t1304543369::get_offset_of_InnerType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1152 = { sizeof (BindableSupport_t2110019213)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1152[4] = 
{
	BindableSupport_t2110019213::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1153 = { sizeof (BooleanConverter_t2393799264), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1154 = { sizeof (BrowsableAttribute_t2969220437), -1, sizeof(BrowsableAttribute_t2969220437_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1154[4] = 
{
	BrowsableAttribute_t2969220437::get_offset_of_browsable_0(),
	BrowsableAttribute_t2969220437_StaticFields::get_offset_of_Default_1(),
	BrowsableAttribute_t2969220437_StaticFields::get_offset_of_No_2(),
	BrowsableAttribute_t2969220437_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1155 = { sizeof (ByteConverter_t3588249457), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1156 = { sizeof (CancelEventArgs_t3239927959), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1156[1] = 
{
	CancelEventArgs_t3239927959::get_offset_of_cancel_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1157 = { sizeof (CategoryAttribute_t4075104885), -1, sizeof(CategoryAttribute_t4075104885_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1157[17] = 
{
	CategoryAttribute_t4075104885::get_offset_of_category_0(),
	CategoryAttribute_t4075104885::get_offset_of_IsLocalized_1(),
	CategoryAttribute_t4075104885_StaticFields::get_offset_of_action_2(),
	CategoryAttribute_t4075104885_StaticFields::get_offset_of_appearance_3(),
	CategoryAttribute_t4075104885_StaticFields::get_offset_of_behaviour_4(),
	CategoryAttribute_t4075104885_StaticFields::get_offset_of_data_5(),
	CategoryAttribute_t4075104885_StaticFields::get_offset_of_def_6(),
	CategoryAttribute_t4075104885_StaticFields::get_offset_of_design_7(),
	CategoryAttribute_t4075104885_StaticFields::get_offset_of_drag_drop_8(),
	CategoryAttribute_t4075104885_StaticFields::get_offset_of_focus_9(),
	CategoryAttribute_t4075104885_StaticFields::get_offset_of_format_10(),
	CategoryAttribute_t4075104885_StaticFields::get_offset_of_key_11(),
	CategoryAttribute_t4075104885_StaticFields::get_offset_of_layout_12(),
	CategoryAttribute_t4075104885_StaticFields::get_offset_of_mouse_13(),
	CategoryAttribute_t4075104885_StaticFields::get_offset_of_window_style_14(),
	CategoryAttribute_t4075104885_StaticFields::get_offset_of_async_15(),
	CategoryAttribute_t4075104885_StaticFields::get_offset_of_lockobj_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1158 = { sizeof (CharConverter_t3147734147), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1159 = { sizeof (CollectionChangeAction_t2260200082)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1159[4] = 
{
	CollectionChangeAction_t2260200082::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1160 = { sizeof (CollectionChangeEventArgs_t3682809487), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1160[2] = 
{
	CollectionChangeEventArgs_t3682809487::get_offset_of_changeAction_1(),
	CollectionChangeEventArgs_t3682809487::get_offset_of_theElement_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1161 = { sizeof (CollectionConverter_t1572711904), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1162 = { sizeof (Component_t4185232579), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1162[3] = 
{
	Component_t4185232579::get_offset_of_event_handlers_1(),
	Component_t4185232579::get_offset_of_mySite_2(),
	Component_t4185232579::get_offset_of_disposedEvent_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1163 = { sizeof (ComponentCollection_t846785179), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1164 = { sizeof (ComponentConverter_t2894024830), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1165 = { sizeof (CultureInfoConverter_t1411395944), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1165[1] = 
{
	CultureInfoConverter_t1411395944::get_offset_of__standardValues_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1166 = { sizeof (CultureInfoComparer_t4146592826), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1167 = { sizeof (CustomTypeDescriptor_t4075760490), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1167[1] = 
{
	CustomTypeDescriptor_t4075760490::get_offset_of__parent_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1168 = { sizeof (DateTimeConverter_t1756933353), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1169 = { sizeof (DecimalConverter_t635244599), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1170 = { sizeof (DefaultEventAttribute_t143032877), -1, sizeof(DefaultEventAttribute_t143032877_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1170[2] = 
{
	DefaultEventAttribute_t143032877::get_offset_of_eventName_0(),
	DefaultEventAttribute_t143032877_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1171 = { sizeof (DefaultPropertyAttribute_t1267664127), -1, sizeof(DefaultPropertyAttribute_t1267664127_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1171[2] = 
{
	DefaultPropertyAttribute_t1267664127::get_offset_of_property_name_0(),
	DefaultPropertyAttribute_t1267664127_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1172 = { sizeof (DefaultValueAttribute_t1312506284), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1172[1] = 
{
	DefaultValueAttribute_t1312506284::get_offset_of_DefaultValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1173 = { sizeof (DescriptionAttribute_t2031275091), -1, sizeof(DescriptionAttribute_t2031275091_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1173[2] = 
{
	DescriptionAttribute_t2031275091::get_offset_of_desc_0(),
	DescriptionAttribute_t2031275091_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1174 = { sizeof (DesignOnlyAttribute_t2867166797), -1, sizeof(DesignOnlyAttribute_t2867166797_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1174[4] = 
{
	DesignOnlyAttribute_t2867166797::get_offset_of_design_only_0(),
	DesignOnlyAttribute_t2867166797_StaticFields::get_offset_of_Default_1(),
	DesignOnlyAttribute_t2867166797_StaticFields::get_offset_of_No_2(),
	DesignOnlyAttribute_t2867166797_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1175 = { sizeof (DesignTimeVisibleAttribute_t480323330), -1, sizeof(DesignTimeVisibleAttribute_t480323330_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1175[4] = 
{
	DesignTimeVisibleAttribute_t480323330::get_offset_of_visible_0(),
	DesignTimeVisibleAttribute_t480323330_StaticFields::get_offset_of_Default_1(),
	DesignTimeVisibleAttribute_t480323330_StaticFields::get_offset_of_No_2(),
	DesignTimeVisibleAttribute_t480323330_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1176 = { sizeof (DesignerAttribute_t854709892), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1176[2] = 
{
	DesignerAttribute_t854709892::get_offset_of_name_0(),
	DesignerAttribute_t854709892::get_offset_of_basetypename_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1177 = { sizeof (DesignerCategoryAttribute_t56080939), -1, sizeof(DesignerCategoryAttribute_t56080939_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1177[5] = 
{
	DesignerCategoryAttribute_t56080939::get_offset_of_category_0(),
	DesignerCategoryAttribute_t56080939_StaticFields::get_offset_of_Component_1(),
	DesignerCategoryAttribute_t56080939_StaticFields::get_offset_of_Form_2(),
	DesignerCategoryAttribute_t56080939_StaticFields::get_offset_of_Generic_3(),
	DesignerCategoryAttribute_t56080939_StaticFields::get_offset_of_Default_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1178 = { sizeof (DesignerSerializationVisibility_t3230447700)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1178[4] = 
{
	DesignerSerializationVisibility_t3230447700::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1179 = { sizeof (DesignerSerializationVisibilityAttribute_t231685785), -1, sizeof(DesignerSerializationVisibilityAttribute_t231685785_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1179[5] = 
{
	DesignerSerializationVisibilityAttribute_t231685785::get_offset_of_visibility_0(),
	DesignerSerializationVisibilityAttribute_t231685785_StaticFields::get_offset_of_Default_1(),
	DesignerSerializationVisibilityAttribute_t231685785_StaticFields::get_offset_of_Content_2(),
	DesignerSerializationVisibilityAttribute_t231685785_StaticFields::get_offset_of_Hidden_3(),
	DesignerSerializationVisibilityAttribute_t231685785_StaticFields::get_offset_of_Visible_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1180 = { sizeof (DisplayNameAttribute_t312470342), -1, sizeof(DisplayNameAttribute_t312470342_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1180[2] = 
{
	DisplayNameAttribute_t312470342_StaticFields::get_offset_of_Default_0(),
	DisplayNameAttribute_t312470342::get_offset_of_attributeDisplayName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1181 = { sizeof (DoWorkEventArgs_t3074036282), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1181[3] = 
{
	DoWorkEventArgs_t3074036282::get_offset_of_arg_1(),
	DoWorkEventArgs_t3074036282::get_offset_of_result_2(),
	DoWorkEventArgs_t3074036282::get_offset_of_cancel_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1182 = { sizeof (DoubleConverter_t1397857508), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1183 = { sizeof (EditorAttribute_t1114242975), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1183[2] = 
{
	EditorAttribute_t1114242975::get_offset_of_name_0(),
	EditorAttribute_t1114242975::get_offset_of_basename_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1184 = { sizeof (EditorBrowsableAttribute_t3755734553), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1184[1] = 
{
	EditorBrowsableAttribute_t3755734553::get_offset_of_state_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1185 = { sizeof (EditorBrowsableState_t4247386193)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1185[4] = 
{
	EditorBrowsableState_t4247386193::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1186 = { sizeof (EnumConverter_t3352285778), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1186[2] = 
{
	EnumConverter_t3352285778::get_offset_of_type_0(),
	EnumConverter_t3352285778::get_offset_of_stdValues_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1187 = { sizeof (EnumComparer_t3408608039), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1188 = { sizeof (EventDescriptor_t3413893703), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1189 = { sizeof (EventDescriptorCollection_t1410963755), -1, sizeof(EventDescriptorCollection_t1410963755_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1189[3] = 
{
	EventDescriptorCollection_t1410963755::get_offset_of_eventList_0(),
	EventDescriptorCollection_t1410963755::get_offset_of_isReadOnly_1(),
	EventDescriptorCollection_t1410963755_StaticFields::get_offset_of_Empty_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1190 = { sizeof (ListEntry_t1397902113), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1190[3] = 
{
	ListEntry_t1397902113::get_offset_of_key_0(),
	ListEntry_t1397902113::get_offset_of_value_1(),
	ListEntry_t1397902113::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1191 = { sizeof (EventHandlerList_t2484400441), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1191[2] = 
{
	EventHandlerList_t2484400441::get_offset_of_entries_0(),
	EventHandlerList_t2484400441::get_offset_of_null_entry_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1192 = { sizeof (ExpandableObjectConverter_t3793876), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1193 = { sizeof (GuidConverter_t3301629015), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1194 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1195 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1196 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1197 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1198 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1199 = { 0, -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
