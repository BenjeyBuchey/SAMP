#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t646701464;
struct t1125014;
struct t379478628;

#include "t3243288060.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3500269194  : public t3243288060
{
public:
	t379478628 * f20;

public:
	inline static int32_t fog20() { return static_cast<int32_t>(offsetof(t3500269194, f20)); }
	inline t379478628 * fg20() const { return f20; }
	inline t379478628 ** fag20() { return &f20; }
	inline void fs20(t379478628 * value)
	{
		f20 = value;
		Il2CppCodeGenWriteBarrier(&f20, value);
	}
};

struct t3500269194_SFs
{
public:
	t646701464 * f17;
	t646701464 * f18;
	t1125014 * f19;

public:
	inline static int32_t fog17() { return static_cast<int32_t>(offsetof(t3500269194_SFs, f17)); }
	inline t646701464 * fg17() const { return f17; }
	inline t646701464 ** fag17() { return &f17; }
	inline void fs17(t646701464 * value)
	{
		f17 = value;
		Il2CppCodeGenWriteBarrier(&f17, value);
	}

	inline static int32_t fog18() { return static_cast<int32_t>(offsetof(t3500269194_SFs, f18)); }
	inline t646701464 * fg18() const { return f18; }
	inline t646701464 ** fag18() { return &f18; }
	inline void fs18(t646701464 * value)
	{
		f18 = value;
		Il2CppCodeGenWriteBarrier(&f18, value);
	}

	inline static int32_t fog19() { return static_cast<int32_t>(offsetof(t3500269194_SFs, f19)); }
	inline t1125014 * fg19() const { return f19; }
	inline t1125014 ** fag19() { return &f19; }
	inline void fs19(t1125014 * value)
	{
		f19 = value;
		Il2CppCodeGenWriteBarrier(&f19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
