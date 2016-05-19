#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3719122287;
struct t3066586409;
struct t3538894937;

#include "t4229084514.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3719122287  : public t4229084514
{
public:
	t3719122287 * f2;
	t3066586409 * f3;
	bool f4;
	bool f5;
	t3538894937 * f6;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3719122287, f2)); }
	inline t3719122287 * fg2() const { return f2; }
	inline t3719122287 ** fag2() { return &f2; }
	inline void fs2(t3719122287 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3719122287, f3)); }
	inline t3066586409 * fg3() const { return f3; }
	inline t3066586409 ** fag3() { return &f3; }
	inline void fs3(t3066586409 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3719122287, f4)); }
	inline bool fg4() const { return f4; }
	inline bool* fag4() { return &f4; }
	inline void fs4(bool value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t3719122287, f5)); }
	inline bool fg5() const { return f5; }
	inline bool* fag5() { return &f5; }
	inline void fs5(bool value)
	{
		f5 = value;
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t3719122287, f6)); }
	inline t3538894937 * fg6() const { return f6; }
	inline t3538894937 ** fag6() { return &f6; }
	inline void fs6(t3538894937 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
