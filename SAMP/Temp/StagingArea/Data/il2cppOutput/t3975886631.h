#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t709926554;

#include "t4261756523.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3975886631  : public t4261756523
{
public:
	t709926554 * f5;

public:
	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t3975886631, f5)); }
	inline t709926554 * fg5() const { return f5; }
	inline t709926554 ** fag5() { return &f5; }
	inline void fs5(t709926554 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
