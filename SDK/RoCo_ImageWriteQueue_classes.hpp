#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ImageWriteQueue_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ImageWriteQueue.ImageWriteBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UImageWriteBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ImageWriteQueue.ImageWriteBlueprintLibrary");
		return ptr;
	}


	static void ExportToDisk(class UTexture* Texture, const struct FString& Filename, const struct FImageWriteOptions& Options);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
