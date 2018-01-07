// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameHud.generated.h"

/**
 * 
 */
UCLASS()
class PONG_API UGameHud : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Score")
		void UpdateAIScore(int Score);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Score")
		void UpdatePlayerScore(int Score);
};
