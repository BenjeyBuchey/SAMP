#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3685212854;

#include "t1656433431.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2956686446  : public t1656433431
{
public:
	t3685212854 * f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2956686446, f0)); }
	inline t3685212854 * fg0() const { return f0; }
	inline t3685212854 ** fag0() { return &f0; }
	inline void fs0(t3685212854 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
