#include "OWLPackagingModule.h"

#include "Modules/ModuleManager.h"

IMPLEMENT_MODULE(FOWLPackagingModule, OWLPackaging);

void FOWLPackagingModule::StartupModule()
{
	IModuleInterface::StartupModule();
}

void FOWLPackagingModule::ShutdownModule()
{
	IModuleInterface::ShutdownModule();
}

