// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_CamMod_Master_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CamMod_Master.CamMod_Master_C.OnCamModFinished
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCamMod_Master_C::OnCamModFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function CamMod_Master.CamMod_Master_C.OnCamModFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CamMod_Master.CamMod_Master_C.PlayTimeline
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCamMod_Master_C::PlayTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function CamMod_Master.CamMod_Master_C.PlayTimeline");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CamMod_Master.CamMod_Master_C.ShouldModifyCamera
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCamMod_Master_C::ShouldModifyCamera(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function CamMod_Master.CamMod_Master_C.ShouldModifyCamera");

	struct
	{
		bool                           bSuccess;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function CamMod_Master.CamMod_Master_C.UpdateValues
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 InLocation                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRotator                InRotation                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InFOV                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCamMod_Master_C::UpdateValues(const struct FVector& InLocation, const struct FRotator& InRotation, float InFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function CamMod_Master.CamMod_Master_C.UpdateValues");

	struct
	{
		struct FVector                 InLocation;
		struct FRotator                InRotation;
		float                          InFOV;
	} params;

	params.InLocation = InLocation;
	params.InRotation = InRotation;
	params.InFOV = InFOV;

	UObject::ProcessEvent(fn, &params);
}


// Function CamMod_Master.CamMod_Master_C.GetKSCharacterData
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class AKSCharacter*            KSCharacter                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSCharacterMovementComponent* MovementComponent              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AKSCameraManager_C*      Camera_Manager                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCamMod_Master_C::GetKSCharacterData(bool* Success, class AKSCharacter** KSCharacter, class UKSCharacterMovementComponent** MovementComponent, class AKSCameraManager_C** Camera_Manager)
{
	static auto fn = UObject::FindObject<UFunction>("Function CamMod_Master.CamMod_Master_C.GetKSCharacterData");

	struct
	{
		bool                           Success;
		class AKSCharacter*            KSCharacter;
		class UKSCharacterMovementComponent* MovementComponent;
		class AKSCameraManager_C*      Camera_Manager;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Success != nullptr)
		*Success = params.Success;
	if (KSCharacter != nullptr)
		*KSCharacter = params.KSCharacter;
	if (MovementComponent != nullptr)
		*MovementComponent = params.MovementComponent;
	if (Camera_Manager != nullptr)
		*Camera_Manager = params.Camera_Manager;
}


// Function CamMod_Master.CamMod_Master_C.BlueprintModifyCamera
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 ViewLocation                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRotator                ViewRotation                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          FOV                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 NewViewLocation                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRotator                NewViewRotation                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          NewFOV                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCamMod_Master_C::BlueprintModifyCamera(float DeltaTime, const struct FVector& ViewLocation, const struct FRotator& ViewRotation, float FOV, struct FVector* NewViewLocation, struct FRotator* NewViewRotation, float* NewFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function CamMod_Master.CamMod_Master_C.BlueprintModifyCamera");

	struct
	{
		float                          DeltaTime;
		struct FVector                 ViewLocation;
		struct FRotator                ViewRotation;
		float                          FOV;
		struct FVector                 NewViewLocation;
		struct FRotator                NewViewRotation;
		float                          NewFOV;
	} params;

	params.DeltaTime = DeltaTime;
	params.ViewLocation = ViewLocation;
	params.ViewRotation = ViewRotation;
	params.FOV = FOV;

	UObject::ProcessEvent(fn, &params);

	if (NewViewLocation != nullptr)
		*NewViewLocation = params.NewViewLocation;
	if (NewViewRotation != nullptr)
		*NewViewRotation = params.NewViewRotation;
	if (NewFOV != nullptr)
		*NewFOV = params.NewFOV;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
