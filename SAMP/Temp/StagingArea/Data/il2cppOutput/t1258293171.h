#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t3875263730;
struct t2121638921;

#include "t1733424026.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1258293171  : public t1733424026
{
public:
	String_t* f5;
	t3875263730 * f6;
	t2121638921 * f7;

public:
	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t1258293171, f5)); }
	inline String_t* fg5() const { return f5; }
	inline String_t** fag5() { return &f5; }
	inline void fs5(String_t* value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t1258293171, f6)); }
	inline t3875263730 * fg6() const { return f6; }
	inline t3875263730 ** fag6() { return &f6; }
	inline void fs6(t3875263730 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t1258293171, f7)); }
	inline t2121638921 * fg7() const { return f7; }
	inline t2121638921 ** fag7() { return &f7; }
	inline void fs7(t2121638921 * value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
