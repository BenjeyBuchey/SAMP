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


#include "codegen/il2cpp-codegen.h"
#include "t1395746974.h"

extern "C"  void m3230547036 (t1395746974 * __this, int32_t p0, int32_t p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

struct t1395746974;
struct t1395746974_marshaled_pinvoke;

extern "C" void t1395746974_marshal_pinvoke(const t1395746974& unmarshaled, t1395746974_marshaled_pinvoke& marshaled);
extern "C" void t1395746974_marshal_pinvoke_back(const t1395746974_marshaled_pinvoke& marshaled, t1395746974& unmarshaled);
extern "C" void t1395746974_marshal_pinvoke_cleanup(t1395746974_marshaled_pinvoke& marshaled);

struct t1395746974;
struct t1395746974_marshaled_com;

extern "C" void t1395746974_marshal_com(const t1395746974& unmarshaled, t1395746974_marshaled_com& marshaled);
extern "C" void t1395746974_marshal_com_back(const t1395746974_marshaled_com& marshaled, t1395746974& unmarshaled);
extern "C" void t1395746974_marshal_com_cleanup(t1395746974_marshaled_com& marshaled);
