// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeath);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GGJ_API UCharacterComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCharacterComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Stats") 
	float currentHealth = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Stats")
	float maxHealth = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Stats")
	bool isDead = false;

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category="Character Actions") 
	void TakeDamage(float damageAmount);

	UFUNCTION(BlueprintCallable, Category = "Character Actions")
	void Heal(float healAmount);

	// Death event 
	UPROPERTY(BlueprintAssignable, Category="Character Events") 
	FOnDeath OnDeath;
};
