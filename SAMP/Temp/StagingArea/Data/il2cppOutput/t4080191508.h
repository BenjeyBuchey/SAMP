#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t3990058885;
struct t176365656;

#include "t2513933869.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4080191508  : public t2513933869
{
public:
	String_t* f16;
	t3990058885 * f17;
	t176365656 * f18;
	bool f19;

public:
	inline static int32_t fog16() { return static_cast<int32_t>(offsetof(t4080191508, f16)); }
	inline String_t* fg16() const { return f16; }
	inline String_t** fag16() { return &f16; }
	inline void fs16(String_t* value)
	{
		f16 = value;
		Il2CppCodeGenWriteBarrier(&f16, value);
	}

	inline static int32_t fog17() { return static_cast<int32_t>(offsetof(t4080191508, f17)); }
	inline t3990058885 * fg17() const { return f17; }
	inline t3990058885 ** fag17() { return &f17; }
	inline void fs17(t3990058885 * value)
	{
		f17 = value;
		Il2CppCodeGenWriteBarrier(&f17, value);
	}

	inline static int32_t fog18() { return static_cast<int32_t>(offsetof(t4080191508, f18)); }
	inline t176365656 * fg18() const { return f18; }
	inline t176365656 ** fag18() { return &f18; }
	inline void fs18(t176365656 * value)
	{
		f18 = value;
		Il2CppCodeGenWriteBarrier(&f18, value);
	}

	inline static int32_t fog19() { return static_cast<int32_t>(offsetof(t4080191508, f19)); }
	inline bool fg19() const { return f19; }
	inline bool* fag19() { return &f19; }
	inline void fs19(bool value)
	{
		f19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
