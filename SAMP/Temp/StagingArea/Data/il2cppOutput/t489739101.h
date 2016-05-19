#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2163251669;
struct t2238201602;
struct t176365656;

#include "t3086289934.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t489739101  : public t3086289934
{
public:
	t2163251669 * f17;
	t2238201602 * f18;
	t176365656 * f19;

public:
	inline static int32_t fog17() { return static_cast<int32_t>(offsetof(t489739101, f17)); }
	inline t2163251669 * fg17() const { return f17; }
	inline t2163251669 ** fag17() { return &f17; }
	inline void fs17(t2163251669 * value)
	{
		f17 = value;
		Il2CppCodeGenWriteBarrier(&f17, value);
	}

	inline static int32_t fog18() { return static_cast<int32_t>(offsetof(t489739101, f18)); }
	inline t2238201602 * fg18() const { return f18; }
	inline t2238201602 ** fag18() { return &f18; }
	inline void fs18(t2238201602 * value)
	{
		f18 = value;
		Il2CppCodeGenWriteBarrier(&f18, value);
	}

	inline static int32_t fog19() { return static_cast<int32_t>(offsetof(t489739101, f19)); }
	inline t176365656 * fg19() const { return f19; }
	inline t176365656 ** fag19() { return &f19; }
	inline void fs19(t176365656 * value)
	{
		f19 = value;
		Il2CppCodeGenWriteBarrier(&f19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
