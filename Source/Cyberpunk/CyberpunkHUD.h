// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "CyberpunkHUD.generated.h"

UCLASS()
class ACyberpunkHUD : public AHUD
{
	GENERATED_BODY()

public:
	ACyberpunkHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

