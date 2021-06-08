#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ReticleHair_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_ReticleHair.WBP_ReticleHair_C
// 0x0018 (0x0250 - 0x0238)
class UWBP_ReticleHair_C : public UUserWidget
{
public:
	class UImage*                                      CrosshairImage;                                           // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<class UTexture2D*>                          CrosshairTextures;                                        // 0x0240(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_ReticleHair.WBP_ReticleHair_C");
		return ptr;
	}


	void SetColor(const struct FLinearColor& NewColor);
	void SetHeight(float NewHeight);
	void SetTextureByWidth(int CrosshairWidth);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
