#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2238201602;

#include "t3696384587.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3990058885  : public t3696384587
{
public:
	t2238201602 * f27;

public:
	inline static int32_t fog27() { return static_cast<int32_t>(offsetof(t3990058885, f27)); }
	inline t2238201602 * fg27() const { return f27; }
	inline t2238201602 ** fag27() { return &f27; }
	inline void fs27(t2238201602 * value)
	{
		f27 = value;
		Il2CppCodeGenWriteBarrier(&f27, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
