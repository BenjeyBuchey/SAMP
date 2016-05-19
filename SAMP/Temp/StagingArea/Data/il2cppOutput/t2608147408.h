#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2608147408;

#include "t498693649.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2608147408  : public t498693649
{
public:
	bool f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2608147408, f0)); }
	inline bool fg0() const { return f0; }
	inline bool* fag0() { return &f0; }
	inline void fs0(bool value)
	{
		f0 = value;
	}
};

struct t2608147408_SFs
{
public:
	t2608147408 * f1;
	t2608147408 * f2;
	t2608147408 * f3;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2608147408_SFs, f1)); }
	inline t2608147408 * fg1() const { return f1; }
	inline t2608147408 ** fag1() { return &f1; }
	inline void fs1(t2608147408 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2608147408_SFs, f2)); }
	inline t2608147408 * fg2() const { return f2; }
	inline t2608147408 ** fag2() { return &f2; }
	inline void fs2(t2608147408 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2608147408_SFs, f3)); }
	inline t2608147408 * fg3() const { return f3; }
	inline t2608147408 ** fag3() { return &f3; }
	inline void fs3(t2608147408 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
