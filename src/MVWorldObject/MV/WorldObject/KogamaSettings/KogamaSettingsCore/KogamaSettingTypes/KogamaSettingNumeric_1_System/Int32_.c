
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes
         ::KogamaSettingNumeric`1[System::Int32]::KogamaSettingNumeric_1_System_Int32__ToString
                   (KogamaSettingNumeric_1_System_Int32_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Value__0____1_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Value__0____1_;
  if (this != (KogamaSettingNumeric_1_System_Int32_ *)0x0) {
    PStack_2._arg0 = (Object *)0x0;
    PStack_2._arg1 = (Object *)0x0;
    PStack_2._arg2 = (Object *)0x0;
    PStack_2._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              (&PStack_2,(this->fields)._.value,(Object *)(this->fields).RangeValidator,
               (MethodInfo *)0x0);
    PStack_3._arg0 = PStack_2._arg0;
    PStack_3._arg1 = PStack_2._arg1;
    PStack_3._arg2 = PStack_2._arg2;
    PStack_3._args = PStack_2._args;
    pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
    return pSVar1;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar4)();
  return pSVar1;
}


/* KogamaSettingNumeric`1[System.Int32](Int32, Int32, Int32) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumeric`1[System::Int32]::KogamaSettingNumeric_1_System_Int32___ctor
               (KogamaSettingNumeric_1_System_Int32_ *this,int32_t value,int32_t min,int32_t max,
               MethodInfo *method)

{
  pvVar1 = method->klass->rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
    pvVar1 = (void *)FUN_?(pvVar1);
  }
  pRVar2 = (RangeValidator_1_System_Int32_ *)FUN_?(pvVar1);
  bVar3 = iRam_? != 0;
  (pRVar2->fields).min = min;
  (pRVar2->fields).max = max;
  (this->fields).RangeValidator = pRVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).RangeValidator >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  pRVar2 = (this->fields).RangeValidator;
  if (pRVar2 == (RangeValidator_1_System_Int32_ *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pvVar1 = method->klass->rgctx_data[4].rgctxDataDummy;
  if (value < (pRVar2->fields).min) {
    uVar9 = func_?(&TypeInfo__System__Exception);
    pEVar10 = (Exception *)func_?(uVar9);
    pSVar11 = (String *)func_?(&StringLiteral_value__minVal);
    mscorlib.dll::System::Exception::Exception__ctor_1(pEVar10,pSVar11,(MethodInfo *)0x0);
    FUN_?(pEVar10,pvVar1);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((pRVar2->fields).max < value) {
    uVar9 = func_?(&TypeInfo__System__Exception);
    pEVar10 = (Exception *)func_?(uVar9);
    pSVar11 = (String *)func_?(&StringLiteral_value___maxVal);
    mscorlib.dll::System::Exception::Exception__ctor_1(pEVar10,pSVar11,(MethodInfo *)0x0);
    FUN_?(pEVar10,pvVar1);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((this->fields).RangeValidator == (RangeValidator_1_System_Int32_ *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pOVar12 = (Object *)
           FUN_?((method->klass->rgctx_data[6].method)->klass->rgctx_data[1].rgctxDataDummy,
                         &stack0x00000010);
  bVar3 = iRam_? != 0;
  (this->fields)._.value = pOVar12;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  if ((this->fields)._.OnValueChange ==
      (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)0x0) {
    return;
  }
  pAVar13 = (this->fields)._.OnValueChange;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pAVar13->fields)._._.invoke_impl)
            ((pAVar13->fields)._._.method_code,this,(pAVar13->fields)._._.method);
  return;
}


/* Int32 get_NumericValue() */

int32_t MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
        KogamaSettingNumeric`1[System::Int32]::KogamaSettingNumeric_1_System_Int32__get_NumericValue
                  (KogamaSettingNumeric_1_System_Int32_ *this,MethodInfo *method)

{
  if (this != (KogamaSettingNumeric_1_System_Int32_ *)0x0) {
    pOVar1 = (this->fields)._.value;
    pIVar2 = method->klass->rgctx_data[1].klass;
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


/* Void set_NumericValue(Int32) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumeric`1[System::Int32]::KogamaSettingNumeric_1_System_Int32__set_NumericValue
               (KogamaSettingNumeric_1_System_Int32_ *this,int32_t value,MethodInfo *method)

{
  pRVar1 = (this->fields).RangeValidator;
  if (pRVar1 == (RangeValidator_1_System_Int32_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (value < (pRVar1->fields).min) {
    aiStackX_10[0] = (pRVar1->fields).min;
  }
  else {
    iVar3 = (pRVar1->fields).max;
    aiStackX_10[0] = value;
    if (iVar3 < value) {
      aiStackX_10[0] = iVar3;
    }
  }
  pOVar4 = (Object *)FUN_?(method->klass->rgctx_data[1].rgctxDataDummy,aiStackX_10);
  bVar5 = iRam_? != 0;
  (this->fields)._.value = pOVar4;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  if ((this->fields)._.OnValueChange ==
      (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)0x0) {
    return;
  }
  pAVar10 = (this->fields)._.OnValueChange;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pAVar10->fields)._._.invoke_impl)
            ((pAVar10->fields)._._.method_code,this,(pAVar10->fields)._._.method);
  return;
}

