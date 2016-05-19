#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1882292308;
struct t815520884;
struct t604413498;
struct String_t;
struct t3384596155;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1593144996  : public Il2CppObject
{
public:
	t1882292308 * f0;
	t815520884 * f1;
	int32_t f2;
	t604413498 * f3;
	String_t* f4;
	t3384596155 * f5;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1593144996, f0)); }
	inline t1882292308 * fg0() const { return f0; }
	inline t1882292308 ** fag0() { return &f0; }
	inline void fs0(t1882292308 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1593144996, f1)); }
	inline t815520884 * fg1() const { return f1; }
	inline t815520884 ** fag1() { return &f1; }
	inline void fs1(t815520884 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1593144996, f2)); }
	inline int32_t fg2() const { return f2; }
	inline int32_t* fag2() { return &f2; }
	inline void fs2(int32_t value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1593144996, f3)); }
	inline t604413498 * fg3() const { return f3; }
	inline t604413498 ** fag3() { return &f3; }
	inline void fs3(t604413498 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1593144996, f4)); }
	inline String_t* fg4() const { return f4; }
	inline String_t** fag4() { return &f4; }
	inline void fs4(String_t* value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t1593144996, f5)); }
	inline t3384596155 * fg5() const { return f5; }
	inline t3384596155 ** fag5() { return &f5; }
	inline void fs5(t3384596155 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
