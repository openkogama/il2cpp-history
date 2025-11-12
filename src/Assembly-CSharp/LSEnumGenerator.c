
/* String Generate(Type, Func`2[String,String]) */

String * Assembly-CSharp.dll::LSEnumGenerator::LSEnumGenerator_Generate
                   (Type *type,Func_2_String_String_ *customStringCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_u000Du000A____public_static_string____0_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = LSEnumGenerator_GenerateEnumCode(type,customStringCallback,(MethodInfo *)0x0);
  if (type != (Type *)0x0) {
    arg0 = (Object *)
           (*(type->klass->vtable).__unknown.methodPtr)(type,(type->klass->vtable).__unknown.method)
    ;
    format = StringLiteral_u000Du000A____public_static_string____0_;
    PStack_2._arg0 = (Object *)0x0;
    PStack_2._arg1 = (Object *)0x0;
    PStack_2._arg2 = (Object *)0x0;
    PStack_2._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              (&PStack_2,arg0,(Object *)pSVar1,(MethodInfo *)0x0);
    PStack_3._arg0 = PStack_2._arg0;
    PStack_3._arg1 = PStack_2._arg1;
    PStack_3._arg2 = PStack_2._arg2;
    PStack_3._args = PStack_2._args;
    pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,format,&PStack_3,(MethodInfo *)0x0);
    return pSVar1;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar4)();
  return pSVar1;
}


/* String GenerateEnumCode(Type, Func`2[String,String]) */

String * Assembly-CSharp.dll::LSEnumGenerator::LSEnumGenerator_GenerateEnumCode
                   (Type *type,Func_2_String_String_ *customStringCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_____________map_Add__int__0___1_);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = ::StringLiteral__;
  if (type != (Type *)0x0) {
    arg0 = (Object *)
           (*(type->klass->vtable).__unknown.methodPtr)(type,(type->klass->vtable).__unknown.method)
    ;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    this = (Array *)(*(type->klass->vtable).GetEnumValues.methodPtr)(type);
    if (this != (Array *)0x0) {
      pIVar2 = mscorlib.dll::System::Array::Array_GetEnumerator(this,(MethodInfo *)0x0);
      while (pIVar2 != (IEnumerator *)0x0) {
        cVar3 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
        if (cVar3 == '\0') {
          lVar4 = FUN_?(pIVar2,TypeInfo__System__IDisposable);
          if (lVar4 != 0) {
            FUN_?(0,TypeInfo__System__IDisposable,lVar4);
          }
          return pSVar1;
        }
        if (pIVar2 == (IEnumerator *)0x0) goto code_?;
        uVar5 = FUN_?(1,TypeInfo__System__Collections__IEnumerator);
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        arg1 = (Object *)
               (*(type->klass->vtable).GetEnumName.methodPtr)
                         (type,uVar5,(type->klass->vtable).GetEnumName.method);
        arg2 = arg1;
        if (customStringCallback != (Func_2_String_String_ *)0x0) {
          arg2 = (Object *)
                 (*(customStringCallback->fields)._._.invoke_impl)
                           ((customStringCallback->fields)._._.method_code,arg1,
                            (customStringCallback->fields)._._.method);
        }
        str1 = mscorlib.dll::System::String::String_Format_2
                         (StringLiteral_____________map_Add__int__0___1_,arg0,arg1,arg2,
                          (MethodInfo *)0x0);
        pSVar1 = mscorlib.dll::System::String::String_Concat_4(pSVar1,str1,(MethodInfo *)0x0);
      }
      goto code_?;
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar6 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar6)();
  return pSVar1;
}

