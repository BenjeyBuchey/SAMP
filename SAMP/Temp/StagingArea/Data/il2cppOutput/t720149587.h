#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2881531048;
struct t58506160;

#include "t219029575.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t720149587  : public t219029575
{
public:
	bool f2;
	bool f3;
	t2881531048 * f4;
	t58506160* f5;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t720149587, f2)); }
	inline bool fg2() const { return f2; }
	inline bool* fag2() { return &f2; }
	inline void fs2(bool value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t720149587, f3)); }
	inline bool fg3() const { return f3; }
	inline bool* fag3() { return &f3; }
	inline void fs3(bool value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t720149587, f4)); }
	inline t2881531048 * fg4() const { return f4; }
	inline t2881531048 ** fag4() { return &f4; }
	inline void fs4(t2881531048 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t720149587, f5)); }
	inline t58506160* fg5() const { return f5; }
	inline t58506160** fag5() { return &f5; }
	inline void fs5(t58506160* value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
