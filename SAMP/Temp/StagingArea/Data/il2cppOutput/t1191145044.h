#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1329997280;
struct t709926554;

#include "t3253021914.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1191145044  : public t3253021914
{
public:
	t1329997280 * f6;
	t1329997280 * f7;
	t709926554 * f8;

public:
	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t1191145044, f6)); }
	inline t1329997280 * fg6() const { return f6; }
	inline t1329997280 ** fag6() { return &f6; }
	inline void fs6(t1329997280 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t1191145044, f7)); }
	inline t1329997280 * fg7() const { return f7; }
	inline t1329997280 ** fag7() { return &f7; }
	inline void fs7(t1329997280 * value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t1191145044, f8)); }
	inline t709926554 * fg8() const { return f8; }
	inline t709926554 ** fag8() { return &f8; }
	inline void fs8(t709926554 * value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
