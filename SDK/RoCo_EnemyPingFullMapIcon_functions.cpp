// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EnemyPingFullMapIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EnemyPingFullMapIcon.EnemyPingFullMapIcon_C.GetWorldPosition
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector UEnemyPingFullMapIcon_C::GetWorldPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPingFullMapIcon.EnemyPingFullMapIcon_C.GetWorldPosition");

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EnemyPingFullMapIcon.EnemyPingFullMapIcon_C.GetPingType
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EKSPingType                    NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEnemyPingFullMapIcon_C::GetPingType(EKSPingType* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPingFullMapIcon.EnemyPingFullMapIcon_C.GetPingType");

	struct
	{
		EKSPingType                    NewParam;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function EnemyPingFullMapIcon.EnemyPingFullMapIcon_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UEnemyPingFullMapIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPingFullMapIcon.EnemyPingFullMapIcon_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EnemyPingFullMapIcon.EnemyPingFullMapIcon_C.Start Ping
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEnemyPingFullMapIcon_C::Start_Ping()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPingFullMapIcon.EnemyPingFullMapIcon_C.Start Ping");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EnemyPingFullMapIcon.EnemyPingFullMapIcon_C.Re Ping
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKSClientShotInfo       ShotInfo                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UEnemyPingFullMapIcon_C::Re_Ping(const struct FKSClientShotInfo& ShotInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPingFullMapIcon.EnemyPingFullMapIcon_C.Re Ping");

	struct
	{
		struct FKSClientShotInfo       ShotInfo;
	} params;

	params.ShotInfo = ShotInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function EnemyPingFullMapIcon.EnemyPingFullMapIcon_C.ExecuteUbergraph_EnemyPingFullMapIcon
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEnemyPingFullMapIcon_C::ExecuteUbergraph_EnemyPingFullMapIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPingFullMapIcon.EnemyPingFullMapIcon_C.ExecuteUbergraph_EnemyPingFullMapIcon");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function EnemyPingFullMapIcon.EnemyPingFullMapIcon_C.PingExpired__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  Icon_Type                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            UniqueId                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEnemyPingFullMapIcon_C::PingExpired__DelegateSignature(unsigned char Icon_Type, int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPingFullMapIcon.EnemyPingFullMapIcon_C.PingExpired__DelegateSignature");

	struct
	{
		unsigned char                  Icon_Type;
		int                            UniqueId;
	} params;

	params.Icon_Type = Icon_Type;
	params.UniqueId = UniqueId;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
