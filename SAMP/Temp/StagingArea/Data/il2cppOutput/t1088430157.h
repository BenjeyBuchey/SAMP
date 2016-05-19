#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1122570845;

#include "t3398830607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1088430157  : public t3398830607
{
public:
	t1122570845 * f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1088430157, f0)); }
	inline t1122570845 * fg0() const { return f0; }
	inline t1122570845 ** fag0() { return &f0; }
	inline void fs0(t1122570845 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
