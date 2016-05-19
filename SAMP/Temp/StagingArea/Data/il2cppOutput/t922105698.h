#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t3822575854;

#include "t2571680784.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t922105698  : public t2571680784
{
public:
	int32_t f13;
	int32_t f14;
	String_t* f15;
	t3822575854 * f16;

public:
	inline static int32_t fog13() { return static_cast<int32_t>(offsetof(t922105698, f13)); }
	inline int32_t fg13() const { return f13; }
	inline int32_t* fag13() { return &f13; }
	inline void fs13(int32_t value)
	{
		f13 = value;
	}

	inline static int32_t fog14() { return static_cast<int32_t>(offsetof(t922105698, f14)); }
	inline int32_t fg14() const { return f14; }
	inline int32_t* fag14() { return &f14; }
	inline void fs14(int32_t value)
	{
		f14 = value;
	}

	inline static int32_t fog15() { return static_cast<int32_t>(offsetof(t922105698, f15)); }
	inline String_t* fg15() const { return f15; }
	inline String_t** fag15() { return &f15; }
	inline void fs15(String_t* value)
	{
		f15 = value;
		Il2CppCodeGenWriteBarrier(&f15, value);
	}

	inline static int32_t fog16() { return static_cast<int32_t>(offsetof(t922105698, f16)); }
	inline t3822575854 * fg16() const { return f16; }
	inline t3822575854 ** fag16() { return &f16; }
	inline void fs16(t3822575854 * value)
	{
		f16 = value;
		Il2CppCodeGenWriteBarrier(&f16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
