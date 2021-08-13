#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_HoverBoardCosmeticComponentBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HoverBoardCosmeticComponentBase.HoverBoardCosmeticComponentBase_C
// 0x0008 (0x0238 - 0x0230)
class UHoverBoardCosmeticComponentBase_C : public UKSWingSuitCosmeticComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass HoverBoardCosmeticComponentBase.HoverBoardCosmeticComponentBase_C");
		return ptr;
	}


	void OnNotifyEnd_01FA8B23479889DD8DCD908B132EBEFC(const struct FName& NotifyName, int MontageInstanceID);
	void OnNotifyBegin_01FA8B23479889DD8DCD908B132EBEFC(const struct FName& NotifyName, int MontageInstanceID);
	void OnInterrupted_01FA8B23479889DD8DCD908B132EBEFC(const struct FName& NotifyName, int MontageInstanceID);
	void OnBlendOut_01FA8B23479889DD8DCD908B132EBEFC(const struct FName& NotifyName, int MontageInstanceID);
	void OnCompleted_01FA8B23479889DD8DCD908B132EBEFC(const struct FName& NotifyName, int MontageInstanceID);
	void OnFreeFallStarted();
	void OnFreeFallEnded();
	void EventOnInitialized();
	void ExecuteUbergraph_HoverBoardCosmeticComponentBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
