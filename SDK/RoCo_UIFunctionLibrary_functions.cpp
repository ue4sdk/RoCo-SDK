// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_UIFunctionLibrary_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UIFunctionLibrary.UIFunctionLibrary_C.GetRogueBucksItemId
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            ItemId                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetRogueBucksItemId(class UObject* __WorldContext, int* ItemId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetRogueBucksItemId"));

	struct
	{
		class UObject*                 __WorldContext;
		int                            ItemId;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ItemId != nullptr)
		*ItemId = params.ItemId;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetGameHUD
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ABP_GameHUDNew_C*        GameHUD                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetGameHUD(class UObject* __WorldContext, class ABP_GameHUDNew_C** GameHUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetGameHUD"));

	struct
	{
		class UObject*                 __WorldContext;
		class ABP_GameHUDNew_C*        GameHUD;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GameHUD != nullptr)
		*GameHUD = params.GameHUD;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetSettingsDataFactory
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSSettingsDataFactory*  SettingsDataFactory            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetSettingsDataFactory(class UObject* __WorldContext, class UKSSettingsDataFactory** SettingsDataFactory)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetSettingsDataFactory"));

	struct
	{
		class UObject*                 __WorldContext;
		class UKSSettingsDataFactory*  SettingsDataFactory;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (SettingsDataFactory != nullptr)
		*SettingsDataFactory = params.SettingsDataFactory;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetHUDCommon
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AKSHUDCommon*            HUD_Common                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetHUDCommon(class UObject* __WorldContext, class AKSHUDCommon** HUD_Common)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetHUDCommon"));

	struct
	{
		class UObject*                 __WorldContext;
		class AKSHUDCommon*            HUD_Common;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (HUD_Common != nullptr)
		*HUD_Common = params.HUD_Common;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.SetupInputCallout
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_InputCallout_C*     InputCallout                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::SetupInputCallout(class UWBP_InputCallout_C* InputCallout, class APUMG_HUD* HUD, TEnumAsByte<EPGAME_INPUT_STATE> InputState, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.SetupInputCallout"));

	struct
	{
		class UWBP_InputCallout_C*     InputCallout;
		class APUMG_HUD*               HUD;
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
		class UObject*                 __WorldContext;
	} params;

	params.InputCallout = InputCallout;
	params.HUD = HUD;
	params.InputState = InputState;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.AssignActionIcon
// (FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   ActionName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           MatchSize                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::AssignActionIcon(class UImage* Image, const struct FName& ActionName, bool MatchSize, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.AssignActionIcon"));

	struct
	{
		class UImage*                  Image;
		struct FName                   ActionName;
		bool                           MatchSize;
		class UObject*                 __WorldContext;
	} params;

	params.Image = Image;
	params.ActionName = ActionName;
	params.MatchSize = MatchSize;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetRankedTierAndDivisionByLevel
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            RankedLevel                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_RankedTiers>     RankedTier                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Division                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetRankedTierAndDivisionByLevel(int RankedLevel, class UObject* __WorldContext, TEnumAsByte<E_RankedTiers>* RankedTier, int* Division)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetRankedTierAndDivisionByLevel"));

	struct
	{
		int                            RankedLevel;
		class UObject*                 __WorldContext;
		TEnumAsByte<E_RankedTiers>     RankedTier;
		int                            Division;
	} params;

	params.RankedLevel = RankedLevel;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (RankedTier != nullptr)
		*RankedTier = params.RankedTier;
	if (Division != nullptr)
		*Division = params.Division;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetRankedTierAndDivisionTextByLevel
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            RankedLevel                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   RankedTierRichText             (CPF_Parm, CPF_OutParm)
// struct FText                   RankedDivisionText             (CPF_Parm, CPF_OutParm)

void UUIFunctionLibrary_C::GetRankedTierAndDivisionTextByLevel(int RankedLevel, class UObject* __WorldContext, struct FText* RankedTierRichText, struct FText* RankedDivisionText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetRankedTierAndDivisionTextByLevel"));

	struct
	{
		int                            RankedLevel;
		class UObject*                 __WorldContext;
		struct FText                   RankedTierRichText;
		struct FText                   RankedDivisionText;
	} params;

	params.RankedLevel = RankedLevel;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (RankedTierRichText != nullptr)
		*RankedTierRichText = params.RankedTierRichText;
	if (RankedDivisionText != nullptr)
		*RankedDivisionText = params.RankedDivisionText;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetRankedBadgeTextureByLevel
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            RankedLevel                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTexture2D*              RankedBadgeTexture             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D> RankedBadgeSoftTexture         (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetRankedBadgeTextureByLevel(int RankedLevel, class UObject* __WorldContext, class UTexture2D** RankedBadgeTexture, TSoftObjectPtr<class UTexture2D>* RankedBadgeSoftTexture)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetRankedBadgeTextureByLevel"));

	struct
	{
		int                            RankedLevel;
		class UObject*                 __WorldContext;
		class UTexture2D*              RankedBadgeTexture;
		TSoftObjectPtr<class UTexture2D> RankedBadgeSoftTexture;
	} params;

	params.RankedLevel = RankedLevel;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (RankedBadgeTexture != nullptr)
		*RankedBadgeTexture = params.RankedBadgeTexture;
	if (RankedBadgeSoftTexture != nullptr)
		*RankedBadgeSoftTexture = params.RankedBadgeSoftTexture;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetDefaultAccountItemForSlot
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EPlayerAccountSlot             Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPlatformInventoryItem*  Default_Item                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetDefaultAccountItemForSlot(EPlayerAccountSlot Slot, class UObject* __WorldContext, class UPlatformInventoryItem** Default_Item)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetDefaultAccountItemForSlot"));

	struct
	{
		EPlayerAccountSlot             Slot;
		class UObject*                 __WorldContext;
		class UPlatformInventoryItem*  Default_Item;
	} params;

	params.Slot = Slot;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Default_Item != nullptr)
		*Default_Item = params.Default_Item;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetInputTypeIcon
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EKSPlayerInputType             InputType                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTexture2D*              Texture                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetInputTypeIcon(EKSPlayerInputType InputType, class UObject* __WorldContext, class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetInputTypeIcon"));

	struct
	{
		EKSPlayerInputType             InputType;
		class UObject*                 __WorldContext;
		class UTexture2D*              Texture;
	} params;

	params.InputType = InputType;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Texture != nullptr)
		*Texture = params.Texture;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetPlatformIcon
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EKSPlatformType                Platform                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTexture2D*              Icon                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetPlatformIcon(EKSPlatformType Platform, class UObject* __WorldContext, class UTexture2D** Icon)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetPlatformIcon"));

	struct
	{
		EKSPlatformType                Platform;
		class UObject*                 __WorldContext;
		class UTexture2D*              Icon;
	} params;

	params.Platform = Platform;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Icon != nullptr)
		*Icon = params.Icon;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetDamageTypeResistIcon
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UClass*                  Damage_Type                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTexture2D*              Resisted_Icon                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetDamageTypeResistIcon(class UClass* Damage_Type, class UObject* __WorldContext, class UTexture2D** Resisted_Icon)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetDamageTypeResistIcon"));

	struct
	{
		class UClass*                  Damage_Type;
		class UObject*                 __WorldContext;
		class UTexture2D*              Resisted_Icon;
	} params;

	params.Damage_Type = Damage_Type;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Resisted_Icon != nullptr)
		*Resisted_Icon = params.Resisted_Icon;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityFormatByTag
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   RarityFormat                   (CPF_Parm, CPF_OutParm)

void UUIFunctionLibrary_C::GetRarityFormatByTag(const struct FGameplayTagContainer& GameplayTagContainer, class UObject* __WorldContext, struct FText* RarityFormat)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityFormatByTag"));

	struct
	{
		struct FGameplayTagContainer   GameplayTagContainer;
		class UObject*                 __WorldContext;
		struct FText                   RarityFormat;
	} params;

	params.GameplayTagContainer = GameplayTagContainer;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (RarityFormat != nullptr)
		*RarityFormat = params.RarityFormat;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetFontByName
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FName                   FontName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           HasFound                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FSlateFontInfo          FontInfo                       (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetFontByName(const struct FName& FontName, class UObject* __WorldContext, bool* HasFound, struct FSlateFontInfo* FontInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetFontByName"));

	struct
	{
		struct FName                   FontName;
		class UObject*                 __WorldContext;
		bool                           HasFound;
		struct FSlateFontInfo          FontInfo;
	} params;

	params.FontName = FontName;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (HasFound != nullptr)
		*HasFound = params.HasFound;
	if (FontInfo != nullptr)
		*FontInfo = params.FontInfo;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetColorByName
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FName                   ColorName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           HasFound                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetColorByName(const struct FName& ColorName, class UObject* __WorldContext, bool* HasFound, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetColorByName"));

	struct
	{
		struct FName                   ColorName;
		class UObject*                 __WorldContext;
		bool                           HasFound;
		struct FLinearColor            Color;
	} params;

	params.ColorName = ColorName;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (HasFound != nullptr)
		*HasFound = params.HasFound;
	if (Color != nullptr)
		*Color = params.Color;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityHighlightColorByTag
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FSlateColor             RarityColor                    (CPF_Parm, CPF_OutParm)

void UUIFunctionLibrary_C::GetRarityHighlightColorByTag(const struct FGameplayTagContainer& GameplayTagContainer, class UObject* __WorldContext, struct FSlateColor* RarityColor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityHighlightColorByTag"));

	struct
	{
		struct FGameplayTagContainer   GameplayTagContainer;
		class UObject*                 __WorldContext;
		struct FSlateColor             RarityColor;
	} params;

	params.GameplayTagContainer = GameplayTagContainer;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (RarityColor != nullptr)
		*RarityColor = params.RarityColor;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetColorPalette_v2
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FUIColorPalette_v2      ColorPalette                   (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetColorPalette_v2(class UObject* __WorldContext, struct FUIColorPalette_v2* ColorPalette)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetColorPalette_v2"));

	struct
	{
		class UObject*                 __WorldContext;
		struct FUIColorPalette_v2      ColorPalette;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ColorPalette != nullptr)
		*ColorPalette = params.ColorPalette;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetWeaponTypeAsText
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTag            WeaponTypeTag                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Text                           (CPF_Parm, CPF_OutParm)

void UUIFunctionLibrary_C::GetWeaponTypeAsText(const struct FGameplayTag& WeaponTypeTag, class UObject* __WorldContext, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetWeaponTypeAsText"));

	struct
	{
		struct FGameplayTag            WeaponTypeTag;
		class UObject*                 __WorldContext;
		struct FText                   Text;
	} params;

	params.WeaponTypeTag = WeaponTypeTag;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Text != nullptr)
		*Text = params.Text;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetItemType
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPlatformInventoryItem*  InventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   ItemType                       (CPF_Parm, CPF_OutParm)

void UUIFunctionLibrary_C::GetItemType(class UPlatformInventoryItem* InventoryItem, class UObject* __WorldContext, struct FText* ItemType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetItemType"));

	struct
	{
		class UPlatformInventoryItem*  InventoryItem;
		class UObject*                 __WorldContext;
		struct FText                   ItemType;
	} params;

	params.InventoryItem = InventoryItem;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ItemType != nullptr)
		*ItemType = params.ItemType;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.UpdateScrollBoxOffset
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UScrollBox*              ScrollBox                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Speed                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TimeDelta                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Scrolled                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UUIFunctionLibrary_C::UpdateScrollBoxOffset(class UScrollBox* ScrollBox, float Speed, float TimeDelta, class UObject* __WorldContext, bool* Scrolled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.UpdateScrollBoxOffset"));

	struct
	{
		class UScrollBox*              ScrollBox;
		float                          Speed;
		float                          TimeDelta;
		class UObject*                 __WorldContext;
		bool                           Scrolled;
	} params;

	params.ScrollBox = ScrollBox;
	params.Speed = Speed;
	params.TimeDelta = TimeDelta;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Scrolled != nullptr)
		*Scrolled = params.Scrolled;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetFormattedTimeSpan
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FTimespan               Timespan                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Shorthand                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Text                           (CPF_Parm, CPF_OutParm)

void UUIFunctionLibrary_C::GetFormattedTimeSpan(bool Shorthand, class UObject* __WorldContext, struct FTimespan* Timespan, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetFormattedTimeSpan"));

	struct
	{
		struct FTimespan               Timespan;
		bool                           Shorthand;
		class UObject*                 __WorldContext;
		struct FText                   Text;
	} params;

	params.Shorthand = Shorthand;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Timespan != nullptr)
		*Timespan = params.Timespan;
	if (Text != nullptr)
		*Text = params.Text;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.IsMatchTimerAtLeastThisUrgent
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Timer_Seconds                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_MatchTimerVisualUrgency> Urgency_Level                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UUIFunctionLibrary_C::IsMatchTimerAtLeastThisUrgent(float Timer_Seconds, TEnumAsByte<E_MatchTimerVisualUrgency> Urgency_Level, class UObject* __WorldContext, bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.IsMatchTimerAtLeastThisUrgent"));

	struct
	{
		float                          Timer_Seconds;
		TEnumAsByte<E_MatchTimerVisualUrgency> Urgency_Level;
		class UObject*                 __WorldContext;
		bool                           Return_Value;
	} params;

	params.Timer_Seconds = Timer_Seconds;
	params.Urgency_Level = Urgency_Level;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetMatchTimerVisualUrgency
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Timer_Seconds                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_MatchTimerVisualUrgency> Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetMatchTimerVisualUrgency(float Timer_Seconds, class UObject* __WorldContext, TEnumAsByte<E_MatchTimerVisualUrgency>* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetMatchTimerVisualUrgency"));

	struct
	{
		float                          Timer_Seconds;
		class UObject*                 __WorldContext;
		TEnumAsByte<E_MatchTimerVisualUrgency> Return_Value;
	} params;

	params.Timer_Seconds = Timer_Seconds;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityValueByTag
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            RarityValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetRarityValueByTag(const struct FGameplayTagContainer& GameplayTagContainer, class UObject* __WorldContext, int* RarityValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityValueByTag"));

	struct
	{
		struct FGameplayTagContainer   GameplayTagContainer;
		class UObject*                 __WorldContext;
		int                            RarityValue;
	} params;

	params.GameplayTagContainer = GameplayTagContainer;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (RarityValue != nullptr)
		*RarityValue = params.RarityValue;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityNameByTag
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   RarityName                     (CPF_Parm, CPF_OutParm)

void UUIFunctionLibrary_C::GetRarityNameByTag(const struct FGameplayTagContainer& GameplayTagContainer, class UObject* __WorldContext, struct FText* RarityName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityNameByTag"));

	struct
	{
		struct FGameplayTagContainer   GameplayTagContainer;
		class UObject*                 __WorldContext;
		struct FText                   RarityName;
	} params;

	params.GameplayTagContainer = GameplayTagContainer;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (RarityName != nullptr)
		*RarityName = params.RarityName;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityColorByTag
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FSlateColor             RarityColor                    (CPF_Parm, CPF_OutParm)

void UUIFunctionLibrary_C::GetRarityColorByTag(const struct FGameplayTagContainer& GameplayTagContainer, class UObject* __WorldContext, struct FSlateColor* RarityColor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityColorByTag"));

	struct
	{
		struct FGameplayTagContainer   GameplayTagContainer;
		class UObject*                 __WorldContext;
		struct FSlateColor             RarityColor;
	} params;

	params.GameplayTagContainer = GameplayTagContainer;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (RarityColor != nullptr)
		*RarityColor = params.RarityColor;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetPlatformViewProfileText
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Return_Value                   (CPF_Parm, CPF_OutParm)

void UUIFunctionLibrary_C::GetPlatformViewProfileText(class UObject* __WorldContext, struct FText* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetPlatformViewProfileText"));

	struct
	{
		class UObject*                 __WorldContext;
		struct FText                   Return_Value;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetSelfColor
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetSelfColor(class UObject* __WorldContext, struct FLinearColor* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetSelfColor"));

	struct
	{
		class UObject*                 __WorldContext;
		struct FLinearColor            Return_Value;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetEnemyColor
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetEnemyColor(class UObject* __WorldContext, struct FLinearColor* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetEnemyColor"));

	struct
	{
		class UObject*                 __WorldContext;
		struct FLinearColor            Return_Value;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetFriendlyColor
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetFriendlyColor(class UObject* __WorldContext, struct FLinearColor* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetFriendlyColor"));

	struct
	{
		class UObject*                 __WorldContext;
		struct FLinearColor            Return_Value;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetTextChatChannelName
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EPUMG_ChatChannel              Channel                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPUMG_PlayerInfo*        PersonalChannelPlayer          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Name                           (CPF_Parm, CPF_OutParm)

void UUIFunctionLibrary_C::GetTextChatChannelName(EPUMG_ChatChannel Channel, class UPUMG_PlayerInfo* PersonalChannelPlayer, class UObject* __WorldContext, struct FText* Name)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetTextChatChannelName"));

	struct
	{
		EPUMG_ChatChannel              Channel;
		class UPUMG_PlayerInfo*        PersonalChannelPlayer;
		class UObject*                 __WorldContext;
		struct FText                   Name;
	} params;

	params.Channel = Channel;
	params.PersonalChannelPlayer = PersonalChannelPlayer;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Name != nullptr)
		*Name = params.Name;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.SetTextChatWidgetColor
// (FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EPUMG_ChatChannel              Channel                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTextBlock*              TextWidget                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::SetTextChatWidgetColor(EPUMG_ChatChannel Channel, class UTextBlock* TextWidget, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.SetTextChatWidgetColor"));

	struct
	{
		EPUMG_ChatChannel              Channel;
		class UTextBlock*              TextWidget;
		class UObject*                 __WorldContext;
	} params;

	params.Channel = Channel;
	params.TextWidget = TextWidget;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetCrossplayIcon
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ValidIconFound                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UTexture2D*              OutIconTexture                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetCrossplayIcon(class UObject* __WorldContext, bool* ValidIconFound, class UTexture2D** OutIconTexture)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetCrossplayIcon"));

	struct
	{
		class UObject*                 __WorldContext;
		bool                           ValidIconFound;
		class UTexture2D*              OutIconTexture;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ValidIconFound != nullptr)
		*ValidIconFound = params.ValidIconFound;
	if (OutIconTexture != nullptr)
		*OutIconTexture = params.OutIconTexture;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetCashColor
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetCashColor(class UObject* __WorldContext, struct FLinearColor* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetCashColor"));

	struct
	{
		class UObject*                 __WorldContext;
		struct FLinearColor            Return_Value;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.FormatSecondsToTimerText
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Seconds                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Minute_Digits                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ShowTenths                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Timer_Text                     (CPF_Parm, CPF_OutParm)

void UUIFunctionLibrary_C::FormatSecondsToTimerText(float Seconds, int Minute_Digits, bool ShowTenths, class UObject* __WorldContext, struct FText* Timer_Text)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.FormatSecondsToTimerText"));

	struct
	{
		float                          Seconds;
		int                            Minute_Digits;
		bool                           ShowTenths;
		class UObject*                 __WorldContext;
		struct FText                   Timer_Text;
	} params;

	params.Seconds = Seconds;
	params.Minute_Digits = Minute_Digits;
	params.ShowTenths = ShowTenths;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Timer_Text != nullptr)
		*Timer_Text = params.Timer_Text;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetSoundLibraries
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FUISoundLibraries       SoundLibrary                   (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetSoundLibraries(class UObject* __WorldContext, struct FUISoundLibraries* SoundLibrary)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetSoundLibraries"));

	struct
	{
		class UObject*                 __WorldContext;
		struct FUISoundLibraries       SoundLibrary;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (SoundLibrary != nullptr)
		*SoundLibrary = params.SoundLibrary;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetColorForLoadoutBundle
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UKSLoadoutBundle*        Loadout_Bundle                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            Role_Dark_Color                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            Role_Light_Color               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetColorForLoadoutBundle(class UKSLoadoutBundle* Loadout_Bundle, class UObject* __WorldContext, struct FLinearColor* Role_Dark_Color, struct FLinearColor* Role_Light_Color)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetColorForLoadoutBundle"));

	struct
	{
		class UKSLoadoutBundle*        Loadout_Bundle;
		class UObject*                 __WorldContext;
		struct FLinearColor            Role_Dark_Color;
		struct FLinearColor            Role_Light_Color;
	} params;

	params.Loadout_Bundle = Loadout_Bundle;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Role_Dark_Color != nullptr)
		*Role_Dark_Color = params.Role_Dark_Color;
	if (Role_Light_Color != nullptr)
		*Role_Light_Color = params.Role_Light_Color;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetTextForSpecialtyCategory
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESpecialtyRoleType             Specialty_Role_Type            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Role_Name                      (CPF_Parm, CPF_OutParm)

void UUIFunctionLibrary_C::GetTextForSpecialtyCategory(ESpecialtyRoleType Specialty_Role_Type, class UObject* __WorldContext, struct FText* Role_Name)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetTextForSpecialtyCategory"));

	struct
	{
		ESpecialtyRoleType             Specialty_Role_Type;
		class UObject*                 __WorldContext;
		struct FText                   Role_Name;
	} params;

	params.Specialty_Role_Type = Specialty_Role_Type;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Role_Name != nullptr)
		*Role_Name = params.Role_Name;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetColorForSpecialtyCategory
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESpecialtyRoleType             Specialty_Role_Type            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            Role_Dark_Color                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            Role_Light_Color               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetColorForSpecialtyCategory(ESpecialtyRoleType Specialty_Role_Type, class UObject* __WorldContext, struct FLinearColor* Role_Dark_Color, struct FLinearColor* Role_Light_Color)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetColorForSpecialtyCategory"));

	struct
	{
		ESpecialtyRoleType             Specialty_Role_Type;
		class UObject*                 __WorldContext;
		struct FLinearColor            Role_Dark_Color;
		struct FLinearColor            Role_Light_Color;
	} params;

	params.Specialty_Role_Type = Specialty_Role_Type;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Role_Dark_Color != nullptr)
		*Role_Dark_Color = params.Role_Dark_Color;
	if (Role_Light_Color != nullptr)
		*Role_Light_Color = params.Role_Light_Color;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetColorPalette
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FUIColorPalette         ColorPalette                   (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetColorPalette(class UObject* __WorldContext, struct FUIColorPalette* ColorPalette)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetColorPalette"));

	struct
	{
		class UObject*                 __WorldContext;
		struct FUIColorPalette         ColorPalette;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ColorPalette != nullptr)
		*ColorPalette = params.ColorPalette;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetSlateFontInfo
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FUIFontPalette          UI_Fonts                       (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetSlateFontInfo(class UObject* __WorldContext, struct FUIFontPalette* UI_Fonts)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetSlateFontInfo"));

	struct
	{
		class UObject*                 __WorldContext;
		struct FUIFontPalette          UI_Fonts;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (UI_Fonts != nullptr)
		*UI_Fonts = params.UI_Fonts;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetMedColor
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            Med_Green                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            Med_Green_Light                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetMedColor(class UObject* __WorldContext, struct FLinearColor* Med_Green, struct FLinearColor* Med_Green_Light)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetMedColor"));

	struct
	{
		class UObject*                 __WorldContext;
		struct FLinearColor            Med_Green;
		struct FLinearColor            Med_Green_Light;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Med_Green != nullptr)
		*Med_Green = params.Med_Green;
	if (Med_Green_Light != nullptr)
		*Med_Green_Light = params.Med_Green_Light;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetHideAnimDefaultTime
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          HideAnimTime                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetHideAnimDefaultTime(class UObject* __WorldContext, float* HideAnimTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetHideAnimDefaultTime"));

	struct
	{
		class UObject*                 __WorldContext;
		float                          HideAnimTime;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (HideAnimTime != nullptr)
		*HideAnimTime = params.HideAnimTime;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetShowAnimDefaultTime
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ShowAnimTime                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetShowAnimDefaultTime(class UObject* __WorldContext, float* ShowAnimTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetShowAnimDefaultTime"));

	struct
	{
		class UObject*                 __WorldContext;
		float                          ShowAnimTime;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ShowAnimTime != nullptr)
		*ShowAnimTime = params.ShowAnimTime;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.CurrencyTypeToCurrencyIcon
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// unsigned char                  CurrencyType                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTexture2D*              CurrencyIcon                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::CurrencyTypeToCurrencyIcon(unsigned char CurrencyType, class UObject* __WorldContext, class UTexture2D** CurrencyIcon)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.CurrencyTypeToCurrencyIcon"));

	struct
	{
		unsigned char                  CurrencyType;
		class UObject*                 __WorldContext;
		class UTexture2D*              CurrencyIcon;
	} params;

	params.CurrencyType = CurrencyType;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (CurrencyIcon != nullptr)
		*CurrencyIcon = params.CurrencyIcon;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.CurrencyIdToCurrencyIcon
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            CurrencyId                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTexture2D*              CurrencyIcon                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::CurrencyIdToCurrencyIcon(int CurrencyId, class UObject* __WorldContext, class UTexture2D** CurrencyIcon)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.CurrencyIdToCurrencyIcon"));

	struct
	{
		int                            CurrencyId;
		class UObject*                 __WorldContext;
		class UTexture2D*              CurrencyIcon;
	} params;

	params.CurrencyId = CurrencyId;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (CurrencyIcon != nullptr)
		*CurrencyIcon = params.CurrencyIcon;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.Get Opposing Team Num
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Team_Num                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::Get_Opposing_Team_Num(int Team_Num, class UObject* __WorldContext, int* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.Get Opposing Team Num"));

	struct
	{
		int                            Team_Num;
		class UObject*                 __WorldContext;
		int                            Return_Value;
	} params;

	params.Team_Num = Team_Num;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetAlignmentColors
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            Friendly                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            Enemy                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            Neutral                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetAlignmentColors(class UObject* __WorldContext, struct FLinearColor* Friendly, struct FLinearColor* Enemy, struct FLinearColor* Neutral)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetAlignmentColors"));

	struct
	{
		class UObject*                 __WorldContext;
		struct FLinearColor            Friendly;
		struct FLinearColor            Enemy;
		struct FLinearColor            Neutral;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Friendly != nullptr)
		*Friendly = params.Friendly;
	if (Enemy != nullptr)
		*Enemy = params.Enemy;
	if (Neutral != nullptr)
		*Neutral = params.Neutral;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.InvertColor
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::InvertColor(const struct FLinearColor& Color, class UObject* __WorldContext, struct FLinearColor* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.InvertColor"));

	struct
	{
		struct FLinearColor            Color;
		class UObject*                 __WorldContext;
		struct FLinearColor            Return_Value;
	} params;

	params.Color = Color;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetIconForGamepadButton
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTexture2D*              Icon                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetIconForGamepadButton(const struct FKey& Button, class UObject* __WorldContext, class UTexture2D** Icon)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetIconForGamepadButton"));

	struct
	{
		struct FKey                    Button;
		class UObject*                 __WorldContext;
		class UTexture2D*              Icon;
	} params;

	params.Button = Button;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Icon != nullptr)
		*Icon = params.Icon;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.DrawCircle
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPaintContext           Context                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// struct FVector2D               Center                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Radius                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            Tint                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Line_Count                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Anti_Alias                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::DrawCircle(const struct FVector2D& Center, float Radius, const struct FLinearColor& Tint, int Line_Count, bool Anti_Alias, class UObject* __WorldContext, struct FPaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.DrawCircle"));

	struct
	{
		struct FPaintContext           Context;
		struct FVector2D               Center;
		float                          Radius;
		struct FLinearColor            Tint;
		int                            Line_Count;
		bool                           Anti_Alias;
		class UObject*                 __WorldContext;
	} params;

	params.Center = Center;
	params.Radius = Radius;
	params.Tint = Tint;
	params.Line_Count = Line_Count;
	params.Anti_Alias = Anti_Alias;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Context != nullptr)
		*Context = params.Context;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetTeamName
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            TeamNum                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Abbreviate                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   teamName                       (CPF_Parm, CPF_OutParm)

void UUIFunctionLibrary_C::GetTeamName(int TeamNum, bool Abbreviate, class UObject* __WorldContext, struct FText* teamName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetTeamName"));

	struct
	{
		int                            TeamNum;
		bool                           Abbreviate;
		class UObject*                 __WorldContext;
		struct FText                   teamName;
	} params;

	params.TeamNum = TeamNum;
	params.Abbreviate = Abbreviate;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (teamName != nullptr)
		*teamName = params.teamName;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetLargeTeamIcons
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTexture2D*              FriendlyBorder                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTexture2D*              FriendlyFill                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTexture2D*              FriendlyIcon                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTexture2D*              EnemyBorder                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTexture2D*              EnemyFill                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTexture2D*              EnemyIcon                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetLargeTeamIcons(class UObject* __WorldContext, class UTexture2D** FriendlyBorder, class UTexture2D** FriendlyFill, class UTexture2D** FriendlyIcon, class UTexture2D** EnemyBorder, class UTexture2D** EnemyFill, class UTexture2D** EnemyIcon)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetLargeTeamIcons"));

	struct
	{
		class UObject*                 __WorldContext;
		class UTexture2D*              FriendlyBorder;
		class UTexture2D*              FriendlyFill;
		class UTexture2D*              FriendlyIcon;
		class UTexture2D*              EnemyBorder;
		class UTexture2D*              EnemyFill;
		class UTexture2D*              EnemyIcon;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (FriendlyBorder != nullptr)
		*FriendlyBorder = params.FriendlyBorder;
	if (FriendlyFill != nullptr)
		*FriendlyFill = params.FriendlyFill;
	if (FriendlyIcon != nullptr)
		*FriendlyIcon = params.FriendlyIcon;
	if (EnemyBorder != nullptr)
		*EnemyBorder = params.EnemyBorder;
	if (EnemyFill != nullptr)
		*EnemyFill = params.EnemyFill;
	if (EnemyIcon != nullptr)
		*EnemyIcon = params.EnemyIcon;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetTeamColor
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            TeamNum                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OwningPlayerNum                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            Team_Color                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Found_Color                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UUIFunctionLibrary_C::GetTeamColor(int TeamNum, int OwningPlayerNum, class UObject* __WorldContext, struct FLinearColor* Team_Color, bool* Found_Color)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetTeamColor"));

	struct
	{
		int                            TeamNum;
		int                            OwningPlayerNum;
		class UObject*                 __WorldContext;
		struct FLinearColor            Team_Color;
		bool                           Found_Color;
	} params;

	params.TeamNum = TeamNum;
	params.OwningPlayerNum = OwningPlayerNum;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Team_Color != nullptr)
		*Team_Color = params.Team_Color;
	if (Found_Color != nullptr)
		*Found_Color = params.Found_Color;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityColors
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            Common                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            Rare                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            Epic                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            Legendary                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetRarityColors(class UObject* __WorldContext, struct FLinearColor* Common, struct FLinearColor* Rare, struct FLinearColor* Epic, struct FLinearColor* Legendary)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityColors"));

	struct
	{
		class UObject*                 __WorldContext;
		struct FLinearColor            Common;
		struct FLinearColor            Rare;
		struct FLinearColor            Epic;
		struct FLinearColor            Legendary;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Common != nullptr)
		*Common = params.Common;
	if (Rare != nullptr)
		*Rare = params.Rare;
	if (Epic != nullptr)
		*Epic = params.Epic;
	if (Legendary != nullptr)
		*Legendary = params.Legendary;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GridIndexChecker
// (FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UPUMG_Widget*>    Array                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// int                            TestIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            NumColumns                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           HorizontalWrapping             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            SourceIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPUMG_Widget*            Output                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::GridIndexChecker(int TestIndex, int NumColumns, bool HorizontalWrapping, int SourceIndex, class UObject* __WorldContext, TArray<class UPUMG_Widget*>* Array, class UPUMG_Widget** Output)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.GridIndexChecker"));

	struct
	{
		TArray<class UPUMG_Widget*>    Array;
		int                            TestIndex;
		int                            NumColumns;
		bool                           HorizontalWrapping;
		int                            SourceIndex;
		class UObject*                 __WorldContext;
		class UPUMG_Widget*            Output;
	} params;

	params.TestIndex = TestIndex;
	params.NumColumns = NumColumns;
	params.HorizontalWrapping = HorizontalWrapping;
	params.SourceIndex = SourceIndex;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Array != nullptr)
		*Array = params.Array;
	if (Output != nullptr)
		*Output = params.Output;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.LinearIndexChecker
// (FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UPUMG_Widget*>    Array                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPUMG_Widget*            Output                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::LinearIndexChecker(int Index, class UObject* __WorldContext, TArray<class UPUMG_Widget*>* Array, class UPUMG_Widget** Output)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.LinearIndexChecker"));

	struct
	{
		TArray<class UPUMG_Widget*>    Array;
		int                            Index;
		class UObject*                 __WorldContext;
		class UPUMG_Widget*            Output;
	} params;

	params.Index = Index;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Array != nullptr)
		*Array = params.Array;
	if (Output != nullptr)
		*Output = params.Output;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.SetUpLinearNavigation
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_Widget*            ParentWidget                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class UPUMG_Widget*>    NavWidgets                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// int                            FocusGroup                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Horizontal                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Looping                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIFunctionLibrary_C::SetUpLinearNavigation(class UPUMG_Widget* ParentWidget, int FocusGroup, bool Horizontal, bool Looping, class UObject* __WorldContext, TArray<class UPUMG_Widget*>* NavWidgets)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIFunctionLibrary.UIFunctionLibrary_C.SetUpLinearNavigation"));

	struct
	{
		class UPUMG_Widget*            ParentWidget;
		TArray<class UPUMG_Widget*>    NavWidgets;
		int                            FocusGroup;
		bool                           Horizontal;
		bool                           Looping;
		class UObject*                 __WorldContext;
	} params;

	params.ParentWidget = ParentWidget;
	params.FocusGroup = FocusGroup;
	params.Horizontal = Horizontal;
	params.Looping = Looping;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (NavWidgets != nullptr)
		*NavWidgets = params.NavWidgets;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
