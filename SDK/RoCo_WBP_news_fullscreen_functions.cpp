// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_news_fullscreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_news_fullscreen.WBP_news_fullscreen_C.HandleInputStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_news_fullscreen_C::HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_fullscreen.WBP_news_fullscreen_C.HandleInputStateChanged");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_news_fullscreen.WBP_news_fullscreen_C.SetCloseBtnGamepadPrompt
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              GamepadPrompt                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_news_fullscreen_C::SetCloseBtnGamepadPrompt(class UTexture2D* GamepadPrompt)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_fullscreen.WBP_news_fullscreen_C.SetCloseBtnGamepadPrompt");

	struct
	{
		class UTexture2D*              GamepadPrompt;
	} params;

	params.GamepadPrompt = GamepadPrompt;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_news_fullscreen.WBP_news_fullscreen_C.GetCloseBtn
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UKSWidget*               CloseBtn                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_news_fullscreen_C::GetCloseBtn(class UKSWidget** CloseBtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_fullscreen.WBP_news_fullscreen_C.GetCloseBtn");

	struct
	{
		class UKSWidget*               CloseBtn;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (CloseBtn != nullptr)
		*CloseBtn = params.CloseBtn;
}


// Function WBP_news_fullscreen.WBP_news_fullscreen_C.InitializeCloseBtn
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_news_fullscreen_C::InitializeCloseBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_fullscreen.WBP_news_fullscreen_C.InitializeCloseBtn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_news_fullscreen.WBP_news_fullscreen_C.SetPanelData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWhatsNewPanel*        NewsData                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_news_fullscreen_C::SetPanelData(class UKSWhatsNewPanel* NewsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_fullscreen.WBP_news_fullscreen_C.SetPanelData");

	struct
	{
		class UKSWhatsNewPanel*        NewsData;
	} params;

	params.NewsData = NewsData;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_news_fullscreen.WBP_news_fullscreen_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_news_fullscreen_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_fullscreen.WBP_news_fullscreen_C.OnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_news_fullscreen.WBP_news_fullscreen_C.HandleCloseHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_news_fullscreen_C::HandleCloseHovered(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_fullscreen.WBP_news_fullscreen_C.HandleCloseHovered");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_news_fullscreen.WBP_news_fullscreen_C.HandleCLoseUnhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_news_fullscreen_C::HandleCLoseUnhovered(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_fullscreen.WBP_news_fullscreen_C.HandleCLoseUnhovered");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_news_fullscreen.WBP_news_fullscreen_C.HandleCloseClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_news_fullscreen_C::HandleCloseClicked(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_fullscreen.WBP_news_fullscreen_C.HandleCloseClicked");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_news_fullscreen.WBP_news_fullscreen_C.ExecuteUbergraph_WBP_news_fullscreen
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_news_fullscreen_C::ExecuteUbergraph_WBP_news_fullscreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_fullscreen.WBP_news_fullscreen_C.ExecuteUbergraph_WBP_news_fullscreen");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_news_fullscreen.WBP_news_fullscreen_C.OnCloseBtnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_news_fullscreen_C::OnCloseBtnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_fullscreen.WBP_news_fullscreen_C.OnCloseBtnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
