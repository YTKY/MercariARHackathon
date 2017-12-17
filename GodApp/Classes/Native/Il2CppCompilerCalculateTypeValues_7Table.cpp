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

// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t750243896;
// System.String
struct String_t;
// System.Version
struct Version_t1973482103;
// System.Byte[]
struct ByteU5BU5D_t3908495726;
// System.Collections.Generic.IList`1<System.Security.Policy.StrongName>
struct IList_1_t522837169;
// System.Collections.ArrayList
struct ArrayList_t1615735866;
// System.Collections.IEnumerator
struct IEnumerator_t1738255149;
// System.Reflection.Assembly
struct Assembly_t3809378231;
// System.Char[]
struct CharU5BU5D_t4030813516;
// System.Collections.Hashtable
struct Hashtable_t2233667890;
// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t3773521652;
// System.Text.DecoderFallback
struct DecoderFallback_t906753351;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1564444004;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t811790614;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t3050071163;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t702874482;
// System.Text.EncoderFallback
struct EncoderFallback_t142657651;
// System.Object[]
struct ObjectU5BU5D_t3622332746;
// System.Text.Encoding
struct Encoding_t3698775274;
// System.UInt32[]
struct UInt32U5BU5D_t2705142766;
// System.UInt64[]
struct UInt64U5BU5D_t88273377;
// System.IntPtr[]
struct IntPtrU5BU5D_t2667628918;
// System.Collections.IDictionary
struct IDictionary_t3885171231;
// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t2785594878;
// System.Security.Cryptography.RSA
struct RSA_t3051495647;
// System.Security.Cryptography.HMACSHA1
struct HMACSHA1_t3430964706;
// System.AppDomain
struct AppDomain_t1283380302;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Security.PermissionSet
struct PermissionSet_t1921444768;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t2744987723;
// System.Security.Cryptography.DESTransform
struct DESTransform_t3277069553;
// System.Void
struct Void_t3333586574;
// System.UInt16[]
struct UInt16U5BU5D_t3181703213;
// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t366253665;
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t1291711896;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t473942086;
// System.Security.Cryptography.SHA1Internal
struct SHA1Internal_t896793504;
// System.Threading.CompressedStack
struct CompressedStack_t3348785047;
// System.Type
struct Type_t;
// System.Security.IPermission
struct IPermission_t334795269;
// System.Security.Policy.Evidence
struct Evidence_t123342862;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2339653687;




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
#ifndef STRONGNAME_T3333453715_H
#define STRONGNAME_T3333453715_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.StrongName
struct  StrongName_t3333453715  : public RuntimeObject
{
public:
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongName::publickey
	StrongNamePublicKeyBlob_t750243896 * ___publickey_0;
	// System.String System.Security.Policy.StrongName::name
	String_t* ___name_1;
	// System.Version System.Security.Policy.StrongName::version
	Version_t1973482103 * ___version_2;

public:
	inline static int32_t get_offset_of_publickey_0() { return static_cast<int32_t>(offsetof(StrongName_t3333453715, ___publickey_0)); }
	inline StrongNamePublicKeyBlob_t750243896 * get_publickey_0() const { return ___publickey_0; }
	inline StrongNamePublicKeyBlob_t750243896 ** get_address_of_publickey_0() { return &___publickey_0; }
	inline void set_publickey_0(StrongNamePublicKeyBlob_t750243896 * value)
	{
		___publickey_0 = value;
		Il2CppCodeGenWriteBarrier((&___publickey_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(StrongName_t3333453715, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(StrongName_t3333453715, ___version_2)); }
	inline Version_t1973482103 * get_version_2() const { return ___version_2; }
	inline Version_t1973482103 ** get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(Version_t1973482103 * value)
	{
		___version_2 = value;
		Il2CppCodeGenWriteBarrier((&___version_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAME_T3333453715_H
#ifndef TOBASE64TRANSFORM_T219618276_H
#define TOBASE64TRANSFORM_T219618276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.ToBase64Transform
struct  ToBase64Transform_t219618276  : public RuntimeObject
{
public:
	// System.Boolean System.Security.Cryptography.ToBase64Transform::m_disposed
	bool ___m_disposed_2;

public:
	inline static int32_t get_offset_of_m_disposed_2() { return static_cast<int32_t>(offsetof(ToBase64Transform_t219618276, ___m_disposed_2)); }
	inline bool get_m_disposed_2() const { return ___m_disposed_2; }
	inline bool* get_address_of_m_disposed_2() { return &___m_disposed_2; }
	inline void set_m_disposed_2(bool value)
	{
		___m_disposed_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOBASE64TRANSFORM_T219618276_H
#ifndef STRONGNAMEPUBLICKEYBLOB_T750243896_H
#define STRONGNAMEPUBLICKEYBLOB_T750243896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNamePublicKeyBlob
struct  StrongNamePublicKeyBlob_t750243896  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Permissions.StrongNamePublicKeyBlob::pubkey
	ByteU5BU5D_t3908495726* ___pubkey_0;

public:
	inline static int32_t get_offset_of_pubkey_0() { return static_cast<int32_t>(offsetof(StrongNamePublicKeyBlob_t750243896, ___pubkey_0)); }
	inline ByteU5BU5D_t3908495726* get_pubkey_0() const { return ___pubkey_0; }
	inline ByteU5BU5D_t3908495726** get_address_of_pubkey_0() { return &___pubkey_0; }
	inline void set_pubkey_0(ByteU5BU5D_t3908495726* value)
	{
		___pubkey_0 = value;
		Il2CppCodeGenWriteBarrier((&___pubkey_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEPUBLICKEYBLOB_T750243896_H
#ifndef APPLICATIONTRUST_T2563063931_H
#define APPLICATIONTRUST_T2563063931_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.ApplicationTrust
struct  ApplicationTrust_t2563063931  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<System.Security.Policy.StrongName> System.Security.Policy.ApplicationTrust::fullTrustAssemblies
	RuntimeObject* ___fullTrustAssemblies_0;

public:
	inline static int32_t get_offset_of_fullTrustAssemblies_0() { return static_cast<int32_t>(offsetof(ApplicationTrust_t2563063931, ___fullTrustAssemblies_0)); }
	inline RuntimeObject* get_fullTrustAssemblies_0() const { return ___fullTrustAssemblies_0; }
	inline RuntimeObject** get_address_of_fullTrustAssemblies_0() { return &___fullTrustAssemblies_0; }
	inline void set_fullTrustAssemblies_0(RuntimeObject* value)
	{
		___fullTrustAssemblies_0 = value;
		Il2CppCodeGenWriteBarrier((&___fullTrustAssemblies_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONTRUST_T2563063931_H
#ifndef EVIDENCE_T123342862_H
#define EVIDENCE_T123342862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Evidence
struct  Evidence_t123342862  : public RuntimeObject
{
public:
	// System.Boolean System.Security.Policy.Evidence::_locked
	bool ____locked_0;
	// System.Collections.ArrayList System.Security.Policy.Evidence::hostEvidenceList
	ArrayList_t1615735866 * ___hostEvidenceList_1;
	// System.Collections.ArrayList System.Security.Policy.Evidence::assemblyEvidenceList
	ArrayList_t1615735866 * ___assemblyEvidenceList_2;
	// System.Int32 System.Security.Policy.Evidence::_hashCode
	int32_t ____hashCode_3;

public:
	inline static int32_t get_offset_of__locked_0() { return static_cast<int32_t>(offsetof(Evidence_t123342862, ____locked_0)); }
	inline bool get__locked_0() const { return ____locked_0; }
	inline bool* get_address_of__locked_0() { return &____locked_0; }
	inline void set__locked_0(bool value)
	{
		____locked_0 = value;
	}

	inline static int32_t get_offset_of_hostEvidenceList_1() { return static_cast<int32_t>(offsetof(Evidence_t123342862, ___hostEvidenceList_1)); }
	inline ArrayList_t1615735866 * get_hostEvidenceList_1() const { return ___hostEvidenceList_1; }
	inline ArrayList_t1615735866 ** get_address_of_hostEvidenceList_1() { return &___hostEvidenceList_1; }
	inline void set_hostEvidenceList_1(ArrayList_t1615735866 * value)
	{
		___hostEvidenceList_1 = value;
		Il2CppCodeGenWriteBarrier((&___hostEvidenceList_1), value);
	}

	inline static int32_t get_offset_of_assemblyEvidenceList_2() { return static_cast<int32_t>(offsetof(Evidence_t123342862, ___assemblyEvidenceList_2)); }
	inline ArrayList_t1615735866 * get_assemblyEvidenceList_2() const { return ___assemblyEvidenceList_2; }
	inline ArrayList_t1615735866 ** get_address_of_assemblyEvidenceList_2() { return &___assemblyEvidenceList_2; }
	inline void set_assemblyEvidenceList_2(ArrayList_t1615735866 * value)
	{
		___assemblyEvidenceList_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyEvidenceList_2), value);
	}

	inline static int32_t get_offset_of__hashCode_3() { return static_cast<int32_t>(offsetof(Evidence_t123342862, ____hashCode_3)); }
	inline int32_t get__hashCode_3() const { return ____hashCode_3; }
	inline int32_t* get_address_of__hashCode_3() { return &____hashCode_3; }
	inline void set__hashCode_3(int32_t value)
	{
		____hashCode_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVIDENCE_T123342862_H
#ifndef EVIDENCEENUMERATOR_T3610480689_H
#define EVIDENCEENUMERATOR_T3610480689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Evidence/EvidenceEnumerator
struct  EvidenceEnumerator_t3610480689  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::currentEnum
	RuntimeObject* ___currentEnum_0;
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::hostEnum
	RuntimeObject* ___hostEnum_1;
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::assemblyEnum
	RuntimeObject* ___assemblyEnum_2;

public:
	inline static int32_t get_offset_of_currentEnum_0() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t3610480689, ___currentEnum_0)); }
	inline RuntimeObject* get_currentEnum_0() const { return ___currentEnum_0; }
	inline RuntimeObject** get_address_of_currentEnum_0() { return &___currentEnum_0; }
	inline void set_currentEnum_0(RuntimeObject* value)
	{
		___currentEnum_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentEnum_0), value);
	}

	inline static int32_t get_offset_of_hostEnum_1() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t3610480689, ___hostEnum_1)); }
	inline RuntimeObject* get_hostEnum_1() const { return ___hostEnum_1; }
	inline RuntimeObject** get_address_of_hostEnum_1() { return &___hostEnum_1; }
	inline void set_hostEnum_1(RuntimeObject* value)
	{
		___hostEnum_1 = value;
		Il2CppCodeGenWriteBarrier((&___hostEnum_1), value);
	}

	inline static int32_t get_offset_of_assemblyEnum_2() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t3610480689, ___assemblyEnum_2)); }
	inline RuntimeObject* get_assemblyEnum_2() const { return ___assemblyEnum_2; }
	inline RuntimeObject** get_address_of_assemblyEnum_2() { return &___assemblyEnum_2; }
	inline void set_assemblyEnum_2(RuntimeObject* value)
	{
		___assemblyEnum_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyEnum_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVIDENCEENUMERATOR_T3610480689_H
#ifndef HASH_T2597051946_H
#define HASH_T2597051946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Hash
struct  Hash_t2597051946  : public RuntimeObject
{
public:
	// System.Reflection.Assembly System.Security.Policy.Hash::assembly
	Assembly_t3809378231 * ___assembly_0;
	// System.Byte[] System.Security.Policy.Hash::data
	ByteU5BU5D_t3908495726* ___data_1;

public:
	inline static int32_t get_offset_of_assembly_0() { return static_cast<int32_t>(offsetof(Hash_t2597051946, ___assembly_0)); }
	inline Assembly_t3809378231 * get_assembly_0() const { return ___assembly_0; }
	inline Assembly_t3809378231 ** get_address_of_assembly_0() { return &___assembly_0; }
	inline void set_assembly_0(Assembly_t3809378231 * value)
	{
		___assembly_0 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_0), value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(Hash_t2597051946, ___data_1)); }
	inline ByteU5BU5D_t3908495726* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_t3908495726** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_t3908495726* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASH_T2597051946_H
#ifndef CODEACCESSPERMISSION_T3632181336_H
#define CODEACCESSPERMISSION_T3632181336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.CodeAccessPermission
struct  CodeAccessPermission_t3632181336  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEACCESSPERMISSION_T3632181336_H
#ifndef PERMISSIONSET_T1921444768_H
#define PERMISSIONSET_T1921444768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.PermissionSet
struct  PermissionSet_t1921444768  : public RuntimeObject
{
public:
	// System.Boolean System.Security.PermissionSet::<DeclarativeSecurity>k__BackingField
	bool ___U3CDeclarativeSecurityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CDeclarativeSecurityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PermissionSet_t1921444768, ___U3CDeclarativeSecurityU3Ek__BackingField_0)); }
	inline bool get_U3CDeclarativeSecurityU3Ek__BackingField_0() const { return ___U3CDeclarativeSecurityU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CDeclarativeSecurityU3Ek__BackingField_0() { return &___U3CDeclarativeSecurityU3Ek__BackingField_0; }
	inline void set_U3CDeclarativeSecurityU3Ek__BackingField_0(bool value)
	{
		___U3CDeclarativeSecurityU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERMISSIONSET_T1921444768_H
#ifndef SECURITYELEMENT_T2335104795_H
#define SECURITYELEMENT_T2335104795_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityElement
struct  SecurityElement_t2335104795  : public RuntimeObject
{
public:
	// System.String System.Security.SecurityElement::text
	String_t* ___text_0;
	// System.String System.Security.SecurityElement::tag
	String_t* ___tag_1;
	// System.Collections.ArrayList System.Security.SecurityElement::attributes
	ArrayList_t1615735866 * ___attributes_2;
	// System.Collections.ArrayList System.Security.SecurityElement::children
	ArrayList_t1615735866 * ___children_3;

public:
	inline static int32_t get_offset_of_text_0() { return static_cast<int32_t>(offsetof(SecurityElement_t2335104795, ___text_0)); }
	inline String_t* get_text_0() const { return ___text_0; }
	inline String_t** get_address_of_text_0() { return &___text_0; }
	inline void set_text_0(String_t* value)
	{
		___text_0 = value;
		Il2CppCodeGenWriteBarrier((&___text_0), value);
	}

	inline static int32_t get_offset_of_tag_1() { return static_cast<int32_t>(offsetof(SecurityElement_t2335104795, ___tag_1)); }
	inline String_t* get_tag_1() const { return ___tag_1; }
	inline String_t** get_address_of_tag_1() { return &___tag_1; }
	inline void set_tag_1(String_t* value)
	{
		___tag_1 = value;
		Il2CppCodeGenWriteBarrier((&___tag_1), value);
	}

	inline static int32_t get_offset_of_attributes_2() { return static_cast<int32_t>(offsetof(SecurityElement_t2335104795, ___attributes_2)); }
	inline ArrayList_t1615735866 * get_attributes_2() const { return ___attributes_2; }
	inline ArrayList_t1615735866 ** get_address_of_attributes_2() { return &___attributes_2; }
	inline void set_attributes_2(ArrayList_t1615735866 * value)
	{
		___attributes_2 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_2), value);
	}

	inline static int32_t get_offset_of_children_3() { return static_cast<int32_t>(offsetof(SecurityElement_t2335104795, ___children_3)); }
	inline ArrayList_t1615735866 * get_children_3() const { return ___children_3; }
	inline ArrayList_t1615735866 ** get_address_of_children_3() { return &___children_3; }
	inline void set_children_3(ArrayList_t1615735866 * value)
	{
		___children_3 = value;
		Il2CppCodeGenWriteBarrier((&___children_3), value);
	}
};

struct SecurityElement_t2335104795_StaticFields
{
public:
	// System.Char[] System.Security.SecurityElement::invalid_tag_chars
	CharU5BU5D_t4030813516* ___invalid_tag_chars_4;
	// System.Char[] System.Security.SecurityElement::invalid_text_chars
	CharU5BU5D_t4030813516* ___invalid_text_chars_5;
	// System.Char[] System.Security.SecurityElement::invalid_attr_name_chars
	CharU5BU5D_t4030813516* ___invalid_attr_name_chars_6;
	// System.Char[] System.Security.SecurityElement::invalid_attr_value_chars
	CharU5BU5D_t4030813516* ___invalid_attr_value_chars_7;
	// System.Char[] System.Security.SecurityElement::invalid_chars
	CharU5BU5D_t4030813516* ___invalid_chars_8;

public:
	inline static int32_t get_offset_of_invalid_tag_chars_4() { return static_cast<int32_t>(offsetof(SecurityElement_t2335104795_StaticFields, ___invalid_tag_chars_4)); }
	inline CharU5BU5D_t4030813516* get_invalid_tag_chars_4() const { return ___invalid_tag_chars_4; }
	inline CharU5BU5D_t4030813516** get_address_of_invalid_tag_chars_4() { return &___invalid_tag_chars_4; }
	inline void set_invalid_tag_chars_4(CharU5BU5D_t4030813516* value)
	{
		___invalid_tag_chars_4 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_tag_chars_4), value);
	}

	inline static int32_t get_offset_of_invalid_text_chars_5() { return static_cast<int32_t>(offsetof(SecurityElement_t2335104795_StaticFields, ___invalid_text_chars_5)); }
	inline CharU5BU5D_t4030813516* get_invalid_text_chars_5() const { return ___invalid_text_chars_5; }
	inline CharU5BU5D_t4030813516** get_address_of_invalid_text_chars_5() { return &___invalid_text_chars_5; }
	inline void set_invalid_text_chars_5(CharU5BU5D_t4030813516* value)
	{
		___invalid_text_chars_5 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_text_chars_5), value);
	}

	inline static int32_t get_offset_of_invalid_attr_name_chars_6() { return static_cast<int32_t>(offsetof(SecurityElement_t2335104795_StaticFields, ___invalid_attr_name_chars_6)); }
	inline CharU5BU5D_t4030813516* get_invalid_attr_name_chars_6() const { return ___invalid_attr_name_chars_6; }
	inline CharU5BU5D_t4030813516** get_address_of_invalid_attr_name_chars_6() { return &___invalid_attr_name_chars_6; }
	inline void set_invalid_attr_name_chars_6(CharU5BU5D_t4030813516* value)
	{
		___invalid_attr_name_chars_6 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_attr_name_chars_6), value);
	}

	inline static int32_t get_offset_of_invalid_attr_value_chars_7() { return static_cast<int32_t>(offsetof(SecurityElement_t2335104795_StaticFields, ___invalid_attr_value_chars_7)); }
	inline CharU5BU5D_t4030813516* get_invalid_attr_value_chars_7() const { return ___invalid_attr_value_chars_7; }
	inline CharU5BU5D_t4030813516** get_address_of_invalid_attr_value_chars_7() { return &___invalid_attr_value_chars_7; }
	inline void set_invalid_attr_value_chars_7(CharU5BU5D_t4030813516* value)
	{
		___invalid_attr_value_chars_7 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_attr_value_chars_7), value);
	}

	inline static int32_t get_offset_of_invalid_chars_8() { return static_cast<int32_t>(offsetof(SecurityElement_t2335104795_StaticFields, ___invalid_chars_8)); }
	inline CharU5BU5D_t4030813516* get_invalid_chars_8() const { return ___invalid_chars_8; }
	inline CharU5BU5D_t4030813516** get_address_of_invalid_chars_8() { return &___invalid_chars_8; }
	inline void set_invalid_chars_8(CharU5BU5D_t4030813516* value)
	{
		___invalid_chars_8 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_chars_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYELEMENT_T2335104795_H
#ifndef SECURITYATTRIBUTE_T3845701125_H
#define SECURITYATTRIBUTE_T3845701125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityElement/SecurityAttribute
struct  SecurityAttribute_t3845701125  : public RuntimeObject
{
public:
	// System.String System.Security.SecurityElement/SecurityAttribute::_name
	String_t* ____name_0;
	// System.String System.Security.SecurityElement/SecurityAttribute::_value
	String_t* ____value_1;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(SecurityAttribute_t3845701125, ____name_0)); }
	inline String_t* get__name_0() const { return ____name_0; }
	inline String_t** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(String_t* value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier((&____name_0), value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(SecurityAttribute_t3845701125, ____value_1)); }
	inline String_t* get__value_1() const { return ____value_1; }
	inline String_t** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(String_t* value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((&____value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYATTRIBUTE_T3845701125_H
#ifndef SECURITYMANAGER_T3379535691_H
#define SECURITYMANAGER_T3379535691_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityManager
struct  SecurityManager_t3379535691  : public RuntimeObject
{
public:

public:
};

struct SecurityManager_t3379535691_StaticFields
{
public:
	// System.Object System.Security.SecurityManager::_lockObject
	RuntimeObject * ____lockObject_0;
	// System.Collections.Hashtable System.Security.SecurityManager::_declsecCache
	Hashtable_t2233667890 * ____declsecCache_1;
	// System.Security.Permissions.SecurityPermission System.Security.SecurityManager::_execution
	SecurityPermission_t3773521652 * ____execution_2;

public:
	inline static int32_t get_offset_of__lockObject_0() { return static_cast<int32_t>(offsetof(SecurityManager_t3379535691_StaticFields, ____lockObject_0)); }
	inline RuntimeObject * get__lockObject_0() const { return ____lockObject_0; }
	inline RuntimeObject ** get_address_of__lockObject_0() { return &____lockObject_0; }
	inline void set__lockObject_0(RuntimeObject * value)
	{
		____lockObject_0 = value;
		Il2CppCodeGenWriteBarrier((&____lockObject_0), value);
	}

	inline static int32_t get_offset_of__declsecCache_1() { return static_cast<int32_t>(offsetof(SecurityManager_t3379535691_StaticFields, ____declsecCache_1)); }
	inline Hashtable_t2233667890 * get__declsecCache_1() const { return ____declsecCache_1; }
	inline Hashtable_t2233667890 ** get_address_of__declsecCache_1() { return &____declsecCache_1; }
	inline void set__declsecCache_1(Hashtable_t2233667890 * value)
	{
		____declsecCache_1 = value;
		Il2CppCodeGenWriteBarrier((&____declsecCache_1), value);
	}

	inline static int32_t get_offset_of__execution_2() { return static_cast<int32_t>(offsetof(SecurityManager_t3379535691_StaticFields, ____execution_2)); }
	inline SecurityPermission_t3773521652 * get__execution_2() const { return ____execution_2; }
	inline SecurityPermission_t3773521652 ** get_address_of__execution_2() { return &____execution_2; }
	inline void set__execution_2(SecurityPermission_t3773521652 * value)
	{
		____execution_2 = value;
		Il2CppCodeGenWriteBarrier((&____execution_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYMANAGER_T3379535691_H
#ifndef DECODER_T592502453_H
#define DECODER_T592502453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Decoder
struct  Decoder_t592502453  : public RuntimeObject
{
public:
	// System.Text.DecoderFallback System.Text.Decoder::fallback
	DecoderFallback_t906753351 * ___fallback_0;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::fallback_buffer
	DecoderFallbackBuffer_t1564444004 * ___fallback_buffer_1;

public:
	inline static int32_t get_offset_of_fallback_0() { return static_cast<int32_t>(offsetof(Decoder_t592502453, ___fallback_0)); }
	inline DecoderFallback_t906753351 * get_fallback_0() const { return ___fallback_0; }
	inline DecoderFallback_t906753351 ** get_address_of_fallback_0() { return &___fallback_0; }
	inline void set_fallback_0(DecoderFallback_t906753351 * value)
	{
		___fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___fallback_0), value);
	}

	inline static int32_t get_offset_of_fallback_buffer_1() { return static_cast<int32_t>(offsetof(Decoder_t592502453, ___fallback_buffer_1)); }
	inline DecoderFallbackBuffer_t1564444004 * get_fallback_buffer_1() const { return ___fallback_buffer_1; }
	inline DecoderFallbackBuffer_t1564444004 ** get_address_of_fallback_buffer_1() { return &___fallback_buffer_1; }
	inline void set_fallback_buffer_1(DecoderFallbackBuffer_t1564444004 * value)
	{
		___fallback_buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___fallback_buffer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODER_T592502453_H
#ifndef DECODERFALLBACK_T906753351_H
#define DECODERFALLBACK_T906753351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallback
struct  DecoderFallback_t906753351  : public RuntimeObject
{
public:

public:
};

struct DecoderFallback_t906753351_StaticFields
{
public:
	// System.Text.DecoderFallback System.Text.DecoderFallback::exception_fallback
	DecoderFallback_t906753351 * ___exception_fallback_0;
	// System.Text.DecoderFallback System.Text.DecoderFallback::replacement_fallback
	DecoderFallback_t906753351 * ___replacement_fallback_1;
	// System.Text.DecoderFallback System.Text.DecoderFallback::standard_safe_fallback
	DecoderFallback_t906753351 * ___standard_safe_fallback_2;

public:
	inline static int32_t get_offset_of_exception_fallback_0() { return static_cast<int32_t>(offsetof(DecoderFallback_t906753351_StaticFields, ___exception_fallback_0)); }
	inline DecoderFallback_t906753351 * get_exception_fallback_0() const { return ___exception_fallback_0; }
	inline DecoderFallback_t906753351 ** get_address_of_exception_fallback_0() { return &___exception_fallback_0; }
	inline void set_exception_fallback_0(DecoderFallback_t906753351 * value)
	{
		___exception_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___exception_fallback_0), value);
	}

	inline static int32_t get_offset_of_replacement_fallback_1() { return static_cast<int32_t>(offsetof(DecoderFallback_t906753351_StaticFields, ___replacement_fallback_1)); }
	inline DecoderFallback_t906753351 * get_replacement_fallback_1() const { return ___replacement_fallback_1; }
	inline DecoderFallback_t906753351 ** get_address_of_replacement_fallback_1() { return &___replacement_fallback_1; }
	inline void set_replacement_fallback_1(DecoderFallback_t906753351 * value)
	{
		___replacement_fallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_fallback_1), value);
	}

	inline static int32_t get_offset_of_standard_safe_fallback_2() { return static_cast<int32_t>(offsetof(DecoderFallback_t906753351_StaticFields, ___standard_safe_fallback_2)); }
	inline DecoderFallback_t906753351 * get_standard_safe_fallback_2() const { return ___standard_safe_fallback_2; }
	inline DecoderFallback_t906753351 ** get_address_of_standard_safe_fallback_2() { return &___standard_safe_fallback_2; }
	inline void set_standard_safe_fallback_2(DecoderFallback_t906753351 * value)
	{
		___standard_safe_fallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___standard_safe_fallback_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACK_T906753351_H
#ifndef DECODERFALLBACKBUFFER_T1564444004_H
#define DECODERFALLBACKBUFFER_T1564444004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallbackBuffer
struct  DecoderFallbackBuffer_t1564444004  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACKBUFFER_T1564444004_H
#ifndef ENCODERFALLBACK_T142657651_H
#define ENCODERFALLBACK_T142657651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallback
struct  EncoderFallback_t142657651  : public RuntimeObject
{
public:

public:
};

struct EncoderFallback_t142657651_StaticFields
{
public:
	// System.Text.EncoderFallback System.Text.EncoderFallback::exception_fallback
	EncoderFallback_t142657651 * ___exception_fallback_0;
	// System.Text.EncoderFallback System.Text.EncoderFallback::replacement_fallback
	EncoderFallback_t142657651 * ___replacement_fallback_1;
	// System.Text.EncoderFallback System.Text.EncoderFallback::standard_safe_fallback
	EncoderFallback_t142657651 * ___standard_safe_fallback_2;

public:
	inline static int32_t get_offset_of_exception_fallback_0() { return static_cast<int32_t>(offsetof(EncoderFallback_t142657651_StaticFields, ___exception_fallback_0)); }
	inline EncoderFallback_t142657651 * get_exception_fallback_0() const { return ___exception_fallback_0; }
	inline EncoderFallback_t142657651 ** get_address_of_exception_fallback_0() { return &___exception_fallback_0; }
	inline void set_exception_fallback_0(EncoderFallback_t142657651 * value)
	{
		___exception_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___exception_fallback_0), value);
	}

	inline static int32_t get_offset_of_replacement_fallback_1() { return static_cast<int32_t>(offsetof(EncoderFallback_t142657651_StaticFields, ___replacement_fallback_1)); }
	inline EncoderFallback_t142657651 * get_replacement_fallback_1() const { return ___replacement_fallback_1; }
	inline EncoderFallback_t142657651 ** get_address_of_replacement_fallback_1() { return &___replacement_fallback_1; }
	inline void set_replacement_fallback_1(EncoderFallback_t142657651 * value)
	{
		___replacement_fallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_fallback_1), value);
	}

	inline static int32_t get_offset_of_standard_safe_fallback_2() { return static_cast<int32_t>(offsetof(EncoderFallback_t142657651_StaticFields, ___standard_safe_fallback_2)); }
	inline EncoderFallback_t142657651 * get_standard_safe_fallback_2() const { return ___standard_safe_fallback_2; }
	inline EncoderFallback_t142657651 ** get_address_of_standard_safe_fallback_2() { return &___standard_safe_fallback_2; }
	inline void set_standard_safe_fallback_2(EncoderFallback_t142657651 * value)
	{
		___standard_safe_fallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___standard_safe_fallback_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACK_T142657651_H
#ifndef ENCODERFALLBACKBUFFER_T1622454757_H
#define ENCODERFALLBACKBUFFER_T1622454757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallbackBuffer
struct  EncoderFallbackBuffer_t1622454757  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACKBUFFER_T1622454757_H
#ifndef DERIVEBYTES_T2403062557_H
#define DERIVEBYTES_T2403062557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DeriveBytes
struct  DeriveBytes_t2403062557  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DERIVEBYTES_T2403062557_H
#ifndef SYMMETRICTRANSFORM_T2833215690_H
#define SYMMETRICTRANSFORM_T2833215690_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.SymmetricTransform
struct  SymmetricTransform_t2833215690  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_t811790614 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_t3908495726* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_t3908495726* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_t3908495726* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_t3908495726* ___workout_6;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackIter
	int32_t ___FeedBackIter_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t3050071163 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2833215690, ___algo_0)); }
	inline SymmetricAlgorithm_t811790614 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t811790614 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t811790614 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2833215690, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2833215690, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2833215690, ___temp_3)); }
	inline ByteU5BU5D_t3908495726* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_t3908495726** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_t3908495726* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((&___temp_3), value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2833215690, ___temp2_4)); }
	inline ByteU5BU5D_t3908495726* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_t3908495726** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_t3908495726* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((&___temp2_4), value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2833215690, ___workBuff_5)); }
	inline ByteU5BU5D_t3908495726* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_t3908495726** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_t3908495726* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((&___workBuff_5), value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2833215690, ___workout_6)); }
	inline ByteU5BU5D_t3908495726* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_t3908495726** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_t3908495726* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((&___workout_6), value);
	}

	inline static int32_t get_offset_of_FeedBackByte_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2833215690, ___FeedBackByte_7)); }
	inline int32_t get_FeedBackByte_7() const { return ___FeedBackByte_7; }
	inline int32_t* get_address_of_FeedBackByte_7() { return &___FeedBackByte_7; }
	inline void set_FeedBackByte_7(int32_t value)
	{
		___FeedBackByte_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackIter_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2833215690, ___FeedBackIter_8)); }
	inline int32_t get_FeedBackIter_8() const { return ___FeedBackIter_8; }
	inline int32_t* get_address_of_FeedBackIter_8() { return &___FeedBackIter_8; }
	inline void set_FeedBackIter_8(int32_t value)
	{
		___FeedBackIter_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2833215690, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2833215690, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2833215690, ____rng_11)); }
	inline RandomNumberGenerator_t3050071163 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t3050071163 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t3050071163 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((&____rng_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICTRANSFORM_T2833215690_H
#ifndef HASHALGORITHM_T2744987723_H
#define HASHALGORITHM_T2744987723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HashAlgorithm
struct  HashAlgorithm_t2744987723  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_t3908495726* ___HashValue_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_HashValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t2744987723, ___HashValue_0)); }
	inline ByteU5BU5D_t3908495726* get_HashValue_0() const { return ___HashValue_0; }
	inline ByteU5BU5D_t3908495726** get_address_of_HashValue_0() { return &___HashValue_0; }
	inline void set_HashValue_0(ByteU5BU5D_t3908495726* value)
	{
		___HashValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___HashValue_0), value);
	}

	inline static int32_t get_offset_of_HashSizeValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t2744987723, ___HashSizeValue_1)); }
	inline int32_t get_HashSizeValue_1() const { return ___HashSizeValue_1; }
	inline int32_t* get_address_of_HashSizeValue_1() { return &___HashSizeValue_1; }
	inline void set_HashSizeValue_1(int32_t value)
	{
		___HashSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t2744987723, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t2744987723, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHALGORITHM_T2744987723_H
#ifndef ASYMMETRICALGORITHM_T286948500_H
#define ASYMMETRICALGORITHM_T286948500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricAlgorithm
struct  AsymmetricAlgorithm_t286948500  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t702874482* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t286948500, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t286948500, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_t702874482* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_t702874482** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_t702874482* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICALGORITHM_T286948500_H
#ifndef ASYMMETRICKEYEXCHANGEDEFORMATTER_T4189292640_H
#define ASYMMETRICKEYEXCHANGEDEFORMATTER_T4189292640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricKeyExchangeDeformatter
struct  AsymmetricKeyExchangeDeformatter_t4189292640  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICKEYEXCHANGEDEFORMATTER_T4189292640_H
#ifndef ASYMMETRICKEYEXCHANGEFORMATTER_T2103503866_H
#define ASYMMETRICKEYEXCHANGEFORMATTER_T2103503866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricKeyExchangeFormatter
struct  AsymmetricKeyExchangeFormatter_t2103503866  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICKEYEXCHANGEFORMATTER_T2103503866_H
#ifndef ASYMMETRICSIGNATUREDEFORMATTER_T804737386_H
#define ASYMMETRICSIGNATUREDEFORMATTER_T804737386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureDeformatter
struct  AsymmetricSignatureDeformatter_t804737386  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREDEFORMATTER_T804737386_H
#ifndef ASYMMETRICSIGNATUREFORMATTER_T2814679764_H
#define ASYMMETRICSIGNATUREFORMATTER_T2814679764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureFormatter
struct  AsymmetricSignatureFormatter_t2814679764  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREFORMATTER_T2814679764_H
#ifndef VALUETYPE_T650631508_H
#define VALUETYPE_T650631508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t650631508  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t650631508_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t650631508_marshaled_com
{
};
#endif // VALUETYPE_T650631508_H
#ifndef ATTRIBUTE_T942395732_H
#define ATTRIBUTE_T942395732_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t942395732  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T942395732_H
#ifndef CRITICALFINALIZEROBJECT_T1888336031_H
#define CRITICALFINALIZEROBJECT_T1888336031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t1888336031  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T1888336031_H
#ifndef ENCODING_T3698775274_H
#define ENCODING_T3698775274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t3698775274  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage_0;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page_1;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly_2;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t906753351 * ___decoder_fallback_3;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t142657651 * ___encoder_fallback_4;
	// System.String System.Text.Encoding::body_name
	String_t* ___body_name_8;
	// System.String System.Text.Encoding::encoding_name
	String_t* ___encoding_name_9;
	// System.String System.Text.Encoding::header_name
	String_t* ___header_name_10;
	// System.Boolean System.Text.Encoding::is_mail_news_display
	bool ___is_mail_news_display_11;
	// System.Boolean System.Text.Encoding::is_mail_news_save
	bool ___is_mail_news_save_12;
	// System.Boolean System.Text.Encoding::is_browser_save
	bool ___is_browser_save_13;
	// System.Boolean System.Text.Encoding::is_browser_display
	bool ___is_browser_display_14;
	// System.String System.Text.Encoding::web_name
	String_t* ___web_name_15;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(Encoding_t3698775274, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_windows_code_page_1() { return static_cast<int32_t>(offsetof(Encoding_t3698775274, ___windows_code_page_1)); }
	inline int32_t get_windows_code_page_1() const { return ___windows_code_page_1; }
	inline int32_t* get_address_of_windows_code_page_1() { return &___windows_code_page_1; }
	inline void set_windows_code_page_1(int32_t value)
	{
		___windows_code_page_1 = value;
	}

	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Encoding_t3698775274, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}

	inline static int32_t get_offset_of_decoder_fallback_3() { return static_cast<int32_t>(offsetof(Encoding_t3698775274, ___decoder_fallback_3)); }
	inline DecoderFallback_t906753351 * get_decoder_fallback_3() const { return ___decoder_fallback_3; }
	inline DecoderFallback_t906753351 ** get_address_of_decoder_fallback_3() { return &___decoder_fallback_3; }
	inline void set_decoder_fallback_3(DecoderFallback_t906753351 * value)
	{
		___decoder_fallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_fallback_3), value);
	}

	inline static int32_t get_offset_of_encoder_fallback_4() { return static_cast<int32_t>(offsetof(Encoding_t3698775274, ___encoder_fallback_4)); }
	inline EncoderFallback_t142657651 * get_encoder_fallback_4() const { return ___encoder_fallback_4; }
	inline EncoderFallback_t142657651 ** get_address_of_encoder_fallback_4() { return &___encoder_fallback_4; }
	inline void set_encoder_fallback_4(EncoderFallback_t142657651 * value)
	{
		___encoder_fallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_fallback_4), value);
	}

	inline static int32_t get_offset_of_body_name_8() { return static_cast<int32_t>(offsetof(Encoding_t3698775274, ___body_name_8)); }
	inline String_t* get_body_name_8() const { return ___body_name_8; }
	inline String_t** get_address_of_body_name_8() { return &___body_name_8; }
	inline void set_body_name_8(String_t* value)
	{
		___body_name_8 = value;
		Il2CppCodeGenWriteBarrier((&___body_name_8), value);
	}

	inline static int32_t get_offset_of_encoding_name_9() { return static_cast<int32_t>(offsetof(Encoding_t3698775274, ___encoding_name_9)); }
	inline String_t* get_encoding_name_9() const { return ___encoding_name_9; }
	inline String_t** get_address_of_encoding_name_9() { return &___encoding_name_9; }
	inline void set_encoding_name_9(String_t* value)
	{
		___encoding_name_9 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_name_9), value);
	}

	inline static int32_t get_offset_of_header_name_10() { return static_cast<int32_t>(offsetof(Encoding_t3698775274, ___header_name_10)); }
	inline String_t* get_header_name_10() const { return ___header_name_10; }
	inline String_t** get_address_of_header_name_10() { return &___header_name_10; }
	inline void set_header_name_10(String_t* value)
	{
		___header_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___header_name_10), value);
	}

	inline static int32_t get_offset_of_is_mail_news_display_11() { return static_cast<int32_t>(offsetof(Encoding_t3698775274, ___is_mail_news_display_11)); }
	inline bool get_is_mail_news_display_11() const { return ___is_mail_news_display_11; }
	inline bool* get_address_of_is_mail_news_display_11() { return &___is_mail_news_display_11; }
	inline void set_is_mail_news_display_11(bool value)
	{
		___is_mail_news_display_11 = value;
	}

	inline static int32_t get_offset_of_is_mail_news_save_12() { return static_cast<int32_t>(offsetof(Encoding_t3698775274, ___is_mail_news_save_12)); }
	inline bool get_is_mail_news_save_12() const { return ___is_mail_news_save_12; }
	inline bool* get_address_of_is_mail_news_save_12() { return &___is_mail_news_save_12; }
	inline void set_is_mail_news_save_12(bool value)
	{
		___is_mail_news_save_12 = value;
	}

	inline static int32_t get_offset_of_is_browser_save_13() { return static_cast<int32_t>(offsetof(Encoding_t3698775274, ___is_browser_save_13)); }
	inline bool get_is_browser_save_13() const { return ___is_browser_save_13; }
	inline bool* get_address_of_is_browser_save_13() { return &___is_browser_save_13; }
	inline void set_is_browser_save_13(bool value)
	{
		___is_browser_save_13 = value;
	}

	inline static int32_t get_offset_of_is_browser_display_14() { return static_cast<int32_t>(offsetof(Encoding_t3698775274, ___is_browser_display_14)); }
	inline bool get_is_browser_display_14() const { return ___is_browser_display_14; }
	inline bool* get_address_of_is_browser_display_14() { return &___is_browser_display_14; }
	inline void set_is_browser_display_14(bool value)
	{
		___is_browser_display_14 = value;
	}

	inline static int32_t get_offset_of_web_name_15() { return static_cast<int32_t>(offsetof(Encoding_t3698775274, ___web_name_15)); }
	inline String_t* get_web_name_15() const { return ___web_name_15; }
	inline String_t** get_address_of_web_name_15() { return &___web_name_15; }
	inline void set_web_name_15(String_t* value)
	{
		___web_name_15 = value;
		Il2CppCodeGenWriteBarrier((&___web_name_15), value);
	}
};

