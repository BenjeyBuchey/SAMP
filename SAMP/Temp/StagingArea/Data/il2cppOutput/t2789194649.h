#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t176365656;
struct t3473808128;

#include "t3473808128.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2789194649  : public t3473808128
{
public:
	t176365656 * f21;
	t3473808128 * f22;

public:
	inline static int32_t fog21() { return static_cast<int32_t>(offsetof(t2789194649, f21)); }
	inline t176365656 * fg21() const { return f21; }
	inline t176365656 ** fag21() { return &f21; }
	inline void fs21(t176365656 * value)
	{
		f21 = value;
		Il2CppCodeGenWriteBarrier(&f21, value);
	}

	inline static int32_t fog22() { return static_cast<int32_t>(offsetof(t2789194649, f22)); }
	inline t3473808128 * fg22() const { return f22; }
	inline t3473808128 ** fag22() { return &f22; }
	inline void fs22(t3473808128 * value)
	{
		f22 = value;
		Il2CppCodeGenWriteBarrier(&f22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
