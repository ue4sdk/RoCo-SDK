// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_CINE_HUD_INTERFACE_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CINE_HUD_INTERFACE.CINE_HUD_INTERFACE_C.Init WalkIn Widget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSJobSelectPreviewActor* In_Player_01                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AKSJobSelectPreviewActor* In_Player_02                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AKSJobSelectPreviewActor* In_Player_03                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AKSJobSelectPreviewActor* In_Player_04                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCINE_HUD_INTERFACE_C::Init_WalkIn_Widget(class AKSJobSelectPreviewActor* In_Player_01, class AKSJobSelectPreviewActor* In_Player_02, class AKSJobSelectPreviewActor* In_Player_03, class AKSJobSelectPreviewActor* In_Player_04)
{
	static auto fn = UObject::FindObject<UFunction>("Function CINE_HUD_INTERFACE.CINE_HUD_INTERFACE_C.Init WalkIn Widget");

	struct
	{
		class AKSJobSelectPreviewActor* In_Player_01;
		class AKSJobSelectPreviewActor* In_Player_02;
		class AKSJobSelectPreviewActor* In_Player_03;
		class AKSJobSelectPreviewActor* In_Player_04;
	} params;

	params.In_Player_01 = In_Player_01;
	params.In_Player_02 = In_Player_02;
	params.In_Player_03 = In_Player_03;
	params.In_Player_04 = In_Player_04;

	UObject::ProcessEvent(fn, &params);
}


// Function CINE_HUD_INTERFACE.CINE_HUD_INTERFACE_C.Set Cinematic Nameplate Data
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPersistentPlayerData* Player_Data                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCINE_HUD_INTERFACE_C::Set_Cinematic_Nameplate_Data(class UKSPersistentPlayerData* Player_Data, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CINE_HUD_INTERFACE.CINE_HUD_INTERFACE_C.Set Cinematic Nameplate Data");

	struct
	{
		class UKSPersistentPlayerData* Player_Data;
		int                            Index;
	} params;

	params.Player_Data = Player_Data;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function CINE_HUD_INTERFACE.CINE_HUD_INTERFACE_C.Play Cinematic Nameplate Anim
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCINE_HUD_INTERFACE_C::Play_Cinematic_Nameplate_Anim(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CINE_HUD_INTERFACE.CINE_HUD_INTERFACE_C.Play Cinematic Nameplate Anim");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