struct Encoding_t3698775274_StaticFields
{
public:
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t3809378231 * ___i18nAssembly_5;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled_6;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t3622332746* ___encodings_7;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t3698775274 * ___asciiEncoding_16;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t3698775274 * ___bigEndianEncoding_17;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t3698775274 * ___defaultEncoding_18;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t3698775274 * ___utf7Encoding_19;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t3698775274 * ___utf8EncodingWithMarkers_20;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t3698775274 * ___utf8EncodingWithoutMarkers_21;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t3698775274 * ___unicodeEncoding_22;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t3698775274 * ___isoLatin1Encoding_23;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t3698775274 * ___utf8EncodingUnsafe_24;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t3698775274 * ___utf32Encoding_25;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t3698775274 * ___bigEndianUTF32Encoding_26;
	// System.Object System.Text.Encoding::lockobj
	RuntimeObject * ___lockobj_27;

public:
	inline static int32_t get_offset_of_i18nAssembly_5() { return static_cast<int32_t>(offsetof(Encoding_t3698775274_StaticFields, ___i18nAssembly_5)); }
	inline Assembly_t3809378231 * get_i18nAssembly_5() const { return ___i18nAssembly_5; }
	inline Assembly_t3809378231 ** get_address_of_i18nAssembly_5() { return &___i18nAssembly_5; }
	inline void set_i18nAssembly_5(Assembly_t3809378231 * value)
	{
		___i18nAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_5), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_6() { return static_cast<int32_t>(offsetof(Encoding_t3698775274_StaticFields, ___i18nDisabled_6)); }
	inline bool get_i18nDisabled_6() const { return ___i18nDisabled_6; }
	inline bool* get_address_of_i18nDisabled_6() { return &___i18nDisabled_6; }
	inline void set_i18nDisabled_6(bool value)
	{
		___i18nDisabled_6 = value;
	}

