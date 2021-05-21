#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_news_screen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_news_screen.WBP_news_screen_C
// 0x0058 (0x0550 - 0x04F8)
class UWBP_news_screen_C : public UKSWhatsNewModal
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UImage*                                      bkg;                                                      // 0x0500(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_news_cardpanels_C*                      CardPanels;                                               // 0x0508(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_news_fullscreen_C*                      FullScreen;                                               // 0x0510(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Image_348;                                                // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWidgetSwitcher*                             NewsSwitcher;                                             // 0x0520(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<class UWBP_news_card_C*>                    NewsCards;                                                // 0x0528(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	EPUMG_LoginState                                   LoginState;                                               // 0x0538(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0539(0x0007) MISSED OFFSET
	TArray<class UKSWhatsNewPanel*>                    Panels;                                                   // 0x0540(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_news_screen.WBP_news_screen_C");
		return ptr;
	}


	void SetNavigationFocus(class UWidget* Widget);
	void PopulateFullScreenSection(class UKSWhatsNewPanel* Panel);
	void PopulateCardPanelsSection(TArray<class UKSWhatsNewPanel*>* Panels);
	void InitializeScreens();
	void SetCloseBtnPrompt();
	void GoBack();
	void PopulateNewsCards();
	void InitializeWidget(class APUMG_HUD* HUD);
	void InitializeWidgetNavigation();
	void OnJsonChanged();
	void HandleLoginStateChange(EPUMG_LoginState NewLoginState);
	void HandleCloseBtnClicked();
	void ExecuteUbergraph_WBP_news_screen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
