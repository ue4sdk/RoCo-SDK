// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PlatformIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PlatformIcon.WBP_PlatformIcon_C.SetPlatform
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EKSPlatformType                Platform                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlatformIcon_C::SetPlatform(EKSPlatformType Platform)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlatformIcon.WBP_PlatformIcon_C.SetPlatform");

	struct
	{
		EKSPlatformType                Platform;
	} params;

	params.Platform = Platform;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlatformIcon.WBP_PlatformIcon_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlatformIcon_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlatformIcon.WBP_PlatformIcon_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlatformIcon.WBP_PlatformIcon_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PlatformIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlatformIcon.WBP_PlatformIcon_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlatformIcon.WBP_PlatformIcon_C.ExecuteUbergraph_WBP_PlatformIcon
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlatformIcon_C::ExecuteUbergraph_WBP_PlatformIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlatformIcon.WBP_PlatformIcon_C.ExecuteUbergraph_WBP_PlatformIcon");

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
