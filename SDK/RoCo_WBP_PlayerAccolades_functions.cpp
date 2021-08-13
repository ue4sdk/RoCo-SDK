// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PlayerAccolades_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.GetAccolateWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FAccoladeDisplayInfo    AccoladeInfo                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UWBP_AccoladeMedal_C*    Widget                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerAccolades_C::GetAccolateWidget(const struct FAccoladeDisplayInfo& AccoladeInfo, class UWBP_AccoladeMedal_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.GetAccolateWidget");

	struct
	{
		struct FAccoladeDisplayInfo    AccoladeInfo;
		class UWBP_AccoladeMedal_C*    Widget;
	} params;

	params.AccoladeInfo = AccoladeInfo;

	UObject::ProcessEvent(fn, &params);

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.InitAccoladePool
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerAccolades_C::InitAccoladePool()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.InitAccoladePool");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.SetPresentationSpeed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerAccolades_C::SetPresentationSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.SetPresentationSpeed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.TickPresentationSpeed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          TimeDelta                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerAccolades_C::TickPresentationSpeed(float TimeDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.TickPresentationSpeed");

	struct
	{
		float                          TimeDelta;
	} params;

	params.TimeDelta = TimeDelta;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.CalculatePresentationSpeed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerAccolades_C::CalculatePresentationSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.CalculatePresentationSpeed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.MoveAccolades
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerAccolades_C::MoveAccolades()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.MoveAccolades");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.QueueAccolade
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerAccolades_C::QueueAccolade()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.QueueAccolade");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.AllowOtherAccolades
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerAccolades_C::AllowOtherAccolades()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.AllowOtherAccolades");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.RemoveAccolade
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerAccolades_C::RemoveAccolade(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.RemoveAccolade");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.HandleAccoladeRecieved
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FAccoladeEventEntry> AccoladeEvents                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UWBP_PlayerAccolades_C::HandleAccoladeRecieved(TArray<struct FAccoladeEventEntry> AccoladeEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.HandleAccoladeRecieved");

	struct
	{
		TArray<struct FAccoladeEventEntry> AccoladeEvents;
	} params;

	params.AccoladeEvents = AccoladeEvents;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.HandleMultiplier
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FAccoladeDisplayInfo    AccoladeDisplayInfo            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_PlayerAccolades_C::HandleMultiplier(const struct FAccoladeDisplayInfo& AccoladeDisplayInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.HandleMultiplier");

	struct
	{
		struct FAccoladeDisplayInfo    AccoladeDisplayInfo;
	} params;

	params.AccoladeDisplayInfo = AccoladeDisplayInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.CreateAccolade
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FAccoladeDisplayInfo    AccoladeInfo                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_PlayerAccolades_C::CreateAccolade(const struct FAccoladeDisplayInfo& AccoladeInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.CreateAccolade");

	struct
	{
		struct FAccoladeDisplayInfo    AccoladeInfo;
	} params;

	params.AccoladeInfo = AccoladeInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PlayerAccolades_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.HandleKillCamEnabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerAccolades_C::HandleKillCamEnabled(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.HandleKillCamEnabled");

	struct
	{
		bool                           IsEnabled;
	} params;

	params.IsEnabled = IsEnabled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerAccolades_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.ExecuteUbergraph_WBP_PlayerAccolades
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerAccolades_C::ExecuteUbergraph_WBP_PlayerAccolades(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.ExecuteUbergraph_WBP_PlayerAccolades");

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
