// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_KSCosmeticItemDisplay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetRarity
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   GameplayTag                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_KSCosmeticItemDisplay_C::SetRarity(const struct FGameplayTagContainer& GameplayTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetRarity");

	struct
	{
		struct FGameplayTagContainer   GameplayTag;
	} params;

	params.GameplayTag = GameplayTag;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetHeaderSlot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KSCosmeticItemDisplay_C::SetHeaderSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetHeaderSlot");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetupPriceData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KSCosmeticItemDisplay_C::SetupPriceData()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetupPriceData");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetIsOwned
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsOwned                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_KSCosmeticItemDisplay_C::SetIsOwned(bool IsOwned)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetIsOwned");

	struct
	{
		bool                           IsOwned;
	} params;

	params.IsOwned = IsOwned;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetQuantityText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KSCosmeticItemDisplay_C::SetQuantityText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetQuantityText");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetFreeLabel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KSCosmeticItemDisplay_C::SetFreeLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetFreeLabel");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.ReverseBackgroundHoverNoZoom
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KSCosmeticItemDisplay_C::ReverseBackgroundHoverNoZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.ReverseBackgroundHoverNoZoom");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.BackgroundHoverNoZoom
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KSCosmeticItemDisplay_C::BackgroundHoverNoZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.BackgroundHoverNoZoom");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetItemOwned
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem*         StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KSCosmeticItemDisplay_C::SetItemOwned(class UPUMG_StoreItem* StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetItemOwned");

	struct
	{
		class UPUMG_StoreItem*         StoreItem;
	} params;

	params.StoreItem = StoreItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_KSCosmeticItemDisplay_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.ResetSlot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KSCosmeticItemDisplay_C::ResetSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.ResetSlot");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetWeaponSlot
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KSCosmeticItemDisplay_C::SetWeaponSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetWeaponSlot");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetCornerIcon
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bShowIcon                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FSoftObjectPath         Soft_Image_Path                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UWBP_KSCosmeticItemDisplay_C::SetCornerIcon(bool bShowIcon, struct FSoftObjectPath* Soft_Image_Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetCornerIcon");

	struct
	{
		bool                           bShowIcon;
		struct FSoftObjectPath         Soft_Image_Path;
	} params;

	params.bShowIcon = bShowIcon;

	UObject::ProcessEvent(fn, &params);

	if (Soft_Image_Path != nullptr)
		*Soft_Image_Path = params.Soft_Image_Path;
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetCosmeticSlot
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KSCosmeticItemDisplay_C::SetCosmeticSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetCosmeticSlot");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnClickSound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KSCosmeticItemDisplay_C::OnClickSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnClickSound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnHoverSound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KSCosmeticItemDisplay_C::OnHoverSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnHoverSound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.PopulateSlot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPlatformInventoryItem*  PlatformItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSJobItem*              AssiocatedJobItem              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPUMG_StoreItem*         StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KSCosmeticItemDisplay_C::PopulateSlot(class UPlatformInventoryItem* PlatformItem, class UKSJobItem* AssiocatedJobItem, class UPUMG_StoreItem* StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.PopulateSlot");

	struct
	{
		class UPlatformInventoryItem*  PlatformItem;
		class UKSJobItem*              AssiocatedJobItem;
		class UPUMG_StoreItem*         StoreItem;
	} params;

	params.PlatformItem = PlatformItem;
	params.AssiocatedJobItem = AssiocatedJobItem;
	params.StoreItem = StoreItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_KSCosmeticItemDisplay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsGamepad                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_KSCosmeticItemDisplay_C::OnHovered(bool IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnHovered");

	struct
	{
		bool                           IsGamepad;
	} params;

	params.IsGamepad = IsGamepad;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnButtonUnhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KSCosmeticItemDisplay_C::OnButtonUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnButtonUnhovered");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KSCosmeticItemDisplay_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_KSCosmeticItemDisplay_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnButtonClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KSCosmeticItemDisplay_C::OnButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnButtonClicked");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_KSCosmeticItemDisplay_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_KSCosmeticItemDisplay_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.CallHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KSCosmeticItemDisplay_C::CallHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.CallHovered");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.CallUnhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KSCosmeticItemDisplay_C::CallUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.CallUnhovered");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetSlotActive
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Active                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_KSCosmeticItemDisplay_C::SetSlotActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetSlotActive");

	struct
	{
		bool                           Active;
	} params;

	params.Active = Active;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.ExecuteUbergraph_WBP_KSCosmeticItemDisplay
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KSCosmeticItemDisplay_C::ExecuteUbergraph_WBP_KSCosmeticItemDisplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.ExecuteUbergraph_WBP_KSCosmeticItemDisplay");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnCosmeticClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_KSCosmeticItemDisplay_C* Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FCosmeticSlotDetails    CosmeticSlotDetails            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KSCosmeticItemDisplay_C::OnCosmeticClicked__DelegateSignature(class UWBP_KSCosmeticItemDisplay_C* Widget, const struct FCosmeticSlotDetails& CosmeticSlotDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnCosmeticClicked__DelegateSignature");

	struct
	{
		class UWBP_KSCosmeticItemDisplay_C* Widget;
		struct FCosmeticSlotDetails    CosmeticSlotDetails;
	} params;

	params.Widget = Widget;
	params.CosmeticSlotDetails = CosmeticSlotDetails;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnUnhover__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KSCosmeticItemDisplay_C::OnUnhover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnUnhover__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnHover__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCosmeticSlotDetails    CosmeticSlotDetails            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsGamepad                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UWBP_KSCosmeticItemDisplay_C* Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KSCosmeticItemDisplay_C::OnHover__DelegateSignature(const struct FCosmeticSlotDetails& CosmeticSlotDetails, bool IsGamepad, class UWBP_KSCosmeticItemDisplay_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnHover__DelegateSignature");

	struct
	{
		struct FCosmeticSlotDetails    CosmeticSlotDetails;
		bool                           IsGamepad;
		class UWBP_KSCosmeticItemDisplay_C* Widget;
	} params;

	params.CosmeticSlotDetails = CosmeticSlotDetails;
	params.IsGamepad = IsGamepad;
	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
