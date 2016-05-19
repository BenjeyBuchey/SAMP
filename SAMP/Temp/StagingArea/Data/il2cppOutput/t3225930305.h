#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t3875263730;

#include "t492925748.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3225930305  : public t492925748
{
public:
	t3875263730 * f5;

public:
	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t3225930305, f5)); }
	inline t3875263730 * fg5() const { return f5; }
	inline t3875263730 ** fag5() { return &f5; }
	inline void fs5(t3875263730 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
