#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_UIFunctionLibrary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass UIFunctionLibrary.UIFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UUIFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass UIFunctionLibrary.UIFunctionLibrary_C");
		return ptr;
	}


	static void GetRogueBucksItemId(class UObject* __WorldContext, int* ItemId);
	static void GetGameHUD(class UObject* __WorldContext, class ABP_GameHUDNew_C** GameHUD);
	static void GetSettingsDataFactory(class UObject* __WorldContext, class UKSSettingsDataFactory** SettingsDataFactory);
	static void GetHUDCommon(class UObject* __WorldContext, class AKSHUDCommon** HUD_Common);
	static void SetupInputCallout(class UWBP_InputCallout_C* InputCallout, class APUMG_HUD* HUD, TEnumAsByte<EPGAME_INPUT_STATE> InputState, class UObject* __WorldContext);
	static void AssignActionIcon(class UImage* Image, const struct FName& ActionName, bool MatchSize, class UObject* __WorldContext);
	static void GetRankedTierAndDivisionByLevel(int RankedLevel, class UObject* __WorldContext, TEnumAsByte<E_RankedTiers>* RankedTier, int* Division);
	static void GetRankedTierAndDivisionTextByLevel(int RankedLevel, class UObject* __WorldContext, struct FText* RankedTierRichText, struct FText* RankedDivisionText);
	static void GetRankedBadgeTextureByLevel(int RankedLevel, class UObject* __WorldContext, class UTexture2D** RankedBadgeTexture, TSoftObjectPtr<class UTexture2D>* RankedBadgeSoftTexture);
	static void GetDefaultAccountItemForSlot(EPlayerAccountSlot Slot, class UObject* __WorldContext, class UPlatformInventoryItem** Default_Item);
	static void GetInputTypeIcon(EKSPlayerInputType InputType, class UObject* __WorldContext, class UTexture2D** Texture);
	static void GetPlatformIcon(EKSPlatformType Platform, class UObject* __WorldContext, class UTexture2D** Icon);
	static void GetDamageTypeResistIcon(class UClass* Damage_Type, class UObject* __WorldContext, class UTexture2D** Resisted_Icon);
	static void GetRarityFormatByTag(const struct FGameplayTagContainer& GameplayTagContainer, class UObject* __WorldContext, struct FText* RarityFormat);
	static void GetFontByName(const struct FName& FontName, class UObject* __WorldContext, bool* HasFound, struct FSlateFontInfo* FontInfo);
	static void GetColorByName(const struct FName& ColorName, class UObject* __WorldContext, bool* HasFound, struct FLinearColor* Color);
	static void GetRarityHighlightColorByTag(const struct FGameplayTagContainer& GameplayTagContainer, class UObject* __WorldContext, struct FSlateColor* RarityColor);
	static void GetColorPalette_v2(class UObject* __WorldContext, struct FUIColorPalette_v2* ColorPalette);
	static void GetWeaponTypeAsText(const struct FGameplayTag& WeaponTypeTag, class UObject* __WorldContext, struct FText* Text);
	static void GetItemType(class UPlatformInventoryItem* InventoryItem, class UObject* __WorldContext, struct FText* ItemType);
	static void UpdateScrollBoxOffset(class UScrollBox* ScrollBox, float Speed, float TimeDelta, class UObject* __WorldContext, bool* Scrolled);
	static void GetFormattedTimeSpan(bool Shorthand, class UObject* __WorldContext, struct FTimespan* Timespan, struct FText* Text);
	static void IsMatchTimerAtLeastThisUrgent(float Timer_Seconds, TEnumAsByte<E_MatchTimerVisualUrgency> Urgency_Level, class UObject* __WorldContext, bool* Return_Value);
	static void GetMatchTimerVisualUrgency(float Timer_Seconds, class UObject* __WorldContext, TEnumAsByte<E_MatchTimerVisualUrgency>* Return_Value);
	static void GetRarityValueByTag(const struct FGameplayTagContainer& GameplayTagContainer, class UObject* __WorldContext, int* RarityValue);
	static void GetRarityNameByTag(const struct FGameplayTagContainer& GameplayTagContainer, class UObject* __WorldContext, struct FText* RarityName);
	static void GetRarityColorByTag(const struct FGameplayTagContainer& GameplayTagContainer, class UObject* __WorldContext, struct FSlateColor* RarityColor);
	static void GetPlatformViewProfileText(class UObject* __WorldContext, struct FText* Return_Value);
	static void GetSelfColor(class UObject* __WorldContext, struct FLinearColor* Return_Value);
	static void GetEnemyColor(class UObject* __WorldContext, struct FLinearColor* Return_Value);
	static void GetFriendlyColor(class UObject* __WorldContext, struct FLinearColor* Return_Value);
	static void GetTextChatChannelName(EPUMG_ChatChannel Channel, class UPUMG_PlayerInfo* PersonalChannelPlayer, class UObject* __WorldContext, struct FText* Name);
	static void SetTextChatWidgetColor(EPUMG_ChatChannel Channel, class UTextBlock* TextWidget, class UObject* __WorldContext);
	static void GetCrossplayIcon(class UObject* __WorldContext, bool* ValidIconFound, class UTexture2D** OutIconTexture);
	static void GetCashColor(class UObject* __WorldContext, struct FLinearColor* Return_Value);
	static void FormatSecondsToTimerText(float Seconds, int Minute_Digits, bool ShowTenths, class UObject* __WorldContext, struct FText* Timer_Text);
	static void GetSoundLibraries(class UObject* __WorldContext, struct FUISoundLibraries* SoundLibrary);
	static void GetColorForLoadoutBundle(class UKSLoadoutBundle* Loadout_Bundle, class UObject* __WorldContext, struct FLinearColor* Role_Dark_Color, struct FLinearColor* Role_Light_Color);
	static void GetTextForSpecialtyCategory(ESpecialtyRoleType Specialty_Role_Type, class UObject* __WorldContext, struct FText* Role_Name);
	static void GetColorForSpecialtyCategory(ESpecialtyRoleType Specialty_Role_Type, class UObject* __WorldContext, struct FLinearColor* Role_Dark_Color, struct FLinearColor* Role_Light_Color);
	static void GetColorPalette(class UObject* __WorldContext, struct FUIColorPalette* ColorPalette);
	static void GetSlateFontInfo(class UObject* __WorldContext, struct FUIFontPalette* UI_Fonts);
	static void GetMedColor(class UObject* __WorldContext, struct FLinearColor* Med_Green, struct FLinearColor* Med_Green_Light);
	static void GetHideAnimDefaultTime(class UObject* __WorldContext, float* HideAnimTime);
	static void GetShowAnimDefaultTime(class UObject* __WorldContext, float* ShowAnimTime);
	static void CurrencyTypeToCurrencyIcon(unsigned char CurrencyType, class UObject* __WorldContext, class UTexture2D** CurrencyIcon);
	static void CurrencyIdToCurrencyIcon(int CurrencyId, class UObject* __WorldContext, class UTexture2D** CurrencyIcon);
	static void Get_Opposing_Team_Num(int Team_Num, class UObject* __WorldContext, int* Return_Value);
	static void GetAlignmentColors(class UObject* __WorldContext, struct FLinearColor* Friendly, struct FLinearColor* Enemy, struct FLinearColor* Neutral);
	static void InvertColor(const struct FLinearColor& Color, class UObject* __WorldContext, struct FLinearColor* Return_Value);
	static void GetIconForGamepadButton(const struct FKey& Button, class UObject* __WorldContext, class UTexture2D** Icon);
	static void DrawCircle(const struct FVector2D& Center, float Radius, const struct FLinearColor& Tint, int Line_Count, bool Anti_Alias, class UObject* __WorldContext, struct FPaintContext* Context);
	static void GetTeamName(int TeamNum, bool Abbreviate, class UObject* __WorldContext, struct FText* teamName);
	static void GetLargeTeamIcons(class UObject* __WorldContext, class UTexture2D** FriendlyBorder, class UTexture2D** FriendlyFill, class UTexture2D** FriendlyIcon, class UTexture2D** EnemyBorder, class UTexture2D** EnemyFill, class UTexture2D** EnemyIcon);
	static void GetTeamColor(int TeamNum, int OwningPlayerNum, class UObject* __WorldContext, struct FLinearColor* Team_Color, bool* Found_Color);
	static void GetRarityColors(class UObject* __WorldContext, struct FLinearColor* Common, struct FLinearColor* Rare, struct FLinearColor* Epic, struct FLinearColor* Legendary);
	static void GridIndexChecker(int TestIndex, int NumColumns, bool HorizontalWrapping, int SourceIndex, class UObject* __WorldContext, TArray<class UPUMG_Widget*>* Array, class UPUMG_Widget** Output);
	static void LinearIndexChecker(int Index, class UObject* __WorldContext, TArray<class UPUMG_Widget*>* Array, class UPUMG_Widget** Output);
	static void SetUpLinearNavigation(class UPUMG_Widget* ParentWidget, int FocusGroup, bool Horizontal, bool Looping, class UObject* __WorldContext, TArray<class UPUMG_Widget*>* NavWidgets);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
