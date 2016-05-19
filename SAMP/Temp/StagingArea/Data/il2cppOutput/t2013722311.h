#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2956870243;

#include "t8663200.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2013722311  : public t8663200
{
public:

public:
};

struct t2013722311_SFs
{
public:
	t2956870243* f61;

public:
	inline static int32_t fog61() { return static_cast<int32_t>(offsetof(t2013722311_SFs, f61)); }
	inline t2956870243* fg61() const { return f61; }
	inline t2956870243** fag61() { return &f61; }
	inline void fs61(t2956870243* value)
	{
		f61 = value;
		Il2CppCodeGenWriteBarrier(&f61, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
