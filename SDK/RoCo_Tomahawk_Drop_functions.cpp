// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Tomahawk_Drop_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tomahawk_Drop.Tomahawk_Drop_C.SetStuck
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATomahawk_Drop_C::SetStuck()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tomahawk_Drop.Tomahawk_Drop_C.SetStuck");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Tomahawk_Drop.Tomahawk_Drop_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATomahawk_Drop_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tomahawk_Drop.Tomahawk_Drop_C.ReceiveEndPlay");

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function Tomahawk_Drop.Tomahawk_Drop_C.ExecuteUbergraph_Tomahawk_Drop
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATomahawk_Drop_C::ExecuteUbergraph_Tomahawk_Drop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tomahawk_Drop.Tomahawk_Drop_C.ExecuteUbergraph_Tomahawk_Drop");

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
