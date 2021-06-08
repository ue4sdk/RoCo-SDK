// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ReticleHair_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ReticleHair.WBP_ReticleHair_C.SetColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            NewColor                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ReticleHair_C::SetColor(const struct FLinearColor& NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ReticleHair.WBP_ReticleHair_C.SetColor");

	struct
	{
		struct FLinearColor            NewColor;
	} params;

	params.NewColor = NewColor;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ReticleHair.WBP_ReticleHair_C.SetHeight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewHeight                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ReticleHair_C::SetHeight(float NewHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ReticleHair.WBP_ReticleHair_C.SetHeight");

	struct
	{
		float                          NewHeight;
	} params;

	params.NewHeight = NewHeight;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ReticleHair.WBP_ReticleHair_C.SetTextureByWidth
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            CrosshairWidth                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ReticleHair_C::SetTextureByWidth(int CrosshairWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ReticleHair.WBP_ReticleHair_C.SetTextureByWidth");

	struct
	{
		int                            CrosshairWidth;
	} params;

	params.CrosshairWidth = CrosshairWidth;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
