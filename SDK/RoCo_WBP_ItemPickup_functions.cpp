// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ItemPickup_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ItemPickup.WBP_ItemPickup_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemPickup_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemPickup.WBP_ItemPickup_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemPickup.WBP_ItemPickup_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ItemPickup_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemPickup.WBP_ItemPickup_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemPickup.WBP_ItemPickup_C.OnItemPickedUp_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacter*            Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AKSItemDrop*             ItemDrop                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSItem*                 Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemPickup_C::OnItemPickedUp_Event_1(class AKSCharacter* Character, class AKSItemDrop* ItemDrop, class UKSItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemPickup.WBP_ItemPickup_C.OnItemPickedUp_Event_1");

	struct
	{
		class AKSCharacter*            Character;
		class AKSItemDrop*             ItemDrop;
		class UKSItem*                 Item;
	} params;

	params.Character = Character;
	params.ItemDrop = ItemDrop;
	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemPickup.WBP_ItemPickup_C.OnPostSetPawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ItemPickup_C::OnPostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemPickup.WBP_ItemPickup_C.OnPostSetPawn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemPickup.WBP_ItemPickup_C.ExecuteUbergraph_WBP_ItemPickup
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemPickup_C::ExecuteUbergraph_WBP_ItemPickup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemPickup.WBP_ItemPickup_C.ExecuteUbergraph_WBP_ItemPickup");

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
