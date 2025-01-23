// Fill out your copyright notice in the Description page of Project Settings.


#include "TankComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Actor.h"
#include "Components/ArrowComponent.h"
#include "Components/SplineComponent.h"
#include "Projectile.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Constructor
UTankComponent::UTankComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
    PrimaryComponentTick.SetTickFunctionEnable(true);

    FireCooldown = 2.0f;        // Normal shot every 2 seconds
	AttackDamage = 10.0f;   // Damage for normal shot
    MortarCooldown = 15.0f;  // Mortar available every 5 seconds
    //MortarDamage = 50.0f;   // AoE damage for mortar
    //MortarRadius = 300.0f;  // Radius for AoE
    MortarLaunchSpeed = 10000.0f; // Initial speed of the mortar

    CanFire = true;
    CanUseMortar = true;

    //ifDebuf
    IsShowingTrajectory = true;
}

// Called when the game starts
void UTankComponent::BeginPlay()
{
    Super::BeginPlay();

    //ATTENTION CHECK NAMES IN INSPECTOR
    if (FiringMortarPointNameRef.IsEmpty())
    {
        UE_LOG(LogTemp, Warning, TEXT("FiringMortarPoint is not assigned in %s."), *GetOwner()->GetName());
    }
    else{
        FiringMortarPoint = Cast<UArrowComponent>(GetOwner()->GetDefaultSubobjectByName(FName(*FiringMortarPointNameRef)));

		MortarTrajectory = GetOwner()->FindComponentByClass<USplineComponent>();
		TrajectoryVisual = MortarTrajectory->GetOwner()->FindComponentByClass<UNiagaraComponent>();

        MortarTrajectory->SetHiddenInGame(true, true);
    }

    // Ensure the firing point is valid
	if (FiringPointNameRef.IsEmpty())
	{
		UE_LOG(LogTemp, Warning, TEXT("FiringPoint is not assigned in %s."), *GetOwner()->GetName());
	}
    else {
        FiringPoint = Cast<UArrowComponent>(GetOwner()->GetDefaultSubobjectByName(FName(*FiringPointNameRef)));
    }

	// Ensure the projectile class is valid
	if (!ProjectileClass)
	{
		UE_LOG(LogTemp, Warning, TEXT("ProjectileClass is not assigned in %s."), *GetOwner()->GetName());
	}

}

/// <summary>
/// Normal Fire
/// </summary>
void UTankComponent::Fire()
{
    if (!CanFire)
        return;

    // Spawn the projectile
    FVector spawnLocation = FiringPoint->GetComponentLocation();
    FRotator spawnRotation = FiringPoint->GetComponentRotation();

    AProjectile* Projectile = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, spawnLocation, spawnRotation);
    
    //set Projectile speed and remove gravity
    auto movComp = Cast<UProjectileMovementComponent>(Projectile->GetComponentByClass(UProjectileMovementComponent::StaticClass()));
	movComp->ProjectileGravityScale = 0.0f;

    //normal of up plane
    movComp->SetPlaneConstraintNormal(FVector(0, 0, 1));

    CanFire = false;
    GetWorld()->GetTimerManager().SetTimer(FireTimerHandle, this, &UTankComponent::ResetFire, FireCooldown, false);

}

/// <summary>
/// Mortar Fire
/// </summary>
/// <param name="TargetLocation"></param>
void UTankComponent::FireMortar()
{
    if (!CanUseMortar)
        return;

    // Spawn the projectile
    FVector spawnLocation = FiringMortarPoint->GetComponentLocation();
	FRotator spawnRotation = FiringMortarPoint->GetComponentRotation();

    AProjectile* Projectile = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, spawnLocation, spawnRotation);

    //set Projectile speed and remove gravity
    auto movComp = Cast<UProjectileMovementComponent>(Projectile->GetComponentByClass(UProjectileMovementComponent::StaticClass()));
	movComp->ProjectileGravityScale = GravityOnMortar;

	movComp->InitialSpeed = MortarLaunchSpeed;
	movComp->MaxSpeed = MortarLaunchSpeed;

    CanUseMortar = false;
    GetWorld()->GetTimerManager().SetTimer(MortarCooldownHandle, this, &UTankComponent::ResetMortar, MortarCooldown, false);
}

void UTankComponent::ShowTrajectory()
{
	MortarTrajectory->SetHiddenInGame(false, true);
	IsShowingTrajectory = true;
}

void UTankComponent::HideTrajectory()
{
    MortarTrajectory->SetHiddenInGame(true, true);
	IsShowingTrajectory = false;
}

void UTankComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if (IsShowingTrajectory) 
    {
        FPredictProjectilePathParams Params;

        Params.StartLocation = FiringMortarPoint->GetComponentLocation();
        Params.LaunchVelocity = FiringMortarPoint->GetForwardVector() * MortarLaunchSpeed;
        Params.ProjectileRadius = 10000.f;

        FPredictProjectilePathResult PathResult;

        // Predict the projectile path
        bool bHit = UGameplayStatics::PredictProjectilePath(GetWorld(), Params, PathResult);

		TArray<FVector> SplinePoints;

        for (auto point : PathResult.PathData)
        {
			SplinePoints.Add(point.Location);
        }

        MortarTrajectory->SetSplinePoints(SplinePoints, ESplineCoordinateSpace::World);
    }
}

// Apply AoE Damage
void UTankComponent::ApplyAoEDamage(FVector TargetLocation)
{
    TArray<AActor*> IgnoredActors;
    IgnoredActors.Add(GetOwner());

    //Apply radial damage
    UGameplayStatics::ApplyRadialDamage(
        GetWorld(),
        100.f,
        TargetLocation,
        10000.f,
        nullptr,
        IgnoredActors,
        GetOwner(),
        GetOwner()->GetInstigatorController(),
        true
    );

    // Optional: Add a visual effect or explosion effect here
}

void UTankComponent::ResetFire()
{
    CanFire = true;
}

void UTankComponent::ResetMortar()
{
    CanUseMortar = true;
}


