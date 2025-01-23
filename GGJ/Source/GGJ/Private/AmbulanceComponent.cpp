// Fill out your copyright notice in the Description page of Project Settings.

#include "AmbulanceComponent.h"

UAmbulanceComponent::UAmbulanceComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UAmbulanceComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UAmbulanceComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}
