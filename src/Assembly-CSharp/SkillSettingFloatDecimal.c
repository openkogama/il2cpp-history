
/* Void Initialize(String, SpawnRolesSkillDataManager, Int32, Int32, GamePassTier,
   KogamaSettingValueWrapperBase,
   UnityAction`1[MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase],
   UnityAction`1[MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase],
   UnityAction, UnityAction) */

void Assembly-CSharp.dll::SkillSettingFloatDecimal::SkillSettingFloatDecimal_Initialize
               (SkillSettingFloatDecimal *this,String *skill,
               SpawnRolesSkillDataManager *skillDataManager,int32_t skillCost,int32_t spawnRoleCost,
               GamePassTier__Enum spawnRoleTier,KogamaSettingValueWrapperBase *skillSetting,
               UnityAction_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
               *removeSkillCallback,
               UnityAction_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
               *updateSkillCallback,UnityAction *cantUpdateSkillCallback,
               UnityAction *cantRemoveSkillCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                   );
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                   );
    cRam_? = '\x01';
  }
  if (skillSetting == (KogamaSettingValueWrapperBase *)0x0) {
    (this->fields).skillPercentageSetting = (AttributeSettingFloat *)0x0;
    pKVar1 = (KogamaSettingValueWrapperBase *)0x0;
code_?:
    func_?(&(this->fields).skillPercentageSetting,pKVar1);
    pAVar2 = (this->fields).skillPercentageSetting;
    if (pAVar2 != (AttributeSettingFloat *)0x0) {
      fVar3 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
              KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
              KogamaSettingNumericBase_1_System_Single__get_NumericValue
                        ((KogamaSettingNumericBase_1_System_Single_ *)pAVar2,
                         MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                        );
      (this->fields).settingValue = fVar3;
      SkillSettingBase::SkillSettingBase_Initialize
                ((SkillSettingBase *)this,skill,skillDataManager,skillCost,spawnRoleCost,
                 spawnRoleTier,skillSetting,removeSkillCallback,updateSkillCallback,
                 cantUpdateSkillCallback,cantRemoveSkillCallback,(MethodInfo *)0x0);
      pAVar2 = (this->fields).skillPercentageSetting;
      if ((((pAVar2 != (AttributeSettingFloat *)0x0) &&
           (pKVar4 = (pAVar2->fields)._.KogamaSettingNumeric,
           pKVar4 != (KogamaSettingNumeric_1_System_Single_ *)0x0)) &&
          (pRVar5 = (pKVar4->fields).RangeValidator,
          pRVar5 != (RangeValidator_1_System_Single_ *)0x0)) &&
         (pSVar6 = (this->fields).slider, pSVar6 != (Slider *)0x0)) {
        UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_minValue
                  (pSVar6,(pRVar5->fields).min,(MethodInfo *)0x0);
        pAVar2 = (this->fields).skillPercentageSetting;
        if (((pAVar2 != (AttributeSettingFloat *)0x0) &&
            (pKVar4 = (pAVar2->fields)._.KogamaSettingNumeric,
            pKVar4 != (KogamaSettingNumeric_1_System_Single_ *)0x0)) &&
           ((pRVar5 = (pKVar4->fields).RangeValidator,
            pRVar5 != (RangeValidator_1_System_Single_ *)0x0 &&
            (pSVar6 = (this->fields).slider, pSVar6 != (Slider *)0x0)))) {
          UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_maxValue
                    (pSVar6,(pRVar5->fields).max,(MethodInfo *)0x0);
          pSVar6 = (this->fields).slider;
          if (pSVar6 != (Slider *)0x0) {
            (*(code *)(pSVar6->klass->vtable).set_value.method)();
            pSVar6 = (this->fields).slider;
            this_00 = (this->fields).inputField;
            if (pSVar6 != (Slider *)0x0) {
              fVar7 = (float10)(*(code *)(pSVar6->klass->vtable).get_value.method)();
              SStack_8.m_value = (float)fVar7;
              value = mscorlib.dll::System::Single::Single_ToString(&SStack_8,(MethodInfo *)0x0);
              if (this_00 != (InputField *)0x0) {
                UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                          (this_00,value,(MethodInfo *)0x0);
                (this->fields).isInitialized = 1;
                return;
              }
            }
          }
        }
      }
    }
  }
  else {
    if (((
         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
         ->_1).naturalAligment <= (skillSetting->klass->_1).naturalAligment) &&
       ((skillSetting->klass->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
         ->_1).naturalAligment - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
       )) {
      (this->fields).skillPercentageSetting = (AttributeSettingFloat *)skillSetting;
      if (((
           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
           ->_1).naturalAligment <= (skillSetting->klass->_1).naturalAligment) &&
         (pKVar1 = skillSetting,
         (skillSetting->klass->_1).typeHierarchy
         [(
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
          ->_1).naturalAligment - 1] ==
         (Il2CppClass *)
         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
         )) goto code_?;
    }
    func_?(skillSetting,
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                   );
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void InitializeInfoButton(String, Int32, SpawnRolesSkillDataManager) */

void Assembly-CSharp.dll::SkillSettingFloatDecimal::SkillSettingFloatDecimal_InitializeInfoButton
               (SkillSettingFloatDecimal *this,String *skill,int32_t skillCost,
               SpawnRolesSkillDataManager *skillDataManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._.infoButton;
  this = (SkillSettingFloatDecimal *)(this->fields).settingValue;
  pOVar2 = (Object *)func_?(TypeInfo__System__Single,&this);
  if (pSVar1 != (SpawnRoleSkillInfoButton *)0x0) {
    (pSVar1->fields).skillType = skill;
    func_?(&(pSVar1->fields).skillType,skill);
    (pSVar1->fields).skillValue = pOVar2;
    func_?(&(pSVar1->fields).skillValue,pOVar2);
    (pSVar1->fields).skillDataManager = skillDataManager;
    func_?(&(pSVar1->fields).skillDataManager,skillDataManager);
    (pSVar1->fields).skillCost = skillCost;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void InputFieldChange() */

void Assembly-CSharp.dll::SkillSettingFloatDecimal::SkillSettingFloatDecimal_InputFieldChange
               (SkillSettingFloatDecimal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  pSVar1 = this;
  dVar2 = (double)(this->fields).decimalPlaces;
  func_?();
  pSVar3 = (pSVar1->fields).slider;
  this = (SkillSettingFloatDecimal *)(float)dVar2;
  if (pSVar3 != (Slider *)0x0) {
    SStack_4.m_value = (float)(pSVar3->klass->vtable).get_value.method;
    fVar5 = (float10)(*(code *)SStack_4.m_value)(pSVar3,(pSVar3->klass->vtable).set_value.methodPtr)
    ;
    fVar5 = (float10)func_?((double)(fVar5 * (float10)(float)this));
    SStack_4.m_value = (float)fVar5;
    (*(code *)(pSVar3->klass->vtable).set_value.method)
              (pSVar3,SStack_4.m_value / (float)this,
               (pSVar3->klass->vtable).SetValueWithoutNotify.methodPtr);
    pIVar6 = (pSVar1->fields).inputField;
    this = (SkillSettingFloatDecimal *)0x0;
    if (pIVar6 != (InputField *)0x0) {
      mscorlib.dll::System::Single::Single_TryParse
                ((pIVar6->fields).m_Text,(float *)&this,(MethodInfo *)0x0);
      pSVar3 = (pSVar1->fields).slider;
      if (pSVar3 != (Slider *)0x0) {
        (*(code *)(pSVar3->klass->vtable).set_value.method)
                  (pSVar3,this,(pSVar3->klass->vtable).SetValueWithoutNotify.methodPtr);
        pSVar3 = (pSVar1->fields).slider;
        pIVar6 = (pSVar1->fields).inputField;
        if (pSVar3 != (Slider *)0x0) {
          this = (SkillSettingFloatDecimal *)(pSVar3->klass->vtable).get_value.method;
          fVar5 = (float10)(*(code *)this)(pSVar3,(pSVar3->klass->vtable).set_value.methodPtr);
          SStack_4.m_value = (float)fVar5;
          value = mscorlib.dll::System::Single::Single_ToString(&SStack_4,(MethodInfo *)0x0);
          if (pIVar6 != (InputField *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                      (pIVar6,value,(MethodInfo *)0x0);
            pSVar3 = (pSVar1->fields).slider;
            if (pSVar3 != (Slider *)0x0) {
              this = (SkillSettingFloatDecimal *)(pSVar3->klass->vtable).get_value.method;
              fVar5 = (float10)(*(code *)this)(pSVar3,(pSVar3->klass->vtable).set_value.methodPtr);
              fStack_7 = (float)fVar5;
              uVar8 = func_?(TypeInfo__System__Single,&fStack_7);
              (*(code *)(pSVar1->klass->vtable).UpdateSkillData.method)
                        (pSVar1,uVar8,(pSVar1->klass->vtable).InitializeInfoButton.methodPtr);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SliderValueChanged() */

void Assembly-CSharp.dll::SkillSettingFloatDecimal::SkillSettingFloatDecimal_SliderValueChanged
               (SkillSettingFloatDecimal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  dVar1 = (double)(this->fields).decimalPlaces;
  func_?();
  pSVar2 = (this->fields).slider;
  if (pSVar2 != (Slider *)0x0) {
    SStack_3.m_value = (float)(pSVar2->klass->vtable).get_value.method;
    fVar4 = (float10)(*(code *)SStack_3.m_value)(pSVar2,(pSVar2->klass->vtable).set_value.methodPtr)
    ;
    fVar4 = (float10)func_?((double)(fVar4 * (float10)(float)dVar1));
    SStack_3.m_value = (float)fVar4;
    (*(code *)(pSVar2->klass->vtable).set_value.method)
              (pSVar2,SStack_3.m_value / (float)dVar1,
               (pSVar2->klass->vtable).SetValueWithoutNotify.methodPtr);
    pSVar2 = (this->fields).slider;
    this_00 = (this->fields).inputField;
    if (pSVar2 != (Slider *)0x0) {
      fVar4 = (float10)(*(code *)(pSVar2->klass->vtable).get_value.method)
                                 (pSVar2,(pSVar2->klass->vtable).set_value.methodPtr);
      SStack_3.m_value = (float)fVar4;
      value = mscorlib.dll::System::Single::Single_ToString(&SStack_3,(MethodInfo *)0x0);
      if (this_00 != (InputField *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                  (this_00,value,(MethodInfo *)0x0);
        pSVar2 = (this->fields).slider;
        if (pSVar2 != (Slider *)0x0) {
          fVar4 = (float10)(*(code *)(pSVar2->klass->vtable).get_value.method)
                                     (pSVar2,(pSVar2->klass->vtable).set_value.methodPtr);
          fStack_5 = (float)fVar4;
          uVar6 = func_?(TypeInfo__System__Single,&fStack_5);
          (*(code *)(this->klass->vtable).UpdateSkillData.method)
                    (this,uVar6,(this->klass->vtable).InitializeInfoButton.methodPtr);
          return;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateSkillData(Object) */

void Assembly-CSharp.dll::SkillSettingFloatDecimal::SkillSettingFloatDecimal_UpdateSkillData
               (SkillSettingFloatDecimal *this,Object *newValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                   );
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                   );
    func_?();
    func_?(&TypeInfo__System__Single);
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
    func_?(&(pSVar1->fields).skillValue,newValue);
    pAVar2 = (this->fields).skillPercentageSetting;
    if (pAVar2 == (AttributeSettingFloat *)0x0) goto code_?;
    value = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
            KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
            KogamaSettingNumericBase_1_System_Single__get_NumericValue
                      ((KogamaSettingNumericBase_1_System_Single_ *)pAVar2,
                       MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                      );
    dVar3 = (double)(this->fields).decimalPlaces;
    func_?();
    if (newValue == (Object *)0x0) goto code_?;
    pSVar4 = TypeInfo__System__Single;
    if ((newValue->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar5 = (float *)func_?(newValue);
    pAVar2 = (this->fields).skillPercentageSetting;
    if (pAVar2 == (AttributeSettingFloat *)0x0) goto code_?;
    method_00 = (MethodInfo *)&UNK_?;
    fVar6 = (float10)func_?((double)((float)dVar3 * *pfVar5),
                                      MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__set_NumericValue_float_
                                     );
    MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
    KogamaSettingNumericBase`1[System::Single]::
    KogamaSettingNumericBase_1_System_Single__set_NumericValue
              ((KogamaSettingNumericBase_1_System_Single_ *)pAVar2,(float)fVar6 / (float)dVar3,
               method_00);
    if ((this->fields)._.skillSetting == (KogamaSettingValueWrapperBase *)0x0)
    goto code_?;
    iVar7 = func_?();
    if ((iVar7 != 0) && (iVar7 = func_?(), iVar7 != 0)) {
      iVar7 = func_?(0,
                              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                              ,iVar7);
      if (((this->fields)._.spawnRoleTier == 0) &&
         (100 < ((this->fields)._.spawnRoleCost - (this->fields)._.currentSkillCost) + iVar7)) {
        pAVar2 = (this->fields).skillPercentageSetting;
        if (pAVar2 != (AttributeSettingFloat *)0x0) {
          MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes
          ::KogamaSettingNumericBase`1[System::Single]::
          KogamaSettingNumericBase_1_System_Single__set_NumericValue
                    ((KogamaSettingNumericBase_1_System_Single_ *)pAVar2,value,
                     MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__set_NumericValue_float_
                    );
          pSVar8 = (this->fields).slider;
          if (pSVar8 != (Slider *)0x0) {
            (*(code *)(pSVar8->klass->vtable).set_value.method)
                      (pSVar8,value,(pSVar8->klass->vtable).SetValueWithoutNotify.methodPtr);
            SkillSettingFloatDecimal_UpdateTextInputFieldWithSliderValue(this,(MethodInfo *)0x0);
            pUVar9 = (this->fields)._.cantUpdateSkillCallback;
            if (pUVar9 != (UnityAction *)0x0) {
              (*(pUVar9->fields)._._.invoke_impl)();
              return;
            }
          }
        }
      }
      else {
        pUVar10 = (this->fields)._.updateSkillCallback;
        if (pUVar10 != (UnityAction_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                       *)0x0) {
          (*(pUVar10->fields)._._.invoke_impl)
                    ((pUVar10->fields)._._.method_code,(this->fields).skillPercentageSetting,
                     (pUVar10->fields)._._.method);
          SkillSettingBase::SkillSettingBase_UpdateSkillCost
                    ((SkillSettingBase *)this,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
  }
  func_?();
  pSVar4 = extraout_ECX;
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)(pSVar4);
  return;
}


/* Void UpdateTextInputFieldWithSliderValue() */

void Assembly-CSharp.dll::SkillSettingFloatDecimal::
     SkillSettingFloatDecimal_UpdateTextInputFieldWithSliderValue
               (SkillSettingFloatDecimal *this,MethodInfo *method)

{
  pSVar1 = (this->fields).slider;
  this_00 = (this->fields).inputField;
  SStack_2.m_value = in_ECX;
  if (pSVar1 != (Slider *)0x0) {
    fVar3 = (float10)(*(code *)(pSVar1->klass->vtable).get_value.method)
                               (pSVar1,(pSVar1->klass->vtable).set_value.methodPtr);
    SStack_2.m_value = (float)fVar3;
    value = mscorlib.dll::System::Single::Single_ToString(&SStack_2,(MethodInfo *)0x0);
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


/* SkillSettingFloatDecimal() */

void Assembly-CSharp.dll::SkillSettingFloatDecimal::SkillSettingFloatDecimal__ctor
               (SkillSettingFloatDecimal *this,MethodInfo *method)

{
  (this->fields).decimalPlaces = 2;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

