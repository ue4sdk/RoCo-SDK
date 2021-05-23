// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_HitIndicatorSub_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HitIndicatorSub.HitIndicatorSub_C.PlayerIsBlinded
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsBlinded                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UHitIndicatorSub_C::PlayerIsBlinded(bool* IsBlinded)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function HitIndicatorSub.HitIndicatorSub_C.PlayerIsBlinded"));

	struct
	{
		bool                           IsBlinded;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsBlinded != nullptr)
		*IsBlinded = params.IsBlinded;
}


// Function HitIndicatorSub.HitIndicatorSub_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHitIndicatorSub_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function HitIndicatorSub.HitIndicatorSub_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HitIndicatorSub.HitIndicatorSub_C.WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void UHitIndicatorSub_C::WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function HitIndicatorSub.HitIndicatorSub_C.WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HitIndicatorSub.HitIndicatorSub_C.StartDamageAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 InHitLocation                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bInIsArmorHit                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UHitIndicatorSub_C::StartDamageAnim(const struct FVector& InHitLocation, bool bInIsArmorHit)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function HitIndicatorSub.HitIndicatorSub_C.StartDamageAnim"));

	struct
	{
		struct FVector                 InHitLocation;
		bool                           bInIsArmorHit;
	} params;

	params.InHitLocation = InHitLocation;
	params.bInIsArmorHit = bInIsArmorHit;

	UObject::ProcessEvent(fn, &params);
}


// Function HitIndicatorSub.HitIndicatorSub_C.ExecuteUbergraph_HitIndicatorSub
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHitIndicatorSub_C::ExecuteUbergraph_HitIndicatorSub(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function HitIndicatorSub.HitIndicatorSub_C.ExecuteUbergraph_HitIndicatorSub"));

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
