// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_news_cardpanels_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_news_cardpanels.WBP_news_cardpanels_C.HandleInputState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_news_cardpanels_C::HandleInputState(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_cardpanels.WBP_news_cardpanels_C.HandleInputState");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_news_cardpanels.WBP_news_cardpanels_C.SetCloseBtnGamepadPrompt
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              GamepadPrompt                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_news_cardpanels_C::SetCloseBtnGamepadPrompt(class UTexture2D* GamepadPrompt)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_cardpanels.WBP_news_cardpanels_C.SetCloseBtnGamepadPrompt");

	struct
	{
		class UTexture2D*              GamepadPrompt;
	} params;

	params.GamepadPrompt = GamepadPrompt;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_news_cardpanels.WBP_news_cardpanels_C.GetCloseBtn
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UKSWidget*               CloseBtn                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_news_cardpanels_C::GetCloseBtn(class UKSWidget** CloseBtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_cardpanels.WBP_news_cardpanels_C.GetCloseBtn");

	struct
	{
		class UKSWidget*               CloseBtn;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (CloseBtn != nullptr)
		*CloseBtn = params.CloseBtn;
}


// Function WBP_news_cardpanels.WBP_news_cardpanels_C.InitializeCloseBtn
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_news_cardpanels_C::InitializeCloseBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_cardpanels.WBP_news_cardpanels_C.InitializeCloseBtn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_news_cardpanels.WBP_news_cardpanels_C.PopulateCards
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UKSWhatsNewPanel*> NewsPanelData                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UWBP_news_cardpanels_C::PopulateCards(TArray<class UKSWhatsNewPanel*>* NewsPanelData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_cardpanels.WBP_news_cardpanels_C.PopulateCards");

	struct
	{
		TArray<class UKSWhatsNewPanel*> NewsPanelData;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (NewsPanelData != nullptr)
		*NewsPanelData = params.NewsPanelData;
}


// Function WBP_news_cardpanels.WBP_news_cardpanels_C.SetNewsCard
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_news_cardpanels_C::SetNewsCard()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_cardpanels.WBP_news_cardpanels_C.SetNewsCard");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_news_cardpanels.WBP_news_cardpanels_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_news_cardpanels_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_cardpanels.WBP_news_cardpanels_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_news_cardpanels.WBP_news_cardpanels_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_news_cardpanels_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_cardpanels.WBP_news_cardpanels_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_news_cardpanels.WBP_news_cardpanels_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_news_cardpanels_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_cardpanels.WBP_news_cardpanels_C.OnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_news_cardpanels.WBP_news_cardpanels_C.HandleCloseHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_news_cardpanels_C::HandleCloseHovered(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_cardpanels.WBP_news_cardpanels_C.HandleCloseHovered");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_news_cardpanels.WBP_news_cardpanels_C.HandleCLoseUnhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_news_cardpanels_C::HandleCLoseUnhovered(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_cardpanels.WBP_news_cardpanels_C.HandleCLoseUnhovered");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_news_cardpanels.WBP_news_cardpanels_C.HandleCloseClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_news_cardpanels_C::HandleCloseClicked(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_cardpanels.WBP_news_cardpanels_C.HandleCloseClicked");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_news_cardpanels.WBP_news_cardpanels_C.ExecuteUbergraph_WBP_news_cardpanels
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_news_cardpanels_C::ExecuteUbergraph_WBP_news_cardpanels(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_cardpanels.WBP_news_cardpanels_C.ExecuteUbergraph_WBP_news_cardpanels");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_news_cardpanels.WBP_news_cardpanels_C.OnCloseBtnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_news_cardpanels_C::OnCloseBtnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_cardpanels.WBP_news_cardpanels_C.OnCloseBtnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
