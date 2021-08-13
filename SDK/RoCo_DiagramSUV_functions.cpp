// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_DiagramSUV_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DiagramSUV.DiagramSUV_C.SetSeating
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Seat_Index                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AKSCharacter*            Occupant                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDiagramSUV_C::SetSeating(int Seat_Index, class AKSCharacter* Occupant)
{
	static auto fn = UObject::FindObject<UFunction>("Function DiagramSUV.DiagramSUV_C.SetSeating");

	struct
	{
		int                            Seat_Index;
		class AKSCharacter*            Occupant;
	} params;

	params.Seat_Index = Seat_Index;
	params.Occupant = Occupant;

	UObject::ProcessEvent(fn, &params);
}


// Function DiagramSUV.DiagramSUV_C.ExecuteUbergraph_DiagramSUV
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDiagramSUV_C::ExecuteUbergraph_DiagramSUV(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DiagramSUV.DiagramSUV_C.ExecuteUbergraph_DiagramSUV");

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
