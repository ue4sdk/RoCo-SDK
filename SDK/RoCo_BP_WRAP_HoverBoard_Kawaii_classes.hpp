#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BP_WRAP_HoverBoard_Kawaii_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WRAP_HoverBoard_Kawaii.BP_WRAP_HoverBoard_Kawaii_C
// 0x0000 (0x0238 - 0x0238)
class UBP_WRAP_HoverBoard_Kawaii_C : public UHoverBoardCosmeticComponentBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_WRAP_HoverBoard_Kawaii.BP_WRAP_HoverBoard_Kawaii_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
