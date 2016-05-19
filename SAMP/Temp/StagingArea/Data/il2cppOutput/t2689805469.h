#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3671666615;

#include "t872970458.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2689805469  : public t872970458
{
public:
	t3671666615 * f14;

public:
	inline static int32_t fog14() { return static_cast<int32_t>(offsetof(t2689805469, f14)); }
	inline t3671666615 * fg14() const { return f14; }
	inline t3671666615 ** fag14() { return &f14; }
	inline void fs14(t3671666615 * value)
	{
		f14 = value;
		Il2CppCodeGenWriteBarrier(&f14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
