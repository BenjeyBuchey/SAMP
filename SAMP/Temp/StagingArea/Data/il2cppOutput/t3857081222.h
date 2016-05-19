#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2238201602;

#include "t3990058885.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3857081222  : public t3990058885
{
public:
	t2238201602 * f28;

public:
	inline static int32_t fog28() { return static_cast<int32_t>(offsetof(t3857081222, f28)); }
	inline t2238201602 * fg28() const { return f28; }
	inline t2238201602 ** fag28() { return &f28; }
	inline void fs28(t2238201602 * value)
	{
		f28 = value;
		Il2CppCodeGenWriteBarrier(&f28, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
