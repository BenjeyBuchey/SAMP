#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1500525009;
struct t176365656;
struct Il2CppObject;

#include "t1763168354.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3214959759  : public t1763168354
{
public:
	t1500525009 * f17;
	t176365656 * f18;
	Il2CppObject * f19;
	t1500525009 * f20;

public:
	inline static int32_t fog17() { return static_cast<int32_t>(offsetof(t3214959759, f17)); }
	inline t1500525009 * fg17() const { return f17; }
	inline t1500525009 ** fag17() { return &f17; }
	inline void fs17(t1500525009 * value)
	{
		f17 = value;
		Il2CppCodeGenWriteBarrier(&f17, value);
	}

	inline static int32_t fog18() { return static_cast<int32_t>(offsetof(t3214959759, f18)); }
	inline t176365656 * fg18() const { return f18; }
	inline t176365656 ** fag18() { return &f18; }
	inline void fs18(t176365656 * value)
	{
		f18 = value;
		Il2CppCodeGenWriteBarrier(&f18, value);
	}

	inline static int32_t fog19() { return static_cast<int32_t>(offsetof(t3214959759, f19)); }
	inline Il2CppObject * fg19() const { return f19; }
	inline Il2CppObject ** fag19() { return &f19; }
	inline void fs19(Il2CppObject * value)
	{
		f19 = value;
		Il2CppCodeGenWriteBarrier(&f19, value);
	}

	inline static int32_t fog20() { return static_cast<int32_t>(offsetof(t3214959759, f20)); }
	inline t1500525009 * fg20() const { return f20; }
	inline t1500525009 ** fag20() { return &f20; }
	inline void fs20(t1500525009 * value)
	{
		f20 = value;
		Il2CppCodeGenWriteBarrier(&f20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
