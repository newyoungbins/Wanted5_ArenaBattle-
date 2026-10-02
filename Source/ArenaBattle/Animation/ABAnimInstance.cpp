// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/ABAnimInstance.h"

UABAnimInstance::UABAnimInstance()
{
	// 기본 값 설정.
	MovingThreshold = 3.0f;

	// 점프 중인지 판단할 기준 값.
	JumpingThreshold = 100.0f;
}

void UABAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
}

void UABAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
}
