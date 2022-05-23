// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaMovida.h"
#include "Math/Vector.h"

// Sets default values for this component's properties
UNaveEnemigaMovida::UNaveEnemigaMovida()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UNaveEnemigaMovida::BeginPlay()
{
	Super::BeginPlay();


	// ...
	navepintada = GetOwner();
	
}


// Called every frame
void UNaveEnemigaMovida::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	/*velocidad += velocidad* DeltaTime;

	posicones.X = velocidad + navepintada ->GetActorLocation().X;
	posicones.Y = navepintada ->GetActorLocation().Y;
	posicones.Z = navepintada ->GetActorLocation().Z;

	navepintada->SetActorLocation(posicones);*/


	navepintada->AddActorWorldOffset(posicones);


	if (navepintada->GetActorLocation().X > 300)
	{
		navepintada->SetActorLocation(FVector(-220.0,-10,70));

	}
}


