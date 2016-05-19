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


struct t286959936;
struct t286959936_marshaled_pinvoke;

extern "C" void t286959936_marshal_pinvoke(const t286959936& unmarshaled, t286959936_marshaled_pinvoke& marshaled);
extern "C" void t286959936_marshal_pinvoke_back(const t286959936_marshaled_pinvoke& marshaled, t286959936& unmarshaled);
extern "C" void t286959936_marshal_pinvoke_cleanup(t286959936_marshaled_pinvoke& marshaled);

struct t286959936;
struct t286959936_marshaled_com;

extern "C" void t286959936_marshal_com(const t286959936& unmarshaled, t286959936_marshaled_com& marshaled);
extern "C" void t286959936_marshal_com_back(const t286959936_marshaled_com& marshaled, t286959936& unmarshaled);
extern "C" void t286959936_marshal_com_cleanup(t286959936_marshaled_com& marshaled);
