// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ShotgunPellet_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ShotgunPellet.WBP_ShotgunPellet_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ShotgunPellet_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShotgunPellet.WBP_ShotgunPellet_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ShotgunPellet.WBP_ShotgunPellet_C.PlayEliminationAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ShotgunPellet_C::PlayEliminationAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShotgunPellet.WBP_ShotgunPellet_C.PlayEliminationAnim");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ShotgunPellet.WBP_ShotgunPellet_C.ExecuteUbergraph_WBP_ShotgunPellet
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ShotgunPellet_C::ExecuteUbergraph_WBP_ShotgunPellet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShotgunPellet.WBP_ShotgunPellet_C.ExecuteUbergraph_WBP_ShotgunPellet");

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
