// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PongGameMode.generated.h"

/**
 * 
 */
UCLASS()
class PONG_API APongGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Score")
		void IncreatePlayerScore();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Score")
		void IncreateAIScore();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Logic")
		void SpawnNewBall();

	UPROPERTY(BlueprintReadWrite, Category = "Reference")
		class ABall* BallReft;
protected:
	UPROPERTY(BlueprintReadWrite, Category="Reference", meta=(BlueprintProtected))
	class UGameHUD* GameHUDRef;
	

	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Float", meta = (BlueprintProtected))
	float Direction = -1.;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Float", meta = (BlueprintProtected))
	float BallSpeed = 1400.;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Score", meta = (BlueprintProtected))
	int PlayerScore = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Score", meta = (BlueprintProtected))
	int AIScore = 0;
};
