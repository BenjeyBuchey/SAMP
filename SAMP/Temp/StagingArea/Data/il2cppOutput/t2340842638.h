#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t830489778;
struct t1062023878;
struct t3685212854;

#include "t1843383027.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2340842638  : public t1843383027
{
public:
	t830489778 * f3;
	bool f4;
	bool f5;
	t1062023878 * f6;
	t3685212854 * f7;
	t830489778 * f8;
	t3685212854 * f9;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2340842638, f3)); }
	inline t830489778 * fg3() const { return f3; }
	inline t830489778 ** fag3() { return &f3; }
	inline void fs3(t830489778 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2340842638, f4)); }
	inline bool fg4() const { return f4; }
	inline bool* fag4() { return &f4; }
	inline void fs4(bool value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2340842638, f5)); }
	inline bool fg5() const { return f5; }
	inline bool* fag5() { return &f5; }
	inline void fs5(bool value)
	{
		f5 = value;
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t2340842638, f6)); }
	inline t1062023878 * fg6() const { return f6; }
	inline t1062023878 ** fag6() { return &f6; }
	inline void fs6(t1062023878 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t2340842638, f7)); }
	inline t3685212854 * fg7() const { return f7; }
	inline t3685212854 ** fag7() { return &f7; }
	inline void fs7(t3685212854 * value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t2340842638, f8)); }
	inline t830489778 * fg8() const { return f8; }
	inline t830489778 ** fag8() { return &f8; }
	inline void fs8(t830489778 * value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}

	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t2340842638, f9)); }
	inline t3685212854 * fg9() const { return f9; }
	inline t3685212854 ** fag9() { return &f9; }
	inline void fs9(t3685212854 * value)
	{
		f9 = value;
		Il2CppCodeGenWriteBarrier(&f9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
