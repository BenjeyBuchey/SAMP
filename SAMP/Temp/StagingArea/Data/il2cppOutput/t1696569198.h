#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1689927879;

#include "t1689927879.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1696569198  : public t1689927879
{
public:
	t1689927879 * f4;
	bool f5;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1696569198, f4)); }
	inline t1689927879 * fg4() const { return f4; }
	inline t1689927879 ** fag4() { return &f4; }
	inline void fs4(t1689927879 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t1696569198, f5)); }
	inline bool fg5() const { return f5; }
	inline bool* fag5() { return &f5; }
	inline void fs5(bool value)
	{
		f5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
