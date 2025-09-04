// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProjectionMatrixToolBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTIONMATRIXTOOL_ProjectionMatrixToolBPLibrary_generated_h
#error "ProjectionMatrixToolBPLibrary.generated.h already included, missing '#pragma once' in ProjectionMatrixToolBPLibrary.h"
#endif
#define PROJECTIONMATRIXTOOL_ProjectionMatrixToolBPLibrary_generated_h

#define FID_TST2025_Plugins_ProjectionMatrixTool_Source_ProjectionMatrixTool_Public_ProjectionMatrixToolBPLibrary_h_28_RPC_WRAPPERS \
	DECLARE_FUNCTION(execProjectionFrustum);


#define FID_TST2025_Plugins_ProjectionMatrixTool_Source_ProjectionMatrixTool_Public_ProjectionMatrixToolBPLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUProjectionMatrixToolBPLibrary(); \
	friend struct Z_Construct_UClass_UProjectionMatrixToolBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UProjectionMatrixToolBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectionMatrixTool"), NO_API) \
	DECLARE_SERIALIZER(UProjectionMatrixToolBPLibrary)


#define FID_TST2025_Plugins_ProjectionMatrixTool_Source_ProjectionMatrixTool_Public_ProjectionMatrixToolBPLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProjectionMatrixToolBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProjectionMatrixToolBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProjectionMatrixToolBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProjectionMatrixToolBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UProjectionMatrixToolBPLibrary(UProjectionMatrixToolBPLibrary&&); \
	UProjectionMatrixToolBPLibrary(const UProjectionMatrixToolBPLibrary&); \
public: \
	NO_API virtual ~UProjectionMatrixToolBPLibrary();


#define FID_TST2025_Plugins_ProjectionMatrixTool_Source_ProjectionMatrixTool_Public_ProjectionMatrixToolBPLibrary_h_25_PROLOG
#define FID_TST2025_Plugins_ProjectionMatrixTool_Source_ProjectionMatrixTool_Public_ProjectionMatrixToolBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TST2025_Plugins_ProjectionMatrixTool_Source_ProjectionMatrixTool_Public_ProjectionMatrixToolBPLibrary_h_28_RPC_WRAPPERS \
	FID_TST2025_Plugins_ProjectionMatrixTool_Source_ProjectionMatrixTool_Public_ProjectionMatrixToolBPLibrary_h_28_INCLASS \
	FID_TST2025_Plugins_ProjectionMatrixTool_Source_ProjectionMatrixTool_Public_ProjectionMatrixToolBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTIONMATRIXTOOL_API UClass* StaticClass<class UProjectionMatrixToolBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TST2025_Plugins_ProjectionMatrixTool_Source_ProjectionMatrixTool_Public_ProjectionMatrixToolBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
