// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_CINE_Walkin_Widget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.SetPlayerData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPersistentPlayerData* PlayerData                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCINE_Walkin_Widget_C::SetPlayerData(class UKSPersistentPlayerData* PlayerData, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.SetPlayerData");

	struct
	{
		class UKSPersistentPlayerData* PlayerData;
		bool                           IsValid;
	} params;

	params.PlayerData = PlayerData;

	UObject::ProcessEvent(fn, &params);

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.Set Player Blueprint References
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSJobSelectPreviewActor* Player01                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AKSJobSelectPreviewActor* Player02                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AKSJobSelectPreviewActor* Player03                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AKSJobSelectPreviewActor* Player04                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCINE_Walkin_Widget_C::Set_Player_Blueprint_References(class AKSJobSelectPreviewActor* Player01, class AKSJobSelectPreviewActor* Player02, class AKSJobSelectPreviewActor* Player03, class AKSJobSelectPreviewActor* Player04)
{
	static auto fn = UObject::FindObject<UFunction>("Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.Set Player Blueprint References");

	struct
	{
		class AKSJobSelectPreviewActor* Player01;
		class AKSJobSelectPreviewActor* Player02;
		class AKSJobSelectPreviewActor* Player03;
		class AKSJobSelectPreviewActor* Player04;
	} params;

	params.Player01 = Player01;
	params.Player02 = Player02;
	params.Player03 = Player03;
	params.Player04 = Player04;

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


// Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.Anim_Player01
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCINE_Walkin_Widget_C::Anim_Player01()
{
	static auto fn = UObject::FindObject<UFunction>("Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.Anim_Player01");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.Anim_Player02
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCINE_Walkin_Widget_C::Anim_Player02()
{
	static auto fn = UObject::FindObject<UFunction>("Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.Anim_Player02");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.Anim_Player03
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCINE_Walkin_Widget_C::Anim_Player03()
{
	static auto fn = UObject::FindObject<UFunction>("Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.Anim_Player03");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.Anim_Player04
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCINE_Walkin_Widget_C::Anim_Player04()
{
	static auto fn = UObject::FindObject<UFunction>("Function CINE_Walkin_Widget.CINE_Walkin_Widget_C.Anim_Player04");

	struct
	{
	} params;


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
