// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_RogueSelectCharacter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RogueSelectCharacter.RogueSelectCharacter_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ARogueSelectCharacter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RogueSelectCharacter.RogueSelectCharacter_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RogueSelectCharacter.RogueSelectCharacter_C.InitRogueSelectAnimInst
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   InitialPhaseName               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ARogueSelectCharacter_C::InitRogueSelectAnimInst(const struct FName& InitialPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function RogueSelectCharacter.RogueSelectCharacter_C.InitRogueSelectAnimInst");

	struct
	{
		struct FName                   InitialPhaseName;
	} params;

	params.InitialPhaseName = InitialPhaseName;

	UObject::ProcessEvent(fn, &params);
}


// Function RogueSelectCharacter.RogueSelectCharacter_C.AnnounceCharacterSelected
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobItem*              pJobSelected                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ARogueSelectCharacter_C::AnnounceCharacterSelected(class UKSJobItem* pJobSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function RogueSelectCharacter.RogueSelectCharacter_C.AnnounceCharacterSelected");

	struct
	{
		class UKSJobItem*              pJobSelected;
	} params;

	params.pJobSelected = pJobSelected;

	UObject::ProcessEvent(fn, &params);
}


// Function RogueSelectCharacter.RogueSelectCharacter_C.ExecuteUbergraph_RogueSelectCharacter
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ARogueSelectCharacter_C::ExecuteUbergraph_RogueSelectCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RogueSelectCharacter.RogueSelectCharacter_C.ExecuteUbergraph_RogueSelectCharacter");

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
