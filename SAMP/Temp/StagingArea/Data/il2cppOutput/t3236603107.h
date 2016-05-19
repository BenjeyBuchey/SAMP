#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3236603107;

#include "t498693649.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3236603107  : public t498693649
{
public:
	bool f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3236603107, f0)); }
	inline bool fg0() const { return f0; }
	inline bool* fag0() { return &f0; }
	inline void fs0(bool value)
	{
		f0 = value;
	}
};

struct t3236603107_SFs
{
public:
	t3236603107 * f1;
	t3236603107 * f2;
	t3236603107 * f3;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3236603107_SFs, f1)); }
	inline t3236603107 * fg1() const { return f1; }
	inline t3236603107 ** fag1() { return &f1; }
	inline void fs1(t3236603107 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3236603107_SFs, f2)); }
	inline t3236603107 * fg2() const { return f2; }
	inline t3236603107 ** fag2() { return &f2; }
	inline void fs2(t3236603107 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3236603107_SFs, f3)); }
	inline t3236603107 * fg3() const { return f3; }
	inline t3236603107 ** fag3() { return &f3; }
	inline void fs3(t3236603107 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
