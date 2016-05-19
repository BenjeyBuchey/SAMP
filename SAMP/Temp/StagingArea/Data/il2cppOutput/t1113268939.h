#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t190145395;

#include "t3253021914.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1113268939  : public t3253021914
{
public:
	String_t* f6;
	String_t* f7;
	String_t* f8;

public:
	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t1113268939, f6)); }
	inline String_t* fg6() const { return f6; }
	inline String_t** fag6() { return &f6; }
	inline void fs6(String_t* value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t1113268939, f7)); }
	inline String_t* fg7() const { return f7; }
	inline String_t** fag7() { return &f7; }
	inline void fs7(String_t* value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t1113268939, f8)); }
	inline String_t* fg8() const { return f8; }
	inline String_t** fag8() { return &f8; }
	inline void fs8(String_t* value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}
};

struct t1113268939_SFs
{
public:
	t190145395 * f9;

public:
	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t1113268939_SFs, f9)); }
	inline t190145395 * fg9() const { return f9; }
	inline t190145395 ** fag9() { return &f9; }
	inline void fs9(t190145395 * value)
	{
		f9 = value;
		Il2CppCodeGenWriteBarrier(&f9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
