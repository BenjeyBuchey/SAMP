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
struct t656777856;

#include "t2900481284.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2513933869  : public t2900481284
{
public:
	t1377046772 * f13;
	String_t* f14;
	t656777856* f15;

public:
	inline static int32_t fog13() { return static_cast<int32_t>(offsetof(t2513933869, f13)); }
	inline t1377046772 * fg13() const { return f13; }
	inline t1377046772 ** fag13() { return &f13; }
	inline void fs13(t1377046772 * value)
	{
		f13 = value;
		Il2CppCodeGenWriteBarrier(&f13, value);
	}

	inline static int32_t fog14() { return static_cast<int32_t>(offsetof(t2513933869, f14)); }
	inline String_t* fg14() const { return f14; }
	inline String_t** fag14() { return &f14; }
	inline void fs14(String_t* value)
	{
		f14 = value;
		Il2CppCodeGenWriteBarrier(&f14, value);
	}

	inline static int32_t fog15() { return static_cast<int32_t>(offsetof(t2513933869, f15)); }
	inline t656777856* fg15() const { return f15; }
	inline t656777856** fag15() { return &f15; }
	inline void fs15(t656777856* value)
	{
		f15 = value;
		Il2CppCodeGenWriteBarrier(&f15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
