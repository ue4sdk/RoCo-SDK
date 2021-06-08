#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_InGameJobSelectionPreviewActor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass InGameJobSelectionPreviewActor.InGameJobSelectionPreviewActor_C
// 0x0040 (0x0488 - 0x0448)
class AInGameJobSelectionPreviewActor_C : public AKSJobSelectPreviewActor_InMatch
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0448(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class URogueScreenLoadoutComponent*                LoadoutManagerComponent;                                  // 0x0450(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    FX_Lobby_Materialize_End;                                 // 0x0458(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    FX_Lobby_Materialize_01;                                  // 0x0460(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnLobbyCharacterUpdated;                                  // 0x0468(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FScriptMulticastDelegate                    OnLobbyCharacterSpawned;                                  // 0x0478(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass InGameJobSelectionPreviewActor.InGameJobSelectionPreviewActor_C");
		return ptr;
	}


	void PlayCharacterLoadSFX();
	void BlueprintStateChanged(EKSJobSelectPreviewLoadState PreviousState);
	void Stop_Materializer(bool Force_End_FXs);
	void Start_Materializer();
	void PostLobbyCharacterSpawned();
	void Lobby_Character_Visibility_Changed(bool IsVisible);
	void PreLobbyCharacterDestroy();
	void Update_Materializer();
	void ExecuteUbergraph_InGameJobSelectionPreviewActor(int EntryPoint);
	void OnLobbyCharacterSpawned__DelegateSignature();
	void OnLobbyCharacterUpdated__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
