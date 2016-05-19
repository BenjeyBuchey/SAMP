#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3869071517;

#include "t721262211.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t625143165  : public t721262211
{
public:
	t3869071517 * f3;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t625143165, f3)); }
	inline t3869071517 * fg3() const { return f3; }
	inline t3869071517 ** fag3() { return &f3; }
	inline void fs3(t3869071517 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
