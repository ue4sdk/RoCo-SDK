#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MusicAudioPlayer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MusicAudioPlayer.MusicAudioPlayer_C
// 0x0000 (0x0500 - 0x0500)
class AMusicAudioPlayer_C : public AKSAudioPlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass MusicAudioPlayer.MusicAudioPlayer_C");
		return ptr;
	}


	void Append_String_to_Event_Array(const struct FString& AppendStringIn, TArray<struct FString>* EventNameArrayIn, TArray<struct FString>* EventNameArrayOut);
	void PrependStringToEventArray(const struct FString& PrependStringIn, TArray<struct FString>* EventNameArrayIn, TArray<struct FString>* EventNameArrayOut);
	TArray<struct FString> ComposeEventNamePriorityArray(const struct FString& EventName, class UKSAudioPlayerStateParameterData* CurrentStateParameters);
	TArray<struct FString> ComposeBankNamePriorityArray(const struct FString& BankPrefix, class UKSAudioPlayerStateParameterData* CurrentStateParameters);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
