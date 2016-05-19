#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2331592379;

#include "t2367485949.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3026026325  : public t2367485949
{
public:
	t2331592379 * f6;
	t2331592379 * f7;

public:
	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t3026026325, f6)); }
	inline t2331592379 * fg6() const { return f6; }
	inline t2331592379 ** fag6() { return &f6; }
	inline void fs6(t2331592379 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t3026026325, f7)); }
	inline t2331592379 * fg7() const { return f7; }
	inline t2331592379 ** fag7() { return &f7; }
	inline void fs7(t2331592379 * value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}
};

struct t3026026325_SFs
{
public:
	t2331592379 * f8;

public:
	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t3026026325_SFs, f8)); }
	inline t2331592379 * fg8() const { return f8; }
	inline t2331592379 ** fag8() { return &f8; }
	inline void fs8(t2331592379 * value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
