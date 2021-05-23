#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_HitIndictor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HitIndictor.HitIndictor_C
// 0x0020 (0x0530 - 0x0510)
class UHitIndictor_C : public UKSViewedPawnWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UCanvasPanel*                                HitCanvas;                                                // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<class UHitIndicatorSub_C*>                  HitIndicatorPool;                                         // 0x0520(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass HitIndictor.HitIndictor_C"));
		return ptr;
	}


	void ReturnToPool(class UHitIndicatorSub_C* HitIndicatorSub);
	void Init_Indicator_Pool();
	void CreateHitIndicator(class UClass* DamageType, const struct FVector& DamageOrigin, bool HitArmor);
	void Construct();
	void On_Viewed_Pawn_Take_Damage(float DamageAmount, class UClass* DamageTypeClass, class AActor* DamageCauser, const struct FVector& DamageOrigin);
	void HandleViewedPawnTakeArmorDamage(float DamageAmount, class UClass* DamageTypeClass, class AActor* DamageCauser, const struct FVector& DamageOrigin);
	void ExecuteUbergraph_HitIndictor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
