// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_InGameJobSelect_TeammateStatus_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.Force Set Is Enemy Team
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           New_Is_Enemy                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelect_TeammateStatus_C::Force_Set_Is_Enemy_Team(bool New_Is_Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.Force Set Is Enemy Team");

	struct
	{
		bool                           New_Is_Enemy;
	} params;

	params.New_Is_Enemy = New_Is_Enemy;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.Set Is Enemy Team
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           New_Is_Enemy                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelect_TeammateStatus_C::Set_Is_Enemy_Team(bool New_Is_Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.Set Is Enemy Team");

	struct
	{
		bool                           New_Is_Enemy;
	} params;

	params.New_Is_Enemy = New_Is_Enemy;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.UpdateTeamCaptainIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_TeammateStatus_C::UpdateTeamCaptainIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.UpdateTeamCaptainIcon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.DispatchJobDisplayInfo
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_TeammateStatus_C::DispatchJobDisplayInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.DispatchJobDisplayInfo");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.Update Persistent Player Data
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_TeammateStatus_C::Update_Persistent_Player_Data()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.Update Persistent Player Data");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.Should Dispatch Display Job Info
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           Can_Dispatch                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelect_TeammateStatus_C::Should_Dispatch_Display_Job_Info(bool* Can_Dispatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.Should Dispatch Display Job Info");

	struct
	{
		bool                           Can_Dispatch;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Can_Dispatch != nullptr)
		*Can_Dispatch = params.Can_Dispatch;
}


// Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.ResetJobEntry
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_TeammateStatus_C::ResetJobEntry()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.ResetJobEntry");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.UnbindFromModelViewer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ModelIndex                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeammateStatus_C::UnbindFromModelViewer(int ModelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.UnbindFromModelViewer");

	struct
	{
		int                            ModelIndex;
	} params;

	params.ModelIndex = ModelIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.Bind to Model Viewer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ModelIndex                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeammateStatus_C::Bind_to_Model_Viewer(int ModelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.Bind to Model Viewer");

	struct
	{
		int                            ModelIndex;
	} params;

	params.ModelIndex = ModelIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.SetInitialDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_TeammateStatus_C::SetInitialDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.SetInitialDisplay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.Update Selection Appearance
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_TeammateStatus_C::Update_Selection_Appearance()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.Update Selection Appearance");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeammateStatus_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_TeammateStatus_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelect_TeammateStatus_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.PostSetPlayerData
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_TeammateStatus_C::PostSetPlayerData()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.PostSetPlayerData");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.PlayerTasksChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_TeammateStatus_C::PlayerTasksChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.PlayerTasksChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.Check For Player Name Change
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPersistentPlayerData* In_Player_Data                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeammateStatus_C::Check_For_Player_Name_Change(class UKSPersistentPlayerData* In_Player_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.Check For Player Name Change");

	struct
	{
		class UKSPersistentPlayerData* In_Player_Data;
	} params;

	params.In_Player_Data = In_Player_Data;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.ExecuteUbergraph_WBP_InGameJobSelect_TeammateStatus
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeammateStatus_C::ExecuteUbergraph_WBP_InGameJobSelect_TeammateStatus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.ExecuteUbergraph_WBP_InGameJobSelect_TeammateStatus");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.UpdatePersistentDataDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPersistentPlayerData* In_Persistent_Data             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeammateStatus_C::UpdatePersistentDataDispatcher__DelegateSignature(class UKSPersistentPlayerData* In_Persistent_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.UpdatePersistentDataDispatcher__DelegateSignature");

	struct
	{
		class UKSPersistentPlayerData* In_Persistent_Data;
	} params;

	params.In_Persistent_Data = In_Persistent_Data;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.DisplayPlayerNameDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeammateStatus_C::DisplayPlayerNameDispatcher__DelegateSignature(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.DisplayPlayerNameDispatcher__DelegateSignature");

	struct
	{
		struct FString                 Name;
	} params;

	params.Name = Name;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.UpdateSelectedJobDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Job_Item_Id                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Skin_Item_Id                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EJobSelectionState             JobSelectionState              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeammateStatus_C::UpdateSelectedJobDispatcher__DelegateSignature(int Job_Item_Id, int Skin_Item_Id, EJobSelectionState JobSelectionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeammateStatus.WBP_InGameJobSelect_TeammateStatus_C.UpdateSelectedJobDispatcher__DelegateSignature");

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
