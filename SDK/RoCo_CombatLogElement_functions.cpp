// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_CombatLogElement_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CombatLogElement.CombatLogElement_C.ClearInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCombatLogElement_C::ClearInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatLogElement.CombatLogElement_C.ClearInfo");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CombatLogElement.CombatLogElement_C.OnSetInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCombatLogElement_C::OnSetInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatLogElement.CombatLogElement_C.OnSetInfo");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CombatLogElement.CombatLogElement_C.SetMessageData
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FScreenLogData          MessageData                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// class UCombatLogElement_C*     CombatLogElement               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCombatLogElement_C::SetMessageData(const struct FScreenLogData& MessageData, class UCombatLogElement_C** CombatLogElement, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatLogElement.CombatLogElement_C.SetMessageData");

	struct
	{
		struct FScreenLogData          MessageData;
		class UCombatLogElement_C*     CombatLogElement;
		bool                           IsValid;
	} params;

	params.MessageData = MessageData;

	UObject::ProcessEvent(fn, &params);

	if (CombatLogElement != nullptr)
		*CombatLogElement = params.CombatLogElement;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function CombatLogElement.CombatLogElement_C.GetVictimTextColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateColor             Color                          (CPF_Parm, CPF_OutParm)

void UCombatLogElement_C::GetVictimTextColor(struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatLogElement.CombatLogElement_C.GetVictimTextColor");

	struct
	{
		struct FSlateColor             Color;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Color != nullptr)
		*Color = params.Color;
}


// Function CombatLogElement.CombatLogElement_C.GetInstigatorTextColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateColor             Color                          (CPF_Parm, CPF_OutParm)

void UCombatLogElement_C::GetInstigatorTextColor(struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatLogElement.CombatLogElement_C.GetInstigatorTextColor");

	struct
	{
		struct FSlateColor             Color;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Color != nullptr)
		*Color = params.Color;
}


// Function CombatLogElement.CombatLogElement_C.OnIconUpdated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCombatLogElement_C::OnIconUpdated(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatLogElement.CombatLogElement_C.OnIconUpdated");

	struct
	{
		class UTexture2D*              Texture;
	} params;

	params.Texture = Texture;

	UObject::ProcessEvent(fn, &params);
}


// Function CombatLogElement.CombatLogElement_C.Transition
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCombatLogElement_C::Transition()
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatLogElement.CombatLogElement_C.Transition");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CombatLogElement.CombatLogElement_C.OnIconUpdated_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCombatLogElement_C::OnIconUpdated_Event_1(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatLogElement.CombatLogElement_C.OnIconUpdated_Event_1");

	struct
	{
		class UTexture2D*              Texture;
	} params;

	params.Texture = Texture;

	UObject::ProcessEvent(fn, &params);
}


// Function CombatLogElement.CombatLogElement_C.OnFadeOutAnimFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCombatLogElement_C::OnFadeOutAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatLogElement.CombatLogElement_C.OnFadeOutAnimFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CombatLogElement.CombatLogElement_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCombatLogElement_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatLogElement.CombatLogElement_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CombatLogElement.CombatLogElement_C.FadeOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCombatLogElement_C::FadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatLogElement.CombatLogElement_C.FadeOut");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CombatLogElement.CombatLogElement_C.StopAnimsAndTimers
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCombatLogElement_C::StopAnimsAndTimers()
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatLogElement.CombatLogElement_C.StopAnimsAndTimers");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CombatLogElement.CombatLogElement_C.ExecuteUbergraph_CombatLogElement
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCombatLogElement_C::ExecuteUbergraph_CombatLogElement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatLogElement.CombatLogElement_C.ExecuteUbergraph_CombatLogElement");

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
