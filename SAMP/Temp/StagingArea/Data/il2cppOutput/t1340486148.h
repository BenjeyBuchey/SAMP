#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1808339196;
struct String_t;

#include "t2900481284.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1340486148  : public t2900481284
{
public:
	t1808339196* f13;
	String_t* f14;

public:
	inline static int32_t fog13() { return static_cast<int32_t>(offsetof(t1340486148, f13)); }
	inline t1808339196* fg13() const { return f13; }
	inline t1808339196** fag13() { return &f13; }
	inline void fs13(t1808339196* value)
	{
		f13 = value;
		Il2CppCodeGenWriteBarrier(&f13, value);
	}

	inline static int32_t fog14() { return static_cast<int32_t>(offsetof(t1340486148, f14)); }
	inline String_t* fg14() const { return f14; }
	inline String_t** fag14() { return &f14; }
	inline void fs14(String_t* value)
	{
		f14 = value;
		Il2CppCodeGenWriteBarrier(&f14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
