// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_QuickPlay_MapThumbnail_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_QuickPlay_MapThumbnail.WBP_QuickPlay_MapThumbnail_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_QuickPlay_MapThumbnail_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_MapThumbnail.WBP_QuickPlay_MapThumbnail_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay_MapThumbnail.WBP_QuickPlay_MapThumbnail_C.SetMapInfo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FUIMapInfo              UIMapInfo                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_QuickPlay_MapThumbnail_C::SetMapInfo(const struct FUIMapInfo& UIMapInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_MapThumbnail.WBP_QuickPlay_MapThumbnail_C.SetMapInfo");

	struct
	{
		struct FUIMapInfo              UIMapInfo;
	} params;

	params.UIMapInfo = UIMapInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay_MapThumbnail.WBP_QuickPlay_MapThumbnail_C.SetMapDetail
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FMapDetail              MapDetail                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_QuickPlay_MapThumbnail_C::SetMapDetail(const struct FMapDetail& MapDetail)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_MapThumbnail.WBP_QuickPlay_MapThumbnail_C.SetMapDetail");

	struct
	{
		struct FMapDetail              MapDetail;
	} params;

	params.MapDetail = MapDetail;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay_MapThumbnail.WBP_QuickPlay_MapThumbnail_C.ExecuteUbergraph_WBP_QuickPlay_MapThumbnail
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QuickPlay_MapThumbnail_C::ExecuteUbergraph_WBP_QuickPlay_MapThumbnail(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_MapThumbnail.WBP_QuickPlay_MapThumbnail_C.ExecuteUbergraph_WBP_QuickPlay_MapThumbnail");

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
