// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ContextualPingMarker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ContextualPingMarker.ContextualPingMarker_C.MovePing
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EPingType                      PingType                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EPingMessage                   PingMessage                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UContextualPingMarker_C::MovePing(EPingType PingType, EPingMessage PingMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextualPingMarker.ContextualPingMarker_C.MovePing");

	struct
	{
		EPingType                      PingType;
		EPingMessage                   PingMessage;
	} params;

	params.PingType = PingType;
	params.PingMessage = PingMessage;

	UObject::ProcessEvent(fn, &params);
}


// Function ContextualPingMarker.ContextualPingMarker_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UContextualPingMarker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextualPingMarker.ContextualPingMarker_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ContextualPingMarker.ContextualPingMarker_C.HandlePingRemoved
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UContextualPingMarker_C::HandlePingRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextualPingMarker.ContextualPingMarker_C.HandlePingRemoved");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ContextualPingMarker.ContextualPingMarker_C.SetScreenRegion
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// EIconMarkerScreenRegion        ScreenRegion                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UContextualPingMarker_C::SetScreenRegion(EIconMarkerScreenRegion ScreenRegion)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextualPingMarker.ContextualPingMarker_C.SetScreenRegion");

	struct
	{
		EIconMarkerScreenRegion        ScreenRegion;
	} params;

	params.ScreenRegion = ScreenRegion;

	UObject::ProcessEvent(fn, &params);
}


// Function ContextualPingMarker.ContextualPingMarker_C.SetArrowAngle
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          Angle                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UContextualPingMarker_C::SetArrowAngle(float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextualPingMarker.ContextualPingMarker_C.SetArrowAngle");

	struct
	{
		float                          Angle;
	} params;

	params.Angle = Angle;

	UObject::ProcessEvent(fn, &params);
}


// Function ContextualPingMarker.ContextualPingMarker_C.SetupPingOnReady
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UContextualPingMarker_C::SetupPingOnReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextualPingMarker.ContextualPingMarker_C.SetupPingOnReady");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ContextualPingMarker.ContextualPingMarker_C.PlayActivationAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bPlayActiveAnim                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UContextualPingMarker_C::PlayActivationAnim(bool bPlayActiveAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextualPingMarker.ContextualPingMarker_C.PlayActivationAnim");

	struct
	{
		bool                           bPlayActiveAnim;
	} params;

	params.bPlayActiveAnim = bPlayActiveAnim;

	UObject::ProcessEvent(fn, &params);
}


// Function ContextualPingMarker.ContextualPingMarker_C.PlayActiveStateAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UContextualPingMarker_C::PlayActiveStateAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextualPingMarker.ContextualPingMarker_C.PlayActiveStateAnim");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ContextualPingMarker.ContextualPingMarker_C.UpdateMetersAway
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            Meters                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UContextualPingMarker_C::UpdateMetersAway(int Meters)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextualPingMarker.ContextualPingMarker_C.UpdateMetersAway");

	struct
	{
		int                            Meters;
	} params;

	params.Meters = Meters;

	UObject::ProcessEvent(fn, &params);
}


// Function ContextualPingMarker.ContextualPingMarker_C.HandlePingChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UContextualPingMarker_C::HandlePingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextualPingMarker.ContextualPingMarker_C.HandlePingChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ContextualPingMarker.ContextualPingMarker_C.ExecuteUbergraph_ContextualPingMarker
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UContextualPingMarker_C::ExecuteUbergraph_ContextualPingMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextualPingMarker.ContextualPingMarker_C.ExecuteUbergraph_ContextualPingMarker");

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
