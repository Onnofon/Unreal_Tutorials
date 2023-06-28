// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();
	StartPosition = GetActorLocation();
	
	
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MovePlatform(DeltaTime);
	
}

void AMovingPlatform::MovePlatform(float DeltaTime)
{
	//Move between 2 points
	if(ShouldPlatformReturn())
	{
		StartPosition = StartPosition + PlatformVelocity.GetSafeNormal() * MovedDistance;
		SetActorLocation(StartPosition);
		PlatformVelocity = -PlatformVelocity;
	}
	else
	{	
		//Move Actor Forwards
		FVector CurrentLocation = GetActorLocation();
		CurrentLocation = CurrentLocation + (PlatformVelocity * DeltaTime);
		SetActorLocation(CurrentLocation);
	}
}

bool AMovingPlatform::ShouldPlatformReturn() const
{
	return GetDistanceMoved() > MovedDistance;
}

float AMovingPlatform::GetDistanceMoved() const
{
	return FVector::Dist(StartPosition, GetActorLocation());
}

