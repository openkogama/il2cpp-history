
/* Int32 get_Value() */

int32_t Assembly-CSharp.dll::MVRuntimeDataVariable`1[System::Int32]::
        MVRuntimeDataVariable_1_System_Int32__get_Value
                  (MVRuntimeDataVariable_1_System_Int32_ *this,MethodInfo *method)

{
  if (this != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
    unaff_ESI = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value
                          ((MVRuntimeDataVariable *)this,(MethodInfo *)0x0);
    pIVar1 = method->klass->rgctx_data->klass;
    if (pIVar1->initialized_and_no_error == 0) {
      pIVar1 = (Il2CppClass *)func_?(pIVar1);
    }
    if (unaff_ESI != (Object *)0x0) {
      if ((unaff_ESI->klass->_0).element_class == pIVar1->element_class) {
        piVar2 = (int32_t *)func_?(unaff_ESI);
        return *piVar2;
      }
      goto code_?;
    }
  }
  pIVar1 = (Il2CppClass *)func_?();
code_?:
  func_?(unaff_ESI,pIVar1);
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Void set_Value(Int32) */

void Assembly-CSharp.dll::MVRuntimeDataVariable`1[System::Int32]::
     MVRuntimeDataVariable_1_System_Int32__set_Value
               (MVRuntimeDataVariable_1_System_Int32_ *this,int32_t value,MethodInfo *method)

{
  if ((*(byte *)((int)method->klass->rgctx_data->rgctxDataDummy + 0xba) & 1) == 0) {
    func_?();
  }
  value_00 = (Object *)func_?();
  if (this != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
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

