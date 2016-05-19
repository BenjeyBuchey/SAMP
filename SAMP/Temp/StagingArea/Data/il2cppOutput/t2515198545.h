#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1125014;

#include "t3243288060.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2515198545  : public t3243288060
{
public:

public:
};

struct t2515198545_SFs
{
public:
	t1125014 * f17;

public:
	inline static int32_t fog17() { return static_cast<int32_t>(offsetof(t2515198545_SFs, f17)); }
	inline t1125014 * fg17() const { return f17; }
	inline t1125014 ** fag17() { return &f17; }
	inline void fs17(t1125014 * value)
	{
		f17 = value;
		Il2CppCodeGenWriteBarrier(&f17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
