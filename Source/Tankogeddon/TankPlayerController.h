// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TANKOGEDDON_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

private:
	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);
	void RotateRight(float AxisValue);

private:
	UPROPERTY()
	class ATankPawn* TankPawn;
};
