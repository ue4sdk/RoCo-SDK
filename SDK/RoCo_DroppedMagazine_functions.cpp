// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_DroppedMagazine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DroppedMagazine.DroppedMagazine_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ADroppedMagazine_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedMagazine.DroppedMagazine_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DroppedMagazine.DroppedMagazine_C.SetMesh
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USkeletalMesh*           NewSkelMesh                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UStaticMesh*             NewStaticMesh                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ADroppedMagazine_C::SetMesh(class USkeletalMesh* NewSkelMesh, class UStaticMesh* NewStaticMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedMagazine.DroppedMagazine_C.SetMesh");

	struct
	{
		class USkeletalMesh*           NewSkelMesh;
		class UStaticMesh*             NewStaticMesh;
	} params;

	params.NewSkelMesh = NewSkelMesh;
	params.NewStaticMesh = NewStaticMesh;

	UObject::ProcessEvent(fn, &params);
}


// Function DroppedMagazine.DroppedMagazine_C.SetVelocity
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Velocity                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ADroppedMagazine_C::SetVelocity(const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedMagazine.DroppedMagazine_C.SetVelocity");

	struct
	{
		struct FVector                 Velocity;
	} params;

	params.Velocity = Velocity;

	UObject::ProcessEvent(fn, &params);
}


// Function DroppedMagazine.DroppedMagazine_C.ExecuteUbergraph_DroppedMagazine
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ADroppedMagazine_C::ExecuteUbergraph_DroppedMagazine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedMagazine.DroppedMagazine_C.ExecuteUbergraph_DroppedMagazine");

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
