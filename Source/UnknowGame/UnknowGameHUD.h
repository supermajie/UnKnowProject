// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
#pragma once 

#include "UnknowGameHUD.generated.h"

UCLASS()
class AUnknowGameHUD : public AHUD
{
	GENERATED_UCLASS_BODY()

public:

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	UTexture2D* CrosshairTex;

};
