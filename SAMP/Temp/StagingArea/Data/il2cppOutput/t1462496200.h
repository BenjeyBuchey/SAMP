#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t709926554;
struct t933015752;
struct String_t;
struct t605667718;

#include "t1733424026.h"
#include "t2313699015.h"
#include "t3238327079.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1462496200  : public t1733424026
{
public:
	t709926554 * f5;
	t933015752 * f6;
	String_t* f7;
	String_t* f8;
	int32_t f9;
	t605667718 * f10;
	int32_t f11;

public:
	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t1462496200, f5)); }
	inline t709926554 * fg5() const { return f5; }
	inline t709926554 ** fag5() { return &f5; }
	inline void fs5(t709926554 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t1462496200, f6)); }
	inline t933015752 * fg6() const { return f6; }
	inline t933015752 ** fag6() { return &f6; }
	inline void fs6(t933015752 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t1462496200, f7)); }
	inline String_t* fg7() const { return f7; }
	inline String_t** fag7() { return &f7; }
	inline void fs7(String_t* value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t1462496200, f8)); }
	inline String_t* fg8() const { return f8; }
	inline String_t** fag8() { return &f8; }
	inline void fs8(String_t* value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}

	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t1462496200, f9)); }
	inline int32_t fg9() const { return f9; }
	inline int32_t* fag9() { return &f9; }
	inline void fs9(int32_t value)
	{
		f9 = value;
	}

	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t1462496200, f10)); }
	inline t605667718 * fg10() const { return f10; }
	inline t605667718 ** fag10() { return &f10; }
	inline void fs10(t605667718 * value)
	{
		f10 = value;
		Il2CppCodeGenWriteBarrier(&f10, value);
	}

	inline static int32_t fog11() { return static_cast<int32_t>(offsetof(t1462496200, f11)); }
	inline int32_t fg11() const { return f11; }
	inline int32_t* fag11() { return &f11; }
	inline void fs11(int32_t value)
	{
		f11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
