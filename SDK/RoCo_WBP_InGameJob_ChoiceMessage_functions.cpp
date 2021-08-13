// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_InGameJob_ChoiceMessage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_InGameJob_ChoiceMessage.WBP_InGameJob_ChoiceMessage_C.Internal Set Message Details
// (FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FLinearColor            Tint_Color                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Icon_Index                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJob_ChoiceMessage_C::Internal_Set_Message_Details(const struct FText& Text, const struct FLinearColor& Tint_Color, int Icon_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJob_ChoiceMessage.WBP_InGameJob_ChoiceMessage_C.Internal Set Message Details");

	struct
	{
		struct FText                   Text;
		struct FLinearColor            Tint_Color;
		int                            Icon_Index;
	} params;

	params.Text = Text;
	params.Tint_Color = Tint_Color;
	params.Icon_Index = Icon_Index;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJob_ChoiceMessage.WBP_InGameJob_ChoiceMessage_C.Update Message from Choice Widget
// (FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobItem*              In_Job                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Should_Show                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJob_ChoiceMessage_C::Update_Message_from_Choice_Widget(class UKSJobItem* In_Job, bool* Should_Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJob_ChoiceMessage.WBP_InGameJob_ChoiceMessage_C.Update Message from Choice Widget");

	struct
	{
		class UKSJobItem*              In_Job;
		bool                           Should_Show;
	} params;

	params.In_Job = In_Job;

	UObject::ProcessEvent(fn, &params);

	if (Should_Show != nullptr)
		*Should_Show = params.Should_Show;
}


// Function WBP_InGameJob_ChoiceMessage.WBP_InGameJob_ChoiceMessage_C.Play Hide Message Forward
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJob_ChoiceMessage_C::Play_Hide_Message_Forward()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJob_ChoiceMessage.WBP_InGameJob_ChoiceMessage_C.Play Hide Message Forward");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJob_ChoiceMessage.WBP_InGameJob_ChoiceMessage_C.Play Hide Message Reverse
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJob_ChoiceMessage_C::Play_Hide_Message_Reverse()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJob_ChoiceMessage.WBP_InGameJob_ChoiceMessage_C.Play Hide Message Reverse");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJob_ChoiceMessage.WBP_InGameJob_ChoiceMessage_C.Clear Prompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJob_ChoiceMessage_C::Clear_Prompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJob_ChoiceMessage.WBP_InGameJob_ChoiceMessage_C.Clear Prompt");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJob_ChoiceMessage.WBP_InGameJob_ChoiceMessage_C.Bind To Choice Grid
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobSelectChoiceGridWidget* Choice_Grid_Widget             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJob_ChoiceMessage_C::Bind_To_Choice_Grid(class UKSJobSelectChoiceGridWidget* Choice_Grid_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJob_ChoiceMessage.WBP_InGameJob_ChoiceMessage_C.Bind To Choice Grid");

	struct
	{
		class UKSJobSelectChoiceGridWidget* Choice_Grid_Widget;
	} params;

	params.Choice_Grid_Widget = Choice_Grid_Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJob_ChoiceMessage.WBP_InGameJob_ChoiceMessage_C.Unbind Choice Grid
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJob_ChoiceMessage_C::Unbind_Choice_Grid()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJob_ChoiceMessage.WBP_InGameJob_ChoiceMessage_C.Unbind Choice Grid");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJob_ChoiceMessage.WBP_InGameJob_ChoiceMessage_C.Hover Choice
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobSelectionChoiceWidget* Choice_Widget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJob_ChoiceMessage_C::Hover_Choice(class UKSJobSelectionChoiceWidget* Choice_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJob_ChoiceMessage.WBP_InGameJob_ChoiceMessage_C.Hover Choice");

	struct
	{
		class UKSJobSelectionChoiceWidget* Choice_Widget;
	} params;

	params.Choice_Widget = Choice_Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJob_ChoiceMessage.WBP_InGameJob_ChoiceMessage_C.Unhover Choice
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobSelectionChoiceWidget* Choice_Widget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJob_ChoiceMessage_C::Unhover_Choice(class UKSJobSelectionChoiceWidget* Choice_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJob_ChoiceMessage.WBP_InGameJob_ChoiceMessage_C.Unhover Choice");

	struct
	{
		class UKSJobSelectionChoiceWidget* Choice_Widget;
	} params;

	params.Choice_Widget = Choice_Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJob_ChoiceMessage.WBP_InGameJob_ChoiceMessage_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InGameJob_ChoiceMessage_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJob_ChoiceMessage.WBP_InGameJob_ChoiceMessage_C.OnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJob_ChoiceMessage.WBP_InGameJob_ChoiceMessage_C.On Input State Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> Input_State                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJob_ChoiceMessage_C::On_Input_State_Changed(TEnumAsByte<EPGAME_INPUT_STATE> Input_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJob_ChoiceMessage.WBP_InGameJob_ChoiceMessage_C.On Input State Changed");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> Input_State;
	} params;

	params.Input_State = Input_State;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJob_ChoiceMessage.WBP_InGameJob_ChoiceMessage_C.ChoicesChanged
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UKSJobItem*>      RemovedChoices                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// TArray<class UKSJobItem*>      AddedOrUpdatedChoices          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UWBP_InGameJob_ChoiceMessage_C::ChoicesChanged(TArray<class UKSJobItem*> RemovedChoices, TArray<class UKSJobItem*> AddedOrUpdatedChoices)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJob_ChoiceMessage.WBP_InGameJob_ChoiceMessage_C.ChoicesChanged");

	struct
	{
		TArray<class UKSJobItem*>      RemovedChoices;
		TArray<class UKSJobItem*>      AddedOrUpdatedChoices;
	} params;

	params.RemovedChoices = RemovedChoices;
	params.AddedOrUpdatedChoices = AddedOrUpdatedChoices;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJob_ChoiceMessage.WBP_InGameJob_ChoiceMessage_C.Reevaluate Current Choice
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJob_ChoiceMessage_C::Reevaluate_Current_Choice()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJob_ChoiceMessage.WBP_InGameJob_ChoiceMessage_C.Reevaluate Current Choice");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJob_ChoiceMessage.WBP_InGameJob_ChoiceMessage_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJob_ChoiceMessage_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJob_ChoiceMessage.WBP_InGameJob_ChoiceMessage_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJob_ChoiceMessage.WBP_InGameJob_ChoiceMessage_C.ExecuteUbergraph_WBP_InGameJob_ChoiceMessage
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJob_ChoiceMessage_C::ExecuteUbergraph_WBP_InGameJob_ChoiceMessage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJob_ChoiceMessage.WBP_InGameJob_ChoiceMessage_C.ExecuteUbergraph_WBP_InGameJob_ChoiceMessage");

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
