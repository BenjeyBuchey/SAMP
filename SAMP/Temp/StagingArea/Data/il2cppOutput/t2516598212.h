#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1733424026;
struct t4261756523;

#include "Il2CppObject.h"
#include "t1742395189.h"
#include "t2859653228.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2516598212  : public Il2CppObject
{
public:
	t1742395189  f0;
	t2859653228  f1;
	int32_t f2;
	t1733424026 * f3;
	t4261756523 * f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2516598212, f0)); }
	inline t1742395189  fg0() const { return f0; }
	inline t1742395189 * fag0() { return &f0; }
	inline void fs0(t1742395189  value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2516598212, f1)); }
	inline t2859653228  fg1() const { return f1; }
	inline t2859653228 * fag1() { return &f1; }
	inline void fs1(t2859653228  value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2516598212, f2)); }
	inline int32_t fg2() const { return f2; }
	inline int32_t* fag2() { return &f2; }
	inline void fs2(int32_t value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2516598212, f3)); }
	inline t1733424026 * fg3() const { return f3; }
	inline t1733424026 ** fag3() { return &f3; }
	inline void fs3(t1733424026 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2516598212, f4)); }
	inline t4261756523 * fg4() const { return f4; }
	inline t4261756523 ** fag4() { return &f4; }
	inline void fs4(t4261756523 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
