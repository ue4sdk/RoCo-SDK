// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_LoginRewardsGrid_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.GetRewardItems
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UWBP_LoginRewardItem_C*> RewardItems                    (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_LoginRewardsGrid_C::GetRewardItems(TArray<class UWBP_LoginRewardItem_C*>* RewardItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.GetRewardItems");

	struct
	{
		TArray<class UWBP_LoginRewardItem_C*> RewardItems;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (RewardItems != nullptr)
		*RewardItems = params.RewardItems;
}


// Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.SetMaxPerRow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Num                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LoginRewardsGrid_C::SetMaxPerRow(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.SetMaxPerRow");

	struct
	{
		int                            Num;
	} params;

	params.Num = Num;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.GetRewardItemAtIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWBP_LoginRewardItem_C*  RewardItem                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LoginRewardsGrid_C::GetRewardItemAtIndex(int Index, class UWBP_LoginRewardItem_C** RewardItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.GetRewardItemAtIndex");

	struct
	{
		int                            Index;
		class UWBP_LoginRewardItem_C*  RewardItem;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);

	if (RewardItem != nullptr)
		*RewardItem = params.RewardItem;
}


// Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.HandleClaimRewardAnimFinished
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_LoginRewardsGrid_C::HandleClaimRewardAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.HandleClaimRewardAnimFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.ResetGrid
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_LoginRewardsGrid_C::ResetGrid()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.ResetGrid");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.PopulateRewardGrid
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FLoginRewardItem> RewardItems                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// bool                           AllowClaimReward               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_LoginRewardsGrid_C::PopulateRewardGrid(bool AllowClaimReward, TArray<struct FLoginRewardItem>* RewardItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.PopulateRewardGrid");

	struct
	{
		TArray<struct FLoginRewardItem> RewardItems;
		bool                           AllowClaimReward;
	} params;

	params.AllowClaimReward = AllowClaimReward;

	UObject::ProcessEvent(fn, &params);

	if (RewardItems != nullptr)
		*RewardItems = params.RewardItems;
}


// Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.HandleOnRewardHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_LoginRewardItem_C*  RewardItemWidget               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LoginRewardsGrid_C::HandleOnRewardHovered(class UWBP_LoginRewardItem_C* RewardItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.HandleOnRewardHovered");

	struct
	{
		class UWBP_LoginRewardItem_C*  RewardItemWidget;
	} params;

	params.RewardItemWidget = RewardItemWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.HandleOnRewardUnhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_LoginRewardsGrid_C::HandleOnRewardUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.HandleOnRewardUnhovered");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.HandleOnRewardClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLoginRewardItem        RewardItem                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_LoginRewardsGrid_C::HandleOnRewardClicked(const struct FLoginRewardItem& RewardItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.HandleOnRewardClicked");

	struct
	{
		struct FLoginRewardItem        RewardItem;
	} params;

	params.RewardItem = RewardItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.ExecuteUbergraph_WBP_LoginRewardsGrid
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LoginRewardsGrid_C::ExecuteUbergraph_WBP_LoginRewardsGrid(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.ExecuteUbergraph_WBP_LoginRewardsGrid");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.OnRewardClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLoginRewardItem        RewardItem                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_LoginRewardsGrid_C::OnRewardClicked__DelegateSignature(const struct FLoginRewardItem& RewardItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.OnRewardClicked__DelegateSignature");

	struct
	{
		struct FLoginRewardItem        RewardItem;
	} params;

	params.RewardItem = RewardItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.OnRewardUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_LoginRewardsGrid_C::OnRewardUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.OnRewardUnhovered__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.OnRewardHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_LoginRewardItem_C*  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LoginRewardsGrid_C::OnRewardHovered__DelegateSignature(class UWBP_LoginRewardItem_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.OnRewardHovered__DelegateSignature");

	struct
	{
		class UWBP_LoginRewardItem_C*  Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.OnRewardItemsPopulated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_LoginRewardsGrid_C::OnRewardItemsPopulated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.OnRewardItemsPopulated__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.OnClaimRewardAnimComplete__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_LoginRewardsGrid_C::OnClaimRewardAnimComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.OnClaimRewardAnimComplete__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
