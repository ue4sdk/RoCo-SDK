// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_INameplateWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function INameplateWidget.INameplateWidget_C.OnUnhovered
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UINameplateWidget_C::OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function INameplateWidget.INameplateWidget_C.OnUnhovered");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function INameplateWidget.INameplateWidget_C.OnPossession
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            bpp__PlayerState__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AKSCharacter*            bpp__Character__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UINameplateWidget_C::OnPossession(class APlayerState* bpp__PlayerState__pf, class AKSCharacter* bpp__Character__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function INameplateWidget.INameplateWidget_C.OnPossession");

	struct
	{
		class APlayerState*            bpp__PlayerState__pf;
		class AKSCharacter*            bpp__Character__pf;
	} params;

	params.bpp__PlayerState__pf = bpp__PlayerState__pf;
	params.bpp__Character__pf = bpp__Character__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function INameplateWidget.INameplateWidget_C.OnHovered
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UINameplateWidget_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function INameplateWidget.INameplateWidget_C.OnHovered");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
