// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectionMatrixTool/Public/ProjectionMatrixToolBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectionMatrixToolBPLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
PROJECTIONMATRIXTOOL_API UClass* Z_Construct_UClass_UProjectionMatrixToolBPLibrary();
PROJECTIONMATRIXTOOL_API UClass* Z_Construct_UClass_UProjectionMatrixToolBPLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectionMatrixTool();
// End Cross Module References

// Begin Class UProjectionMatrixToolBPLibrary Function ProjectionFrustum
struct Z_Construct_UFunction_UProjectionMatrixToolBPLibrary_ProjectionFrustum_Statics
{
	struct FMatrix
	{
		FPlane XPlane;
		FPlane YPlane;
		FPlane ZPlane;
		FPlane WPlane;
	};

	struct ProjectionMatrixToolBPLibrary_eventProjectionFrustum_Parms
	{
		float Left;
		float Right;
		float Bottom;
		float Top;
		float Near;
		float Far;
		FMatrix ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Projection" },
		{ "DisplayName", "Projection Frustum" },
		{ "ModuleRelativePath", "Public/ProjectionMatrixToolBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Left;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Right;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Bottom;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Top;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Near;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Far;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProjectionMatrixToolBPLibrary_ProjectionFrustum_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectionMatrixToolBPLibrary_eventProjectionFrustum_Parms, Left), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProjectionMatrixToolBPLibrary_ProjectionFrustum_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectionMatrixToolBPLibrary_eventProjectionFrustum_Parms, Right), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProjectionMatrixToolBPLibrary_ProjectionFrustum_Statics::NewProp_Bottom = { "Bottom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectionMatrixToolBPLibrary_eventProjectionFrustum_Parms, Bottom), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProjectionMatrixToolBPLibrary_ProjectionFrustum_Statics::NewProp_Top = { "Top", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectionMatrixToolBPLibrary_eventProjectionFrustum_Parms, Top), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProjectionMatrixToolBPLibrary_ProjectionFrustum_Statics::NewProp_Near = { "Near", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectionMatrixToolBPLibrary_eventProjectionFrustum_Parms, Near), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProjectionMatrixToolBPLibrary_ProjectionFrustum_Statics::NewProp_Far = { "Far", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectionMatrixToolBPLibrary_eventProjectionFrustum_Parms, Far), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectionMatrixToolBPLibrary_ProjectionFrustum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectionMatrixToolBPLibrary_eventProjectionFrustum_Parms, ReturnValue), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectionMatrixToolBPLibrary_ProjectionFrustum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectionMatrixToolBPLibrary_ProjectionFrustum_Statics::NewProp_Left,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectionMatrixToolBPLibrary_ProjectionFrustum_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectionMatrixToolBPLibrary_ProjectionFrustum_Statics::NewProp_Bottom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectionMatrixToolBPLibrary_ProjectionFrustum_Statics::NewProp_Top,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectionMatrixToolBPLibrary_ProjectionFrustum_Statics::NewProp_Near,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectionMatrixToolBPLibrary_ProjectionFrustum_Statics::NewProp_Far,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectionMatrixToolBPLibrary_ProjectionFrustum_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectionMatrixToolBPLibrary_ProjectionFrustum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectionMatrixToolBPLibrary_ProjectionFrustum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectionMatrixToolBPLibrary, nullptr, "ProjectionFrustum", nullptr, nullptr, Z_Construct_UFunction_UProjectionMatrixToolBPLibrary_ProjectionFrustum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectionMatrixToolBPLibrary_ProjectionFrustum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectionMatrixToolBPLibrary_ProjectionFrustum_Statics::ProjectionMatrixToolBPLibrary_eventProjectionFrustum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectionMatrixToolBPLibrary_ProjectionFrustum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectionMatrixToolBPLibrary_ProjectionFrustum_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectionMatrixToolBPLibrary_ProjectionFrustum_Statics::ProjectionMatrixToolBPLibrary_eventProjectionFrustum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectionMatrixToolBPLibrary_ProjectionFrustum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectionMatrixToolBPLibrary_ProjectionFrustum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectionMatrixToolBPLibrary::execProjectionFrustum)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Left);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Right);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Bottom);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Top);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Near);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Far);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMatrix*)Z_Param__Result=UProjectionMatrixToolBPLibrary::ProjectionFrustum(Z_Param_Left,Z_Param_Right,Z_Param_Bottom,Z_Param_Top,Z_Param_Near,Z_Param_Far);
	P_NATIVE_END;
}
// End Class UProjectionMatrixToolBPLibrary Function ProjectionFrustum

// Begin Class UProjectionMatrixToolBPLibrary
void UProjectionMatrixToolBPLibrary::StaticRegisterNativesUProjectionMatrixToolBPLibrary()
{
	UClass* Class = UProjectionMatrixToolBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ProjectionFrustum", &UProjectionMatrixToolBPLibrary::execProjectionFrustum },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProjectionMatrixToolBPLibrary);
UClass* Z_Construct_UClass_UProjectionMatrixToolBPLibrary_NoRegister()
{
	return UProjectionMatrixToolBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UProjectionMatrixToolBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
#endif
		{ "IncludePath", "ProjectionMatrixToolBPLibrary.h" },
		{ "ModuleRelativePath", "Public/ProjectionMatrixToolBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UProjectionMatrixToolBPLibrary_ProjectionFrustum, "ProjectionFrustum" }, // 762472812
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectionMatrixToolBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UProjectionMatrixToolBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectionMatrixTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectionMatrixToolBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectionMatrixToolBPLibrary_Statics::ClassParams = {
	&UProjectionMatrixToolBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectionMatrixToolBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UProjectionMatrixToolBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UProjectionMatrixToolBPLibrary()
{
	if (!Z_Registration_Info_UClass_UProjectionMatrixToolBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectionMatrixToolBPLibrary.OuterSingleton, Z_Construct_UClass_UProjectionMatrixToolBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UProjectionMatrixToolBPLibrary.OuterSingleton;
}
template<> PROJECTIONMATRIXTOOL_API UClass* StaticClass<UProjectionMatrixToolBPLibrary>()
{
	return UProjectionMatrixToolBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectionMatrixToolBPLibrary);
UProjectionMatrixToolBPLibrary::~UProjectionMatrixToolBPLibrary() {}
// End Class UProjectionMatrixToolBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_TST2025_Plugins_ProjectionMatrixTool_Source_ProjectionMatrixTool_Public_ProjectionMatrixToolBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UProjectionMatrixToolBPLibrary, UProjectionMatrixToolBPLibrary::StaticClass, TEXT("UProjectionMatrixToolBPLibrary"), &Z_Registration_Info_UClass_UProjectionMatrixToolBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectionMatrixToolBPLibrary), 1255148761U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TST2025_Plugins_ProjectionMatrixTool_Source_ProjectionMatrixTool_Public_ProjectionMatrixToolBPLibrary_h_1332842471(TEXT("/Script/ProjectionMatrixTool"),
	Z_CompiledInDeferFile_FID_TST2025_Plugins_ProjectionMatrixTool_Source_ProjectionMatrixTool_Public_ProjectionMatrixToolBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TST2025_Plugins_ProjectionMatrixTool_Source_ProjectionMatrixTool_Public_ProjectionMatrixToolBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
