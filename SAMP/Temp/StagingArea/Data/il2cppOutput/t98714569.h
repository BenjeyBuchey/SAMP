#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3432067208;

#include "t276412187.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t98714569  : public t276412187
{
public:
	bool f10;
	t3432067208 * f11;

public:
	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t98714569, f10)); }
	inline bool fg10() const { return f10; }
	inline bool* fag10() { return &f10; }
	inline void fs10(bool value)
	{
		f10 = value;
	}

	inline static int32_t fog11() { return static_cast<int32_t>(offsetof(t98714569, f11)); }
	inline t3432067208 * fg11() const { return f11; }
	inline t3432067208 ** fag11() { return &f11; }
	inline void fs11(t3432067208 * value)
	{
		f11 = value;
		Il2CppCodeGenWriteBarrier(&f11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
