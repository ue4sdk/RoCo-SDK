// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_CINE_Walkin_Widget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.GetPlayerInfoWidgetsForPlayerNumber
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            PlayerNumber                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTextBlock*              PlayerNameText                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTextBlock*              JobNameText                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWBP_RogueMasteryPortrait_C* RogueMasteryPortrait           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWBP_AsyncIcon_C*        JobFlatIcon                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWBP_AsyncIcon_C*        JobFlatIconShadow              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCINE_Walkin_Widget_C::GetPlayerInfoWidgetsForPlayerNumber(int PlayerNumber, class UTextBlock** PlayerNameText, class UTextBlock** JobNameText, class UWBP_RogueMasteryPortrait_C** RogueMasteryPortrait, class UWBP_AsyncIcon_C** JobFlatIcon, class UWBP_AsyncIcon_C** JobFlatIconShadow)
{
	static auto fn = UObject::FindObject<UFunction>("Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.GetPlayerInfoWidgetsForPlayerNumber");

	struct
	{
		int                            PlayerNumber;
		class UTextBlock*              PlayerNameText;
		class UTextBlock*              JobNameText;
		class UWBP_RogueMasteryPortrait_C* RogueMasteryPortrait;
		class UWBP_AsyncIcon_C*        JobFlatIcon;
		class UWBP_AsyncIcon_C*        JobFlatIconShadow;
	} params;

	params.PlayerNumber = PlayerNumber;

	UObject::ProcessEvent(fn, &params);

	if (PlayerNameText != nullptr)
		*PlayerNameText = params.PlayerNameText;
	if (JobNameText != nullptr)
		*JobNameText = params.JobNameText;
	if (RogueMasteryPortrait != nullptr)
		*RogueMasteryPortrait = params.RogueMasteryPortrait;
	if (JobFlatIcon != nullptr)
		*JobFlatIcon = params.JobFlatIcon;
	if (JobFlatIconShadow != nullptr)
		*JobFlatIconShadow = params.JobFlatIconShadow;
}


// Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.Handle Debug Player Infos
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCINE_Walkin_Widget_C::Handle_Debug_Player_Infos()
{
	static auto fn = UObject::FindObject<UFunction>("Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.Handle Debug Player Infos");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.StopAnimsPlayerTwo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCINE_Walkin_Widget_C::StopAnimsPlayerTwo()
{
	static auto fn = UObject::FindObject<UFunction>("Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.StopAnimsPlayerTwo");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.StopAnimsPlayerOne
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCINE_Walkin_Widget_C::StopAnimsPlayerOne()
{
	static auto fn = UObject::FindObject<UFunction>("Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.StopAnimsPlayerOne");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.SetPlayerData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPersistentPlayerData* PlayerData                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            PlayerNumber                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCINE_Walkin_Widget_C::SetPlayerData(class UKSPersistentPlayerData* PlayerData, int PlayerNumber, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.SetPlayerData");

	struct
	{
		class UKSPersistentPlayerData* PlayerData;
		int                            PlayerNumber;
		bool                           IsValid;
	} params;

	params.PlayerData = PlayerData;
	params.PlayerNumber = PlayerNumber;

	UObject::ProcessEvent(fn, &params);

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.Set Player Blueprint References
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class AKSJobSelectPreviewActor*> Players                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UCINE_Walkin_Widget_C::Set_Player_Blueprint_References(TArray<class AKSJobSelectPreviewActor*>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.Set Player Blueprint References");

	struct
	{
		TArray<class AKSJobSelectPreviewActor*> Players;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Players != nullptr)
		*Players = params.Players;
}


// Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.Anim_Player02
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TotalWalkingIn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCINE_Walkin_Widget_C::Anim_Player02(int TotalWalkingIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.Anim_Player02");

	struct
	{
		int                            TotalWalkingIn;
	} params;

	params.TotalWalkingIn = TotalWalkingIn;

	UObject::ProcessEvent(fn, &params);
}


// Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.Anim_Player03
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TotalWalkingIn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCINE_Walkin_Widget_C::Anim_Player03(int TotalWalkingIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.Anim_Player03");

	struct
	{
		int                            TotalWalkingIn;
	} params;

	params.TotalWalkingIn = TotalWalkingIn;

	UObject::ProcessEvent(fn, &params);
}


// Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.Anim_Player04
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TotalWalkingIn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCINE_Walkin_Widget_C::Anim_Player04(int TotalWalkingIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.Anim_Player04");

	struct
	{
		int                            TotalWalkingIn;
	} params;

	params.TotalWalkingIn = TotalWalkingIn;

	UObject::ProcessEvent(fn, &params);
}


// Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.Anim_Player01
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TotalWalkingIn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCINE_Walkin_Widget_C::Anim_Player01(int TotalWalkingIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.Anim_Player01");

	struct
	{
		int                            TotalWalkingIn;
	} params;

	params.TotalWalkingIn = TotalWalkingIn;

	UObject::ProcessEvent(fn, &params);
}


// Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCINE_Walkin_Widget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.AnimPlayer_05
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TotalWalkingIn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCINE_Walkin_Widget_C::AnimPlayer_05(int TotalWalkingIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.AnimPlayer_05");

	struct
	{
		int                            TotalWalkingIn;
	} params;

	params.TotalWalkingIn = TotalWalkingIn;

	UObject::ProcessEvent(fn, &params);
}


// Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.AnimPlayer_06
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TotalWalkingIn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCINE_Walkin_Widget_C::AnimPlayer_06(int TotalWalkingIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.AnimPlayer_06");

	struct
	{
		int                            TotalWalkingIn;
	} params;

	params.TotalWalkingIn = TotalWalkingIn;

	UObject::ProcessEvent(fn, &params);
}


// Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.ExecuteUbergraph_CINE_Walkin_Widget
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCINE_Walkin_Widget_C::ExecuteUbergraph_CINE_Walkin_Widget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.ExecuteUbergraph_CINE_Walkin_Widget");

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
