// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_LoginRewardItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.SetRarity
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   GameplayTag                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_LoginRewardItem_C::SetRarity(const struct FGameplayTagContainer& GameplayTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.SetRarity");

	struct
	{
		struct FGameplayTagContainer   GameplayTag;
	} params;

	params.GameplayTag = GameplayTag;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.SetColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            RarityColor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            RarityColorLight               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LoginRewardItem_C::SetColor(const struct FLinearColor& RarityColor, const struct FLinearColor& RarityColorLight)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.SetColor");

	struct
	{
		struct FLinearColor            RarityColor;
		struct FLinearColor            RarityColorLight;
	} params;

	params.RarityColor = RarityColor;
	params.RarityColorLight = RarityColorLight;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.SetCustomRarity
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDataTable*              DataTable                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPUMG_StoreItem*         StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LoginRewardItem_C::SetCustomRarity(class UDataTable* DataTable, class UPUMG_StoreItem* StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.SetCustomRarity");

	struct
	{
		class UDataTable*              DataTable;
		class UPUMG_StoreItem*         StoreItem;
	} params;

	params.DataTable = DataTable;
	params.StoreItem = StoreItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.GetCustomRarity
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UPUMG_StoreItem*         StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           UseCustomRarity                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UDataTable*              DataTable                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LoginRewardItem_C::GetCustomRarity(class UPUMG_StoreItem* StoreItem, bool* UseCustomRarity, class UDataTable** DataTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.GetCustomRarity");

	struct
	{
		class UPUMG_StoreItem*         StoreItem;
		bool                           UseCustomRarity;
		class UDataTable*              DataTable;
	} params;

	params.StoreItem = StoreItem;

	UObject::ProcessEvent(fn, &params);

	if (UseCustomRarity != nullptr)
		*UseCustomRarity = params.UseCustomRarity;
	if (DataTable != nullptr)
		*DataTable = params.DataTable;
}


// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.SetRewardItemVisualState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ERewardState                   RewardState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LoginRewardItem_C::SetRewardItemVisualState(ERewardState RewardState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.SetRewardItemVisualState");

	struct
	{
		ERewardState                   RewardState;
	} params;

	params.RewardState = RewardState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.PopulateRewardItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLoginRewardItem        RewardItem                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_LoginRewardItem_C::PopulateRewardItem(const struct FLoginRewardItem& RewardItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.PopulateRewardItem");

	struct
	{
		struct FLoginRewardItem        RewardItem;
	} params;

	params.RewardItem = RewardItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.SetRarityColorByInventoryItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPlatformInventoryItem*  InventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LoginRewardItem_C::SetRarityColorByInventoryItem(class UPlatformInventoryItem* InventoryItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.SetRarityColorByInventoryItem");

	struct
	{
		class UPlatformInventoryItem*  InventoryItem;
	} params;

	params.InventoryItem = InventoryItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.PlayClaimAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_LoginRewardItem_C::PlayClaimAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.PlayClaimAnimation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_LoginRewardItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.HandleClaimAnimFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_LoginRewardItem_C::HandleClaimAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.HandleClaimAnimFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_LoginRewardItem_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_LoginRewardItem_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_LoginRewardItem_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_LoginRewardItem_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_LoginRewardItem_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.ExecuteUbergraph_WBP_LoginRewardItem
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LoginRewardItem_C::ExecuteUbergraph_WBP_LoginRewardItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.ExecuteUbergraph_WBP_LoginRewardItem");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.OnRewardClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLoginRewardItem        RewardItem                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_LoginRewardItem_C::OnRewardClicked__DelegateSignature(const struct FLoginRewardItem& RewardItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.OnRewardClicked__DelegateSignature");

	struct
	{
		struct FLoginRewardItem        RewardItem;
	} params;

	params.RewardItem = RewardItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.OnRewardUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_LoginRewardItem_C::OnRewardUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.OnRewardUnhovered__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.OnRewardHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_LoginRewardItem_C*  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LoginRewardItem_C::OnRewardHovered__DelegateSignature(class UWBP_LoginRewardItem_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.OnRewardHovered__DelegateSignature");

	struct
	{
		class UWBP_LoginRewardItem_C*  Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.ClaimAnimationComplete__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_LoginRewardItem_C::ClaimAnimationComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.ClaimAnimationComplete__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
