#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3416858730;
struct t3436592966;
struct t1689927879;

#include "t2055500882.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1689927879  : public t2055500882
{
public:
	t3416858730* f1;
	Il2CppObject * f2;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1689927879, f1)); }
	inline t3416858730* fg1() const { return f1; }
	inline t3416858730** fag1() { return &f1; }
	inline void fs1(t3416858730* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1689927879, f2)); }
	inline Il2CppObject * fg2() const { return f2; }
	inline Il2CppObject ** fag2() { return &f2; }
	inline void fs2(Il2CppObject * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

struct t1689927879_SFs
{
public:
	t1689927879 * f3;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1689927879_SFs, f3)); }
	inline t1689927879 * fg3() const { return f3; }
	inline t1689927879 ** fag3() { return &f3; }
	inline void fs3(t1689927879 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
