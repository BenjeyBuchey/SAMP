#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2075562901;

#include "t1254112602.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3154872895  : public t1254112602
{
public:
	t2075562901 * f11;
	t2075562901 * f12;

public:
	inline static int32_t fog11() { return static_cast<int32_t>(offsetof(t3154872895, f11)); }
	inline t2075562901 * fg11() const { return f11; }
	inline t2075562901 ** fag11() { return &f11; }
	inline void fs11(t2075562901 * value)
	{
		f11 = value;
		Il2CppCodeGenWriteBarrier(&f11, value);
	}

	inline static int32_t fog12() { return static_cast<int32_t>(offsetof(t3154872895, f12)); }
	inline t2075562901 * fg12() const { return f12; }
	inline t2075562901 ** fag12() { return &f12; }
	inline void fs12(t2075562901 * value)
	{
		f12 = value;
		Il2CppCodeGenWriteBarrier(&f12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
