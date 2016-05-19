#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3827156353;

#include "t707140448.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t663128134  : public t707140448
{
public:
	t3827156353 * f3;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t663128134, f3)); }
	inline t3827156353 * fg3() const { return f3; }
	inline t3827156353 ** fag3() { return &f3; }
	inline void fs3(t3827156353 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
