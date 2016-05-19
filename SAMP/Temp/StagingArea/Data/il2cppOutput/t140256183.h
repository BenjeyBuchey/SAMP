#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;

#include "t569300024.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t140256183  : public t569300024
{
public:
	String_t* f10;
	bool f11;

public:
	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t140256183, f10)); }
	inline String_t* fg10() const { return f10; }
	inline String_t** fag10() { return &f10; }
	inline void fs10(String_t* value)
	{
		f10 = value;
		Il2CppCodeGenWriteBarrier(&f10, value);
	}

	inline static int32_t fog11() { return static_cast<int32_t>(offsetof(t140256183, f11)); }
	inline bool fg11() const { return f11; }
	inline bool* fag11() { return &f11; }
	inline void fs11(bool value)
	{
		f11 = value;
	}
};

struct t140256183_SFs
{
public:
	bool f7;
	String_t* f8;
	String_t* f9;

public:
	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t140256183_SFs, f7)); }
	inline bool fg7() const { return f7; }
	inline bool* fag7() { return &f7; }
	inline void fs7(bool value)
	{
		f7 = value;
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t140256183_SFs, f8)); }
	inline String_t* fg8() const { return f8; }
	inline String_t** fag8() { return &f8; }
	inline void fs8(String_t* value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}

	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t140256183_SFs, f9)); }
	inline String_t* fg9() const { return f9; }
	inline String_t** fag9() { return &f9; }
	inline void fs9(String_t* value)
	{
		f9 = value;
		Il2CppCodeGenWriteBarrier(&f9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
