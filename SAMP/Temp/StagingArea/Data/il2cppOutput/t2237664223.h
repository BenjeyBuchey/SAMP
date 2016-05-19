#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1125014;

#include "t1006530897.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2237664223  : public t1006530897
{
public:

public:
};

struct t2237664223_SFs
{
public:
	t1125014 * f23;

public:
	inline static int32_t fog23() { return static_cast<int32_t>(offsetof(t2237664223_SFs, f23)); }
	inline t1125014 * fg23() const { return f23; }
	inline t1125014 ** fag23() { return &f23; }
	inline void fs23(t1125014 * value)
	{
		f23 = value;
		Il2CppCodeGenWriteBarrier(&f23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
