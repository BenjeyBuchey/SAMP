#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t219029575;

#include "t2055500882.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t219029575  : public t2055500882
{
public:

public:
};

struct t219029575_SFs
{
public:
	t219029575 * f1;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t219029575_SFs, f1)); }
	inline t219029575 * fg1() const { return f1; }
	inline t219029575 ** fag1() { return &f1; }
	inline void fs1(t219029575 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
