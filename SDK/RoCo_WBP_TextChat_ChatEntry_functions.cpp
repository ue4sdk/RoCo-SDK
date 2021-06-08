// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_TextChat_ChatEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.HandleInitialSpawn
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TextChat_ChatEntry_C::HandleInitialSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.HandleInitialSpawn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.InitialShowFinished
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TextChat_ChatEntry_C::InitialShowFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.InitialShowFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.SetWindowCollapsed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Collapsed                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TextChat_ChatEntry_C::SetWindowCollapsed(bool Collapsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.SetWindowCollapsed");

	struct
	{
		bool                           Collapsed;
	} params;

	params.Collapsed = Collapsed;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.SetTextWithoutPlayer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// EPUMG_ChatChannel              Channel                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TextChat_ChatEntry_C::SetTextWithoutPlayer(const struct FText& Text, EPUMG_ChatChannel Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.SetTextWithoutPlayer");

	struct
	{
		struct FText                   Text;
		EPUMG_ChatChannel              Channel;
	} params;

	params.Text = Text;
	params.Channel = Channel;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.SetTextWithPlayer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UPUMG_PlayerInfo*        Sender                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPUMG_PlayerInfo*        Recipient                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsOwnMessage                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// EPUMG_ChatChannel              Channel                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TextChat_ChatEntry_C::SetTextWithPlayer(const struct FText& Text, class UPUMG_PlayerInfo* Sender, class UPUMG_PlayerInfo* Recipient, bool IsOwnMessage, EPUMG_ChatChannel Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.SetTextWithPlayer");

	struct
	{
		struct FText                   Text;
		class UPUMG_PlayerInfo*        Sender;
		class UPUMG_PlayerInfo*        Recipient;
		bool                           IsOwnMessage;
		EPUMG_ChatChannel              Channel;
	} params;

	params.Text = Text;
	params.Sender = Sender;
	params.Recipient = Recipient;
	params.IsOwnMessage = IsOwnMessage;
	params.Channel = Channel;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_TextChat_ChatEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.ExecuteUbergraph_WBP_TextChat_ChatEntry
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TextChat_ChatEntry_C::ExecuteUbergraph_WBP_TextChat_ChatEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.ExecuteUbergraph_WBP_TextChat_ChatEntry");

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
