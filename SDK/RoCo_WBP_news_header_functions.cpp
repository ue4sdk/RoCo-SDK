// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_news_header_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_news_header.WBP_news_header_C.SetHeaderText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   TitleText                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_news_header_C::SetHeaderText(const struct FText& TitleText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_header.WBP_news_header_C.SetHeaderText");

	struct
	{
		struct FText                   TitleText;
	} params;

	params.TitleText = TitleText;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_news_header.WBP_news_header_C.Add Settings Group Widget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSSettingsGroup*        Settings_Group_Widget          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_news_header_C::Add_Settings_Group_Widget(class UKSSettingsGroup* Settings_Group_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_header.WBP_news_header_C.Add Settings Group Widget");

	struct
	{
		class UKSSettingsGroup*        Settings_Group_Widget;
	} params;

	params.Settings_Group_Widget = Settings_Group_Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_news_header.WBP_news_header_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_news_header_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_header.WBP_news_header_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_news_header.WBP_news_header_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_news_header_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_header.WBP_news_header_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_news_header.WBP_news_header_C.ExecuteUbergraph_WBP_news_header
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_news_header_C::ExecuteUbergraph_WBP_news_header(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_header.WBP_news_header_C.ExecuteUbergraph_WBP_news_header");

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
