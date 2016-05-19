#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t471922321;

#include "t707140448.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3540038838  : public t707140448
{
public:
	t471922321 * f3;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3540038838, f3)); }
	inline t471922321 * fg3() const { return f3; }
	inline t471922321 ** fag3() { return &f3; }
	inline void fs3(t471922321 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
