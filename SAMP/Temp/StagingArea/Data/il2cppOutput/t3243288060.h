#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2613230068;
struct t4196950527;
struct String_t;
struct Il2CppObject;

#include "t3905177107.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3243288060  : public t3905177107
{
public:
	t2613230068 * f13;
	Il2CppObject * f14;
	String_t* f15;
	Il2CppObject * f16;

public:
	inline static int32_t fog13() { return static_cast<int32_t>(offsetof(t3243288060, f13)); }
	inline t2613230068 * fg13() const { return f13; }
	inline t2613230068 ** fag13() { return &f13; }
	inline void fs13(t2613230068 * value)
	{
		f13 = value;
		Il2CppCodeGenWriteBarrier(&f13, value);
	}

	inline static int32_t fog14() { return static_cast<int32_t>(offsetof(t3243288060, f14)); }
	inline Il2CppObject * fg14() const { return f14; }
	inline Il2CppObject ** fag14() { return &f14; }
	inline void fs14(Il2CppObject * value)
	{
		f14 = value;
		Il2CppCodeGenWriteBarrier(&f14, value);
	}

	inline static int32_t fog15() { return static_cast<int32_t>(offsetof(t3243288060, f15)); }
	inline String_t* fg15() const { return f15; }
	inline String_t** fag15() { return &f15; }
	inline void fs15(String_t* value)
	{
		f15 = value;
		Il2CppCodeGenWriteBarrier(&f15, value);
	}

	inline static int32_t fog16() { return static_cast<int32_t>(offsetof(t3243288060, f16)); }
	inline Il2CppObject * fg16() const { return f16; }
	inline Il2CppObject ** fag16() { return &f16; }
	inline void fs16(Il2CppObject * value)
	{
		f16 = value;
		Il2CppCodeGenWriteBarrier(&f16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
