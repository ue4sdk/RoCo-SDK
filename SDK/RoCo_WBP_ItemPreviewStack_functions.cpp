// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ItemPreviewStack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.SetPreviewJob
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobItem*              Job_Item                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemPreviewStack_C::SetPreviewJob(class UKSJobItem* Job_Item)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.SetPreviewJob"));

	struct
	{
		class UKSJobItem*              Job_Item;
	} params;

	params.Job_Item = Job_Item;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.SetTitle
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSItem*                 KSItem                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemPreviewStack_C::SetTitle(class UKSItem* KSItem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.SetTitle"));

	struct
	{
		class UKSItem*                 KSItem;
	} params;

	params.KSItem = KSItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.Set2DPreviewImage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSItem*                 KSItem                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemPreviewStack_C::Set2DPreviewImage(class UKSItem* KSItem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.Set2DPreviewImage"));

	struct
	{
		class UKSItem*                 KSItem;
	} params;

	params.KSItem = KSItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.Set Emote
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSItem*                 EmoteItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemPreviewStack_C::Set_Emote(class UKSItem* EmoteItem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.Set Emote"));

	struct
	{
		class UKSItem*                 EmoteItem;
	} params;

	params.EmoteItem = EmoteItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.SetSkinOrRogueModel
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSSkinBundle*           SkinBundle                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemPreviewStack_C::SetSkinOrRogueModel(class UKSSkinBundle* SkinBundle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.SetSkinOrRogueModel"));

	struct
	{
		class UKSSkinBundle*           SkinBundle;
	} params;

	params.SkinBundle = SkinBundle;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.DisplayItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem*         StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemPreviewStack_C::DisplayItem(class UPUMG_StoreItem* StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.DisplayItem"));

	struct
	{
		class UPUMG_StoreItem*         StoreItem;
	} params;

	params.StoreItem = StoreItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.ClearDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ItemPreviewStack_C::ClearDisplay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.ClearDisplay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemPreviewStack_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ItemPreviewStack_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.ExecuteUbergraph_WBP_ItemPreviewStack
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemPreviewStack_C::ExecuteUbergraph_WBP_ItemPreviewStack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.ExecuteUbergraph_WBP_ItemPreviewStack"));

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
