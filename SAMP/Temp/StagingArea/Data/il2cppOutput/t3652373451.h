#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1125014;
struct t646701464;

#include "t3905177107.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3652373451  : public t3905177107
{
public:

public:
};

struct t3652373451_SFs
{
public:
	t1125014 * f13;
	t646701464 * f14;
	t646701464 * f15;

public:
	inline static int32_t fog13() { return static_cast<int32_t>(offsetof(t3652373451_SFs, f13)); }
	inline t1125014 * fg13() const { return f13; }
	inline t1125014 ** fag13() { return &f13; }
	inline void fs13(t1125014 * value)
	{
		f13 = value;
		Il2CppCodeGenWriteBarrier(&f13, value);
	}

	inline static int32_t fog14() { return static_cast<int32_t>(offsetof(t3652373451_SFs, f14)); }
	inline t646701464 * fg14() const { return f14; }
	inline t646701464 ** fag14() { return &f14; }
	inline void fs14(t646701464 * value)
	{
		f14 = value;
		Il2CppCodeGenWriteBarrier(&f14, value);
	}

	inline static int32_t fog15() { return static_cast<int32_t>(offsetof(t3652373451_SFs, f15)); }
	inline t646701464 * fg15() const { return f15; }
	inline t646701464 ** fag15() { return &f15; }
	inline void fs15(t646701464 * value)
	{
		f15 = value;
		Il2CppCodeGenWriteBarrier(&f15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
