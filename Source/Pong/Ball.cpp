// Fill out your copyright notice in the Description page of Project Settings.

#include "Ball.h"
#include "Components/SphereComponent.h"
#include "../../Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSpriteComponent.h"

// Sets default values
ABall::ABall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
	RootComponent = Sphere;

	Sprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("Sprite"));
	Sprite->SetupAttachment(RootComponent);
}

