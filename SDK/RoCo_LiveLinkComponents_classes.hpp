#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_LiveLinkComponents_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LiveLinkComponents.LiveLinkControllerBase
// 0x0008 (0x0030 - 0x0028)
class ULiveLinkControllerBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LiveLinkComponents.LiveLinkControllerBase"));
		return ptr;
	}

};


// Class LiveLinkComponents.LiveLinkCameraController
// 0x0000 (0x0030 - 0x0030)
class ULiveLinkCameraController : public ULiveLinkControllerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LiveLinkComponents.LiveLinkCameraController"));
		return ptr;
	}

};


// Class LiveLinkComponents.LiveLinkComponentController
// 0x00A8 (0x0158 - 0x00B0)
class ULiveLinkComponentController : public UActorComponent
{
public:
	struct FLiveLinkSubjectRepresentation              SubjectRepresentation;                                    // 0x00B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	TMap<class UClass*, class ULiveLinkControllerBase*> ControllerMap;                                            // 0x00C0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_NoClear, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	bool                                               bUpdateInEditor;                                          // 0x0110(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnLiveLinkUpdated;                                        // 0x0118(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FComponentReference                         ComponentToControl;                                       // 0x0128(0x0028) (CPF_Edit, CPF_DisableEditOnTemplate, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0150(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LiveLinkComponents.LiveLinkComponentController"));
		return ptr;
	}

};


// Class LiveLinkComponents.LiveLinkComponentSettings
// 0x0050 (0x0078 - 0x0028)
class ULiveLinkComponentSettings : public UObject
{
public:
	TMap<class UClass*, class UClass*>                 DefaultControllerForRole;                                 // 0x0028(0x0050) (CPF_Edit, CPF_Config, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LiveLinkComponents.LiveLinkComponentSettings"));
		return ptr;
	}

};


// Class LiveLinkComponents.LiveLinkLightController
// 0x0000 (0x0030 - 0x0030)
class ULiveLinkLightController : public ULiveLinkControllerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LiveLinkComponents.LiveLinkLightController"));
		return ptr;
	}

};


// Class LiveLinkComponents.LiveLinkTransformController
// 0x0008 (0x0038 - 0x0030)
class ULiveLinkTransformController : public ULiveLinkControllerBase
{
public:
	struct FLiveLinkTransformControllerData            TransformData;                                            // 0x0030(0x0004) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LiveLinkComponents.LiveLinkTransformController"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
