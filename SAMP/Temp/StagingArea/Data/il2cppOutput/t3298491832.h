#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1669470913;

#include "t1527309539.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3298491832  : public t1527309539
{
public:
	t1669470913 * f16;

public:
	inline static int32_t fog16() { return static_cast<int32_t>(offsetof(t3298491832, f16)); }
	inline t1669470913 * fg16() const { return f16; }
	inline t1669470913 ** fag16() { return &f16; }
	inline void fs16(t1669470913 * value)
	{
		f16 = value;
		Il2CppCodeGenWriteBarrier(&f16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
