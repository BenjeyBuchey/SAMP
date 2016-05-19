#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2121638921;
struct t3905177107;
struct t3875263730;
struct String_t;

#include "Il2CppObject.h"
#include "t3549183688.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2592573804  : public Il2CppObject
{
public:
	t2121638921 * f0;
	t3905177107 * f1;
	int32_t f2;
	bool f3;
	t3875263730 * f4;
	String_t* f5;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2592573804, f0)); }
	inline t2121638921 * fg0() const { return f0; }
	inline t2121638921 ** fag0() { return &f0; }
	inline void fs0(t2121638921 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2592573804, f1)); }
	inline t3905177107 * fg1() const { return f1; }
	inline t3905177107 ** fag1() { return &f1; }
	inline void fs1(t3905177107 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2592573804, f2)); }
	inline int32_t fg2() const { return f2; }
	inline int32_t* fag2() { return &f2; }
	inline void fs2(int32_t value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2592573804, f3)); }
	inline bool fg3() const { return f3; }
	inline bool* fag3() { return &f3; }
	inline void fs3(bool value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2592573804, f4)); }
	inline t3875263730 * fg4() const { return f4; }
	inline t3875263730 ** fag4() { return &f4; }
	inline void fs4(t3875263730 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2592573804, f5)); }
	inline String_t* fg5() const { return f5; }
	inline String_t** fag5() { return &f5; }
	inline void fs5(String_t* value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
