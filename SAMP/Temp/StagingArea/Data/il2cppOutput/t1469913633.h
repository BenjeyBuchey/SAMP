#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3406590703;
struct t646701464;
struct t1125014;

#include "t3905177107.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1469913633  : public t3905177107
{
public:
	t3406590703 * f13;

public:
	inline static int32_t fog13() { return static_cast<int32_t>(offsetof(t1469913633, f13)); }
	inline t3406590703 * fg13() const { return f13; }
	inline t3406590703 ** fag13() { return &f13; }
	inline void fs13(t3406590703 * value)
	{
		f13 = value;
		Il2CppCodeGenWriteBarrier(&f13, value);
	}
};

struct t1469913633_SFs
{
public:
	t646701464 * f14;
	t646701464 * f15;
	t1125014 * f16;

public:
	inline static int32_t fog14() { return static_cast<int32_t>(offsetof(t1469913633_SFs, f14)); }
	inline t646701464 * fg14() const { return f14; }
	inline t646701464 ** fag14() { return &f14; }
	inline void fs14(t646701464 * value)
	{
		f14 = value;
		Il2CppCodeGenWriteBarrier(&f14, value);
	}

	inline static int32_t fog15() { return static_cast<int32_t>(offsetof(t1469913633_SFs, f15)); }
	inline t646701464 * fg15() const { return f15; }
	inline t646701464 ** fag15() { return &f15; }
	inline void fs15(t646701464 * value)
	{
		f15 = value;
		Il2CppCodeGenWriteBarrier(&f15, value);
	}

	inline static int32_t fog16() { return static_cast<int32_t>(offsetof(t1469913633_SFs, f16)); }
	inline t1125014 * fg16() const { return f16; }
	inline t1125014 ** fag16() { return &f16; }
	inline void fs16(t1125014 * value)
	{
		f16 = value;
		Il2CppCodeGenWriteBarrier(&f16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
