#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t4046993471;

#include "t498693649.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4046993471  : public t498693649
{
public:
	bool f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t4046993471, f0)); }
	inline bool fg0() const { return f0; }
	inline bool* fag0() { return &f0; }
	inline void fs0(bool value)
	{
		f0 = value;
	}
};

struct t4046993471_SFs
{
public:
	t4046993471 * f1;
	t4046993471 * f2;
	t4046993471 * f3;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t4046993471_SFs, f1)); }
	inline t4046993471 * fg1() const { return f1; }
	inline t4046993471 ** fag1() { return &f1; }
	inline void fs1(t4046993471 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t4046993471_SFs, f2)); }
	inline t4046993471 * fg2() const { return f2; }
	inline t4046993471 ** fag2() { return &f2; }
	inline void fs2(t4046993471 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t4046993471_SFs, f3)); }
	inline t4046993471 * fg3() const { return f3; }
	inline t4046993471 ** fag3() { return &f3; }
	inline void fs3(t4046993471 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
