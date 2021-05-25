// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PlayerIdentity_Banner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PlayerIdentity_Banner.WBP_PlayerIdentity_Banner_C.SetBorderFromIconInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UIconInfo*               Icon_Info                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerIdentity_Banner_C::SetBorderFromIconInfo(class UIconInfo* Icon_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerIdentity_Banner.WBP_PlayerIdentity_Banner_C.SetBorderFromIconInfo");

	struct
	{
		class UIconInfo*               Icon_Info;
	} params;

	params.Icon_Info = Icon_Info;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerIdentity_Banner.WBP_PlayerIdentity_Banner_C.SetBannerFromIconInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UIconInfo*               Icon_Info                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerIdentity_Banner_C::SetBannerFromIconInfo(class UIconInfo* Icon_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerIdentity_Banner.WBP_PlayerIdentity_Banner_C.SetBannerFromIconInfo");

	struct
	{
		class UIconInfo*               Icon_Info;
	} params;

	params.Icon_Info = Icon_Info;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerIdentity_Banner.WBP_PlayerIdentity_Banner_C.HideBorder
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerIdentity_Banner_C::HideBorder()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerIdentity_Banner.WBP_PlayerIdentity_Banner_C.HideBorder");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerIdentity_Banner.WBP_PlayerIdentity_Banner_C.SetBorder
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D> Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_PlayerIdentity_Banner_C::SetBorder(TSoftObjectPtr<class UTexture2D> Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerIdentity_Banner.WBP_PlayerIdentity_Banner_C.SetBorder");

	struct
	{
		TSoftObjectPtr<class UTexture2D> Texture;
	} params;

	params.Texture = Texture;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerIdentity_Banner.WBP_PlayerIdentity_Banner_C.SetBanner
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D> Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_PlayerIdentity_Banner_C::SetBanner(TSoftObjectPtr<class UTexture2D> Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerIdentity_Banner.WBP_PlayerIdentity_Banner_C.SetBanner");

	struct
	{
		TSoftObjectPtr<class UTexture2D> Texture;
	} params;

	params.Texture = Texture;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
