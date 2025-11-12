
/* Int32 get_Value() */

int32_t Assembly-CSharp.dll::MVRuntimeDataVariable`1[System::Int32]::
        MVRuntimeDataVariable_1_System_Int32__get_Value
                  (MVRuntimeDataVariable_1_System_Int32_ *this,MethodInfo *method)

{
  if (this != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
    pOVar1 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                       ((this->fields)._.value,(MethodInfo *)0x0);
    pIVar2 = method->klass->rgctx_data->klass;
    if ((pIVar2->field_0x135 & 1) == 0) {
      pIVar2 = (Il2CppClass *)FUN_?(pIVar2);
    }
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == pIVar2->element_class) {
        return *(int32_t *)&pOVar1[1].klass;
      }
      FUN_?(pOVar1,pIVar2);
      pcVar3 = (code *)swi(3);
      iVar4 = (*pcVar3)();
      return iVar4;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Void set_Value(Int32) */

void Assembly-CSharp.dll::MVRuntimeDataVariable`1[System::Int32]::
     MVRuntimeDataVariable_1_System_Int32__set_Value
               (MVRuntimeDataVariable_1_System_Int32_ *this,int32_t value,MethodInfo *method)

{
  aiStackX_10[0] = value;
  pOVar1 = (Object *)FUN_?(method->klass->rgctx_data->rgctxDataDummy,aiStackX_10);
  if (this == (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pOVar3 = ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                     (pOVar1,(MethodInfo *)0x0);
  bVar4 = iRam_? != 0;
  pOVar1 = (this->fields)._.value;
  (this->fields)._.value = pOVar3;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields)._.value >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  if (pOVar1 != pOVar3) {
    if ((this->fields)._.OnChange != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      pMVar9 = (this->fields)._.OnChange;
      pOVar1 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                         ((this->fields)._.value,(MethodInfo *)0x0);
      (*(pMVar9->fields)._._.invoke_impl)
                ((pMVar9->fields)._._.method_code,pOVar1,(pMVar9->fields)._._.method);
    }
    if (((this->fields)._.writeThrough != 0) &&
       ((this->fields)._.OnWriteThrough != (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0)) {
      pMVar10 = (this->fields)._.OnWriteThrough;
      pOVar1 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                         ((this->fields)._.value,(MethodInfo *)0x0);
      (*(pMVar10->fields)._._.invoke_impl)
                ((pMVar10->fields)._._.method_code,pOVar1,(pMVar10->fields)._._.method);
    }
  }
  return;
}

