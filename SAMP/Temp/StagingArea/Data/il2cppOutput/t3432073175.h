#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t28240741;
struct String_t;
struct t2121638921;
struct t922188920;
struct t1621224067;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3432073175  : public Il2CppObject
{
public:
	t28240741 * f0;
	String_t* f1;
	t2121638921 * f2;
	t922188920 * f3;
	t1621224067 * f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3432073175, f0)); }
	inline t28240741 * fg0() const { return f0; }
	inline t28240741 ** fag0() { return &f0; }
	inline void fs0(t28240741 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3432073175, f1)); }
	inline String_t* fg1() const { return f1; }
	inline String_t** fag1() { return &f1; }
	inline void fs1(String_t* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3432073175, f2)); }
	inline t2121638921 * fg2() const { return f2; }
	inline t2121638921 ** fag2() { return &f2; }
	inline void fs2(t2121638921 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3432073175, f3)); }
	inline t922188920 * fg3() const { return f3; }
	inline t922188920 ** fag3() { return &f3; }
	inline void fs3(t922188920 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3432073175, f4)); }
	inline t1621224067 * fg4() const { return f4; }
	inline t1621224067 ** fag4() { return &f4; }
	inline void fs4(t1621224067 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
