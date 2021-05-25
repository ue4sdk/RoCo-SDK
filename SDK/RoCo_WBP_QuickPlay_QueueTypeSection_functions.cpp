// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_QuickPlay_QueueTypeSection_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.ResetQueueButtons
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QuickPlay_QueueTypeSection_C::ResetQueueButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.ResetQueueButtons");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.GetQueueButtons
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UWBP_QuickPlay_QueueButton_C*> Buttons                        (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_QuickPlay_QueueTypeSection_C::GetQueueButtons(TArray<class UWBP_QuickPlay_QueueButton_C*>* Buttons)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.GetQueueButtons");

	struct
	{
		TArray<class UWBP_QuickPlay_QueueButton_C*> Buttons;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Buttons != nullptr)
		*Buttons = params.Buttons;
}


// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.PopulateSection
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FQueueSection           QueueSectionInfo               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_QuickPlay_QueueTypeSection_C::PopulateSection(const struct FQueueSection& QueueSectionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.PopulateSection");

	struct
	{
		struct FQueueSection           QueueSectionInfo;
	} params;

	params.QueueSectionInfo = QueueSectionInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_QuickPlay_QueueTypeSection_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleOnQueueClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            QueueId                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QuickPlay_QueueTypeSection_C::HandleOnQueueClicked(int QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleOnQueueClicked");

	struct
	{
		int                            QueueId;
	} params;

	params.QueueId = QueueId;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleOnQueueHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QuickPlay_QueueTypeSection_C::HandleOnQueueHovered(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleOnQueueHovered");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleOnQueueUnhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QuickPlay_QueueTypeSection_C::HandleOnQueueUnhovered(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleOnQueueUnhovered");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleCustomBtnHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsGamepad                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_QuickPlay_QueueTypeSection_C::HandleCustomBtnHovered(bool IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleCustomBtnHovered");

	struct
	{
		bool                           IsGamepad;
	} params;

	params.IsGamepad = IsGamepad;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleCustomBtnUnhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QuickPlay_QueueTypeSection_C::HandleCustomBtnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleCustomBtnUnhovered");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleCustomBtnClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QuickPlay_QueueTypeSection_C::HandleCustomBtnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleCustomBtnClicked");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_QuickPlay_QueueTypeSection_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.ExecuteUbergraph_WBP_QuickPlay_QueueTypeSection
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QuickPlay_QueueTypeSection_C::ExecuteUbergraph_WBP_QuickPlay_QueueTypeSection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.ExecuteUbergraph_WBP_QuickPlay_QueueTypeSection");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnCustomMatchPopulated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UKSWidget*>       Buttons                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_QuickPlay_QueueTypeSection_C::OnCustomMatchPopulated__DelegateSignature(TArray<class UKSWidget*>* Buttons)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnCustomMatchPopulated__DelegateSignature");

	struct
	{
		TArray<class UKSWidget*>       Buttons;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Buttons != nullptr)
		*Buttons = params.Buttons;
}


// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnCustomMatchSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QuickPlay_QueueTypeSection_C::OnCustomMatchSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnCustomMatchSelected__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnQueuePopulated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UWBP_QuickPlay_QueueButton_C*> QueueButton                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_QuickPlay_QueueTypeSection_C::OnQueuePopulated__DelegateSignature(TArray<class UWBP_QuickPlay_QueueButton_C*>* QueueButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnQueuePopulated__DelegateSignature");

	struct
	{
		TArray<class UWBP_QuickPlay_QueueButton_C*> QueueButton;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (QueueButton != nullptr)
		*QueueButton = params.QueueButton;
}


// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnQueueUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QuickPlay_QueueTypeSection_C::OnQueueUnhovered__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnQueueUnhovered__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnQueueHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QuickPlay_QueueTypeSection_C::OnQueueHovered__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnQueueHovered__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnQueueSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            QueueId                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QuickPlay_QueueTypeSection_C::OnQueueSelected__DelegateSignature(int QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnQueueSelected__DelegateSignature");

	struct
	{
		int                            QueueId;
	} params;

	params.QueueId = QueueId;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
