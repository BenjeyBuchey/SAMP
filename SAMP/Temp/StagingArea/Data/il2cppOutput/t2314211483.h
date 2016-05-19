#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2314211483;
struct t219029575;
struct t180559927;
struct t58506160;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2314211483  : public Il2CppObject
{
public:
	t219029575 * f1;
	t180559927 * f2;
	t58506160* f3;
	bool f4;
	t58506160* f5;
	int32_t f6;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2314211483, f1)); }
	inline t219029575 * fg1() const { return f1; }
	inline t219029575 ** fag1() { return &f1; }
	inline void fs1(t219029575 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2314211483, f2)); }
	inline t180559927 * fg2() const { return f2; }
	inline t180559927 ** fag2() { return &f2; }
	inline void fs2(t180559927 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2314211483, f3)); }
	inline t58506160* fg3() const { return f3; }
	inline t58506160** fag3() { return &f3; }
	inline void fs3(t58506160* value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2314211483, f4)); }
	inline bool fg4() const { return f4; }
	inline bool* fag4() { return &f4; }
	inline void fs4(bool value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2314211483, f5)); }
	inline t58506160* fg5() const { return f5; }
	inline t58506160** fag5() { return &f5; }
	inline void fs5(t58506160* value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t2314211483, f6)); }
	inline int32_t fg6() const { return f6; }
	inline int32_t* fag6() { return &f6; }
	inline void fs6(int32_t value)
	{
		f6 = value;
	}
};

struct t2314211483_SFs
{
public:
	t2314211483 * f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2314211483_SFs, f0)); }
	inline t2314211483 * fg0() const { return f0; }
	inline t2314211483 ** fag0() { return &f0; }
	inline void fs0(t2314211483 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
