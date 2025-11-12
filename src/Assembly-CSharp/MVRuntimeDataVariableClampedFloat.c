
/* MVRuntimeDataVariableClampedFloat(String, Single, Dictionary`2[System.Object,System.Object],
   Boolean, Single, Single) */

void Assembly-CSharp.dll::MVRuntimeDataVariableClampedFloat::MVRuntimeDataVariableClampedFloat__ctor
               (MVRuntimeDataVariableClampedFloat *this,String *variableId,float sendInterval,
               Dictionary_2_System_Object_System_Object_ *initialRuntimeData,bool writeThrough,
               float min,float max,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__MVRuntimeDataVariable<float>__MVRuntimeDataVariable_System__String__float__System__Collections__Generic__Dictionary<System::Object,_System::Object>__bool_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVRuntimeDataVariable::MVRuntimeDataVariable__ctor
            ((MVRuntimeDataVariable *)this,variableId,sendInterval,initialRuntimeData,writeThrough,
             (MethodInfo *)0x0);
  (this->fields).min = min;
  (this->fields).max = max;
  return;
}


/* Single get_Value() */

float Assembly-CSharp.dll::MVRuntimeDataVariableClampedFloat::
      MVRuntimeDataVariableClampedFloat_get_Value
                (MVRuntimeDataVariableClampedFloat *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__MVRuntimeDataVariable<float>__get_Value__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__MVRuntimeDataVariable<float>__get_Value__;
  if (this != (MVRuntimeDataVariableClampedFloat *)0x0) {
    pOVar2 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                       ((this->fields)._._.value,(MethodInfo *)0x0);
    pIVar3 = pMVar1->klass->rgctx_data->klass;
    if ((pIVar3->field_0x135 & 1) == 0) {
      pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
    }
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class == pIVar3->element_class) {
        return *(float *)&pOVar2[1].klass;
      }
      FUN_?(pOVar2,pIVar3);
      pcVar4 = (code *)swi(3);
      fVar5 = (float)(*pcVar4)();
      return fVar5;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  fVar5 = (float)(*pcVar4)();
  return fVar5;
}


/* Void set_Value(Single) */

void Assembly-CSharp.dll::MVRuntimeDataVariableClampedFloat::
     MVRuntimeDataVariableClampedFloat_set_Value
               (MVRuntimeDataVariableClampedFloat *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__MVRuntimeDataVariable<float>__set_Value_float_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  afStackX_10[0] = (this->fields).min;
  if ((afStackX_10[0] <= value) &&
     (fVar1 = (this->fields).max, afStackX_10[0] = value, fVar1 < value)) {
    afStackX_10[0] = fVar1;
  }
  pOVar2 = (Object *)
           FUN_?(MethodInfo__MVRuntimeDataVariable<float>__set_Value_float_->klass->
                         rgctx_data->rgctxDataDummy,afStackX_10);
  pOVar3 = ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                     (pOVar2,(MethodInfo *)0x0);
  bVar4 = iRam_? != 0;
  pOVar2 = (this->fields)._._.value;
  (this->fields)._._.value = pOVar3;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields)._._.value >> 0xc);
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
  if (pOVar2 != pOVar3) {
    if ((this->fields)._._.OnChange != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      pMVar9 = (this->fields)._._.OnChange;
      pOVar2 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                         ((this->fields)._._.value,(MethodInfo *)0x0);
      (*(pMVar9->fields)._._.invoke_impl)
                ((pMVar9->fields)._._.method_code,pOVar2,(pMVar9->fields)._._.method);
    }
    if (((this->fields)._._.writeThrough != 0) &&
       ((this->fields)._._.OnWriteThrough != (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0)) {
      pMVar10 = (this->fields)._._.OnWriteThrough;
      pOVar2 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                         ((this->fields)._._.value,(MethodInfo *)0x0);
      (*(pMVar10->fields)._._.invoke_impl)
                ((pMVar10->fields)._._.method_code,pOVar2,(pMVar10->fields)._._.method);
    }
  }
  return;
}

