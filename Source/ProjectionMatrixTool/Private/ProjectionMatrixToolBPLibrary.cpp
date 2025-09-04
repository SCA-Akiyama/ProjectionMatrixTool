// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectionMatrixToolBPLibrary.h"
#include "ProjectionMatrixTool.h"

UProjectionMatrixToolBPLibrary::UProjectionMatrixToolBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

FMatrix UProjectionMatrixToolBPLibrary::ProjectionFrustum(float Left, float Right, float Bottom, float Top, float Near, float Far)
{
    if (Near <= 0.0f || Far <= Near || Left == Right || Bottom == Top)
    {
        FFrame::KismetExecutionMessage(TEXT("CreateOffCenterProjectionMatrix - Invalid frustum parameters."), ELogVerbosity::Warning);
        return FMatrix::Identity;
    }

    const float SumR_L = Right + Left;
    const float SumT_B = Top + Bottom;
    const float InvR_L = 1.0f / (Right - Left);
    const float InvT_B = 1.0f / (Top - Bottom);
    const float InvF_N = 1.0f / (Far - Near);

    FMatrix ProjMatrix;

    ProjMatrix.M[0][0] = (2.0f * Near) * InvR_L;
    ProjMatrix.M[0][1] = 0.0f;
    ProjMatrix.M[0][2] = 0.0f;
    ProjMatrix.M[0][3] = 0.0f;

    ProjMatrix.M[1][0] = 0.0f;
    ProjMatrix.M[1][1] = (2.0f * Near) * InvT_B;
    ProjMatrix.M[1][2] = 0.0f;
    ProjMatrix.M[1][3] = 0.0f;

    ProjMatrix.M[2][0] = SumR_L * InvR_L;
    ProjMatrix.M[2][1] = SumT_B * InvT_B;
    ProjMatrix.M[2][2] = 0.0f;
    ProjMatrix.M[2][3] = 1.0f;

    ProjMatrix.M[3][0] = 0.0f;
    ProjMatrix.M[3][1] = 0.0f;
    ProjMatrix.M[3][2] = 0.0f;
    ProjMatrix.M[3][3] = 0.0f;

    if (Near == Far)
    {
        ProjMatrix.M[2][2] = 0.0f;
        ProjMatrix.M[3][2] = Near;
    }
    else
    {
        ProjMatrix.M[2][2] = Near / (Near - Far);
        ProjMatrix.M[3][2] = -Far * Near / (Near - Far);
    }

    return ProjMatrix;
}

