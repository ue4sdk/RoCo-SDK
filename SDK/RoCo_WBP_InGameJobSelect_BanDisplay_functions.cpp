// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_InGameJobSelect_BanDisplay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_InGameJobSelect_BanDisplay.WBP_InGameJobSelect_BanDisplay_C.UpdateJobItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobItem*              NewJobItem                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_BanDisplay_C::UpdateJobItem(class UKSJobItem* NewJobItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_BanDisplay.WBP_InGameJobSelect_BanDisplay_C.UpdateJobItem");

	struct
	{
		class UKSJobItem*              NewJobItem;
	} params;

	params.NewJobItem = NewJobItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_BanDisplay.WBP_InGameJobSelect_BanDisplay_C.OnLoaded_47D6F376468F6F3E623EC59D3B701FD0
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_BanDisplay_C::OnLoaded_47D6F376468F6F3E623EC59D3B701FD0(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_BanDisplay.WBP_InGameJobSelect_BanDisplay_C.OnLoaded_47D6F376468F6F3E623EC59D3B701FD0");

	struct
	{
		class UObject*                 Loaded;
	} params;

	params.Loaded = Loaded;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_BanDisplay.WBP_InGameJobSelect_BanDisplay_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_BanDisplay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_BanDisplay.WBP_InGameJobSelect_BanDisplay_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_BanDisplay.WBP_InGameJobSelect_BanDisplay_C.PlayBanAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_BanDisplay_C::PlayBanAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_BanDisplay.WBP_InGameJobSelect_BanDisplay_C.PlayBanAnimation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_BanDisplay.WBP_InGameJobSelect_BanDisplay_C.ResetVisualState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_BanDisplay_C::ResetVisualState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_BanDisplay.WBP_InGameJobSelect_BanDisplay_C.ResetVisualState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_BanDisplay.WBP_InGameJobSelect_BanDisplay_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelect_BanDisplay_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_BanDisplay.WBP_InGameJobSelect_BanDisplay_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_BanDisplay.WBP_InGameJobSelect_BanDisplay_C.OnBanAnimComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_BanDisplay_C::OnBanAnimComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_BanDisplay.WBP_InGameJobSelect_BanDisplay_C.OnBanAnimComplete");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_BanDisplay.WBP_InGameJobSelect_BanDisplay_C.AsyncSetRogueImage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D> SoftRef                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_BanDisplay_C::AsyncSetRogueImage(TSoftObjectPtr<class UTexture2D> SoftRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_BanDisplay.WBP_InGameJobSelect_BanDisplay_C.AsyncSetRogueImage");

	struct
	{
		TSoftObjectPtr<class UTexture2D> SoftRef;
	} params;

	params.SoftRef = SoftRef;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_BanDisplay.WBP_InGameJobSelect_BanDisplay_C.HideAll
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_BanDisplay_C::HideAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_BanDisplay.WBP_InGameJobSelect_BanDisplay_C.HideAll");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_BanDisplay.WBP_InGameJobSelect_BanDisplay_C.ExecuteUbergraph_WBP_InGameJobSelect_BanDisplay
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_BanDisplay_C::ExecuteUbergraph_WBP_InGameJobSelect_BanDisplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_BanDisplay.WBP_InGameJobSelect_BanDisplay_C.ExecuteUbergraph_WBP_InGameJobSelect_BanDisplay");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_BanDisplay.WBP_InGameJobSelect_BanDisplay_C.BanAnimComplete__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_BanDisplay_C::BanAnimComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_BanDisplay.WBP_InGameJobSelect_BanDisplay_C.BanAnimComplete__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
