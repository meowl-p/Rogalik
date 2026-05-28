// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Variant_TwinStick/TwinStickCharacter.h"
#include "RogueliteCharacter.generated.h"

/**
 * 
 */
UCLASS()
class ROGALIK_API ARogueliteCharacter : public ATwinStickCharacter
{
	GENERATED_BODY()

public:

	virtual void HandleDamage(float Damage, const FVector& DamageDirection) override;
	
	UFUNCTION(BlueprintCallable, Category = "Combat")
	float GetHealth() const { return Health; }
	UFUNCTION(BlueprintCallable, Category = "Combat")
	float GetMaxHealth() const { return MaxHealth; }
	UFUNCTION(BlueprintCallable, Category = "Combat")
	float GetHealthPercentage() const { return Health / MaxHealth; }
	
private:
	float MaxHealth = 100.f;
	float Health = MaxHealth;
};
