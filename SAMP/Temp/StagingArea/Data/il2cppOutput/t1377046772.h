#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t2238201602;

#include "t2900481284.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1377046772  : public t2900481284
{
public:
	String_t* f13;
	t2238201602 * f14;

public:
	inline static int32_t fog13() { return static_cast<int32_t>(offsetof(t1377046772, f13)); }
	inline String_t* fg13() const { return f13; }
	inline String_t** fag13() { return &f13; }
	inline void fs13(String_t* value)
	{
		f13 = value;
		Il2CppCodeGenWriteBarrier(&f13, value);
	}

	inline static int32_t fog14() { return static_cast<int32_t>(offsetof(t1377046772, f14)); }
	inline t2238201602 * fg14() const { return f14; }
	inline t2238201602 ** fag14() { return &f14; }
	inline void fs14(t2238201602 * value)
	{
		f14 = value;
		Il2CppCodeGenWriteBarrier(&f14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
