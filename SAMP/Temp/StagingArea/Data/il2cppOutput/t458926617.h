#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t646701464;
struct t1125014;

#include "t3905177107.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t458926617  : public t3905177107
{
public:

public:
};

struct t458926617_SFs
{
public:
	t646701464 * f13;
	t1125014 * f14;

public:
	inline static int32_t fog13() { return static_cast<int32_t>(offsetof(t458926617_SFs, f13)); }
	inline t646701464 * fg13() const { return f13; }
	inline t646701464 ** fag13() { return &f13; }
	inline void fs13(t646701464 * value)
	{
		f13 = value;
		Il2CppCodeGenWriteBarrier(&f13, value);
	}

	inline static int32_t fog14() { return static_cast<int32_t>(offsetof(t458926617_SFs, f14)); }
	inline t1125014 * fg14() const { return f14; }
	inline t1125014 ** fag14() { return &f14; }
	inline void fs14(t1125014 * value)
	{
		f14 = value;
		Il2CppCodeGenWriteBarrier(&f14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
