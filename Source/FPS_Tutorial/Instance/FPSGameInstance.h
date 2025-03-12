// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "FPSGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class FPS_TUTORIAL_API UFPSGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
  virtual void Init() override;

  void Test();
	
};
