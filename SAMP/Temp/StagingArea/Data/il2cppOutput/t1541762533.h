#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t176365656;

#include "t2513933869.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1541762533  : public t2513933869
{
public:
	t176365656 * f16;

public:
	inline static int32_t fog16() { return static_cast<int32_t>(offsetof(t1541762533, f16)); }
	inline t176365656 * fg16() const { return f16; }
	inline t176365656 ** fag16() { return &f16; }
	inline void fs16(t176365656 * value)
	{
		f16 = value;
		Il2CppCodeGenWriteBarrier(&f16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
