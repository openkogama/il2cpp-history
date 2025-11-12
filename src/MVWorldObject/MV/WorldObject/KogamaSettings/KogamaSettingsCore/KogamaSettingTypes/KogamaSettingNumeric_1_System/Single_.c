
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes
         ::KogamaSettingNumeric`1[System::Single]::KogamaSettingNumeric_1_System_Single__ToString
                   (KogamaSettingNumeric_1_System_Single_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Value__0____1_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Value__0____1_;
  if (this != (KogamaSettingNumeric_1_System_Single_ *)0x0) {
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


/* KogamaSettingNumeric`1[System.Single](Single, Single, Single) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumeric`1[System::Single]::KogamaSettingNumeric_1_System_Single___ctor
               (KogamaSettingNumeric_1_System_Single_ *this,float value,float min,float max,
               MethodInfo *method)

{
  pvVar1 = method->klass->rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
    pvVar1 = (void *)FUN_?(pvVar1);
  }
  pRVar2 = (RangeValidator_1_System_Single_ *)FUN_?(pvVar1);
  bVar3 = iRam_? != 0;
  (this->fields).RangeValidator = pRVar2;
  (pRVar2->fields).min = min;
  (pRVar2->fields).max = max;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).RangeValidator >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pRVar2 = (this->fields).RangeValidator;
  if (pRVar2 == (RangeValidator_1_System_Single_ *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FUN_?(pRVar2,value,0,method->klass->rgctx_data[4].rgctxDataDummy);
  pRVar2 = (this->fields).RangeValidator;
  if (pRVar2 == (RangeValidator_1_System_Single_ *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  fVar9 = (pRVar2->fields).min;
  if (((value < fVar9) ||
      ((((value <= fVar9 && (value != fVar9)) && (0x7f800000 < (uint)ABS(value))) &&
       ((uint)ABS(fVar9) < 0x7f800001)))) ||
     ((fVar9 = (pRVar2->fields).max, afStackX_10[0] = value, fVar9 <= value &&
      ((fVar9 < value || ((value != fVar9 && ((uint)ABS(value) < 0x7f800001)))))))) {
    afStackX_10[0] = fVar9;
  }
  pOVar10 = (Object *)
           FUN_?((method->klass->rgctx_data[6].method)->klass->rgctx_data[1].rgctxDataDummy,
                         afStackX_10);
  bVar3 = iRam_? != 0;
  (this->fields)._.value = pOVar10;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar7;
      LOCK();
      uVar5 = *puVar7;
      if (uVar6 == uVar5) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar5);
  }
  if ((this->fields)._.OnValueChange !=
      (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)0x0) {
    pAVar11 = (this->fields)._.OnValueChange;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar11->fields)._._.invoke_impl)
              ((pAVar11->fields)._._.method_code,this,(pAVar11->fields)._._.method);
    return;
  }
  return;
}


/* Single get_NumericValue() */

float MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
      KogamaSettingNumeric`1[System::Single]::KogamaSettingNumeric_1_System_Single__get_NumericValue
                (KogamaSettingNumeric_1_System_Single_ *this,MethodInfo *method)

{
  if (this != (KogamaSettingNumeric_1_System_Single_ *)0x0) {
    pOVar1 = (this->fields)._.value;
    pIVar2 = method->klass->rgctx_data[1].klass;
    if ((pIVar2->field_0x135 & 1) == 0) {
      pIVar2 = (Il2CppClass *)FUN_?(pIVar2);
    }
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == pIVar2->element_class) {
        return *(float *)&pOVar1[1].klass;
      }
      FUN_?(pOVar1,pIVar2);
      pcVar3 = (code *)swi(3);
      fVar4 = (float)(*pcVar3)();
      return fVar4;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  fVar4 = (float)(*pcVar3)();
  return fVar4;
}


/* Void set_NumericValue(Single) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumeric`1[System::Single]::KogamaSettingNumeric_1_System_Single__set_NumericValue
               (KogamaSettingNumeric_1_System_Single_ *this,float value,MethodInfo *method)

{
  pRVar1 = (this->fields).RangeValidator;
  if (pRVar1 == (RangeValidator_1_System_Single_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar3 = (pRVar1->fields).min;
  if (((value < fVar3) ||
      ((((value <= fVar3 && (value != fVar3)) && (0x7f800000 < (uint)ABS(value))) &&
       ((uint)ABS(fVar3) < 0x7f800001)))) ||
     ((fVar3 = (pRVar1->fields).max, afStackX_10[0] = value, fVar3 <= value &&
      ((fVar3 < value || ((value != fVar3 && ((uint)ABS(value) < 0x7f800001)))))))) {
    afStackX_10[0] = fVar3;
  }
  pOVar4 = (Object *)FUN_?(method->klass->rgctx_data[1].rgctxDataDummy,afStackX_10);
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
  if ((this->fields)._.OnValueChange !=
      (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)0x0) {
    pAVar10 = (this->fields)._.OnValueChange;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar10->fields)._._.invoke_impl)
              ((pAVar10->fields)._._.method_code,this,(pAVar10->fields)._._.method);
    return;
  }
  return;
}

