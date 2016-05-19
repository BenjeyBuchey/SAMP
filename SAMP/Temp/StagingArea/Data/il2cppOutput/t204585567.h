#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3857081222;
struct t707140448;

#include "t707140448.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t204585567  : public t707140448
{
public:
	t3857081222 * f3;
	int32_t f4;
	t707140448 * f5;
	bool f6;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t204585567, f3)); }
	inline t3857081222 * fg3() const { return f3; }
	inline t3857081222 ** fag3() { return &f3; }
	inline void fs3(t3857081222 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t204585567, f4)); }
	inline int32_t fg4() const { return f4; }
	inline int32_t* fag4() { return &f4; }
	inline void fs4(int32_t value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t204585567, f5)); }
	inline t707140448 * fg5() const { return f5; }
	inline t707140448 ** fag5() { return &f5; }
	inline void fs5(t707140448 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t204585567, f6)); }
	inline bool fg6() const { return f6; }
	inline bool* fag6() { return &f6; }
	inline void fs6(bool value)
	{
		f6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
