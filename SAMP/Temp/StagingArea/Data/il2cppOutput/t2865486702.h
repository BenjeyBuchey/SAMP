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

struct  t2865486702  : public t3724581365
{
public:
	t3086289934 * f16;
	bool f17;

public:
	inline static int32_t fog16() { return static_cast<int32_t>(offsetof(t2865486702, f16)); }
	inline t3086289934 * fg16() const { return f16; }
	inline t3086289934 ** fag16() { return &f16; }
	inline void fs16(t3086289934 * value)
	{
		f16 = value;
		Il2CppCodeGenWriteBarrier(&f16, value);
	}

	inline static int32_t fog17() { return static_cast<int32_t>(offsetof(t2865486702, f17)); }
	inline bool fg17() const { return f17; }
	inline bool* fag17() { return &f17; }
	inline void fs17(bool value)
	{
		f17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
