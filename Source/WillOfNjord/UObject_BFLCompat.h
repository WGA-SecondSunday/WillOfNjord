// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject_BFLCompat.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class WILLOFNJORD_API UUObject_BFLCompat : public UObject
{
	GENERATED_BODY()
public:
	class UWorld* GetWorld() const;
	class ULevel* GetLevel() const;
};
