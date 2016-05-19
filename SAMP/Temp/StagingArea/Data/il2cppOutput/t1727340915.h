#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t167066468;
struct t2238201602;

#include "t686772112.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1727340915  : public t686772112
{
public:
	t167066468 * f16;
	t167066468 * f17;
	t2238201602 * f18;
	t167066468 * f19;

public:
	inline static int32_t fog16() { return static_cast<int32_t>(offsetof(t1727340915, f16)); }
	inline t167066468 * fg16() const { return f16; }
	inline t167066468 ** fag16() { return &f16; }
	inline void fs16(t167066468 * value)
	{
		f16 = value;
		Il2CppCodeGenWriteBarrier(&f16, value);
	}

	inline static int32_t fog17() { return static_cast<int32_t>(offsetof(t1727340915, f17)); }
	inline t167066468 * fg17() const { return f17; }
	inline t167066468 ** fag17() { return &f17; }
	inline void fs17(t167066468 * value)
	{
		f17 = value;
		Il2CppCodeGenWriteBarrier(&f17, value);
	}

	inline static int32_t fog18() { return static_cast<int32_t>(offsetof(t1727340915, f18)); }
	inline t2238201602 * fg18() const { return f18; }
	inline t2238201602 ** fag18() { return &f18; }
	inline void fs18(t2238201602 * value)
	{
		f18 = value;
		Il2CppCodeGenWriteBarrier(&f18, value);
	}

	inline static int32_t fog19() { return static_cast<int32_t>(offsetof(t1727340915, f19)); }
	inline t167066468 * fg19() const { return f19; }
	inline t167066468 ** fag19() { return &f19; }
	inline void fs19(t167066468 * value)
	{
		f19 = value;
		Il2CppCodeGenWriteBarrier(&f19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