	inline static int32_t get_offset_of_encodings_7() { return static_cast<int32_t>(offsetof(Encoding_t3698775274_StaticFields, ___encodings_7)); }
	inline ObjectU5BU5D_t3622332746* get_encodings_7() const { return ___encodings_7; }
	inline ObjectU5BU5D_t3622332746** get_address_of_encodings_7() { return &___encodings_7; }
	inline void set_encodings_7(ObjectU5BU5D_t3622332746* value)
	{
		___encodings_7 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_7), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_16() { return static_cast<int32_t>(offsetof(Encoding_t3698775274_StaticFields, ___asciiEncoding_16)); }
	inline Encoding_t3698775274 * get_asciiEncoding_16() const { return ___asciiEncoding_16; }
	inline Encoding_t3698775274 ** get_address_of_asciiEncoding_16() { return &___asciiEncoding_16; }
	inline void set_asciiEncoding_16(Encoding_t3698775274 * value)
	{
		___asciiEncoding_16 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_16), value);
	}

	inline static int32_t get_offset_of_bigEndianEncoding_17() { return static_cast<int32_t>(offsetof(Encoding_t3698775274_StaticFields, ___bigEndianEncoding_17)); }
	inline Encoding_t3698775274 * get_bigEndianEncoding_17() const { return ___bigEndianEncoding_17; }
	inline Encoding_t3698775274 ** get_address_of_bigEndianEncoding_17() { return &___bigEndianEncoding_17; }
	inline void set_bigEndianEncoding_17(Encoding_t3698775274 * value)
	{
		___bigEndianEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianEncoding_17), value);
	}

	inline static int32_t get_offset_of_defaultEncoding_18() { return static_cast<int32_t>(offsetof(Encoding_t3698775274_StaticFields, ___defaultEncoding_18)); }
	inline Encoding_t3698775274 * get_defaultEncoding_18() const { return ___defaultEncoding_18; }
	inline Encoding_t3698775274 ** get_address_of_defaultEncoding_18() { return &___defaultEncoding_18; }
	inline void set_defaultEncoding_18(Encoding_t3698775274 * value)
	{
		___defaultEncoding_18 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_18), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_19() { return static_cast<int32_t>(offsetof(Encoding_t3698775274_StaticFields, ___utf7Encoding_19)); }
	inline Encoding_t3698775274 * get_utf7Encoding_19() const { return ___utf7Encoding_19; }
	inline Encoding_t3698775274 ** get_address_of_utf7Encoding_19() { return &___utf7Encoding_19; }
	inline void set_utf7Encoding_19(Encoding_t3698775274 * value)
	{
		___utf7Encoding_19 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_19), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithMarkers_20() { return static_cast<int32_t>(offsetof(Encoding_t3698775274_StaticFields, ___utf8EncodingWithMarkers_20)); }
	inline Encoding_t3698775274 * get_utf8EncodingWithMarkers_20() const { return ___utf8EncodingWithMarkers_20; }
	inline Encoding_t3698775274 ** get_address_of_utf8EncodingWithMarkers_20() { return &___utf8EncodingWithMarkers_20; }
	inline void set_utf8EncodingWithMarkers_20(Encoding_t3698775274 * value)
	{
		___utf8EncodingWithMarkers_20 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithMarkers_20), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_21() { return static_cast<int32_t>(offsetof(Encoding_t3698775274_StaticFields, ___utf8EncodingWithoutMarkers_21)); }
	inline Encoding_t3698775274 * get_utf8EncodingWithoutMarkers_21() const { return ___utf8EncodingWithoutMarkers_21; }
	inline Encoding_t3698775274 ** get_address_of_utf8EncodingWithoutMarkers_21() { return &___utf8EncodingWithoutMarkers_21; }
	inline void set_utf8EncodingWithoutMarkers_21(Encoding_t3698775274 * value)
	{
		___utf8EncodingWithoutMarkers_21 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_21), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_22() { return static_cast<int32_t>(offsetof(Encoding_t3698775274_StaticFields, ___unicodeEncoding_22)); }
	inline Encoding_t3698775274 * get_unicodeEncoding_22() const { return ___unicodeEncoding_22; }
	inline Encoding_t3698775274 ** get_address_of_unicodeEncoding_22() { return &___unicodeEncoding_22; }
	inline void set_unicodeEncoding_22(Encoding_t3698775274 * value)
	{
		___unicodeEncoding_22 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_22), value);
	}

	inline static int32_t get_offset_of_isoLatin1Encoding_23() { return static_cast<int32_t>(offsetof(Encoding_t3698775274_StaticFields, ___isoLatin1Encoding_23)); }
	inline Encoding_t3698775274 * get_isoLatin1Encoding_23() const { return ___isoLatin1Encoding_23; }
	inline Encoding_t3698775274 ** get_address_of_isoLatin1Encoding_23() { return &___isoLatin1Encoding_23; }
	inline void set_isoLatin1Encoding_23(Encoding_t3698775274 * value)
	{
		___isoLatin1Encoding_23 = value;
		Il2CppCodeGenWriteBarrier((&___isoLatin1Encoding_23), value);
	}

	inline static int32_t get_offset_of_utf8EncodingUnsafe_24() { return static_cast<int32_t>(offsetof(Encoding_t3698775274_StaticFields, ___utf8EncodingUnsafe_24)); }
	inline Encoding_t3698775274 * get_utf8EncodingUnsafe_24() const { return ___utf8EncodingUnsafe_24; }
	inline Encoding_t3698775274 ** get_address_of_utf8EncodingUnsafe_24() { return &___utf8EncodingUnsafe_24; }
	inline void set_utf8EncodingUnsafe_24(Encoding_t3698775274 * value)
	{
		___utf8EncodingUnsafe_24 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingUnsafe_24), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_25() { return static_cast<int32_t>(offsetof(Encoding_t3698775274_StaticFields, ___utf32Encoding_25)); }
	inline Encoding_t3698775274 * get_utf32Encoding_25() const { return ___utf32Encoding_25; }
	inline Encoding_t3698775274 ** get_address_of_utf32Encoding_25() { return &___utf32Encoding_25; }
	inline void set_utf32Encoding_25(Encoding_t3698775274 * value)
	{
		___utf32Encoding_25 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_25), value);
	}

	inline static int32_t get_offset_of_bigEndianUTF32Encoding_26() { return static_cast<int32_t>(offsetof(Encoding_t3698775274_StaticFields, ___bigEndianUTF32Encoding_26)); }
	inline Encoding_t3698775274 * get_bigEndianUTF32Encoding_26() const { return ___bigEndianUTF32Encoding_26; }
	inline Encoding_t3698775274 ** get_address_of_bigEndianUTF32Encoding_26() { return &___bigEndianUTF32Encoding_26; }
	inline void set_bigEndianUTF32Encoding_26(Encoding_t3698775274 * value)
	{
		___bigEndianUTF32Encoding_26 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUTF32Encoding_26), value);
	}

	inline static int32_t get_offset_of_lockobj_27() { return static_cast<int32_t>(offsetof(Encoding_t3698775274_StaticFields, ___lockobj_27)); }
	inline RuntimeObject * get_lockobj_27() const { return ___lockobj_27; }
	inline RuntimeObject ** get_address_of_lockobj_27() { return &___lockobj_27; }
	inline void set_lockobj_27(RuntimeObject * value)
	{
		___lockobj_27 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T3698775274_H
#ifndef SIGNATUREDESCRIPTION_T476491654_H
#define SIGNATUREDESCRIPTION_T476491654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SignatureDescription
struct  SignatureDescription_t476491654  : public RuntimeObject
{
public:
	// System.String System.Security.Cryptography.SignatureDescription::_DeformatterAlgorithm
	String_t* ____DeformatterAlgorithm_0;
	// System.String System.Security.Cryptography.SignatureDescription::_DigestAlgorithm
	String_t* ____DigestAlgorithm_1;
	// System.String System.Security.Cryptography.SignatureDescription::_FormatterAlgorithm
	String_t* ____FormatterAlgorithm_2;
	// System.String System.Security.Cryptography.SignatureDescription::_KeyAlgorithm
	String_t* ____KeyAlgorithm_3;

public:
	inline static int32_t get_offset_of__DeformatterAlgorithm_0() { return static_cast<int32_t>(offsetof(SignatureDescription_t476491654, ____DeformatterAlgorithm_0)); }
	inline String_t* get__DeformatterAlgorithm_0() const { return ____DeformatterAlgorithm_0; }
	inline String_t** get_address_of__DeformatterAlgorithm_0() { return &____DeformatterAlgorithm_0; }
	inline void set__DeformatterAlgorithm_0(String_t* value)
	{
		____DeformatterAlgorithm_0 = value;
		Il2CppCodeGenWriteBarrier((&____DeformatterAlgorithm_0), value);
	}

	inline static int32_t get_offset_of__DigestAlgorithm_1() { return static_cast<int32_t>(offsetof(SignatureDescription_t476491654, ____DigestAlgorithm_1)); }
	inline String_t* get__DigestAlgorithm_1() const { return ____DigestAlgorithm_1; }
	inline String_t** get_address_of__DigestAlgorithm_1() { return &____DigestAlgorithm_1; }
	inline void set__DigestAlgorithm_1(String_t* value)
	{
		____DigestAlgorithm_1 = value;
		Il2CppCodeGenWriteBarrier((&____DigestAlgorithm_1), value);
	}

	inline static int32_t get_offset_of__FormatterAlgorithm_2() { return static_cast<int32_t>(offsetof(SignatureDescription_t476491654, ____FormatterAlgorithm_2)); }
	inline String_t* get__FormatterAlgorithm_2() const { return ____FormatterAlgorithm_2; }
	inline String_t** get_address_of__FormatterAlgorithm_2() { return &____FormatterAlgorithm_2; }
	inline void set__FormatterAlgorithm_2(String_t* value)
	{
		____FormatterAlgorithm_2 = value;
		Il2CppCodeGenWriteBarrier((&____FormatterAlgorithm_2), value);
	}

	inline static int32_t get_offset_of__KeyAlgorithm_3() { return static_cast<int32_t>(offsetof(SignatureDescription_t476491654, ____KeyAlgorithm_3)); }
	inline String_t* get__KeyAlgorithm_3() const { return ____KeyAlgorithm_3; }
	inline String_t** get_address_of__KeyAlgorithm_3() { return &____KeyAlgorithm_3; }
	inline void set__KeyAlgorithm_3(String_t* value)
	{
		____KeyAlgorithm_3 = value;
		Il2CppCodeGenWriteBarrier((&____KeyAlgorithm_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIGNATUREDESCRIPTION_T476491654_H
#ifndef SHACONSTANTS_T1295411336_H
#define SHACONSTANTS_T1295411336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHAConstants
struct  SHAConstants_t1295411336  : public RuntimeObject
{
public:

public:
};

struct SHAConstants_t1295411336_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.SHAConstants::K1
	UInt32U5BU5D_t2705142766* ___K1_0;
	// System.UInt64[] System.Security.Cryptography.SHAConstants::K2
	UInt64U5BU5D_t88273377* ___K2_1;

public:
	inline static int32_t get_offset_of_K1_0() { return static_cast<int32_t>(offsetof(SHAConstants_t1295411336_StaticFields, ___K1_0)); }
	inline UInt32U5BU5D_t2705142766* get_K1_0() const { return ___K1_0; }
	inline UInt32U5BU5D_t2705142766** get_address_of_K1_0() { return &___K1_0; }
	inline void set_K1_0(UInt32U5BU5D_t2705142766* value)
	{
		___K1_0 = value;
		Il2CppCodeGenWriteBarrier((&___K1_0), value);
	}

	inline static int32_t get_offset_of_K2_1() { return static_cast<int32_t>(offsetof(SHAConstants_t1295411336_StaticFields, ___K2_1)); }
	inline UInt64U5BU5D_t88273377* get_K2_1() const { return ___K2_1; }
	inline UInt64U5BU5D_t88273377** get_address_of_K2_1() { return &___K2_1; }
	inline void set_K2_1(UInt64U5BU5D_t88273377* value)
	{
		___K2_1 = value;
		Il2CppCodeGenWriteBarrier((&___K2_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHACONSTANTS_T1295411336_H
#ifndef EXCEPTION_T4162944371_H
#define EXCEPTION_T4162944371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t4162944371  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t2667628918* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t4162944371 * ___inner_exception_1;
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
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t4162944371, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t2667628918* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t2667628918** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t2667628918* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t4162944371, ___inner_exception_1)); }
	inline Exception_t4162944371 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t4162944371 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t4162944371 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t4162944371, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t4162944371, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t4162944371, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t4162944371, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t4162944371, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t4162944371, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t4162944371, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t4162944371, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t4162944371, ____data_10)); }
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
#endif // EXCEPTION_T4162944371_H
#ifndef MASKGENERATIONMETHOD_T664677518_H
#define MASKGENERATIONMETHOD_T664677518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MaskGenerationMethod
struct  MaskGenerationMethod_t664677518  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKGENERATIONMETHOD_T664677518_H
#ifndef RIJNDAELMANAGEDTRANSFORM_T3554508953_H
#define RIJNDAELMANAGEDTRANSFORM_T3554508953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RijndaelManagedTransform
struct  RijndaelManagedTransform_t3554508953  : public RuntimeObject
{
public:
	// System.Security.Cryptography.RijndaelTransform System.Security.Cryptography.RijndaelManagedTransform::_st
	RijndaelTransform_t2785594878 * ____st_0;
	// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::_bs
	int32_t ____bs_1;

public:
	inline static int32_t get_offset_of__st_0() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t3554508953, ____st_0)); }
	inline RijndaelTransform_t2785594878 * get__st_0() const { return ____st_0; }
	inline RijndaelTransform_t2785594878 ** get_address_of__st_0() { return &____st_0; }
	inline void set__st_0(RijndaelTransform_t2785594878 * value)
	{
		____st_0 = value;
		Il2CppCodeGenWriteBarrier((&____st_0), value);
	}

	inline static int32_t get_offset_of__bs_1() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t3554508953, ____bs_1)); }
	inline int32_t get__bs_1() const { return ____bs_1; }
	inline int32_t* get_address_of__bs_1() { return &____bs_1; }
	inline void set__bs_1(int32_t value)
	{
		____bs_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAELMANAGEDTRANSFORM_T3554508953_H
#ifndef SHA1INTERNAL_T896793504_H
#define SHA1INTERNAL_T896793504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1Internal
struct  SHA1Internal_t896793504  : public RuntimeObject
{
public:
	// System.UInt32[] System.Security.Cryptography.SHA1Internal::_H
	UInt32U5BU5D_t2705142766* ____H_2;
	// System.UInt64 System.Security.Cryptography.SHA1Internal::count
	uint64_t ___count_3;
	// System.Byte[] System.Security.Cryptography.SHA1Internal::_ProcessingBuffer
	ByteU5BU5D_t3908495726* ____ProcessingBuffer_4;
	// System.Int32 System.Security.Cryptography.SHA1Internal::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_5;
	// System.UInt32[] System.Security.Cryptography.SHA1Internal::buff
	UInt32U5BU5D_t2705142766* ___buff_6;

public:
	inline static int32_t get_offset_of__H_2() { return static_cast<int32_t>(offsetof(SHA1Internal_t896793504, ____H_2)); }
	inline UInt32U5BU5D_t2705142766* get__H_2() const { return ____H_2; }
	inline UInt32U5BU5D_t2705142766** get_address_of__H_2() { return &____H_2; }
	inline void set__H_2(UInt32U5BU5D_t2705142766* value)
	{
		____H_2 = value;
		Il2CppCodeGenWriteBarrier((&____H_2), value);
	}

	inline static int32_t get_offset_of_count_3() { return static_cast<int32_t>(offsetof(SHA1Internal_t896793504, ___count_3)); }
	inline uint64_t get_count_3() const { return ___count_3; }
	inline uint64_t* get_address_of_count_3() { return &___count_3; }
	inline void set_count_3(uint64_t value)
	{
		___count_3 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_4() { return static_cast<int32_t>(offsetof(SHA1Internal_t896793504, ____ProcessingBuffer_4)); }
	inline ByteU5BU5D_t3908495726* get__ProcessingBuffer_4() const { return ____ProcessingBuffer_4; }
	inline ByteU5BU5D_t3908495726** get_address_of__ProcessingBuffer_4() { return &____ProcessingBuffer_4; }
	inline void set__ProcessingBuffer_4(ByteU5BU5D_t3908495726* value)
	{
		____ProcessingBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_4), value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_5() { return static_cast<int32_t>(offsetof(SHA1Internal_t896793504, ____ProcessingBufferCount_5)); }
	inline int32_t get__ProcessingBufferCount_5() const { return ____ProcessingBufferCount_5; }
	inline int32_t* get_address_of__ProcessingBufferCount_5() { return &____ProcessingBufferCount_5; }
	inline void set__ProcessingBufferCount_5(int32_t value)
	{
		____ProcessingBufferCount_5 = value;
	}

	inline static int32_t get_offset_of_buff_6() { return static_cast<int32_t>(offsetof(SHA1Internal_t896793504, ___buff_6)); }
	inline UInt32U5BU5D_t2705142766* get_buff_6() const { return ___buff_6; }
	inline UInt32U5BU5D_t2705142766** get_address_of_buff_6() { return &___buff_6; }
	inline void set_buff_6(UInt32U5BU5D_t2705142766* value)
	{
		___buff_6 = value;
		Il2CppCodeGenWriteBarrier((&___buff_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1INTERNAL_T896793504_H
#ifndef RANDOMNUMBERGENERATOR_T3050071163_H
#define RANDOMNUMBERGENERATOR_T3050071163_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RandomNumberGenerator
struct  RandomNumberGenerator_t3050071163  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOMNUMBERGENERATOR_T3050071163_H
#ifndef RSAPARAMETERS_T1246889679_H
#define RSAPARAMETERS_T1246889679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAParameters
struct  RSAParameters_t1246889679 
{
public:
	// System.Byte[] System.Security.Cryptography.RSAParameters::P
	ByteU5BU5D_t3908495726* ___P_0;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Q
	ByteU5BU5D_t3908495726* ___Q_1;
	// System.Byte[] System.Security.Cryptography.RSAParameters::D
	ByteU5BU5D_t3908495726* ___D_2;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DP
	ByteU5BU5D_t3908495726* ___DP_3;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DQ
	ByteU5BU5D_t3908495726* ___DQ_4;
	// System.Byte[] System.Security.Cryptography.RSAParameters::InverseQ
	ByteU5BU5D_t3908495726* ___InverseQ_5;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Modulus
	ByteU5BU5D_t3908495726* ___Modulus_6;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Exponent
	ByteU5BU5D_t3908495726* ___Exponent_7;

public:
	inline static int32_t get_offset_of_P_0() { return static_cast<int32_t>(offsetof(RSAParameters_t1246889679, ___P_0)); }
	inline ByteU5BU5D_t3908495726* get_P_0() const { return ___P_0; }
	inline ByteU5BU5D_t3908495726** get_address_of_P_0() { return &___P_0; }
	inline void set_P_0(ByteU5BU5D_t3908495726* value)
	{
		___P_0 = value;
		Il2CppCodeGenWriteBarrier((&___P_0), value);
	}

	inline static int32_t get_offset_of_Q_1() { return static_cast<int32_t>(offsetof(RSAParameters_t1246889679, ___Q_1)); }
	inline ByteU5BU5D_t3908495726* get_Q_1() const { return ___Q_1; }
	inline ByteU5BU5D_t3908495726** get_address_of_Q_1() { return &___Q_1; }
	inline void set_Q_1(ByteU5BU5D_t3908495726* value)
	{
		___Q_1 = value;
		Il2CppCodeGenWriteBarrier((&___Q_1), value);
	}

	inline static int32_t get_offset_of_D_2() { return static_cast<int32_t>(offsetof(RSAParameters_t1246889679, ___D_2)); }
	inline ByteU5BU5D_t3908495726* get_D_2() const { return ___D_2; }
	inline ByteU5BU5D_t3908495726** get_address_of_D_2() { return &___D_2; }
	inline void set_D_2(ByteU5BU5D_t3908495726* value)
	{
		___D_2 = value;
		Il2CppCodeGenWriteBarrier((&___D_2), value);
	}

	inline static int32_t get_offset_of_DP_3() { return static_cast<int32_t>(offsetof(RSAParameters_t1246889679, ___DP_3)); }
	inline ByteU5BU5D_t3908495726* get_DP_3() const { return ___DP_3; }
	inline ByteU5BU5D_t3908495726** get_address_of_DP_3() { return &___DP_3; }
	inline void set_DP_3(ByteU5BU5D_t3908495726* value)
	{
		___DP_3 = value;
		Il2CppCodeGenWriteBarrier((&___DP_3), value);
	}

	inline static int32_t get_offset_of_DQ_4() { return static_cast<int32_t>(offsetof(RSAParameters_t1246889679, ___DQ_4)); }
	inline ByteU5BU5D_t3908495726* get_DQ_4() const { return ___DQ_4; }
	inline ByteU5BU5D_t3908495726** get_address_of_DQ_4() { return &___DQ_4; }
	inline void set_DQ_4(ByteU5BU5D_t3908495726* value)
	{
		___DQ_4 = value;
		Il2CppCodeGenWriteBarrier((&___DQ_4), value);
	}

	inline static int32_t get_offset_of_InverseQ_5() { return static_cast<int32_t>(offsetof(RSAParameters_t1246889679, ___InverseQ_5)); }
	inline ByteU5BU5D_t3908495726* get_InverseQ_5() const { return ___InverseQ_5; }
	inline ByteU5BU5D_t3908495726** get_address_of_InverseQ_5() { return &___InverseQ_5; }
	inline void set_InverseQ_5(ByteU5BU5D_t3908495726* value)
	{
		___InverseQ_5 = value;
		Il2CppCodeGenWriteBarrier((&___InverseQ_5), value);
	}

	inline static int32_t get_offset_of_Modulus_6() { return static_cast<int32_t>(offsetof(RSAParameters_t1246889679, ___Modulus_6)); }
	inline ByteU5BU5D_t3908495726* get_Modulus_6() const { return ___Modulus_6; }
	inline ByteU5BU5D_t3908495726** get_address_of_Modulus_6() { return &___Modulus_6; }
	inline void set_Modulus_6(ByteU5BU5D_t3908495726* value)
	{
		___Modulus_6 = value;
		Il2CppCodeGenWriteBarrier((&___Modulus_6), value);
	}

	inline static int32_t get_offset_of_Exponent_7() { return static_cast<int32_t>(offsetof(RSAParameters_t1246889679, ___Exponent_7)); }
	inline ByteU5BU5D_t3908495726* get_Exponent_7() const { return ___Exponent_7; }
	inline ByteU5BU5D_t3908495726** get_address_of_Exponent_7() { return &___Exponent_7; }
	inline void set_Exponent_7(ByteU5BU5D_t3908495726* value)
	{
		___Exponent_7 = value;
		Il2CppCodeGenWriteBarrier((&___Exponent_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t1246889679_marshaled_pinvoke
{
	uint8_t* ___P_0;
	uint8_t* ___Q_1;
	uint8_t* ___D_2;
	uint8_t* ___DP_3;
	uint8_t* ___DQ_4;
	uint8_t* ___InverseQ_5;
	uint8_t* ___Modulus_6;
	uint8_t* ___Exponent_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t1246889679_marshaled_com
{
	uint8_t* ___P_0;
	uint8_t* ___Q_1;
	uint8_t* ___D_2;
	uint8_t* ___DP_3;
	uint8_t* ___DQ_4;
	uint8_t* ___InverseQ_5;
	uint8_t* ___Modulus_6;
	uint8_t* ___Exponent_7;
};
#endif // RSAPARAMETERS_T1246889679_H
#ifndef ENCODERREPLACEMENTFALLBACK_T453060416_H
#define ENCODERREPLACEMENTFALLBACK_T453060416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderReplacementFallback
struct  EncoderReplacementFallback_t453060416  : public EncoderFallback_t142657651
{
public:
	// System.String System.Text.EncoderReplacementFallback::replacement
	String_t* ___replacement_3;

public:
	inline static int32_t get_offset_of_replacement_3() { return static_cast<int32_t>(offsetof(EncoderReplacementFallback_t453060416, ___replacement_3)); }
	inline String_t* get_replacement_3() const { return ___replacement_3; }
	inline String_t** get_address_of_replacement_3() { return &___replacement_3; }
	inline void set_replacement_3(String_t* value)
	{
		___replacement_3 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERREPLACEMENTFALLBACK_T453060416_H
#ifndef SECURESTRING_T3432835139_H
#define SECURESTRING_T3432835139_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecureString
struct  SecureString_t3432835139  : public CriticalFinalizerObject_t1888336031
{
public:
	// System.Int32 System.Security.SecureString::length
	int32_t ___length_0;
	// System.Boolean System.Security.SecureString::disposed
	bool ___disposed_1;
	// System.Byte[] System.Security.SecureString::data
	ByteU5BU5D_t3908495726* ___data_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(SecureString_t3432835139, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_disposed_1() { return static_cast<int32_t>(offsetof(SecureString_t3432835139, ___disposed_1)); }
	inline bool get_disposed_1() const { return ___disposed_1; }
	inline bool* get_address_of_disposed_1() { return &___disposed_1; }
	inline void set_disposed_1(bool value)
	{
		___disposed_1 = value;
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(SecureString_t3432835139, ___data_2)); }
	inline ByteU5BU5D_t3908495726* get_data_2() const { return ___data_2; }
	inline ByteU5BU5D_t3908495726** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(ByteU5BU5D_t3908495726* value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((&___data_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURESTRING_T3432835139_H
#ifndef RSAOAEPKEYEXCHANGEFORMATTER_T2893556967_H
#define RSAOAEPKEYEXCHANGEFORMATTER_T2893556967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAOAEPKeyExchangeFormatter
struct  RSAOAEPKeyExchangeFormatter_t2893556967  : public AsymmetricKeyExchangeFormatter_t2103503866
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::rsa
	RSA_t3051495647 * ___rsa_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::random
	RandomNumberGenerator_t3050071163 * ___random_1;
	// System.Byte[] System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::param
	ByteU5BU5D_t3908495726* ___param_2;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAOAEPKeyExchangeFormatter_t2893556967, ___rsa_0)); }
	inline RSA_t3051495647 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t3051495647 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t3051495647 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_random_1() { return static_cast<int32_t>(offsetof(RSAOAEPKeyExchangeFormatter_t2893556967, ___random_1)); }
	inline RandomNumberGenerator_t3050071163 * get_random_1() const { return ___random_1; }
	inline RandomNumberGenerator_t3050071163 ** get_address_of_random_1() { return &___random_1; }
	inline void set_random_1(RandomNumberGenerator_t3050071163 * value)
	{
		___random_1 = value;
		Il2CppCodeGenWriteBarrier((&___random_1), value);
	}

	inline static int32_t get_offset_of_param_2() { return static_cast<int32_t>(offsetof(RSAOAEPKeyExchangeFormatter_t2893556967, ___param_2)); }
	inline ByteU5BU5D_t3908495726* get_param_2() const { return ___param_2; }
	inline ByteU5BU5D_t3908495726** get_address_of_param_2() { return &___param_2; }
	inline void set_param_2(ByteU5BU5D_t3908495726* value)
	{
		___param_2 = value;
		Il2CppCodeGenWriteBarrier((&___param_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAOAEPKEYEXCHANGEFORMATTER_T2893556967_H
#ifndef RSAPKCS1KEYEXCHANGEDEFORMATTER_T3212421173_H
#define RSAPKCS1KEYEXCHANGEDEFORMATTER_T3212421173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter
struct  RSAPKCS1KeyExchangeDeformatter_t3212421173  : public AsymmetricKeyExchangeDeformatter_t4189292640
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::rsa
	RSA_t3051495647 * ___rsa_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::random
	RandomNumberGenerator_t3050071163 * ___random_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeDeformatter_t3212421173, ___rsa_0)); }
	inline RSA_t3051495647 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t3051495647 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t3051495647 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_random_1() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeDeformatter_t3212421173, ___random_1)); }
	inline RandomNumberGenerator_t3050071163 * get_random_1() const { return ___random_1; }
	inline RandomNumberGenerator_t3050071163 ** get_address_of_random_1() { return &___random_1; }
	inline void set_random_1(RandomNumberGenerator_t3050071163 * value)
	{
		___random_1 = value;
		Il2CppCodeGenWriteBarrier((&___random_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1KEYEXCHANGEDEFORMATTER_T3212421173_H
#ifndef ENCODEREXCEPTIONFALLBACKBUFFER_T3764308000_H
#define ENCODEREXCEPTIONFALLBACKBUFFER_T3764308000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderExceptionFallbackBuffer
struct  EncoderExceptionFallbackBuffer_t3764308000  : public EncoderFallbackBuffer_t1622454757
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODEREXCEPTIONFALLBACKBUFFER_T3764308000_H
#ifndef RFC2898DERIVEBYTES_T3114689022_H
#define RFC2898DERIVEBYTES_T3114689022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Rfc2898DeriveBytes
struct  Rfc2898DeriveBytes_t3114689022  : public DeriveBytes_t2403062557
{
public:
	// System.Int32 System.Security.Cryptography.Rfc2898DeriveBytes::_iteration
	int32_t ____iteration_1;
	// System.Byte[] System.Security.Cryptography.Rfc2898DeriveBytes::_salt
	ByteU5BU5D_t3908495726* ____salt_2;
	// System.Security.Cryptography.HMACSHA1 System.Security.Cryptography.Rfc2898DeriveBytes::_hmac
	HMACSHA1_t3430964706 * ____hmac_3;
	// System.Byte[] System.Security.Cryptography.Rfc2898DeriveBytes::_buffer
	ByteU5BU5D_t3908495726* ____buffer_4;
	// System.Int32 System.Security.Cryptography.Rfc2898DeriveBytes::_pos
	int32_t ____pos_5;
	// System.Int32 System.Security.Cryptography.Rfc2898DeriveBytes::_f
	int32_t ____f_6;

public:
	inline static int32_t get_offset_of__iteration_1() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t3114689022, ____iteration_1)); }
	inline int32_t get__iteration_1() const { return ____iteration_1; }
	inline int32_t* get_address_of__iteration_1() { return &____iteration_1; }
	inline void set__iteration_1(int32_t value)
	{
		____iteration_1 = value;
	}

	inline static int32_t get_offset_of__salt_2() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t3114689022, ____salt_2)); }
	inline ByteU5BU5D_t3908495726* get__salt_2() const { return ____salt_2; }
	inline ByteU5BU5D_t3908495726** get_address_of__salt_2() { return &____salt_2; }
	inline void set__salt_2(ByteU5BU5D_t3908495726* value)
	{
		____salt_2 = value;
		Il2CppCodeGenWriteBarrier((&____salt_2), value);
	}

	inline static int32_t get_offset_of__hmac_3() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t3114689022, ____hmac_3)); }
	inline HMACSHA1_t3430964706 * get__hmac_3() const { return ____hmac_3; }
	inline HMACSHA1_t3430964706 ** get_address_of__hmac_3() { return &____hmac_3; }
	inline void set__hmac_3(HMACSHA1_t3430964706 * value)
	{
		____hmac_3 = value;
		Il2CppCodeGenWriteBarrier((&____hmac_3), value);
	}

	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t3114689022, ____buffer_4)); }
	inline ByteU5BU5D_t3908495726* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_t3908495726** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_t3908495726* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((&____buffer_4), value);
	}

	inline static int32_t get_offset_of__pos_5() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t3114689022, ____pos_5)); }
	inline int32_t get__pos_5() const { return ____pos_5; }
	inline int32_t* get_address_of__pos_5() { return &____pos_5; }
	inline void set__pos_5(int32_t value)
	{
		____pos_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t3114689022, ____f_6)); }
	inline int32_t get__f_6() const { return ____f_6; }
	inline int32_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(int32_t value)
	{
		____f_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RFC2898DERIVEBYTES_T3114689022_H
#ifndef ENCODEREXCEPTIONFALLBACK_T2624432459_H
#define ENCODEREXCEPTIONFALLBACK_T2624432459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderExceptionFallback
struct  EncoderExceptionFallback_t2624432459  : public EncoderFallback_t142657651
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODEREXCEPTIONFALLBACK_T2624432459_H
#ifndef DECODERREPLACEMENTFALLBACKBUFFER_T1669699637_H
#define DECODERREPLACEMENTFALLBACKBUFFER_T1669699637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderReplacementFallbackBuffer
struct  DecoderReplacementFallbackBuffer_t1669699637  : public DecoderFallbackBuffer_t1564444004
{
public:
	// System.Boolean System.Text.DecoderReplacementFallbackBuffer::fallback_assigned
	bool ___fallback_assigned_0;
	// System.Int32 System.Text.DecoderReplacementFallbackBuffer::current
	int32_t ___current_1;
	// System.String System.Text.DecoderReplacementFallbackBuffer::replacement
	String_t* ___replacement_2;

public:
	inline static int32_t get_offset_of_fallback_assigned_0() { return static_cast<int32_t>(offsetof(DecoderReplacementFallbackBuffer_t1669699637, ___fallback_assigned_0)); }
	inline bool get_fallback_assigned_0() const { return ___fallback_assigned_0; }
	inline bool* get_address_of_fallback_assigned_0() { return &___fallback_assigned_0; }
	inline void set_fallback_assigned_0(bool value)
	{
		___fallback_assigned_0 = value;
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(DecoderReplacementFallbackBuffer_t1669699637, ___current_1)); }
	inline int32_t get_current_1() const { return ___current_1; }
	inline int32_t* get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(int32_t value)
	{
		___current_1 = value;
	}

	inline static int32_t get_offset_of_replacement_2() { return static_cast<int32_t>(offsetof(DecoderReplacementFallbackBuffer_t1669699637, ___replacement_2)); }
	inline String_t* get_replacement_2() const { return ___replacement_2; }
	inline String_t** get_address_of_replacement_2() { return &___replacement_2; }
	inline void set_replacement_2(String_t* value)
	{
		___replacement_2 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERREPLACEMENTFALLBACKBUFFER_T1669699637_H
#ifndef DECODERREPLACEMENTFALLBACK_T3186586878_H
#define DECODERREPLACEMENTFALLBACK_T3186586878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderReplacementFallback
struct  DecoderReplacementFallback_t3186586878  : public DecoderFallback_t906753351
{
public:
	// System.String System.Text.DecoderReplacementFallback::replacement
	String_t* ___replacement_3;

public:
	inline static int32_t get_offset_of_replacement_3() { return static_cast<int32_t>(offsetof(DecoderReplacementFallback_t3186586878, ___replacement_3)); }
	inline String_t* get_replacement_3() const { return ___replacement_3; }
	inline String_t** get_address_of_replacement_3() { return &___replacement_3; }
	inline void set_replacement_3(String_t* value)
	{
		___replacement_3 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERREPLACEMENTFALLBACK_T3186586878_H
#ifndef SECURITYFRAME_T2338941729_H
#define SECURITYFRAME_T2338941729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityFrame
struct  SecurityFrame_t2338941729 
{
public:
	// System.AppDomain System.Security.SecurityFrame::_domain
	AppDomain_t1283380302 * ____domain_0;
	// System.Reflection.MethodInfo System.Security.SecurityFrame::_method
	MethodInfo_t * ____method_1;
	// System.Security.PermissionSet System.Security.SecurityFrame::_assert
	PermissionSet_t1921444768 * ____assert_2;
	// System.Security.PermissionSet System.Security.SecurityFrame::_deny
	PermissionSet_t1921444768 * ____deny_3;
	// System.Security.PermissionSet System.Security.SecurityFrame::_permitonly
	PermissionSet_t1921444768 * ____permitonly_4;

public:
	inline static int32_t get_offset_of__domain_0() { return static_cast<int32_t>(offsetof(SecurityFrame_t2338941729, ____domain_0)); }
	inline AppDomain_t1283380302 * get__domain_0() const { return ____domain_0; }
	inline AppDomain_t1283380302 ** get_address_of__domain_0() { return &____domain_0; }
	inline void set__domain_0(AppDomain_t1283380302 * value)
	{
		____domain_0 = value;
		Il2CppCodeGenWriteBarrier((&____domain_0), value);
	}

	inline static int32_t get_offset_of__method_1() { return static_cast<int32_t>(offsetof(SecurityFrame_t2338941729, ____method_1)); }
	inline MethodInfo_t * get__method_1() const { return ____method_1; }
	inline MethodInfo_t ** get_address_of__method_1() { return &____method_1; }
	inline void set__method_1(MethodInfo_t * value)
	{
		____method_1 = value;
		Il2CppCodeGenWriteBarrier((&____method_1), value);
	}

	inline static int32_t get_offset_of__assert_2() { return static_cast<int32_t>(offsetof(SecurityFrame_t2338941729, ____assert_2)); }
	inline PermissionSet_t1921444768 * get__assert_2() const { return ____assert_2; }
	inline PermissionSet_t1921444768 ** get_address_of__assert_2() { return &____assert_2; }
	inline void set__assert_2(PermissionSet_t1921444768 * value)
	{
		____assert_2 = value;
		Il2CppCodeGenWriteBarrier((&____assert_2), value);
	}

	inline static int32_t get_offset_of__deny_3() { return static_cast<int32_t>(offsetof(SecurityFrame_t2338941729, ____deny_3)); }
	inline PermissionSet_t1921444768 * get__deny_3() const { return ____deny_3; }
	inline PermissionSet_t1921444768 ** get_address_of__deny_3() { return &____deny_3; }
	inline void set__deny_3(PermissionSet_t1921444768 * value)
	{
		____deny_3 = value;
		Il2CppCodeGenWriteBarrier((&____deny_3), value);
	}

	inline static int32_t get_offset_of__permitonly_4() { return static_cast<int32_t>(offsetof(SecurityFrame_t2338941729, ____permitonly_4)); }
	inline PermissionSet_t1921444768 * get__permitonly_4() const { return ____permitonly_4; }
	inline PermissionSet_t1921444768 ** get_address_of__permitonly_4() { return &____permitonly_4; }
	inline void set__permitonly_4(PermissionSet_t1921444768 * value)
	{
		____permitonly_4 = value;
		Il2CppCodeGenWriteBarrier((&____permitonly_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.SecurityFrame
struct SecurityFrame_t2338941729_marshaled_pinvoke
{
	AppDomain_t1283380302 * ____domain_0;
	MethodInfo_t * ____method_1;
	PermissionSet_t1921444768 * ____assert_2;
	PermissionSet_t1921444768 * ____deny_3;
	PermissionSet_t1921444768 * ____permitonly_4;
};
// Native definition for COM marshalling of System.Security.SecurityFrame
struct SecurityFrame_t2338941729_marshaled_com
{
	AppDomain_t1283380302 * ____domain_0;
	MethodInfo_t * ____method_1;
	PermissionSet_t1921444768 * ____assert_2;
	PermissionSet_t1921444768 * ____deny_3;
	PermissionSet_t1921444768 * ____permitonly_4;
};
#endif // SECURITYFRAME_T2338941729_H
#ifndef SHA384_T784451815_H
#define SHA384_T784451815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA384
struct  SHA384_t784451815  : public HashAlgorithm_t2744987723
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA384_T784451815_H
#ifndef SECURITYSAFECRITICALATTRIBUTE_T470887066_H
#define SECURITYSAFECRITICALATTRIBUTE_T470887066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecuritySafeCriticalAttribute
struct  SecuritySafeCriticalAttribute_t470887066  : public Attribute_t942395732
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYSAFECRITICALATTRIBUTE_T470887066_H
#ifndef SUPPRESSUNMANAGEDCODESECURITYATTRIBUTE_T2700062645_H
#define SUPPRESSUNMANAGEDCODESECURITYATTRIBUTE_T2700062645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SuppressUnmanagedCodeSecurityAttribute
struct  SuppressUnmanagedCodeSecurityAttribute_t2700062645  : public Attribute_t942395732
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUPPRESSUNMANAGEDCODESECURITYATTRIBUTE_T2700062645_H
#ifndef UNVERIFIABLECODEATTRIBUTE_T1329527428_H
#define UNVERIFIABLECODEATTRIBUTE_T1329527428_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.UnverifiableCodeAttribute
struct  UnverifiableCodeAttribute_t1329527428  : public Attribute_t942395732
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNVERIFIABLECODEATTRIBUTE_T1329527428_H
#ifndef ASCIIENCODING_T2173459719_H
#define ASCIIENCODING_T2173459719_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.ASCIIEncoding
struct  ASCIIEncoding_t2173459719  : public Encoding_t3698775274
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASCIIENCODING_T2173459719_H
#ifndef RSAPKCS1SIGNATUREFORMATTER_T2841163594_H
#define RSAPKCS1SIGNATUREFORMATTER_T2841163594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct  RSAPKCS1SignatureFormatter_t2841163594  : public AsymmetricSignatureFormatter_t2814679764
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureFormatter::rsa
	RSA_t3051495647 * ___rsa_0;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.RSAPKCS1SignatureFormatter::hash
	HashAlgorithm_t2744987723 * ___hash_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureFormatter_t2841163594, ___rsa_0)); }
	inline RSA_t3051495647 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t3051495647 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t3051495647 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_hash_1() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureFormatter_t2841163594, ___hash_1)); }
	inline HashAlgorithm_t2744987723 * get_hash_1() const { return ___hash_1; }
	inline HashAlgorithm_t2744987723 ** get_address_of_hash_1() { return &___hash_1; }
	inline void set_hash_1(HashAlgorithm_t2744987723 * value)
	{
		___hash_1 = value;
		Il2CppCodeGenWriteBarrier((&___hash_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SIGNATUREFORMATTER_T2841163594_H
#ifndef DECODEREXCEPTIONFALLBACK_T1531893410_H
#define DECODEREXCEPTIONFALLBACK_T1531893410_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderExceptionFallback
struct  DecoderExceptionFallback_t1531893410  : public DecoderFallback_t906753351
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODEREXCEPTIONFALLBACK_T1531893410_H
#ifndef DECODEREXCEPTIONFALLBACKBUFFER_T1343452076_H
#define DECODEREXCEPTIONFALLBACKBUFFER_T1343452076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderExceptionFallbackBuffer
struct  DecoderExceptionFallbackBuffer_t1343452076  : public DecoderFallbackBuffer_t1564444004
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODEREXCEPTIONFALLBACKBUFFER_T1343452076_H
#ifndef MD5_T1811150197_H
#define MD5_T1811150197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MD5
struct  MD5_t1811150197  : public HashAlgorithm_t2744987723
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD5_T1811150197_H
#ifndef ALLOWPARTIALLYTRUSTEDCALLERSATTRIBUTE_T3564882843_H
#define ALLOWPARTIALLYTRUSTEDCALLERSATTRIBUTE_T3564882843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.AllowPartiallyTrustedCallersAttribute
struct  AllowPartiallyTrustedCallersAttribute_t3564882843  : public Attribute_t942395732
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALLOWPARTIALLYTRUSTEDCALLERSATTRIBUTE_T3564882843_H
#ifndef ENUM_T1091807958_H
#define ENUM_T1091807958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t1091807958  : public ValueType_t650631508
{
public:

public:
};

struct Enum_t1091807958_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t4030813516* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t1091807958_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t4030813516* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t4030813516** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t4030813516* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t1091807958_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t1091807958_marshaled_com
{
};
#endif // ENUM_T1091807958_H
#ifndef RSAPKCS1SIGNATUREDEFORMATTER_T1183203666_H
#define RSAPKCS1SIGNATUREDEFORMATTER_T1183203666_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct  RSAPKCS1SignatureDeformatter_t1183203666  : public AsymmetricSignatureDeformatter_t804737386
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureDeformatter::rsa
	RSA_t3051495647 * ___rsa_0;
	// System.String System.Security.Cryptography.RSAPKCS1SignatureDeformatter::hashName
	String_t* ___hashName_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureDeformatter_t1183203666, ___rsa_0)); }
	inline RSA_t3051495647 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t3051495647 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t3051495647 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_hashName_1() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureDeformatter_t1183203666, ___hashName_1)); }
	inline String_t* get_hashName_1() const { return ___hashName_1; }
	inline String_t** get_address_of_hashName_1() { return &___hashName_1; }
	inline void set_hashName_1(String_t* value)
	{
		___hashName_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SIGNATUREDEFORMATTER_T1183203666_H
#ifndef SHA512_T2792950045_H
#define SHA512_T2792950045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA512
struct  SHA512_t2792950045  : public HashAlgorithm_t2744987723
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA512_T2792950045_H
#ifndef SYSTEMEXCEPTION_T4069120359_H
#define SYSTEMEXCEPTION_T4069120359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t4069120359  : public Exception_t4162944371
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T4069120359_H
#ifndef SHA256_T663893213_H
#define SHA256_T663893213_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA256
struct  SHA256_t663893213  : public HashAlgorithm_t2744987723
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA256_T663893213_H
#ifndef DSASIGNATUREDESCRIPTION_T1933514075_H
#define DSASIGNATUREDESCRIPTION_T1933514075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureDescription
struct  DSASignatureDescription_t1933514075  : public SignatureDescription_t476491654
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSASIGNATUREDESCRIPTION_T1933514075_H
#ifndef RSAPKCS1SHA1SIGNATUREDESCRIPTION_T1222668382_H
#define RSAPKCS1SHA1SIGNATUREDESCRIPTION_T1222668382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SHA1SignatureDescription
struct  RSAPKCS1SHA1SignatureDescription_t1222668382  : public SignatureDescription_t476491654
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SHA1SIGNATUREDESCRIPTION_T1222668382_H
#ifndef PKCS1MASKGENERATIONMETHOD_T1036350899_H
#define PKCS1MASKGENERATIONMETHOD_T1036350899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PKCS1MaskGenerationMethod
struct  PKCS1MaskGenerationMethod_t1036350899  : public MaskGenerationMethod_t664677518
{
public:
	// System.String System.Security.Cryptography.PKCS1MaskGenerationMethod::hashName
	String_t* ___hashName_0;

public:
	inline static int32_t get_offset_of_hashName_0() { return static_cast<int32_t>(offsetof(PKCS1MaskGenerationMethod_t1036350899, ___hashName_0)); }
	inline String_t* get_hashName_0() const { return ___hashName_0; }
	inline String_t** get_address_of_hashName_0() { return &___hashName_0; }
	inline void set_hashName_0(String_t* value)
	{
		___hashName_0 = value;
		Il2CppCodeGenWriteBarrier((&___hashName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS1MASKGENERATIONMETHOD_T1036350899_H
#ifndef SECURITYATTRIBUTE_T3978457158_H
#define SECURITYATTRIBUTE_T3978457158_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAttribute
struct  SecurityAttribute_t3978457158  : public Attribute_t942395732
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYATTRIBUTE_T3978457158_H
#ifndef RSAOAEPKEYEXCHANGEDEFORMATTER_T1329373329_H
#define RSAOAEPKEYEXCHANGEDEFORMATTER_T1329373329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAOAEPKeyExchangeDeformatter
struct  RSAOAEPKeyExchangeDeformatter_t1329373329  : public AsymmetricKeyExchangeDeformatter_t4189292640
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAOAEPKeyExchangeDeformatter::rsa
	RSA_t3051495647 * ___rsa_0;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAOAEPKeyExchangeDeformatter_t1329373329, ___rsa_0)); }
	inline RSA_t3051495647 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t3051495647 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t3051495647 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAOAEPKEYEXCHANGEDEFORMATTER_T1329373329_H
#ifndef PASSWORDDERIVEBYTES_T3857726445_H
#define PASSWORDDERIVEBYTES_T3857726445_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PasswordDeriveBytes
struct  PasswordDeriveBytes_t3857726445  : public DeriveBytes_t2403062557
{
public:
	// System.String System.Security.Cryptography.PasswordDeriveBytes::HashNameValue
	String_t* ___HashNameValue_0;
	// System.Byte[] System.Security.Cryptography.PasswordDeriveBytes::SaltValue
	ByteU5BU5D_t3908495726* ___SaltValue_1;
	// System.Int32 System.Security.Cryptography.PasswordDeriveBytes::IterationsValue
	int32_t ___IterationsValue_2;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.PasswordDeriveBytes::hash
	HashAlgorithm_t2744987723 * ___hash_3;
	// System.Int32 System.Security.Cryptography.PasswordDeriveBytes::state
	int32_t ___state_4;
	// System.Byte[] System.Security.Cryptography.PasswordDeriveBytes::password
	ByteU5BU5D_t3908495726* ___password_5;
	// System.Byte[] System.Security.Cryptography.PasswordDeriveBytes::initial
	ByteU5BU5D_t3908495726* ___initial_6;
	// System.Byte[] System.Security.Cryptography.PasswordDeriveBytes::output
	ByteU5BU5D_t3908495726* ___output_7;
	// System.Int32 System.Security.Cryptography.PasswordDeriveBytes::position
	int32_t ___position_8;
	// System.Int32 System.Security.Cryptography.PasswordDeriveBytes::hashnumber
	int32_t ___hashnumber_9;

public:
	inline static int32_t get_offset_of_HashNameValue_0() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t3857726445, ___HashNameValue_0)); }
	inline String_t* get_HashNameValue_0() const { return ___HashNameValue_0; }
	inline String_t** get_address_of_HashNameValue_0() { return &___HashNameValue_0; }
	inline void set_HashNameValue_0(String_t* value)
	{
		___HashNameValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___HashNameValue_0), value);
	}

	inline static int32_t get_offset_of_SaltValue_1() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t3857726445, ___SaltValue_1)); }
	inline ByteU5BU5D_t3908495726* get_SaltValue_1() const { return ___SaltValue_1; }
	inline ByteU5BU5D_t3908495726** get_address_of_SaltValue_1() { return &___SaltValue_1; }
	inline void set_SaltValue_1(ByteU5BU5D_t3908495726* value)
	{
		___SaltValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___SaltValue_1), value);
	}

	inline static int32_t get_offset_of_IterationsValue_2() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t3857726445, ___IterationsValue_2)); }
	inline int32_t get_IterationsValue_2() const { return ___IterationsValue_2; }
	inline int32_t* get_address_of_IterationsValue_2() { return &___IterationsValue_2; }
	inline void set_IterationsValue_2(int32_t value)
	{
		___IterationsValue_2 = value;
	}

	inline static int32_t get_offset_of_hash_3() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t3857726445, ___hash_3)); }
	inline HashAlgorithm_t2744987723 * get_hash_3() const { return ___hash_3; }
	inline HashAlgorithm_t2744987723 ** get_address_of_hash_3() { return &___hash_3; }
	inline void set_hash_3(HashAlgorithm_t2744987723 * value)
	{
		___hash_3 = value;
		Il2CppCodeGenWriteBarrier((&___hash_3), value);
	}

	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t3857726445, ___state_4)); }
	inline int32_t get_state_4() const { return ___state_4; }
	inline int32_t* get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(int32_t value)
	{
		___state_4 = value;
	}

	inline static int32_t get_offset_of_password_5() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t3857726445, ___password_5)); }
	inline ByteU5BU5D_t3908495726* get_password_5() const { return ___password_5; }
	inline ByteU5BU5D_t3908495726** get_address_of_password_5() { return &___password_5; }
	inline void set_password_5(ByteU5BU5D_t3908495726* value)
	{
		___password_5 = value;
		Il2CppCodeGenWriteBarrier((&___password_5), value);
	}

	inline static int32_t get_offset_of_initial_6() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t3857726445, ___initial_6)); }
	inline ByteU5BU5D_t3908495726* get_initial_6() const { return ___initial_6; }
	inline ByteU5BU5D_t3908495726** get_address_of_initial_6() { return &___initial_6; }
	inline void set_initial_6(ByteU5BU5D_t3908495726* value)
	{
		___initial_6 = value;
		Il2CppCodeGenWriteBarrier((&___initial_6), value);
	}

	inline static int32_t get_offset_of_output_7() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t3857726445, ___output_7)); }
	inline ByteU5BU5D_t3908495726* get_output_7() const { return ___output_7; }
	inline ByteU5BU5D_t3908495726** get_address_of_output_7() { return &___output_7; }
	inline void set_output_7(ByteU5BU5D_t3908495726* value)
	{
		___output_7 = value;
		Il2CppCodeGenWriteBarrier((&___output_7), value);
	}

	inline static int32_t get_offset_of_position_8() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t3857726445, ___position_8)); }
	inline int32_t get_position_8() const { return ___position_8; }
	inline int32_t* get_address_of_position_8() { return &___position_8; }
	inline void set_position_8(int32_t value)
	{
		___position_8 = value;
	}

	inline static int32_t get_offset_of_hashnumber_9() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t3857726445, ___hashnumber_9)); }
	inline int32_t get_hashnumber_9() const { return ___hashnumber_9; }
	inline int32_t* get_address_of_hashnumber_9() { return &___hashnumber_9; }
	inline void set_hashnumber_9(int32_t value)
	{
		___hashnumber_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PASSWORDDERIVEBYTES_T3857726445_H
#ifndef TRIPLEDESTRANSFORM_T699572222_H
#define TRIPLEDESTRANSFORM_T699572222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDESTransform
struct  TripleDESTransform_t699572222  : public SymmetricTransform_t2833215690
{
public:
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E1
	DESTransform_t3277069553 * ___E1_12;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D2
	DESTransform_t3277069553 * ___D2_13;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E3
	DESTransform_t3277069553 * ___E3_14;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D1
	DESTransform_t3277069553 * ___D1_15;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E2
	DESTransform_t3277069553 * ___E2_16;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D3
	DESTransform_t3277069553 * ___D3_17;

public:
	inline static int32_t get_offset_of_E1_12() { return static_cast<int32_t>(offsetof(TripleDESTransform_t699572222, ___E1_12)); }
	inline DESTransform_t3277069553 * get_E1_12() const { return ___E1_12; }
	inline DESTransform_t3277069553 ** get_address_of_E1_12() { return &___E1_12; }
	inline void set_E1_12(DESTransform_t3277069553 * value)
	{
		___E1_12 = value;
		Il2CppCodeGenWriteBarrier((&___E1_12), value);
	}

	inline static int32_t get_offset_of_D2_13() { return static_cast<int32_t>(offsetof(TripleDESTransform_t699572222, ___D2_13)); }
	inline DESTransform_t3277069553 * get_D2_13() const { return ___D2_13; }
	inline DESTransform_t3277069553 ** get_address_of_D2_13() { return &___D2_13; }
	inline void set_D2_13(DESTransform_t3277069553 * value)
	{
		___D2_13 = value;
		Il2CppCodeGenWriteBarrier((&___D2_13), value);
	}

	inline static int32_t get_offset_of_E3_14() { return static_cast<int32_t>(offsetof(TripleDESTransform_t699572222, ___E3_14)); }
	inline DESTransform_t3277069553 * get_E3_14() const { return ___E3_14; }
	inline DESTransform_t3277069553 ** get_address_of_E3_14() { return &___E3_14; }
	inline void set_E3_14(DESTransform_t3277069553 * value)
	{
		___E3_14 = value;
		Il2CppCodeGenWriteBarrier((&___E3_14), value);
	}

	inline static int32_t get_offset_of_D1_15() { return static_cast<int32_t>(offsetof(TripleDESTransform_t699572222, ___D1_15)); }
	inline DESTransform_t3277069553 * get_D1_15() const { return ___D1_15; }
	inline DESTransform_t3277069553 ** get_address_of_D1_15() { return &___D1_15; }
	inline void set_D1_15(DESTransform_t3277069553 * value)
	{
		___D1_15 = value;
		Il2CppCodeGenWriteBarrier((&___D1_15), value);
	}

	inline static int32_t get_offset_of_E2_16() { return static_cast<int32_t>(offsetof(TripleDESTransform_t699572222, ___E2_16)); }
	inline DESTransform_t3277069553 * get_E2_16() const { return ___E2_16; }
	inline DESTransform_t3277069553 ** get_address_of_E2_16() { return &___E2_16; }
	inline void set_E2_16(DESTransform_t3277069553 * value)
	{
		___E2_16 = value;
		Il2CppCodeGenWriteBarrier((&___E2_16), value);
	}

	inline static int32_t get_offset_of_D3_17() { return static_cast<int32_t>(offsetof(TripleDESTransform_t699572222, ___D3_17)); }
	inline DESTransform_t3277069553 * get_D3_17() const { return ___D3_17; }
	inline DESTransform_t3277069553 ** get_address_of_D3_17() { return &___D3_17; }
	inline void set_D3_17(DESTransform_t3277069553 * value)
	{
		___D3_17 = value;
		Il2CppCodeGenWriteBarrier((&___D3_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDESTRANSFORM_T699572222_H
#ifndef RIPEMD160_T3507486109_H
#define RIPEMD160_T3507486109_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RIPEMD160
struct  RIPEMD160_t3507486109  : public HashAlgorithm_t2744987723
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIPEMD160_T3507486109_H
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
#ifndef SHA1_T3170280660_H
#define SHA1_T3170280660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1
struct  SHA1_t3170280660  : public HashAlgorithm_t2744987723
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1_T3170280660_H
#ifndef RIJNDAELTRANSFORM_T2785594878_H
#define RIJNDAELTRANSFORM_T2785594878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RijndaelTransform
struct  RijndaelTransform_t2785594878  : public SymmetricTransform_t2833215690
{
public:
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::expandedKey
	UInt32U5BU5D_t2705142766* ___expandedKey_12;
	// System.Int32 System.Security.Cryptography.RijndaelTransform::Nb
	int32_t ___Nb_13;
	// System.Int32 System.Security.Cryptography.RijndaelTransform::Nk
	int32_t ___Nk_14;
	// System.Int32 System.Security.Cryptography.RijndaelTransform::Nr
	int32_t ___Nr_15;

public:
	inline static int32_t get_offset_of_expandedKey_12() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2785594878, ___expandedKey_12)); }
	inline UInt32U5BU5D_t2705142766* get_expandedKey_12() const { return ___expandedKey_12; }
	inline UInt32U5BU5D_t2705142766** get_address_of_expandedKey_12() { return &___expandedKey_12; }
	inline void set_expandedKey_12(UInt32U5BU5D_t2705142766* value)
	{
		___expandedKey_12 = value;
		Il2CppCodeGenWriteBarrier((&___expandedKey_12), value);
	}

	inline static int32_t get_offset_of_Nb_13() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2785594878, ___Nb_13)); }
	inline int32_t get_Nb_13() const { return ___Nb_13; }
	inline int32_t* get_address_of_Nb_13() { return &___Nb_13; }
	inline void set_Nb_13(int32_t value)
	{
		___Nb_13 = value;
	}

	inline static int32_t get_offset_of_Nk_14() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2785594878, ___Nk_14)); }
	inline int32_t get_Nk_14() const { return ___Nk_14; }
	inline int32_t* get_address_of_Nk_14() { return &___Nk_14; }
	inline void set_Nk_14(int32_t value)
	{
		___Nk_14 = value;
	}

	inline static int32_t get_offset_of_Nr_15() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2785594878, ___Nr_15)); }
	inline int32_t get_Nr_15() const { return ___Nr_15; }
	inline int32_t* get_address_of_Nr_15() { return &___Nr_15; }
	inline void set_Nr_15(int32_t value)
	{
		___Nr_15 = value;
	}
};

