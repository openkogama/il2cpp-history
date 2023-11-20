
/* Single get_Value() */

float Assembly-CSharp.dll::MVRuntimeDataVariable`1[System::Single]::
      MVRuntimeDataVariable_1_System_Single__get_Value
                (MVRuntimeDataVariable_1_System_Single_ *this,MethodInfo *method)

{
  if (this != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
    unaff_ESI = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value
                          ((MVRuntimeDataVariable *)this,(MethodInfo *)0x0);
    pIVar1 = method->klass->rgctx_data->klass;
    if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
      pIVar1 = (Il2CppClass *)func_?(pIVar1);
    }
    if (unaff_ESI != (Object *)0x0) {
      if ((unaff_ESI->klass->_0).element_class == pIVar1->element_class) {
        pfVar2 = (float *)func_?(unaff_ESI);
        return *pfVar2;
      }
      goto code_?;
    }
  }
  pIVar1 = (Il2CppClass *)func_?();
code_?:
  func_?(unaff_ESI,pIVar1);
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* Void set_Value(Single) */

void Assembly-CSharp.dll::MVRuntimeDataVariable`1[System::Single]::
     MVRuntimeDataVariable_1_System_Single__set_Value
               (MVRuntimeDataVariable_1_System_Single_ *this,float value,MethodInfo *method)

{
  value_00 = (Object *)func_?();
  if (this != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
    MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
              ((MVRuntimeDataVariable *)this,value_00,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

