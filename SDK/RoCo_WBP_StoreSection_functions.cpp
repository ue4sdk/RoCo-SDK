// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_StoreSection_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_StoreSection.WBP_StoreSection_C.OnStoreTimerTick
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_StoreSection_C::OnStoreTimerTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSection.WBP_StoreSection_C.OnStoreTimerTick");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StoreSection.WBP_StoreSection_C.ShowCTA
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShowCTA                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_StoreSection_C::ShowCTA(bool ShowCTA)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSection.WBP_StoreSection_C.ShowCTA");

	struct
	{
		bool                           ShowCTA;
	} params;

	params.ShowCTA = ShowCTA;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StoreSection.WBP_StoreSection_C.UpdateSectionTimer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_StoreSection_C::UpdateSectionTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSection.WBP_StoreSection_C.UpdateSectionTimer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StoreSection.WBP_StoreSection_C.FindTaxInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSStoreSection*         StoreSection                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StoreSection_C::FindTaxInfo(class UKSStoreSection* StoreSection)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSection.WBP_StoreSection_C.FindTaxInfo");

	struct
	{
		class UKSStoreSection*         StoreSection;
	} params;

	params.StoreSection = StoreSection;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StoreSection.WBP_StoreSection_C.SetItemSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SectionIndex                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            ItemIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StoreSection_C::SetItemSelected(int SectionIndex, int ItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSection.WBP_StoreSection_C.SetItemSelected");

	struct
	{
		int                            SectionIndex;
		int                            ItemIndex;
	} params;

	params.SectionIndex = SectionIndex;
	params.ItemIndex = ItemIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StoreSection.WBP_StoreSection_C.SetupSectionNavigation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           SelectLast                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_StoreSection_C::SetupSectionNavigation(bool SelectLast)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSection.WBP_StoreSection_C.SetupSectionNavigation");

	struct
	{
		bool                           SelectLast;
	} params;

	params.SelectLast = SelectLast;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StoreSection.WBP_StoreSection_C.SetSectionData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSStoreSection*         SectionData                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StoreSection_C::SetSectionData(class UKSStoreSection* SectionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSection.WBP_StoreSection_C.SetSectionData");

	struct
	{
		class UKSStoreSection*         SectionData;
	} params;

	params.SectionData = SectionData;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StoreSection.WBP_StoreSection_C.ClearContents
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_StoreSection_C::ClearContents()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSection.WBP_StoreSection_C.ClearContents");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StoreSection.WBP_StoreSection_C.AddItemToSection
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSStoreSectionItem*     StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UGridSlot*               NewSlot                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StoreSection_C::AddItemToSection(class UKSStoreSectionItem* StoreItem, class UGridSlot** NewSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSection.WBP_StoreSection_C.AddItemToSection");

	struct
	{
		class UKSStoreSectionItem*     StoreItem;
		class UGridSlot*               NewSlot;
	} params;

	params.StoreItem = StoreItem;

	UObject::ProcessEvent(fn, &params);

	if (NewSlot != nullptr)
		*NewSlot = params.NewSlot;
}


// Function WBP_StoreSection.WBP_StoreSection_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_StoreSection_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSection.WBP_StoreSection_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StoreSection.WBP_StoreSection_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StoreSection_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSection.WBP_StoreSection_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StoreSection.WBP_StoreSection_C.ExecuteUbergraph_WBP_StoreSection
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StoreSection_C::ExecuteUbergraph_WBP_StoreSection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSection.WBP_StoreSection_C.ExecuteUbergraph_WBP_StoreSection");

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
