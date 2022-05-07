// Fill out your copyright notice in the Description page of Project Settings.


#include "UCustomGameViewportClient.h"

void UUCustomGameViewportClient::Init(struct FWorldContext& WorldContext, UGameInstance* OwningGameInstance, bool bCreateNewAudioDevice) {
	Super::Init(WorldContext, OwningGameInstance, bCreateNewAudioDevice);
	MouseEnter(Viewport, 0, 0);
}
