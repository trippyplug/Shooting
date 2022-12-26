// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CodeTest.generated.h"

UCLASS()
class SHOOTING_API ACodeTest : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACodeTest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// 정수형 변수 number룰 선언한다.
	UPROPERTY(EditDefaultsOnly)
	int32 number;
	int32 number2;

	// 실수형 변수 fnumber를 선언한다.
	float fnumber1;
	float fnumber2;


	// 문자열 변수 name을 선언한다.
	FString name;
	FString name2 = FString(TEXT("안승"));

	// 논리형 변수 IsStudent를 선언한다.
	bool isStudent;
	bool isTeacher = true;

	int32 Add(int32 num1, int32 num2);
	int32 Subtract(int32 num1, int32 num2);
	int32 Multiply(int32 num1, int32 num2);
	float Divide(int32 num1, int32 num2);

	UPROPERTY(EditAnywhere)
	int32 age;

	UPROPERTY(EditAnywhere)
	int32 height;

	UPROPERTY(EditAnywhere)
	FString nation = FString(TEXT("한국"));


	//문자열 두 개를 받아서 문자열 한 개로 합쳐서 반환하는 함수를 만들고 싶다.
	UFUNCTION(BlueprintCallable)
	FString StringAppender(FString a, FString b);


};