struct RijndaelTransform_t2785594878_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::Rcon
	UInt32U5BU5D_t2705142766* ___Rcon_16;
	// System.Byte[] System.Security.Cryptography.RijndaelTransform::SBox
	ByteU5BU5D_t3908495726* ___SBox_17;
	// System.Byte[] System.Security.Cryptography.RijndaelTransform::iSBox
	ByteU5BU5D_t3908495726* ___iSBox_18;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T0
	UInt32U5BU5D_t2705142766* ___T0_19;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T1
	UInt32U5BU5D_t2705142766* ___T1_20;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T2
	UInt32U5BU5D_t2705142766* ___T2_21;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T3
	UInt32U5BU5D_t2705142766* ___T3_22;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT0
	UInt32U5BU5D_t2705142766* ___iT0_23;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT1
	UInt32U5BU5D_t2705142766* ___iT1_24;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT2
	UInt32U5BU5D_t2705142766* ___iT2_25;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT3
	UInt32U5BU5D_t2705142766* ___iT3_26;

public:
	inline static int32_t get_offset_of_Rcon_16() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2785594878_StaticFields, ___Rcon_16)); }
	inline UInt32U5BU5D_t2705142766* get_Rcon_16() const { return ___Rcon_16; }
	inline UInt32U5BU5D_t2705142766** get_address_of_Rcon_16() { return &___Rcon_16; }
	inline void set_Rcon_16(UInt32U5BU5D_t2705142766* value)
	{
		___Rcon_16 = value;
		Il2CppCodeGenWriteBarrier((&___Rcon_16), value);
	}

	inline static int32_t get_offset_of_SBox_17() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2785594878_StaticFields, ___SBox_17)); }
	inline ByteU5BU5D_t3908495726* get_SBox_17() const { return ___SBox_17; }
	inline ByteU5BU5D_t3908495726** get_address_of_SBox_17() { return &___SBox_17; }
	inline void set_SBox_17(ByteU5BU5D_t3908495726* value)
	{
		___SBox_17 = value;
		Il2CppCodeGenWriteBarrier((&___SBox_17), value);
	}

	inline static int32_t get_offset_of_iSBox_18() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2785594878_StaticFields, ___iSBox_18)); }
	inline ByteU5BU5D_t3908495726* get_iSBox_18() const { return ___iSBox_18; }
	inline ByteU5BU5D_t3908495726** get_address_of_iSBox_18() { return &___iSBox_18; }
	inline void set_iSBox_18(ByteU5BU5D_t3908495726* value)
	{
		___iSBox_18 = value;
		Il2CppCodeGenWriteBarrier((&___iSBox_18), value);
	}

	inline static int32_t get_offset_of_T0_19() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2785594878_StaticFields, ___T0_19)); }
	inline UInt32U5BU5D_t2705142766* get_T0_19() const { return ___T0_19; }
	inline UInt32U5BU5D_t2705142766** get_address_of_T0_19() { return &___T0_19; }
	inline void set_T0_19(UInt32U5BU5D_t2705142766* value)
	{
		___T0_19 = value;
		Il2CppCodeGenWriteBarrier((&___T0_19), value);
	}

	inline static int32_t get_offset_of_T1_20() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2785594878_StaticFields, ___T1_20)); }
	inline UInt32U5BU5D_t2705142766* get_T1_20() const { return ___T1_20; }
	inline UInt32U5BU5D_t2705142766** get_address_of_T1_20() { return &___T1_20; }
	inline void set_T1_20(UInt32U5BU5D_t2705142766* value)
	{
		___T1_20 = value;
		Il2CppCodeGenWriteBarrier((&___T1_20), value);
	}

	inline static int32_t get_offset_of_T2_21() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2785594878_StaticFields, ___T2_21)); }
	inline UInt32U5BU5D_t2705142766* get_T2_21() const { return ___T2_21; }
	inline UInt32U5BU5D_t2705142766** get_address_of_T2_21() { return &___T2_21; }
	inline void set_T2_21(UInt32U5BU5D_t2705142766* value)
	{
		___T2_21 = value;
		Il2CppCodeGenWriteBarrier((&___T2_21), value);
	}

	inline static int32_t get_offset_of_T3_22() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2785594878_StaticFields, ___T3_22)); }
	inline UInt32U5BU5D_t2705142766* get_T3_22() const { return ___T3_22; }
	inline UInt32U5BU5D_t2705142766** get_address_of_T3_22() { return &___T3_22; }
	inline void set_T3_22(UInt32U5BU5D_t2705142766* value)
	{
		___T3_22 = value;
		Il2CppCodeGenWriteBarrier((&___T3_22), value);
	}

	inline static int32_t get_offset_of_iT0_23() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2785594878_StaticFields, ___iT0_23)); }
	inline UInt32U5BU5D_t2705142766* get_iT0_23() const { return ___iT0_23; }
	inline UInt32U5BU5D_t2705142766** get_address_of_iT0_23() { return &___iT0_23; }
	inline void set_iT0_23(UInt32U5BU5D_t2705142766* value)
	{
		___iT0_23 = value;
		Il2CppCodeGenWriteBarrier((&___iT0_23), value);
	}

	inline static int32_t get_offset_of_iT1_24() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2785594878_StaticFields, ___iT1_24)); }
	inline UInt32U5BU5D_t2705142766* get_iT1_24() const { return ___iT1_24; }
	inline UInt32U5BU5D_t2705142766** get_address_of_iT1_24() { return &___iT1_24; }
	inline void set_iT1_24(UInt32U5BU5D_t2705142766* value)
	{
		___iT1_24 = value;
		Il2CppCodeGenWriteBarrier((&___iT1_24), value);
	}

	inline static int32_t get_offset_of_iT2_25() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2785594878_StaticFields, ___iT2_25)); }
	inline UInt32U5BU5D_t2705142766* get_iT2_25() const { return ___iT2_25; }
	inline UInt32U5BU5D_t2705142766** get_address_of_iT2_25() { return &___iT2_25; }
	inline void set_iT2_25(UInt32U5BU5D_t2705142766* value)
	{
		___iT2_25 = value;
		Il2CppCodeGenWriteBarrier((&___iT2_25), value);
	}

	inline static int32_t get_offset_of_iT3_26() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2785594878_StaticFields, ___iT3_26)); }
	inline UInt32U5BU5D_t2705142766* get_iT3_26() const { return ___iT3_26; }
	inline UInt32U5BU5D_t2705142766** get_address_of_iT3_26() { return &___iT3_26; }
	inline void set_iT3_26(UInt32U5BU5D_t2705142766* value)
	{
		___iT3_26 = value;
		Il2CppCodeGenWriteBarrier((&___iT3_26), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAELTRANSFORM_T2785594878_H
#ifndef RSA_T3051495647_H
#define RSA_T3051495647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSA
struct  RSA_t3051495647  : public AsymmetricAlgorithm_t286948500
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSA_T3051495647_H
#ifndef RC2TRANSFORM_T2061273261_H
#define RC2TRANSFORM_T2061273261_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RC2Transform
struct  RC2Transform_t2061273261  : public SymmetricTransform_t2833215690
{
public:
	// System.UInt16 System.Security.Cryptography.RC2Transform::R0
	uint16_t ___R0_12;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R1
	uint16_t ___R1_13;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R2
	uint16_t ___R2_14;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R3
	uint16_t ___R3_15;
	// System.UInt16[] System.Security.Cryptography.RC2Transform::K
	UInt16U5BU5D_t3181703213* ___K_16;
	// System.Int32 System.Security.Cryptography.RC2Transform::j
	int32_t ___j_17;

public:
	inline static int32_t get_offset_of_R0_12() { return static_cast<int32_t>(offsetof(RC2Transform_t2061273261, ___R0_12)); }
	inline uint16_t get_R0_12() const { return ___R0_12; }
	inline uint16_t* get_address_of_R0_12() { return &___R0_12; }
	inline void set_R0_12(uint16_t value)
	{
		___R0_12 = value;
	}

	inline static int32_t get_offset_of_R1_13() { return static_cast<int32_t>(offsetof(RC2Transform_t2061273261, ___R1_13)); }
	inline uint16_t get_R1_13() const { return ___R1_13; }
	inline uint16_t* get_address_of_R1_13() { return &___R1_13; }
	inline void set_R1_13(uint16_t value)
	{
		___R1_13 = value;
	}

	inline static int32_t get_offset_of_R2_14() { return static_cast<int32_t>(offsetof(RC2Transform_t2061273261, ___R2_14)); }
	inline uint16_t get_R2_14() const { return ___R2_14; }
	inline uint16_t* get_address_of_R2_14() { return &___R2_14; }
	inline void set_R2_14(uint16_t value)
	{
		___R2_14 = value;
	}

	inline static int32_t get_offset_of_R3_15() { return static_cast<int32_t>(offsetof(RC2Transform_t2061273261, ___R3_15)); }
	inline uint16_t get_R3_15() const { return ___R3_15; }
	inline uint16_t* get_address_of_R3_15() { return &___R3_15; }
	inline void set_R3_15(uint16_t value)
	{
		___R3_15 = value;
	}

	inline static int32_t get_offset_of_K_16() { return static_cast<int32_t>(offsetof(RC2Transform_t2061273261, ___K_16)); }
	inline UInt16U5BU5D_t3181703213* get_K_16() const { return ___K_16; }
	inline UInt16U5BU5D_t3181703213** get_address_of_K_16() { return &___K_16; }
	inline void set_K_16(UInt16U5BU5D_t3181703213* value)
	{
		___K_16 = value;
		Il2CppCodeGenWriteBarrier((&___K_16), value);
	}

	inline static int32_t get_offset_of_j_17() { return static_cast<int32_t>(offsetof(RC2Transform_t2061273261, ___j_17)); }
	inline int32_t get_j_17() const { return ___j_17; }
	inline int32_t* get_address_of_j_17() { return &___j_17; }
	inline void set_j_17(int32_t value)
	{
		___j_17 = value;
	}
};

struct RC2Transform_t2061273261_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.RC2Transform::pitable
	ByteU5BU5D_t3908495726* ___pitable_18;

public:
	inline static int32_t get_offset_of_pitable_18() { return static_cast<int32_t>(offsetof(RC2Transform_t2061273261_StaticFields, ___pitable_18)); }
	inline ByteU5BU5D_t3908495726* get_pitable_18() const { return ___pitable_18; }
	inline ByteU5BU5D_t3908495726** get_address_of_pitable_18() { return &___pitable_18; }
	inline void set_pitable_18(ByteU5BU5D_t3908495726* value)
	{
		___pitable_18 = value;
		Il2CppCodeGenWriteBarrier((&___pitable_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC2TRANSFORM_T2061273261_H
#ifndef RSAPKCS1KEYEXCHANGEFORMATTER_T2899832898_H
#define RSAPKCS1KEYEXCHANGEFORMATTER_T2899832898_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct  RSAPKCS1KeyExchangeFormatter_t2899832898  : public AsymmetricKeyExchangeFormatter_t2103503866
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::rsa
	RSA_t3051495647 * ___rsa_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::random
	RandomNumberGenerator_t3050071163 * ___random_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeFormatter_t2899832898, ___rsa_0)); }
	inline RSA_t3051495647 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t3051495647 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t3051495647 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_random_1() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeFormatter_t2899832898, ___random_1)); }
	inline RandomNumberGenerator_t3050071163 * get_random_1() const { return ___random_1; }
	inline RandomNumberGenerator_t3050071163 ** get_address_of_random_1() { return &___random_1; }
	inline void set_random_1(RandomNumberGenerator_t3050071163 * value)
	{
		___random_1 = value;
		Il2CppCodeGenWriteBarrier((&___random_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1KEYEXCHANGEFORMATTER_T2899832898_H
#ifndef CIPHERMODE_T1515884806_H
#define CIPHERMODE_T1515884806_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t1515884806 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CipherMode_t1515884806, ___value___1)); }
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
#endif // CIPHERMODE_T1515884806_H
#ifndef RIPEMD160MANAGED_T3695820211_H
#define RIPEMD160MANAGED_T3695820211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RIPEMD160Managed
struct  RIPEMD160Managed_t3695820211  : public RIPEMD160_t3507486109
{
public:
	// System.Byte[] System.Security.Cryptography.RIPEMD160Managed::_ProcessingBuffer
	ByteU5BU5D_t3908495726* ____ProcessingBuffer_5;
	// System.UInt32[] System.Security.Cryptography.RIPEMD160Managed::_X
	UInt32U5BU5D_t2705142766* ____X_6;
	// System.UInt32[] System.Security.Cryptography.RIPEMD160Managed::_HashValue
	UInt32U5BU5D_t2705142766* ____HashValue_7;
	// System.UInt64 System.Security.Cryptography.RIPEMD160Managed::_Length
	uint64_t ____Length_8;
	// System.Int32 System.Security.Cryptography.RIPEMD160Managed::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_9;

public:
	inline static int32_t get_offset_of__ProcessingBuffer_5() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t3695820211, ____ProcessingBuffer_5)); }
	inline ByteU5BU5D_t3908495726* get__ProcessingBuffer_5() const { return ____ProcessingBuffer_5; }
	inline ByteU5BU5D_t3908495726** get_address_of__ProcessingBuffer_5() { return &____ProcessingBuffer_5; }
	inline void set__ProcessingBuffer_5(ByteU5BU5D_t3908495726* value)
	{
		____ProcessingBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_5), value);
	}

	inline static int32_t get_offset_of__X_6() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t3695820211, ____X_6)); }
	inline UInt32U5BU5D_t2705142766* get__X_6() const { return ____X_6; }
	inline UInt32U5BU5D_t2705142766** get_address_of__X_6() { return &____X_6; }
	inline void set__X_6(UInt32U5BU5D_t2705142766* value)
	{
		____X_6 = value;
		Il2CppCodeGenWriteBarrier((&____X_6), value);
	}

	inline static int32_t get_offset_of__HashValue_7() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t3695820211, ____HashValue_7)); }
	inline UInt32U5BU5D_t2705142766* get__HashValue_7() const { return ____HashValue_7; }
	inline UInt32U5BU5D_t2705142766** get_address_of__HashValue_7() { return &____HashValue_7; }
	inline void set__HashValue_7(UInt32U5BU5D_t2705142766* value)
	{
		____HashValue_7 = value;
		Il2CppCodeGenWriteBarrier((&____HashValue_7), value);
	}

	inline static int32_t get_offset_of__Length_8() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t3695820211, ____Length_8)); }
	inline uint64_t get__Length_8() const { return ____Length_8; }
	inline uint64_t* get_address_of__Length_8() { return &____Length_8; }
	inline void set__Length_8(uint64_t value)
	{
		____Length_8 = value;
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_9() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t3695820211, ____ProcessingBufferCount_9)); }
	inline int32_t get__ProcessingBufferCount_9() const { return ____ProcessingBufferCount_9; }
	inline int32_t* get_address_of__ProcessingBufferCount_9() { return &____ProcessingBufferCount_9; }
	inline void set__ProcessingBufferCount_9(int32_t value)
	{
		____ProcessingBufferCount_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIPEMD160MANAGED_T3695820211_H
#ifndef PADDINGMODE_T1135835018_H
#define PADDINGMODE_T1135835018_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t1135835018 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PaddingMode_t1135835018, ___value___1)); }
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
#endif // PADDINGMODE_T1135835018_H
#ifndef RNGCRYPTOSERVICEPROVIDER_T4140138660_H
#define RNGCRYPTOSERVICEPROVIDER_T4140138660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RNGCryptoServiceProvider
struct  RNGCryptoServiceProvider_t4140138660  : public RandomNumberGenerator_t3050071163
{
public:
	// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::_handle
	intptr_t ____handle_1;

public:
	inline static int32_t get_offset_of__handle_1() { return static_cast<int32_t>(offsetof(RNGCryptoServiceProvider_t4140138660, ____handle_1)); }
	inline intptr_t get__handle_1() const { return ____handle_1; }
	inline intptr_t* get_address_of__handle_1() { return &____handle_1; }
	inline void set__handle_1(intptr_t value)
	{
		____handle_1 = value;
	}
};

struct RNGCryptoServiceProvider_t4140138660_StaticFields
{
public:
	// System.Object System.Security.Cryptography.RNGCryptoServiceProvider::_lock
	RuntimeObject * ____lock_0;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(RNGCryptoServiceProvider_t4140138660_StaticFields, ____lock_0)); }
	inline RuntimeObject * get__lock_0() const { return ____lock_0; }
	inline RuntimeObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(RuntimeObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier((&____lock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RNGCRYPTOSERVICEPROVIDER_T4140138660_H
#ifndef RSACRYPTOSERVICEPROVIDER_T3752599214_H
#define RSACRYPTOSERVICEPROVIDER_T3752599214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSACryptoServiceProvider
struct  RSACryptoServiceProvider_t3752599214  : public RSA_t3051495647
{
public:
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.RSACryptoServiceProvider::store
	KeyPairPersistence_t366253665 * ___store_3;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persistKey
	bool ___persistKey_4;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persisted
	bool ___persisted_5;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_6;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::m_disposed
	bool ___m_disposed_7;
	// Mono.Security.Cryptography.RSAManaged System.Security.Cryptography.RSACryptoServiceProvider::rsa
	RSAManaged_t1291711896 * ___rsa_8;

public:
	inline static int32_t get_offset_of_store_3() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t3752599214, ___store_3)); }
	inline KeyPairPersistence_t366253665 * get_store_3() const { return ___store_3; }
	inline KeyPairPersistence_t366253665 ** get_address_of_store_3() { return &___store_3; }
	inline void set_store_3(KeyPairPersistence_t366253665 * value)
	{
		___store_3 = value;
		Il2CppCodeGenWriteBarrier((&___store_3), value);
	}

	inline static int32_t get_offset_of_persistKey_4() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t3752599214, ___persistKey_4)); }
	inline bool get_persistKey_4() const { return ___persistKey_4; }
	inline bool* get_address_of_persistKey_4() { return &___persistKey_4; }
	inline void set_persistKey_4(bool value)
	{
		___persistKey_4 = value;
	}

	inline static int32_t get_offset_of_persisted_5() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t3752599214, ___persisted_5)); }
	inline bool get_persisted_5() const { return ___persisted_5; }
	inline bool* get_address_of_persisted_5() { return &___persisted_5; }
	inline void set_persisted_5(bool value)
	{
		___persisted_5 = value;
	}

	inline static int32_t get_offset_of_privateKeyExportable_6() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t3752599214, ___privateKeyExportable_6)); }
	inline bool get_privateKeyExportable_6() const { return ___privateKeyExportable_6; }
	inline bool* get_address_of_privateKeyExportable_6() { return &___privateKeyExportable_6; }
	inline void set_privateKeyExportable_6(bool value)
	{
		___privateKeyExportable_6 = value;
	}

	inline static int32_t get_offset_of_m_disposed_7() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t3752599214, ___m_disposed_7)); }
	inline bool get_m_disposed_7() const { return ___m_disposed_7; }
	inline bool* get_address_of_m_disposed_7() { return &___m_disposed_7; }
	inline void set_m_disposed_7(bool value)
	{
		___m_disposed_7 = value;
	}

	inline static int32_t get_offset_of_rsa_8() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t3752599214, ___rsa_8)); }
	inline RSAManaged_t1291711896 * get_rsa_8() const { return ___rsa_8; }
	inline RSAManaged_t1291711896 ** get_address_of_rsa_8() { return &___rsa_8; }
	inline void set_rsa_8(RSAManaged_t1291711896 * value)
	{
		___rsa_8 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_8), value);
	}
};

