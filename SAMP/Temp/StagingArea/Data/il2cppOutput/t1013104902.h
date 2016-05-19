#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t1278398631;
struct t3336811650;
struct t2121638921;
struct t1026195224;
struct t190145395;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1013104902  : public Il2CppObject
{
public:
	uint8_t f0;
	String_t* f1;
	t1278398631 * f2;
	t3336811650 * f3;
	t2121638921 * f4;
	t1026195224 * f5;
	bool f6;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1013104902, f0)); }
	inline uint8_t fg0() const { return f0; }
	inline uint8_t* fag0() { return &f0; }
	inline void fs0(uint8_t value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1013104902, f1)); }
	inline String_t* fg1() const { return f1; }
	inline String_t** fag1() { return &f1; }
	inline void fs1(String_t* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1013104902, f2)); }
	inline t1278398631 * fg2() const { return f2; }
	inline t1278398631 ** fag2() { return &f2; }
	inline void fs2(t1278398631 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1013104902, f3)); }
	inline t3336811650 * fg3() const { return f3; }
	inline t3336811650 ** fag3() { return &f3; }
	inline void fs3(t3336811650 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1013104902, f4)); }
	inline t2121638921 * fg4() const { return f4; }
	inline t2121638921 ** fag4() { return &f4; }
	inline void fs4(t2121638921 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t1013104902, f5)); }
	inline t1026195224 * fg5() const { return f5; }
	inline t1026195224 ** fag5() { return &f5; }
	inline void fs5(t1026195224 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t1013104902, f6)); }
	inline bool fg6() const { return f6; }
	inline bool* fag6() { return &f6; }
	inline void fs6(bool value)
	{
		f6 = value;
	}
};

struct t1013104902_SFs
{
public:
	t190145395 * f7;

public:
	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t1013104902_SFs, f7)); }
	inline t190145395 * fg7() const { return f7; }
	inline t190145395 ** fag7() { return &f7; }
	inline void fs7(t190145395 * value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
