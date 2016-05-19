#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3781852593;

#include "t2210312563.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1914008962  : public t2210312563
{
public:
	Il2CppObject* f4;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1914008962, f4)); }
	inline Il2CppObject* fg4() const { return f4; }
	inline Il2CppObject** fag4() { return &f4; }
	inline void fs4(Il2CppObject* value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
