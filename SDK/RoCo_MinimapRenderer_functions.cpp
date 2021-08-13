// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MinimapRenderer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MinimapRenderer.MinimapRenderer_C.GetMinimapWidth
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float AMinimapRenderer_C::GetMinimapWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapRenderer.MinimapRenderer_C.GetMinimapWidth");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MinimapRenderer.MinimapRenderer_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMinimapRenderer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapRenderer.MinimapRenderer_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MinimapRenderer.MinimapRenderer_C.OnLoaded_1F80951A45CA8E54458A18AA362E670C
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMinimapRenderer_C::OnLoaded_1F80951A45CA8E54458A18AA362E670C(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapRenderer.MinimapRenderer_C.OnLoaded_1F80951A45CA8E54458A18AA362E670C");

	struct
	{
		class UObject*                 Loaded;
	} params;

	params.Loaded = Loaded;

	UObject::ProcessEvent(fn, &params);
}


// Function MinimapRenderer.MinimapRenderer_C.3_CaptureMinimap
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMinimapRenderer_C::_3_CaptureMinimap()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapRenderer.MinimapRenderer_C.3_CaptureMinimap");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MinimapRenderer.MinimapRenderer_C.1_LoadMinimapTexture
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMinimapRenderer_C::_1_LoadMinimapTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapRenderer.MinimapRenderer_C.1_LoadMinimapTexture");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MinimapRenderer.MinimapRenderer_C.5_ResetVRAM
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMinimapRenderer_C::_5_ResetVRAM()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapRenderer.MinimapRenderer_C.5_ResetVRAM");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MinimapRenderer.MinimapRenderer_C.4_SaveToTexture
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMinimapRenderer_C::_4_SaveToTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapRenderer.MinimapRenderer_C.4_SaveToTexture");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MinimapRenderer.MinimapRenderer_C.2_PrepareRenderTarget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMinimapRenderer_C::_2_PrepareRenderTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapRenderer.MinimapRenderer_C.2_PrepareRenderTarget");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MinimapRenderer.MinimapRenderer_C.ExecuteUbergraph_MinimapRenderer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMinimapRenderer_C::ExecuteUbergraph_MinimapRenderer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapRenderer.MinimapRenderer_C.ExecuteUbergraph_MinimapRenderer");

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
