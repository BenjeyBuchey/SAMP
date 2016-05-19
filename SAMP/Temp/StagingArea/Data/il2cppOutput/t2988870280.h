#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t4229084514;
struct t2777264566;

#include "t4229084514.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2988870280  : public t4229084514
{
public:
	t4229084514 * f2;
	t2777264566 * f3;
	bool f4;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2988870280, f2)); }
	inline t4229084514 * fg2() const { return f2; }
	inline t4229084514 ** fag2() { return &f2; }
	inline void fs2(t4229084514 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2988870280, f3)); }
	inline t2777264566 * fg3() const { return f3; }
	inline t2777264566 ** fag3() { return &f3; }
	inline void fs3(t2777264566 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2988870280, f4)); }
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
