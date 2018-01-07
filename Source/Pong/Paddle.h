// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Paddle.generated.h"

UCLASS()
class PONG_API APaddle : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APaddle();
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Collision", meta=(AllowPrivateAccess))
	class UBoxComponent* Collider;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Sprite")
	class UPaperSpriteComponent* PaddleSprite;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Float", meta=(BlueprintProtected))
	float MoveSpeed = 10.0f;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Setup", meta=(BlueprintProtected))
	class ABall* BallRef;
};