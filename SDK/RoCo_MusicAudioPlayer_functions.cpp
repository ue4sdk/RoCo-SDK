// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MusicAudioPlayer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MusicAudioPlayer.MusicAudioPlayer_C.Append String to Event Array
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 AppendStringIn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// TArray<struct FString>         EventNameArrayIn               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// TArray<struct FString>         EventNameArrayOut              (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void AMusicAudioPlayer_C::Append_String_to_Event_Array(const struct FString& AppendStringIn, TArray<struct FString>* EventNameArrayIn, TArray<struct FString>* EventNameArrayOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicAudioPlayer.MusicAudioPlayer_C.Append String to Event Array");

	struct
	{
		struct FString                 AppendStringIn;
		TArray<struct FString>         EventNameArrayIn;
		TArray<struct FString>         EventNameArrayOut;
	} params;

	params.AppendStringIn = AppendStringIn;

	UObject::ProcessEvent(fn, &params);

	if (EventNameArrayIn != nullptr)
		*EventNameArrayIn = params.EventNameArrayIn;
	if (EventNameArrayOut != nullptr)
		*EventNameArrayOut = params.EventNameArrayOut;
}


// Function MusicAudioPlayer.MusicAudioPlayer_C.PrependStringToEventArray
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 PrependStringIn                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// TArray<struct FString>         EventNameArrayIn               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// TArray<struct FString>         EventNameArrayOut              (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void AMusicAudioPlayer_C::PrependStringToEventArray(const struct FString& PrependStringIn, TArray<struct FString>* EventNameArrayIn, TArray<struct FString>* EventNameArrayOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicAudioPlayer.MusicAudioPlayer_C.PrependStringToEventArray");

	struct
	{
		struct FString                 PrependStringIn;
		TArray<struct FString>         EventNameArrayIn;
		TArray<struct FString>         EventNameArrayOut;
	} params;

	params.PrependStringIn = PrependStringIn;

	UObject::ProcessEvent(fn, &params);

	if (EventNameArrayIn != nullptr)
		*EventNameArrayIn = params.EventNameArrayIn;
	if (EventNameArrayOut != nullptr)
		*EventNameArrayOut = params.EventNameArrayOut;
}


// Function MusicAudioPlayer.MusicAudioPlayer_C.ComposeEventNamePriorityArray
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UKSAudioPlayerStateParameterData* CurrentStateParameters         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FString>         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_HasGetValueTypeHash)

TArray<struct FString> AMusicAudioPlayer_C::ComposeEventNamePriorityArray(const struct FString& EventName, class UKSAudioPlayerStateParameterData* CurrentStateParameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicAudioPlayer.MusicAudioPlayer_C.ComposeEventNamePriorityArray");

	struct
	{
		struct FString                 EventName;
		class UKSAudioPlayerStateParameterData* CurrentStateParameters;
		TArray<struct FString>         ReturnValue;
	} params;

	params.EventName = EventName;
	params.CurrentStateParameters = CurrentStateParameters;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MusicAudioPlayer.MusicAudioPlayer_C.ComposeBankNamePriorityArray
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 BankPrefix                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UKSAudioPlayerStateParameterData* CurrentStateParameters         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FString>         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_HasGetValueTypeHash)

TArray<struct FString> AMusicAudioPlayer_C::ComposeBankNamePriorityArray(const struct FString& BankPrefix, class UKSAudioPlayerStateParameterData* CurrentStateParameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicAudioPlayer.MusicAudioPlayer_C.ComposeBankNamePriorityArray");

	struct
	{
		struct FString                 BankPrefix;
		class UKSAudioPlayerStateParameterData* CurrentStateParameters;
		TArray<struct FString>         ReturnValue;
	} params;

	params.BankPrefix = BankPrefix;
	params.CurrentStateParameters = CurrentStateParameters;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
