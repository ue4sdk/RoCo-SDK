// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_AllyDeathMinimapIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AllyDeathMinimapIcon.AllyDeathMinimapIcon_C.ShouldUpdate
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UAllyDeathMinimapIcon_C::ShouldUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyDeathMinimapIcon.AllyDeathMinimapIcon_C.ShouldUpdate");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AllyDeathMinimapIcon.AllyDeathMinimapIcon_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAllyDeathMinimapIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyDeathMinimapIcon.AllyDeathMinimapIcon_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AllyDeathMinimapIcon.AllyDeathMinimapIcon_C.Start Fade
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAllyDeathMinimapIcon_C::Start_Fade()
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyDeathMinimapIcon.AllyDeathMinimapIcon_C.Start Fade");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AllyDeathMinimapIcon.AllyDeathMinimapIcon_C.UpdateMeetsHeightThreshold
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bHeight                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bDepth                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UAllyDeathMinimapIcon_C::UpdateMeetsHeightThreshold(bool bHeight, bool bDepth)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyDeathMinimapIcon.AllyDeathMinimapIcon_C.UpdateMeetsHeightThreshold");

	struct
	{
		bool                           bHeight;
		bool                           bDepth;
	} params;

	params.bHeight = bHeight;
	params.bDepth = bDepth;

	UObject::ProcessEvent(fn, &params);
}


// Function AllyDeathMinimapIcon.AllyDeathMinimapIcon_C.HandleMapIconWidgetReady
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAllyDeathMinimapIcon_C::HandleMapIconWidgetReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyDeathMinimapIcon.AllyDeathMinimapIcon_C.HandleMapIconWidgetReady");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AllyDeathMinimapIcon.AllyDeathMinimapIcon_C.ExecuteUbergraph_AllyDeathMinimapIcon
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAllyDeathMinimapIcon_C::ExecuteUbergraph_AllyDeathMinimapIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyDeathMinimapIcon.AllyDeathMinimapIcon_C.ExecuteUbergraph_AllyDeathMinimapIcon");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function AllyDeathMinimapIcon.AllyDeathMinimapIcon_C.PingExpired__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  IconType                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            UniqueId                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAllyDeathMinimapIcon_C::PingExpired__DelegateSignature(unsigned char IconType, int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyDeathMinimapIcon.AllyDeathMinimapIcon_C.PingExpired__DelegateSignature");

	struct
	{
		unsigned char                  IconType;
		int                            UniqueId;
	} params;

	params.IconType = IconType;
	params.UniqueId = UniqueId;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
