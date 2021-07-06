// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MultiModInstance_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MultiModInstance.MultiModInstance_C.CanApply
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UKSPlayerMod*            Player_Mod_To_Apply            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bCanApply                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMultiModInstance_C::CanApply(class UKSPlayerMod* Player_Mod_To_Apply, bool* bCanApply)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiModInstance.MultiModInstance_C.CanApply");

	struct
	{
		class UKSPlayerMod*            Player_Mod_To_Apply;
		bool                           bCanApply;
	} params;

	params.Player_Mod_To_Apply = Player_Mod_To_Apply;

	UObject::ProcessEvent(fn, &params);

	if (bCanApply != nullptr)
		*bCanApply = params.bCanApply;
}


// Function MultiModInstance.MultiModInstance_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMultiModInstance_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiModInstance.MultiModInstance_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MultiModInstance.MultiModInstance_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMultiModInstance_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiModInstance.MultiModInstance_C.ReceiveEndPlay");

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function MultiModInstance.MultiModInstance_C.OnNewCharacter
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMultiModInstance_C::OnNewCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiModInstance.MultiModInstance_C.OnNewCharacter");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MultiModInstance.MultiModInstance_C.ExecuteUbergraph_MultiModInstance
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMultiModInstance_C::ExecuteUbergraph_MultiModInstance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiModInstance.MultiModInstance_C.ExecuteUbergraph_MultiModInstance");

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
