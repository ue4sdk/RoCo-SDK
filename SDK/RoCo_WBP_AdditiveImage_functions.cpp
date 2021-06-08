// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_AdditiveImage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_AdditiveImage.WBP_AdditiveImage_C.SetAdditiveMaterial
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_AdditiveImage_C::SetAdditiveMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdditiveImage.WBP_AdditiveImage_C.SetAdditiveMaterial");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AdditiveImage.WBP_AdditiveImage_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_AdditiveImage_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdditiveImage.WBP_AdditiveImage_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AdditiveImage.WBP_AdditiveImage_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_AdditiveImage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdditiveImage.WBP_AdditiveImage_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AdditiveImage.WBP_AdditiveImage_C.ExecuteUbergraph_WBP_AdditiveImage
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AdditiveImage_C::ExecuteUbergraph_WBP_AdditiveImage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdditiveImage.WBP_AdditiveImage_C.ExecuteUbergraph_WBP_AdditiveImage");

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
