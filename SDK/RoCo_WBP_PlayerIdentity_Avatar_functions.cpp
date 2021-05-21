// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PlayerIdentity_Avatar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PlayerIdentity_Avatar.WBP_PlayerIdentity_Avatar_C.SetAvatarFromPath
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSoftObjectPath         Icon_Path                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerIdentity_Avatar_C::SetAvatarFromPath(const struct FSoftObjectPath& Icon_Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerIdentity_Avatar.WBP_PlayerIdentity_Avatar_C.SetAvatarFromPath");

	struct
	{
		struct FSoftObjectPath         Icon_Path;
	} params;

	params.Icon_Path = Icon_Path;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerIdentity_Avatar.WBP_PlayerIdentity_Avatar_C.SetAvatar
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D> Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_PlayerIdentity_Avatar_C::SetAvatar(TSoftObjectPtr<class UTexture2D> Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerIdentity_Avatar.WBP_PlayerIdentity_Avatar_C.SetAvatar");

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
