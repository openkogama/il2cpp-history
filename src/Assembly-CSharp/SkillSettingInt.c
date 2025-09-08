
/* Void Initialize(String, SpawnRolesSkillDataManager, Int32, Int32, GamePassTier,
   KogamaSettingValueWrapperBase,
   UnityAction`1[MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase],
   UnityAction`1[MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase],
   UnityAction, UnityAction) */

void Assembly-CSharp.dll::SkillSettingInt::SkillSettingInt_Initialize
               (SkillSettingInt *this,String *skill,SpawnRolesSkillDataManager *skillDataManager,
               int32_t skillCost,int32_t spawnRoleCost,GamePassTier__Enum spawnRoleTier,
               KogamaSettingValueWrapperBase *skillSetting,
               UnityAction_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
               *removeSkillCallback,
               UnityAction_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
               *updateSkillCallback,UnityAction *cantUpdateSkillCallback,
               UnityAction *cantRemoveSkillCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                   );
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                   );
    cRam_? = '\x01';
  }
  if (skillSetting == (KogamaSettingValueWrapperBase *)0x0) {
    (this->fields).skillPercentageSetting = (AttributeSettingInt *)0x0;
    pKVar1 = (KogamaSettingValueWrapperBase *)0x0;
code_?:
    func_?(&(this->fields).skillPercentageSetting,pKVar1);
    pAVar2 = (this->fields).skillPercentageSetting;
    if (pAVar2 != (AttributeSettingInt *)0x0) {
      iVar3 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
              KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
              KogamaSettingNumericBase_1_System_Int32__get_NumericValue
                        ((KogamaSettingNumericBase_1_System_Int32_ *)pAVar2,
                         MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                        );
      (this->fields).settingValue = (float)iVar3;
      SkillSettingBase::SkillSettingBase_Initialize
                ((SkillSettingBase *)this,skill,skillDataManager,skillCost,spawnRoleCost,
                 spawnRoleTier,skillSetting,removeSkillCallback,updateSkillCallback,
                 cantUpdateSkillCallback,cantRemoveSkillCallback,(MethodInfo *)0x0);
      pAVar2 = (this->fields).skillPercentageSetting;
      if ((((pAVar2 != (AttributeSettingInt *)0x0) &&
           (pKVar4 = (pAVar2->fields)._.KogamaSettingNumeric,
           pKVar4 != (KogamaSettingNumeric_1_System_Int32_ *)0x0)) &&
          (pRVar5 = (pKVar4->fields).RangeValidator, pRVar5 != (RangeValidator_1_System_Int32_ *)0x0
          )) && (pSVar6 = (this->fields).slider, pSVar6 != (Slider *)0x0)) {
        UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_minValue
                  (pSVar6,(float)(pRVar5->fields).min,(MethodInfo *)0x0);
        pAVar2 = (this->fields).skillPercentageSetting;
        if (((pAVar2 != (AttributeSettingInt *)0x0) &&
            (pKVar4 = (pAVar2->fields)._.KogamaSettingNumeric,
            pKVar4 != (KogamaSettingNumeric_1_System_Int32_ *)0x0)) &&
           ((pRVar5 = (pKVar4->fields).RangeValidator,
            pRVar5 != (RangeValidator_1_System_Int32_ *)0x0 &&
            (pSVar6 = (this->fields).slider, pSVar6 != (Slider *)0x0)))) {
          UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_maxValue
                    (pSVar6,(float)(pRVar5->fields).max,(MethodInfo *)0x0);
          pSStack7 = (this->fields).slider;
          if (pSStack7 != (Slider *)0x0) {
            fStack8 = (this->fields).settingValue;
            pIStack9 = (pSStack7->klass->vtable).SetValueWithoutNotify.methodPtr;
            (*(code *)(pSStack7->klass->vtable).set_value.method)();
            SkillSettingInt_UpdateTextInputFieldWithSliderValue(this,(MethodInfo *)0x0);
            (this->fields).isInitialized = 1;
            return;
          }
        }
      }
    }
  }
  else {
    if (((
         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
         ->_1).naturalAligment <= (skillSetting->klass->_1).naturalAligment) &&
       ((skillSetting->klass->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
         ->_1).naturalAligment - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
       )) {
      (this->fields).skillPercentageSetting = (AttributeSettingInt *)skillSetting;
      if (((
           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
           ->_1).naturalAligment <= (skillSetting->klass->_1).naturalAligment) &&
         (pKVar1 = skillSetting,
         (skillSetting->klass->_1).typeHierarchy
         [(
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
          ->_1).naturalAligment - 1] ==
         (Il2CppClass *)
         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
         )) goto code_?;
    }
    func_?(skillSetting,
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                   );
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void InitializeInfoButton(String, Int32, SpawnRolesSkillDataManager) */

void Assembly-CSharp.dll::SkillSettingInt::SkillSettingInt_InitializeInfoButton
               (SkillSettingInt *this,String *skill,int32_t skillCost,
               SpawnRolesSkillDataManager *skillDataManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.infoButton;
  this = (SkillSettingInt *)(this->fields).settingValue;
  skillValue = (Object *)func_?(TypeInfo__System__Single,&this);
  if (this_00 != (SpawnRoleSkillInfoButton *)0x0) {
    SpawnRoleSkillInfoButton::SpawnRoleSkillInfoButton_Initialize
              (this_00,skill,skillValue,skillCost,skillDataManager,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void InputFieldChange() */

void Assembly-CSharp.dll::SkillSettingInt::SkillSettingInt_InputFieldChange
               (SkillSettingInt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  pSStack_1 = (Slider *)0x0;
  pIVar2 = (this->fields).inputField;
  if (pIVar2 != (InputField *)0x0) {
    mscorlib.dll::System::Single::Single_TryParse
              ((pIVar2->fields).m_Text,(float *)&pSStack_1,(MethodInfo *)0x0);
    pSVar3 = (this->fields).slider;
    if (pSVar3 != (Slider *)0x0) {
      pSStack_4 = pSStack_1;
      pSStack_1 = (Slider *)(pSVar3->klass->vtable).SetValueWithoutNotify.methodPtr;
      (*(code *)(pSVar3->klass->vtable).set_value.method)(pSVar3);
      SkillSettingInt_UpdateTextInputFieldWithSliderValue(this,(MethodInfo *)0x0);
      pSVar3 = (this->fields).slider;
      if (pSVar3 != (Slider *)0x0) {
        pSStack_1 = (Slider *)(pSVar3->klass->vtable).set_value.methodPtr;
        pSStack_4 = pSVar3;
        fVar5 = (float10)(*(code *)(pSVar3->klass->vtable).get_value.method)();
        pSStack_4 = (Slider *)(float)fVar5;
        uVar6 = func_?(TypeInfo__System__Single,&pSStack_4);
        (*(code *)(this->klass->vtable).UpdateSkillData.method)
                  (this,uVar6,(this->klass->vtable).InitializeInfoButton.methodPtr);
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SliderValueChanged() */

void Assembly-CSharp.dll::SkillSettingInt::SkillSettingInt_SliderValueChanged
               (SkillSettingInt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  SkillSettingInt_UpdateTextInputFieldWithSliderValue(this,(MethodInfo *)0x0);
  pSVar1 = (this->fields).slider;
  if (pSVar1 != (Slider *)0x0) {
    pIStack_2 = (pSVar1->klass->vtable).set_value.methodPtr;
    fVar3 = (float10)(*(code *)(pSVar1->klass->vtable).get_value.method)(pSVar1);
    pIStack_2 = (Il2CppMethodPointer)(float)fVar3;
    uVar4 = func_?(TypeInfo__System__Single,&pIStack_2);
    (*(code *)(this->klass->vtable).UpdateSkillData.method)
              (this,uVar4,(this->klass->vtable).InitializeInfoButton.methodPtr);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateSkillData(Object) */

void Assembly-CSharp.dll::SkillSettingInt::SkillSettingInt_UpdateSkillData
               (SkillSettingInt *this,Object *newValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                   );
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                   );
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__set_NumericValue_int_
                   );
    func_?();
    cRam_? = '\x01';
  }
  if ((this->fields).isInitialized == 0) {
    return;
  }
  pSVar1 = (this->fields)._.infoButton;
  if (pSVar1 == (SpawnRoleSkillInfoButton *)0x0) {
code_?:
    func_?();
  }
  else {
    (pSVar1->fields).skillValue = newValue;
    func_?();
    pAVar2 = (this->fields).skillPercentageSetting;
    if (pAVar2 == (AttributeSettingInt *)0x0) goto code_?;
    value = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
            KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
            KogamaSettingNumericBase_1_System_Int32__get_NumericValue
                      ((KogamaSettingNumericBase_1_System_Int32_ *)pAVar2,
                       MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                      );
    pAVar2 = (this->fields).skillPercentageSetting;
    if (newValue == (Object *)0x0) goto code_?;
    pSVar3 = TypeInfo__System__Single;
    if ((newValue->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar4 = (float *)func_?(newValue);
    fVar5 = *pfVar4;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Math);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    if (pAVar2 == (AttributeSettingInt *)0x0) goto code_?;
    method_00 = (MethodInfo *)&UNK_?;
    func_?((double)fVar5,
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__set_NumericValue_int_
                   );
    value_00 = func_?();
    MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
    KogamaSettingNumericBase`1[System::Int32]::
    KogamaSettingNumericBase_1_System_Int32__set_NumericValue
              ((KogamaSettingNumericBase_1_System_Int32_ *)pAVar2,value_00,method_00);
    if ((this->fields)._.skillSetting == (KogamaSettingValueWrapperBase *)0x0)
    goto code_?;
    iVar6 = func_?();
    if ((iVar6 != 0) && (iVar6 = func_?(), iVar6 != 0)) {
      uVar7 = 0xADDR;
      pIVar8 = 
      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
      ;
      iVar9 = func_?();
      if (((this->fields)._.spawnRoleTier == 0) &&
         (100 < ((this->fields)._.spawnRoleCost - (this->fields)._.currentSkillCost) + iVar9)) {
        pAVar2 = (this->fields).skillPercentageSetting;
        if (pAVar2 != (AttributeSettingInt *)0x0) {
          MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes
          ::KogamaSettingNumericBase`1[System::Int32]::
          KogamaSettingNumericBase_1_System_Int32__set_NumericValue
                    ((KogamaSettingNumericBase_1_System_Int32_ *)pAVar2,value,
                     MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__set_NumericValue_int_
                    );
          pSVar10 = (this->fields).slider;
          if (pSVar10 != (Slider *)0x0) {
            (*(code *)(pSVar10->klass->vtable).set_value.method)
                      (pSVar10,(float)value,(pSVar10->klass->vtable).SetValueWithoutNotify.methodPtr);
            SkillSettingInt_UpdateTextInputFieldWithSliderValue(this,(MethodInfo *)0x0);
            pUVar11 = (this->fields)._.cantUpdateSkillCallback;
            if (pUVar11 != (UnityAction *)0x0) {
              (*(pUVar11->fields)._._.invoke_impl)();
              return;
            }
          }
        }
      }
      else {
        pUVar12 = (this->fields)._.updateSkillCallback;
        if (pUVar12 != (UnityAction_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                       *)0x0) {
          (*(pUVar12->fields)._._.invoke_impl)
                    ((pUVar12->fields)._._.method_code,(this->fields).skillPercentageSetting,
                     (pUVar12->fields)._._.method,uVar7,pIVar8,iVar6);
          SkillSettingBase::SkillSettingBase_UpdateSkillCost
                    ((SkillSettingBase *)this,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
  }
  func_?();
  pSVar3 = extraout_EDX;
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)(pSVar3);
  return;
}


/* Void UpdateSliderValueWithInputFieldText() */

void Assembly-CSharp.dll::SkillSettingInt::SkillSettingInt_UpdateSliderValueWithInputFieldText
               (SkillSettingInt *this,MethodInfo *method)

{
  pSStack_1 = (Slider *)0x0;
  pIVar2 = (this->fields).inputField;
  if (pIVar2 != (InputField *)0x0) {
    mscorlib.dll::System::Single::Single_TryParse
              ((pIVar2->fields).m_Text,(float *)&pSStack_1,(MethodInfo *)0x0);
    pSVar3 = (this->fields).slider;
    if (pSVar3 != (Slider *)0x0) {
      pSStack_1 = pSVar3;
      (*(code *)(pSVar3->klass->vtable).set_value.method)();
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateTextInputFieldWithSliderValue() */

void Assembly-CSharp.dll::SkillSettingInt::SkillSettingInt_UpdateTextInputFieldWithSliderValue
               (SkillSettingInt *this,MethodInfo *method)

{
  pSVar1 = (this->fields).slider;
  this_00 = (this->fields).inputField;
  if (pSVar1 != (Slider *)0x0) {
    fVar2 = (float10)(*(code *)(pSVar1->klass->vtable).get_value.method)
                               (pSVar1,(pSVar1->klass->vtable).set_value.methodPtr);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    uStack_3 = (double)(float)fVar2;
    fVar2 = (float10)func_?(uStack_3);
    uStack_3 = (double)CONCAT44((int)fVar2,SUB84((double)fVar2,0));
    value = mscorlib.dll::System::Int32::Int32_ToString
                      ((Int32 *)((int)&uStack_3 + 4),(MethodInfo *)0x0);
    if (this_00 != (InputField *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                (this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

