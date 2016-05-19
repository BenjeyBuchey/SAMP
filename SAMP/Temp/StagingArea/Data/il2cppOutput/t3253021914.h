#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3253021914;

#include "t3592213601.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3253021914  : public t3592213601
{
public:
	t3253021914 * f5;

public:
	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t3253021914, f5)); }
	inline t3253021914 * fg5() const { return f5; }
	inline t3253021914 ** fag5() { return &f5; }
	inline void fs5(t3253021914 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
