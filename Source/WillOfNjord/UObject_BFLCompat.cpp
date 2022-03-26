// Fill out your copyright notice in the Description page of Project Settings.


#include "UObject_BFLCompat.h"

ULevel* UUObject_BFLCompat::GetLevel() const{
	return GetTypedOuter<ULevel>();
}

UWorld* UUObject_BFLCompat::GetWorld() const{
	return nullptr;
}
