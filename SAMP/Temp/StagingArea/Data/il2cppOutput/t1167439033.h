#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t525419081;
struct t190145395;

#include "t2348429102.h"
#include "t447161104.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1167439033  : public t2348429102
{
public:
	t525419081 * f0;
	int32_t f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1167439033, f0)); }
	inline t525419081 * fg0() const { return f0; }
	inline t525419081 ** fag0() { return &f0; }
	inline void fs0(t525419081 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1167439033, f1)); }
	inline int32_t fg1() const { return f1; }
	inline int32_t* fag1() { return &f1; }
	inline void fs1(int32_t value)
	{
		f1 = value;
	}
};

struct t1167439033_SFs
{
public:
	t190145395 * f2;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1167439033_SFs, f2)); }
	inline t190145395 * fg2() const { return f2; }
	inline t190145395 ** fag2() { return &f2; }
	inline void fs2(t190145395 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
