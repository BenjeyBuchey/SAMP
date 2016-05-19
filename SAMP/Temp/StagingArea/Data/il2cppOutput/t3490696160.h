#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t2956870243;

#include "t3155420757.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3490696160  : public t3155420757
{
public:
	int32_t f11;
	int32_t f12;
	String_t* f13;
	String_t* f14;
	t2956870243* f15;

public:
	inline static int32_t fog11() { return static_cast<int32_t>(offsetof(t3490696160, f11)); }
	inline int32_t fg11() const { return f11; }
	inline int32_t* fag11() { return &f11; }
	inline void fs11(int32_t value)
	{
		f11 = value;
	}

	inline static int32_t fog12() { return static_cast<int32_t>(offsetof(t3490696160, f12)); }
	inline int32_t fg12() const { return f12; }
	inline int32_t* fag12() { return &f12; }
	inline void fs12(int32_t value)
	{
		f12 = value;
	}

	inline static int32_t fog13() { return static_cast<int32_t>(offsetof(t3490696160, f13)); }
	inline String_t* fg13() const { return f13; }
	inline String_t** fag13() { return &f13; }
	inline void fs13(String_t* value)
	{
		f13 = value;
		Il2CppCodeGenWriteBarrier(&f13, value);
	}

	inline static int32_t fog14() { return static_cast<int32_t>(offsetof(t3490696160, f14)); }
	inline String_t* fg14() const { return f14; }
	inline String_t** fag14() { return &f14; }
	inline void fs14(String_t* value)
	{
		f14 = value;
		Il2CppCodeGenWriteBarrier(&f14, value);
	}

	inline static int32_t fog15() { return static_cast<int32_t>(offsetof(t3490696160, f15)); }
	inline t2956870243* fg15() const { return f15; }
	inline t2956870243** fag15() { return &f15; }
	inline void fs15(t2956870243* value)
	{
		f15 = value;
		Il2CppCodeGenWriteBarrier(&f15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
