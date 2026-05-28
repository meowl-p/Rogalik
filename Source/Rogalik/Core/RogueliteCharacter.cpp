// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/RogueliteCharacter.h"

void ARogueliteCharacter::HandleDamage(float Damage, const FVector& DamageDirection)
{
	Super::HandleDamage(Damage, DamageDirection);
	Health -= 10.f;
}
