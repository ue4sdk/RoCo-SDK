// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SpeedOnDamagedBuffModInst_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpeedOnDamagedBuffModInst.SpeedOnDamagedBuffModInst_C.OnModInitialized
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void USpeedOnDamagedBuffModInst_C::OnModInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpeedOnDamagedBuffModInst.SpeedOnDamagedBuffModInst_C.OnModInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SpeedOnDamagedBuffModInst.SpeedOnDamagedBuffModInst_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpeedOnDamagedBuffModInst_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpeedOnDamagedBuffModInst.SpeedOnDamagedBuffModInst_C.ReceiveEndPlay");

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function SpeedOnDamagedBuffModInst.SpeedOnDamagedBuffModInst_C.ExecuteUbergraph_SpeedOnDamagedBuffModInst
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpeedOnDamagedBuffModInst_C::ExecuteUbergraph_SpeedOnDamagedBuffModInst(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpeedOnDamagedBuffModInst.SpeedOnDamagedBuffModInst_C.ExecuteUbergraph_SpeedOnDamagedBuffModInst");

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
