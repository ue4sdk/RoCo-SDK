// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_CINE_HUD_INTERFACE_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CINE_HUD_INTERFACE.CINE_HUD_INTERFACE_C.Set Cinematic Nameplate Data
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPersistentPlayerData* bpp__PlayerxData__pfT          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            bpp__Index__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCINE_HUD_INTERFACE_C::Set_Cinematic_Nameplate_Data(class UKSPersistentPlayerData* bpp__PlayerxData__pfT, int bpp__Index__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function CINE_HUD_INTERFACE.CINE_HUD_INTERFACE_C.Set Cinematic Nameplate Data");

	struct
	{
		class UKSPersistentPlayerData* bpp__PlayerxData__pfT;
		int                            bpp__Index__pf;
	} params;

	params.bpp__PlayerxData__pfT = bpp__PlayerxData__pfT;
	params.bpp__Index__pf = bpp__Index__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function CINE_HUD_INTERFACE.CINE_HUD_INTERFACE_C.Play Cinematic Nameplate Anim
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            bpp__Index__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            bpp__NumWalking__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCINE_HUD_INTERFACE_C::Play_Cinematic_Nameplate_Anim(int bpp__Index__pf, int bpp__NumWalking__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function CINE_HUD_INTERFACE.CINE_HUD_INTERFACE_C.Play Cinematic Nameplate Anim");

	struct
	{
		int                            bpp__Index__pf;
		int                            bpp__NumWalking__pf;
	} params;

	params.bpp__Index__pf = bpp__Index__pf;
	params.bpp__NumWalking__pf = bpp__NumWalking__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function CINE_HUD_INTERFACE.CINE_HUD_INTERFACE_C.Init WalkIn Widget
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class AKSJobSelectPreviewActor*> bpp__Players__pf__const        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCINE_HUD_INTERFACE_C::Init_WalkIn_Widget(TArray<class AKSJobSelectPreviewActor*> bpp__Players__pf__const)
{
	static auto fn = UObject::FindObject<UFunction>("Function CINE_HUD_INTERFACE.CINE_HUD_INTERFACE_C.Init WalkIn Widget");

	struct
	{
		TArray<class AKSJobSelectPreviewActor*> bpp__Players__pf__const;
	} params;

	params.bpp__Players__pf__const = bpp__Players__pf__const;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
