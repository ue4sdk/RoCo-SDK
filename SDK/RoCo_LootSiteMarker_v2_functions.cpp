// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_LootSiteMarker_v2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootSiteMarker_v2.LootSiteMarker_v2_C.Get Visibility State For Distance
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULootSiteMarker_v2_C::Get_Visibility_State_For_Distance(ESlateVisibility* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.Get Visibility State For Distance");

	struct
	{
		ESlateVisibility               NewParam;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function LootSiteMarker_v2.LootSiteMarker_v2_C.IsHovering
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ULootSiteMarker_v2_C::IsHovering()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.IsHovering");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LootSiteMarker_v2.LootSiteMarker_v2_C.ShouldUpdateHover
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ULootSiteMarker_v2_C::ShouldUpdateHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.ShouldUpdateHover");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LootSiteMarker_v2.LootSiteMarker_v2_C.Get Default Icon Visibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULootSiteMarker_v2_C::Get_Default_Icon_Visibility(ESlateVisibility* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.Get Default Icon Visibility");

	struct
	{
		ESlateVisibility               NewParam;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function LootSiteMarker_v2.LootSiteMarker_v2_C.Get Icon Scale
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Icon_Scale                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULootSiteMarker_v2_C::Get_Icon_Scale(float* Icon_Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.Get Icon Scale");

	struct
	{
		float                          Icon_Scale;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Icon_Scale != nullptr)
		*Icon_Scale = params.Icon_Scale;
}


// Function LootSiteMarker_v2.LootSiteMarker_v2_C.GetLootTexture
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UTexture2D*              Texture2D                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULootSiteMarker_v2_C::GetLootTexture(class UTexture2D** Texture2D)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.GetLootTexture");

	struct
	{
		class UTexture2D*              Texture2D;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Texture2D != nullptr)
		*Texture2D = params.Texture2D;
}


// Function LootSiteMarker_v2.LootSiteMarker_v2_C.GetPinTexture
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UTexture2D*              Texture                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULootSiteMarker_v2_C::GetPinTexture(class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.GetPinTexture");

	struct
	{
		class UTexture2D*              Texture;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Texture != nullptr)
		*Texture = params.Texture;
}


// Function LootSiteMarker_v2.LootSiteMarker_v2_C.Get Pin Height
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Pin_Height                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULootSiteMarker_v2_C::Get_Pin_Height(float* Pin_Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.Get Pin Height");

	struct
	{
		float                          Pin_Height;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Pin_Height != nullptr)
		*Pin_Height = params.Pin_Height;
}


// Function LootSiteMarker_v2.LootSiteMarker_v2_C.Get Render Opacity
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Render_Opacity                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULootSiteMarker_v2_C::Get_Render_Opacity(float* Render_Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.Get Render Opacity");

	struct
	{
		float                          Render_Opacity;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Render_Opacity != nullptr)
		*Render_Opacity = params.Render_Opacity;
}


// Function LootSiteMarker_v2.LootSiteMarker_v2_C.Is Still In Initial Render Position
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Still_In_Initial_Render_Position (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ULootSiteMarker_v2_C::Is_Still_In_Initial_Render_Position(bool* Still_In_Initial_Render_Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.Is Still In Initial Render Position");

	struct
	{
		bool                           Still_In_Initial_Render_Position;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Still_In_Initial_Render_Position != nullptr)
		*Still_In_Initial_Render_Position = params.Still_In_Initial_Render_Position;
}


// Function LootSiteMarker_v2.LootSiteMarker_v2_C.GetHitboxMultiplierByDistance
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          HitboxMultiplier               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULootSiteMarker_v2_C::GetHitboxMultiplierByDistance(float* HitboxMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.GetHitboxMultiplierByDistance");

	struct
	{
		float                          HitboxMultiplier;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (HitboxMultiplier != nullptr)
		*HitboxMultiplier = params.HitboxMultiplier;
}


// Function LootSiteMarker_v2.LootSiteMarker_v2_C.Update
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

ESlateVisibility ULootSiteMarker_v2_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.Update");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LootSiteMarker_v2.LootSiteMarker_v2_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULootSiteMarker_v2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LootSiteMarker_v2.LootSiteMarker_v2_C.UpdateMetersAway
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            Meters                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULootSiteMarker_v2_C::UpdateMetersAway(int Meters)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.UpdateMetersAway");

	struct
	{
		int                            Meters;
	} params;

	params.Meters = Meters;

	UObject::ProcessEvent(fn, &params);
}


// Function LootSiteMarker_v2.LootSiteMarker_v2_C.OnHoverStateChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// EIconHoverState                NewHoverState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULootSiteMarker_v2_C::OnHoverStateChanged(EIconHoverState NewHoverState)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.OnHoverStateChanged");

	struct
	{
		EIconHoverState                NewHoverState;
	} params;

	params.NewHoverState = NewHoverState;

	UObject::ProcessEvent(fn, &params);
}


// Function LootSiteMarker_v2.LootSiteMarker_v2_C.HandleLootSiteRarityChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ELootSiteRarity                CurrentRarity                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULootSiteMarker_v2_C::HandleLootSiteRarityChanged(ELootSiteRarity CurrentRarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.HandleLootSiteRarityChanged");

	struct
	{
		ELootSiteRarity                CurrentRarity;
	} params;

	params.CurrentRarity = CurrentRarity;

	UObject::ProcessEvent(fn, &params);
}


// Function LootSiteMarker_v2.LootSiteMarker_v2_C.SetScreenRegion
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// EIconMarkerScreenRegion        ScreenRegion                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULootSiteMarker_v2_C::SetScreenRegion(EIconMarkerScreenRegion ScreenRegion)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.SetScreenRegion");

	struct
	{
		EIconMarkerScreenRegion        ScreenRegion;
	} params;

	params.ScreenRegion = ScreenRegion;

	UObject::ProcessEvent(fn, &params);
}


// Function LootSiteMarker_v2.LootSiteMarker_v2_C.SetArrowAngle
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          Angle                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULootSiteMarker_v2_C::SetArrowAngle(float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.SetArrowAngle");

	struct
	{
		float                          Angle;
	} params;

	params.Angle = Angle;

	UObject::ProcessEvent(fn, &params);
}


// Function LootSiteMarker_v2.LootSiteMarker_v2_C.ExecuteUbergraph_LootSiteMarker_v2
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULootSiteMarker_v2_C::ExecuteUbergraph_LootSiteMarker_v2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.ExecuteUbergraph_LootSiteMarker_v2");

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
