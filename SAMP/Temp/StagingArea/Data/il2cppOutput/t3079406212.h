#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t4229084514;
struct t142482116;

#include "t4229084514.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3079406212  : public t4229084514
{
public:
	t4229084514 * f2;
	t142482116 * f3;
	bool f4;
	bool f5;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3079406212, f2)); }
	inline t4229084514 * fg2() const { return f2; }
	inline t4229084514 ** fag2() { return &f2; }
	inline void fs2(t4229084514 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3079406212, f3)); }
	inline t142482116 * fg3() const { return f3; }
	inline t142482116 ** fag3() { return &f3; }
	inline void fs3(t142482116 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3079406212, f4)); }
	inline bool fg4() const { return f4; }
	inline bool* fag4() { return &f4; }
	inline void fs4(bool value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t3079406212, f5)); }
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
