#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3086289934;

#include "t3724581365.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3823671292  : public t3724581365
{
public:
	t3086289934 * f16;

public:
	inline static int32_t fog16() { return static_cast<int32_t>(offsetof(t3823671292, f16)); }
	inline t3086289934 * fg16() const { return f16; }
	inline t3086289934 ** fag16() { return &f16; }
	inline void fs16(t3086289934 * value)
	{
		f16 = value;
		Il2CppCodeGenWriteBarrier(&f16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
