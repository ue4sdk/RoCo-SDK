// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_AsyncIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_AsyncIcon.WBP_AsyncIcon_C.Set Brush From Icon Info
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UIconInfo*               Icon_Info                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           MatchSize                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_AsyncIcon_C::Set_Brush_From_Icon_Info(class UIconInfo* Icon_Info, bool MatchSize)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AsyncIcon.WBP_AsyncIcon_C.Set Brush From Icon Info"));

	struct
	{
		class UIconInfo*               Icon_Info;
		bool                           MatchSize;
	} params;

	params.Icon_Info = Icon_Info;
	params.MatchSize = MatchSize;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.Set Brush from Path on Item
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSItem*                 Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           MatchSize                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FSoftObjectPath         Path                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_AsyncIcon_C::Set_Brush_from_Path_on_Item(class UKSItem* Item, bool MatchSize, const struct FSoftObjectPath& Path)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AsyncIcon.WBP_AsyncIcon_C.Set Brush from Path on Item"));

	struct
	{
		class UKSItem*                 Item;
		bool                           MatchSize;
		struct FSoftObjectPath         Path;
	} params;

	params.Item = Item;
	params.MatchSize = MatchSize;
	params.Path = Path;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetBrushFromSoftPath
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSoftObjectPath         Soft_Path                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           MatchSize                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_AsyncIcon_C::SetBrushFromSoftPath(const struct FSoftObjectPath& Soft_Path, bool MatchSize)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetBrushFromSoftPath"));

	struct
	{
		struct FSoftObjectPath         Soft_Path;
		bool                           MatchSize;
	} params;

	params.Soft_Path = Soft_Path;
	params.MatchSize = MatchSize;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.Set Brush from Texture on Item
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSItem*                 Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           MatchSize                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TSoftObjectPtr<class UTexture2D> Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_AsyncIcon_C::Set_Brush_from_Texture_on_Item(class UKSItem* Item, bool MatchSize, TSoftObjectPtr<class UTexture2D> Texture)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AsyncIcon.WBP_AsyncIcon_C.Set Brush from Texture on Item"));

	struct
	{
		class UKSItem*                 Item;
		bool                           MatchSize;
		TSoftObjectPtr<class UTexture2D> Texture;
	} params;

	params.Item = Item;
	params.MatchSize = MatchSize;
	params.Texture = Texture;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.Get Material
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic* MaterialInstanceDynamic        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AsyncIcon_C::Get_Material(class UMaterialInstanceDynamic** MaterialInstanceDynamic)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AsyncIcon.WBP_AsyncIcon_C.Get Material"));

	struct
	{
		class UMaterialInstanceDynamic* MaterialInstanceDynamic;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (MaterialInstanceDynamic != nullptr)
		*MaterialInstanceDynamic = params.MaterialInstanceDynamic;
}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetMaterialToUse
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMaterialInterface*      Material                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AsyncIcon_C::SetMaterialToUse(class UMaterialInterface* Material)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetMaterialToUse"));

	struct
	{
		class UMaterialInterface*      Material;
	} params;

	params.Material = Material;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.ApplyDefaultBrush
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_AsyncIcon_C::ApplyDefaultBrush()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AsyncIcon.WBP_AsyncIcon_C.ApplyDefaultBrush"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetBrushFromSoftTexture
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D> Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// bool                           MatchSize                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_AsyncIcon_C::SetBrushFromSoftTexture(TSoftObjectPtr<class UTexture2D> Texture, bool MatchSize)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetBrushFromSoftTexture"));

	struct
	{
		TSoftObjectPtr<class UTexture2D> Texture;
		bool                           MatchSize;
	} params;

	params.Texture = Texture;
	params.MatchSize = MatchSize;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetBrushFromTexture
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           MatchSize                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_AsyncIcon_C::SetBrushFromTexture(class UTexture2D* Texture, bool MatchSize)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetBrushFromTexture"));

	struct
	{
		class UTexture2D*              Texture;
		bool                           MatchSize;
	} params;

	params.Texture = Texture;
	params.MatchSize = MatchSize;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetBrushFromItemIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPlatformInventoryItem*  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           MatchSize                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_AsyncIcon_C::SetBrushFromItemIcon(class UPlatformInventoryItem* Item, bool MatchSize)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetBrushFromItemIcon"));

	struct
	{
		class UPlatformInventoryItem*  Item;
		bool                           MatchSize;
	} params;

	params.Item = Item;
	params.MatchSize = MatchSize;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_AsyncIcon_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AsyncIcon.WBP_AsyncIcon_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_AsyncIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AsyncIcon.WBP_AsyncIcon_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.OnStartLoad
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_AsyncImage*        Image                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AsyncIcon_C::OnStartLoad(class UPUMG_AsyncImage* Image)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AsyncIcon.WBP_AsyncIcon_C.OnStartLoad"));

	struct
	{
		class UPUMG_AsyncImage*        Image;
	} params;

	params.Image = Image;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.OnFinishLoad
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_AsyncImage*        Image                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AsyncIcon_C::OnFinishLoad(class UPUMG_AsyncImage* Image)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AsyncIcon.WBP_AsyncIcon_C.OnFinishLoad"));

	struct
	{
		class UPUMG_AsyncImage*        Image;
	} params;

	params.Image = Image;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.ExecuteUbergraph_WBP_AsyncIcon
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AsyncIcon_C::ExecuteUbergraph_WBP_AsyncIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AsyncIcon.WBP_AsyncIcon_C.ExecuteUbergraph_WBP_AsyncIcon"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.OnIconUpdated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AsyncIcon_C::OnIconUpdated__DelegateSignature(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AsyncIcon.WBP_AsyncIcon_C.OnIconUpdated__DelegateSignature"));

	struct
	{
		class UTexture2D*              Texture;
	} params;

	params.Texture = Texture;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
