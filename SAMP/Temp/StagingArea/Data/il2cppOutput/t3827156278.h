#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1932230565;
struct t2238201602;

#include "t3990058885.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3827156278  : public t3990058885
{
public:
	t1932230565 * f28;
	t2238201602 * f29;
	bool f30;

public:
	inline static int32_t fog28() { return static_cast<int32_t>(offsetof(t3827156278, f28)); }
	inline t1932230565 * fg28() const { return f28; }
	inline t1932230565 ** fag28() { return &f28; }
	inline void fs28(t1932230565 * value)
	{
		f28 = value;
		Il2CppCodeGenWriteBarrier(&f28, value);
	}

	inline static int32_t fog29() { return static_cast<int32_t>(offsetof(t3827156278, f29)); }
	inline t2238201602 * fg29() const { return f29; }
	inline t2238201602 ** fag29() { return &f29; }
	inline void fs29(t2238201602 * value)
	{
		f29 = value;
		Il2CppCodeGenWriteBarrier(&f29, value);
	}

	inline static int32_t fog30() { return static_cast<int32_t>(offsetof(t3827156278, f30)); }
	inline bool fg30() const { return f30; }
	inline bool* fag30() { return &f30; }
	inline void fs30(bool value)
	{
		f30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