struct RSACryptoServiceProvider_t3752599214_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::useMachineKeyStore
	bool ___useMachineKeyStore_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.RSACryptoServiceProvider::<>f__switch$map29
	Dictionary_2_t473942086 * ___U3CU3Ef__switchU24map29_10;

public:
	inline static int32_t get_offset_of_useMachineKeyStore_9() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t3752599214_StaticFields, ___useMachineKeyStore_9)); }
	inline bool get_useMachineKeyStore_9() const { return ___useMachineKeyStore_9; }
	inline bool* get_address_of_useMachineKeyStore_9() { return &___useMachineKeyStore_9; }
	inline void set_useMachineKeyStore_9(bool value)
	{
		___useMachineKeyStore_9 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map29_10() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t3752599214_StaticFields, ___U3CU3Ef__switchU24map29_10)); }
	inline Dictionary_2_t473942086 * get_U3CU3Ef__switchU24map29_10() const { return ___U3CU3Ef__switchU24map29_10; }
	inline Dictionary_2_t473942086 ** get_address_of_U3CU3Ef__switchU24map29_10() { return &___U3CU3Ef__switchU24map29_10; }
	inline void set_U3CU3Ef__switchU24map29_10(Dictionary_2_t473942086 * value)
	{
		___U3CU3Ef__switchU24map29_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map29_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSACRYPTOSERVICEPROVIDER_T3752599214_H
#ifndef SHA384MANAGED_T3766657621_H
#define SHA384MANAGED_T3766657621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA384Managed
struct  SHA384Managed_t3766657621  : public SHA384_t784451815
{
public:
	// System.Byte[] System.Security.Cryptography.SHA384Managed::xBuf
	ByteU5BU5D_t3908495726* ___xBuf_4;
	// System.Int32 System.Security.Cryptography.SHA384Managed::xBufOff
	int32_t ___xBufOff_5;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::byteCount1
	uint64_t ___byteCount1_6;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::byteCount2
	uint64_t ___byteCount2_7;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H1
	uint64_t ___H1_8;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H2
	uint64_t ___H2_9;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H3
	uint64_t ___H3_10;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H4
	uint64_t ___H4_11;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H5
	uint64_t ___H5_12;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H6
	uint64_t ___H6_13;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H7
	uint64_t ___H7_14;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H8
	uint64_t ___H8_15;
	// System.UInt64[] System.Security.Cryptography.SHA384Managed::W
	UInt64U5BU5D_t88273377* ___W_16;
	// System.Int32 System.Security.Cryptography.SHA384Managed::wOff
	int32_t ___wOff_17;

public:
	inline static int32_t get_offset_of_xBuf_4() { return static_cast<int32_t>(offsetof(SHA384Managed_t3766657621, ___xBuf_4)); }
	inline ByteU5BU5D_t3908495726* get_xBuf_4() const { return ___xBuf_4; }
	inline ByteU5BU5D_t3908495726** get_address_of_xBuf_4() { return &___xBuf_4; }
	inline void set_xBuf_4(ByteU5BU5D_t3908495726* value)
	{
		___xBuf_4 = value;
		Il2CppCodeGenWriteBarrier((&___xBuf_4), value);
	}

	inline static int32_t get_offset_of_xBufOff_5() { return static_cast<int32_t>(offsetof(SHA384Managed_t3766657621, ___xBufOff_5)); }
	inline int32_t get_xBufOff_5() const { return ___xBufOff_5; }
	inline int32_t* get_address_of_xBufOff_5() { return &___xBufOff_5; }
	inline void set_xBufOff_5(int32_t value)
	{
		___xBufOff_5 = value;
	}

	inline static int32_t get_offset_of_byteCount1_6() { return static_cast<int32_t>(offsetof(SHA384Managed_t3766657621, ___byteCount1_6)); }
	inline uint64_t get_byteCount1_6() const { return ___byteCount1_6; }
	inline uint64_t* get_address_of_byteCount1_6() { return &___byteCount1_6; }
	inline void set_byteCount1_6(uint64_t value)
	{
		___byteCount1_6 = value;
	}

	inline static int32_t get_offset_of_byteCount2_7() { return static_cast<int32_t>(offsetof(SHA384Managed_t3766657621, ___byteCount2_7)); }
	inline uint64_t get_byteCount2_7() const { return ___byteCount2_7; }
	inline uint64_t* get_address_of_byteCount2_7() { return &___byteCount2_7; }
	inline void set_byteCount2_7(uint64_t value)
	{
		___byteCount2_7 = value;
	}

	inline static int32_t get_offset_of_H1_8() { return static_cast<int32_t>(offsetof(SHA384Managed_t3766657621, ___H1_8)); }
	inline uint64_t get_H1_8() const { return ___H1_8; }
	inline uint64_t* get_address_of_H1_8() { return &___H1_8; }
	inline void set_H1_8(uint64_t value)
	{
		___H1_8 = value;
	}

	inline static int32_t get_offset_of_H2_9() { return static_cast<int32_t>(offsetof(SHA384Managed_t3766657621, ___H2_9)); }
	inline uint64_t get_H2_9() const { return ___H2_9; }
	inline uint64_t* get_address_of_H2_9() { return &___H2_9; }
	inline void set_H2_9(uint64_t value)
	{
		___H2_9 = value;
	}

	inline static int32_t get_offset_of_H3_10() { return static_cast<int32_t>(offsetof(SHA384Managed_t3766657621, ___H3_10)); }
	inline uint64_t get_H3_10() const { return ___H3_10; }
	inline uint64_t* get_address_of_H3_10() { return &___H3_10; }
	inline void set_H3_10(uint64_t value)
	{
		___H3_10 = value;
	}

	inline static int32_t get_offset_of_H4_11() { return static_cast<int32_t>(offsetof(SHA384Managed_t3766657621, ___H4_11)); }
	inline uint64_t get_H4_11() const { return ___H4_11; }
	inline uint64_t* get_address_of_H4_11() { return &___H4_11; }
	inline void set_H4_11(uint64_t value)
	{
		___H4_11 = value;
	}

	inline static int32_t get_offset_of_H5_12() { return static_cast<int32_t>(offsetof(SHA384Managed_t3766657621, ___H5_12)); }
	inline uint64_t get_H5_12() const { return ___H5_12; }
	inline uint64_t* get_address_of_H5_12() { return &___H5_12; }
	inline void set_H5_12(uint64_t value)
	{
		___H5_12 = value;
	}

	inline static int32_t get_offset_of_H6_13() { return static_cast<int32_t>(offsetof(SHA384Managed_t3766657621, ___H6_13)); }
	inline uint64_t get_H6_13() const { return ___H6_13; }
	inline uint64_t* get_address_of_H6_13() { return &___H6_13; }
	inline void set_H6_13(uint64_t value)
	{
		___H6_13 = value;
	}

	inline static int32_t get_offset_of_H7_14() { return static_cast<int32_t>(offsetof(SHA384Managed_t3766657621, ___H7_14)); }
	inline uint64_t get_H7_14() const { return ___H7_14; }
	inline uint64_t* get_address_of_H7_14() { return &___H7_14; }
	inline void set_H7_14(uint64_t value)
	{
		___H7_14 = value;
	}

	inline static int32_t get_offset_of_H8_15() { return static_cast<int32_t>(offsetof(SHA384Managed_t3766657621, ___H8_15)); }
	inline uint64_t get_H8_15() const { return ___H8_15; }
	inline uint64_t* get_address_of_H8_15() { return &___H8_15; }
	inline void set_H8_15(uint64_t value)
	{
		___H8_15 = value;
	}

	inline static int32_t get_offset_of_W_16() { return static_cast<int32_t>(offsetof(SHA384Managed_t3766657621, ___W_16)); }
	inline UInt64U5BU5D_t88273377* get_W_16() const { return ___W_16; }
	inline UInt64U5BU5D_t88273377** get_address_of_W_16() { return &___W_16; }
	inline void set_W_16(UInt64U5BU5D_t88273377* value)
	{
		___W_16 = value;
		Il2CppCodeGenWriteBarrier((&___W_16), value);
	}

	inline static int32_t get_offset_of_wOff_17() { return static_cast<int32_t>(offsetof(SHA384Managed_t3766657621, ___wOff_17)); }
	inline int32_t get_wOff_17() const { return ___wOff_17; }
	inline int32_t* get_address_of_wOff_17() { return &___wOff_17; }
	inline void set_wOff_17(int32_t value)
	{
		___wOff_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA384MANAGED_T3766657621_H
#ifndef SECURITYPERMISSIONFLAG_T152293252_H
#define SECURITYPERMISSIONFLAG_T152293252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermissionFlag
struct  SecurityPermissionFlag_t152293252 
{
public:
	// System.Int32 System.Security.Permissions.SecurityPermissionFlag::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityPermissionFlag_t152293252, ___value___1)); }
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
#endif // SECURITYPERMISSIONFLAG_T152293252_H
#ifndef SHA512MANAGED_T816335385_H
#define SHA512MANAGED_T816335385_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA512Managed
struct  SHA512Managed_t816335385  : public SHA512_t2792950045
{
public:
	// System.Byte[] System.Security.Cryptography.SHA512Managed::xBuf
	ByteU5BU5D_t3908495726* ___xBuf_4;
	// System.Int32 System.Security.Cryptography.SHA512Managed::xBufOff
	int32_t ___xBufOff_5;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::byteCount1
	uint64_t ___byteCount1_6;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::byteCount2
	uint64_t ___byteCount2_7;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H1
	uint64_t ___H1_8;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H2
	uint64_t ___H2_9;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H3
	uint64_t ___H3_10;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H4
	uint64_t ___H4_11;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H5
	uint64_t ___H5_12;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H6
	uint64_t ___H6_13;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H7
	uint64_t ___H7_14;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H8
	uint64_t ___H8_15;
	// System.UInt64[] System.Security.Cryptography.SHA512Managed::W
	UInt64U5BU5D_t88273377* ___W_16;
	// System.Int32 System.Security.Cryptography.SHA512Managed::wOff
	int32_t ___wOff_17;

public:
	inline static int32_t get_offset_of_xBuf_4() { return static_cast<int32_t>(offsetof(SHA512Managed_t816335385, ___xBuf_4)); }
	inline ByteU5BU5D_t3908495726* get_xBuf_4() const { return ___xBuf_4; }
	inline ByteU5BU5D_t3908495726** get_address_of_xBuf_4() { return &___xBuf_4; }
	inline void set_xBuf_4(ByteU5BU5D_t3908495726* value)
	{
		___xBuf_4 = value;
		Il2CppCodeGenWriteBarrier((&___xBuf_4), value);
	}

	inline static int32_t get_offset_of_xBufOff_5() { return static_cast<int32_t>(offsetof(SHA512Managed_t816335385, ___xBufOff_5)); }
	inline int32_t get_xBufOff_5() const { return ___xBufOff_5; }
	inline int32_t* get_address_of_xBufOff_5() { return &___xBufOff_5; }
	inline void set_xBufOff_5(int32_t value)
	{
		___xBufOff_5 = value;
	}

	inline static int32_t get_offset_of_byteCount1_6() { return static_cast<int32_t>(offsetof(SHA512Managed_t816335385, ___byteCount1_6)); }
	inline uint64_t get_byteCount1_6() const { return ___byteCount1_6; }
	inline uint64_t* get_address_of_byteCount1_6() { return &___byteCount1_6; }
	inline void set_byteCount1_6(uint64_t value)
	{
		___byteCount1_6 = value;
	}

	inline static int32_t get_offset_of_byteCount2_7() { return static_cast<int32_t>(offsetof(SHA512Managed_t816335385, ___byteCount2_7)); }
	inline uint64_t get_byteCount2_7() const { return ___byteCount2_7; }
	inline uint64_t* get_address_of_byteCount2_7() { return &___byteCount2_7; }
	inline void set_byteCount2_7(uint64_t value)
	{
		___byteCount2_7 = value;
	}

	inline static int32_t get_offset_of_H1_8() { return static_cast<int32_t>(offsetof(SHA512Managed_t816335385, ___H1_8)); }
	inline uint64_t get_H1_8() const { return ___H1_8; }
	inline uint64_t* get_address_of_H1_8() { return &___H1_8; }
	inline void set_H1_8(uint64_t value)
	{
		___H1_8 = value;
	}

	inline static int32_t get_offset_of_H2_9() { return static_cast<int32_t>(offsetof(SHA512Managed_t816335385, ___H2_9)); }
	inline uint64_t get_H2_9() const { return ___H2_9; }
	inline uint64_t* get_address_of_H2_9() { return &___H2_9; }
	inline void set_H2_9(uint64_t value)
	{
		___H2_9 = value;
	}

	inline static int32_t get_offset_of_H3_10() { return static_cast<int32_t>(offsetof(SHA512Managed_t816335385, ___H3_10)); }
	inline uint64_t get_H3_10() const { return ___H3_10; }
	inline uint64_t* get_address_of_H3_10() { return &___H3_10; }
	inline void set_H3_10(uint64_t value)
	{
		___H3_10 = value;
	}

	inline static int32_t get_offset_of_H4_11() { return static_cast<int32_t>(offsetof(SHA512Managed_t816335385, ___H4_11)); }
	inline uint64_t get_H4_11() const { return ___H4_11; }
	inline uint64_t* get_address_of_H4_11() { return &___H4_11; }
	inline void set_H4_11(uint64_t value)
	{
		___H4_11 = value;
	}

	inline static int32_t get_offset_of_H5_12() { return static_cast<int32_t>(offsetof(SHA512Managed_t816335385, ___H5_12)); }
	inline uint64_t get_H5_12() const { return ___H5_12; }
	inline uint64_t* get_address_of_H5_12() { return &___H5_12; }
	inline void set_H5_12(uint64_t value)
	{
		___H5_12 = value;
	}

	inline static int32_t get_offset_of_H6_13() { return static_cast<int32_t>(offsetof(SHA512Managed_t816335385, ___H6_13)); }
	inline uint64_t get_H6_13() const { return ___H6_13; }
	inline uint64_t* get_address_of_H6_13() { return &___H6_13; }
	inline void set_H6_13(uint64_t value)
	{
		___H6_13 = value;
	}

	inline static int32_t get_offset_of_H7_14() { return static_cast<int32_t>(offsetof(SHA512Managed_t816335385, ___H7_14)); }
	inline uint64_t get_H7_14() const { return ___H7_14; }
	inline uint64_t* get_address_of_H7_14() { return &___H7_14; }
	inline void set_H7_14(uint64_t value)
	{
		___H7_14 = value;
	}

	inline static int32_t get_offset_of_H8_15() { return static_cast<int32_t>(offsetof(SHA512Managed_t816335385, ___H8_15)); }
	inline uint64_t get_H8_15() const { return ___H8_15; }
	inline uint64_t* get_address_of_H8_15() { return &___H8_15; }
	inline void set_H8_15(uint64_t value)
	{
		___H8_15 = value;
	}

	inline static int32_t get_offset_of_W_16() { return static_cast<int32_t>(offsetof(SHA512Managed_t816335385, ___W_16)); }
	inline UInt64U5BU5D_t88273377* get_W_16() const { return ___W_16; }
	inline UInt64U5BU5D_t88273377** get_address_of_W_16() { return &___W_16; }
	inline void set_W_16(UInt64U5BU5D_t88273377* value)
	{
		___W_16 = value;
		Il2CppCodeGenWriteBarrier((&___W_16), value);
	}

	inline static int32_t get_offset_of_wOff_17() { return static_cast<int32_t>(offsetof(SHA512Managed_t816335385, ___wOff_17)); }
	inline int32_t get_wOff_17() const { return ___wOff_17; }
	inline int32_t* get_address_of_wOff_17() { return &___wOff_17; }
	inline void set_wOff_17(int32_t value)
	{
		___wOff_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA512MANAGED_T816335385_H
#ifndef SHA256MANAGED_T3956919877_H
#define SHA256MANAGED_T3956919877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA256Managed
struct  SHA256Managed_t3956919877  : public SHA256_t663893213
{
public:
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_H
	UInt32U5BU5D_t2705142766* ____H_6;
	// System.UInt64 System.Security.Cryptography.SHA256Managed::count
	uint64_t ___count_7;
	// System.Byte[] System.Security.Cryptography.SHA256Managed::_ProcessingBuffer
	ByteU5BU5D_t3908495726* ____ProcessingBuffer_8;
	// System.Int32 System.Security.Cryptography.SHA256Managed::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_9;
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::buff
	UInt32U5BU5D_t2705142766* ___buff_10;

public:
	inline static int32_t get_offset_of__H_6() { return static_cast<int32_t>(offsetof(SHA256Managed_t3956919877, ____H_6)); }
	inline UInt32U5BU5D_t2705142766* get__H_6() const { return ____H_6; }
	inline UInt32U5BU5D_t2705142766** get_address_of__H_6() { return &____H_6; }
	inline void set__H_6(UInt32U5BU5D_t2705142766* value)
	{
		____H_6 = value;
		Il2CppCodeGenWriteBarrier((&____H_6), value);
	}

	inline static int32_t get_offset_of_count_7() { return static_cast<int32_t>(offsetof(SHA256Managed_t3956919877, ___count_7)); }
	inline uint64_t get_count_7() const { return ___count_7; }
	inline uint64_t* get_address_of_count_7() { return &___count_7; }
	inline void set_count_7(uint64_t value)
	{
		___count_7 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_8() { return static_cast<int32_t>(offsetof(SHA256Managed_t3956919877, ____ProcessingBuffer_8)); }
	inline ByteU5BU5D_t3908495726* get__ProcessingBuffer_8() const { return ____ProcessingBuffer_8; }
	inline ByteU5BU5D_t3908495726** get_address_of__ProcessingBuffer_8() { return &____ProcessingBuffer_8; }
	inline void set__ProcessingBuffer_8(ByteU5BU5D_t3908495726* value)
	{
		____ProcessingBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_8), value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_9() { return static_cast<int32_t>(offsetof(SHA256Managed_t3956919877, ____ProcessingBufferCount_9)); }
	inline int32_t get__ProcessingBufferCount_9() const { return ____ProcessingBufferCount_9; }
	inline int32_t* get_address_of__ProcessingBufferCount_9() { return &____ProcessingBufferCount_9; }
	inline void set__ProcessingBufferCount_9(int32_t value)
	{
		____ProcessingBufferCount_9 = value;
	}

	inline static int32_t get_offset_of_buff_10() { return static_cast<int32_t>(offsetof(SHA256Managed_t3956919877, ___buff_10)); }
	inline UInt32U5BU5D_t2705142766* get_buff_10() const { return ___buff_10; }
	inline UInt32U5BU5D_t2705142766** get_address_of_buff_10() { return &___buff_10; }
	inline void set_buff_10(UInt32U5BU5D_t2705142766* value)
	{
		___buff_10 = value;
		Il2CppCodeGenWriteBarrier((&___buff_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA256MANAGED_T3956919877_H
#ifndef SHA1MANAGED_T1955832063_H
#define SHA1MANAGED_T1955832063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1Managed
struct  SHA1Managed_t1955832063  : public SHA1_t3170280660
{
public:
	// System.Security.Cryptography.SHA1Internal System.Security.Cryptography.SHA1Managed::sha
	SHA1Internal_t896793504 * ___sha_4;

public:
	inline static int32_t get_offset_of_sha_4() { return static_cast<int32_t>(offsetof(SHA1Managed_t1955832063, ___sha_4)); }
	inline SHA1Internal_t896793504 * get_sha_4() const { return ___sha_4; }
	inline SHA1Internal_t896793504 ** get_address_of_sha_4() { return &___sha_4; }
	inline void set_sha_4(SHA1Internal_t896793504 * value)
	{
		___sha_4 = value;
		Il2CppCodeGenWriteBarrier((&___sha_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1MANAGED_T1955832063_H
#ifndef CODEACCESSSECURITYATTRIBUTE_T1783179257_H
#define CODEACCESSSECURITYATTRIBUTE_T1783179257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.CodeAccessSecurityAttribute
struct  CodeAccessSecurityAttribute_t1783179257  : public SecurityAttribute_t3978457158
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEACCESSSECURITYATTRIBUTE_T1783179257_H
#ifndef SECURITYACTION_T863438359_H
#define SECURITYACTION_T863438359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAction
struct  SecurityAction_t863438359 
{
public:
	// System.Int32 System.Security.Permissions.SecurityAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityAction_t863438359, ___value___1)); }
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
#endif // SECURITYACTION_T863438359_H
#ifndef SHA1CRYPTOSERVICEPROVIDER_T3318406335_H
#define SHA1CRYPTOSERVICEPROVIDER_T3318406335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1CryptoServiceProvider
struct  SHA1CryptoServiceProvider_t3318406335  : public SHA1_t3170280660
{
public:
	// System.Security.Cryptography.SHA1Internal System.Security.Cryptography.SHA1CryptoServiceProvider::sha
	SHA1Internal_t896793504 * ___sha_4;

public:
	inline static int32_t get_offset_of_sha_4() { return static_cast<int32_t>(offsetof(SHA1CryptoServiceProvider_t3318406335, ___sha_4)); }
	inline SHA1Internal_t896793504 * get_sha_4() const { return ___sha_4; }
	inline SHA1Internal_t896793504 ** get_address_of_sha_4() { return &___sha_4; }
	inline void set_sha_4(SHA1Internal_t896793504 * value)
	{
		___sha_4 = value;
		Il2CppCodeGenWriteBarrier((&___sha_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1CRYPTOSERVICEPROVIDER_T3318406335_H
#ifndef ARGUMENTEXCEPTION_T2018282275_H
#define ARGUMENTEXCEPTION_T2018282275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t2018282275  : public SystemException_t4069120359
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t2018282275, ___param_name_12)); }
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
#endif // ARGUMENTEXCEPTION_T2018282275_H
#ifndef PRINCIPALPOLICY_T786977969_H
#define PRINCIPALPOLICY_T786977969_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.PrincipalPolicy
struct  PrincipalPolicy_t786977969 
{
public:
	// System.Int32 System.Security.Principal.PrincipalPolicy::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PrincipalPolicy_t786977969, ___value___1)); }
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
#endif // PRINCIPALPOLICY_T786977969_H
#ifndef WINDOWSACCOUNTTYPE_T600399389_H
#define WINDOWSACCOUNTTYPE_T600399389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.WindowsAccountType
struct  WindowsAccountType_t600399389 
{
public:
	// System.Int32 System.Security.Principal.WindowsAccountType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WindowsAccountType_t600399389, ___value___1)); }
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
#endif // WINDOWSACCOUNTTYPE_T600399389_H
#ifndef MD5CRYPTOSERVICEPROVIDER_T1615367136_H
#define MD5CRYPTOSERVICEPROVIDER_T1615367136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MD5CryptoServiceProvider
struct  MD5CryptoServiceProvider_t1615367136  : public MD5_t1811150197
{
public:
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::_H
	UInt32U5BU5D_t2705142766* ____H_6;
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::buff
	UInt32U5BU5D_t2705142766* ___buff_7;
	// System.UInt64 System.Security.Cryptography.MD5CryptoServiceProvider::count
	uint64_t ___count_8;
	// System.Byte[] System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBuffer
	ByteU5BU5D_t3908495726* ____ProcessingBuffer_9;
	// System.Int32 System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_10;

public:
	inline static int32_t get_offset_of__H_6() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t1615367136, ____H_6)); }
	inline UInt32U5BU5D_t2705142766* get__H_6() const { return ____H_6; }
	inline UInt32U5BU5D_t2705142766** get_address_of__H_6() { return &____H_6; }
	inline void set__H_6(UInt32U5BU5D_t2705142766* value)
	{
		____H_6 = value;
		Il2CppCodeGenWriteBarrier((&____H_6), value);
	}

	inline static int32_t get_offset_of_buff_7() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t1615367136, ___buff_7)); }
	inline UInt32U5BU5D_t2705142766* get_buff_7() const { return ___buff_7; }
	inline UInt32U5BU5D_t2705142766** get_address_of_buff_7() { return &___buff_7; }
	inline void set_buff_7(UInt32U5BU5D_t2705142766* value)
	{
		___buff_7 = value;
		Il2CppCodeGenWriteBarrier((&___buff_7), value);
	}

	inline static int32_t get_offset_of_count_8() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t1615367136, ___count_8)); }
	inline uint64_t get_count_8() const { return ___count_8; }
	inline uint64_t* get_address_of_count_8() { return &___count_8; }
	inline void set_count_8(uint64_t value)
	{
		___count_8 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_9() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t1615367136, ____ProcessingBuffer_9)); }
	inline ByteU5BU5D_t3908495726* get__ProcessingBuffer_9() const { return ____ProcessingBuffer_9; }
	inline ByteU5BU5D_t3908495726** get_address_of__ProcessingBuffer_9() { return &____ProcessingBuffer_9; }
	inline void set__ProcessingBuffer_9(ByteU5BU5D_t3908495726* value)
	{
		____ProcessingBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_9), value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_10() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t1615367136, ____ProcessingBufferCount_10)); }
	inline int32_t get__ProcessingBufferCount_10() const { return ____ProcessingBufferCount_10; }
	inline int32_t* get_address_of__ProcessingBufferCount_10() { return &____ProcessingBufferCount_10; }
	inline void set__ProcessingBufferCount_10(int32_t value)
	{
		____ProcessingBufferCount_10 = value;
	}
};

struct MD5CryptoServiceProvider_t1615367136_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::K
	UInt32U5BU5D_t2705142766* ___K_11;

public:
	inline static int32_t get_offset_of_K_11() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t1615367136_StaticFields, ___K_11)); }
	inline UInt32U5BU5D_t2705142766* get_K_11() const { return ___K_11; }
	inline UInt32U5BU5D_t2705142766** get_address_of_K_11() { return &___K_11; }
	inline void set_K_11(UInt32U5BU5D_t2705142766* value)
	{
		___K_11 = value;
		Il2CppCodeGenWriteBarrier((&___K_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD5CRYPTOSERVICEPROVIDER_T1615367136_H
#ifndef RUNTIMEDECLSECURITYENTRY_T3244854727_H
#define RUNTIMEDECLSECURITYENTRY_T3244854727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.RuntimeDeclSecurityEntry
struct  RuntimeDeclSecurityEntry_t3244854727 
{
public:
	// System.IntPtr System.Security.RuntimeDeclSecurityEntry::blob
	intptr_t ___blob_0;
	// System.Int32 System.Security.RuntimeDeclSecurityEntry::size
	int32_t ___size_1;
	// System.Int32 System.Security.RuntimeDeclSecurityEntry::index
	int32_t ___index_2;

public:
	inline static int32_t get_offset_of_blob_0() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityEntry_t3244854727, ___blob_0)); }
	inline intptr_t get_blob_0() const { return ___blob_0; }
	inline intptr_t* get_address_of_blob_0() { return &___blob_0; }
	inline void set_blob_0(intptr_t value)
	{
		___blob_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityEntry_t3244854727, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityEntry_t3244854727, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEDECLSECURITYENTRY_T3244854727_H
#ifndef SECURITYCONTEXT_T2429330350_H
#define SECURITYCONTEXT_T2429330350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityContext
struct  SecurityContext_t2429330350  : public RuntimeObject
{
public:
	// System.Boolean System.Security.SecurityContext::_capture
	bool ____capture_0;
	// System.IntPtr System.Security.SecurityContext::_winid
	intptr_t ____winid_1;
	// System.Threading.CompressedStack System.Security.SecurityContext::_stack
	CompressedStack_t3348785047 * ____stack_2;
	// System.Boolean System.Security.SecurityContext::_suppressFlowWindowsIdentity
	bool ____suppressFlowWindowsIdentity_3;
	// System.Boolean System.Security.SecurityContext::_suppressFlow
	bool ____suppressFlow_4;

public:
	inline static int32_t get_offset_of__capture_0() { return static_cast<int32_t>(offsetof(SecurityContext_t2429330350, ____capture_0)); }
	inline bool get__capture_0() const { return ____capture_0; }
	inline bool* get_address_of__capture_0() { return &____capture_0; }
	inline void set__capture_0(bool value)
	{
		____capture_0 = value;
	}

	inline static int32_t get_offset_of__winid_1() { return static_cast<int32_t>(offsetof(SecurityContext_t2429330350, ____winid_1)); }
	inline intptr_t get__winid_1() const { return ____winid_1; }
	inline intptr_t* get_address_of__winid_1() { return &____winid_1; }
	inline void set__winid_1(intptr_t value)
	{
		____winid_1 = value;
	}

	inline static int32_t get_offset_of__stack_2() { return static_cast<int32_t>(offsetof(SecurityContext_t2429330350, ____stack_2)); }
	inline CompressedStack_t3348785047 * get__stack_2() const { return ____stack_2; }
	inline CompressedStack_t3348785047 ** get_address_of__stack_2() { return &____stack_2; }
	inline void set__stack_2(CompressedStack_t3348785047 * value)
	{
		____stack_2 = value;
		Il2CppCodeGenWriteBarrier((&____stack_2), value);
	}

	inline static int32_t get_offset_of__suppressFlowWindowsIdentity_3() { return static_cast<int32_t>(offsetof(SecurityContext_t2429330350, ____suppressFlowWindowsIdentity_3)); }
	inline bool get__suppressFlowWindowsIdentity_3() const { return ____suppressFlowWindowsIdentity_3; }
	inline bool* get_address_of__suppressFlowWindowsIdentity_3() { return &____suppressFlowWindowsIdentity_3; }
	inline void set__suppressFlowWindowsIdentity_3(bool value)
	{
		____suppressFlowWindowsIdentity_3 = value;
	}

	inline static int32_t get_offset_of__suppressFlow_4() { return static_cast<int32_t>(offsetof(SecurityContext_t2429330350, ____suppressFlow_4)); }
	inline bool get__suppressFlow_4() const { return ____suppressFlow_4; }
	inline bool* get_address_of__suppressFlow_4() { return &____suppressFlow_4; }
	inline void set__suppressFlow_4(bool value)
	{
		____suppressFlow_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYCONTEXT_T2429330350_H
#ifndef SECURITYEXCEPTION_T3700843220_H
#define SECURITYEXCEPTION_T3700843220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityException
struct  SecurityException_t3700843220  : public SystemException_t4069120359
{
public:
	// System.String System.Security.SecurityException::permissionState
	String_t* ___permissionState_11;
	// System.Type System.Security.SecurityException::permissionType
	Type_t * ___permissionType_12;
	// System.String System.Security.SecurityException::_granted
	String_t* ____granted_13;
	// System.String System.Security.SecurityException::_refused
	String_t* ____refused_14;
	// System.Object System.Security.SecurityException::_demanded
	RuntimeObject * ____demanded_15;
	// System.Security.IPermission System.Security.SecurityException::_firstperm
	RuntimeObject* ____firstperm_16;
	// System.Reflection.MethodInfo System.Security.SecurityException::_method
	MethodInfo_t * ____method_17;
	// System.Security.Policy.Evidence System.Security.SecurityException::_evidence
	Evidence_t123342862 * ____evidence_18;

public:
	inline static int32_t get_offset_of_permissionState_11() { return static_cast<int32_t>(offsetof(SecurityException_t3700843220, ___permissionState_11)); }
	inline String_t* get_permissionState_11() const { return ___permissionState_11; }
	inline String_t** get_address_of_permissionState_11() { return &___permissionState_11; }
	inline void set_permissionState_11(String_t* value)
	{
		___permissionState_11 = value;
		Il2CppCodeGenWriteBarrier((&___permissionState_11), value);
	}

	inline static int32_t get_offset_of_permissionType_12() { return static_cast<int32_t>(offsetof(SecurityException_t3700843220, ___permissionType_12)); }
	inline Type_t * get_permissionType_12() const { return ___permissionType_12; }
	inline Type_t ** get_address_of_permissionType_12() { return &___permissionType_12; }
	inline void set_permissionType_12(Type_t * value)
	{
		___permissionType_12 = value;
		Il2CppCodeGenWriteBarrier((&___permissionType_12), value);
	}

	inline static int32_t get_offset_of__granted_13() { return static_cast<int32_t>(offsetof(SecurityException_t3700843220, ____granted_13)); }
	inline String_t* get__granted_13() const { return ____granted_13; }
	inline String_t** get_address_of__granted_13() { return &____granted_13; }
	inline void set__granted_13(String_t* value)
	{
		____granted_13 = value;
		Il2CppCodeGenWriteBarrier((&____granted_13), value);
	}

	inline static int32_t get_offset_of__refused_14() { return static_cast<int32_t>(offsetof(SecurityException_t3700843220, ____refused_14)); }
	inline String_t* get__refused_14() const { return ____refused_14; }
	inline String_t** get_address_of__refused_14() { return &____refused_14; }
	inline void set__refused_14(String_t* value)
	{
		____refused_14 = value;
		Il2CppCodeGenWriteBarrier((&____refused_14), value);
	}

	inline static int32_t get_offset_of__demanded_15() { return static_cast<int32_t>(offsetof(SecurityException_t3700843220, ____demanded_15)); }
	inline RuntimeObject * get__demanded_15() const { return ____demanded_15; }
	inline RuntimeObject ** get_address_of__demanded_15() { return &____demanded_15; }
	inline void set__demanded_15(RuntimeObject * value)
	{
		____demanded_15 = value;
		Il2CppCodeGenWriteBarrier((&____demanded_15), value);
	}

	inline static int32_t get_offset_of__firstperm_16() { return static_cast<int32_t>(offsetof(SecurityException_t3700843220, ____firstperm_16)); }
	inline RuntimeObject* get__firstperm_16() const { return ____firstperm_16; }
	inline RuntimeObject** get_address_of__firstperm_16() { return &____firstperm_16; }
	inline void set__firstperm_16(RuntimeObject* value)
	{
		____firstperm_16 = value;
		Il2CppCodeGenWriteBarrier((&____firstperm_16), value);
	}

	inline static int32_t get_offset_of__method_17() { return static_cast<int32_t>(offsetof(SecurityException_t3700843220, ____method_17)); }
	inline MethodInfo_t * get__method_17() const { return ____method_17; }
	inline MethodInfo_t ** get_address_of__method_17() { return &____method_17; }
	inline void set__method_17(MethodInfo_t * value)
	{
		____method_17 = value;
		Il2CppCodeGenWriteBarrier((&____method_17), value);
	}

	inline static int32_t get_offset_of__evidence_18() { return static_cast<int32_t>(offsetof(SecurityException_t3700843220, ____evidence_18)); }
	inline Evidence_t123342862 * get__evidence_18() const { return ____evidence_18; }
	inline Evidence_t123342862 ** get_address_of__evidence_18() { return &____evidence_18; }
	inline void set__evidence_18(Evidence_t123342862 * value)
	{
		____evidence_18 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYEXCEPTION_T3700843220_H
#ifndef SECURITYCRITICALSCOPE_T2937109529_H
#define SECURITYCRITICALSCOPE_T2937109529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityCriticalScope
struct  SecurityCriticalScope_t2937109529 
{
public:
	// System.Int32 System.Security.SecurityCriticalScope::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityCriticalScope_t2937109529, ___value___1)); }
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
#endif // SECURITYCRITICALSCOPE_T2937109529_H
#ifndef RUNTIMESECURITYFRAME_T2317130475_H
#define RUNTIMESECURITYFRAME_T2317130475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.RuntimeSecurityFrame
struct  RuntimeSecurityFrame_t2317130475  : public RuntimeObject
{
public:
	// System.AppDomain System.Security.RuntimeSecurityFrame::domain
	AppDomain_t1283380302 * ___domain_0;
	// System.Reflection.MethodInfo System.Security.RuntimeSecurityFrame::method
	MethodInfo_t * ___method_1;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::assert
	RuntimeDeclSecurityEntry_t3244854727  ___assert_2;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::deny
	RuntimeDeclSecurityEntry_t3244854727  ___deny_3;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::permitonly
	RuntimeDeclSecurityEntry_t3244854727  ___permitonly_4;

public:
	inline static int32_t get_offset_of_domain_0() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t2317130475, ___domain_0)); }
	inline AppDomain_t1283380302 * get_domain_0() const { return ___domain_0; }
	inline AppDomain_t1283380302 ** get_address_of_domain_0() { return &___domain_0; }
	inline void set_domain_0(AppDomain_t1283380302 * value)
	{
		___domain_0 = value;
		Il2CppCodeGenWriteBarrier((&___domain_0), value);
	}

	inline static int32_t get_offset_of_method_1() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t2317130475, ___method_1)); }
	inline MethodInfo_t * get_method_1() const { return ___method_1; }
	inline MethodInfo_t ** get_address_of_method_1() { return &___method_1; }
	inline void set_method_1(MethodInfo_t * value)
	{
		___method_1 = value;
		Il2CppCodeGenWriteBarrier((&___method_1), value);
	}

	inline static int32_t get_offset_of_assert_2() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t2317130475, ___assert_2)); }
	inline RuntimeDeclSecurityEntry_t3244854727  get_assert_2() const { return ___assert_2; }
	inline RuntimeDeclSecurityEntry_t3244854727 * get_address_of_assert_2() { return &___assert_2; }
	inline void set_assert_2(RuntimeDeclSecurityEntry_t3244854727  value)
	{
		___assert_2 = value;
	}

	inline static int32_t get_offset_of_deny_3() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t2317130475, ___deny_3)); }
	inline RuntimeDeclSecurityEntry_t3244854727  get_deny_3() const { return ___deny_3; }
	inline RuntimeDeclSecurityEntry_t3244854727 * get_address_of_deny_3() { return &___deny_3; }
	inline void set_deny_3(RuntimeDeclSecurityEntry_t3244854727  value)
	{
		___deny_3 = value;
	}

	inline static int32_t get_offset_of_permitonly_4() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t2317130475, ___permitonly_4)); }
	inline RuntimeDeclSecurityEntry_t3244854727  get_permitonly_4() const { return ___permitonly_4; }
	inline RuntimeDeclSecurityEntry_t3244854727 * get_address_of_permitonly_4() { return &___permitonly_4; }
	inline void set_permitonly_4(RuntimeDeclSecurityEntry_t3244854727  value)
	{
		___permitonly_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMESECURITYFRAME_T2317130475_H
#ifndef ENCODERFALLBACKEXCEPTION_T1597418084_H
#define ENCODERFALLBACKEXCEPTION_T1597418084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallbackException
struct  EncoderFallbackException_t1597418084  : public ArgumentException_t2018282275
{
public:
	// System.Char System.Text.EncoderFallbackException::char_unknown
	Il2CppChar ___char_unknown_13;
	// System.Char System.Text.EncoderFallbackException::char_unknown_high
	Il2CppChar ___char_unknown_high_14;
	// System.Char System.Text.EncoderFallbackException::char_unknown_low
	Il2CppChar ___char_unknown_low_15;
	// System.Int32 System.Text.EncoderFallbackException::index
	int32_t ___index_16;

public:
	inline static int32_t get_offset_of_char_unknown_13() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t1597418084, ___char_unknown_13)); }
	inline Il2CppChar get_char_unknown_13() const { return ___char_unknown_13; }
	inline Il2CppChar* get_address_of_char_unknown_13() { return &___char_unknown_13; }
	inline void set_char_unknown_13(Il2CppChar value)
	{
		___char_unknown_13 = value;
	}

	inline static int32_t get_offset_of_char_unknown_high_14() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t1597418084, ___char_unknown_high_14)); }
	inline Il2CppChar get_char_unknown_high_14() const { return ___char_unknown_high_14; }
	inline Il2CppChar* get_address_of_char_unknown_high_14() { return &___char_unknown_high_14; }
	inline void set_char_unknown_high_14(Il2CppChar value)
	{
		___char_unknown_high_14 = value;
	}

	inline static int32_t get_offset_of_char_unknown_low_15() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t1597418084, ___char_unknown_low_15)); }
	inline Il2CppChar get_char_unknown_low_15() const { return ___char_unknown_low_15; }
	inline Il2CppChar* get_address_of_char_unknown_low_15() { return &___char_unknown_low_15; }
	inline void set_char_unknown_low_15(Il2CppChar value)
	{
		___char_unknown_low_15 = value;
	}

	inline static int32_t get_offset_of_index_16() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t1597418084, ___index_16)); }
	inline int32_t get_index_16() const { return ___index_16; }
	inline int32_t* get_address_of_index_16() { return &___index_16; }
	inline void set_index_16(int32_t value)
	{
		___index_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACKEXCEPTION_T1597418084_H
#ifndef DECODERFALLBACKEXCEPTION_T4098214368_H
#define DECODERFALLBACKEXCEPTION_T4098214368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallbackException
struct  DecoderFallbackException_t4098214368  : public ArgumentException_t2018282275
{
public:
	// System.Byte[] System.Text.DecoderFallbackException::bytes_unknown
	ByteU5BU5D_t3908495726* ___bytes_unknown_13;
	// System.Int32 System.Text.DecoderFallbackException::index
	int32_t ___index_14;

public:
	inline static int32_t get_offset_of_bytes_unknown_13() { return static_cast<int32_t>(offsetof(DecoderFallbackException_t4098214368, ___bytes_unknown_13)); }
	inline ByteU5BU5D_t3908495726* get_bytes_unknown_13() const { return ___bytes_unknown_13; }
	inline ByteU5BU5D_t3908495726** get_address_of_bytes_unknown_13() { return &___bytes_unknown_13; }
	inline void set_bytes_unknown_13(ByteU5BU5D_t3908495726* value)
	{
		___bytes_unknown_13 = value;
		Il2CppCodeGenWriteBarrier((&___bytes_unknown_13), value);
	}

	inline static int32_t get_offset_of_index_14() { return static_cast<int32_t>(offsetof(DecoderFallbackException_t4098214368, ___index_14)); }
	inline int32_t get_index_14() const { return ___index_14; }
	inline int32_t* get_address_of_index_14() { return &___index_14; }
	inline void set_index_14(int32_t value)
	{
		___index_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACKEXCEPTION_T4098214368_H
#ifndef SECURITYPERMISSIONATTRIBUTE_T3952312727_H
#define SECURITYPERMISSIONATTRIBUTE_T3952312727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermissionAttribute
struct  SecurityPermissionAttribute_t3952312727  : public CodeAccessSecurityAttribute_t1783179257
{
public:
	// System.Security.Permissions.SecurityPermissionFlag System.Security.Permissions.SecurityPermissionAttribute::m_Flags
	int32_t ___m_Flags_0;

public:
	inline static int32_t get_offset_of_m_Flags_0() { return static_cast<int32_t>(offsetof(SecurityPermissionAttribute_t3952312727, ___m_Flags_0)); }
	inline int32_t get_m_Flags_0() const { return ___m_Flags_0; }
	inline int32_t* get_address_of_m_Flags_0() { return &___m_Flags_0; }
	inline void set_m_Flags_0(int32_t value)
	{
		___m_Flags_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPERMISSIONATTRIBUTE_T3952312727_H
#ifndef SECURITYPERMISSION_T3773521652_H
#define SECURITYPERMISSION_T3773521652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermission
struct  SecurityPermission_t3773521652  : public CodeAccessPermission_t3632181336
{
public:
	// System.Security.Permissions.SecurityPermissionFlag System.Security.Permissions.SecurityPermission::flags
	int32_t ___flags_0;

public:
	inline static int32_t get_offset_of_flags_0() { return static_cast<int32_t>(offsetof(SecurityPermission_t3773521652, ___flags_0)); }
	inline int32_t get_flags_0() const { return ___flags_0; }
	inline int32_t* get_address_of_flags_0() { return &___flags_0; }
	inline void set_flags_0(int32_t value)
	{
		___flags_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPERMISSION_T3773521652_H
#ifndef WINDOWSIDENTITY_T3303705529_H
#define WINDOWSIDENTITY_T3303705529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.WindowsIdentity
struct  WindowsIdentity_t3303705529  : public RuntimeObject
{
public:
	// System.IntPtr System.Security.Principal.WindowsIdentity::_token
	intptr_t ____token_0;
	// System.String System.Security.Principal.WindowsIdentity::_type
	String_t* ____type_1;
	// System.Security.Principal.WindowsAccountType System.Security.Principal.WindowsIdentity::_account
	int32_t ____account_2;
	// System.Boolean System.Security.Principal.WindowsIdentity::_authenticated
	bool ____authenticated_3;
	// System.String System.Security.Principal.WindowsIdentity::_name
	String_t* ____name_4;
	// System.Runtime.Serialization.SerializationInfo System.Security.Principal.WindowsIdentity::_info
	SerializationInfo_t2339653687 * ____info_5;

public:
	inline static int32_t get_offset_of__token_0() { return static_cast<int32_t>(offsetof(WindowsIdentity_t3303705529, ____token_0)); }
	inline intptr_t get__token_0() const { return ____token_0; }
	inline intptr_t* get_address_of__token_0() { return &____token_0; }
	inline void set__token_0(intptr_t value)
	{
		____token_0 = value;
	}

	inline static int32_t get_offset_of__type_1() { return static_cast<int32_t>(offsetof(WindowsIdentity_t3303705529, ____type_1)); }
	inline String_t* get__type_1() const { return ____type_1; }
	inline String_t** get_address_of__type_1() { return &____type_1; }
	inline void set__type_1(String_t* value)
	{
		____type_1 = value;
		Il2CppCodeGenWriteBarrier((&____type_1), value);
	}

	inline static int32_t get_offset_of__account_2() { return static_cast<int32_t>(offsetof(WindowsIdentity_t3303705529, ____account_2)); }
	inline int32_t get__account_2() const { return ____account_2; }
	inline int32_t* get_address_of__account_2() { return &____account_2; }
	inline void set__account_2(int32_t value)
	{
		____account_2 = value;
	}

	inline static int32_t get_offset_of__authenticated_3() { return static_cast<int32_t>(offsetof(WindowsIdentity_t3303705529, ____authenticated_3)); }
	inline bool get__authenticated_3() const { return ____authenticated_3; }
	inline bool* get_address_of__authenticated_3() { return &____authenticated_3; }
	inline void set__authenticated_3(bool value)
	{
		____authenticated_3 = value;
	}

	inline static int32_t get_offset_of__name_4() { return static_cast<int32_t>(offsetof(WindowsIdentity_t3303705529, ____name_4)); }
	inline String_t* get__name_4() const { return ____name_4; }
	inline String_t** get_address_of__name_4() { return &____name_4; }
	inline void set__name_4(String_t* value)
	{
		____name_4 = value;
		Il2CppCodeGenWriteBarrier((&____name_4), value);
	}

	inline static int32_t get_offset_of__info_5() { return static_cast<int32_t>(offsetof(WindowsIdentity_t3303705529, ____info_5)); }
	inline SerializationInfo_t2339653687 * get__info_5() const { return ____info_5; }
	inline SerializationInfo_t2339653687 ** get_address_of__info_5() { return &____info_5; }
	inline void set__info_5(SerializationInfo_t2339653687 * value)
	{
		____info_5 = value;
		Il2CppCodeGenWriteBarrier((&____info_5), value);
	}
};

struct WindowsIdentity_t3303705529_StaticFields
{
public:
	// System.IntPtr System.Security.Principal.WindowsIdentity::invalidWindows
	intptr_t ___invalidWindows_6;

public:
	inline static int32_t get_offset_of_invalidWindows_6() { return static_cast<int32_t>(offsetof(WindowsIdentity_t3303705529_StaticFields, ___invalidWindows_6)); }
	inline intptr_t get_invalidWindows_6() const { return ___invalidWindows_6; }
	inline intptr_t* get_address_of_invalidWindows_6() { return &___invalidWindows_6; }
	inline void set_invalidWindows_6(intptr_t value)
	{
		___invalidWindows_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSIDENTITY_T3303705529_H
#ifndef SECURITYCRITICALATTRIBUTE_T13178807_H
#define SECURITYCRITICALATTRIBUTE_T13178807_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityCriticalAttribute
struct  SecurityCriticalAttribute_t13178807  : public Attribute_t942395732
{
public:
	// System.Security.SecurityCriticalScope System.Security.SecurityCriticalAttribute::_scope
	int32_t ____scope_0;

public:
	inline static int32_t get_offset_of__scope_0() { return static_cast<int32_t>(offsetof(SecurityCriticalAttribute_t13178807, ____scope_0)); }
	inline int32_t get__scope_0() const { return ____scope_0; }
	inline int32_t* get_address_of__scope_0() { return &____scope_0; }
	inline void set__scope_0(int32_t value)
	{
		____scope_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYCRITICALATTRIBUTE_T13178807_H
#ifndef SYMMETRICALGORITHM_T811790614_H
#define SYMMETRICALGORITHM_T811790614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t811790614  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t3908495726* ___IVValue_1;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t3908495726* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t702874482* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t702874482* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
	// System.Boolean System.Security.Cryptography.SymmetricAlgorithm::m_disposed
	bool ___m_disposed_9;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t811790614, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_IVValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t811790614, ___IVValue_1)); }
	inline ByteU5BU5D_t3908495726* get_IVValue_1() const { return ___IVValue_1; }
	inline ByteU5BU5D_t3908495726** get_address_of_IVValue_1() { return &___IVValue_1; }
	inline void set_IVValue_1(ByteU5BU5D_t3908495726* value)
	{
		___IVValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_1), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t811790614, ___KeySizeValue_2)); }
	inline int32_t get_KeySizeValue_2() const { return ___KeySizeValue_2; }
	inline int32_t* get_address_of_KeySizeValue_2() { return &___KeySizeValue_2; }
	inline void set_KeySizeValue_2(int32_t value)
	{
		___KeySizeValue_2 = value;
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t811790614, ___KeyValue_3)); }
	inline ByteU5BU5D_t3908495726* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t3908495726** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t3908495726* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t811790614, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t702874482* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t702874482** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t702874482* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t811790614, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t702874482* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t702874482** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t702874482* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t811790614, ___FeedbackSizeValue_6)); }
	inline int32_t get_FeedbackSizeValue_6() const { return ___FeedbackSizeValue_6; }
	inline int32_t* get_address_of_FeedbackSizeValue_6() { return &___FeedbackSizeValue_6; }
	inline void set_FeedbackSizeValue_6(int32_t value)
	{
		___FeedbackSizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t811790614, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t811790614, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t811790614, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICALGORITHM_T811790614_H
#ifndef RC2_T3335752500_H
#define RC2_T3335752500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RC2
struct  RC2_t3335752500  : public SymmetricAlgorithm_t811790614
{
public:
	// System.Int32 System.Security.Cryptography.RC2::EffectiveKeySizeValue
	int32_t ___EffectiveKeySizeValue_10;

public:
	inline static int32_t get_offset_of_EffectiveKeySizeValue_10() { return static_cast<int32_t>(offsetof(RC2_t3335752500, ___EffectiveKeySizeValue_10)); }
	inline int32_t get_EffectiveKeySizeValue_10() const { return ___EffectiveKeySizeValue_10; }
	inline int32_t* get_address_of_EffectiveKeySizeValue_10() { return &___EffectiveKeySizeValue_10; }
	inline void set_EffectiveKeySizeValue_10(int32_t value)
	{
		___EffectiveKeySizeValue_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC2_T3335752500_H
#ifndef RIJNDAEL_T1868395197_H
#define RIJNDAEL_T1868395197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Rijndael
struct  Rijndael_t1868395197  : public SymmetricAlgorithm_t811790614
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAEL_T1868395197_H
#ifndef TRIPLEDES_T277106572_H
#define TRIPLEDES_T277106572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDES
struct  TripleDES_t277106572  : public SymmetricAlgorithm_t811790614
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDES_T277106572_H
#ifndef TRIPLEDESCRYPTOSERVICEPROVIDER_T1165931175_H
#define TRIPLEDESCRYPTOSERVICEPROVIDER_T1165931175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDESCryptoServiceProvider
struct  TripleDESCryptoServiceProvider_t1165931175  : public TripleDES_t277106572
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDESCRYPTOSERVICEPROVIDER_T1165931175_H
#ifndef RC2CRYPTOSERVICEPROVIDER_T389466334_H
#define RC2CRYPTOSERVICEPROVIDER_T389466334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RC2CryptoServiceProvider
struct  RC2CryptoServiceProvider_t389466334  : public RC2_t3335752500
{
public:
	// System.Boolean System.Security.Cryptography.RC2CryptoServiceProvider::_useSalt
	bool ____useSalt_11;

public:
	inline static int32_t get_offset_of__useSalt_11() { return static_cast<int32_t>(offsetof(RC2CryptoServiceProvider_t389466334, ____useSalt_11)); }
	inline bool get__useSalt_11() const { return ____useSalt_11; }
	inline bool* get_address_of__useSalt_11() { return &____useSalt_11; }
	inline void set__useSalt_11(bool value)
	{
		____useSalt_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC2CRYPTOSERVICEPROVIDER_T389466334_H
#ifndef RIJNDAELMANAGED_T3923214179_H
#define RIJNDAELMANAGED_T3923214179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RijndaelManaged
struct  RijndaelManaged_t3923214179  : public Rijndael_t1868395197
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAELMANAGED_T3923214179_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize700 = { sizeof (MD5CryptoServiceProvider_t1615367136), -1, sizeof(MD5CryptoServiceProvider_t1615367136_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable700[8] = 
{
	0,
	0,
	MD5CryptoServiceProvider_t1615367136::get_offset_of__H_6(),
	MD5CryptoServiceProvider_t1615367136::get_offset_of_buff_7(),
	MD5CryptoServiceProvider_t1615367136::get_offset_of_count_8(),
	MD5CryptoServiceProvider_t1615367136::get_offset_of__ProcessingBuffer_9(),
	MD5CryptoServiceProvider_t1615367136::get_offset_of__ProcessingBufferCount_10(),
	MD5CryptoServiceProvider_t1615367136_StaticFields::get_offset_of_K_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize701 = { sizeof (MaskGenerationMethod_t664677518), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize702 = { sizeof (PKCS1MaskGenerationMethod_t1036350899), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable702[1] = 
{
	PKCS1MaskGenerationMethod_t1036350899::get_offset_of_hashName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize703 = { sizeof (PaddingMode_t1135835018)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable703[6] = 
{
	PaddingMode_t1135835018::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize704 = { sizeof (PasswordDeriveBytes_t3857726445), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable704[10] = 
{
	PasswordDeriveBytes_t3857726445::get_offset_of_HashNameValue_0(),
	PasswordDeriveBytes_t3857726445::get_offset_of_SaltValue_1(),
	PasswordDeriveBytes_t3857726445::get_offset_of_IterationsValue_2(),
	PasswordDeriveBytes_t3857726445::get_offset_of_hash_3(),
	PasswordDeriveBytes_t3857726445::get_offset_of_state_4(),
	PasswordDeriveBytes_t3857726445::get_offset_of_password_5(),
	PasswordDeriveBytes_t3857726445::get_offset_of_initial_6(),
	PasswordDeriveBytes_t3857726445::get_offset_of_output_7(),
	PasswordDeriveBytes_t3857726445::get_offset_of_position_8(),
	PasswordDeriveBytes_t3857726445::get_offset_of_hashnumber_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize705 = { sizeof (RC2_t3335752500), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable705[1] = 
{
	RC2_t3335752500::get_offset_of_EffectiveKeySizeValue_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize706 = { sizeof (RC2CryptoServiceProvider_t389466334), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable706[1] = 
{
	RC2CryptoServiceProvider_t389466334::get_offset_of__useSalt_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize707 = { sizeof (RC2Transform_t2061273261), -1, sizeof(RC2Transform_t2061273261_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable707[7] = 
{
	RC2Transform_t2061273261::get_offset_of_R0_12(),
	RC2Transform_t2061273261::get_offset_of_R1_13(),
	RC2Transform_t2061273261::get_offset_of_R2_14(),
	RC2Transform_t2061273261::get_offset_of_R3_15(),
	RC2Transform_t2061273261::get_offset_of_K_16(),
	RC2Transform_t2061273261::get_offset_of_j_17(),
	RC2Transform_t2061273261_StaticFields::get_offset_of_pitable_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize708 = { sizeof (RIPEMD160_t3507486109), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize709 = { sizeof (RIPEMD160Managed_t3695820211), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable709[6] = 
{
	0,
	RIPEMD160Managed_t3695820211::get_offset_of__ProcessingBuffer_5(),
	RIPEMD160Managed_t3695820211::get_offset_of__X_6(),
	RIPEMD160Managed_t3695820211::get_offset_of__HashValue_7(),
	RIPEMD160Managed_t3695820211::get_offset_of__Length_8(),
	RIPEMD160Managed_t3695820211::get_offset_of__ProcessingBufferCount_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize710 = { sizeof (RNGCryptoServiceProvider_t4140138660), -1, sizeof(RNGCryptoServiceProvider_t4140138660_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable710[2] = 
{
	RNGCryptoServiceProvider_t4140138660_StaticFields::get_offset_of__lock_0(),
	RNGCryptoServiceProvider_t4140138660::get_offset_of__handle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize711 = { sizeof (RSA_t3051495647), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize712 = { sizeof (RSACryptoServiceProvider_t3752599214), -1, sizeof(RSACryptoServiceProvider_t3752599214_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable712[9] = 
{
	0,
	RSACryptoServiceProvider_t3752599214::get_offset_of_store_3(),
	RSACryptoServiceProvider_t3752599214::get_offset_of_persistKey_4(),
	RSACryptoServiceProvider_t3752599214::get_offset_of_persisted_5(),
	RSACryptoServiceProvider_t3752599214::get_offset_of_privateKeyExportable_6(),
	RSACryptoServiceProvider_t3752599214::get_offset_of_m_disposed_7(),
	RSACryptoServiceProvider_t3752599214::get_offset_of_rsa_8(),
	RSACryptoServiceProvider_t3752599214_StaticFields::get_offset_of_useMachineKeyStore_9(),
	RSACryptoServiceProvider_t3752599214_StaticFields::get_offset_of_U3CU3Ef__switchU24map29_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize713 = { sizeof (RSAOAEPKeyExchangeDeformatter_t1329373329), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable713[1] = 
{
	RSAOAEPKeyExchangeDeformatter_t1329373329::get_offset_of_rsa_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize714 = { sizeof (RSAOAEPKeyExchangeFormatter_t2893556967), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable714[3] = 
{
	RSAOAEPKeyExchangeFormatter_t2893556967::get_offset_of_rsa_0(),
	RSAOAEPKeyExchangeFormatter_t2893556967::get_offset_of_random_1(),
	RSAOAEPKeyExchangeFormatter_t2893556967::get_offset_of_param_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize715 = { sizeof (RSAPKCS1KeyExchangeDeformatter_t3212421173), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable715[2] = 
{
	RSAPKCS1KeyExchangeDeformatter_t3212421173::get_offset_of_rsa_0(),
	RSAPKCS1KeyExchangeDeformatter_t3212421173::get_offset_of_random_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize716 = { sizeof (RSAPKCS1KeyExchangeFormatter_t2899832898), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable716[2] = 
{
	RSAPKCS1KeyExchangeFormatter_t2899832898::get_offset_of_rsa_0(),
	RSAPKCS1KeyExchangeFormatter_t2899832898::get_offset_of_random_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize717 = { sizeof (RSAPKCS1SignatureDeformatter_t1183203666), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable717[2] = 
{
	RSAPKCS1SignatureDeformatter_t1183203666::get_offset_of_rsa_0(),
	RSAPKCS1SignatureDeformatter_t1183203666::get_offset_of_hashName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize718 = { sizeof (RSAPKCS1SignatureFormatter_t2841163594), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable718[2] = 
{
	RSAPKCS1SignatureFormatter_t2841163594::get_offset_of_rsa_0(),
	RSAPKCS1SignatureFormatter_t2841163594::get_offset_of_hash_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize719 = { sizeof (RSAParameters_t1246889679)+ sizeof (RuntimeObject), sizeof(RSAParameters_t1246889679_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable719[8] = 
{
	RSAParameters_t1246889679::get_offset_of_P_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t1246889679::get_offset_of_Q_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t1246889679::get_offset_of_D_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t1246889679::get_offset_of_DP_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t1246889679::get_offset_of_DQ_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t1246889679::get_offset_of_InverseQ_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t1246889679::get_offset_of_Modulus_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t1246889679::get_offset_of_Exponent_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize720 = { sizeof (RandomNumberGenerator_t3050071163), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize721 = { sizeof (Rfc2898DeriveBytes_t3114689022), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable721[7] = 
{
	0,
	Rfc2898DeriveBytes_t3114689022::get_offset_of__iteration_1(),
	Rfc2898DeriveBytes_t3114689022::get_offset_of__salt_2(),
	Rfc2898DeriveBytes_t3114689022::get_offset_of__hmac_3(),
	Rfc2898DeriveBytes_t3114689022::get_offset_of__buffer_4(),
	Rfc2898DeriveBytes_t3114689022::get_offset_of__pos_5(),
	Rfc2898DeriveBytes_t3114689022::get_offset_of__f_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize722 = { sizeof (Rijndael_t1868395197), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize723 = { sizeof (RijndaelManaged_t3923214179), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize724 = { sizeof (RijndaelTransform_t2785594878), -1, sizeof(RijndaelTransform_t2785594878_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable724[15] = 
{
	RijndaelTransform_t2785594878::get_offset_of_expandedKey_12(),
	RijndaelTransform_t2785594878::get_offset_of_Nb_13(),
	RijndaelTransform_t2785594878::get_offset_of_Nk_14(),
	RijndaelTransform_t2785594878::get_offset_of_Nr_15(),
	RijndaelTransform_t2785594878_StaticFields::get_offset_of_Rcon_16(),
	RijndaelTransform_t2785594878_StaticFields::get_offset_of_SBox_17(),
	RijndaelTransform_t2785594878_StaticFields::get_offset_of_iSBox_18(),
	RijndaelTransform_t2785594878_StaticFields::get_offset_of_T0_19(),
	RijndaelTransform_t2785594878_StaticFields::get_offset_of_T1_20(),
	RijndaelTransform_t2785594878_StaticFields::get_offset_of_T2_21(),
	RijndaelTransform_t2785594878_StaticFields::get_offset_of_T3_22(),
	RijndaelTransform_t2785594878_StaticFields::get_offset_of_iT0_23(),
	RijndaelTransform_t2785594878_StaticFields::get_offset_of_iT1_24(),
	RijndaelTransform_t2785594878_StaticFields::get_offset_of_iT2_25(),
	RijndaelTransform_t2785594878_StaticFields::get_offset_of_iT3_26(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize725 = { sizeof (RijndaelManagedTransform_t3554508953), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable725[2] = 
{
	RijndaelManagedTransform_t3554508953::get_offset_of__st_0(),
	RijndaelManagedTransform_t3554508953::get_offset_of__bs_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize726 = { sizeof (SHA1_t3170280660), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize727 = { sizeof (SHA1Internal_t896793504), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable727[7] = 
{
	0,
	0,
	SHA1Internal_t896793504::get_offset_of__H_2(),
	SHA1Internal_t896793504::get_offset_of_count_3(),
	SHA1Internal_t896793504::get_offset_of__ProcessingBuffer_4(),
	SHA1Internal_t896793504::get_offset_of__ProcessingBufferCount_5(),
	SHA1Internal_t896793504::get_offset_of_buff_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize728 = { sizeof (SHA1CryptoServiceProvider_t3318406335), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable728[1] = 
{
	SHA1CryptoServiceProvider_t3318406335::get_offset_of_sha_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize729 = { sizeof (SHA1Managed_t1955832063), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable729[1] = 
{
	SHA1Managed_t1955832063::get_offset_of_sha_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize730 = { sizeof (SHA256_t663893213), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize731 = { sizeof (SHA256Managed_t3956919877), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable731[7] = 
{
	0,
	0,
	SHA256Managed_t3956919877::get_offset_of__H_6(),
	SHA256Managed_t3956919877::get_offset_of_count_7(),
	SHA256Managed_t3956919877::get_offset_of__ProcessingBuffer_8(),
	SHA256Managed_t3956919877::get_offset_of__ProcessingBufferCount_9(),
	SHA256Managed_t3956919877::get_offset_of_buff_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize732 = { sizeof (SHA384_t784451815), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize733 = { sizeof (SHA384Managed_t3766657621), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable733[14] = 
{
	SHA384Managed_t3766657621::get_offset_of_xBuf_4(),
	SHA384Managed_t3766657621::get_offset_of_xBufOff_5(),
	SHA384Managed_t3766657621::get_offset_of_byteCount1_6(),
	SHA384Managed_t3766657621::get_offset_of_byteCount2_7(),
	SHA384Managed_t3766657621::get_offset_of_H1_8(),
	SHA384Managed_t3766657621::get_offset_of_H2_9(),
	SHA384Managed_t3766657621::get_offset_of_H3_10(),
	SHA384Managed_t3766657621::get_offset_of_H4_11(),
	SHA384Managed_t3766657621::get_offset_of_H5_12(),
	SHA384Managed_t3766657621::get_offset_of_H6_13(),
	SHA384Managed_t3766657621::get_offset_of_H7_14(),
	SHA384Managed_t3766657621::get_offset_of_H8_15(),
	SHA384Managed_t3766657621::get_offset_of_W_16(),
	SHA384Managed_t3766657621::get_offset_of_wOff_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize734 = { sizeof (SHA512_t2792950045), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize735 = { sizeof (SHA512Managed_t816335385), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable735[14] = 
{
	SHA512Managed_t816335385::get_offset_of_xBuf_4(),
	SHA512Managed_t816335385::get_offset_of_xBufOff_5(),
	SHA512Managed_t816335385::get_offset_of_byteCount1_6(),
	SHA512Managed_t816335385::get_offset_of_byteCount2_7(),
	SHA512Managed_t816335385::get_offset_of_H1_8(),
	SHA512Managed_t816335385::get_offset_of_H2_9(),
	SHA512Managed_t816335385::get_offset_of_H3_10(),
	SHA512Managed_t816335385::get_offset_of_H4_11(),
	SHA512Managed_t816335385::get_offset_of_H5_12(),
	SHA512Managed_t816335385::get_offset_of_H6_13(),
	SHA512Managed_t816335385::get_offset_of_H7_14(),
	SHA512Managed_t816335385::get_offset_of_H8_15(),
	SHA512Managed_t816335385::get_offset_of_W_16(),
	SHA512Managed_t816335385::get_offset_of_wOff_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize736 = { sizeof (SHAConstants_t1295411336), -1, sizeof(SHAConstants_t1295411336_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable736[2] = 
{
	SHAConstants_t1295411336_StaticFields::get_offset_of_K1_0(),
	SHAConstants_t1295411336_StaticFields::get_offset_of_K2_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize737 = { sizeof (SignatureDescription_t476491654), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable737[4] = 
{
	SignatureDescription_t476491654::get_offset_of__DeformatterAlgorithm_0(),
	SignatureDescription_t476491654::get_offset_of__DigestAlgorithm_1(),
	SignatureDescription_t476491654::get_offset_of__FormatterAlgorithm_2(),
	SignatureDescription_t476491654::get_offset_of__KeyAlgorithm_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize738 = { sizeof (DSASignatureDescription_t1933514075), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize739 = { sizeof (RSAPKCS1SHA1SignatureDescription_t1222668382), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize740 = { sizeof (SymmetricAlgorithm_t811790614), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable740[10] = 
{
	SymmetricAlgorithm_t811790614::get_offset_of_BlockSizeValue_0(),
	SymmetricAlgorithm_t811790614::get_offset_of_IVValue_1(),
	SymmetricAlgorithm_t811790614::get_offset_of_KeySizeValue_2(),
	SymmetricAlgorithm_t811790614::get_offset_of_KeyValue_3(),
	SymmetricAlgorithm_t811790614::get_offset_of_LegalBlockSizesValue_4(),
	SymmetricAlgorithm_t811790614::get_offset_of_LegalKeySizesValue_5(),
	SymmetricAlgorithm_t811790614::get_offset_of_FeedbackSizeValue_6(),
	SymmetricAlgorithm_t811790614::get_offset_of_ModeValue_7(),
	SymmetricAlgorithm_t811790614::get_offset_of_PaddingValue_8(),
	SymmetricAlgorithm_t811790614::get_offset_of_m_disposed_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize741 = { sizeof (ToBase64Transform_t219618276), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable741[3] = 
{
	0,
	0,
	ToBase64Transform_t219618276::get_offset_of_m_disposed_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize742 = { sizeof (TripleDES_t277106572), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize743 = { sizeof (TripleDESCryptoServiceProvider_t1165931175), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize744 = { sizeof (TripleDESTransform_t699572222), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable744[6] = 
{
	TripleDESTransform_t699572222::get_offset_of_E1_12(),
	TripleDESTransform_t699572222::get_offset_of_D2_13(),
	TripleDESTransform_t699572222::get_offset_of_E3_14(),
	TripleDESTransform_t699572222::get_offset_of_D1_15(),
	TripleDESTransform_t699572222::get_offset_of_E2_16(),
	TripleDESTransform_t699572222::get_offset_of_D3_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize745 = { sizeof (CodeAccessSecurityAttribute_t1783179257), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize746 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize747 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize748 = { sizeof (SecurityAction_t863438359)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable748[10] = 
{
	SecurityAction_t863438359::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize749 = { sizeof (SecurityPermission_t3773521652), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable749[1] = 
{
	SecurityPermission_t3773521652::get_offset_of_flags_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize750 = { sizeof (SecurityPermissionAttribute_t3952312727), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable750[1] = 
{
	SecurityPermissionAttribute_t3952312727::get_offset_of_m_Flags_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize751 = { sizeof (SecurityPermissionFlag_t152293252)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable751[17] = 
{
	SecurityPermissionFlag_t152293252::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize752 = { sizeof (StrongNamePublicKeyBlob_t750243896), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable752[1] = 
{
	StrongNamePublicKeyBlob_t750243896::get_offset_of_pubkey_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize753 = { sizeof (ApplicationTrust_t2563063931), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable753[1] = 
{
	ApplicationTrust_t2563063931::get_offset_of_fullTrustAssemblies_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize754 = { sizeof (Evidence_t123342862), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable754[4] = 
{
	Evidence_t123342862::get_offset_of__locked_0(),
	Evidence_t123342862::get_offset_of_hostEvidenceList_1(),
	Evidence_t123342862::get_offset_of_assemblyEvidenceList_2(),
	Evidence_t123342862::get_offset_of__hashCode_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize755 = { sizeof (EvidenceEnumerator_t3610480689), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable755[3] = 
{
	EvidenceEnumerator_t3610480689::get_offset_of_currentEnum_0(),
	EvidenceEnumerator_t3610480689::get_offset_of_hostEnum_1(),
	EvidenceEnumerator_t3610480689::get_offset_of_assemblyEnum_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize756 = { sizeof (Hash_t2597051946), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable756[2] = 
{
	Hash_t2597051946::get_offset_of_assembly_0(),
	Hash_t2597051946::get_offset_of_data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize757 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize758 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize759 = { sizeof (StrongName_t3333453715), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable759[3] = 
{
	StrongName_t3333453715::get_offset_of_publickey_0(),
	StrongName_t3333453715::get_offset_of_name_1(),
	StrongName_t3333453715::get_offset_of_version_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize760 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize761 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize762 = { sizeof (PrincipalPolicy_t786977969)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable762[4] = 
{
	PrincipalPolicy_t786977969::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize763 = { sizeof (WindowsAccountType_t600399389)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable763[5] = 
{
	WindowsAccountType_t600399389::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize764 = { sizeof (WindowsIdentity_t3303705529), -1, sizeof(WindowsIdentity_t3303705529_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable764[7] = 
{
	WindowsIdentity_t3303705529::get_offset_of__token_0(),
	WindowsIdentity_t3303705529::get_offset_of__type_1(),
	WindowsIdentity_t3303705529::get_offset_of__account_2(),
	WindowsIdentity_t3303705529::get_offset_of__authenticated_3(),
	WindowsIdentity_t3303705529::get_offset_of__name_4(),
	WindowsIdentity_t3303705529::get_offset_of__info_5(),
	WindowsIdentity_t3303705529_StaticFields::get_offset_of_invalidWindows_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize765 = { sizeof (AllowPartiallyTrustedCallersAttribute_t3564882843), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize766 = { sizeof (CodeAccessPermission_t3632181336), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize767 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize768 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize769 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize770 = { sizeof (PermissionSet_t1921444768), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable770[1] = 
{
	PermissionSet_t1921444768::get_offset_of_U3CDeclarativeSecurityU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize771 = { sizeof (SecureString_t3432835139), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable771[3] = 
{
	SecureString_t3432835139::get_offset_of_length_0(),
	SecureString_t3432835139::get_offset_of_disposed_1(),
	SecureString_t3432835139::get_offset_of_data_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize772 = { sizeof (SecurityContext_t2429330350), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable772[5] = 
{
	SecurityContext_t2429330350::get_offset_of__capture_0(),
	SecurityContext_t2429330350::get_offset_of__winid_1(),
	SecurityContext_t2429330350::get_offset_of__stack_2(),
	SecurityContext_t2429330350::get_offset_of__suppressFlowWindowsIdentity_3(),
	SecurityContext_t2429330350::get_offset_of__suppressFlow_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize773 = { sizeof (SecurityCriticalAttribute_t13178807), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable773[1] = 
{
	SecurityCriticalAttribute_t13178807::get_offset_of__scope_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize774 = { sizeof (SecurityCriticalScope_t2937109529)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable774[3] = 
{
	SecurityCriticalScope_t2937109529::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize775 = { sizeof (SecurityElement_t2335104795), -1, sizeof(SecurityElement_t2335104795_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable775[9] = 
{
	SecurityElement_t2335104795::get_offset_of_text_0(),
	SecurityElement_t2335104795::get_offset_of_tag_1(),
	SecurityElement_t2335104795::get_offset_of_attributes_2(),
	SecurityElement_t2335104795::get_offset_of_children_3(),
	SecurityElement_t2335104795_StaticFields::get_offset_of_invalid_tag_chars_4(),
	SecurityElement_t2335104795_StaticFields::get_offset_of_invalid_text_chars_5(),
	SecurityElement_t2335104795_StaticFields::get_offset_of_invalid_attr_name_chars_6(),
	SecurityElement_t2335104795_StaticFields::get_offset_of_invalid_attr_value_chars_7(),
	SecurityElement_t2335104795_StaticFields::get_offset_of_invalid_chars_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize776 = { sizeof (SecurityAttribute_t3845701125), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable776[2] = 
{
	SecurityAttribute_t3845701125::get_offset_of__name_0(),
	SecurityAttribute_t3845701125::get_offset_of__value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize777 = { sizeof (SecurityException_t3700843220), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable777[8] = 
{
	SecurityException_t3700843220::get_offset_of_permissionState_11(),
	SecurityException_t3700843220::get_offset_of_permissionType_12(),
	SecurityException_t3700843220::get_offset_of__granted_13(),
	SecurityException_t3700843220::get_offset_of__refused_14(),
	SecurityException_t3700843220::get_offset_of__demanded_15(),
	SecurityException_t3700843220::get_offset_of__firstperm_16(),
	SecurityException_t3700843220::get_offset_of__method_17(),
	SecurityException_t3700843220::get_offset_of__evidence_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize778 = { sizeof (RuntimeDeclSecurityEntry_t3244854727)+ sizeof (RuntimeObject), sizeof(RuntimeDeclSecurityEntry_t3244854727 ), 0, 0 };
extern const int32_t g_FieldOffsetTable778[3] = 
{
	RuntimeDeclSecurityEntry_t3244854727::get_offset_of_blob_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RuntimeDeclSecurityEntry_t3244854727::get_offset_of_size_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RuntimeDeclSecurityEntry_t3244854727::get_offset_of_index_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize779 = { sizeof (RuntimeSecurityFrame_t2317130475), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable779[5] = 
{
	RuntimeSecurityFrame_t2317130475::get_offset_of_domain_0(),
	RuntimeSecurityFrame_t2317130475::get_offset_of_method_1(),
	RuntimeSecurityFrame_t2317130475::get_offset_of_assert_2(),
	RuntimeSecurityFrame_t2317130475::get_offset_of_deny_3(),
	RuntimeSecurityFrame_t2317130475::get_offset_of_permitonly_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize780 = { sizeof (SecurityFrame_t2338941729)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable780[5] = 
{
	SecurityFrame_t2338941729::get_offset_of__domain_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t2338941729::get_offset_of__method_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t2338941729::get_offset_of__assert_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t2338941729::get_offset_of__deny_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t2338941729::get_offset_of__permitonly_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize781 = { sizeof (SecurityManager_t3379535691), -1, sizeof(SecurityManager_t3379535691_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable781[3] = 
{
	SecurityManager_t3379535691_StaticFields::get_offset_of__lockObject_0(),
	SecurityManager_t3379535691_StaticFields::get_offset_of__declsecCache_1(),
	SecurityManager_t3379535691_StaticFields::get_offset_of__execution_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize782 = { sizeof (SecuritySafeCriticalAttribute_t470887066), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize783 = { sizeof (SuppressUnmanagedCodeSecurityAttribute_t2700062645), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize784 = { sizeof (UnverifiableCodeAttribute_t1329527428), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize785 = { sizeof (ASCIIEncoding_t2173459719), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize786 = { sizeof (Decoder_t592502453), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable786[2] = 
{
	Decoder_t592502453::get_offset_of_fallback_0(),
	Decoder_t592502453::get_offset_of_fallback_buffer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize787 = { sizeof (DecoderExceptionFallback_t1531893410), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize788 = { sizeof (DecoderExceptionFallbackBuffer_t1343452076), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize789 = { sizeof (DecoderFallback_t906753351), -1, sizeof(DecoderFallback_t906753351_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable789[3] = 
{
	DecoderFallback_t906753351_StaticFields::get_offset_of_exception_fallback_0(),
	DecoderFallback_t906753351_StaticFields::get_offset_of_replacement_fallback_1(),
	DecoderFallback_t906753351_StaticFields::get_offset_of_standard_safe_fallback_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize790 = { sizeof (DecoderFallbackBuffer_t1564444004), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize791 = { sizeof (DecoderFallbackException_t4098214368), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable791[2] = 
{
	DecoderFallbackException_t4098214368::get_offset_of_bytes_unknown_13(),
	DecoderFallbackException_t4098214368::get_offset_of_index_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize792 = { sizeof (DecoderReplacementFallback_t3186586878), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable792[1] = 
{
	DecoderReplacementFallback_t3186586878::get_offset_of_replacement_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize793 = { sizeof (DecoderReplacementFallbackBuffer_t1669699637), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable793[3] = 
{
	DecoderReplacementFallbackBuffer_t1669699637::get_offset_of_fallback_assigned_0(),
	DecoderReplacementFallbackBuffer_t1669699637::get_offset_of_current_1(),
	DecoderReplacementFallbackBuffer_t1669699637::get_offset_of_replacement_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize794 = { sizeof (EncoderExceptionFallback_t2624432459), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize795 = { sizeof (EncoderExceptionFallbackBuffer_t3764308000), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize796 = { sizeof (EncoderFallback_t142657651), -1, sizeof(EncoderFallback_t142657651_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable796[3] = 
{
	EncoderFallback_t142657651_StaticFields::get_offset_of_exception_fallback_0(),
	EncoderFallback_t142657651_StaticFields::get_offset_of_replacement_fallback_1(),
	EncoderFallback_t142657651_StaticFields::get_offset_of_standard_safe_fallback_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize797 = { sizeof (EncoderFallbackBuffer_t1622454757), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize798 = { sizeof (EncoderFallbackException_t1597418084), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable798[4] = 
{
	EncoderFallbackException_t1597418084::get_offset_of_char_unknown_13(),
	EncoderFallbackException_t1597418084::get_offset_of_char_unknown_high_14(),
	EncoderFallbackException_t1597418084::get_offset_of_char_unknown_low_15(),
	EncoderFallbackException_t1597418084::get_offset_of_index_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize799 = { sizeof (EncoderReplacementFallback_t453060416), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable799[1] = 
{
	EncoderReplacementFallback_t453060416::get_offset_of_replacement_3(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
