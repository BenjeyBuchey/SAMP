#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t933015752;

#include "t933015752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4097517481  : public t933015752
{
public:
	t933015752 * f1;
	t933015752 * f2;
	bool f3;
	bool f4;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t4097517481, f1)); }
	inline t933015752 * fg1() const { return f1; }
	inline t933015752 ** fag1() { return &f1; }
	inline void fs1(t933015752 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t4097517481, f2)); }
	inline t933015752 * fg2() const { return f2; }
	inline t933015752 ** fag2() { return &f2; }
	inline void fs2(t933015752 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t4097517481, f3)); }
	inline bool fg3() const { return f3; }
	inline bool* fag3() { return &f3; }
	inline void fs3(bool value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t4097517481, f4)); }
	inline bool fg4() const { return f4; }
	inline bool* fag4() { return &f4; }
	inline void fs4(bool value)
	{
		f4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
