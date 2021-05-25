#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PlayerIdentity_Avatar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_PlayerIdentity_Avatar.WBP_PlayerIdentity_Avatar_C
// 0x0008 (0x04E8 - 0x04E0)
class UWBP_PlayerIdentity_Avatar_C : public UKSWidget
{
public:
	class UWBP_AsyncIcon_C*                            AvatarIcon;                                               // 0x04E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_PlayerIdentity_Avatar.WBP_PlayerIdentity_Avatar_C");
		return ptr;
	}


	void SetAvatarFromPath(const struct FSoftObjectPath& Icon_Path);
	void SetAvatar(TSoftObjectPtr<class UTexture2D> Texture);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
