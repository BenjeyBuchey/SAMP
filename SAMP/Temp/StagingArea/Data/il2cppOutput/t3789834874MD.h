#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "t3789834874.h"
#include "t3968659629.h"
#include "String_t.h"

extern "C"  void m3807212189 (t3789834874 * __this, int32_t p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

struct t3789834874;
struct t3789834874_marshaled_pinvoke;

extern "C" void t3789834874_marshal_pinvoke(const t3789834874& unmarshaled, t3789834874_marshaled_pinvoke& marshaled);
extern "C" void t3789834874_marshal_pinvoke_back(const t3789834874_marshaled_pinvoke& marshaled, t3789834874& unmarshaled);
extern "C" void t3789834874_marshal_pinvoke_cleanup(t3789834874_marshaled_pinvoke& marshaled);

struct t3789834874;
struct t3789834874_marshaled_com;

extern "C" void t3789834874_marshal_com(const t3789834874& unmarshaled, t3789834874_marshaled_com& marshaled);
extern "C" void t3789834874_marshal_com_back(const t3789834874_marshaled_com& marshaled, t3789834874& unmarshaled);
extern "C" void t3789834874_marshal_com_cleanup(t3789834874_marshaled_com& marshaled);
