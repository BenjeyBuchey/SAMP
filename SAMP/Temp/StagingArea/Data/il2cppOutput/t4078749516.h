#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;

#include "t2513933869.h"
#include "t67634583.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4078749516  : public t2513933869
{
public:
	bool f17;
	String_t* f18;

public:
	inline static int32_t fog17() { return static_cast<int32_t>(offsetof(t4078749516, f17)); }
	inline bool fg17() const { return f17; }
	inline bool* fag17() { return &f17; }
	inline void fs17(bool value)
	{
		f17 = value;
	}

	inline static int32_t fog18() { return static_cast<int32_t>(offsetof(t4078749516, f18)); }
	inline String_t* fg18() const { return f18; }
	inline String_t** fag18() { return &f18; }
	inline void fs18(String_t* value)
	{
		f18 = value;
		Il2CppCodeGenWriteBarrier(&f18, value);
	}
};

struct t4078749516_SFs
{
public:
	int32_t f16;

public:
	inline static int32_t fog16() { return static_cast<int32_t>(offsetof(t4078749516_SFs, f16)); }
	inline int32_t fg16() const { return f16; }
	inline int32_t* fag16() { return &f16; }
	inline void fs16(int32_t value)
	{
		f16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
