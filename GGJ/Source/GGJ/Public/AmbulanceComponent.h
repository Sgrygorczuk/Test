// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterComponent.h"
#include "AmbulanceComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class GGJ_API UAmbulanceComponent : public UCharacterComponent
{
	GENERATED_BODY()

public:
	UAmbulanceComponent();

	void BeginPlay() override;
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void SetHealing(bool value) { isHealing = value; }
	
private:
	bool isHealing = false;

};
