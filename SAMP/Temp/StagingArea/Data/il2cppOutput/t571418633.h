#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct Type_t;
struct t2055500882;
struct t882423531;
struct t305277133;
struct t3927356447;

#include "t1467752358.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t571418633  : public t1467752358
{
public:
	Type_t * f7;
	t2055500882 * f8;
	Il2CppObject * f9;
	t305277133 * f10;
	t3927356447 * f11;

public:
	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t571418633, f7)); }
	inline Type_t * fg7() const { return f7; }
	inline Type_t ** fag7() { return &f7; }
	inline void fs7(Type_t * value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t571418633, f8)); }
	inline t2055500882 * fg8() const { return f8; }
	inline t2055500882 ** fag8() { return &f8; }
	inline void fs8(t2055500882 * value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}

	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t571418633, f9)); }
	inline Il2CppObject * fg9() const { return f9; }
	inline Il2CppObject ** fag9() { return &f9; }
	inline void fs9(Il2CppObject * value)
	{
		f9 = value;
		Il2CppCodeGenWriteBarrier(&f9, value);
	}

	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t571418633, f10)); }
	inline t305277133 * fg10() const { return f10; }
	inline t305277133 ** fag10() { return &f10; }
	inline void fs10(t305277133 * value)
	{
		f10 = value;
		Il2CppCodeGenWriteBarrier(&f10, value);
	}

	inline static int32_t fog11() { return static_cast<int32_t>(offsetof(t571418633, f11)); }
	inline t3927356447 * fg11() const { return f11; }
	inline t3927356447 ** fag11() { return &f11; }
	inline void fs11(t3927356447 * value)
	{
		f11 = value;
		Il2CppCodeGenWriteBarrier(&f11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
