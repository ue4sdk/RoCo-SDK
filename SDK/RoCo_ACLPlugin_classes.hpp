#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ACLPlugin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ACLPlugin.ACLStatsDumpCommandlet
// 0x0000 (0x0080 - 0x0080)
class UACLStatsDumpCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ACLPlugin.ACLStatsDumpCommandlet");
		return ptr;
	}

};


// Class ACLPlugin.AnimBoneCompressionCodec_ACLBase
// 0x0000 (0x0038 - 0x0038)
class UAnimBoneCompressionCodec_ACLBase : public UAnimBoneCompressionCodec
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ACLPlugin.AnimBoneCompressionCodec_ACLBase");
		return ptr;
	}

};


// Class ACLPlugin.AnimBoneCompressionCodec_ACL
// 0x0008 (0x0040 - 0x0038)
class UAnimBoneCompressionCodec_ACL : public UAnimBoneCompressionCodec_ACLBase
{
public:
	class UAnimBoneCompressionCodec*                   SafetyFallbackCodec;                                      // 0x0038(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ACLPlugin.AnimBoneCompressionCodec_ACL");
		return ptr;
	}

};


// Class ACLPlugin.AnimBoneCompressionCodec_ACLCustom
// 0x0000 (0x0038 - 0x0038)
class UAnimBoneCompressionCodec_ACLCustom : public UAnimBoneCompressionCodec_ACLBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ACLPlugin.AnimBoneCompressionCodec_ACLCustom");
		return ptr;
	}

};


// Class ACLPlugin.AnimBoneCompressionCodec_ACLSafe
// 0x0000 (0x0038 - 0x0038)
class UAnimBoneCompressionCodec_ACLSafe : public UAnimBoneCompressionCodec_ACLBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ACLPlugin.AnimBoneCompressionCodec_ACLSafe");
		return ptr;
	}

};


// Class ACLPlugin.AnimCurveCompressionCodec_ACL
// 0x0000 (0x0028 - 0x0028)
class UAnimCurveCompressionCodec_ACL : public UAnimCurveCompressionCodec
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ACLPlugin.AnimCurveCompressionCodec_ACL");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
