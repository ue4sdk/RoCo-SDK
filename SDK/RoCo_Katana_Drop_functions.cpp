// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Katana_Drop_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Katana_Drop.Katana_Drop_C.SetStuck
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AKatana_Drop_C::SetStuck()
{
	static auto fn = UObject::FindObject<UFunction>("Function Katana_Drop.Katana_Drop_C.SetStuck");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Katana_Drop.Katana_Drop_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AKatana_Drop_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Katana_Drop.Katana_Drop_C.ReceiveEndPlay");

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function Katana_Drop.Katana_Drop_C.ExecuteUbergraph_Katana_Drop
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AKatana_Drop_C::ExecuteUbergraph_Katana_Drop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Katana_Drop.Katana_Drop_C.ExecuteUbergraph_Katana_Drop");

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
