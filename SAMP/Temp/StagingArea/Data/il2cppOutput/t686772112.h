#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t1932230565;

#include "t2900481284.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t686772112  : public t2900481284
{
public:
	String_t* f13;
	t1932230565 * f14;
	String_t* f15;

public:
	inline static int32_t fog13() { return static_cast<int32_t>(offsetof(t686772112, f13)); }
	inline String_t* fg13() const { return f13; }
	inline String_t** fag13() { return &f13; }
	inline void fs13(String_t* value)
	{
		f13 = value;
		Il2CppCodeGenWriteBarrier(&f13, value);
	}

	inline static int32_t fog14() { return static_cast<int32_t>(offsetof(t686772112, f14)); }
	inline t1932230565 * fg14() const { return f14; }
	inline t1932230565 ** fag14() { return &f14; }
	inline void fs14(t1932230565 * value)
	{
		f14 = value;
		Il2CppCodeGenWriteBarrier(&f14, value);
	}

	inline static int32_t fog15() { return static_cast<int32_t>(offsetof(t686772112, f15)); }
	inline String_t* fg15() const { return f15; }
	inline String_t** fag15() { return &f15; }
	inline void fs15(String_t* value)
	{
		f15 = value;
		Il2CppCodeGenWriteBarrier(&f15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
