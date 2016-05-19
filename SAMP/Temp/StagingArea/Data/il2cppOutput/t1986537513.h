#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2774051127;
struct t3473808128;
struct t176365656;
struct t1955646603;
struct t1986537513;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1986537513  : public Il2CppObject
{
public:
	bool f0;
	t2774051127 * f1;
	t3473808128 * f2;
	t176365656 * f3;
	t176365656 * f4;
	t1955646603 * f5;
	t1955646603 * f6;
	int32_t f7;
	t1986537513 * f8;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1986537513, f0)); }
	inline bool fg0() const { return f0; }
	inline bool* fag0() { return &f0; }
	inline void fs0(bool value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1986537513, f1)); }
	inline t2774051127 * fg1() const { return f1; }
	inline t2774051127 ** fag1() { return &f1; }
	inline void fs1(t2774051127 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1986537513, f2)); }
	inline t3473808128 * fg2() const { return f2; }
	inline t3473808128 ** fag2() { return &f2; }
	inline void fs2(t3473808128 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1986537513, f3)); }
	inline t176365656 * fg3() const { return f3; }
	inline t176365656 ** fag3() { return &f3; }
	inline void fs3(t176365656 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1986537513, f4)); }
	inline t176365656 * fg4() const { return f4; }
	inline t176365656 ** fag4() { return &f4; }
	inline void fs4(t176365656 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t1986537513, f5)); }
	inline t1955646603 * fg5() const { return f5; }
	inline t1955646603 ** fag5() { return &f5; }
	inline void fs5(t1955646603 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t1986537513, f6)); }
	inline t1955646603 * fg6() const { return f6; }
	inline t1955646603 ** fag6() { return &f6; }
	inline void fs6(t1955646603 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t1986537513, f7)); }
	inline int32_t fg7() const { return f7; }
	inline int32_t* fag7() { return &f7; }
	inline void fs7(int32_t value)
	{
		f7 = value;
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t1986537513, f8)); }
	inline t1986537513 * fg8() const { return f8; }
	inline t1986537513 ** fag8() { return &f8; }
	inline void fs8(t1986537513 * value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
