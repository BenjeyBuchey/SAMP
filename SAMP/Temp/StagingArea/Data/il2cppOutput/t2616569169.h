#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3336811651;

#include "t276412187.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2616569169  : public t276412187
{
public:
	t3336811651 * f10;

public:
	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t2616569169, f10)); }
	inline t3336811651 * fg10() const { return f10; }
	inline t3336811651 ** fag10() { return &f10; }
	inline void fs10(t3336811651 * value)
	{
		f10 = value;
		Il2CppCodeGenWriteBarrier(&f10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
