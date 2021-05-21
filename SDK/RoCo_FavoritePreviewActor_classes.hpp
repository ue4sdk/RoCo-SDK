#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_FavoritePreviewActor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FavoritePreviewActor.FavoritePreviewActor_C
// 0x0008 (0x0520 - 0x0518)
class AFavoritePreviewActor_C : public AKSJobSelectPreviewActor_Lobby
{
public:
	class UFavoritePreviewLoadoutComponent*            FavoritePreviewLoadout;                                   // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass FavoritePreviewActor.FavoritePreviewActor_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
