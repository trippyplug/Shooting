// Fill out your copyright notice in the Description page of Project Settings.


#include "CodeTest.h"

// Sets default values
// 기본값을 설정할 수 있다.
// 생정자 함수라 한다.
ACodeTest::ACodeTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	age = 42;
	height = 180;
}

// Called when the game starts or when spawned
void ACodeTest::BeginPlay()
{
	Super::BeginPlay();
	
// 	// Add 함수에 입력값 8, 4를 넣어서 결과를 받는다.
// 	int32 result1 = Add(8, 4);
// 	int32 result2 = Subtract(8, 4);
// 	int32 result3 = Multiply(8, 4);
// 	float result4 = Divide(4, 8);
// 	
// 	// result 변수에 있는 값을 화면에 출력한다.
// 	UE_LOG(LogTemp, Warning, TEXT("Result1 : %d"), result1);
// 	UE_LOG(LogTemp, Warning, TEXT("Result2 : %d"), result2);
// 	UE_LOG(LogTemp, Warning, TEXT("Result3 : %d"), result3);
// 	UE_LOG(LogTemp, Warning, TEXT("Result4 : %.1f"), result4);

	//만일, 나이가 20살 이상이면 "꼰대"라고 출력하고 싶다.
// 	if (age >= 30)
// 	{
// 		UE_LOG(LogTemp, Warning, TEXT("할배시네요"));
// 	}
// 	else if (age >= 20)
// 	{
// 		UE_LOG(LogTemp, Warning, TEXT("꼰대시네요"));
// 	}
// 	else
// 	{
// 		UE_LOG(LogTemp, Warning, TEXT("잼민이네요"));
// 	}

	// 만일 나이가 20살 이상이면서, 키가 160 이상인 경우에는 
	// "환영" 이라고 출력
	// 그렇지 않으면, "외면" 이라고 출력한다.
// 	if (age >= 20 || height >= 160)
// 	{
// 		UE_LOG(LogTemp, Warning, TEXT("환영"));
// 	}
// 	else
// 	{
// 		UE_LOG(LogTemp, Warning, TEXT("외면"));
// 	}

	// 만일, 국적(nation)이 "한국" 이면서, 
	// 나이(age)가 20살이상 40살 미만인 경우 "청년"이라고 출력
	// 그밖에는 "청년아님" 출력
	
// 	if (nation == TEXT("한국") && age >= 20 && age < 40)
// 	{
// 		UE_LOG(LogTemp, Warning, TEXT("청년"));
// 	}
// 	else
// 	{
// 		UE_LOG(LogTemp, Warning, TEXT("청년아님"));
// 	}

// 	FString result = StringAppender(TEXT("안"), TEXT("승"));
// 	UE_LOG(LogTemp, Warning, TEXT("함수실행결과 : %s"), *result);

	int32 checker = 99;

	//만일, checker 변수의 값이 짝수라면
	// "even"이라고 출력한다
	// 그렇지 않고, 변수의 값이 홀수라면
	// "odd"라고 출력한다.

	if (checker % 2 == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT ("Even"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT ("Odd"));
	}


}

// Called every frame
void ACodeTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int32 ACodeTest::Add(int32 num1, int32 num2)
{
	// to do
	return num1 + num2;

}

int32 ACodeTest::Subtract(int32 num1, int32 num2)
{
	// to do
	return num1 - num2;
}

int32 ACodeTest::Multiply(int32 num1, int32 num2)
{
	// to do
	return num1 * num2;
}

float ACodeTest::Divide(int32 num1, int32 num2)
{
	// to do
	return (float)num1 / (float)num2;
}


FString ACodeTest::StringAppender(FString a, FString b)
{
	return a + b;
}