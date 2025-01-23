// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterComponent.h"
#include "NiagaraComponent.h"
#include "TankComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GGJ_API UTankComponent : public UCharacterComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTankComponent();

public:

	// Called when the game starts
	virtual void BeginPlay() override;

    //cd
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tank|Firing")
    float FireCooldown;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tank|Mortar")
    float FireLaunchSpeed;

	// Damage value for the normal shot
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tank|Firing")
	float AttackDamage;

    //cd
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tank|Firing")
    float MortarCooldown;

    //Mortar parameters
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tank|Mortar")
    float MortarLaunchSpeed;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tank|Mortar")
    float GravityOnMortar;

    //Projectile class
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tank|Combat")
    TSubclassOf<class AProjectile> ProjectileClass;

    //Firing point reference
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tank|Firing")
    FString FiringPointNameRef;

    //Firing point reference
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tank|Firing")
    FString FiringMortarPointNameRef;

private:
	//Trajectory Visualization
    TObjectPtr<class USplineComponent> MortarTrajectory;
    TObjectPtr<class UNiagaraComponent> TrajectoryVisual;

    //Trajectory Visualization
    TObjectPtr<class UArrowComponent> FiringPoint;
    TObjectPtr<class UArrowComponent> FiringMortarPoint;

    //Timer handles
    FTimerHandle FireTimerHandle;
    FTimerHandle MortarCooldownHandle;

    //Booolean to control firing and cooldown
    bool CanFire;
    bool CanUseMortar;

	bool IsShowingTrajectory;

public:
    // Functions to shoot and use mortar
    UFUNCTION(BlueprintCallable, Category = "Tank|Combat")
    void Fire();

    // Function to fire a mortar
    UFUNCTION(BlueprintCallable, Category = "Tank|Firing")
    void FireMortar();

    // Function to update trajectory
    UFUNCTION(BlueprintCallable, Category = "Tank|Trajectory")
    void ShowTrajectory();

    UFUNCTION(BlueprintCallable, Category = "Tank|Trajectory")
    void HideTrajectory();

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:

    // Helper function for AoE damage
    void ApplyAoEDamage(FVector TargetLocation);

    // Reset functions for firing and cooldown
    void ResetFire();
    void ResetMortar();
};
