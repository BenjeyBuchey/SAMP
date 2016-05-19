#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t323128660;

#include "t2513933869.h"
#include "t2298884609.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2163251669  : public t2513933869
{
public:
	String_t* f16;
	int32_t f17;
	t323128660 * f18;

public:
	inline static int32_t fog16() { return static_cast<int32_t>(offsetof(t2163251669, f16)); }
	inline String_t* fg16() const { return f16; }
	inline String_t** fag16() { return &f16; }
	inline void fs16(String_t* value)
	{
		f16 = value;
		Il2CppCodeGenWriteBarrier(&f16, value);
	}

	inline static int32_t fog17() { return static_cast<int32_t>(offsetof(t2163251669, f17)); }
	inline int32_t fg17() const { return f17; }
	inline int32_t* fag17() { return &f17; }
	inline void fs17(int32_t value)
	{
		f17 = value;
	}

	inline static int32_t fog18() { return static_cast<int32_t>(offsetof(t2163251669, f18)); }
	inline t323128660 * fg18() const { return f18; }
	inline t323128660 ** fag18() { return &f18; }
	inline void fs18(t323128660 * value)
	{
		f18 = value;
		Il2CppCodeGenWriteBarrier(&f18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
