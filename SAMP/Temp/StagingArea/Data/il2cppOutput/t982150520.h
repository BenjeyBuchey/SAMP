#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct PropertyInfo_t;
struct Type_t;

#include "t3995075053.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t982150520  : public t3995075053
{
public:
	PropertyInfo_t * f3;
	Type_t * f4;
	Type_t * f5;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t982150520, f3)); }
	inline PropertyInfo_t * fg3() const { return f3; }
	inline PropertyInfo_t ** fag3() { return &f3; }
	inline void fs3(PropertyInfo_t * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t982150520, f4)); }
	inline Type_t * fg4() const { return f4; }
	inline Type_t ** fag4() { return &f4; }
	inline void fs4(Type_t * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t982150520, f5)); }
	inline Type_t * fg5() const { return f5; }
	inline Type_t ** fag5() { return &f5; }
	inline void fs5(Type_t * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
