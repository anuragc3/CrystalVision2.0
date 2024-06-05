// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CV2/HKLtoXYZvector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHKLtoXYZvector() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CV2_API UClass* Z_Construct_UClass_UHKLtoXYZvector();
	CV2_API UClass* Z_Construct_UClass_UHKLtoXYZvector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CV2();
// End Cross Module References
	DEFINE_FUNCTION(UHKLtoXYZvector::execHKLtoXYZ)
	{
		P_GET_TARRAY(int32,Z_Param_HKL);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=UHKLtoXYZvector::HKLtoXYZ(Z_Param_HKL);
		P_NATIVE_END;
	}
	void UHKLtoXYZvector::StaticRegisterNativesUHKLtoXYZvector()
	{
		UClass* Class = UHKLtoXYZvector::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HKLtoXYZ", &UHKLtoXYZvector::execHKLtoXYZ },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHKLtoXYZvector_HKLtoXYZ_Statics
	{
		struct HKLtoXYZvector_eventHKLtoXYZ_Parms
		{
			TArray<int32> HKL;
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_HKL_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HKL_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HKL;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHKLtoXYZvector_HKLtoXYZ_Statics::NewProp_HKL_Inner = { "HKL", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHKLtoXYZvector_HKLtoXYZ_Statics::NewProp_HKL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHKLtoXYZvector_HKLtoXYZ_Statics::NewProp_HKL = { "HKL", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HKLtoXYZvector_eventHKLtoXYZ_Parms, HKL), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHKLtoXYZvector_HKLtoXYZ_Statics::NewProp_HKL_MetaData), Z_Construct_UFunction_UHKLtoXYZvector_HKLtoXYZ_Statics::NewProp_HKL_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHKLtoXYZvector_HKLtoXYZ_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHKLtoXYZvector_HKLtoXYZ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HKLtoXYZvector_eventHKLtoXYZ_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHKLtoXYZvector_HKLtoXYZ_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHKLtoXYZvector_HKLtoXYZ_Statics::NewProp_HKL_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHKLtoXYZvector_HKLtoXYZ_Statics::NewProp_HKL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHKLtoXYZvector_HKLtoXYZ_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHKLtoXYZvector_HKLtoXYZ_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHKLtoXYZvector_HKLtoXYZ_Statics::Function_MetaDataParams[] = {
		{ "Category", "CV2" },
		{ "ModuleRelativePath", "HKLtoXYZvector.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHKLtoXYZvector_HKLtoXYZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHKLtoXYZvector, nullptr, "HKLtoXYZ", nullptr, nullptr, Z_Construct_UFunction_UHKLtoXYZvector_HKLtoXYZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHKLtoXYZvector_HKLtoXYZ_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHKLtoXYZvector_HKLtoXYZ_Statics::HKLtoXYZvector_eventHKLtoXYZ_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHKLtoXYZvector_HKLtoXYZ_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHKLtoXYZvector_HKLtoXYZ_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHKLtoXYZvector_HKLtoXYZ_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHKLtoXYZvector_HKLtoXYZ_Statics::HKLtoXYZvector_eventHKLtoXYZ_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHKLtoXYZvector_HKLtoXYZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHKLtoXYZvector_HKLtoXYZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHKLtoXYZvector);
	UClass* Z_Construct_UClass_UHKLtoXYZvector_NoRegister()
	{
		return UHKLtoXYZvector::StaticClass();
	}
	struct Z_Construct_UClass_UHKLtoXYZvector_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHKLtoXYZvector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CV2,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHKLtoXYZvector_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UHKLtoXYZvector_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHKLtoXYZvector_HKLtoXYZ, "HKLtoXYZ" }, // 3912971612
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHKLtoXYZvector_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHKLtoXYZvector_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HKLtoXYZvector.h" },
		{ "ModuleRelativePath", "HKLtoXYZvector.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHKLtoXYZvector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHKLtoXYZvector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHKLtoXYZvector_Statics::ClassParams = {
		&UHKLtoXYZvector::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHKLtoXYZvector_Statics::Class_MetaDataParams), Z_Construct_UClass_UHKLtoXYZvector_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UHKLtoXYZvector()
	{
		if (!Z_Registration_Info_UClass_UHKLtoXYZvector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHKLtoXYZvector.OuterSingleton, Z_Construct_UClass_UHKLtoXYZvector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHKLtoXYZvector.OuterSingleton;
	}
	template<> CV2_API UClass* StaticClass<UHKLtoXYZvector>()
	{
		return UHKLtoXYZvector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHKLtoXYZvector);
	UHKLtoXYZvector::~UHKLtoXYZvector() {}
	struct Z_CompiledInDeferFile_FID_Users_kfrod_Desktop_CV2_Source_CV2_HKLtoXYZvector_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kfrod_Desktop_CV2_Source_CV2_HKLtoXYZvector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHKLtoXYZvector, UHKLtoXYZvector::StaticClass, TEXT("UHKLtoXYZvector"), &Z_Registration_Info_UClass_UHKLtoXYZvector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHKLtoXYZvector), 1142885342U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kfrod_Desktop_CV2_Source_CV2_HKLtoXYZvector_h_1379889563(TEXT("/Script/CV2"),
		Z_CompiledInDeferFile_FID_Users_kfrod_Desktop_CV2_Source_CV2_HKLtoXYZvector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kfrod_Desktop_CV2_Source_CV2_HKLtoXYZvector_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
