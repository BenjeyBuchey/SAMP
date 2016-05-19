#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1377046772;
struct String_t;

#include "t686772112.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2739053930  : public t686772112
{
public:
	t1377046772 * f16;
	String_t* f17;

public:
	inline static int32_t fog16() { return static_cast<int32_t>(offsetof(t2739053930, f16)); }
	inline t1377046772 * fg16() const { return f16; }
	inline t1377046772 ** fag16() { return &f16; }
	inline void fs16(t1377046772 * value)
	{
		f16 = value;
		Il2CppCodeGenWriteBarrier(&f16, value);
	}

	inline static int32_t fog17() { return static_cast<int32_t>(offsetof(t2739053930, f17)); }
	inline String_t* fg17() const { return f17; }
	inline String_t** fag17() { return &f17; }
	inline void fs17(String_t* value)
	{
		f17 = value;
		Il2CppCodeGenWriteBarrier(&f17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
