#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1500525009;

#include "t2513933869.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1763168354  : public t2513933869
{
public:
	t1500525009 * f16;

public:
	inline static int32_t fog16() { return static_cast<int32_t>(offsetof(t1763168354, f16)); }
	inline t1500525009 * fg16() const { return f16; }
	inline t1500525009 ** fag16() { return &f16; }
	inline void fs16(t1500525009 * value)
	{
		f16 = value;
		Il2CppCodeGenWriteBarrier(&f16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
