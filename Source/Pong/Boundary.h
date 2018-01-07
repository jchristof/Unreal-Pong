// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Boundary.generated.h"

UCLASS()
class PONG_API ABoundary : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABoundary();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Boundary Type", meta = (BlueprintProtected="true"))
	bool IsGoal = false;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Boundary Type", meta = (BlueprintProtected = "true"))
	bool IsLeftGoal = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "References", meta = (BlueprintProtected = "true"))
	class APongGameMode* GameModeRef;
private:
	UPROPERTY(VisibleAnywhere, Category="Collide")
	class UBoxComponent* Bounds;

};
