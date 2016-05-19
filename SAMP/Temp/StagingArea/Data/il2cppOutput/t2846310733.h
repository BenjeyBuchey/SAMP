#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1206202648;
struct t590969783;
struct String_t;
struct t2121638921;
struct t190145395;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2846310733  : public Il2CppObject
{
public:
	t1206202648 * f0;
	Il2CppObject * f1;
	String_t* f2;
	String_t* f3;
	t2121638921 * f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2846310733, f0)); }
	inline t1206202648 * fg0() const { return f0; }
	inline t1206202648 ** fag0() { return &f0; }
	inline void fs0(t1206202648 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2846310733, f1)); }
	inline Il2CppObject * fg1() const { return f1; }
	inline Il2CppObject ** fag1() { return &f1; }
	inline void fs1(Il2CppObject * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2846310733, f2)); }
	inline String_t* fg2() const { return f2; }
	inline String_t** fag2() { return &f2; }
	inline void fs2(String_t* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2846310733, f3)); }
	inline String_t* fg3() const { return f3; }
	inline String_t** fag3() { return &f3; }
	inline void fs3(String_t* value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2846310733, f4)); }
	inline t2121638921 * fg4() const { return f4; }
	inline t2121638921 ** fag4() { return &f4; }
	inline void fs4(t2121638921 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

struct t2846310733_SFs
{
public:
	t190145395 * f5;

public:
	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2846310733_SFs, f5)); }
	inline t190145395 * fg5() const { return f5; }
	inline t190145395 ** fag5() { return &f5; }
	inline void fs5(t190145395 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
