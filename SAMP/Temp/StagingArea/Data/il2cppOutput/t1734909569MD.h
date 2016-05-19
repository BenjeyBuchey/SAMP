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

struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "t1734909569.h"
#include "Il2CppObject.h"

extern "C"  void m1931948774 (t1734909569 * __this, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C"  bool m383261700 (t1734909569 * __this, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C"  int32_t m4062306408 (t1734909569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

struct t1734909569;
struct t1734909569_marshaled_pinvoke;

extern "C" void t1734909569_marshal_pinvoke(const t1734909569& unmarshaled, t1734909569_marshaled_pinvoke& marshaled);
extern "C" void t1734909569_marshal_pinvoke_back(const t1734909569_marshaled_pinvoke& marshaled, t1734909569& unmarshaled);
extern "C" void t1734909569_marshal_pinvoke_cleanup(t1734909569_marshaled_pinvoke& marshaled);

struct t1734909569;
struct t1734909569_marshaled_com;

extern "C" void t1734909569_marshal_com(const t1734909569& unmarshaled, t1734909569_marshaled_com& marshaled);
extern "C" void t1734909569_marshal_com_back(const t1734909569_marshaled_com& marshaled, t1734909569& unmarshaled);
extern "C" void t1734909569_marshal_com_cleanup(t1734909569_marshaled_com& marshaled);
