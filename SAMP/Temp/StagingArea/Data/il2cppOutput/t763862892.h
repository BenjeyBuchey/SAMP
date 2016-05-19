#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "t4014882752.h"
#include "t763862892.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t763862892 
{
public:
	int64_t f8;

public:
	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t763862892, f8)); }
	inline int64_t fg8() const { return f8; }
	inline int64_t* fag8() { return &f8; }
	inline void fs8(int64_t value)
	{
		f8 = value;
	}
};

struct t763862892_SFs
{
public:
	t763862892  f5;
	t763862892  f6;
	t763862892  f7;

public:
	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t763862892_SFs, f5)); }
	inline t763862892  fg5() const { return f5; }
	inline t763862892 * fag5() { return &f5; }
	inline void fs5(t763862892  value)
	{
		f5 = value;
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t763862892_SFs, f6)); }
	inline t763862892  fg6() const { return f6; }
	inline t763862892 * fag6() { return &f6; }
	inline void fs6(t763862892  value)
	{
		f6 = value;
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t763862892_SFs, f7)); }
	inline t763862892  fg7() const { return f7; }
	inline t763862892 * fag7() { return &f7; }
	inline void fs7(t763862892  value)
	{
		f7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.TimeSpan
struct t763862892_marshaled_pinvoke
{
	int64_t f8;
};
// Native definition for marshalling of: System.TimeSpan
struct t763862892_marshaled_com
{
	int64_t f8;
};
