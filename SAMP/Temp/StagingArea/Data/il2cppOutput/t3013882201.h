#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1932230565;
struct t176365656;
struct t4080191508;

#include "t3696384587.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3013882201  : public t3696384587
{
public:
	t1932230565 * f27;
	t176365656 * f28;
	t4080191508 * f29;
	bool f30;

public:
	inline static int32_t fog27() { return static_cast<int32_t>(offsetof(t3013882201, f27)); }
	inline t1932230565 * fg27() const { return f27; }
	inline t1932230565 ** fag27() { return &f27; }
	inline void fs27(t1932230565 * value)
	{
		f27 = value;
		Il2CppCodeGenWriteBarrier(&f27, value);
	}

	inline static int32_t fog28() { return static_cast<int32_t>(offsetof(t3013882201, f28)); }
	inline t176365656 * fg28() const { return f28; }
	inline t176365656 ** fag28() { return &f28; }
	inline void fs28(t176365656 * value)
	{
		f28 = value;
		Il2CppCodeGenWriteBarrier(&f28, value);
	}

	inline static int32_t fog29() { return static_cast<int32_t>(offsetof(t3013882201, f29)); }
	inline t4080191508 * fg29() const { return f29; }
	inline t4080191508 ** fag29() { return &f29; }
	inline void fs29(t4080191508 * value)
	{
		f29 = value;
		Il2CppCodeGenWriteBarrier(&f29, value);
	}

	inline static int32_t fog30() { return static_cast<int32_t>(offsetof(t3013882201, f30)); }
	inline bool fg30() const { return f30; }
	inline bool* fag30() { return &f30; }
	inline void fs30(bool value)
	{
		f30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
