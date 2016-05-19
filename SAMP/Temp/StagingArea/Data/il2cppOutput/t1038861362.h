#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3875263730;
struct t888551426;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1038861362  : public Il2CppObject
{
public:
	t3875263730 * f0;
	int64_t f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1038861362, f0)); }
	inline t3875263730 * fg0() const { return f0; }
	inline t3875263730 ** fag0() { return &f0; }
	inline void fs0(t3875263730 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1038861362, f1)); }
	inline int64_t fg1() const { return f1; }
	inline int64_t* fag1() { return &f1; }
	inline void fs1(int64_t value)
	{
		f1 = value;
	}
};

struct t1038861362_SFs
{
public:
	t888551426 * f2;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1038861362_SFs, f2)); }
	inline t888551426 * fg2() const { return f2; }
	inline t888551426 ** fag2() { return &f2; }
	inline void fs2(t888551426 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
