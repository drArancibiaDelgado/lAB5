// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveAereaEnemiga_01.h"
#include "Inventory.generated.h"

/**
 * 
 */
UCLASS()
class STARFIGHTER_API AInventory : public ANaveAereaEnemiga_01
{
	GENERATED_BODY()
	

public:
	// Sets default values for this actor's properties
	AInventory();
	//The instance of this Class
	UPROPERTY()
		AInventory* Instance;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
