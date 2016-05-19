#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct Il2CppObject;
struct String_t;
struct Type_t;
struct t3398830607;
struct t3688715482;
struct t1910224309;

#include "Il2CppObject.h"
#include "t1606169632.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t646701464  : public Il2CppObject
{
public:
	String_t* f1;
	Type_t * f2;
	Il2CppObject * f3;
	t3398830607 * f4;
	t3688715482 * f5;
	int32_t f6;
	String_t* f7;
	t1910224309 * f8;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t646701464, f1)); }
	inline String_t* fg1() const { return f1; }
	inline String_t** fag1() { return &f1; }
	inline void fs1(String_t* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t646701464, f2)); }
	inline Type_t * fg2() const { return f2; }
	inline Type_t ** fag2() { return &f2; }
	inline void fs2(Type_t * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t646701464, f3)); }
	inline Il2CppObject * fg3() const { return f3; }
	inline Il2CppObject ** fag3() { return &f3; }
	inline void fs3(Il2CppObject * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t646701464, f4)); }
	inline t3398830607 * fg4() const { return f4; }
	inline t3398830607 ** fag4() { return &f4; }
	inline void fs4(t3398830607 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t646701464, f5)); }
	inline t3688715482 * fg5() const { return f5; }
	inline t3688715482 ** fag5() { return &f5; }
	inline void fs5(t3688715482 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t646701464, f6)); }
	inline int32_t fg6() const { return f6; }
	inline int32_t* fag6() { return &f6; }
	inline void fs6(int32_t value)
	{
		f6 = value;
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t646701464, f7)); }
	inline String_t* fg7() const { return f7; }
	inline String_t** fag7() { return &f7; }
	inline void fs7(String_t* value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t646701464, f8)); }
	inline t1910224309 * fg8() const { return f8; }
	inline t1910224309 ** fag8() { return &f8; }
	inline void fs8(t1910224309 * value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}
};

struct t646701464_SFs
{
public:
	Il2CppObject * f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t646701464_SFs, f0)); }
	inline Il2CppObject * fg0() const { return f0; }
	inline Il2CppObject ** fag0() { return &f0; }
	inline void fs0(Il2CppObject * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
