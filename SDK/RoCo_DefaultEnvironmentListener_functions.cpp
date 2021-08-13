// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_DefaultEnvironmentListener_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DefaultEnvironmentListener.DefaultEnvironmentListener_C.OnEnvironmentChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   OldEnvironmentTag              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDefaultEnvironmentListener_C::OnEnvironmentChanged(const struct FName& OldEnvironmentTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultEnvironmentListener.DefaultEnvironmentListener_C.OnEnvironmentChanged");

	struct
	{
		struct FName                   OldEnvironmentTag;
	} params;

	params.OldEnvironmentTag = OldEnvironmentTag;

	UObject::ProcessEvent(fn, &params);
}


// Function DefaultEnvironmentListener.DefaultEnvironmentListener_C.Print State
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Print_to_Screen                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Print_to_Log                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FLinearColor            Text_Color                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDefaultEnvironmentListener_C::Print_State(bool Print_to_Screen, bool Print_to_Log, const struct FLinearColor& Text_Color, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultEnvironmentListener.DefaultEnvironmentListener_C.Print State");

	struct
	{
		bool                           Print_to_Screen;
		bool                           Print_to_Log;
		struct FLinearColor            Text_Color;
		float                          Duration;
	} params;

	params.Print_to_Screen = Print_to_Screen;
	params.Print_to_Log = Print_to_Log;
	params.Text_Color = Text_Color;
	params.Duration = Duration;

	UObject::ProcessEvent(fn, &params);
}


// Function DefaultEnvironmentListener.DefaultEnvironmentListener_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDefaultEnvironmentListener_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultEnvironmentListener.DefaultEnvironmentListener_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DefaultEnvironmentListener.DefaultEnvironmentListener_C.ExecuteUbergraph_DefaultEnvironmentListener
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDefaultEnvironmentListener_C::ExecuteUbergraph_DefaultEnvironmentListener(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultEnvironmentListener.DefaultEnvironmentListener_C.ExecuteUbergraph_DefaultEnvironmentListener");

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
