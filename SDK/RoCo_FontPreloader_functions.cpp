// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_FontPreloader_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FontPreloader.FontPreloader_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFontPreloader_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FontPreloader.FontPreloader_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FontPreloader.FontPreloader_C.ExecuteUbergraph_FontPreloader
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFontPreloader_C::ExecuteUbergraph_FontPreloader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FontPreloader.FontPreloader_C.ExecuteUbergraph_FontPreloader"));

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
