// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MinimapGridLine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MinimapGridLine.MinimapGridLine_C.UpdateOnAxis
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Position                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMinimapGridLine_C::UpdateOnAxis(float Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapGridLine.MinimapGridLine_C.UpdateOnAxis");

	struct
	{
		float                          Position;
	} params;

	params.Position = Position;

	UObject::ProcessEvent(fn, &params);
}


// Function MinimapGridLine.MinimapGridLine_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMinimapGridLine_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapGridLine.MinimapGridLine_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MinimapGridLine.MinimapGridLine_C.Update
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               PlayerRelativePosition         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMinimapGridLine_C::Update(const struct FVector2D& PlayerRelativePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapGridLine.MinimapGridLine_C.Update");

	struct
	{
		struct FVector2D               PlayerRelativePosition;
	} params;

	params.PlayerRelativePosition = PlayerRelativePosition;

	UObject::ProcessEvent(fn, &params);
}


// Function MinimapGridLine.MinimapGridLine_C.ExecuteUbergraph_MinimapGridLine
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMinimapGridLine_C::ExecuteUbergraph_MinimapGridLine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapGridLine.MinimapGridLine_C.ExecuteUbergraph_MinimapGridLine");

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
