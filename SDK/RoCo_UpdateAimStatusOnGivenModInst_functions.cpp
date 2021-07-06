// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_UpdateAimStatusOnGivenModInst_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UpdateAimStatusOnGivenModInst.UpdateAimStatusOnGivenModInst_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUpdateAimStatusOnGivenModInst_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function UpdateAimStatusOnGivenModInst.UpdateAimStatusOnGivenModInst_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UpdateAimStatusOnGivenModInst.UpdateAimStatusOnGivenModInst_C.OnNewCharacter
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUpdateAimStatusOnGivenModInst_C::OnNewCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function UpdateAimStatusOnGivenModInst.UpdateAimStatusOnGivenModInst_C.OnNewCharacter");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UpdateAimStatusOnGivenModInst.UpdateAimStatusOnGivenModInst_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUpdateAimStatusOnGivenModInst_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function UpdateAimStatusOnGivenModInst.UpdateAimStatusOnGivenModInst_C.ReceiveEndPlay");

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function UpdateAimStatusOnGivenModInst.UpdateAimStatusOnGivenModInst_C.ExecuteUbergraph_UpdateAimStatusOnGivenModInst
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUpdateAimStatusOnGivenModInst_C::ExecuteUbergraph_UpdateAimStatusOnGivenModInst(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UpdateAimStatusOnGivenModInst.UpdateAimStatusOnGivenModInst_C.ExecuteUbergraph_UpdateAimStatusOnGivenModInst");

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
