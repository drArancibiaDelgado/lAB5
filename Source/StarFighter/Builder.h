// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Builder.generated.h"

UCLASS()
class STARFIGHTER_API ABuilder : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuilder();

private:
	UPROPERTY(VisibleAnywhere, Category = "Main")
		// el builder del actor
		class ANave* NaveBuilder;
	// el nave del actor
	UPROPERTY(VisibleAnywhere, Category = "Main")
		class ANaveTerrestreEnemiga01* NaveTerrestreEnemiga01;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
