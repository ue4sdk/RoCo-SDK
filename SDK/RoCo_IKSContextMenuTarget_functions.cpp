// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_IKSContextMenuTarget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IKSContextMenuTarget.IKSContextMenuTarget_C.OnContextMenuOpen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EViewSide                      side                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UIKSContextMenuTarget_C::OnContextMenuOpen(EViewSide side)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function IKSContextMenuTarget.IKSContextMenuTarget_C.OnContextMenuOpen"));

	struct
	{
		EViewSide                      side;
	} params;

	params.side = side;

	UObject::ProcessEvent(fn, &params);
}


// Function IKSContextMenuTarget.IKSContextMenuTarget_C.OnContextMenuClose
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UIKSContextMenuTarget_C::OnContextMenuClose()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function IKSContextMenuTarget.IKSContextMenuTarget_C.OnContextMenuClose"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
