#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t219029575;
struct t1833047712;
struct t58506160;

#include "t219029575.h"
#include "t2472288632.h"
#include "IntPtr_t.h"
#include "t2146430982.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1132884186  : public t219029575
{
public:
	t219029575 * f2;
	int32_t f3;
	bool f4;
	bool f5;
	t1833047712 * f6;
	IntPtr_t f7;
	t58506160* f8;
	t2146430982  f9;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1132884186, f2)); }
	inline t219029575 * fg2() const { return f2; }
	inline t219029575 ** fag2() { return &f2; }
	inline void fs2(t219029575 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1132884186, f3)); }
	inline int32_t fg3() const { return f3; }
	inline int32_t* fag3() { return &f3; }
	inline void fs3(int32_t value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1132884186, f4)); }
	inline bool fg4() const { return f4; }
	inline bool* fag4() { return &f4; }
	inline void fs4(bool value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t1132884186, f5)); }
	inline bool fg5() const { return f5; }
	inline bool* fag5() { return &f5; }
	inline void fs5(bool value)
	{
		f5 = value;
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t1132884186, f6)); }
	inline t1833047712 * fg6() const { return f6; }
	inline t1833047712 ** fag6() { return &f6; }
	inline void fs6(t1833047712 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t1132884186, f7)); }
	inline IntPtr_t fg7() const { return f7; }
	inline IntPtr_t* fag7() { return &f7; }
	inline void fs7(IntPtr_t value)
	{
		f7 = value;
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t1132884186, f8)); }
	inline t58506160* fg8() const { return f8; }
	inline t58506160** fag8() { return &f8; }
	inline void fs8(t58506160* value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}

	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t1132884186, f9)); }
	inline t2146430982  fg9() const { return f9; }
	inline t2146430982 * fag9() { return &f9; }
	inline void fs9(t2146430982  value)
	{
		f9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
