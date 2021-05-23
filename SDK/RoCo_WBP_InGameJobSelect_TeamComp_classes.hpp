#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_InGameJobSelect_TeamComp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C
// 0x0050 (0x0530 - 0x04E0)
class UWBP_InGameJobSelect_TeamComp_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            ShowBlueTeam;                                             // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWBP_InGameJobSelect_TeamComp_Teammate_C*    Teammate1;                                                // 0x04F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_InGameJobSelect_TeamComp_Teammate_C*    Teammate2;                                                // 0x04F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_InGameJobSelect_TeamComp_Teammate_C*    Teammate3;                                                // 0x0500(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_InGameJobSelect_TeamComp_Teammate_C*    Teammate4;                                                // 0x0508(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<class UWBP_InGameJobSelect_TeamComp_Teammate_C*> TeammateItems;                                            // 0x0510(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	bool                                               IsStaggeredView;                                          // 0x0520(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	bool                                               BindTeamToModels;                                         // 0x0521(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0522(0x0006) MISSED OFFSET
	class AKSTeamState*                                BoundTeam;                                                // 0x0528(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C"));
		return ptr;
	}


	void ResetJobEntries();
	void TeamMembersUpdated(class AKSPlayerState* NewMember);
	void Setup_Team_Display();
	void SetInitialView();
	void OnJobEntryUpdated(class UJobSelectionEntryDetails* JobSelectionEntry);
	void OnPlayerStateChanged(class AKSPlayerState* PlayerState);
	void On_Team_Changed(class AKSPlayerState* KSPlayerState);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void InitializeWidget(class APUMG_HUD* HUD);
	void Team_Added_To_Match(class AKSTeamState* New_Team);
	void ExecuteUbergraph_WBP_InGameJobSelect_TeamComp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
