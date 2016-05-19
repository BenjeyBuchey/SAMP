#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3176878799;
struct t2374503314;

#include "t1200110142.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1463626868  : public t1200110142
{
public:
	t3176878799 * f0;
	t2374503314 * f1;
	t2374503314 * f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1463626868, f0)); }
	inline t3176878799 * fg0() const { return f0; }
	inline t3176878799 ** fag0() { return &f0; }
	inline void fs0(t3176878799 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1463626868, f1)); }
	inline t2374503314 * fg1() const { return f1; }
	inline t2374503314 ** fag1() { return &f1; }
	inline void fs1(t2374503314 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1463626868, f2)); }
	inline t2374503314 * fg2() const { return f2; }
	inline t2374503314 ** fag2() { return &f2; }
	inline void fs2(t2374503314 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
