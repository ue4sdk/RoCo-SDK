// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ReticleBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ReticleBase.ReticleBase_C.Set Reticle Color
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReticleBase_C::Set_Reticle_Color(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticleBase.ReticleBase_C.Set Reticle Color");

	struct
	{
		struct FLinearColor            Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function ReticleBase.ReticleBase_C.On Reticle Color Changed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReticleBase_C::On_Reticle_Color_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticleBase.ReticleBase_C.On Reticle Color Changed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReticleBase.ReticleBase_C.Set Reticle Width
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Width                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReticleBase_C::Set_Reticle_Width(int Width)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticleBase.ReticleBase_C.Set Reticle Width");

	struct
	{
		int                            Width;
	} params;

	params.Width = Width;

	UObject::ProcessEvent(fn, &params);
}


// Function ReticleBase.ReticleBase_C.Set Reticle Height
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Height                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReticleBase_C::Set_Reticle_Height(int Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticleBase.ReticleBase_C.Set Reticle Height");

	struct
	{
		int                            Height;
	} params;

	params.Height = Height;

	UObject::ProcessEvent(fn, &params);
}


// Function ReticleBase.ReticleBase_C.On Reticle Width Changed
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReticleBase_C::On_Reticle_Width_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticleBase.ReticleBase_C.On Reticle Width Changed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReticleBase.ReticleBase_C.On Reticle Height Changed
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReticleBase_C::On_Reticle_Height_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticleBase.ReticleBase_C.On Reticle Height Changed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReticleBase.ReticleBase_C.On Reticle Dimension Changed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReticleBase_C::On_Reticle_Dimension_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticleBase.ReticleBase_C.On Reticle Dimension Changed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReticleBase.ReticleBase_C.ChangeReticleSize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReticleBase_C::ChangeReticleSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticleBase.ReticleBase_C.ChangeReticleSize");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReticleBase.ReticleBase_C.GetAmmoState
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UKSWeaponComponent*      NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EAmmoState                     Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReticleBase_C::GetAmmoState(class UKSWeaponComponent* NewParam, EAmmoState* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticleBase.ReticleBase_C.GetAmmoState");

	struct
	{
		class UKSWeaponComponent*      NewParam;
		EAmmoState                     Return_Value;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function ReticleBase.ReticleBase_C.HitConfirm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReticleBase_C::HitConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticleBase.ReticleBase_C.HitConfirm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReticleBase.ReticleBase_C.ForceADS
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Active                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UReticleBase_C::ForceADS(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticleBase.ReticleBase_C.ForceADS");

	struct
	{
		bool                           Active;
	} params;

	params.Active = Active;

	UObject::ProcessEvent(fn, &params);
}


// Function ReticleBase.ReticleBase_C.GrenadeCook
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Active                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          TickPeriod                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReticleBase_C::GrenadeCook(bool Active, float TickPeriod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticleBase.ReticleBase_C.GrenadeCook");

	struct
	{
		bool                           Active;
		float                          TickPeriod;
	} params;

	params.Active = Active;
	params.TickPeriod = TickPeriod;

	UObject::ProcessEvent(fn, &params);
}


// Function ReticleBase.ReticleBase_C.ChangeADS
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Active                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UReticleBase_C::ChangeADS(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticleBase.ReticleBase_C.ChangeADS");

	struct
	{
		bool                           Active;
	} params;

	params.Active = Active;

	UObject::ProcessEvent(fn, &params);
}


// Function ReticleBase.ReticleBase_C.KillConfirm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReticleBase_C::KillConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticleBase.ReticleBase_C.KillConfirm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReticleBase.ReticleBase_C.Headshot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReticleBase_C::Headshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticleBase.ReticleBase_C.Headshot");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReticleBase.ReticleBase_C.UpdateOffset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Offset                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReticleBase_C::UpdateOffset(float Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticleBase.ReticleBase_C.UpdateOffset");

	struct
	{
		float                          Offset;
	} params;

	params.Offset = Offset;

	UObject::ProcessEvent(fn, &params);
}


// Function ReticleBase.ReticleBase_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UReticleBase_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticleBase.ReticleBase_C.OnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReticleBase.ReticleBase_C.ExecuteUbergraph_ReticleBase
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReticleBase_C::ExecuteUbergraph_ReticleBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticleBase.ReticleBase_C.ExecuteUbergraph_ReticleBase");

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
