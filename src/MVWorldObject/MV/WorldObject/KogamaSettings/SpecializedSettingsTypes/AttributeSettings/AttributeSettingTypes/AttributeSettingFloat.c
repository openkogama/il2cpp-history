
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
         AttributeSettings::AttributeSettingTypes::AttributeSettingFloat::
         AttributeSettingFloat_ToString(AttributeSettingFloat *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingsExclusivityFlag
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AttributeValue__0___AttributePoi);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  args = (Object__Array *)FUN_?(TypeInfo__System__Object,4);
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__IAttributePointFloatCalculator
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumeric<float>__get_NumericValue__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pKVar1 = (this->fields)._.KogamaSettingNumeric;
  pIVar2 = (this->fields).Calculator;
  if (pKVar1 != (KogamaSettingNumeric_1_System_Single_ *)0x0) {
    pOVar3 = (pKVar1->fields)._.value;
    pIVar4 = MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumeric<float>__get_NumericValue__
             ->klass->rgctx_data[1].klass;
    if ((pIVar4->field_0x135 & 1) == 0) {
      pIVar4 = (Il2CppClass *)FUN_?(pIVar4);
    }
    if (pOVar3 != (Object *)0x0) {
      if ((pOVar3->klass->_0).element_class != pIVar4->element_class) {
        FUN_?(pOVar3,pIVar4);
        pcVar5 = (code *)swi(3);
        pSVar6 = (String *)(*pcVar5)();
        return pSVar6;
      }
      uVar7 = *(undefined4 *)&pOVar3[1].klass;
      if (pIVar2 != (IAttributePointFloatCalculator *)0x0) {
        pIVar8 = pIVar2->klass;
        uVar9 = 0;
        uVar10._0_1_ = (pIVar8->_1).rank;
        uVar10._1_1_ = (pIVar8->_1).minimumAlignment;
        if (uVar10 != 0) {
          do {
            if (pIVar8->interfaceOffsets[uVar9].interfaceType ==
                (Il2CppClass *)
                TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__IAttributePointFloatCalculator
               ) {
              pIVar11 = &pIVar8->vtable + pIVar8->interfaceOffsets[uVar9].offset;
              goto code_?;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar10);
        }
        pIVar11 = (IAttributePointFloatCalculator__VTable *)
                 FUN_?(pIVar2,
                               TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__IAttributePointFloatCalculator
                               ,0);
code_?:
        aiStackX_8[0] = (*(pIVar11->Calc).methodPtr)(pIVar2,uVar7,(pIVar11->Calc).method);
        lVar12 = FUN_?(uRam_?,aiStackX_8);
        if (args != (Object__Array *)0x0) {
          if ((lVar12 != 0) &&
             (lVar13 = FUN_?(lVar12,(args->klass->_0).element_class), lVar13 == 0)) {
            uVar14 = FUN_?();
            FUN_?(uVar14,0);
            pcVar5 = (code *)swi(3);
            pSVar6 = (String *)(*pcVar5)();
            return pSVar6;
          }
          FUN_?(args,0,lVar12);
          pIVar2 = (this->fields).Calculator;
          if ((pIVar2 != (IAttributePointFloatCalculator *)0x0) &&
             (lVar12 = FUN_?(pIVar2,(args->klass->_0).element_class), lVar12 == 0)) {
            uVar14 = FUN_?();
            FUN_?(uVar14,0);
            pcVar5 = (code *)swi(3);
            pSVar6 = (String *)(*pcVar5)();
            return pSVar6;
          }
          FUN_?(args,1,pIVar2);
          aiStackX_8[0] = (this->fields)._ExclusivityFlag_k__BackingField;
          lVar12 = FUN_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingsExclusivityFlag
                                 ,aiStackX_8);
          if ((lVar12 != 0) &&
             (lVar13 = FUN_?(lVar12,(args->klass->_0).element_class), lVar13 == 0)) {
            uVar14 = FUN_?();
            FUN_?(uVar14,0);
            pcVar5 = (code *)swi(3);
            pSVar6 = (String *)(*pcVar5)();
            return pSVar6;
          }
          FUN_?(args,2,lVar12);
          pKVar1 = (this->fields)._.KogamaSettingNumeric;
          if ((pKVar1 != (KogamaSettingNumeric_1_System_Single_ *)0x0) &&
             (lVar12 = FUN_?(pKVar1,(args->klass->_0).element_class), lVar12 == 0)) {
            uVar14 = FUN_?();
            FUN_?(uVar14,0);
            pcVar5 = (code *)swi(3);
            pSVar6 = (String *)(*pcVar5)();
            return pSVar6;
          }
          FUN_?(args,3);
          pSVar6 = StringLiteral_AttributeValue__0___AttributePoi;
          PStack_15._arg0 = (Object *)0x0;
          PStack_15._arg1 = (Object *)0x0;
          PStack_15._arg2 = (Object *)0x0;
          PStack_15._args = (Object__Array *)0x0;
          mscorlib.dll::System::ParamsArray::ParamsArray__ctor_3(&PStack_15,args,(MethodInfo *)0x0);
          PStack_16._arg0 = PStack_15._arg0;
          PStack_16._arg1 = PStack_15._arg1;
          PStack_16._arg2 = PStack_15._arg2;
          PStack_16._args = PStack_15._args;
          pSVar6 = mscorlib.dll::System::String::String_FormatHelper
                              ((IFormatProvider *)0x0,pSVar6,&PStack_16,(MethodInfo *)0x0);
          return pSVar6;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar5)();
  return pSVar6;
}


/* AttributeSettingFloat(String, Single, Single, Single, IAttributePointFloatCalculator,
   KogamaSettingsCollectionBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings
     ::AttributeSettingTypes::AttributeSettingFloat::AttributeSettingFloat__ctor
               (AttributeSettingFloat *this,String *key,float value,float min,float max,
               IAttributePointFloatCalculator *calculator,KogamaSettingsCollectionBase *parent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__KogamaSettingNumericBase_System__String__float__float__float__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
  KogamaSettingNumericBase_1_System_Single___ctor
            ((KogamaSettingNumericBase_1_System_Single_ *)this,key,value,min,max,parent,
             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__KogamaSettingNumericBase_System__String__float__float__float__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
            );
  bVar1 = iRam_? != 0;
  (this->fields).Calculator = calculator;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).Calculator >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}


/* AttributeSettingFloat(String, Single, Single, Single, IAttributePointFloatCalculator,
   AttributeSettingsExclusivityFlag, KogamaSettingsCollectionBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings
     ::AttributeSettingTypes::AttributeSettingFloat::AttributeSettingFloat__ctor_1
               (AttributeSettingFloat *this,String *key,float value,float min,float max,
               IAttributePointFloatCalculator *calculator,
               AttributeSettingsExclusivityFlag__Enum attributeSettingsExclusivityFlag,
               KogamaSettingsCollectionBase *parent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__KogamaSettingNumericBase_System__String__float__float__float__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
  KogamaSettingNumericBase_1_System_Single___ctor
            ((KogamaSettingNumericBase_1_System_Single_ *)this,key,value,min,max,parent,
             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__KogamaSettingNumericBase_System__String__float__float__float__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
            );
  bVar1 = iRam_? != 0;
  (this->fields).Calculator = calculator;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).Calculator >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  (this->fields)._ExclusivityFlag_k__BackingField = attributeSettingsExclusivityFlag;
  return;
}


/* Int32 get_AttributeValue() */

int32_t MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
        AttributeSettings::AttributeSettingTypes::AttributeSettingFloat::
        AttributeSettingFloat_get_AttributeValue(AttributeSettingFloat *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__IAttributePointFloatCalculator
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumeric<float>__get_NumericValue__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).Calculator;
  pKVar2 = (this->fields)._.KogamaSettingNumeric;
  if (pKVar2 != (KogamaSettingNumeric_1_System_Single_ *)0x0) {
    pOVar3 = (pKVar2->fields)._.value;
    pIVar4 = MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumeric<float>__get_NumericValue__
             ->klass->rgctx_data[1].klass;
    if ((pIVar4->field_0x135 & 1) == 0) {
      pIVar4 = (Il2CppClass *)FUN_?(pIVar4);
    }
    if (pOVar3 != (Object *)0x0) {
      if ((pOVar3->klass->_0).element_class != pIVar4->element_class) {
        FUN_?(pOVar3,pIVar4);
        pcVar5 = (code *)swi(3);
        iVar6 = (*pcVar5)();
        return iVar6;
      }
      if (pIVar1 != (IAttributePointFloatCalculator *)0x0) {
        pIVar7 = pIVar1->klass;
        uVar8 = 0;
        uVar9._0_1_ = (pIVar7->_1).rank;
        uVar9._1_1_ = (pIVar7->_1).minimumAlignment;
        if (uVar9 != 0) {
          do {
            if (pIVar7->interfaceOffsets[uVar8].interfaceType ==
                (Il2CppClass *)
                TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__IAttributePointFloatCalculator
               ) {
              pIVar10 = &pIVar7->vtable + pIVar7->interfaceOffsets[uVar8].offset;
              goto code_?;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar9);
        }
        pIVar10 = (IAttributePointFloatCalculator__VTable *)
                 FUN_?(pIVar1,
                               TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__IAttributePointFloatCalculator
                               ,0);
code_?:
        UNRECOVERED_JUMPTABLE = (pIVar10->Calc).methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar6 = (*UNRECOVERED_JUMPTABLE)(pIVar1,UNRECOVERED_JUMPTABLE,(pIVar10->Calc).method);
        return iVar6;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}

