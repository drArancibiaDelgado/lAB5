// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaManager.h"
#include "EngineUtils.h"

// Sets default values
ACapsulaManager::ACapsulaManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACapsulaManager::BeginPlay()
{
	Super::BeginPlay();
	UWorld* world = GetWorld();

	for (TActorIterator<ANaveAereaJugador> It(world,ANaveAereaJugador::StaticClass()); It; ++It)
	{
		ANaveAereaJugador* actor = *It;
		if (actor != NULL)
			Capsulas.Add(actor);

	}
	
}

// Called every frame
void ACapsulaManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACapsulaManager::LiftRandomCapsula(float liftAmount)
{
	int32 countCapsulas = Capsulas.Num();
	if (countCapsulas == 0)
		return;

	int32 randomNumbre = FMath::RandRange(0, countCapsulas - 1);

	ANaveAereaJugador* capsula = Capsulas[randomNumbre];
	capsula->LiftAmount = liftAmount;
	capsula->LiftCapsula();
}

