// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "NaveAereaJugador.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CapsulaManager.generated.h"

UCLASS()
class STARFIGHTER_API ACapsulaManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACapsulaManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void LiftRandomCapsula(float liftAmount);
	UPROPERTY(BlueprintReadWrite)
		float LiftAmount;

private:

	TArray<ANaveAereaJugador*>Capsulas;
};
