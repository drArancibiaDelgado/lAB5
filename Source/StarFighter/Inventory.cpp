// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory.h"
#include "Kismet/GameplayStatics.h"


AInventory::AInventory()
{
    // Set this actor to call Tick() every frame.  You can turn this off toimprove performance if you don't need it.
        PrimaryActorTick.bCanEverTick = true;
    //Search for existing Instances of this class
    TArray<AActor*> Instances;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(),AInventory::StaticClass(), Instances);
    if (Instances.Num() > 1)
    {
        //If exist at least one of them, set the instance with the first found one
        Instance = Cast<AInventory>(Instances[0]);
        GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,FString::Printf(TEXT("%s already exists"), *Instance->GetName()));
        //Then Destroy this Actor
        Destroy();
    }

}

void AInventory::BeginPlay()
{
    Super::BeginPlay();

}

void AInventory::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
