// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_LoginDownloadProgressBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LoginDownloadProgressBar.LoginDownloadProgressBar_C.Make Progress Text
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          Percent                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Seconds                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Supports_ETA                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   Text                           (CPF_Parm, CPF_OutParm)

void ULoginDownloadProgressBar_C::Make_Progress_Text(float Percent, float Seconds, bool Supports_ETA, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginDownloadProgressBar.LoginDownloadProgressBar_C.Make Progress Text");

	struct
	{
		float                          Percent;
		float                          Seconds;
		bool                           Supports_ETA;
		struct FText                   Text;
	} params;

	params.Percent = Percent;
	params.Seconds = Seconds;
	params.Supports_ETA = Supports_ETA;

	UObject::ProcessEvent(fn, &params);

	if (Text != nullptr)
		*Text = params.Text;
}


// Function LoginDownloadProgressBar.LoginDownloadProgressBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULoginDownloadProgressBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginDownloadProgressBar.LoginDownloadProgressBar_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginDownloadProgressBar.LoginDownloadProgressBar_C.UpdatedDownloadProgress
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Total                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Eta                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bSupportsEta                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ULoginDownloadProgressBar_C::UpdatedDownloadProgress(float Progress, float Total, float Eta, bool bSupportsEta)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginDownloadProgressBar.LoginDownloadProgressBar_C.UpdatedDownloadProgress");

	struct
	{
		float                          Progress;
		float                          Total;
		float                          Eta;
		bool                           bSupportsEta;
	} params;

	params.Progress = Progress;
	params.Total = Total;
	params.Eta = Eta;
	params.bSupportsEta = bSupportsEta;

	UObject::ProcessEvent(fn, &params);
}


// Function LoginDownloadProgressBar.LoginDownloadProgressBar_C.UpdateFinished
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ULoginDownloadProgressBar_C::UpdateFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginDownloadProgressBar.LoginDownloadProgressBar_C.UpdateFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginDownloadProgressBar.LoginDownloadProgressBar_C.ExecuteUbergraph_LoginDownloadProgressBar
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoginDownloadProgressBar_C::ExecuteUbergraph_LoginDownloadProgressBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginDownloadProgressBar.LoginDownloadProgressBar_C.ExecuteUbergraph_LoginDownloadProgressBar");

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
