// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WatermarkWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WatermarkWidget.WatermarkWidget_C.GetNewWatermarkTranslation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector2D               Transform_Translation          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWatermarkWidget_C::GetNewWatermarkTranslation(struct FVector2D* Transform_Translation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WatermarkWidget.WatermarkWidget_C.GetNewWatermarkTranslation");

	struct
	{
		struct FVector2D               Transform_Translation;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Transform_Translation != nullptr)
		*Transform_Translation = params.Transform_Translation;
}


// Function WatermarkWidget.WatermarkWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWatermarkWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WatermarkWidget.WatermarkWidget_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WatermarkWidget.WatermarkWidget_C.Reposition Watermark
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWatermarkWidget_C::Reposition_Watermark()
{
	static auto fn = UObject::FindObject<UFunction>("Function WatermarkWidget.WatermarkWidget_C.Reposition Watermark");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WatermarkWidget.WatermarkWidget_C.Fade In
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWatermarkWidget_C::Fade_In()
{
	static auto fn = UObject::FindObject<UFunction>("Function WatermarkWidget.WatermarkWidget_C.Fade In");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WatermarkWidget.WatermarkWidget_C.Fade Out
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWatermarkWidget_C::Fade_Out()
{
	static auto fn = UObject::FindObject<UFunction>("Function WatermarkWidget.WatermarkWidget_C.Fade Out");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WatermarkWidget.WatermarkWidget_C.Move Watermark To Random Position
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWatermarkWidget_C::Move_Watermark_To_Random_Position()
{
	static auto fn = UObject::FindObject<UFunction>("Function WatermarkWidget.WatermarkWidget_C.Move Watermark To Random Position");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WatermarkWidget.WatermarkWidget_C.StartPositionChanging
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWatermarkWidget_C::StartPositionChanging()
{
	static auto fn = UObject::FindObject<UFunction>("Function WatermarkWidget.WatermarkWidget_C.StartPositionChanging");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WatermarkWidget.WatermarkWidget_C.OnResizeViewport
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FIntPoint               Viewport_Size                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWatermarkWidget_C::OnResizeViewport(const struct FIntPoint& Viewport_Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function WatermarkWidget.WatermarkWidget_C.OnResizeViewport");

	struct
	{
		struct FIntPoint               Viewport_Size;
	} params;

	params.Viewport_Size = Viewport_Size;

	UObject::ProcessEvent(fn, &params);
}


// Function WatermarkWidget.WatermarkWidget_C.ExecuteUbergraph_WatermarkWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWatermarkWidget_C::ExecuteUbergraph_WatermarkWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WatermarkWidget.WatermarkWidget_C.ExecuteUbergraph_WatermarkWidget");

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
