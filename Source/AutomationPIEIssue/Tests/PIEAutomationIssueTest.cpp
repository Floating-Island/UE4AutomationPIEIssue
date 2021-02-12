// Fill out your copyright notice in the Description page of Project Settings.


#if WITH_DEV_AUTOMATION_TESTS


#include "PIEAutomationIssueTest.h"
#include "Tests/AutomationEditorCommon.h"


bool FIncreasesPIETestDurationTest::RunTest(const FString& Parameters)
{
	FString testWorldName = FString("/Game/anyMap");

	ADD_LATENT_AUTOMATION_COMMAND(FEditorLoadMap(testWorldName));
	ADD_LATENT_AUTOMATION_COMMAND(FStartPIECommand(true));

	ADD_LATENT_AUTOMATION_COMMAND(FEndPlayMapCommand);
	return true;
}

#endif //WITH_DEV_AUTOMATION_TESTS