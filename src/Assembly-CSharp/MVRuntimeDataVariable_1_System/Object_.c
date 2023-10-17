
/* Object get_Value() */

Object * Assembly-CSharp.dll::MVRuntimeDataVariable`1[System::Object]::
         MVRuntimeDataVariable_1_System_Object__get_Value
                   (MVRuntimeDataVariable_1_System_Object_ *this,MethodInfo *method)

{
  if (this == (MVRuntimeDataVariable_1_System_Object_ *)0x0) {
    func_?();
  }
  else {
    unaff_EDI = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value
                          ((MVRuntimeDataVariable *)this,(MethodInfo *)0x0);
    unaff_ESI = method->klass->rgctx_data->rgctxDataDummy;
    if ((*(byte *)((int)unaff_ESI + 0xba) & 1) == 0) {
      unaff_ESI = (void *)func_?(unaff_ESI);
    }
    if (unaff_EDI == (Object *)0x0) {
      return (Object *)0x0;
    }
    pOVar1 = (Object *)func_?(unaff_EDI,unaff_ESI);
    if (pOVar1 != (Object *)0x0) {
      return pOVar1;
    }
  }
  func_?(unaff_EDI,unaff_ESI);
  pcVar2 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar2)();
  return pOVar1;
}


/* Void set_Value(Object) */

void Assembly-CSharp.dll::MVRuntimeDataVariable`1[System::Object]::
     MVRuntimeDataVariable_1_System_Object__set_Value
               (MVRuntimeDataVariable_1_System_Object_ *this,Object *value,MethodInfo *method)

{
  if (this != (MVRuntimeDataVariable_1_System_Object_ *)0x0) {
    pOVar1 = ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                       (value,(MethodInfo *)0x0);
    pOVar2 = (this->fields)._.value;
    (this->fields)._.value = pOVar1;
    func_?(&(this->fields)._.value,pOVar1);
    if (pOVar2 != pOVar1) {
      if ((this->fields)._.OnChange != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        pMVar3 = (this->fields)._.OnChange;
        ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                  ((this->fields)._.value,(MethodInfo *)0x0);
        (*(pMVar3->fields)._._.invoke_impl)((pMVar3->fields)._._.method_code);
      }
      if (((this->fields)._.writeThrough != 0) &&
         ((this->fields)._.OnWriteThrough != (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0)) {
        pMVar4 = (this->fields)._.OnWriteThrough;
        ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                  ((this->fields)._.value,(MethodInfo *)0x0);
        (*(pMVar4->fields)._._.invoke_impl)((pMVar4->fields)._._.method_code);
      }
    }
    return;
  }
  uVar5 = func_?(&stack0xfffffff0);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

