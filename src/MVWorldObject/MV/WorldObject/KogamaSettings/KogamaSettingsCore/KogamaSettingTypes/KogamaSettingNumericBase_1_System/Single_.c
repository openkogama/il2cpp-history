
/* KogamaSettingNumericBase`1[System.Single](String, Single, Single, Single,
   KogamaSettingsCollectionBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumericBase`1[System::Single]::KogamaSettingNumericBase_1_System_Single___ctor
               (KogamaSettingNumericBase_1_System_Single_ *this,String *key,float value,float min,
               float max,KogamaSettingsCollectionBase *parent,MethodInfo *method)

{
  KogamaSettingWrapperBase::KogamaSettingWrapperBase__ctor
            ((KogamaSettingWrapperBase *)this,key,parent,(MethodInfo *)0x0);
  pvVar1 = method->klass->rgctx_data[1].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
    pvVar1 = (void *)FUN_?(pvVar1);
  }
  pKVar2 = (KogamaSettingNumeric_1_System_Single_ *)FUN_?(pvVar1);
  pMVar3 = method->klass->rgctx_data[5].method;
  pvVar1 = pMVar3->klass->rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
    pvVar1 = (void *)FUN_?(pvVar1);
  }
  pRVar4 = (RangeValidator_1_System_Single_ *)FUN_?(pvVar1);
  bVar5 = iRam_? != 0;
  (pKVar2->fields).RangeValidator = pRVar4;
  (pRVar4->fields).min = min;
  (pRVar4->fields).max = max;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(pKVar2->fields).RangeValidator >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  pRVar4 = (pKVar2->fields).RangeValidator;
  if (pRVar4 == (RangeValidator_1_System_Single_ *)0x0) {
    FUN_?();
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FUN_?(pRVar4,value,0,pMVar3->klass->rgctx_data[4].rgctxDataDummy);
  FUN_?(pKVar2,value,pMVar3->klass->rgctx_data[6].rgctxDataDummy);
  bVar5 = iRam_? != 0;
  (this->fields).KogamaSettingNumeric = pKVar2;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).KogamaSettingNumeric >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  return;
}


/* Single get_NumericValue() */

float MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
      KogamaSettingNumericBase`1[System::Single]::
      KogamaSettingNumericBase_1_System_Single__get_NumericValue
                (KogamaSettingNumericBase_1_System_Single_ *this,MethodInfo *method)

{
  pKVar1 = (this->fields).KogamaSettingNumeric;
  if (pKVar1 != (KogamaSettingNumeric_1_System_Single_ *)0x0) {
    pOVar2 = (pKVar1->fields)._.value;
    pIVar3 = (method->klass->rgctx_data[2].method)->klass->rgctx_data[1].klass;
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


/* Void set_NumericValue(Single) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumericBase`1[System::Single]::
     KogamaSettingNumericBase_1_System_Single__set_NumericValue
               (KogamaSettingNumericBase_1_System_Single_ *this,float value,MethodInfo *method)

{
  pKVar1 = (this->fields).KogamaSettingNumeric;
  if (pKVar1 == (KogamaSettingNumeric_1_System_Single_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pRVar3 = (pKVar1->fields).RangeValidator;
  if (pRVar3 != (RangeValidator_1_System_Single_ *)0x0) {
    fVar4 = (pRVar3->fields).min;
    if (((value < fVar4) ||
        ((((value <= fVar4 && (value != fVar4)) && (0x7f800000 < (uint)ABS(value))) &&
         ((uint)ABS(fVar4) < 0x7f800001)))) ||
       ((fVar4 = (pRVar3->fields).max, afStackX_10[0] = value, fVar4 <= value &&
        ((fVar4 < value || ((value != fVar4 && ((uint)ABS(value) < 0x7f800001)))))))) {
      afStackX_10[0] = fVar4;
    }
    pOVar5 = (Object *)
             FUN_?((method->klass->rgctx_data[4].method)->klass->rgctx_data[1].
                           rgctxDataDummy,afStackX_10);
    bVar6 = iRam_? != 0;
    (pKVar1->fields)._.value = pOVar5;
    if (bVar6) {
      uVar7 = (uint)((ulonglong)&pKVar1->fields >> 0xc);
      puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar9 = *puVar8;
        LOCK();
        uVar10 = *puVar8;
        if (uVar9 == uVar10) {
          *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (uVar9 != uVar10);
    }
    if ((pKVar1->fields)._.OnValueChange !=
        (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)0x0) {
      pAVar11 = (pKVar1->fields)._.OnValueChange;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pAVar11->fields)._._.invoke_impl)
                ((pAVar11->fields)._._.method_code,pKVar1,(pAVar11->fields)._._.method);
      return;
    }
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

