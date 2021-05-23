#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PlayerIdentity_Banner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_PlayerIdentity_Banner.WBP_PlayerIdentity_Banner_C
// 0x0010 (0x04F0 - 0x04E0)
class UWBP_PlayerIdentity_Banner_C : public UKSWidget
{
public:
	class UWBP_AsyncIcon_C*                            BannerIcon;                                               // 0x04E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_AsyncIcon_C*                            BorderIcon;                                               // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_PlayerIdentity_Banner.WBP_PlayerIdentity_Banner_C"));
		return ptr;
	}


	void SetBorderFromIconInfo(class UIconInfo* Icon_Info);
	void SetBannerFromIconInfo(class UIconInfo* Icon_Info);
	void HideBorder();
	void SetBorder(TSoftObjectPtr<class UTexture2D> Texture);
	void SetBanner(TSoftObjectPtr<class UTexture2D> Texture);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
