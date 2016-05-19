#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t3540010562;
struct t604413498;
struct t190145395;

#include "t877091717.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1399085817  : public t877091717
{
public:
	t3540010562 * f12;
	t604413498 * f13;

public:
	inline static int32_t fog12() { return static_cast<int32_t>(offsetof(t1399085817, f12)); }
	inline t3540010562 * fg12() const { return f12; }
	inline t3540010562 ** fag12() { return &f12; }
	inline void fs12(t3540010562 * value)
	{
		f12 = value;
		Il2CppCodeGenWriteBarrier(&f12, value);
	}

	inline static int32_t fog13() { return static_cast<int32_t>(offsetof(t1399085817, f13)); }
	inline t604413498 * fg13() const { return f13; }
	inline t604413498 ** fag13() { return &f13; }
	inline void fs13(t604413498 * value)
	{
		f13 = value;
		Il2CppCodeGenWriteBarrier(&f13, value);
	}
};

struct t1399085817_SFs
{
public:
	String_t* f10;
	String_t* f11;
	t190145395 * f14;

public:
	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t1399085817_SFs, f10)); }
	inline String_t* fg10() const { return f10; }
	inline String_t** fag10() { return &f10; }
	inline void fs10(String_t* value)
	{
		f10 = value;
		Il2CppCodeGenWriteBarrier(&f10, value);
	}

	inline static int32_t fog11() { return static_cast<int32_t>(offsetof(t1399085817_SFs, f11)); }
	inline String_t* fg11() const { return f11; }
	inline String_t** fag11() { return &f11; }
	inline void fs11(String_t* value)
	{
		f11 = value;
		Il2CppCodeGenWriteBarrier(&f11, value);
	}

	inline static int32_t fog14() { return static_cast<int32_t>(offsetof(t1399085817_SFs, f14)); }
	inline t190145395 * fg14() const { return f14; }
	inline t190145395 ** fag14() { return &f14; }
	inline void fs14(t190145395 * value)
	{
		f14 = value;
		Il2CppCodeGenWriteBarrier(&f14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
