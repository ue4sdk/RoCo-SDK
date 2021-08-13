// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_BanShelf_3_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_BanShelf_3.WBP_BanShelf_2_C.CreateNewIcon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_BanShelfEntry_C*    New_Icon_Widget                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BanShelf_2_C::CreateNewIcon(class UWBP_BanShelfEntry_C** New_Icon_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BanShelf_3.WBP_BanShelf_2_C.CreateNewIcon");

	struct
	{
		class UWBP_BanShelfEntry_C*    New_Icon_Widget;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (New_Icon_Widget != nullptr)
		*New_Icon_Widget = params.New_Icon_Widget;
}


// Function WBP_BanShelf_3.WBP_BanShelf_2_C.PreAllocateBanSelf
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BanShelf_2_C::PreAllocateBanSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BanShelf_3.WBP_BanShelf_2_C.PreAllocateBanSelf");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BanShelf_3.WBP_BanShelf_2_C.PostSetJobSelector
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_BanShelf_2_C::PostSetJobSelector()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BanShelf_3.WBP_BanShelf_2_C.PostSetJobSelector");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BanShelf_3.WBP_BanShelf_2_C.BansChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_BanShelf_2_C::BansChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BanShelf_3.WBP_BanShelf_2_C.BansChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BanShelf_3.WBP_BanShelf_2_C.ExecuteUbergraph_WBP_BanShelf_3
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BanShelf_2_C::ExecuteUbergraph_WBP_BanShelf_3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BanShelf_3.WBP_BanShelf_2_C.ExecuteUbergraph_WBP_BanShelf_3");

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
