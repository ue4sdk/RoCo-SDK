// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_InGameJobSelect_TeamComp_Teammate_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.SetUpPlayerOwnerBindings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::SetUpPlayerOwnerBindings()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.SetUpPlayerOwnerBindings"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.UpdateTeamCaptainIcon
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::UpdateTeamCaptainIcon()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.UpdateTeamCaptainIcon"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.DispatchJobDisplayInfo
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::DispatchJobDisplayInfo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.DispatchJobDisplayInfo"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.IsSomeoneBanning
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_InGameJobSelect_TeamComp_Teammate_C::IsSomeoneBanning()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.IsSomeoneBanning"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.UpdatePersistentPlayerData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::UpdatePersistentPlayerData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.UpdatePersistentPlayerData"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.Should Dispatch Display Job Info
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           Can_Dispatch                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::Should_Dispatch_Display_Job_Info(bool* Can_Dispatch)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.Should Dispatch Display Job Info"));

	struct
	{
		bool                           Can_Dispatch;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Can_Dispatch != nullptr)
		*Can_Dispatch = params.Can_Dispatch;
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.UpdatePlayerName
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          KSPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::UpdatePlayerName(class AKSPlayerState* KSPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.UpdatePlayerName"));

	struct
	{
		class AKSPlayerState*          KSPlayerState;
	} params;

	params.KSPlayerState = KSPlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.PopulateSelectedJob
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::PopulateSelectedJob()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.PopulateSelectedJob"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.SetEnemyDirectly
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::SetEnemyDirectly(class AKSPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.SetEnemyDirectly"));

	struct
	{
		class AKSPlayerState*          PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.HandleUIRelevantStateChange
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          InPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::HandleUIRelevantStateChange(class AKSPlayerState* InPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.HandleUIRelevantStateChange"));

	struct
	{
		class AKSPlayerState*          InPlayerState;
	} params;

	params.InPlayerState = InPlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.ResetJobEntry
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::ResetJobEntry()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.ResetJobEntry"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.Bind to Model Viewer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ModelIndex                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::Bind_to_Model_Viewer(int ModelIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.Bind to Model Viewer"));

	struct
	{
		int                            ModelIndex;
	} params;

	params.ModelIndex = ModelIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.SetInitialDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::SetInitialDisplay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.SetInitialDisplay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.SetJobEntry
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails* JobEntry                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::SetJobEntry(class UJobSelectionEntryDetails* JobEntry)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.SetJobEntry"));

	struct
	{
		class UJobSelectionEntryDetails* JobEntry;
	} params;

	params.JobEntry = JobEntry;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.SetPlayerOwner
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::SetPlayerOwner(class AKSPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.SetPlayerOwner"));

	struct
	{
		class AKSPlayerState*          PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.HandlePhaseChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   CurrentPhaseName               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   PreviousPhaseName              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::HandlePhaseChange(const struct FName& CurrentPhaseName, const struct FName& PreviousPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.HandlePhaseChange"));

	struct
	{
		struct FName                   CurrentPhaseName;
		struct FName                   PreviousPhaseName;
	} params;

	params.CurrentPhaseName = CurrentPhaseName;
	params.PreviousPhaseName = PreviousPhaseName;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.OwningTeamChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          KSPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::OwningTeamChanged(class AKSPlayerState* KSPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.OwningTeamChanged"));

	struct
	{
		class AKSPlayerState*          KSPlayerState;
	} params;

	params.KSPlayerState = KSPlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.SelectionStatusChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobSelectionComponent* JobSelectionComponent          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::SelectionStatusChanged(class UKSJobSelectionComponent* JobSelectionComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.SelectionStatusChanged"));

	struct
	{
		class UKSJobSelectionComponent* JobSelectionComponent;
	} params;

	params.JobSelectionComponent = JobSelectionComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.OnTeamMemberAdded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          NewMember                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::OnTeamMemberAdded(class AKSPlayerState* NewMember)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.OnTeamMemberAdded"));

	struct
	{
		class AKSPlayerState*          NewMember;
	} params;

	params.NewMember = NewMember;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.GenericTeamChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::GenericTeamChange()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.GenericTeamChange"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.ExecuteUbergraph_WBP_InGameJobSelect_TeamComp_Teammate
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::ExecuteUbergraph_WBP_InGameJobSelect_TeamComp_Teammate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.ExecuteUbergraph_WBP_InGameJobSelect_TeamComp_Teammate"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.UpdatePersistentDataDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPersistentPlayerData* In_Persistent_Data             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::UpdatePersistentDataDispatcher__DelegateSignature(class UKSPersistentPlayerData* In_Persistent_Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.UpdatePersistentDataDispatcher__DelegateSignature"));

	struct
	{
		class UKSPersistentPlayerData* In_Persistent_Data;
	} params;

	params.In_Persistent_Data = In_Persistent_Data;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.DisplayPlayerNameDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::DisplayPlayerNameDispatcher__DelegateSignature(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.DisplayPlayerNameDispatcher__DelegateSignature"));

	struct
	{
		struct FString                 Name;
	} params;

	params.Name = Name;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.DisplayJobInfoDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Job_Item_Id                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Skin_Item_Id                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EJobSelectionState             JobSelectionState              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::DisplayJobInfoDispatcher__DelegateSignature(int Job_Item_Id, int Skin_Item_Id, EJobSelectionState JobSelectionState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.DisplayJobInfoDispatcher__DelegateSignature"));

	struct
	{
		int                            Job_Item_Id;
		int                            Skin_Item_Id;
		EJobSelectionState             JobSelectionState;
	} params;

	params.Job_Item_Id = Job_Item_Id;
	params.Skin_Item_Id = Skin_Item_Id;
	params.JobSelectionState = JobSelectionState;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
