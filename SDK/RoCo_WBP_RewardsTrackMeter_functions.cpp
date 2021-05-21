// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RewardsTrackMeter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RewardsTrackMeter.WBP_RewardsTrackMeter_C.Create Segments
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RewardsTrackMeter_C::Create_Segments()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RewardsTrackMeter.WBP_RewardsTrackMeter_C.Create Segments");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RewardsTrackMeter.WBP_RewardsTrackMeter_C.Set From Activity Instance
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSActivityInstance*     Progression                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Starting_Tier                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RewardsTrackMeter_C::Set_From_Activity_Instance(class UKSActivityInstance* Progression, int Starting_Tier)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RewardsTrackMeter.WBP_RewardsTrackMeter_C.Set From Activity Instance");

	struct
	{
		class UKSActivityInstance*     Progression;
		int                            Starting_Tier;
	} params;

	params.Progression = Progression;
	params.Starting_Tier = Starting_Tier;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RewardsTrackMeter.WBP_RewardsTrackMeter_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RewardsTrackMeter_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RewardsTrackMeter.WBP_RewardsTrackMeter_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RewardsTrackMeter.WBP_RewardsTrackMeter_C.ExecuteUbergraph_WBP_RewardsTrackMeter
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RewardsTrackMeter_C::ExecuteUbergraph_WBP_RewardsTrackMeter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RewardsTrackMeter.WBP_RewardsTrackMeter_C.ExecuteUbergraph_WBP_RewardsTrackMeter");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RewardsTrackMeter.WBP_RewardsTrackMeter_C.OnLerpUpdate__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          CurrentLerpPercantage          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RewardsTrackMeter_C::OnLerpUpdate__DelegateSignature(float CurrentLerpPercantage)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RewardsTrackMeter.WBP_RewardsTrackMeter_C.OnLerpUpdate__DelegateSignature");

	struct
	{
		float                          CurrentLerpPercantage;
	} params;

	params.CurrentLerpPercantage = CurrentLerpPercantage;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RewardsTrackMeter.WBP_RewardsTrackMeter_C.OnLevelDownEvent__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewLevel                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RewardsTrackMeter_C::OnLevelDownEvent__DelegateSignature(int NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RewardsTrackMeter.WBP_RewardsTrackMeter_C.OnLevelDownEvent__DelegateSignature");

	struct
	{
		int                            NewLevel;
	} params;

	params.NewLevel = NewLevel;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RewardsTrackMeter.WBP_RewardsTrackMeter_C.OnLevelUpEvent__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewLevel                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RewardsTrackMeter_C::OnLevelUpEvent__DelegateSignature(int NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RewardsTrackMeter.WBP_RewardsTrackMeter_C.OnLevelUpEvent__DelegateSignature");

	struct
	{
		int                            NewLevel;
	} params;

	params.NewLevel = NewLevel;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
