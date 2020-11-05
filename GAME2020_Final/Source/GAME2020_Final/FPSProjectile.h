// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "FPSProjectile.generated.h"


UCLASS()
class GAME2020_FINAL_API AFPSProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFPSProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//sphere collision component

	UPROPERTY(VisibleDefaultsOnly, Category = Projectile)

	USphereComponent* CollisionComponent;

	//projectile movement component
	UPROPERTY(VisibleAnywhere, Category = Movement)
		
	UProjectileMovementComponent* ProjectileMovementComponent;

	//function that initializes the projectile's velocity in the shoot direction
	void FireInDirection(const FVector& ShootDirection);


};
