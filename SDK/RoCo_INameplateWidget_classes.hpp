#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_INameplateWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass INameplateWidget.INameplateWidget_C
// 0x0000 (0x0028 - 0x0028)
class UINameplateWidget_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("DynamicClass INameplateWidget.INameplateWidget_C");
		return ptr;
	}


	void OnUnhovered();
	void OnPossession(class APlayerState* bpp__PlayerState__pf, class AKSCharacter* bpp__Character__pf);
	void OnHovered();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
