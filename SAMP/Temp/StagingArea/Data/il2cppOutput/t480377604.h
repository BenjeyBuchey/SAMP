#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3813794579;

#include "t1780453075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t480377604  : public t1780453075
{
public:
	t3813794579* f3;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t480377604, f3)); }
	inline t3813794579* fg3() const { return f3; }
	inline t3813794579** fag3() { return &f3; }
	inline void fs3(t3813794579* value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
