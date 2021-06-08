// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ZipLine_Art_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ZipLine_Art.ZipLine_Art_C.FixToSpline
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AZipLine_Art_C::FixToSpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipLine_Art.ZipLine_Art_C.FixToSpline");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ZipLine_Art.ZipLine_Art_C.UpdateSplineMeshPosition
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AZipLine_Art_C::UpdateSplineMeshPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipLine_Art.ZipLine_Art_C.UpdateSplineMeshPosition");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ZipLine_Art.ZipLine_Art_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AZipLine_Art_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipLine_Art.ZipLine_Art_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ZipLine_Art.ZipLine_Art_C.OnPlayerStopZiplining
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacter*            Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AZipLine_Art_C::OnPlayerStopZiplining(class AKSCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipLine_Art.ZipLine_Art_C.OnPlayerStopZiplining");

	struct
	{
		class AKSCharacter*            Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function ZipLine_Art.ZipLine_Art_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AZipLine_Art_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipLine_Art.ZipLine_Art_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ZipLine_Art.ZipLine_Art_C.OnPlayerStartZiplining
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacter*            Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AZipLine_Art_C::OnPlayerStartZiplining(class AKSCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipLine_Art.ZipLine_Art_C.OnPlayerStartZiplining");

	struct
	{
		class AKSCharacter*            Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function ZipLine_Art.ZipLine_Art_C.ExecuteUbergraph_ZipLine_Art
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AZipLine_Art_C::ExecuteUbergraph_ZipLine_Art(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipLine_Art.ZipLine_Art_C.ExecuteUbergraph_ZipLine_Art");

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
