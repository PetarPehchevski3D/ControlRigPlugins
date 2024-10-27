// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "RigVMCore/RigVMStruct.h"
#include "Petar3D_ControlRigFunctionsBPLibrary.generated.h"



USTRUCT(meta = (Abstract, NodeColor = "0.60 0.00 1.00"))
struct PETAR3D_CONTROLRIGFUNCTIONS_API FPetar3D_ControlRigFunctions_Base : public FRigVMStruct
{
	GENERATED_BODY()

	virtual void Execute() {};
};


USTRUCT(meta = (DisplayName = "Vector Degree Difference", TemplateName = "VectorDegreeDifference", Keywords = "dot, product, petar, degree, vector", Category = "Petar3D_ControlRigFunctions"))
struct PETAR3D_CONTROLRIGFUNCTIONS_API FPetar3D_ControlRigFunctions_VectorDegreeDifference : public FPetar3D_ControlRigFunctions_Base
{
	GENERATED_BODY()

	RIGVM_METHOD()
		virtual void Execute() override;

	UPROPERTY(meta = (Input))
	FVector VectorA = FVector::ZeroVector;

	UPROPERTY(meta = (Input))
	FVector VectorB = FVector::ZeroVector;

	UPROPERTY(meta = (Input))
	bool bIsRotationNormalized = false;

	UPROPERTY(meta = (Output))
	float Result = 0.f;
};

/*
Projects VectorA onto VectorB, and we get the point along the VectorB which results in a 90 degree projection.
*/
USTRUCT(meta = (DisplayName = "Vector Projection 90 Degrees", TemplateName = "VectorProjection90Degrees", Keywords = "dot, product, petar, degree, vector, project", Category = "Petar3D_ControlRigFunctions"))
struct PETAR3D_CONTROLRIGFUNCTIONS_API FPetar3D_ControlRigFunctions_VectorProjection90Degrees : public FPetar3D_ControlRigFunctions_Base
{
	GENERATED_BODY()

	RIGVM_METHOD()
		virtual void Execute() override;

	UPROPERTY(meta = (Input))
	FVector VectorA = FVector::ZeroVector;

	UPROPERTY(meta = (Input))
	FVector VectorB = FVector::ZeroVector;

	UPROPERTY(meta = (Output))
	FVector Result = FVector::ZeroVector;
};