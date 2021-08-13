#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Dallas_Base_01_CustomApparelComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dallas_Base_01_CustomApparelComponent.Dallas_Base_01_CustomApparelComponent_C
// 0x0008 (0x00D8 - 0x00D0)
class UDallas_Base_01_CustomApparelComponent_C : public UKSCustomApparelComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Dallas_Base_01_CustomApparelComponent.Dallas_Base_01_CustomApparelComponent_C");
		return ptr;
	}


	void Find_and_Bind_Mod_Instance(class AKSCharacter* Character);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Dallas_Base_01_CustomApparelComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
