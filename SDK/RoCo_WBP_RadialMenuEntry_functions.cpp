// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RadialMenuEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.SetHoverOverlay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsShowingHover                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RadialMenuEntry_C::SetHoverOverlay(bool IsShowingHover)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.SetHoverOverlay"));

	struct
	{
		bool                           IsShowingHover;
	} params;

	params.IsShowingHover = IsShowingHover;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.SetDisabled
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDisabled                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RadialMenuEntry_C::SetDisabled(bool IsDisabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.SetDisabled"));

	struct
	{
		bool                           IsDisabled;
	} params;

	params.IsDisabled = IsDisabled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.ShowBigTextInsteadOfIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShowBigText                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RadialMenuEntry_C::ShowBigTextInsteadOfIcon(bool ShowBigText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.ShowBigTextInsteadOfIcon"));

	struct
	{
		bool                           ShowBigText;
	} params;

	params.ShowBigText = ShowBigText;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.SetEmpty
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RadialMenuEntry_C::SetEmpty()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.SetEmpty"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.SetIconColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            LinearColor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RadialMenuEntry_C::SetIconColor(const struct FLinearColor& LinearColor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.SetIconColor"));

	struct
	{
		struct FLinearColor            LinearColor;
	} params;

	params.LinearColor = LinearColor;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.SetIconFromSoftTexture
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D> Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_RadialMenuEntry_C::SetIconFromSoftTexture(TSoftObjectPtr<class UTexture2D> Texture)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.SetIconFromSoftTexture"));

	struct
	{
		TSoftObjectPtr<class UTexture2D> Texture;
	} params;

	params.Texture = Texture;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.Set IconAndName
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSItem*                 Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ShowSmallText                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RadialMenuEntry_C::Set_IconAndName(class UKSItem* Item, bool ShowSmallText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.Set IconAndName"));

	struct
	{
		class UKSItem*                 Item;
		bool                           ShowSmallText;
	} params;

	params.Item = Item;
	params.ShowSmallText = ShowSmallText;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.SetRotation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Angle                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RadialMenuEntry_C::SetRotation(float Angle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.SetRotation"));

	struct
	{
		float                          Angle;
	} params;

	params.Angle = Angle;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RadialMenuEntry_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.OnInitialized"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.ExecuteUbergraph_WBP_RadialMenuEntry
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RadialMenuEntry_C::ExecuteUbergraph_WBP_RadialMenuEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.ExecuteUbergraph_WBP_RadialMenuEntry"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
