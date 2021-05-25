// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_PlayerHealthMeterSegment_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SequenceEvent__ENTRYPOINTPlayerHealthMeterSegment_2
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UOverlay*                SliceImmuneOverlay             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerHealthMeterSegment_C::SequenceEvent__ENTRYPOINTPlayerHealthMeterSegment_2(class UOverlay* SliceImmuneOverlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SequenceEvent__ENTRYPOINTPlayerHealthMeterSegment_2");

	struct
	{
		class UOverlay*                SliceImmuneOverlay;
	} params;

	params.SliceImmuneOverlay = SliceImmuneOverlay;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SequenceEvent__ENTRYPOINTPlayerHealthMeterSegment_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UOverlay*                SliceImmuneOverlay             (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerHealthMeterSegment_C::SequenceEvent__ENTRYPOINTPlayerHealthMeterSegment_1(class UOverlay* SliceImmuneOverlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SequenceEvent__ENTRYPOINTPlayerHealthMeterSegment_1");

	struct
	{
		class UOverlay*                SliceImmuneOverlay;
	} params;

	params.SliceImmuneOverlay = SliceImmuneOverlay;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetIsDowned
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDowned                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerHealthMeterSegment_C::SetIsDowned(bool IsDowned)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetIsDowned");

	struct
	{
		bool                           IsDowned;
	} params;

	params.IsDowned = IsDowned;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetImmune
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bImmediate                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerHealthMeterSegment_C::SetImmune(bool bEnabled, bool bImmediate)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetImmune");

	struct
	{
		bool                           bEnabled;
		bool                           bImmediate;
	} params;

	params.bEnabled = bEnabled;
	params.bImmediate = bImmediate;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetDotVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerHealthMeterSegment_C::SetDotVisibility(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetDotVisibility");

	struct
	{
		bool                           IsVisible;
	} params;

	params.IsVisible = IsVisible;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.PlayDamagePulse
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerHealthMeterSegment_C::PlayDamagePulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.PlayDamagePulse");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetBonusState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsBonus                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerHealthMeterSegment_C::SetBonusState(bool IsBonus)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetBonusState");

	struct
	{
		bool                           IsBonus;
	} params;

	params.IsBonus = IsBonus;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetSliceValues
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Health                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Armor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Overheal                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Depleted                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Inactive                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerHealthMeterSegment_C::SetSliceValues(int Health, int Armor, int Overheal, int Depleted, int Inactive)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetSliceValues");

	struct
	{
		int                            Health;
		int                            Armor;
		int                            Overheal;
		int                            Depleted;
		int                            Inactive;
	} params;

	params.Health = Health;
	params.Armor = Armor;
	params.Overheal = Overheal;
	params.Depleted = Depleted;
	params.Inactive = Inactive;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.OnDisableImmuneParams
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UOverlay*                SliceImmuneOverlay             (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerHealthMeterSegment_C::OnDisableImmuneParams(class UOverlay* SliceImmuneOverlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.OnDisableImmuneParams");

	struct
	{
		class UOverlay*                SliceImmuneOverlay;
	} params;

	params.SliceImmuneOverlay = SliceImmuneOverlay;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.OnEnableImmuneParams
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UOverlay*                SliceImmuneOverlay             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerHealthMeterSegment_C::OnEnableImmuneParams(class UOverlay* SliceImmuneOverlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.OnEnableImmuneParams");

	struct
	{
		class UOverlay*                SliceImmuneOverlay;
	} params;

	params.SliceImmuneOverlay = SliceImmuneOverlay;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerHealthMeterSegment_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.ExecuteUbergraph_PlayerHealthMeterSegment
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerHealthMeterSegment_C::ExecuteUbergraph_PlayerHealthMeterSegment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.ExecuteUbergraph_PlayerHealthMeterSegment");

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
