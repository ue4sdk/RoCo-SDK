// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MarkerDisplay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MarkerDisplay.MarkerDisplay_C.AddIconToScreen
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSMapIconWidgetBase*    Icon                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMarkerDisplay_C::AddIconToScreen(class UKSMapIconWidgetBase* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function MarkerDisplay.MarkerDisplay_C.AddIconToScreen");

	struct
	{
		class UKSMapIconWidgetBase*    Icon;
	} params;

	params.Icon = Icon;

	UObject::ProcessEvent(fn, &params);
}


// Function MarkerDisplay.MarkerDisplay_C.CreateNewIconWidget
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  WidgetClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// int                            UniqueId                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AKSPlayerState*          CreatingPlayer                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EDisplayType                   ParentMapDisplayType           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  AssociatedActor                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 AssociatedObject               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 DefaultLocation                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Lifespan                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSMapIconWidgetBase*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UKSMapIconWidgetBase* UMarkerDisplay_C::CreateNewIconWidget(class UClass* WidgetClass, int UniqueId, class AKSPlayerState* CreatingPlayer, EDisplayType ParentMapDisplayType, class AActor* AssociatedActor, class UObject* AssociatedObject, const struct FVector& DefaultLocation, float Lifespan)
{
	static auto fn = UObject::FindObject<UFunction>("Function MarkerDisplay.MarkerDisplay_C.CreateNewIconWidget");

	struct
	{
		class UClass*                  WidgetClass;
		int                            UniqueId;
		class AKSPlayerState*          CreatingPlayer;
		EDisplayType                   ParentMapDisplayType;
		class AActor*                  AssociatedActor;
		class UObject*                 AssociatedObject;
		struct FVector                 DefaultLocation;
		float                          Lifespan;
		class UKSMapIconWidgetBase*    ReturnValue;
	} params;

	params.WidgetClass = WidgetClass;
	params.UniqueId = UniqueId;
	params.CreatingPlayer = CreatingPlayer;
	params.ParentMapDisplayType = ParentMapDisplayType;
	params.AssociatedActor = AssociatedActor;
	params.AssociatedObject = AssociatedObject;
	params.DefaultLocation = DefaultLocation;
	params.Lifespan = Lifespan;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MarkerDisplay.MarkerDisplay_C.Receive Loot Inspect Off From Marker
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ULootSiteMarker_v2_C*    Marker                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMarkerDisplay_C::Receive_Loot_Inspect_Off_From_Marker(class ULootSiteMarker_v2_C* Marker)
{
	static auto fn = UObject::FindObject<UFunction>("Function MarkerDisplay.MarkerDisplay_C.Receive Loot Inspect Off From Marker");

	struct
	{
		class ULootSiteMarker_v2_C*    Marker;
	} params;

	params.Marker = Marker;

	UObject::ProcessEvent(fn, &params);
}


// Function MarkerDisplay.MarkerDisplay_C.Receive Loot Inspect Request From Marker
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSLootSiteBase*         Loot_Site                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ULootSiteMarker_v2_C*    Marker                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMarkerDisplay_C::Receive_Loot_Inspect_Request_From_Marker(class AKSLootSiteBase* Loot_Site, class ULootSiteMarker_v2_C* Marker)
{
	static auto fn = UObject::FindObject<UFunction>("Function MarkerDisplay.MarkerDisplay_C.Receive Loot Inspect Request From Marker");

	struct
	{
		class AKSLootSiteBase*         Loot_Site;
		class ULootSiteMarker_v2_C*    Marker;
	} params;

	params.Loot_Site = Loot_Site;
	params.Marker = Marker;

	UObject::ProcessEvent(fn, &params);
}


// Function MarkerDisplay.MarkerDisplay_C.InitializeTickAnimations
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UMarkerDisplay_C::InitializeTickAnimations()
{
	static auto fn = UObject::FindObject<UFunction>("Function MarkerDisplay.MarkerDisplay_C.InitializeTickAnimations");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MarkerDisplay.MarkerDisplay_C.Inspect Anim Update
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ElapsedTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ElapsedAlpha                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMarkerDisplay_C::Inspect_Anim_Update(float ElapsedTime, float ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function MarkerDisplay.MarkerDisplay_C.Inspect Anim Update");

	struct
	{
		float                          ElapsedTime;
		float                          ElapsedAlpha;
	} params;

	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	UObject::ProcessEvent(fn, &params);
}


// Function MarkerDisplay.MarkerDisplay_C.Inspect Anim Finished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMarkerDisplay_C::Inspect_Anim_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function MarkerDisplay.MarkerDisplay_C.Inspect Anim Finished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MarkerDisplay.MarkerDisplay_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMarkerDisplay_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function MarkerDisplay.MarkerDisplay_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function MarkerDisplay.MarkerDisplay_C.OnScrambleStateChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           Scrambled                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMarkerDisplay_C::OnScrambleStateChanged(bool Scrambled)
{
	static auto fn = UObject::FindObject<UFunction>("Function MarkerDisplay.MarkerDisplay_C.OnScrambleStateChanged");

	struct
	{
		bool                           Scrambled;
	} params;

	params.Scrambled = Scrambled;

	UObject::ProcessEvent(fn, &params);
}


// Function MarkerDisplay.MarkerDisplay_C.Handle Loot Site State Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLootSiteState          Loot_Site_State                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMarkerDisplay_C::Handle_Loot_Site_State_Changed(const struct FLootSiteState& Loot_Site_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function MarkerDisplay.MarkerDisplay_C.Handle Loot Site State Changed");

	struct
	{
		struct FLootSiteState          Loot_Site_State;
	} params;

	params.Loot_Site_State = Loot_Site_State;

	UObject::ProcessEvent(fn, &params);
}


// Function MarkerDisplay.MarkerDisplay_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMarkerDisplay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MarkerDisplay.MarkerDisplay_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function MarkerDisplay.MarkerDisplay_C.DisplayToMapWidget
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSMapIconWidgetBase*    MapIcon                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMarkerDisplay_C::DisplayToMapWidget(class UKSMapIconWidgetBase* MapIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function MarkerDisplay.MarkerDisplay_C.DisplayToMapWidget");

	struct
	{
		class UKSMapIconWidgetBase*    MapIcon;
	} params;

	params.MapIcon = MapIcon;

	UObject::ProcessEvent(fn, &params);
}


// Function MarkerDisplay.MarkerDisplay_C.ExecuteUbergraph_MarkerDisplay
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMarkerDisplay_C::ExecuteUbergraph_MarkerDisplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MarkerDisplay.MarkerDisplay_C.ExecuteUbergraph_MarkerDisplay");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function MarkerDisplay.MarkerDisplay_C.OnMarkerAddedToScreen__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSMapIconWidgetBase*    Marker                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMarkerDisplay_C::OnMarkerAddedToScreen__DelegateSignature(class UKSMapIconWidgetBase* Marker)
{
	static auto fn = UObject::FindObject<UFunction>("Function MarkerDisplay.MarkerDisplay_C.OnMarkerAddedToScreen__DelegateSignature");

	struct
	{
		class UKSMapIconWidgetBase*    Marker;
	} params;

	params.Marker = Marker;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
