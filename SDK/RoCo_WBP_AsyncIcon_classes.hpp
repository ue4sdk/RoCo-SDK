#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_AsyncIcon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_AsyncIcon.WBP_AsyncIcon_C
// 0x00B0 (0x02E8 - 0x0238)
class UWBP_AsyncIcon_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UKSAsyncImage*                               Icon;                                                     // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UThrobber*                                   LoadingThrobber;                                          // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnIconUpdated;                                            // 0x0250(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0250(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FSlateBrush                                 DefaultBrush;                                             // 0x0260(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_AsyncIcon.WBP_AsyncIcon_C");
		return ptr;
	}


	void Set_Brush_From_Icon_Info(class UIconInfo* Icon_Info, bool MatchSize);
	void Set_Brush_from_Path_on_Item(class UKSItem* Item, bool MatchSize, const struct FSoftObjectPath& Path);
	void SetBrushFromSoftPath(const struct FSoftObjectPath& Soft_Path, bool MatchSize);
	void Set_Brush_from_Texture_on_Item(class UKSItem* Item, bool MatchSize, TSoftObjectPtr<class UTexture2D> Texture);
	void Get_Material(class UMaterialInstanceDynamic** MaterialInstanceDynamic);
	void SetMaterialToUse(class UMaterialInterface* Material);
	void ApplyDefaultBrush();
	void SetBrushFromSoftTexture(TSoftObjectPtr<class UTexture2D> Texture, bool MatchSize);
	void SetBrushFromTexture(class UTexture2D* Texture, bool MatchSize);
	void SetBrushFromItemIcon(class UPlatformInventoryItem* Item, bool MatchSize);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnStartLoad(class UPUMG_AsyncImage* Image);
	void OnFinishLoad(class UPUMG_AsyncImage* Image);
	void ExecuteUbergraph_WBP_AsyncIcon(int EntryPoint);
	void OnIconUpdated__DelegateSignature(class UTexture2D* Texture);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
