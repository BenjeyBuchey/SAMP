#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2835792187;
struct t3490696160;

#include "t19630413.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1190433730  : public t19630413
{
public:
	t2835792187 * f13;

public:
	inline static int32_t fog13() { return static_cast<int32_t>(offsetof(t1190433730, f13)); }
	inline t2835792187 * fg13() const { return f13; }
	inline t2835792187 ** fag13() { return &f13; }
	inline void fs13(t2835792187 * value)
	{
		f13 = value;
		Il2CppCodeGenWriteBarrier(&f13, value);
	}
};

struct t1190433730_SFs
{
public:
	t3490696160 * f14;

public:
	inline static int32_t fog14() { return static_cast<int32_t>(offsetof(t1190433730_SFs, f14)); }
	inline t3490696160 * fg14() const { return f14; }
	inline t3490696160 ** fag14() { return &f14; }
	inline void fs14(t3490696160 * value)
	{
		f14 = value;
		Il2CppCodeGenWriteBarrier(&f14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
