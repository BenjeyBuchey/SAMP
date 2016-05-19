#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t58506160;

#include "t1590891979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3314116906  : public t1590891979
{
public:

public:
};

struct t3314116906_SFs
{
public:
	String_t* f61;
	t58506160* f62;

public:
	inline static int32_t fog61() { return static_cast<int32_t>(offsetof(t3314116906_SFs, f61)); }
	inline String_t* fg61() const { return f61; }
	inline String_t** fag61() { return &f61; }
	inline void fs61(String_t* value)
	{
		f61 = value;
		Il2CppCodeGenWriteBarrier(&f61, value);
	}

	inline static int32_t fog62() { return static_cast<int32_t>(offsetof(t3314116906_SFs, f62)); }
	inline t58506160* fg62() const { return f62; }
	inline t58506160** fag62() { return &f62; }
	inline void fs62(t58506160* value)
	{
		f62 = value;
		Il2CppCodeGenWriteBarrier(&f62, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
