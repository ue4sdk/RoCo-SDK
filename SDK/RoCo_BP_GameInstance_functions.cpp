// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BP_GameInstance_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GameInstance.BP_GameInstance_C.EndLoading
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_GameInstance_C::EndLoading()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GameInstance.BP_GameInstance_C.EndLoading"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameInstance.BP_GameInstance_C.BeginLoading
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 mapName                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UBP_GameInstance_C::BeginLoading(const struct FString& mapName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GameInstance.BP_GameInstance_C.BeginLoading"));

	struct
	{
		struct FString                 mapName;
	} params;

	params.mapName = mapName;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameInstance.BP_GameInstance_C.ExecuteUbergraph_BP_GameInstance
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_GameInstance_C::ExecuteUbergraph_BP_GameInstance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GameInstance.BP_GameInstance_C.ExecuteUbergraph_BP_GameInstance"));

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
