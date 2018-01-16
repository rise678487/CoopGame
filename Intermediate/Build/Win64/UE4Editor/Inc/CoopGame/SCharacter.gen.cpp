// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SCharacter.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSCharacter() {}
// Cross Module References
	COOPGAME_API UFunction* Z_Construct_UFunction_ASCharacter_MoveForward();
	COOPGAME_API UClass* Z_Construct_UClass_ASCharacter();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASCharacter_MoveRight();
	COOPGAME_API UClass* Z_Construct_UClass_ASCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void ASCharacter::StaticRegisterNativesASCharacter()
	{
		UClass* Class = ASCharacter::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "MoveForward", (Native)&ASCharacter::execMoveForward },
			{ "MoveRight", (Native)&ASCharacter::execMoveRight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ASCharacter_MoveForward()
	{
		struct SCharacter_eventMoveForward_Parms
		{
			float value;
		};
		UObject* Outer = Z_Construct_UClass_ASCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MoveForward"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00080401, 65535, sizeof(SCharacter_eventMoveForward_Parms));
			UProperty* NewProp_value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(value, SCharacter_eventMoveForward_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASCharacter_MoveRight()
	{
		struct SCharacter_eventMoveRight_Parms
		{
			float value;
		};
		UObject* Outer = Z_Construct_UClass_ASCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MoveRight"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00080401, 65535, sizeof(SCharacter_eventMoveRight_Parms));
			UProperty* NewProp_value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(value, SCharacter_eventMoveRight_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASCharacter_NoRegister()
	{
		return ASCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_ASCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_CoopGame();
			OuterClass = ASCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ASCharacter_MoveForward());
				OuterClass->LinkChild(Z_Construct_UFunction_ASCharacter_MoveRight());

				UProperty* NewProp_CameraComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CameraComp, ASCharacter), 0x00100000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASCharacter_MoveForward(), "MoveForward"); // 607810071
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASCharacter_MoveRight(), "MoveRight"); // 698108187
				static TCppClassTypeInfo<TCppClassTypeTraits<ASCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SCharacter.h"));
				MetaData->SetValue(NewProp_CameraComp, TEXT("Category"), TEXT("Component"));
				MetaData->SetValue(NewProp_CameraComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraComp, TEXT("ModuleRelativePath"), TEXT("Public/SCharacter.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASCharacter, 1801125641);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASCharacter(Z_Construct_UClass_ASCharacter, &ASCharacter::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
