// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_DebugBaseCommandHeader_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DebugBaseCommandHeader.DebugBaseCommandHeader_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDebugBaseCommandHeader_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugBaseCommandHeader.DebugBaseCommandHeader_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DebugBaseCommandHeader.DebugBaseCommandHeader_C.EstablishIndex
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDebugBaseCommandHeader_C::EstablishIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugBaseCommandHeader.DebugBaseCommandHeader_C.EstablishIndex");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function DebugBaseCommandHeader.DebugBaseCommandHeader_C.ExecuteUbergraph_DebugBaseCommandHeader
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDebugBaseCommandHeader_C::ExecuteUbergraph_DebugBaseCommandHeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugBaseCommandHeader.DebugBaseCommandHeader_C.ExecuteUbergraph_DebugBaseCommandHeader");

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
