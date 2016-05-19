#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3592213601;
struct String_t;

#include "t516466188.h"
#include "t1314909625.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3018467524  : public t516466188
{
public:
	t3592213601 * f1;
	t3592213601 * f2;
	int32_t f3;
	t3592213601 * f4;
	String_t* f5;
	String_t* f6;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3018467524, f1)); }
	inline t3592213601 * fg1() const { return f1; }
	inline t3592213601 ** fag1() { return &f1; }
	inline void fs1(t3592213601 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3018467524, f2)); }
	inline t3592213601 * fg2() const { return f2; }
	inline t3592213601 ** fag2() { return &f2; }
	inline void fs2(t3592213601 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3018467524, f3)); }
	inline int32_t fg3() const { return f3; }
	inline int32_t* fag3() { return &f3; }
	inline void fs3(int32_t value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3018467524, f4)); }
	inline t3592213601 * fg4() const { return f4; }
	inline t3592213601 ** fag4() { return &f4; }
	inline void fs4(t3592213601 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t3018467524, f5)); }
	inline String_t* fg5() const { return f5; }
	inline String_t** fag5() { return &f5; }
	inline void fs5(String_t* value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t3018467524, f6)); }
	inline String_t* fg6() const { return f6; }
	inline String_t** fag6() { return &f6; }
	inline void fs6(String_t* value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
