
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
         AttributeSettings::AttributeSettingTypes::AttributeSettingInt::AttributeSettingInt_ToString
                   (AttributeSettingInt *this,MethodInfo *method)

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
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__IAttributePointIntCalculator
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumeric<int>__get_NumericValue__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pKVar1 = (this->fields)._.KogamaSettingNumeric;
  pIVar2 = (this->fields).Calculator;
  if (pKVar1 != (KogamaSettingNumeric_1_System_Int32_ *)0x0) {
    pOVar3 = (pKVar1->fields)._.value;
    pIVar4 = MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumeric<int>__get_NumericValue__
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
      if (pIVar2 != (IAttributePointIntCalculator *)0x0) {
        aiStackX_8[0] =
             FUN_?(0,
                           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__IAttributePointIntCalculator
                           ,pIVar2);
        lVar7 = FUN_?(uRam_?,aiStackX_8);
        if (args != (Object__Array *)0x0) {
          if (lVar7 != 0) {
            lVar8 = FUN_?(lVar7,(args->klass->_0).element_class);
            if (lVar8 == 0) {
              uVar9 = FUN_?();
              FUN_?(uVar9,0);
              pcVar5 = (code *)swi(3);
              pSVar6 = (String *)(*pcVar5)();
              return pSVar6;
            }
          }
          FUN_?(args,0,lVar7);
          pIVar2 = (this->fields).Calculator;
          if (pIVar2 != (IAttributePointIntCalculator *)0x0) {
            lVar7 = FUN_?(pIVar2,(args->klass->_0).element_class);
            if (lVar7 == 0) {
              uVar9 = FUN_?();
              FUN_?(uVar9,0);
              pcVar5 = (code *)swi(3);
              pSVar6 = (String *)(*pcVar5)();
              return pSVar6;
            }
          }
          FUN_?(args,1,pIVar2);
          aiStackX_8[0] = (this->fields)._ExclusivityFlag_k__BackingField;
          lVar7 = FUN_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingsExclusivityFlag
                                ,aiStackX_8);
          if (lVar7 != 0) {
            lVar8 = FUN_?(lVar7,(args->klass->_0).element_class);
            if (lVar8 == 0) {
              uVar9 = FUN_?();
              FUN_?(uVar9,0);
              pcVar5 = (code *)swi(3);
              pSVar6 = (String *)(*pcVar5)();
              return pSVar6;
            }
          }
          FUN_?(args,2,lVar7);
          pKVar1 = (this->fields)._.KogamaSettingNumeric;
          if (pKVar1 != (KogamaSettingNumeric_1_System_Int32_ *)0x0) {
            lVar7 = FUN_?(pKVar1,(args->klass->_0).element_class);
            if (lVar7 == 0) {
              uVar9 = FUN_?();
              FUN_?(uVar9,0);
              pcVar5 = (code *)swi(3);
              pSVar6 = (String *)(*pcVar5)();
              return pSVar6;
            }
          }
          FUN_?(args,3);
          pSVar6 = StringLiteral_AttributeValue__0___AttributePoi;
          PStack_10._arg0 = (Object *)0x0;
          PStack_10._arg1 = (Object *)0x0;
          PStack_10._arg2 = (Object *)0x0;
          PStack_10._args = (Object__Array *)0x0;
          mscorlib.dll::System::ParamsArray::ParamsArray__ctor_3(&PStack_10,args,(MethodInfo *)0x0);
          PStack_11._arg0 = PStack_10._arg0;
          PStack_11._arg1 = PStack_10._arg1;
          PStack_11._arg2 = PStack_10._arg2;
          PStack_11._args = PStack_10._args;
          pSVar6 = mscorlib.dll::System::String::String_FormatHelper
                             ((IFormatProvider *)0x0,pSVar6,&PStack_11,(MethodInfo *)0x0);
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


/* AttributeSettingInt(String, Int32, Int32, Int32, IAttributePointIntCalculator,
   KogamaSettingsCollectionBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings
     ::AttributeSettingTypes::AttributeSettingInt::AttributeSettingInt__ctor
               (AttributeSettingInt *this,String *key,int32_t value,int32_t min,int32_t max,
               IAttributePointIntCalculator *calculator,KogamaSettingsCollectionBase *parent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
  KogamaSettingNumericBase_1_System_Int32___ctor
            ((KogamaSettingNumericBase_1_System_Int32_ *)this,key,value,min,max,parent,
             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
            );
  bVar1 = iRam_? != 0;
  (this->fields).Calculator = calculator;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).Calculator >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}


/* AttributeSettingInt(String, Int32, Int32, Int32, IAttributePointIntCalculator,
   AttributeSettingsExclusivityFlag, KogamaSettingsCollectionBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings
     ::AttributeSettingTypes::AttributeSettingInt::AttributeSettingInt__ctor_1
               (AttributeSettingInt *this,String *key,int32_t value,int32_t min,int32_t max,
               IAttributePointIntCalculator *calculator,
               AttributeSettingsExclusivityFlag__Enum attributeSettingsExclusivityFlag,
               KogamaSettingsCollectionBase *parent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
  KogamaSettingNumericBase_1_System_Int32___ctor
            ((KogamaSettingNumericBase_1_System_Int32_ *)this,key,value,min,max,parent,
             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
            );
  bVar1 = iRam_? != 0;
  (this->fields).Calculator = calculator;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).Calculator >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  (this->fields)._ExclusivityFlag_k__BackingField = attributeSettingsExclusivityFlag;
  return;
}


/* Int32 get_AttributeValue() */

int32_t MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
        AttributeSettings::AttributeSettingTypes::AttributeSettingInt::
        AttributeSettingInt_get_AttributeValue(AttributeSettingInt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__IAttributePointIntCalculator
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumeric<int>__get_NumericValue__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).Calculator;
  pKVar2 = (this->fields)._.KogamaSettingNumeric;
  if (pKVar2 != (KogamaSettingNumeric_1_System_Int32_ *)0x0) {
    pOVar3 = (pKVar2->fields)._.value;
    pIVar4 = MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumeric<int>__get_NumericValue__
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
      if (pIVar1 != (IAttributePointIntCalculator *)0x0) {
        uVar7 = *(uint *)&pOVar3[1].klass;
        uVar8 = 0;
        pIVar9 = pIVar1->klass;
        uVar10._0_1_ = (pIVar9->_1).rank;
        uVar10._1_1_ = (pIVar9->_1).minimumAlignment;
        if (uVar10 != 0) {
          do {
            if (pIVar9->interfaceOffsets[uVar8].interfaceType ==
                (Il2CppClass *)
                TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__IAttributePointIntCalculator
               ) {
              pIVar11 = &pIVar9->vtable + pIVar9->interfaceOffsets[uVar8].offset;
              goto code_?;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar10);
        }
        pIVar11 = (IAttributePointIntCalculator__VTable *)FUN_?(pIVar1);
code_?:
        UNRECOVERED_JUMPTABLE = (pIVar11->Calc).methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar6 = (*UNRECOVERED_JUMPTABLE)
                          (pIVar1,(ulonglong)uVar7,(pIVar11->Calc).method,UNRECOVERED_JUMPTABLE);
        return iVar6;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}

