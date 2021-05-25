// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ReloadReticle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ReloadReticle.ReloadReticle_C.ColorSet
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            NewColor                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReloadReticle_C::ColorSet(const struct FLinearColor& NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReloadReticle.ReloadReticle_C.ColorSet");

	struct
	{
		struct FLinearColor            NewColor;
	} params;

	params.NewColor = NewColor;

	UObject::ProcessEvent(fn, &params);
}


// Function ReloadReticle.ReloadReticle_C.UpdateShotgunReload
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ReloadTime                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Percent                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReloadReticle_C::UpdateShotgunReload(float ReloadTime, float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReloadReticle.ReloadReticle_C.UpdateShotgunReload");

	struct
	{
		float                          ReloadTime;
		float                          Percent;
	} params;

	params.ReloadTime = ReloadTime;
	params.Percent = Percent;

	UObject::ProcessEvent(fn, &params);
}


// Function ReloadReticle.ReloadReticle_C.SetReloadTime
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewTime                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReloadReticle_C::SetReloadTime(float NewTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReloadReticle.ReloadReticle_C.SetReloadTime");

	struct
	{
		float                          NewTime;
	} params;

	params.NewTime = NewTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ReloadReticle.ReloadReticle_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReloadReticle_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReloadReticle.ReloadReticle_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ReloadReticle.ReloadReticle_C.Circle Progress Open
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReloadReticle_C::Circle_Progress_Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReloadReticle.ReloadReticle_C.Circle Progress Open");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReloadReticle.ReloadReticle_C.Circle Progress Close
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReloadReticle_C::Circle_Progress_Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReloadReticle.ReloadReticle_C.Circle Progress Close");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReloadReticle.ReloadReticle_C.PreventCircleFill
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReloadReticle_C::PreventCircleFill()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReloadReticle.ReloadReticle_C.PreventCircleFill");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReloadReticle.ReloadReticle_C.ShotgunCircleOpen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReloadReticle_C::ShotgunCircleOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReloadReticle.ReloadReticle_C.ShotgunCircleOpen");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReloadReticle.ReloadReticle_C.ShotgunCircleClose
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReloadReticle_C::ShotgunCircleClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReloadReticle.ReloadReticle_C.ShotgunCircleClose");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReloadReticle.ReloadReticle_C.ExecuteUbergraph_ReloadReticle
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReloadReticle_C::ExecuteUbergraph_ReloadReticle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReloadReticle.ReloadReticle_C.ExecuteUbergraph_ReloadReticle");

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
