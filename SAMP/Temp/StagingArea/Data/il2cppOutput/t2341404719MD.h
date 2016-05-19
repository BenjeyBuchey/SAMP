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


struct t2341404719;
struct t2341404719_marshaled_pinvoke;

extern "C" void t2341404719_marshal_pinvoke(const t2341404719& unmarshaled, t2341404719_marshaled_pinvoke& marshaled);
extern "C" void t2341404719_marshal_pinvoke_back(const t2341404719_marshaled_pinvoke& marshaled, t2341404719& unmarshaled);
extern "C" void t2341404719_marshal_pinvoke_cleanup(t2341404719_marshaled_pinvoke& marshaled);

struct t2341404719;
struct t2341404719_marshaled_com;

extern "C" void t2341404719_marshal_com(const t2341404719& unmarshaled, t2341404719_marshaled_com& marshaled);
extern "C" void t2341404719_marshal_com_back(const t2341404719_marshaled_com& marshaled, t2341404719& unmarshaled);
extern "C" void t2341404719_marshal_com_cleanup(t2341404719_marshaled_com& marshaled);
