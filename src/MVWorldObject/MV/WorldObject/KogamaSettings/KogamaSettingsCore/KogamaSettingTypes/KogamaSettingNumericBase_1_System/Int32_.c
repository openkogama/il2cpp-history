
/* KogamaSettingNumericBase`1[System.Int32](String, Int32, Int32, Int32,
   KogamaSettingsCollectionBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumericBase`1[System::Int32]::KogamaSettingNumericBase_1_System_Int32___ctor
               (KogamaSettingNumericBase_1_System_Int32_ *this,String *key,int32_t value,int32_t min
               ,int32_t max,KogamaSettingsCollectionBase *parent,MethodInfo *method)

{
  KogamaSettingWrapperBase::KogamaSettingWrapperBase__ctor
            ((KogamaSettingWrapperBase *)this,key,parent,(MethodInfo *)0x0);
  pvVar1 = method->klass->rgctx_data[1].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
    pvVar1 = (void *)FUN_?(pvVar1);
  }
  pKVar2 = (KogamaSettingNumeric_1_System_Int32_ *)FUN_?(pvVar1);
  pMVar3 = method->klass->rgctx_data[5].method;
  pvVar1 = pMVar3->klass->rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
    pvVar1 = (void *)FUN_?(pvVar1);
  }
  pRVar4 = (RangeValidator_1_System_Int32_ *)FUN_?(pvVar1);
  bVar5 = iRam_? != 0;
  (pRVar4->fields).min = min;
  (pRVar4->fields).max = max;
  (pKVar2->fields).RangeValidator = pRVar4;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(pKVar2->fields).RangeValidator >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  pRVar4 = (pKVar2->fields).RangeValidator;
  if (pRVar4 == (RangeValidator_1_System_Int32_ *)0x0) {
    FUN_?();
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pIVar11 = pMVar3->klass;
  pvVar1 = pIVar11->rgctx_data[4].rgctxDataDummy;
  if (value < (pRVar4->fields).min) {
    uVar12 = func_?(&TypeInfo__System__Exception);
    pEVar13 = (Exception *)func_?(uVar12);
    pSVar14 = (String *)func_?(&StringLiteral_value__minVal);
    mscorlib.dll::System::Exception::Exception__ctor_1(pEVar13,pSVar14,(MethodInfo *)0x0);
    FUN_?(pEVar13,pvVar1);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if ((pRVar4->fields).max < value) {
    uVar12 = func_?(&TypeInfo__System__Exception);
    pEVar13 = (Exception *)func_?(uVar12);
    pSVar14 = (String *)func_?(&StringLiteral_value___maxVal);
    mscorlib.dll::System::Exception::Exception__ctor_1(pEVar13,pSVar14,(MethodInfo *)0x0);
    FUN_?(pEVar13,pvVar1);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FUN_?(pKVar2,value,pIVar11->rgctx_data[6].rgctxDataDummy);
  bVar5 = iRam_? != 0;
  (this->fields).KogamaSettingNumeric = pKVar2;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).KogamaSettingNumeric >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
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


/* Int32 get_NumericValue() */

int32_t MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
        KogamaSettingNumericBase`1[System::Int32]::
        KogamaSettingNumericBase_1_System_Int32__get_NumericValue
                  (KogamaSettingNumericBase_1_System_Int32_ *this,MethodInfo *method)

{
  pKVar1 = (this->fields).KogamaSettingNumeric;
  if (pKVar1 != (KogamaSettingNumeric_1_System_Int32_ *)0x0) {
    pOVar2 = (pKVar1->fields)._.value;
    pIVar3 = (method->klass->rgctx_data[2].method)->klass->rgctx_data[1].klass;
    if ((pIVar3->field_0x135 & 1) == 0) {
      pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
    }
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class == pIVar3->element_class) {
        return *(int32_t *)&pOVar2[1].klass;
      }
      FUN_?(pOVar2,pIVar3);
      pcVar4 = (code *)swi(3);
      iVar5 = (*pcVar4)();
      return iVar5;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Void set_NumericValue(Int32) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumericBase`1[System::Int32]::
     KogamaSettingNumericBase_1_System_Int32__set_NumericValue
               (KogamaSettingNumericBase_1_System_Int32_ *this,int32_t value,MethodInfo *method)

{
  pKVar1 = (this->fields).KogamaSettingNumeric;
  if (pKVar1 == (KogamaSettingNumeric_1_System_Int32_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pRVar3 = (pKVar1->fields).RangeValidator;
  if (pRVar3 == (RangeValidator_1_System_Int32_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (value < (pRVar3->fields).min) {
    aiStackX_10[0] = (pRVar3->fields).min;
  }
  else {
    iVar4 = (pRVar3->fields).max;
    aiStackX_10[0] = value;
    if (iVar4 < value) {
      aiStackX_10[0] = iVar4;
    }
  }
  pOVar5 = (Object *)
           FUN_?((method->klass->rgctx_data[4].method)->klass->rgctx_data[1].rgctxDataDummy,
                         aiStackX_10);
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
  if ((pKVar1->fields)._.OnValueChange ==
      (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)0x0) {
    return;
  }
  pAVar11 = (pKVar1->fields)._.OnValueChange;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pAVar11->fields)._._.invoke_impl)
            ((pAVar11->fields)._._.method_code,pKVar1,(pAVar11->fields)._._.method);
  return;
}

