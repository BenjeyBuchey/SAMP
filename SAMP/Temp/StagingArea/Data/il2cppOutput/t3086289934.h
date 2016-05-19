#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct Il2CppObject;

#include "t2513933869.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3086289934  : public t2513933869
{
public:
	Il2CppObject * f16;

public:
	inline static int32_t fog16() { return static_cast<int32_t>(offsetof(t3086289934, f16)); }
	inline Il2CppObject * fg16() const { return f16; }
	inline Il2CppObject ** fag16() { return &f16; }
	inline void fs16(Il2CppObject * value)
	{
		f16 = value;
		Il2CppCodeGenWriteBarrier(&f16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
