// Copyright Epic Games, Inc. All Rights Reserved.

#include "Petar3D_ControlRigFunctions.h"

#define LOCTEXT_NAMESPACE "FPetar3D_ControlRigFunctionsModule"

void FPetar3D_ControlRigFunctionsModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
}

void FPetar3D_ControlRigFunctionsModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FPetar3D_ControlRigFunctionsModule, Petar3D_ControlRigFunctions)