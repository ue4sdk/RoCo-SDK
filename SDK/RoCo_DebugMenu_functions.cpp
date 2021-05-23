// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_DebugMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DebugMenu.DebugMenu_C.CloseDebugMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDebugMenu_C::CloseDebugMenu()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DebugMenu.DebugMenu_C.CloseDebugMenu"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DebugMenu.DebugMenu_C.GetParamTypeForSubCommand
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 BaseCommandString              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// EConsoleCommandParamType       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

EConsoleCommandParamType UDebugMenu_C::GetParamTypeForSubCommand(const struct FString& BaseCommandString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DebugMenu.DebugMenu_C.GetParamTypeForSubCommand"));

	struct
	{
		struct FString                 BaseCommandString;
		EConsoleCommandParamType       ReturnValue;
	} params;

	params.BaseCommandString = BaseCommandString;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DebugMenu.DebugMenu_C.AddBaseCommandHeader
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 BaseCommand                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UDebugMenu_C::AddBaseCommandHeader(const struct FString& BaseCommand)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DebugMenu.DebugMenu_C.AddBaseCommandHeader"));

	struct
	{
		struct FString                 BaseCommand;
	} params;

	params.BaseCommand = BaseCommand;

	UObject::ProcessEvent(fn, &params);
}


// Function DebugMenu.DebugMenu_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UDebugMenu_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DebugMenu.DebugMenu_C.NavigateBack"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DebugMenu.DebugMenu_C.CommandSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDebugMenuCommandInfo   Command                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UDebugMenu_C::CommandSelected(const struct FDebugMenuCommandInfo& Command)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DebugMenu.DebugMenu_C.CommandSelected"));

	struct
	{
		struct FDebugMenuCommandInfo   Command;
	} params;

	params.Command = Command;

	UObject::ProcessEvent(fn, &params);
}


// Function DebugMenu.DebugMenu_C.MakeBoolSubmenu
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FDebugMenuCommandInfo> Array                          (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UDebugMenu_C::MakeBoolSubmenu(TArray<struct FDebugMenuCommandInfo>* Array)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DebugMenu.DebugMenu_C.MakeBoolSubmenu"));

	struct
	{
		TArray<struct FDebugMenuCommandInfo> Array;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Array != nullptr)
		*Array = params.Array;
}


// Function DebugMenu.DebugMenu_C.InternalPopulate
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FDebugMenuCommandInfo> Commands                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UDebugMenu_C::InternalPopulate(TArray<struct FDebugMenuCommandInfo>* Commands)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DebugMenu.DebugMenu_C.InternalPopulate"));

	struct
	{
		TArray<struct FDebugMenuCommandInfo> Commands;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Commands != nullptr)
		*Commands = params.Commands;
}


// Function DebugMenu.DebugMenu_C.PopulateList
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Depth                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDebugMenu_C::PopulateList(int Depth)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DebugMenu.DebugMenu_C.PopulateList"));

	struct
	{
		int                            Depth;
	} params;

	params.Depth = Depth;

	UObject::ProcessEvent(fn, &params);
}


// Function DebugMenu.DebugMenu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDebugMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DebugMenu.DebugMenu_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DebugMenu.DebugMenu_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDebugMenu_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DebugMenu.DebugMenu_C.OnShown"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DebugMenu.DebugMenu_C.OnHide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDebugMenu_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DebugMenu.DebugMenu_C.OnHide"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DebugMenu.DebugMenu_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDebugMenu_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DebugMenu.DebugMenu_C.InitializeWidgetNavigation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DebugMenu.DebugMenu_C.ExecuteUbergraph_DebugMenu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDebugMenu_C::ExecuteUbergraph_DebugMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DebugMenu.DebugMenu_C.ExecuteUbergraph_DebugMenu"));

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
