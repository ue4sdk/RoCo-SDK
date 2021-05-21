// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_BanShelfEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_BanShelfEntry.WBP_BanShelfEntry_C.SetBanDisplay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsFriendly                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TSoftObjectPtr<class UTexture2D> JobPortrait                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// bool                           BanSkipped                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_BanShelfEntry_C::SetBanDisplay(bool IsFriendly, TSoftObjectPtr<class UTexture2D> JobPortrait, bool BanSkipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BanShelfEntry.WBP_BanShelfEntry_C.SetBanDisplay");

	struct
	{
		bool                           IsFriendly;
		TSoftObjectPtr<class UTexture2D> JobPortrait;
		bool                           BanSkipped;
	} params;

	params.IsFriendly = IsFriendly;
	params.JobPortrait = JobPortrait;
	params.BanSkipped = BanSkipped;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
