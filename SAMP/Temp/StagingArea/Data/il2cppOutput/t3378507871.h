#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2187380583;
struct t1654916945;
struct t190145395;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3378507871  : public Il2CppObject
{
public:
	t2187380583 * f0;
	Il2CppObject * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3378507871, f0)); }
	inline t2187380583 * fg0() const { return f0; }
	inline t2187380583 ** fag0() { return &f0; }
	inline void fs0(t2187380583 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3378507871, f1)); }
	inline Il2CppObject * fg1() const { return f1; }
	inline Il2CppObject ** fag1() { return &f1; }
	inline void fs1(Il2CppObject * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

struct t3378507871_SFs
{
public:
	t190145395 * f2;
	t190145395 * f3;
	t190145395 * f4;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3378507871_SFs, f2)); }
	inline t190145395 * fg2() const { return f2; }
	inline t190145395 ** fag2() { return &f2; }
	inline void fs2(t190145395 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3378507871_SFs, f3)); }
	inline t190145395 * fg3() const { return f3; }
	inline t190145395 ** fag3() { return &f3; }
	inline void fs3(t190145395 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3378507871_SFs, f4)); }
	inline t190145395 * fg4() const { return f4; }
	inline t190145395 ** fag4() { return &f4; }
	inline void fs4(t190145395 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
