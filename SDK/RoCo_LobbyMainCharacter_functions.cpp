// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_LobbyMainCharacter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LobbyMainCharacter.LobbyMainCharacter_C.OnGenderChanged
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ALobbyMainCharacter_C::OnGenderChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.OnGenderChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.InitializeNameplate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UNewWBP_LobbyNameplate_C* Nameplate                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ALobbyMainCharacter_C::InitializeNameplate(class UNewWBP_LobbyNameplate_C* Nameplate)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.InitializeNameplate");

	struct
	{
		class UNewWBP_LobbyNameplate_C* Nameplate;
	} params;

	params.Nameplate = Nameplate;

	UObject::ProcessEvent(fn, &params);
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.Randomize Lobby Idle anim start
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ALobbyMainCharacter_C::Randomize_Lobby_Idle_anim_start()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.Randomize Lobby Idle anim start");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.Make Lobby Fidget Keyword Array
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ALobbyMainCharacter_C::Make_Lobby_Fidget_Keyword_Array()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.Make Lobby Fidget Keyword Array");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.Parse Lobby Fidget Animation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FName>           LobbyFidgetKeywordArray        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// EKSLobbyCharacterAnimationPose Lobby_Character_Animation_Pose (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ALobbyMainCharacter_C::Parse_Lobby_Fidget_Animation(TArray<struct FName>* LobbyFidgetKeywordArray, EKSLobbyCharacterAnimationPose* Lobby_Character_Animation_Pose)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.Parse Lobby Fidget Animation");

	struct
	{
		TArray<struct FName>           LobbyFidgetKeywordArray;
		EKSLobbyCharacterAnimationPose Lobby_Character_Animation_Pose;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (LobbyFidgetKeywordArray != nullptr)
		*LobbyFidgetKeywordArray = params.LobbyFidgetKeywordArray;
	if (Lobby_Character_Animation_Pose != nullptr)
		*Lobby_Character_Animation_Pose = params.Lobby_Character_Animation_Pose;
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.Get Montage Position of Lobby Characater
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Position                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ALobbyMainCharacter_C::Get_Montage_Position_of_Lobby_Characater(float* Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.Get Montage Position of Lobby Characater");

	struct
	{
		float                          Position;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Position != nullptr)
		*Position = params.Position;
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.Init Body Apparel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ALobbyMainCharacter_C::Init_Body_Apparel()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.Init Body Apparel");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyWeapon01_Timeline__FinishedFunc
// (FUNC_BlueprintEvent)

void ALobbyMainCharacter_C::LobbyWeapon01_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyWeapon01_Timeline__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyWeapon01_Timeline__UpdateFunc
// (FUNC_BlueprintEvent)

void ALobbyMainCharacter_C::LobbyWeapon01_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyWeapon01_Timeline__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyWeapon02_Timeline__FinishedFunc
// (FUNC_BlueprintEvent)

void ALobbyMainCharacter_C::LobbyWeapon02_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyWeapon02_Timeline__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyWeapon02_Timeline__UpdateFunc
// (FUNC_BlueprintEvent)

void ALobbyMainCharacter_C::LobbyWeapon02_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyWeapon02_Timeline__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyProp01_Timeline__FinishedFunc
// (FUNC_BlueprintEvent)

void ALobbyMainCharacter_C::LobbyProp01_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyProp01_Timeline__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyProp01_Timeline__UpdateFunc
// (FUNC_BlueprintEvent)

void ALobbyMainCharacter_C::LobbyProp01_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyProp01_Timeline__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.OnNotifyEnd_AA177F3D4F176F58A7691D84D8C329C7
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            MontageInstanceID              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ALobbyMainCharacter_C::OnNotifyEnd_AA177F3D4F176F58A7691D84D8C329C7(const struct FName& NotifyName, int MontageInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.OnNotifyEnd_AA177F3D4F176F58A7691D84D8C329C7");

	struct
	{
		struct FName                   NotifyName;
		int                            MontageInstanceID;
	} params;

	params.NotifyName = NotifyName;
	params.MontageInstanceID = MontageInstanceID;

	UObject::ProcessEvent(fn, &params);
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.OnNotifyBegin_AA177F3D4F176F58A7691D84D8C329C7
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            MontageInstanceID              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ALobbyMainCharacter_C::OnNotifyBegin_AA177F3D4F176F58A7691D84D8C329C7(const struct FName& NotifyName, int MontageInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.OnNotifyBegin_AA177F3D4F176F58A7691D84D8C329C7");

	struct
	{
		struct FName                   NotifyName;
		int                            MontageInstanceID;
	} params;

	params.NotifyName = NotifyName;
	params.MontageInstanceID = MontageInstanceID;

	UObject::ProcessEvent(fn, &params);
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.OnInterrupted_AA177F3D4F176F58A7691D84D8C329C7
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            MontageInstanceID              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ALobbyMainCharacter_C::OnInterrupted_AA177F3D4F176F58A7691D84D8C329C7(const struct FName& NotifyName, int MontageInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.OnInterrupted_AA177F3D4F176F58A7691D84D8C329C7");

	struct
	{
		struct FName                   NotifyName;
		int                            MontageInstanceID;
	} params;

	params.NotifyName = NotifyName;
	params.MontageInstanceID = MontageInstanceID;

	UObject::ProcessEvent(fn, &params);
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.OnBlendOut_AA177F3D4F176F58A7691D84D8C329C7
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            MontageInstanceID              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ALobbyMainCharacter_C::OnBlendOut_AA177F3D4F176F58A7691D84D8C329C7(const struct FName& NotifyName, int MontageInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.OnBlendOut_AA177F3D4F176F58A7691D84D8C329C7");

	struct
	{
		struct FName                   NotifyName;
		int                            MontageInstanceID;
	} params;

	params.NotifyName = NotifyName;
	params.MontageInstanceID = MontageInstanceID;

	UObject::ProcessEvent(fn, &params);
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.OnCompleted_AA177F3D4F176F58A7691D84D8C329C7
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            MontageInstanceID              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ALobbyMainCharacter_C::OnCompleted_AA177F3D4F176F58A7691D84D8C329C7(const struct FName& NotifyName, int MontageInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.OnCompleted_AA177F3D4F176F58A7691D84D8C329C7");

	struct
	{
		struct FName                   NotifyName;
		int                            MontageInstanceID;
	} params;

	params.NotifyName = NotifyName;
	params.MontageInstanceID = MontageInstanceID;

	UObject::ProcessEvent(fn, &params);
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.StopRightPropEffect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ALobbyMainCharacter_C::StopRightPropEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.StopRightPropEffect");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.PlayRightPropEffect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   MaterialParameter              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UCurveFloat*             FloatCurve                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ALobbyMainCharacter_C::PlayRightPropEffect(float Duration, const struct FName& MaterialParameter, class UCurveFloat* FloatCurve)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.PlayRightPropEffect");

	struct
	{
		float                          Duration;
		struct FName                   MaterialParameter;
		class UCurveFloat*             FloatCurve;
	} params;

	params.Duration = Duration;
	params.MaterialParameter = MaterialParameter;
	params.FloatCurve = FloatCurve;

	UObject::ProcessEvent(fn, &params);
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.StopLeftPropEffect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ALobbyMainCharacter_C::StopLeftPropEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.StopLeftPropEffect");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.PlayLeftPropEffect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   MaterialParameter              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UCurveFloat*             FloatCurve                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ALobbyMainCharacter_C::PlayLeftPropEffect(float Duration, const struct FName& MaterialParameter, class UCurveFloat* FloatCurve)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.PlayLeftPropEffect");

	struct
	{
		float                          Duration;
		struct FName                   MaterialParameter;
		class UCurveFloat*             FloatCurve;
	} params;

	params.Duration = Duration;
	params.MaterialParameter = MaterialParameter;
	params.FloatCurve = FloatCurve;

	UObject::ProcessEvent(fn, &params);
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.StopScenePropEffect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ALobbyMainCharacter_C::StopScenePropEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.StopScenePropEffect");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.PlayScenePropEffect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   MaterialParameter              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UCurveFloat*             FloatCurve                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ALobbyMainCharacter_C::PlayScenePropEffect(float Duration, const struct FName& MaterialParameter, class UCurveFloat* FloatCurve)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.PlayScenePropEffect");

	struct
	{
		float                          Duration;
		struct FName                   MaterialParameter;
		class UCurveFloat*             FloatCurve;
	} params;

	params.Duration = Duration;
	params.MaterialParameter = MaterialParameter;
	params.FloatCurve = FloatCurve;

	UObject::ProcessEvent(fn, &params);
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ALobbyMainCharacter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.Add Body Apparel As Parent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USkinnableSkeletalMeshComponent* Skinnable_Mesh_Component       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ALobbyMainCharacter_C::Add_Body_Apparel_As_Parent(class USkinnableSkeletalMeshComponent* Skinnable_Mesh_Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.Add Body Apparel As Parent");

	struct
	{
		class USkinnableSkeletalMeshComponent* Skinnable_Mesh_Component;
	} params;

	params.Skinnable_Mesh_Component = Skinnable_Mesh_Component;

	UObject::ProcessEvent(fn, &params);
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.PlayLobbyCharacterMontage
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ALobbyMainCharacter_C::PlayLobbyCharacterMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.PlayLobbyCharacterMontage");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.StopLobbyCharacterMontage
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ALobbyMainCharacter_C::StopLobbyCharacterMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.StopLobbyCharacterMontage");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.InitializeLobbyCharacterAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ALobbyMainCharacter_C::InitializeLobbyCharacterAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.InitializeLobbyCharacterAnimation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.UpdateSilhouette
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ALobbyMainCharacter_C::UpdateSilhouette(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.UpdateSilhouette");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function LobbyMainCharacter.LobbyMainCharacter_C.ExecuteUbergraph_LobbyMainCharacter
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ALobbyMainCharacter_C::ExecuteUbergraph_LobbyMainCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMainCharacter.LobbyMainCharacter_C.ExecuteUbergraph_LobbyMainCharacter");

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
