// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NaveEnemigaMovida.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class STARFIGHTER_API UNaveEnemigaMovida : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UNaveEnemigaMovida();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
private:
	AActor* navepintada;

	UPROPERTY(EditAnywhere)
	FVector posicones= FVector(0,0,0);
	 
	UPROPERTY(EditAnywhere)
	int velocidad = 1;
};
