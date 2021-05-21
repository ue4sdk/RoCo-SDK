// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_GameModeInfoPanel_Lobby_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_GameModeInfoPanel_Lobby.WBP_GameModeInfoPanel_Lobby_C.GetQueueImageById
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            QueueId                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTexture2D*              QueueImage                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_GameModeInfoPanel_Lobby_C::GetQueueImageById(int QueueId, class UTexture2D** QueueImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GameModeInfoPanel_Lobby.WBP_GameModeInfoPanel_Lobby_C.GetQueueImageById");

	struct
	{
		int                            QueueId;
		class UTexture2D*              QueueImage;
	} params;

	params.QueueId = QueueId;

	UObject::ProcessEvent(fn, &params);

	if (QueueImage != nullptr)
		*QueueImage = params.QueueImage;
}


// Function WBP_GameModeInfoPanel_Lobby.WBP_GameModeInfoPanel_Lobby_C.SetDisplayInfo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   Description                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TSoftObjectPtr<class UTexture2D> Icon                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// bool                           UseMapImage                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FMapDetail              MapInfo                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_GameModeInfoPanel_Lobby_C::SetDisplayInfo(const struct FText& Title, const struct FText& Description, TSoftObjectPtr<class UTexture2D> Icon, bool UseMapImage, const struct FMapDetail& MapInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GameModeInfoPanel_Lobby.WBP_GameModeInfoPanel_Lobby_C.SetDisplayInfo");

	struct
	{
		struct FText                   Title;
		struct FText                   Description;
		TSoftObjectPtr<class UTexture2D> Icon;
		bool                           UseMapImage;
		struct FMapDetail              MapInfo;
	} params;

	params.Title = Title;
	params.Description = Description;
	params.Icon = Icon;
	params.UseMapImage = UseMapImage;
	params.MapInfo = MapInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_GameModeInfoPanel_Lobby.WBP_GameModeInfoPanel_Lobby_C.SetQueueInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FClientQueueInfo        QueueInfo                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           UseMapImage                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FMapDetail              MapInfo                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_GameModeInfoPanel_Lobby_C::SetQueueInfo(const struct FClientQueueInfo& QueueInfo, bool UseMapImage, const struct FMapDetail& MapInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GameModeInfoPanel_Lobby.WBP_GameModeInfoPanel_Lobby_C.SetQueueInfo");

	struct
	{
		struct FClientQueueInfo        QueueInfo;
		bool                           UseMapImage;
		struct FMapDetail              MapInfo;
	} params;

	params.QueueInfo = QueueInfo;
	params.UseMapImage = UseMapImage;
	params.MapInfo = MapInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_GameModeInfoPanel_Lobby.WBP_GameModeInfoPanel_Lobby_C.ExecuteUbergraph_WBP_GameModeInfoPanel_Lobby
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_GameModeInfoPanel_Lobby_C::ExecuteUbergraph_WBP_GameModeInfoPanel_Lobby(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GameModeInfoPanel_Lobby.WBP_GameModeInfoPanel_Lobby_C.ExecuteUbergraph_WBP_GameModeInfoPanel_Lobby");

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
