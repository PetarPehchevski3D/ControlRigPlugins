// Copyright Epic Games, Inc. All Rights Reserved.

#include "Petar3D_ControlRigFunctionsBPLibrary.h"
#include "Kismet/KismetMathLibrary.h"


FPetar3D_ControlRigFunctions_VectorDegreeDifference_Execute()
{
	const float dotProductNormalized = UKismetMathLibrary::Dot_VectorVector(UKismetMathLibrary::Normal(VectorA), UKismetMathLibrary::Normal(VectorB));
	
	Result = UKismetMathLibrary::RadiansToDegrees(UKismetMathLibrary::Acos(dotProductNormalized));
	
}

FPetar3D_ControlRigFunctions_VectorProjection90Degrees_Execute()
{
	const float dotProductAToB = UKismetMathLibrary::Dot_VectorVector(VectorA, VectorB);
	const float dotProductBToB = UKismetMathLibrary::Dot_VectorVector(VectorB, VectorB);
	
	Result = VectorB * (dotProductAToB / dotProductBToB);
}


