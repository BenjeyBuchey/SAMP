#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t4123145639;
struct t58506160;

#include "t720149587.h"
#include "t1150764700.h"
#include "t2785698635.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t276412187  : public t720149587
{
public:
	t4123145639 * f6;
	uint8_t f7;
	uint8_t f8;
	t58506160* f9;

public:
	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t276412187, f6)); }
	inline t4123145639 * fg6() const { return f6; }
	inline t4123145639 ** fag6() { return &f6; }
	inline void fs6(t4123145639 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t276412187, f7)); }
	inline uint8_t fg7() const { return f7; }
	inline uint8_t* fag7() { return &f7; }
	inline void fs7(uint8_t value)
	{
		f7 = value;
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t276412187, f8)); }
	inline uint8_t fg8() const { return f8; }
	inline uint8_t* fag8() { return &f8; }
	inline void fs8(uint8_t value)
	{
		f8 = value;
	}

	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t276412187, f9)); }
	inline t58506160* fg9() const { return f9; }
	inline t58506160** fag9() { return &f9; }
	inline void fs9(t58506160* value)
	{
		f9 = value;
		Il2CppCodeGenWriteBarrier(&f9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
