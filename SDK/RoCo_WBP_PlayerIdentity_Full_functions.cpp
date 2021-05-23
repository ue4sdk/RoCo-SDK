// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PlayerIdentity_Full_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Populate Lobby Player
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPlayerInfo*           KS_Player_Info                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerIdentity_Full_C::Populate_Lobby_Player(class UKSPlayerInfo* KS_Player_Info)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Populate Lobby Player"));

	struct
	{
		class UKSPlayerInfo*           KS_Player_Info;
	} params;

	params.KS_Player_Info = KS_Player_Info;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Update Title
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Use_Game_State_Data            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerIdentity_Full_C::Update_Title(bool Use_Game_State_Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Update Title"));

	struct
	{
		bool                           Use_Game_State_Data;
	} params;

	params.Use_Game_State_Data = Use_Game_State_Data;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Set From Player Info
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPlayerInfo*           KS_Player_Info                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Use_Game_State_Data            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerIdentity_Full_C::Set_From_Player_Info(class UKSPlayerInfo* KS_Player_Info, bool Use_Game_State_Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Set From Player Info"));

	struct
	{
		class UKSPlayerInfo*           KS_Player_Info;
		bool                           Use_Game_State_Data;
	} params;

	params.KS_Player_Info = KS_Player_Info;
	params.Use_Game_State_Data = Use_Game_State_Data;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Update Border
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Use_Game_State_Data            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerIdentity_Full_C::Update_Border(bool Use_Game_State_Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Update Border"));

	struct
	{
		bool                           Use_Game_State_Data;
	} params;

	params.Use_Game_State_Data = Use_Game_State_Data;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Update Banner
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Use_Game_State_Data            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerIdentity_Full_C::Update_Banner(bool Use_Game_State_Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Update Banner"));

	struct
	{
		bool                           Use_Game_State_Data;
	} params;

	params.Use_Game_State_Data = Use_Game_State_Data;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Update Avatar
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Use_Game_State_Data            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerIdentity_Full_C::Update_Avatar(bool Use_Game_State_Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Update Avatar"));

	struct
	{
		bool                           Use_Game_State_Data;
	} params;

	params.Use_Game_State_Data = Use_Game_State_Data;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Update Level
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerIdentity_Full_C::Update_Level()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Update Level"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Update Current Name
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerIdentity_Full_C::Update_Current_Name()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Update Current Name"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Populate Game Player
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          KSPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerIdentity_Full_C::Populate_Game_Player(class AKSPlayerState* KSPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Populate Game Player"));

	struct
	{
		class AKSPlayerState*          KSPlayerState;
	} params;

	params.KSPlayerState = KSPlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Apply Layout Type
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlayerIdentityLayoutType> Layout_Type                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerIdentity_Full_C::Apply_Layout_Type(TEnumAsByte<EPlayerIdentityLayoutType> Layout_Type)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Apply Layout Type"));

	struct
	{
		TEnumAsByte<EPlayerIdentityLayoutType> Layout_Type;
	} params;

	params.Layout_Type = Layout_Type;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.SetInitialView
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerIdentity_Full_C::SetInitialView()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.SetInitialView"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerIdentity_Full_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PlayerIdentity_Full_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.ExecuteUbergraph_WBP_PlayerIdentity_Full
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerIdentity_Full_C::ExecuteUbergraph_WBP_PlayerIdentity_Full(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.ExecuteUbergraph_WBP_PlayerIdentity_Full"));

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
