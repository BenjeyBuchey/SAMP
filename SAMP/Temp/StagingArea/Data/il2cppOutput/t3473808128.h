#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2238201602;
struct String_t;
struct t176365656;
struct t4094864978;
struct t2774051127;

#include "t2513933869.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3473808128  : public t2513933869
{
public:
	t2238201602 * f16;
	String_t* f17;
	t176365656 * f18;
	t4094864978 * f19;
	t2774051127 * f20;

public:
	inline static int32_t fog16() { return static_cast<int32_t>(offsetof(t3473808128, f16)); }
	inline t2238201602 * fg16() const { return f16; }
	inline t2238201602 ** fag16() { return &f16; }
	inline void fs16(t2238201602 * value)
	{
		f16 = value;
		Il2CppCodeGenWriteBarrier(&f16, value);
	}

	inline static int32_t fog17() { return static_cast<int32_t>(offsetof(t3473808128, f17)); }
	inline String_t* fg17() const { return f17; }
	inline String_t** fag17() { return &f17; }
	inline void fs17(String_t* value)
	{
		f17 = value;
		Il2CppCodeGenWriteBarrier(&f17, value);
	}

	inline static int32_t fog18() { return static_cast<int32_t>(offsetof(t3473808128, f18)); }
	inline t176365656 * fg18() const { return f18; }
	inline t176365656 ** fag18() { return &f18; }
	inline void fs18(t176365656 * value)
	{
		f18 = value;
		Il2CppCodeGenWriteBarrier(&f18, value);
	}

	inline static int32_t fog19() { return static_cast<int32_t>(offsetof(t3473808128, f19)); }
	inline t4094864978 * fg19() const { return f19; }
	inline t4094864978 ** fag19() { return &f19; }
	inline void fs19(t4094864978 * value)
	{
		f19 = value;
		Il2CppCodeGenWriteBarrier(&f19, value);
	}

	inline static int32_t fog20() { return static_cast<int32_t>(offsetof(t3473808128, f20)); }
	inline t2774051127 * fg20() const { return f20; }
	inline t2774051127 ** fag20() { return &f20; }
	inline void fs20(t2774051127 * value)
	{
		f20 = value;
		Il2CppCodeGenWriteBarrier(&f20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
