// Fill out your copyright notice in the Description page of Project Settings.


#include "Builder.h"
#include "Nave.h"


// Sets default values
ABuilder::ABuilder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABuilder::BeginPlay()
{
	Super::BeginPlay();

	//Spawn Builder and Engineer
	//NaveBuilder = GetWorld()->SpawnActor<ANaveTerrestreEnemiga01>
		//(ANaveLodgingBuilder::StaticClass());
	//Nave = GetWorld()->SpawnActor<ANave>
		(ANave::StaticClass());
	//Set the Builder for the Engineer and create the buildings
	//Nave->SetLodgingBuilder(NaveBuilder);
	//Nave->ConstructLodging();
	//Get the Engineer's Lodging and Logs the created buildings
	//ALodging* Lodging = Nave->GetLodging();
	//Lodging->LodgingCharacteristics();
}


// Called every frame
void ABuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

