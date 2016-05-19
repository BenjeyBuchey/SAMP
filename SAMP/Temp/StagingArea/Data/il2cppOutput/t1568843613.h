#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t939966970;
struct t219364891;
struct t2274547107;
struct t3026026325;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1568843613  : public Il2CppObject
{
public:
	t939966970 * f0;
	t219364891 * f1;
	t2274547107 * f2;
	t3026026325 * f3;
	bool f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1568843613, f0)); }
	inline t939966970 * fg0() const { return f0; }
	inline t939966970 ** fag0() { return &f0; }
	inline void fs0(t939966970 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1568843613, f1)); }
	inline t219364891 * fg1() const { return f1; }
	inline t219364891 ** fag1() { return &f1; }
	inline void fs1(t219364891 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1568843613, f2)); }
	inline t2274547107 * fg2() const { return f2; }
	inline t2274547107 ** fag2() { return &f2; }
	inline void fs2(t2274547107 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1568843613, f3)); }
	inline t3026026325 * fg3() const { return f3; }
	inline t3026026325 ** fag3() { return &f3; }
	inline void fs3(t3026026325 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1568843613, f4)); }
	inline bool fg4() const { return f4; }
	inline bool* fag4() { return &f4; }
	inline void fs4(bool value)
	{
		f4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
