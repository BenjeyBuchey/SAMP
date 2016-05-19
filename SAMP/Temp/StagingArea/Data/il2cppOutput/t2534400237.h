#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3671666615;

#include "t717565226.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2534400237  : public t717565226
{
public:
	t3671666615 * f15;

public:
	inline static int32_t fog15() { return static_cast<int32_t>(offsetof(t2534400237, f15)); }
	inline t3671666615 * fg15() const { return f15; }
	inline t3671666615 ** fag15() { return &f15; }
	inline void fs15(t3671666615 * value)
	{
		f15 = value;
		Il2CppCodeGenWriteBarrier(&f15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
