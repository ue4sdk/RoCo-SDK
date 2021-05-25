// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EnemyPingMinimapIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EnemyPingMinimapIcon.EnemyPingMinimapIcon_C.GetWorldPosition
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector UEnemyPingMinimapIcon_C::GetWorldPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPingMinimapIcon.EnemyPingMinimapIcon_C.GetWorldPosition");

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EnemyPingMinimapIcon.EnemyPingMinimapIcon_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UEnemyPingMinimapIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPingMinimapIcon.EnemyPingMinimapIcon_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EnemyPingMinimapIcon.EnemyPingMinimapIcon_C.Re Ping
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKSClientShotInfo       ShotInfo                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UEnemyPingMinimapIcon_C::Re_Ping(const struct FKSClientShotInfo& ShotInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPingMinimapIcon.EnemyPingMinimapIcon_C.Re Ping");

	struct
	{
		struct FKSClientShotInfo       ShotInfo;
	} params;

	params.ShotInfo = ShotInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function EnemyPingMinimapIcon.EnemyPingMinimapIcon_C.UpdateMeetsHeightThreshold
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bHeight                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bDepth                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UEnemyPingMinimapIcon_C::UpdateMeetsHeightThreshold(bool bHeight, bool bDepth)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPingMinimapIcon.EnemyPingMinimapIcon_C.UpdateMeetsHeightThreshold");

	struct
	{
		bool                           bHeight;
		bool                           bDepth;
	} params;

	params.bHeight = bHeight;
	params.bDepth = bDepth;

	UObject::ProcessEvent(fn, &params);
}


// Function EnemyPingMinimapIcon.EnemyPingMinimapIcon_C.ExecuteUbergraph_EnemyPingMinimapIcon
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEnemyPingMinimapIcon_C::ExecuteUbergraph_EnemyPingMinimapIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPingMinimapIcon.EnemyPingMinimapIcon_C.ExecuteUbergraph_EnemyPingMinimapIcon");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function EnemyPingMinimapIcon.EnemyPingMinimapIcon_C.PingExpired__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  Icon_Type                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            UniqueId                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEnemyPingMinimapIcon_C::PingExpired__DelegateSignature(unsigned char Icon_Type, int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPingMinimapIcon.EnemyPingMinimapIcon_C.PingExpired__DelegateSignature");

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
