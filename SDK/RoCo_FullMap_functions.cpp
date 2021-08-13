// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_FullMap_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FullMap.FullMap_C.SetActiveTab
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsActiveTab                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UFullMap_C::SetActiveTab(bool bIsActiveTab)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.SetActiveTab");

	struct
	{
		bool                           bIsActiveTab;
	} params;

	params.bIsActiveTab = bIsActiveTab;

	UObject::ProcessEvent(fn, &params);
}


// Function FullMap.FullMap_C.CreateNewIconWidget
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
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

class UKSMapIconWidgetBase* UFullMap_C::CreateNewIconWidget(class UClass* WidgetClass, int UniqueId, class AKSPlayerState* CreatingPlayer, EDisplayType ParentMapDisplayType, class AActor* AssociatedActor, class UObject* AssociatedObject, const struct FVector& DefaultLocation, float Lifespan)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.CreateNewIconWidget");

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


// Function FullMap.FullMap_C.IsOnMap
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               MapCoords                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UFullMap_C::IsOnMap(const struct FVector2D& MapCoords)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.IsOnMap");

	struct
	{
		struct FVector2D               MapCoords;
		bool                           ReturnValue;
	} params;

	params.MapCoords = MapCoords;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FullMap.FullMap_C.ToIconRenderAngle
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          PlayerAngle                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UFullMap_C::ToIconRenderAngle(float PlayerAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.ToIconRenderAngle");

	struct
	{
		float                          PlayerAngle;
		float                          ReturnValue;
	} params;

	params.PlayerAngle = PlayerAngle;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FullMap.FullMap_C.ToIconRenderCoords
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               MapCoords                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector2D UFullMap_C::ToIconRenderCoords(const struct FVector2D& MapCoords)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.ToIconRenderCoords");

	struct
	{
		struct FVector2D               MapCoords;
		struct FVector2D               ReturnValue;
	} params;

	params.MapCoords = MapCoords;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FullMap.FullMap_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UFullMap_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.NavigateBack");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FullMap.FullMap_C.ApplyZoom
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ZoomInput                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFullMap_C::ApplyZoom(float ZoomInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.ApplyZoom");

	struct
	{
		float                          ZoomInput;
	} params;

	params.ZoomInput = ZoomInput;

	UObject::ProcessEvent(fn, &params);
}


// Function FullMap.FullMap_C.ConstrainMapScreenPosition
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               ProposedPosition               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector2D               ConstrainedPosition            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFullMap_C::ConstrainMapScreenPosition(const struct FVector2D& ProposedPosition, struct FVector2D* ConstrainedPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.ConstrainMapScreenPosition");

	struct
	{
		struct FVector2D               ProposedPosition;
		struct FVector2D               ConstrainedPosition;
	} params;

	params.ProposedPosition = ProposedPosition;

	UObject::ProcessEvent(fn, &params);

	if (ConstrainedPosition != nullptr)
		*ConstrainedPosition = params.ConstrainedPosition;
}


// Function FullMap.FullMap_C.OnMouseMove
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UFullMap_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.OnMouseMove");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FullMap.FullMap_C.OnMouseButtonUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UFullMap_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.OnMouseButtonUp");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FullMap.FullMap_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UFullMap_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.OnMouseButtonDown");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FullMap.FullMap_C.OnMouseWheel
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UFullMap_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.OnMouseWheel");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FullMap.FullMap_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFullMap_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FullMap.FullMap_C.FindMinimapRenderer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFullMap_C::FindMinimapRenderer()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.FindMinimapRenderer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FullMap.FullMap_C.GetMapTexture
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFullMap_C::GetMapTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.GetMapTexture");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FullMap.FullMap_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFullMap_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FullMap.FullMap_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFullMap_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function FullMap.FullMap_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFullMap_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FullMap.FullMap_C.InitializeWidgetButtonListeners
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFullMap_C::InitializeWidgetButtonListeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.InitializeWidgetButtonListeners");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FullMap.FullMap_C.MapButtonClose
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFullMap_C::MapButtonClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.MapButtonClose");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FullMap.FullMap_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFullMap_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function FullMap.FullMap_C.OnScrambleStateChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           Scrambled                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UFullMap_C::OnScrambleStateChanged(bool Scrambled)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.OnScrambleStateChanged");

	struct
	{
		bool                           Scrambled;
	} params;

	params.Scrambled = Scrambled;

	UObject::ProcessEvent(fn, &params);
}


// Function FullMap.FullMap_C.RemoveSelf
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFullMap_C::RemoveSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.RemoveSelf");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FullMap.FullMap_C.DisplayToMapWidget
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSMapIconWidgetBase*    MapIcon                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFullMap_C::DisplayToMapWidget(class UKSMapIconWidgetBase* MapIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.DisplayToMapWidget");

	struct
	{
		class UKSMapIconWidgetBase*    MapIcon;
	} params;

	params.MapIcon = MapIcon;

	UObject::ProcessEvent(fn, &params);
}


// Function FullMap.FullMap_C.ExecuteUbergraph_FullMap
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFullMap_C::ExecuteUbergraph_FullMap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.ExecuteUbergraph_FullMap");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
