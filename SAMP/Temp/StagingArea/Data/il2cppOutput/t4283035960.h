#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1689927879;
struct String_t;

#include "t1689927879.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4283035960  : public t1689927879
{
public:
	t1689927879 * f4;
	String_t* f5;
	int32_t f6;
	bool f7;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t4283035960, f4)); }
	inline t1689927879 * fg4() const { return f4; }
	inline t1689927879 ** fag4() { return &f4; }
	inline void fs4(t1689927879 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t4283035960, f5)); }
	inline String_t* fg5() const { return f5; }
	inline String_t** fag5() { return &f5; }
	inline void fs5(String_t* value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t4283035960, f6)); }
	inline int32_t fg6() const { return f6; }
	inline int32_t* fag6() { return &f6; }
	inline void fs6(int32_t value)
	{
		f6 = value;
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t4283035960, f7)); }
	inline bool fg7() const { return f7; }
	inline bool* fag7() { return &f7; }
	inline void fs7(bool value)
	{
		f7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
