#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SemtexGrenade_InteractionType_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SemtexGrenade_InteractionType.SemtexGrenade_InteractionType_C
// 0x0000 (0x0328 - 0x0328)
class USemtexGrenade_InteractionType_C : public UInteractionTypeBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SemtexGrenade_InteractionType.SemtexGrenade_InteractionType_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
