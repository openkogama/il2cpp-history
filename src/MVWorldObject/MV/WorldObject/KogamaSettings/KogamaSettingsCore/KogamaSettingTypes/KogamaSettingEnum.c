
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes
         ::KogamaSettingEnum::KogamaSettingEnum_ToString(KogamaSettingEnum *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Value__0____1_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Value__0____1_;
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


/* KogamaSettingEnum(Int32, Int32, Int32) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingEnum::KogamaSettingEnum__ctor
               (KogamaSettingEnum *this,int32_t value,int32_t min,int32_t max,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__RangeValidator_int__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__AntiCheat__RangeValidator<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = (RangeValidator_1_System_Int32_ *)
           FUN_?(TypeInfo__MV__WorldObject__AntiCheat__RangeValidator<int>);
  bVar2 = iRam_? != 0;
  (pRVar1->fields).min = min;
  (pRVar1->fields).max = max;
  (this->fields).RangeValidator = pRVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).RangeValidator >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  pMVar7 = MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_;
  pRVar1 = (this->fields).RangeValidator;
  if (pRVar1 != (RangeValidator_1_System_Int32_ *)0x0) {
    if (value < (pRVar1->fields).min) {
      uVar8 = func_?(&TypeInfo__System__Exception);
      pEVar9 = (Exception *)func_?(uVar8);
      pSVar10 = (String *)func_?(&StringLiteral_value__minVal);
      mscorlib.dll::System::Exception::Exception__ctor_1(pEVar9,pSVar10,(MethodInfo *)0x0);
      FUN_?(pEVar9,pMVar7);
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((pRVar1->fields).max < value) {
      uVar8 = func_?(&TypeInfo__System__Exception);
      pEVar9 = (Exception *)func_?(uVar8);
      pSVar10 = (String *)func_?(&StringLiteral_value___maxVal);
      mscorlib.dll::System::Exception::Exception__ctor_1(pEVar9,pSVar10,(MethodInfo *)0x0);
      FUN_?(pEVar9,pMVar7);
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pRVar1 = (this->fields).RangeValidator;
    if (pRVar1 != (RangeValidator_1_System_Int32_ *)0x0) {
      if (value < (pRVar1->fields).min) {
        aiStackX_10[0] = (pRVar1->fields).min;
      }
      else {
        iVar12 = (pRVar1->fields).max;
        aiStackX_10[0] = value;
        if (iVar12 < value) {
          aiStackX_10[0] = iVar12;
        }
      }
      pOVar13 = (Object *)FUN_?(uRam_?,aiStackX_10);
      bVar2 = iRam_? != 0;
      (this->fields)._.value = pOVar13;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
        puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar5 = *puVar4;
          LOCK();
          uVar6 = *puVar4;
          if (uVar5 == uVar6) {
            *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (uVar5 != uVar6);
      }
      if ((this->fields)._.OnValueChange ==
          (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)0x0) {
        return;
      }
      pAVar14 = (this->fields)._.OnValueChange;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pAVar14->fields)._._.invoke_impl)
                ((pAVar14->fields)._._.method_code,this,(pAVar14->fields)._._.method);
      return;
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Int32 get_EnumValue() */

int32_t MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
        KogamaSettingEnum::KogamaSettingEnum_get_EnumValue
                  (KogamaSettingEnum *this,MethodInfo *method)

{
  pOVar1 = (this->fields)._.value;
  if (pOVar1 == (Object *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  if ((pOVar1->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
    return *(int32_t *)&pOVar1[1].klass;
  }
  FUN_?(pOVar1,lRam_?);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Void set_EnumValue(Int32) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingEnum::KogamaSettingEnum_set_EnumValue
               (KogamaSettingEnum *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
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
  pOVar4 = (Object *)FUN_?(uRam_?,aiStackX_10);
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

