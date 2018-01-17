// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPGAME_SCharacter_generated_h
#error "SCharacter.generated.h already included, missing '#pragma once' in SCharacter.h"
#endif
#define COOPGAME_SCharacter_generated_h

#define CoopGame_Source_CoopGame_Public_SCharacter_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execJumpEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->JumpEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJumpStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->JumpStart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndCrouch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->EndCrouch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginCrouch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BeginCrouch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveRight(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveForward(Z_Param_value); \
		P_NATIVE_END; \
	}


#define CoopGame_Source_CoopGame_Public_SCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execJumpEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->JumpEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJumpStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->JumpStart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndCrouch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->EndCrouch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginCrouch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BeginCrouch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveRight(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveForward(Z_Param_value); \
		P_NATIVE_END; \
	}


#define CoopGame_Source_CoopGame_Public_SCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend COOPGAME_API class UClass* Z_Construct_UClass_ASCharacter(); \
public: \
	DECLARE_CLASS(ASCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CoopGame_Source_CoopGame_Public_SCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend COOPGAME_API class UClass* Z_Construct_UClass_ASCharacter(); \
public: \
	DECLARE_CLASS(ASCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CoopGame_Source_CoopGame_Public_SCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public:


#define CoopGame_Source_CoopGame_Public_SCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASCharacter)


#define CoopGame_Source_CoopGame_Public_SCharacter_h_15_PRIVATE_PROPERTY_OFFSET
#define CoopGame_Source_CoopGame_Public_SCharacter_h_12_PROLOG
#define CoopGame_Source_CoopGame_Public_SCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SCharacter_h_15_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_SCharacter_h_15_INCLASS \
	CoopGame_Source_CoopGame_Public_SCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_SCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SCharacter_h_15_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_SCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
