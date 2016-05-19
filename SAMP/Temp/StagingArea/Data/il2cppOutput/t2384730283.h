#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3822575854;

#include "t1689927879.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2384730283  : public t1689927879
{
public:
	t3822575854 * f4;
	bool f5;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2384730283, f4)); }
	inline t3822575854 * fg4() const { return f4; }
	inline t3822575854 ** fag4() { return &f4; }
	inline void fs4(t3822575854 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2384730283, f5)); }
	inline bool fg5() const { return f5; }
	inline bool* fag5() { return &f5; }
	inline void fs5(bool value)
	{
		f5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
