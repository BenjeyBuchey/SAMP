#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t171953869;
struct String_t;
struct t1099177929;
struct t497901645;
struct t219029575;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3246245734  : public Il2CppObject
{
public:
	t171953869 * f0;
	int32_t f1;
	String_t* f2;
	t1099177929 * f3;
	t497901645 * f4;
	t219029575 * f5;
	String_t* f6;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3246245734, f0)); }
	inline t171953869 * fg0() const { return f0; }
	inline t171953869 ** fag0() { return &f0; }
	inline void fs0(t171953869 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3246245734, f1)); }
	inline int32_t fg1() const { return f1; }
	inline int32_t* fag1() { return &f1; }
	inline void fs1(int32_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3246245734, f2)); }
	inline String_t* fg2() const { return f2; }
	inline String_t** fag2() { return &f2; }
	inline void fs2(String_t* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3246245734, f3)); }
	inline t1099177929 * fg3() const { return f3; }
	inline t1099177929 ** fag3() { return &f3; }
	inline void fs3(t1099177929 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3246245734, f4)); }
	inline t497901645 * fg4() const { return f4; }
	inline t497901645 ** fag4() { return &f4; }
	inline void fs4(t497901645 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t3246245734, f5)); }
	inline t219029575 * fg5() const { return f5; }
	inline t219029575 ** fag5() { return &f5; }
	inline void fs5(t219029575 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t3246245734, f6)); }
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
