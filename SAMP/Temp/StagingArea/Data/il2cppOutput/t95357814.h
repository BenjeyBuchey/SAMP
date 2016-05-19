#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t709926554;
struct t1462496200;
struct String_t;

#include "t1733424026.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t95357814  : public t1733424026
{
public:
	t709926554 * f5;
	t1462496200 * f6;
	String_t* f7;
	bool f8;
	bool f9;
	bool f10;

public:
	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t95357814, f5)); }
	inline t709926554 * fg5() const { return f5; }
	inline t709926554 ** fag5() { return &f5; }
	inline void fs5(t709926554 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t95357814, f6)); }
	inline t1462496200 * fg6() const { return f6; }
	inline t1462496200 ** fag6() { return &f6; }
	inline void fs6(t1462496200 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t95357814, f7)); }
	inline String_t* fg7() const { return f7; }
	inline String_t** fag7() { return &f7; }
	inline void fs7(String_t* value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t95357814, f8)); }
	inline bool fg8() const { return f8; }
	inline bool* fag8() { return &f8; }
	inline void fs8(bool value)
	{
		f8 = value;
	}

	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t95357814, f9)); }
	inline bool fg9() const { return f9; }
	inline bool* fag9() { return &f9; }
	inline void fs9(bool value)
	{
		f9 = value;
	}

	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t95357814, f10)); }
	inline bool fg10() const { return f10; }
	inline bool* fag10() { return &f10; }
	inline void fs10(bool value)
	{
		f10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
