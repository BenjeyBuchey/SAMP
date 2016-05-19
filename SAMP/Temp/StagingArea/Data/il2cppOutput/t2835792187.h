#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t180559927;
struct t219029575;
struct t58506160;
struct t3490696160;

#include "t219029575.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2835792187  : public t219029575
{
public:
	t180559927 * f3;
	t219029575 * f4;
	t58506160* f5;
	int32_t f6;
	int32_t f7;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2835792187, f3)); }
	inline t180559927 * fg3() const { return f3; }
	inline t180559927 ** fag3() { return &f3; }
	inline void fs3(t180559927 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2835792187, f4)); }
	inline t219029575 * fg4() const { return f4; }
	inline t219029575 ** fag4() { return &f4; }
	inline void fs4(t219029575 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2835792187, f5)); }
	inline t58506160* fg5() const { return f5; }
	inline t58506160** fag5() { return &f5; }
	inline void fs5(t58506160* value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t2835792187, f6)); }
	inline int32_t fg6() const { return f6; }
	inline int32_t* fag6() { return &f6; }
	inline void fs6(int32_t value)
	{
		f6 = value;
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t2835792187, f7)); }
	inline int32_t fg7() const { return f7; }
	inline int32_t* fag7() { return &f7; }
	inline void fs7(int32_t value)
	{
		f7 = value;
	}
};

struct t2835792187_SFs
{
public:
	t180559927 * f2;
	t3490696160 * f8;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2835792187_SFs, f2)); }
	inline t180559927 * fg2() const { return f2; }
	inline t180559927 ** fag2() { return &f2; }
	inline void fs2(t180559927 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t2835792187_SFs, f8)); }
	inline t3490696160 * fg8() const { return f8; }
	inline t3490696160 ** fag8() { return &f8; }
	inline void fs8(t3490696160 * value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
