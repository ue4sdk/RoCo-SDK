// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_TeamMessage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_TeamMessage.WBP_TeamMessage_C.AbortCurrentAnnouncement
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TeamMessage_C::AbortCurrentAnnouncement()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TeamMessage.WBP_TeamMessage_C.AbortCurrentAnnouncement");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TeamMessage.WBP_TeamMessage_C.ShowAnnouncement
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FAnnouncementData       Announcement                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_TeamMessage_C::ShowAnnouncement(const struct FAnnouncementData& Announcement)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TeamMessage.WBP_TeamMessage_C.ShowAnnouncement");

	struct
	{
		struct FAnnouncementData       Announcement;
	} params;

	params.Announcement = Announcement;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TeamMessage.WBP_TeamMessage_C.HandleOnAnnouncement
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FAnnouncementData       Announcement                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_TeamMessage_C::HandleOnAnnouncement(const struct FAnnouncementData& Announcement)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TeamMessage.WBP_TeamMessage_C.HandleOnAnnouncement");

	struct
	{
		struct FAnnouncementData       Announcement;
	} params;

	params.Announcement = Announcement;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TeamMessage.WBP_TeamMessage_C.CheckShouldShow
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FAnnouncementData       AnnouncementData               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           Return                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TeamMessage_C::CheckShouldShow(const struct FAnnouncementData& AnnouncementData, bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TeamMessage.WBP_TeamMessage_C.CheckShouldShow");

	struct
	{
		struct FAnnouncementData       AnnouncementData;
		bool                           Return;
	} params;

	params.AnnouncementData = AnnouncementData;

	UObject::ProcessEvent(fn, &params);

	if (Return != nullptr)
		*Return = params.Return;
}


// Function WBP_TeamMessage.WBP_TeamMessage_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_TeamMessage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TeamMessage.WBP_TeamMessage_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TeamMessage.WBP_TeamMessage_C.OnAnnouncementFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TeamMessage_C::OnAnnouncementFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TeamMessage.WBP_TeamMessage_C.OnAnnouncementFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TeamMessage.WBP_TeamMessage_C.OnKillCamEnabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TeamMessage_C::OnKillCamEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TeamMessage.WBP_TeamMessage_C.OnKillCamEnabled");

	struct
	{
		bool                           bEnabled;
	} params;

	params.bEnabled = bEnabled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TeamMessage.WBP_TeamMessage_C.HandleRoundSetup
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRoundInitState         RoundInitState                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UWBP_TeamMessage_C::HandleRoundSetup(const struct FRoundInitState& RoundInitState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TeamMessage.WBP_TeamMessage_C.HandleRoundSetup");

	struct
	{
		struct FRoundInitState         RoundInitState;
	} params;

	params.RoundInitState = RoundInitState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TeamMessage.WBP_TeamMessage_C.HandleQueuedAnnoucements
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TeamMessage_C::HandleQueuedAnnoucements()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TeamMessage.WBP_TeamMessage_C.HandleQueuedAnnoucements");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TeamMessage.WBP_TeamMessage_C.OnDelayedHUDAnnouncementComponentCreated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerController*     OwningPlayerController         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSHUDAnnouncementComponent* SpawnedHUDAnnouncementComponent (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TeamMessage_C::OnDelayedHUDAnnouncementComponentCreated(class AKSPlayerController* OwningPlayerController, class UKSHUDAnnouncementComponent* SpawnedHUDAnnouncementComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TeamMessage.WBP_TeamMessage_C.OnDelayedHUDAnnouncementComponentCreated");

	struct
	{
		class AKSPlayerController*     OwningPlayerController;
		class UKSHUDAnnouncementComponent* SpawnedHUDAnnouncementComponent;
	} params;

	params.OwningPlayerController = OwningPlayerController;
	params.SpawnedHUDAnnouncementComponent = SpawnedHUDAnnouncementComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TeamMessage.WBP_TeamMessage_C.ExecuteUbergraph_WBP_TeamMessage
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TeamMessage_C::ExecuteUbergraph_WBP_TeamMessage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TeamMessage.WBP_TeamMessage_C.ExecuteUbergraph_WBP_TeamMessage");

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
