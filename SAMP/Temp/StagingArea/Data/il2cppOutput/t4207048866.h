#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1125014;
struct t3905177107;
struct t1006530897;

#include "t3905177107.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4207048866  : public t3905177107
{
public:
	t1125014 * f13;
	t3905177107 * f14;
	t1006530897 * f15;

public:
	inline static int32_t fog13() { return static_cast<int32_t>(offsetof(t4207048866, f13)); }
	inline t1125014 * fg13() const { return f13; }
	inline t1125014 ** fag13() { return &f13; }
	inline void fs13(t1125014 * value)
	{
		f13 = value;
		Il2CppCodeGenWriteBarrier(&f13, value);
	}

	inline static int32_t fog14() { return static_cast<int32_t>(offsetof(t4207048866, f14)); }
	inline t3905177107 * fg14() const { return f14; }
	inline t3905177107 ** fag14() { return &f14; }
	inline void fs14(t3905177107 * value)
	{
		f14 = value;
		Il2CppCodeGenWriteBarrier(&f14, value);
	}

	inline static int32_t fog15() { return static_cast<int32_t>(offsetof(t4207048866, f15)); }
	inline t1006530897 * fg15() const { return f15; }
	inline t1006530897 ** fag15() { return &f15; }
	inline void fs15(t1006530897 * value)
	{
		f15 = value;
		Il2CppCodeGenWriteBarrier(&f15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
