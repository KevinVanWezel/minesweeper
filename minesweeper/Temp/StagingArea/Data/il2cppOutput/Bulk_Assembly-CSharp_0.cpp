#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// GameManger
struct GameManger_t219135261;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// Grid
struct Grid_t1081586032;
// MineChance
struct MineChance_t714285555;
// System.Boolean[0...,0...]
struct BooleanU5B0___U2C0___U5D_t2897418193;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3235626157;
// UnityEngine.Sprite
struct Sprite_t280657092;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Object
struct Object_t631007953;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t3528271667;
// MineChance[0...,0...]
struct MineChanceU5B0___U2C0___U5D_t1118294243;
// System.Void
struct Void_t1185182177;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t1677636661;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t1059417452;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t2581906349;

extern RuntimeClass* Grid_t1081586032_il2cpp_TypeInfo_var;
extern const uint32_t Grid_uncoverMines_m2785931130_MetadataUsageId;
extern const uint32_t Grid_mineAt_m4079956871_MetadataUsageId;
extern const uint32_t Grid_adjacentMines_m3193650313_MetadataUsageId;
extern const uint32_t Grid_FFuncover_m3894068437_MetadataUsageId;
extern const uint32_t Grid_isFinished_m421222452_MetadataUsageId;
extern RuntimeClass* MineChanceU5B0___U2C0___U5D_t1118294243_il2cpp_TypeInfo_var;
extern const uint32_t Grid__cctor_m1755833324_MetadataUsageId;
extern const uint32_t MineChance_Start_m2792068664_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var;
extern const uint32_t MineChance_loadTexture_m1059157204_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1948333211;
extern const uint32_t MineChance_isCoverd_m2924204771_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern RuntimeClass* BooleanU5B0___U2C0___U5D_t2897418193_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4141783935;
extern String_t* _stringLiteral917515297;
extern const uint32_t MineChance_OnMouseOver_m2069981063_MetadataUsageId;

struct MineChanceU5B0___U2C0___U5D_t1118294243;
struct BooleanU5B0___U2C0___U5D_t2897418193;
struct SpriteU5BU5D_t2581906349;


#ifndef U3CMODULEU3E_T692745536_H
#define U3CMODULEU3E_T692745536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745536 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745536_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef GRID_T1081586032_H
#define GRID_T1081586032_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grid
struct  Grid_t1081586032  : public RuntimeObject
{
public:

public:
};

struct Grid_t1081586032_StaticFields
{
public:
	// System.Int32 Grid::w
	int32_t ___w_0;
	// System.Int32 Grid::h
	int32_t ___h_1;
	// MineChance[0...,0...] Grid::elements
	MineChanceU5B0___U2C0___U5D_t1118294243* ___elements_2;

public:
	inline static int32_t get_offset_of_w_0() { return static_cast<int32_t>(offsetof(Grid_t1081586032_StaticFields, ___w_0)); }
	inline int32_t get_w_0() const { return ___w_0; }
	inline int32_t* get_address_of_w_0() { return &___w_0; }
	inline void set_w_0(int32_t value)
	{
		___w_0 = value;
	}

	inline static int32_t get_offset_of_h_1() { return static_cast<int32_t>(offsetof(Grid_t1081586032_StaticFields, ___h_1)); }
	inline int32_t get_h_1() const { return ___h_1; }
	inline int32_t* get_address_of_h_1() { return &___h_1; }
	inline void set_h_1(int32_t value)
	{
		___h_1 = value;
	}

