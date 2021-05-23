// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_KSCameraManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KSCameraManager.KSCameraManager_C.GetMantleHeightFromKSChar
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           NoMantleCamera                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AKSCameraManager_C::GetMantleHeightFromKSChar(bool* NoMantleCamera)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function KSCameraManager.KSCameraManager_C.GetMantleHeightFromKSChar"));

	struct
	{
		bool                           NoMantleCamera;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (NoMantleCamera != nullptr)
		*NoMantleCamera = params.NoMantleCamera;
}


// Function KSCameraManager.KSCameraManager_C.NotifyCamModFinished
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Modifier_Class                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AKSCameraManager_C::NotifyCamModFinished(class UClass* Modifier_Class)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function KSCameraManager.KSCameraManager_C.NotifyCamModFinished"));

	struct
	{
		class UClass*                  Modifier_Class;
	} params;

	params.Modifier_Class = Modifier_Class;

	UObject::ProcessEvent(fn, &params);
}


// Function KSCameraManager.KSCameraManager_C.UpdateCamModValues
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Modifier_Class                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 In_Location                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 In_Rotation                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          In_FOV                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AKSCameraManager_C::UpdateCamModValues(class UClass* Modifier_Class, const struct FVector& In_Location, const struct FVector& In_Rotation, float In_FOV, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function KSCameraManager.KSCameraManager_C.UpdateCamModValues"));

	struct
	{
		class UClass*                  Modifier_Class;
		struct FVector                 In_Location;
		struct FVector                 In_Rotation;
		float                          In_FOV;
		bool                           Success;
	} params;

	params.Modifier_Class = Modifier_Class;
	params.In_Location = In_Location;
	params.In_Rotation = In_Rotation;
	params.In_FOV = In_FOV;

	UObject::ProcessEvent(fn, &params);

	if (Success != nullptr)
		*Success = params.Success;
}


// Function KSCameraManager.KSCameraManager_C.JumpStart__FinishedFunc
// (FUNC_BlueprintEvent)

void AKSCameraManager_C::JumpStart__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function KSCameraManager.KSCameraManager_C.JumpStart__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KSCameraManager.KSCameraManager_C.JumpStart__UpdateFunc
// (FUNC_BlueprintEvent)

void AKSCameraManager_C::JumpStart__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function KSCameraManager.KSCameraManager_C.JumpStart__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KSCameraManager.KSCameraManager_C.JumpLanding__FinishedFunc
// (FUNC_BlueprintEvent)

void AKSCameraManager_C::JumpLanding__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function KSCameraManager.KSCameraManager_C.JumpLanding__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KSCameraManager.KSCameraManager_C.JumpLanding__UpdateFunc
// (FUNC_BlueprintEvent)

void AKSCameraManager_C::JumpLanding__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function KSCameraManager.KSCameraManager_C.JumpLanding__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KSCameraManager.KSCameraManager_C.Mantle_Tall__FinishedFunc
// (FUNC_BlueprintEvent)

void AKSCameraManager_C::Mantle_Tall__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function KSCameraManager.KSCameraManager_C.Mantle_Tall__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KSCameraManager.KSCameraManager_C.Mantle_Tall__UpdateFunc
// (FUNC_BlueprintEvent)

void AKSCameraManager_C::Mantle_Tall__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function KSCameraManager.KSCameraManager_C.Mantle_Tall__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KSCameraManager.KSCameraManager_C.Mantle_Medium__FinishedFunc
// (FUNC_BlueprintEvent)

void AKSCameraManager_C::Mantle_Medium__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function KSCameraManager.KSCameraManager_C.Mantle_Medium__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KSCameraManager.KSCameraManager_C.Mantle_Medium__UpdateFunc
// (FUNC_BlueprintEvent)

void AKSCameraManager_C::Mantle_Medium__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function KSCameraManager.KSCameraManager_C.Mantle_Medium__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KSCameraManager.KSCameraManager_C.Mantle_Short__FinishedFunc
// (FUNC_BlueprintEvent)

void AKSCameraManager_C::Mantle_Short__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function KSCameraManager.KSCameraManager_C.Mantle_Short__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KSCameraManager.KSCameraManager_C.Mantle_Short__UpdateFunc
// (FUNC_BlueprintEvent)

void AKSCameraManager_C::Mantle_Short__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function KSCameraManager.KSCameraManager_C.Mantle_Short__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KSCameraManager.KSCameraManager_C.Vault_Tall__FinishedFunc
// (FUNC_BlueprintEvent)

void AKSCameraManager_C::Vault_Tall__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function KSCameraManager.KSCameraManager_C.Vault_Tall__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KSCameraManager.KSCameraManager_C.Vault_Tall__UpdateFunc
// (FUNC_BlueprintEvent)

void AKSCameraManager_C::Vault_Tall__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function KSCameraManager.KSCameraManager_C.Vault_Tall__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KSCameraManager.KSCameraManager_C.Vault_Medium__FinishedFunc
// (FUNC_BlueprintEvent)

void AKSCameraManager_C::Vault_Medium__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function KSCameraManager.KSCameraManager_C.Vault_Medium__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KSCameraManager.KSCameraManager_C.Vault_Medium__UpdateFunc
// (FUNC_BlueprintEvent)

void AKSCameraManager_C::Vault_Medium__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function KSCameraManager.KSCameraManager_C.Vault_Medium__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KSCameraManager.KSCameraManager_C.Vault_Short__FinishedFunc
// (FUNC_BlueprintEvent)

void AKSCameraManager_C::Vault_Short__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function KSCameraManager.KSCameraManager_C.Vault_Short__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KSCameraManager.KSCameraManager_C.Vault_Short__UpdateFunc
// (FUNC_BlueprintEvent)

void AKSCameraManager_C::Vault_Short__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function KSCameraManager.KSCameraManager_C.Vault_Short__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KSCameraManager.KSCameraManager_C.Vault_Medium_Running__FinishedFunc
// (FUNC_BlueprintEvent)

void AKSCameraManager_C::Vault_Medium_Running__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function KSCameraManager.KSCameraManager_C.Vault_Medium_Running__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KSCameraManager.KSCameraManager_C.Vault_Medium_Running__UpdateFunc
// (FUNC_BlueprintEvent)

void AKSCameraManager_C::Vault_Medium_Running__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function KSCameraManager.KSCameraManager_C.Vault_Medium_Running__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KSCameraManager.KSCameraManager_C.Play Jump Start
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AKSCameraManager_C::Play_Jump_Start()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function KSCameraManager.KSCameraManager_C.Play Jump Start"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KSCameraManager.KSCameraManager_C.PlayJumpLanding
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AKSCameraManager_C::PlayJumpLanding()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function KSCameraManager.KSCameraManager_C.PlayJumpLanding"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KSCameraManager.KSCameraManager_C.Play Mantle
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Mantle_Index                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AKSCameraManager_C::Play_Mantle(int Mantle_Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function KSCameraManager.KSCameraManager_C.Play Mantle"));

	struct
	{
		int                            Mantle_Index;
	} params;

	params.Mantle_Index = Mantle_Index;

	UObject::ProcessEvent(fn, &params);
}


// Function KSCameraManager.KSCameraManager_C.ExecuteUbergraph_KSCameraManager
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AKSCameraManager_C::ExecuteUbergraph_KSCameraManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function KSCameraManager.KSCameraManager_C.ExecuteUbergraph_KSCameraManager"));

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
