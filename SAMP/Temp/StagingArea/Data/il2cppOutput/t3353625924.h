#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2956870243;
struct String_t;

#include "t4014882752.h"
#include "IntPtr_t.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3353625924 
{
public:
	IntPtr_t f0;
	IntPtr_t f1;
	int32_t f2;
	int32_t f3;
	t2956870243* f4;
	t2956870243* f5;
	String_t* f6;
	String_t* f7;
	IntPtr_t f8;
	bool f9;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3353625924, f0)); }
	inline IntPtr_t fg0() const { return f0; }
	inline IntPtr_t* fag0() { return &f0; }
	inline void fs0(IntPtr_t value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3353625924, f1)); }
	inline IntPtr_t fg1() const { return f1; }
	inline IntPtr_t* fag1() { return &f1; }
	inline void fs1(IntPtr_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3353625924, f2)); }
	inline int32_t fg2() const { return f2; }
	inline int32_t* fag2() { return &f2; }
	inline void fs2(int32_t value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3353625924, f3)); }
	inline int32_t fg3() const { return f3; }
	inline int32_t* fag3() { return &f3; }
	inline void fs3(int32_t value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3353625924, f4)); }
	inline t2956870243* fg4() const { return f4; }
	inline t2956870243** fag4() { return &f4; }
	inline void fs4(t2956870243* value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t3353625924, f5)); }
	inline t2956870243* fg5() const { return f5; }
	inline t2956870243** fag5() { return &f5; }
	inline void fs5(t2956870243* value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t3353625924, f6)); }
	inline String_t* fg6() const { return f6; }
	inline String_t** fag6() { return &f6; }
	inline void fs6(String_t* value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t3353625924, f7)); }
	inline String_t* fg7() const { return f7; }
	inline String_t** fag7() { return &f7; }
	inline void fs7(String_t* value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t3353625924, f8)); }
	inline IntPtr_t fg8() const { return f8; }
	inline IntPtr_t* fag8() { return &f8; }
	inline void fs8(IntPtr_t value)
	{
		f8 = value;
	}

	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t3353625924, f9)); }
	inline bool fg9() const { return f9; }
	inline bool* fag9() { return &f9; }
	inline void fs9(bool value)
	{
		f9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.Diagnostics.Process/ProcInfo
struct t3353625924_marshaled_pinvoke
{
	intptr_t f0;
	intptr_t f1;
	int32_t f2;
	int32_t f3;
	char** f4;
	char** f5;
	char* f6;
	char* f7;
	intptr_t f8;
	int32_t f9;
};
// Native definition for marshalling of: System.Diagnostics.Process/ProcInfo
struct t3353625924_marshaled_com
{
	intptr_t f0;
	intptr_t f1;
	int32_t f2;
	int32_t f3;
	uint16_t** f4;
	uint16_t** f5;
	uint16_t* f6;
	uint16_t* f7;
	intptr_t f8;
	int32_t f9;
};
