
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
         AttributeSettings::AttributeSettingTypes::AttributeSettingInt::AttributeSettingInt_ToString
                   (AttributeSettingInt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = (Object__Array *)func_?(TypeInfo__System__Object,4);
  pOStack_2 = pOVar1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pKVar3 = (this->fields)._.KogamaSettingNumeric;
  pIVar4 = (this->fields).Calculator;
  pIStack_5 = pIVar4;
  if ((pKVar3 == (KogamaSettingNumeric_1_System_Int32_ *)0x0) ||
     (iStack_6 = KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumeric`1[System::Int32]::
                  KogamaSettingNumeric_1_System_Int32__get_NumericValue
                            (pKVar3,
                             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumeric<int>__get_NumericValue__
                            ), pIVar4 == (IAttributePointIntCalculator *)0x0)) {
code_?:
    func_?(0);
code_?:
    uVar7 = func_?(0,0);
    func_?(uVar7);
code_?:
    uVar7 = func_?(0,0);
    func_?(uVar7);
code_?:
    uVar7 = func_?(0,0);
    func_?(uVar7);
code_?:
    uVar7 = func_?(0,0);
    func_?(uVar7);
code_?:
    uVar7 = func_?(0,0);
    func_?(uVar7);
code_?:
    uVar7 = func_?(0,0);
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
            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__IAttributePointIntCalculator
           ) {
          ppMVar12 = &(&pIStack_10->vtable)[pIStack_10->interfaceOffsets[uVar8].offset].Calc.method;
          goto code_?;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar11);
    }
    ppMVar12 = (MethodInfo **)
              func_?(pIStack_5,
                              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__IAttributePointIntCalculator
                              ,0);
code_?:
    uStack_13 = (*(code *)*ppMVar12)(pIStack_5,iStack_6,ppMVar12[1]);
    pOVar14 = (Object *)func_?(TypeInfo__System__Int32,&uStack_13);
    if (pOVar1 == (Object__Array *)0x0) goto code_?;
    if ((pOVar14 != (Object *)0x0) &&
       (iVar15 = func_?(pOVar14,(pOVar1->klass->_0).element_class), iVar15 == 0))
    goto code_?;
    if (pOVar1->max_length == 0) goto code_?;
    pOVar1->vector[0] = pOVar14;
    pOVar14 = (Object *)(this->fields).Calculator;
    if ((pOVar14 != (Object *)0x0) &&
       (iVar15 = func_?(pOVar14,(pOVar1->klass->_0).element_class), iVar15 == 0))
    goto code_?;
    if (pOVar1->max_length < 2) goto code_?;
    pOVar1->vector[1] = pOVar14;
    pOVar14 = (Object *)
             func_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingsExclusivityFlag
                             ,&stack0xffffffe0);
    if ((pOVar14 != (Object *)0x0) &&
       (iVar15 = func_?(pOVar14,(pOVar1->klass->_0).element_class), iVar15 == 0))
    goto code_?;
    if (pOVar1->max_length < 3) goto code_?;
    pOVar1->vector[2] = pOVar14;
    pKVar3 = (this->fields)._.KogamaSettingNumeric;
    if ((pKVar3 == (KogamaSettingNumeric_1_System_Int32_ *)0x0) ||
       (iVar15 = func_?(pKVar3,(pOVar1->klass->_0).element_class), iVar15 != 0)) {
      if (3 < pOVar1->max_length) {
        pOVar1->vector[3] = (Object *)pKVar3;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar16 = mscorlib.dll::System::String::String_Format_3
                           (StringLiteral_AttributeValue__0___AttributePoi,pOVar1,(MethodInfo *)0x0)
        ;
        return pSVar16;
      }
      goto code_?;
    }
  }
  uVar7 = func_?(0,0);
  func_?(uVar7);
code_?:
  uVar7 = func_?(0,0);
  func_?(uVar7);
  pcVar17 = (code *)swi(3);
  pSVar16 = (String *)(*pcVar17)();
  return pSVar16;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
  KogamaSettingNumericBase_1_System_Int32___ctor
            ((KogamaSettingNumericBase_1_System_Int32_ *)this,key,value,min,max,parent,
             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
            );
  (this->fields).Calculator = calculator;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
  KogamaSettingNumericBase_1_System_Int32___ctor
            ((KogamaSettingNumericBase_1_System_Int32_ *)this,key,value,min,max,parent,
             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
            );
  (this->fields).Calculator = calculator;
  (this->fields)._ExclusivityFlag_k__BackingField = attributeSettingsExclusivityFlag;
  return;
}


/* Int32 get_AttributeValue() */

int32_t MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
        AttributeSettings::AttributeSettingTypes::AttributeSettingInt::
        AttributeSettingInt_get_AttributeValue(AttributeSettingInt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).Calculator;
  this_00 = (this->fields)._.KogamaSettingNumeric;
  if (this_00 != (KogamaSettingNumeric_1_System_Int32_ *)0x0) {
    iVar2 = KogamaSettingsCore::KogamaSettingTypes::KogamaSettingNumeric`1[System::Int32]::
            KogamaSettingNumeric_1_System_Int32__get_NumericValue
                      (this_00,
                       MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumeric<int>__get_NumericValue__
                      );
    if (pIVar1 != (IAttributePointIntCalculator *)0x0) {
      pIVar3 = pIVar1->klass;
      uVar4 = 0;
      uVar5._0_1_ = (pIVar3->_1).rank;
      uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
      if (uVar5 != 0) {
        do {
          if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
              (Il2CppClass *)
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__IAttributePointIntCalculator
             ) {
            iVar6 = pIVar3->interfaceOffsets[uVar4].offset;
            iVar2 = (*(code *)(&pIVar1->klass->vtable)[iVar6].Calc.method)
                              (pIVar1,iVar2,(&pIVar1->klass[1]._0.image)[iVar6 * 2]);
            return iVar2;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      puVar7 = (undefined4 *)
               func_?(pIVar1,
                               TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePointCalculators__IAttributePointIntCalculator
                               ,0);
      iVar2 = (*(code *)*puVar7)(pIVar1,iVar2,puVar7[1]);
      return iVar2;
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  iVar2 = (*pcVar8)();
  return iVar2;
}

