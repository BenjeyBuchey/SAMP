#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

struct t2193916456;
struct Il2CppObject;
struct t2995724695;
struct t2866849361;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "Il2CppArray.h"
#include "t2193916456.h"
#include "t2193916456MD.h"
#include "Il2CppObject.h"
#include "t2779279689.h"
#include "t211005341.h"
#include "Il2CppObjectMD.h"
#include "t2995724695.h"
#include "t986364934.h"
#include "t3214793280MD.h"
#include "t2995724695MD.h"
#include "Type_tMD.h"
#include "String_t.h"
#include "t3214793280.h"
#include "Type_t.h"
#include "t1864875887.h"
#include "t2146430982MD.h"
#include "t2146430982.h"
#include "t1597784416.h"
#include "t1967233988.h"
#include "t2866849361.h"
#include "t2866849361MD.h"
#include "t1169518982.h"
#include "IntPtr_t.h"
#include "t839097024.h"
#include "t2847414729.h"
#include "t93518347.h"
#include "t3977632096MD.h"
#include "String_tMD.h"
#include "t2420574324MD.h"
#include "t93518347MD.h"
#include "t2847414787.h"
#include "t4095575088.h"
#include "t2420574324.h"
#include "t2778706699.h"
#include "t136131901.h"
#include "t1169518982MD.h"
#include "t4095575088MD.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void m1824216406 (t2193916456 * __this, Il2CppObject * p0, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = p0;
		m1724966759(__this, L_0, (bool)0, NULL);
		return;
	}
}
extern "C"  void m1724966759 (t2193916456 * __this, Il2CppObject * p0, bool p1, const MethodInfo* method)
{
	{
		m1772956182(__this, NULL);
		bool L_0 = p1;
		__this->fs0(L_0);
		Il2CppObject * L_1 = p0;
		m3300556457(__this, L_1, NULL);
		return;
	}
}
extern const Il2CppType* Il2CppObject_0_0_0_var;
extern TypeInfo* t3214793280_TI_var;
extern TypeInfo* Type_t_TI_var;
extern Il2CppCodeGenString* _stringLiteral3237038;
extern Il2CppCodeGenString* _stringLiteral949150354;
extern Il2CppCodeGenString* _stringLiteral3186495209;
extern const uint32_t m1465778495_MetadataUsageId;
extern "C"  void m1465778495 (t2193916456 * __this, t2995724695 * p0, t986364934  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (m1465778495_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Il2CppObject * V_0 = NULL;
	{
		m1772956182(__this, NULL);
		t2995724695 * L_0 = p0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		t3214793280 * L_1 = (t3214793280 *)il2cpp_codegen_object_new(t3214793280_TI_var);
		m135444188(L_1, _stringLiteral3237038, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0017:
	{
		t2995724695 * L_2 = p0;
		bool L_3 = m1462266865(L_2, _stringLiteral949150354, NULL);
		__this->fs0(L_3);
		t2995724695 * L_4 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_TI_var);
		Type_t * L_5 = m3806905434(NULL, LoadTypeToken(Il2CppObject_0_0_0_var), NULL);
		Il2CppObject * L_6 = m4125471336(L_4, _stringLiteral3186495209, L_5, NULL);
		V_0 = L_6;
		Il2CppObject * L_7 = V_0;
		m3300556457(__this, L_7, NULL);
		return;
	}
}
extern "C"  void m3300556457 (t2193916456 * __this, Il2CppObject * p0, const MethodInfo* method)
{
	{
		bool L_0 = __this->fg0();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		Il2CppObject * L_1 = p0;
		t2146430982  L_2 = m4018232088(NULL, L_1, 1, NULL);
		__this->fs1(L_2);
		goto IL_002a;
	}

IL_001d:
	{
		Il2CppObject * L_3 = p0;
		t2146430982  L_4 = m4018232088(NULL, L_3, 0, NULL);
		__this->fs1(L_4);
	}

IL_002a:
	{
		return;
	}
}
extern "C"  bool m281655028 (t2193916456 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = VirtFuncInvoker0< Il2CppObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, __this);
		return (bool)((((int32_t)((((Il2CppObject*)(Il2CppObject *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C"  Il2CppObject * m2183973397 (t2193916456 * __this, const MethodInfo* method)
{
	{
		t2146430982 * L_0 = __this->fag1();
		Il2CppObject * L_1 = m1356841761(L_0, NULL);
		return L_1;
	}
}
extern "C"  bool m2498111523 (t2193916456 * __this, const MethodInfo* method)
{
	{
		bool L_0 = __this->fg0();
		return L_0;
	}
}
extern "C"  void m3030916772 (t2193916456 * __this, const MethodInfo* method)
{
	t1967233988 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t1967233988 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		t2146430982 * L_0 = __this->fag1();
		m2878302728(L_0, NULL);
		IL2CPP_LEAVE(0x17, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t1967233988 *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		m3027285644(__this, NULL);
		IL2CPP_END_FINALLY(16)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_JUMP_TBL(0x17, IL_0017)
		IL2CPP_RETHROW_IF_UNHANDLED(t1967233988 *)
	}

IL_0017:
	{
		return;
	}
}
extern TypeInfo* t3214793280_TI_var;
extern TypeInfo* t1967233988_TI_var;
extern Il2CppCodeGenString* _stringLiteral3237038;
extern Il2CppCodeGenString* _stringLiteral949150354;
extern Il2CppCodeGenString* _stringLiteral3186495209;
extern const uint32_t m1524996508_MetadataUsageId;
extern "C"  void m1524996508 (t2193916456 * __this, t2995724695 * p0, t986364934  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (m1524996508_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	t1967233988 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t1967233988 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t2995724695 * L_0 = p0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		t3214793280 * L_1 = (t3214793280 *)il2cpp_codegen_object_new(t3214793280_TI_var);
		m135444188(L_1, _stringLiteral3237038, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		t2995724695 * L_2 = p0;
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.WeakReference::get_TrackResurrection() */, __this);
		m3573408328(L_2, _stringLiteral949150354, L_3, NULL);
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		t2995724695 * L_4 = p0;
		Il2CppObject * L_5 = VirtFuncInvoker0< Il2CppObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, __this);
		m469120675(L_4, _stringLiteral3186495209, L_5, NULL);
		goto IL_004a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t1967233988 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t1967233988_TI_var, e.ex->object.klass))
			goto CATCH_0038;
		throw e;
	}

CATCH_0038:
	{ // begin catch(System.Exception)
		t2995724695 * L_6 = p0;
		m469120675(L_6, _stringLiteral3186495209, NULL, NULL);
		goto IL_004a;
	} // end catch (depth: 1)

IL_004a:
	{
		return;
	}
}
extern TypeInfo* t1169518982_TI_var;
extern const uint32_t m3567726553_MetadataUsageId;
extern "C"  void m3567726553 (t2866849361 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (m3567726553_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	t1169518982  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		m1772956182(__this, NULL);
		IntPtr_t L_0 = m2710701471(NULL, ((int32_t)-11), NULL);
		__this->fs1(L_0);
		IntPtr_t L_1 = m2710701471(NULL, ((int32_t)-10), NULL);
		__this->fs0(L_1);
		Initobj (t1169518982_TI_var, (&V_0));
		IntPtr_t L_2 = __this->fg1();
		m4057528648(NULL, L_2, (&V_0), NULL);
		int16_t L_3 = (&V_0)->fg2();
		__this->fs2(L_3);
		return;
	}
}
extern TypeInfo* t4095575088_TI_var;
extern TypeInfo* t3977632096_TI_var;
extern TypeInfo* t2847414787_TI_var;
extern TypeInfo* String_t_TI_var;
extern TypeInfo* t2420574324_TI_var;
extern Il2CppCodeGenString* _stringLiteral1114402996;
extern const uint32_t m1393188309_MetadataUsageId;
extern "C"  t93518347  m1393188309 (t2866849361 * __this, bool p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (m1393188309_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t4095575088  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		Initobj (t4095575088_TI_var, (&V_1));
	}

IL_0008:
	{
		IntPtr_t L_0 = __this->fg0();
		bool L_1 = m9651400(NULL, L_0, (&V_1), 1, (&V_0), NULL);
		if (L_1)
		{
			goto IL_0037;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t3977632096_TI_var);
		int32_t L_2 = m701978199(NULL, NULL);
		int32_t L_3 = L_2;
		Il2CppObject * L_4 = Box(t2847414787_TI_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_TI_var);
		String_t* L_5 = m389863537(NULL, _stringLiteral1114402996, L_4, NULL);
		t2420574324 * L_6 = (t2420574324 *)il2cpp_codegen_object_new(t2420574324_TI_var);
		m1485483280(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6);
	}

IL_0037:
	{
		int16_t L_7 = (&V_1)->fg0();
		if ((((int32_t)L_7) == ((int32_t)1)))
		{
			goto IL_0050;
		}
	}
	{
		bool L_8 = (&V_1)->fg1();
		if (!L_8)
		{
			goto IL_0008;
		}
	}

IL_0050:
	{
		int32_t L_9 = (&V_1)->fg6();
		V_2 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_9&(int32_t)3))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_10 = (&V_1)->fg6();
		V_3 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)12)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_11 = (&V_1)->fg6();
		V_4 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_11&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		uint16_t L_12 = (&V_1)->fg5();
		int16_t L_13 = (&V_1)->fg3();
		bool L_14 = V_4;
		bool L_15 = V_2;
		bool L_16 = V_3;
		t93518347  L_17;
		memset(&L_17, 0, sizeof(L_17));
		m3416959802(&L_17, L_12, L_13, L_14, L_15, L_16, NULL);
		return L_17;
	}
}
extern "C"  IntPtr_t m2710701471 (Il2CppObject * __this , int32_t p0, const MethodInfo* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		int parameterSize = sizeof(int32_t);
		_il2cpp_pinvoke_func = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>("kernel32.dll", "GetStdHandle", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (_il2cpp_pinvoke_func == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'GetStdHandle'"));
		}
	}

	// Marshaling of parameter 'p0' to native representation

	// Native function invocation and marshaling of return value back from native representation
	intptr_t _return_value = _il2cpp_pinvoke_func(p0);
	IntPtr_t __return_value_unmarshaled;
	__return_value_unmarshaled.set_m_value_0(reinterpret_cast<void*>((intptr_t)_return_value));

	il2cpp_codegen_marshal_store_last_error();
	// Marshaling cleanup of parameter 'p0' native representation

	return __return_value_unmarshaled;
}
extern "C"  bool m4057528648 (Il2CppObject * __this , IntPtr_t p0, t1169518982 * p1, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, t1169518982_marshaled_pinvoke*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		int parameterSize = sizeof(IntPtr_t) + sizeof(t1169518982_marshaled_pinvoke*);
		_il2cpp_pinvoke_func = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>("kernel32.dll", "GetConsoleScreenBufferInfo", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (_il2cpp_pinvoke_func == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'GetConsoleScreenBufferInfo'"));
		}
	}

	// Marshaling of parameter 'p0' to native representation

	// Marshaling of parameter 'p1' to native representation
	t1169518982_marshaled_pinvoke _p1_empty = { };
	t1169518982_marshaled_pinvoke* _p1_marshaled = &_p1_empty;

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func(reinterpret_cast<intptr_t>(p0.fg0()), _p1_marshaled);

	il2cpp_codegen_marshal_store_last_error();
	// Marshaling cleanup of parameter 'p0' native representation

	// Marshaling of parameter 'p1' back from native representation
	t1169518982  _p1_result_dereferenced;
	memset(&_p1_result_dereferenced, 0, sizeof(_p1_result_dereferenced));
	t1169518982 * _p1_result = &_p1_result_dereferenced;
	t1169518982_marshal_pinvoke_back(*_p1_marshaled, *_p1_result);
	*p1 = *_p1_result;

	// Marshaling cleanup of parameter 'p1' native representation
	t1169518982_marshal_pinvoke_cleanup(*_p1_marshaled);

	return _return_value;
}
extern "C"  bool m9651400 (Il2CppObject * __this , IntPtr_t p0, t4095575088 * p1, int32_t p2, int32_t* p3, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, t4095575088_marshaled_pinvoke*, int32_t, int32_t*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		int parameterSize = sizeof(IntPtr_t) + sizeof(t4095575088_marshaled_pinvoke*) + sizeof(int32_t) + sizeof(int32_t*);
		_il2cpp_pinvoke_func = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>("kernel32.dll", "ReadConsoleInput", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (_il2cpp_pinvoke_func == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'ReadConsoleInput'"));
		}
	}

	// Marshaling of parameter 'p0' to native representation

	// Marshaling of parameter 'p1' to native representation
	t4095575088_marshaled_pinvoke _p1_empty = { };
	t4095575088_marshaled_pinvoke* _p1_marshaled = &_p1_empty;

	// Marshaling of parameter 'p2' to native representation

	// Marshaling of parameter 'p3' to native representation
	int32_t _p3_empty = 0;
	int32_t* _p3_marshaled = &_p3_empty;

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func(reinterpret_cast<intptr_t>(p0.fg0()), _p1_marshaled, p2, _p3_marshaled);

	il2cpp_codegen_marshal_store_last_error();
	// Marshaling cleanup of parameter 'p0' native representation

	// Marshaling of parameter 'p1' back from native representation
	t4095575088  _p1_result_dereferenced;
	memset(&_p1_result_dereferenced, 0, sizeof(_p1_result_dereferenced));
	t4095575088 * _p1_result = &_p1_result_dereferenced;
	t4095575088_marshal_pinvoke_back(*_p1_marshaled, *_p1_result);
	*p1 = *_p1_result;

	// Marshaling cleanup of parameter 'p1' native representation
	t4095575088_marshal_pinvoke_cleanup(*_p1_marshaled);

	// Marshaling cleanup of parameter 'p2' native representation

	// Marshaling of parameter 'p3' back from native representation
	int32_t _p3_result_dereferenced = 0;
	int32_t* _p3_result = &_p3_result_dereferenced;
	*_p3_result = *_p3_marshaled;
	*p3 = *_p3_result;

	// Marshaling cleanup of parameter 'p3' native representation

	return _return_value;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
