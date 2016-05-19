#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1534522647;

#include "t1534522647.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1541163966  : public t1534522647
{
public:
	t1534522647 * f2;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1541163966, f2)); }
	inline t1534522647 * fg2() const { return f2; }
	inline t1534522647 ** fag2() { return &f2; }
	inline void fs2(t1534522647 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
