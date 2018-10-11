// Fill out your copyright notice in the Description page of Project Settings.

#include "OBJ_NewActor.h"


// Sets default values
AOBJ_NewActor::AOBJ_NewActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	UE_LOG(LogTemp, Warning, TEXT("I just started running"));
}

// Called when the game starts or when spawned
void AOBJ_NewActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AOBJ_NewActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

