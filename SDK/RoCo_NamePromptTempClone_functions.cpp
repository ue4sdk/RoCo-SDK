// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_NamePromptTempClone_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NamePromptTempClone.NamePromptTempClone_C.BndEvt__PlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNamePromptTempClone_C::BndEvt__PlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function NamePromptTempClone.NamePromptTempClone_C.BndEvt__PlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");

	struct
	{
		struct FText                   Text;
		TEnumAsByte<ETextCommit>       CommitMethod;
	} params;

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	UObject::ProcessEvent(fn, &params);
}


// Function NamePromptTempClone.NamePromptTempClone_C.BndEvt__PopupButton_C_370_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNamePromptTempClone_C::BndEvt__PopupButton_C_370_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NamePromptTempClone.NamePromptTempClone_C.BndEvt__PopupButton_C_370_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function NamePromptTempClone.NamePromptTempClone_C.HandleErrorMessage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   MessageText                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UNamePromptTempClone_C::HandleErrorMessage(const struct FText& MessageText)
{
	static auto fn = UObject::FindObject<UFunction>("Function NamePromptTempClone.NamePromptTempClone_C.HandleErrorMessage");

	struct
	{
		struct FText                   MessageText;
	} params;

	params.MessageText = MessageText;

	UObject::ProcessEvent(fn, &params);
}


// Function NamePromptTempClone.NamePromptTempClone_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNamePromptTempClone_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function NamePromptTempClone.NamePromptTempClone_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function NamePromptTempClone.NamePromptTempClone_C.ExecuteUbergraph_NamePromptTempClone
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNamePromptTempClone_C::ExecuteUbergraph_NamePromptTempClone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NamePromptTempClone.NamePromptTempClone_C.ExecuteUbergraph_NamePromptTempClone");

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
