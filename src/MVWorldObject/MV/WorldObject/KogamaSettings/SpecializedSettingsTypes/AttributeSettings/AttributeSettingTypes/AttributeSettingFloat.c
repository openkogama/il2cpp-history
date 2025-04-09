
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
         AttributeSettings::AttributeSettingTypes::AttributeSettingFloat::
         AttributeSettingFloat_ToString(AttributeSettingFloat *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingsExclusivityFlag
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Object);
    func_?(&StringLiteral_AttributeValue__0___AttributePoi);
    cRam_? = '\x01';
  }
  pOVar1 = (Object__Array *)func_?(TypeInfo__System__Object,4);
  pOStack_2 = pOVar1;
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__IAttributePointFloatCalculator
                   );
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumeric<float>__get_NumericValue__
                   );
    cRam_? = '\x01';
  }
  pKVar3 = (this->fields)._.KogamaSettingNumeric;
  pIVar4 = (this->fields).Calculator;
  pIStack_5 = pIVar4;
  if ((pKVar3 == (KogamaSettingNumeric_1_System_Single_ *)0x0) ||
     (fStack_6 = KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumeric`1[System::Single]::
                  KogamaSettingNumeric_1_System_Single__get_NumericValue
                            (pKVar3,
                             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumeric<float>__get_NumericValue__
                            ), pIVar4 == (IAttributePointFloatCalculator *)0x0)) {
code_?:
    func_?();
code_?:
    uVar7 = func_?(0);
    func_?(uVar7);
code_?:
    uVar7 = func_?(0);
    func_?(uVar7);
code_?:
    uVar7 = func_?(0);
    func_?(uVar7);
  }
  else {
    uVar8 = 0;
    uStack_9 = 0;
    pIStack_10 = pIStack_5->klass;
    uVar11._0_1_ = (pIStack_10->_1).rank;
    uVar11._1_1_ = (pIStack_10->_1).minimumAlignment;
    if (uVar11 != 0) {
      do {
        pOVar1 = pOStack_2;
        if (pIStack_10->interfaceOffsets[uVar8].interfaceType ==
            (Il2CppClass *)
            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__IAttributePointFloatCalculator
           ) {
          ppMVar12 = &(&pIStack_10->vtable)[pIStack_10->interfaceOffsets[uVar8].offset].Calc.method;
          goto code_?;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar11);
    }
    ppMVar12 = (MethodInfo **)
              func_?(pIStack_5,
                              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__IAttributePointFloatCalculator
                              ,0);
code_?:
    uStack_13 = (*(code *)*ppMVar12)(pIStack_5,fStack_6,ppMVar12[1]);
    pOVar14 = (Object *)func_?(TypeInfo__System__Int32,&uStack_13);
    if (pOVar1 == (Object__Array *)0x0) goto code_?;
    if ((pOVar14 != (Object *)0x0) &&
       (iVar15 = func_?(pOVar14,(pOVar1->klass->_0).element_class), iVar15 == 0))
    goto code_?;
    if (pOVar1->max_length == 0) goto code_?;
    pOVar1->vector[0] = pOVar14;
    func_?(pOVar1->vector,pOVar14);
    pOVar14 = (Object *)(this->fields).Calculator;
    if ((pOVar14 != (Object *)0x0) &&
       (iVar15 = func_?(pOVar14,(pOVar1->klass->_0).element_class), iVar15 == 0))
    goto code_?;
    if (pOVar1->max_length < 2) goto code_?;
    pOVar1->vector[1] = pOVar14;
    func_?(pOVar1->vector + 1,pOVar14);
    iStack_16 = (this->fields)._ExclusivityFlag_k__BackingField;
    pOVar14 = (Object *)
             func_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingsExclusivityFlag
                             ,&iStack_16);
    if ((pOVar14 != (Object *)0x0) &&
       (iVar15 = func_?(pOVar14,(pOVar1->klass->_0).element_class), iVar15 == 0))
    goto code_?;
    if (pOVar1->max_length < 3) goto code_?;
    pOVar1->vector[2] = pOVar14;
    func_?(pOVar1->vector + 2,pOVar14);
    pKVar3 = (this->fields)._.KogamaSettingNumeric;
    if ((pKVar3 == (KogamaSettingNumeric_1_System_Single_ *)0x0) ||
       (iVar15 = func_?(pKVar3,(pOVar1->klass->_0).element_class), iVar15 != 0)) {
      if (3 < pOVar1->max_length) {
        pOVar1->vector[3] = (Object *)pKVar3;
        func_?(pOVar1->vector + 3,pKVar3);
        pSVar17 = mscorlib.dll::System::String::String_Format_3
                           (StringLiteral_AttributeValue__0___AttributePoi,pOVar1,(MethodInfo *)0x0)
        ;
        return pSVar17;
      }
      goto code_?;
    }
  }
  uVar7 = func_?(0);
  func_?(uVar7);
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  pSVar17 = (String *)(*pcVar18)();
  return pSVar17;
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
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__KogamaSettingNumericBase_System__String__float__float__float__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                   );
    cRam_? = '\x01';
  }
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
  KogamaSettingNumericBase_1_System_Single___ctor
            ((KogamaSettingNumericBase_1_System_Single_ *)this,key,value,min,max,parent,
             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__KogamaSettingNumericBase_System__String__float__float__float__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
            );
  (this->fields).Calculator = calculator;
  func_?(&(this->fields).Calculator,calculator);
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
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__KogamaSettingNumericBase_System__String__float__float__float__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                   );
    cRam_? = '\x01';
  }
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
  KogamaSettingNumericBase_1_System_Single___ctor
            ((KogamaSettingNumericBase_1_System_Single_ *)this,key,value,min,max,parent,
             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__KogamaSettingNumericBase_System__String__float__float__float__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
            );
  (this->fields).Calculator = calculator;
  func_?(&(this->fields).Calculator,calculator);
  (this->fields)._ExclusivityFlag_k__BackingField = attributeSettingsExclusivityFlag;
  return;
}


/* Int32 get_AttributeValue() */

int32_t MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
        AttributeSettings::AttributeSettingTypes::AttributeSettingFloat::
        AttributeSettingFloat_get_AttributeValue(AttributeSettingFloat *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__IAttributePointFloatCalculator
                   );
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumeric<float>__get_NumericValue__
                   );
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).Calculator;
  this_00 = (this->fields)._.KogamaSettingNumeric;
  if (this_00 != (KogamaSettingNumeric_1_System_Single_ *)0x0) {
    fVar2 = KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumeric`1[System::Single]::
            KogamaSettingNumeric_1_System_Single__get_NumericValue
                      (this_00,
                       MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumeric<float>__get_NumericValue__
                      );
    if (pIVar1 != (IAttributePointFloatCalculator *)0x0) {
      pIVar3 = pIVar1->klass;
      uVar4 = 0;
      uVar5._0_1_ = (pIVar3->_1).rank;
      uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
      if (uVar5 != 0) {
        do {
          if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
              (Il2CppClass *)
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__IAttributePointFloatCalculator
             ) {
            ppMVar6 = &(&pIVar1->klass->vtable)[pIVar1->klass->interfaceOffsets[uVar4].offset].Calc.
                       method;
            goto code_?;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      ppMVar6 = (MethodInfo **)
                func_?(pIVar1,
                                TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__IAttributePointFloatCalculator
                                ,0);
code_?:
      iVar7 = (*(code *)*ppMVar6)(pIVar1,fVar2,ppMVar6[1]);
      return iVar7;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  iVar7 = (*pcVar8)();
  return iVar7;
}