	inline static int32_t get_offset_of_elements_2() { return static_cast<int32_t>(offsetof(Grid_t1081586032_StaticFields, ___elements_2)); }
	inline MineChanceU5B0___U2C0___U5D_t1118294243* get_elements_2() const { return ___elements_2; }
	inline MineChanceU5B0___U2C0___U5D_t1118294243** get_address_of_elements_2() { return &___elements_2; }
	inline void set_elements_2(MineChanceU5B0___U2C0___U5D_t1118294243* value)
	{
		___elements_2 = value;
		Il2CppCodeGenWriteBarrier((&___elements_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRID_T1081586032_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_0;
	// System.Single UnityEngine.Vector3::y
	float ___y_1;
	// System.Single UnityEngine.Vector3::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_3;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_12;

public:
	inline static int32_t get_offset_of_zeroVector_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_3)); }
	inline Vector3_t3722313464  get_zeroVector_3() const { return ___zeroVector_3; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_3() { return &___zeroVector_3; }
	inline void set_zeroVector_3(Vector3_t3722313464  value)
	{
		___zeroVector_3 = value;
	}

	inline static int32_t get_offset_of_oneVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_4)); }
	inline Vector3_t3722313464  get_oneVector_4() const { return ___oneVector_4; }
	inline Vector3_t3722313464 * get_address_of_oneVector_4() { return &___oneVector_4; }
	inline void set_oneVector_4(Vector3_t3722313464  value)
	{
		___oneVector_4 = value;
	}

	inline static int32_t get_offset_of_upVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_5)); }
	inline Vector3_t3722313464  get_upVector_5() const { return ___upVector_5; }
	inline Vector3_t3722313464 * get_address_of_upVector_5() { return &___upVector_5; }
	inline void set_upVector_5(Vector3_t3722313464  value)
	{
		___upVector_5 = value;
	}

	inline static int32_t get_offset_of_downVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_6)); }
	inline Vector3_t3722313464  get_downVector_6() const { return ___downVector_6; }
	inline Vector3_t3722313464 * get_address_of_downVector_6() { return &___downVector_6; }
	inline void set_downVector_6(Vector3_t3722313464  value)
	{
		___downVector_6 = value;
	}

	inline static int32_t get_offset_of_leftVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_7)); }
	inline Vector3_t3722313464  get_leftVector_7() const { return ___leftVector_7; }
	inline Vector3_t3722313464 * get_address_of_leftVector_7() { return &___leftVector_7; }
	inline void set_leftVector_7(Vector3_t3722313464  value)
	{
		___leftVector_7 = value;
	}

	inline static int32_t get_offset_of_rightVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_8)); }
	inline Vector3_t3722313464  get_rightVector_8() const { return ___rightVector_8; }
	inline Vector3_t3722313464 * get_address_of_rightVector_8() { return &___rightVector_8; }
	inline void set_rightVector_8(Vector3_t3722313464  value)
	{
		___rightVector_8 = value;
	}

	inline static int32_t get_offset_of_forwardVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_9)); }
	inline Vector3_t3722313464  get_forwardVector_9() const { return ___forwardVector_9; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_9() { return &___forwardVector_9; }
	inline void set_forwardVector_9(Vector3_t3722313464  value)
	{
		___forwardVector_9 = value;
	}

	inline static int32_t get_offset_of_backVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_10)); }
	inline Vector3_t3722313464  get_backVector_10() const { return ___backVector_10; }
	inline Vector3_t3722313464 * get_address_of_backVector_10() { return &___backVector_10; }
	inline void set_backVector_10(Vector3_t3722313464  value)
	{
		___backVector_10 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_11)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_11() const { return ___positiveInfinityVector_11; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_11() { return &___positiveInfinityVector_11; }
	inline void set_positiveInfinityVector_11(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_11 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_12)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_12() const { return ___negativeInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_12() { return &___negativeInfinityVector_12; }
	inline void set_negativeInfinityVector_12(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef SPRITE_T280657092_H
#define SPRITE_T280657092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprite
struct  Sprite_t280657092  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITE_T280657092_H
#ifndef AUDIOCLIP_T3680889665_H
#define AUDIOCLIP_T3680889665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t3680889665  : public Object_t631007953
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t1677636661 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t1059417452 * ___m_PCMSetPositionCallback_3;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_2() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMReaderCallback_2)); }
	inline PCMReaderCallback_t1677636661 * get_m_PCMReaderCallback_2() const { return ___m_PCMReaderCallback_2; }
	inline PCMReaderCallback_t1677636661 ** get_address_of_m_PCMReaderCallback_2() { return &___m_PCMReaderCallback_2; }
	inline void set_m_PCMReaderCallback_2(PCMReaderCallback_t1677636661 * value)
	{
		___m_PCMReaderCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_2), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_3() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMSetPositionCallback_3)); }
	inline PCMSetPositionCallback_t1059417452 * get_m_PCMSetPositionCallback_3() const { return ___m_PCMSetPositionCallback_3; }
	inline PCMSetPositionCallback_t1059417452 ** get_address_of_m_PCMSetPositionCallback_3() { return &___m_PCMSetPositionCallback_3; }
	inline void set_m_PCMSetPositionCallback_3(PCMSetPositionCallback_t1059417452 * value)
	{
		___m_PCMSetPositionCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T3680889665_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef AUDIOSOURCE_T3935305588_H
#define AUDIOSOURCE_T3935305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t3935305588  : public Behaviour_t1437897464
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t3064908834 * ___spatializerExtension_2;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t3064908834 * ___ambisonicExtension_3;

public:
	inline static int32_t get_offset_of_spatializerExtension_2() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___spatializerExtension_2)); }
	inline AudioSourceExtension_t3064908834 * get_spatializerExtension_2() const { return ___spatializerExtension_2; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_spatializerExtension_2() { return &___spatializerExtension_2; }
	inline void set_spatializerExtension_2(AudioSourceExtension_t3064908834 * value)
	{
		___spatializerExtension_2 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_2), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_3() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___ambisonicExtension_3)); }
	inline AudioSourceExtension_t3064908834 * get_ambisonicExtension_3() const { return ___ambisonicExtension_3; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_ambisonicExtension_3() { return &___ambisonicExtension_3; }
	inline void set_ambisonicExtension_3(AudioSourceExtension_t3064908834 * value)
	{
		___ambisonicExtension_3 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T3935305588_H
#ifndef SPRITERENDERER_T3235626157_H
#define SPRITERENDERER_T3235626157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3235626157  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_T3235626157_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef GAMEMANGER_T219135261_H
#define GAMEMANGER_T219135261_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManger
struct  GameManger_t219135261  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean GameManger::isMineClicked
	bool ___isMineClicked_2;

public:
	inline static int32_t get_offset_of_isMineClicked_2() { return static_cast<int32_t>(offsetof(GameManger_t219135261, ___isMineClicked_2)); }
	inline bool get_isMineClicked_2() const { return ___isMineClicked_2; }
	inline bool* get_address_of_isMineClicked_2() { return &___isMineClicked_2; }
	inline void set_isMineClicked_2(bool value)
	{
		___isMineClicked_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEMANGER_T219135261_H
#ifndef MINECHANCE_T714285555_H
#define MINECHANCE_T714285555_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MineChance
struct  MineChance_t714285555  : public MonoBehaviour_t3962482529
{
public:
	// GameManger MineChance::_GameManger
	GameManger_t219135261 * ____GameManger_2;
	// UnityEngine.AudioClip MineChance::tripped
	AudioClip_t3680889665 * ___tripped_3;
	// UnityEngine.AudioSource MineChance::tripping
	AudioSource_t3935305588 * ___tripping_4;
	// System.Boolean MineChance::mine
	bool ___mine_5;
	// System.Boolean MineChance::leftMouseClicked
	bool ___leftMouseClicked_6;
	// UnityEngine.Sprite[] MineChance::emptyTextures
	SpriteU5BU5D_t2581906349* ___emptyTextures_7;
	// UnityEngine.Sprite MineChance::mineTexture
	Sprite_t280657092 * ___mineTexture_8;
	// UnityEngine.Sprite MineChance::flagTexture
	Sprite_t280657092 * ___flagTexture_9;

public:
	inline static int32_t get_offset_of__GameManger_2() { return static_cast<int32_t>(offsetof(MineChance_t714285555, ____GameManger_2)); }
	inline GameManger_t219135261 * get__GameManger_2() const { return ____GameManger_2; }
	inline GameManger_t219135261 ** get_address_of__GameManger_2() { return &____GameManger_2; }
	inline void set__GameManger_2(GameManger_t219135261 * value)
	{
		____GameManger_2 = value;
		Il2CppCodeGenWriteBarrier((&____GameManger_2), value);
	}

	inline static int32_t get_offset_of_tripped_3() { return static_cast<int32_t>(offsetof(MineChance_t714285555, ___tripped_3)); }
	inline AudioClip_t3680889665 * get_tripped_3() const { return ___tripped_3; }
	inline AudioClip_t3680889665 ** get_address_of_tripped_3() { return &___tripped_3; }
	inline void set_tripped_3(AudioClip_t3680889665 * value)
	{
		___tripped_3 = value;
		Il2CppCodeGenWriteBarrier((&___tripped_3), value);
	}

	inline static int32_t get_offset_of_tripping_4() { return static_cast<int32_t>(offsetof(MineChance_t714285555, ___tripping_4)); }
	inline AudioSource_t3935305588 * get_tripping_4() const { return ___tripping_4; }
	inline AudioSource_t3935305588 ** get_address_of_tripping_4() { return &___tripping_4; }
	inline void set_tripping_4(AudioSource_t3935305588 * value)
	{
		___tripping_4 = value;
		Il2CppCodeGenWriteBarrier((&___tripping_4), value);
	}

	inline static int32_t get_offset_of_mine_5() { return static_cast<int32_t>(offsetof(MineChance_t714285555, ___mine_5)); }
	inline bool get_mine_5() const { return ___mine_5; }
	inline bool* get_address_of_mine_5() { return &___mine_5; }
	inline void set_mine_5(bool value)
	{
		___mine_5 = value;
	}

	inline static int32_t get_offset_of_leftMouseClicked_6() { return static_cast<int32_t>(offsetof(MineChance_t714285555, ___leftMouseClicked_6)); }
	inline bool get_leftMouseClicked_6() const { return ___leftMouseClicked_6; }
	inline bool* get_address_of_leftMouseClicked_6() { return &___leftMouseClicked_6; }
	inline void set_leftMouseClicked_6(bool value)
	{
		___leftMouseClicked_6 = value;
	}

	inline static int32_t get_offset_of_emptyTextures_7() { return static_cast<int32_t>(offsetof(MineChance_t714285555, ___emptyTextures_7)); }
	inline SpriteU5BU5D_t2581906349* get_emptyTextures_7() const { return ___emptyTextures_7; }
	inline SpriteU5BU5D_t2581906349** get_address_of_emptyTextures_7() { return &___emptyTextures_7; }
	inline void set_emptyTextures_7(SpriteU5BU5D_t2581906349* value)
	{
		___emptyTextures_7 = value;
		Il2CppCodeGenWriteBarrier((&___emptyTextures_7), value);
	}

	inline static int32_t get_offset_of_mineTexture_8() { return static_cast<int32_t>(offsetof(MineChance_t714285555, ___mineTexture_8)); }
	inline Sprite_t280657092 * get_mineTexture_8() const { return ___mineTexture_8; }
	inline Sprite_t280657092 ** get_address_of_mineTexture_8() { return &___mineTexture_8; }
	inline void set_mineTexture_8(Sprite_t280657092 * value)
	{
		___mineTexture_8 = value;
		Il2CppCodeGenWriteBarrier((&___mineTexture_8), value);
	}

	inline static int32_t get_offset_of_flagTexture_9() { return static_cast<int32_t>(offsetof(MineChance_t714285555, ___flagTexture_9)); }
	inline Sprite_t280657092 * get_flagTexture_9() const { return ___flagTexture_9; }
	inline Sprite_t280657092 ** get_address_of_flagTexture_9() { return &___flagTexture_9; }
	inline void set_flagTexture_9(Sprite_t280657092 * value)
	{
		___flagTexture_9 = value;
		Il2CppCodeGenWriteBarrier((&___flagTexture_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MINECHANCE_T714285555_H
// MineChance[0...,0...]
struct MineChanceU5B0___U2C0___U5D_t1118294243  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MineChance_t714285555 * m_Items[1];

public:
	inline MineChance_t714285555 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MineChance_t714285555 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MineChance_t714285555 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MineChance_t714285555 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MineChance_t714285555 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MineChance_t714285555 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MineChance_t714285555 * GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline MineChance_t714285555 ** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, MineChance_t714285555 * value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MineChance_t714285555 * GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline MineChance_t714285555 ** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, MineChance_t714285555 * value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Boolean[0...,0...]
struct BooleanU5B0___U2C0___U5D_t2897418193  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
	inline bool GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, bool value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, bool value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t2581906349  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Sprite_t280657092 * m_Items[1];

public:
	inline Sprite_t280657092 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_t280657092 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_t280657092 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Sprite_t280657092 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_t280657092 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_t280657092 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetLength(System.Int32)
extern "C"  int32_t Array_GetLength_m2178203778 (RuntimeArray * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MineChance::loadTexture(System.Int32)
extern "C"  void MineChance_loadTexture_m1059157204 (MineChance_t714285555 * __this, int32_t ___adjacentCount0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Grid::mineAt(System.Int32,System.Int32)
extern "C"  bool Grid_mineAt_m4079956871 (RuntimeObject * __this /* static, unused */, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Grid::adjacentMines(System.Int32,System.Int32)
extern "C"  int32_t Grid_adjacentMines_m3193650313 (RuntimeObject * __this /* static, unused */, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Grid::FFuncover(System.Int32,System.Int32,System.Boolean[0...,0...])
extern "C"  void Grid_FFuncover_m3894068437 (RuntimeObject * __this /* static, unused */, int32_t ___x0, int32_t ___y1, BooleanU5B0___U2C0___U5D_t2897418193* ___visited2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean MineChance::isCoverd()
extern "C"  bool MineChance_isCoverd_m2924204771 (MineChance_t714285555 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Random::get_value()
extern "C"  float Random_get_value_m3115885645 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C"  void AudioSource_set_clip_m31653938 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
#define Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(__this, method) ((  SpriteRenderer_t3235626157 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
extern "C"  void SpriteRenderer_set_sprite_m1286893786 (SpriteRenderer_t3235626157 * __this, Sprite_t280657092 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite UnityEngine.SpriteRenderer::get_sprite()
extern "C"  Sprite_t280657092 * SpriteRenderer_get_sprite_m663386871 (SpriteRenderer_t3235626157 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
extern "C"  Texture2D_t3840446185 * Sprite_get_texture_m3976398399 (Sprite_t280657092 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::get_name()
extern "C"  String_t* Object_get_name_m4211327027 (Object_t631007953 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern "C"  bool Input_GetMouseButton_m513753021 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameManger::reciever()
extern "C"  void GameManger_reciever_m722376700 (GameManger_t219135261 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Grid::uncoverMines()
extern "C"  void Grid_uncoverMines_m2785931130 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
extern "C"  void MonoBehaviour_print_m330341231 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
extern "C"  void AudioSource_Play_m48294159 (AudioSource_t3935305588 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Grid::isFinished()
extern "C"  bool Grid_isFinished_m421222452 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C"  bool Input_GetMouseButtonDown_m2081676745 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManger::.ctor()
extern "C"  void GameManger__ctor_m3166073803 (GameManger_t219135261 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManger::reciever()
extern "C"  void GameManger_reciever_m722376700 (GameManger_t219135261 * __this, const RuntimeMethod* method)
{
	{
		__this->set_isMineClicked_2((bool)1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Grid::.ctor()
extern "C"  void Grid__ctor_m209885941 (Grid_t1081586032 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Grid::uncoverMines()
extern "C"  void Grid_uncoverMines_m2785931130 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Grid_uncoverMines_m2785931130_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MineChance_t714285555 * V_0 = NULL;
	MineChanceU5B0___U2C0___U5D_t1118294243* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		MineChanceU5B0___U2C0___U5D_t1118294243* L_0 = ((Grid_t1081586032_StaticFields*)il2cpp_codegen_static_fields_for(Grid_t1081586032_il2cpp_TypeInfo_var))->get_elements_2();
		V_1 = (MineChanceU5B0___U2C0___U5D_t1118294243*)L_0;
		MineChanceU5B0___U2C0___U5D_t1118294243* L_1 = V_1;
		int32_t L_2 = Array_GetLength_m2178203778((RuntimeArray *)(RuntimeArray *)L_1, 0, /*hidden argument*/NULL);
		V_2 = L_2;
		MineChanceU5B0___U2C0___U5D_t1118294243* L_3 = V_1;
		int32_t L_4 = Array_GetLength_m2178203778((RuntimeArray *)(RuntimeArray *)L_3, 1, /*hidden argument*/NULL);
		V_3 = L_4;
		V_4 = 0;
		goto IL_0057;
	}

IL_001e:
	{
		V_5 = 0;
		goto IL_0049;
	}

IL_0026:
	{
		MineChanceU5B0___U2C0___U5D_t1118294243* L_5 = V_1;
		int32_t L_6 = V_4;
		int32_t L_7 = V_5;
		MineChance_t714285555 * L_8 = (L_5)->GetAtUnchecked(L_6, L_7);
		V_0 = L_8;
		MineChance_t714285555 * L_9 = V_0;
		bool L_10 = L_9->get_mine_5();
		if (!L_10)
		{
			goto IL_0043;
		}
	}
	{
		MineChance_t714285555 * L_11 = V_0;
		MineChance_loadTexture_m1059157204(L_11, 0, /*hidden argument*/NULL);
	}

IL_0043:
	{
		int32_t L_12 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0049:
	{
		int32_t L_13 = V_5;
		int32_t L_14 = V_3;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_15 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0057:
	{
		int32_t L_16 = V_4;
		int32_t L_17 = V_2;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}
}
// System.Boolean Grid::mineAt(System.Int32,System.Int32)
extern "C"  bool Grid_mineAt_m4079956871 (RuntimeObject * __this /* static, unused */, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Grid_mineAt_m4079956871_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___x0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_1 = ___y1;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_2 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		int32_t L_3 = ((Grid_t1081586032_StaticFields*)il2cpp_codegen_static_fields_for(Grid_t1081586032_il2cpp_TypeInfo_var))->get_w_0();
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_4 = ___y1;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		int32_t L_5 = ((Grid_t1081586032_StaticFields*)il2cpp_codegen_static_fields_for(Grid_t1081586032_il2cpp_TypeInfo_var))->get_h_1();
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0036;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		MineChanceU5B0___U2C0___U5D_t1118294243* L_6 = ((Grid_t1081586032_StaticFields*)il2cpp_codegen_static_fields_for(Grid_t1081586032_il2cpp_TypeInfo_var))->get_elements_2();
		int32_t L_7 = ___x0;
		int32_t L_8 = ___y1;
		MineChance_t714285555 * L_9 = ((MineChanceU5B0___U2C0___U5D_t1118294243*)(MineChanceU5B0___U2C0___U5D_t1118294243*)L_6)->GetAtUnchecked(L_7, L_8);
		bool L_10 = L_9->get_mine_5();
		return L_10;
	}

IL_0036:
	{
		return (bool)0;
	}
}
// System.Int32 Grid::adjacentMines(System.Int32,System.Int32)
extern "C"  int32_t Grid_adjacentMines_m3193650313 (RuntimeObject * __this /* static, unused */, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Grid_adjacentMines_m3193650313_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		bool L_2 = Grid_mineAt_m4079956871(NULL /*static, unused*/, L_0, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0014:
	{
		int32_t L_4 = ___x0;
		int32_t L_5 = ___y1;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		bool L_6 = Grid_mineAt_m4079956871(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0028:
	{
		int32_t L_8 = ___x0;
		int32_t L_9 = ___y1;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		bool L_10 = Grid_mineAt_m4079956871(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)), L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_003a:
	{
		int32_t L_12 = ___x0;
		int32_t L_13 = ___y1;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		bool L_14 = Grid_mineAt_m4079956871(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)), /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_004e:
	{
		int32_t L_16 = ___x0;
		int32_t L_17 = ___y1;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		bool L_18 = Grid_mineAt_m4079956871(NULL /*static, unused*/, L_16, ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1)), /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0060:
	{
		int32_t L_20 = ___x0;
		int32_t L_21 = ___y1;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		bool L_22 = Grid_mineAt_m4079956871(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)), /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0074:
	{
		int32_t L_24 = ___x0;
		int32_t L_25 = ___y1;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		bool L_26 = Grid_mineAt_m4079956871(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1)), L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0086:
	{
		int32_t L_28 = ___x0;
		int32_t L_29 = ___y1;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		bool L_30 = Grid_mineAt_m4079956871(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1)), /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_31 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_009a:
	{
		int32_t L_32 = V_0;
		return L_32;
	}
}
// System.Void Grid::FFuncover(System.Int32,System.Int32,System.Boolean[0...,0...])
extern "C"  void Grid_FFuncover_m3894068437 (RuntimeObject * __this /* static, unused */, int32_t ___x0, int32_t ___y1, BooleanU5B0___U2C0___U5D_t2897418193* ___visited2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Grid_FFuncover_m3894068437_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___x0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_1 = ___y1;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_2 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		int32_t L_3 = ((Grid_t1081586032_StaticFields*)il2cpp_codegen_static_fields_for(Grid_t1081586032_il2cpp_TypeInfo_var))->get_w_0();
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_4 = ___y1;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		int32_t L_5 = ((Grid_t1081586032_StaticFields*)il2cpp_codegen_static_fields_for(Grid_t1081586032_il2cpp_TypeInfo_var))->get_h_1();
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0089;
		}
	}
	{
		BooleanU5B0___U2C0___U5D_t2897418193* L_6 = ___visited2;
		int32_t L_7 = ___x0;
		int32_t L_8 = ___y1;
		bool L_9 = (L_6)->GetAtUnchecked(L_7, L_8);
		if (!L_9)
		{
			goto IL_0032;
		}
	}
	{
		return;
	}

IL_0032:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		MineChanceU5B0___U2C0___U5D_t1118294243* L_10 = ((Grid_t1081586032_StaticFields*)il2cpp_codegen_static_fields_for(Grid_t1081586032_il2cpp_TypeInfo_var))->get_elements_2();
		int32_t L_11 = ___x0;
		int32_t L_12 = ___y1;
		MineChance_t714285555 * L_13 = ((MineChanceU5B0___U2C0___U5D_t1118294243*)(MineChanceU5B0___U2C0___U5D_t1118294243*)L_10)->GetAtUnchecked(L_11, L_12);
		int32_t L_14 = ___x0;
		int32_t L_15 = ___y1;
		int32_t L_16 = Grid_adjacentMines_m3193650313(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		MineChance_loadTexture_m1059157204(L_13, L_16, /*hidden argument*/NULL);
		int32_t L_17 = ___x0;
		int32_t L_18 = ___y1;
		int32_t L_19 = Grid_adjacentMines_m3193650313(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		return;
	}

IL_0058:
	{
		BooleanU5B0___U2C0___U5D_t2897418193* L_20 = ___visited2;
		int32_t L_21 = ___x0;
		int32_t L_22 = ___y1;
		(L_20)->SetAtUnchecked(L_21, L_22, (bool)1);
		int32_t L_23 = ___x0;
		int32_t L_24 = ___y1;
		BooleanU5B0___U2C0___U5D_t2897418193* L_25 = ___visited2;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		Grid_FFuncover_m3894068437(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1)), L_24, L_25, /*hidden argument*/NULL);
		int32_t L_26 = ___x0;
		int32_t L_27 = ___y1;
		BooleanU5B0___U2C0___U5D_t2897418193* L_28 = ___visited2;
		Grid_FFuncover_m3894068437(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1)), L_27, L_28, /*hidden argument*/NULL);
		int32_t L_29 = ___x0;
		int32_t L_30 = ___y1;
		BooleanU5B0___U2C0___U5D_t2897418193* L_31 = ___visited2;
		Grid_FFuncover_m3894068437(NULL /*static, unused*/, L_29, ((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)1)), L_31, /*hidden argument*/NULL);
		int32_t L_32 = ___x0;
		int32_t L_33 = ___y1;
		BooleanU5B0___U2C0___U5D_t2897418193* L_34 = ___visited2;
		Grid_FFuncover_m3894068437(NULL /*static, unused*/, L_32, ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1)), L_34, /*hidden argument*/NULL);
	}

IL_0089:
	{
		return;
	}
}
// System.Boolean Grid::isFinished()
extern "C"  bool Grid_isFinished_m421222452 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Grid_isFinished_m421222452_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MineChance_t714285555 * V_0 = NULL;
	MineChanceU5B0___U2C0___U5D_t1118294243* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		MineChanceU5B0___U2C0___U5D_t1118294243* L_0 = ((Grid_t1081586032_StaticFields*)il2cpp_codegen_static_fields_for(Grid_t1081586032_il2cpp_TypeInfo_var))->get_elements_2();
		V_1 = (MineChanceU5B0___U2C0___U5D_t1118294243*)L_0;
		MineChanceU5B0___U2C0___U5D_t1118294243* L_1 = V_1;
		int32_t L_2 = Array_GetLength_m2178203778((RuntimeArray *)(RuntimeArray *)L_1, 0, /*hidden argument*/NULL);
		V_2 = L_2;
		MineChanceU5B0___U2C0___U5D_t1118294243* L_3 = V_1;
		int32_t L_4 = Array_GetLength_m2178203778((RuntimeArray *)(RuntimeArray *)L_3, 1, /*hidden argument*/NULL);
		V_3 = L_4;
		V_4 = 0;
		goto IL_005d;
	}

IL_001e:
	{
		V_5 = 0;
		goto IL_004f;
	}

IL_0026:
	{
		MineChanceU5B0___U2C0___U5D_t1118294243* L_5 = V_1;
		int32_t L_6 = V_4;
		int32_t L_7 = V_5;
		MineChance_t714285555 * L_8 = (L_5)->GetAtUnchecked(L_6, L_7);
		V_0 = L_8;
		MineChance_t714285555 * L_9 = V_0;
		bool L_10 = MineChance_isCoverd_m2924204771(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0049;
		}
	}
	{
		MineChance_t714285555 * L_11 = V_0;
		bool L_12 = L_11->get_mine_5();
		if (L_12)
		{
			goto IL_0049;
		}
	}
	{
		return (bool)0;
	}

IL_0049:
	{
		int32_t L_13 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_004f:
	{
		int32_t L_14 = V_5;
		int32_t L_15 = V_3;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_16 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_005d:
	{
		int32_t L_17 = V_4;
		int32_t L_18 = V_2;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}
}
// System.Void Grid::.cctor()
extern "C"  void Grid__cctor_m1755833324 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Grid__cctor_m1755833324_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Grid_t1081586032_StaticFields*)il2cpp_codegen_static_fields_for(Grid_t1081586032_il2cpp_TypeInfo_var))->set_w_0(((int32_t)13));
		((Grid_t1081586032_StaticFields*)il2cpp_codegen_static_fields_for(Grid_t1081586032_il2cpp_TypeInfo_var))->set_h_1(((int32_t)9));
		int32_t L_0 = ((Grid_t1081586032_StaticFields*)il2cpp_codegen_static_fields_for(Grid_t1081586032_il2cpp_TypeInfo_var))->get_w_0();
		int32_t L_1 = ((Grid_t1081586032_StaticFields*)il2cpp_codegen_static_fields_for(Grid_t1081586032_il2cpp_TypeInfo_var))->get_h_1();
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)L_0, (il2cpp_array_size_t)L_1 };
		MineChanceU5B0___U2C0___U5D_t1118294243* L_2 = (MineChanceU5B0___U2C0___U5D_t1118294243*)GenArrayNew(MineChanceU5B0___U2C0___U5D_t1118294243_il2cpp_TypeInfo_var, L_3);
		((Grid_t1081586032_StaticFields*)il2cpp_codegen_static_fields_for(Grid_t1081586032_il2cpp_TypeInfo_var))->set_elements_2((MineChanceU5B0___U2C0___U5D_t1118294243*)L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MineChance::.ctor()
extern "C"  void MineChance__ctor_m2009349904 (MineChance_t714285555 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MineChance::Start()
extern "C"  void MineChance_Start_m2792068664 (MineChance_t714285555 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MineChance_Start_m2792068664_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		float L_0 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_mine_5((bool)((((double)(((double)((double)L_0)))) < ((double)(0.15)))? 1 : 0));
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = (&V_1)->get_x_0();
		V_0 = (((int32_t)((int32_t)L_3)));
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		float L_6 = (&V_3)->get_y_1();
		V_2 = (((int32_t)((int32_t)L_6)));
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		MineChanceU5B0___U2C0___U5D_t1118294243* L_7 = ((Grid_t1081586032_StaticFields*)il2cpp_codegen_static_fields_for(Grid_t1081586032_il2cpp_TypeInfo_var))->get_elements_2();
		int32_t L_8 = V_0;
		int32_t L_9 = V_2;
		((MineChanceU5B0___U2C0___U5D_t1118294243*)(MineChanceU5B0___U2C0___U5D_t1118294243*)L_7)->SetAtUnchecked(L_8, L_9, __this);
		AudioSource_t3935305588 * L_10 = __this->get_tripping_4();
		AudioClip_t3680889665 * L_11 = __this->get_tripped_3();
		AudioSource_set_clip_m31653938(L_10, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MineChance::loadTexture(System.Int32)
extern "C"  void MineChance_loadTexture_m1059157204 (MineChance_t714285555 * __this, int32_t ___adjacentCount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MineChance_loadTexture_m1059157204_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_mine_5();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		SpriteRenderer_t3235626157 * L_1 = Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var);
		Sprite_t280657092 * L_2 = __this->get_mineTexture_8();
		SpriteRenderer_set_sprite_m1286893786(L_1, L_2, /*hidden argument*/NULL);
		goto IL_0034;
	}

IL_0021:
	{
		SpriteRenderer_t3235626157 * L_3 = Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var);
		SpriteU5BU5D_t2581906349* L_4 = __this->get_emptyTextures_7();
		int32_t L_5 = ___adjacentCount0;
		int32_t L_6 = L_5;
		Sprite_t280657092 * L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		SpriteRenderer_set_sprite_m1286893786(L_3, L_7, /*hidden argument*/NULL);
	}

IL_0034:
	{
		return;
	}
}
// System.Boolean MineChance::isCoverd()
extern "C"  bool MineChance_isCoverd_m2924204771 (MineChance_t714285555 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MineChance_isCoverd_m2924204771_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SpriteRenderer_t3235626157 * L_0 = Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var);
		Sprite_t280657092 * L_1 = SpriteRenderer_get_sprite_m663386871(L_0, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_2 = Sprite_get_texture_m3976398399(L_1, /*hidden argument*/NULL);
		String_t* L_3 = Object_get_name_m4211327027(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m920492651(NULL /*static, unused*/, L_3, _stringLiteral1948333211, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void MineChance::OnMouseOver()
extern "C"  void MineChance_OnMouseOver_m2069981063 (MineChance_t714285555 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MineChance_OnMouseOver_m2069981063_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButton_m513753021(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_00bc;
		}
	}
	{
		GameManger_t219135261 * L_1 = __this->get__GameManger_2();
		bool L_2 = L_1->get_isMineClicked_2();
		if (L_2)
		{
			goto IL_00bc;
		}
	}
	{
		bool L_3 = __this->get_leftMouseClicked_6();
		if (L_3)
		{
			goto IL_00bc;
		}
	}
	{
		bool L_4 = __this->get_mine_5();
		if (!L_4)
		{
			goto IL_005b;
		}
	}
	{
		GameManger_t219135261 * L_5 = __this->get__GameManger_2();
		GameManger_reciever_m722376700(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		Grid_uncoverMines_m2785931130(NULL /*static, unused*/, /*hidden argument*/NULL);
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral4141783935, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_6 = __this->get_tripping_4();
		AudioSource_Play_m48294159(L_6, /*hidden argument*/NULL);
		goto IL_00bc;
	}

IL_005b:
	{
		Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_8 = Transform_get_position_m36019626(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		float L_9 = (&V_1)->get_x_0();
		V_0 = (((int32_t)((int32_t)L_9)));
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_11 = Transform_get_position_m36019626(L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		float L_12 = (&V_3)->get_y_1();
		V_2 = (((int32_t)((int32_t)L_12)));
		int32_t L_13 = V_0;
		int32_t L_14 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		int32_t L_15 = Grid_adjacentMines_m3193650313(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		MineChance_loadTexture_m1059157204(__this, L_15, /*hidden argument*/NULL);
		int32_t L_16 = V_0;
		int32_t L_17 = V_2;
		int32_t L_18 = ((Grid_t1081586032_StaticFields*)il2cpp_codegen_static_fields_for(Grid_t1081586032_il2cpp_TypeInfo_var))->get_w_0();
		int32_t L_19 = ((Grid_t1081586032_StaticFields*)il2cpp_codegen_static_fields_for(Grid_t1081586032_il2cpp_TypeInfo_var))->get_h_1();
		il2cpp_array_size_t L_21[] = { (il2cpp_array_size_t)L_18, (il2cpp_array_size_t)L_19 };
		BooleanU5B0___U2C0___U5D_t2897418193* L_20 = (BooleanU5B0___U2C0___U5D_t2897418193*)GenArrayNew(BooleanU5B0___U2C0___U5D_t2897418193_il2cpp_TypeInfo_var, L_21);
		Grid_FFuncover_m3894068437(NULL /*static, unused*/, L_16, L_17, L_20, /*hidden argument*/NULL);
		bool L_22 = Grid_isFinished_m421222452(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00bc;
		}
	}
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral917515297, /*hidden argument*/NULL);
	}

IL_00bc:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_23 = Input_GetMouseButtonDown_m2081676745(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_011b;
		}
	}
	{
		GameManger_t219135261 * L_24 = __this->get__GameManger_2();
		bool L_25 = L_24->get_isMineClicked_2();
		if (L_25)
		{
			goto IL_011b;
		}
	}
	{
		bool L_26 = __this->get_leftMouseClicked_6();
		if (L_26)
		{
			goto IL_00f8;
		}
	}
	{
		SpriteRenderer_t3235626157 * L_27 = Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var);
		Sprite_t280657092 * L_28 = __this->get_flagTexture_9();
		SpriteRenderer_set_sprite_m1286893786(L_27, L_28, /*hidden argument*/NULL);
		goto IL_010c;
	}

IL_00f8:
	{
		SpriteRenderer_t3235626157 * L_29 = Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var);
		SpriteU5BU5D_t2581906349* L_30 = __this->get_emptyTextures_7();
		int32_t L_31 = ((int32_t)9);
		Sprite_t280657092 * L_32 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		SpriteRenderer_set_sprite_m1286893786(L_29, L_32, /*hidden argument*/NULL);
	}

IL_010c:
	{
		bool L_33 = __this->get_leftMouseClicked_6();
		__this->set_leftMouseClicked_6((bool)((((int32_t)L_33) == ((int32_t)0))? 1 : 0));
	}

IL_011b:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
