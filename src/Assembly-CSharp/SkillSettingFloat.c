
/* Void Initialize(String, SpawnRolesSkillDataManager, Int32, Int32, GamePassTier,
   KogamaSettingValueWrapperBase,
   UnityAction`1[MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase],
   UnityAction`1[MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase],
   UnityAction, UnityAction) */

void Assembly-CSharp.dll::SkillSettingFloat::SkillSettingFloat_Initialize
               (SkillSettingFloat *this,String *skill,SpawnRolesSkillDataManager *skillDataManager,
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
          pSStack7 = (this->fields).slider;
          if (pSStack7 != (Slider *)0x0) {
            fStack8 = (this->fields).settingValue;
            pIStack9 = (pSStack7->klass->vtable).SetValueWithoutNotify.methodPtr;
            (*(code *)(pSStack7->klass->vtable).set_value.method)();
            SkillSettingInt::SkillSettingInt_UpdateTextInputFieldWithSliderValue
                      ((SkillSettingInt *)this,(MethodInfo *)0x0);
            (this->fields).isInitialized = 1;
            return;
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
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void InitializeInfoButton(String, Int32, SpawnRolesSkillDataManager) */

void Assembly-CSharp.dll::SkillSettingFloat::SkillSettingFloat_InitializeInfoButton
               (SkillSettingFloat *this,String *skill,int32_t skillCost,
               SpawnRolesSkillDataManager *skillDataManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._.infoButton;
  this = (SkillSettingFloat *)(this->fields).settingValue;
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

void Assembly-CSharp.dll::SkillSettingFloat::SkillSettingFloat_InputFieldChange
               (SkillSettingFloat *this,MethodInfo *method)

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
      SkillSettingInt::SkillSettingInt_UpdateTextInputFieldWithSliderValue
                ((SkillSettingInt *)this,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::SkillSettingFloat::SkillSettingFloat_SliderValueChanged
               (SkillSettingFloat *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).slider;
  if (pSVar1 != (Slider *)0x0) {
    fVar2 = (float10)(*(code *)(pSVar1->klass->vtable).get_value.method)
                               (pSVar1,(pSVar1->klass->vtable).set_value.methodPtr);
    fVar2 = (float10)func_?((double)fVar2);
    (*(code *)(pSVar1->klass->vtable).set_value.method)
              (pSVar1,(float)fVar2,(pSVar1->klass->vtable).SetValueWithoutNotify.methodPtr);
    SkillSettingInt::SkillSettingInt_UpdateTextInputFieldWithSliderValue
              ((SkillSettingInt *)this,(MethodInfo *)0x0);
    pSVar1 = (this->fields).slider;
    if (pSVar1 != (Slider *)0x0) {
      fVar2 = (float10)(*(code *)(pSVar1->klass->vtable).get_value.method)
                                 (pSVar1,(pSVar1->klass->vtable).set_value.methodPtr);
      fStack_3 = (float)fVar2;
      uVar4 = func_?(TypeInfo__System__Single,&fStack_3);
      (*(code *)(this->klass->vtable).UpdateSkillData.method)
                (this,uVar4,(this->klass->vtable).InitializeInfoButton.methodPtr);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateSkillData(Object) */

void Assembly-CSharp.dll::SkillSettingFloat::SkillSettingFloat_UpdateSkillData
               (SkillSettingFloat *this,Object *newValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                   );
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                   );
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__set_NumericValue_float_
                   );
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
    unaff_EDI = (KogamaSettingValueWrapperBase *)newValue;
    if (pAVar2 == (AttributeSettingFloat *)0x0) goto code_?;
    value = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
            KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
            KogamaSettingNumericBase_1_System_Single__get_NumericValue
                      ((KogamaSettingNumericBase_1_System_Single_ *)pAVar2,
                       MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                      );
    method_00 = 
    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__set_NumericValue_float_
    ;
    unaff_EBX = (IAttributeSetting__Class *)(this->fields).skillPercentageSetting;
    if ((unaff_EBX == (IAttributeSetting__Class *)0x0) || (newValue == (Object *)0x0))
    goto code_?;
    pSVar3 = TypeInfo__System__Single;
    if ((newValue->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar4 = (float *)func_?(newValue);
    value_00 = (KogamaSettingValueWrapperBase *)*pfVar4;
    MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
    KogamaSettingNumericBase`1[System::Single]::
    KogamaSettingNumericBase_1_System_Single__set_NumericValue
              ((KogamaSettingNumericBase_1_System_Single_ *)unaff_EBX,(float)value_00,method_00);
    unaff_EBX = 
    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
    ;
    unaff_EDI = (this->fields)._.skillSetting;
    if (unaff_EDI == (KogamaSettingValueWrapperBase *)0x0) goto code_?;
    iVar5 = func_?(unaff_EDI,
                            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                           );
    pIVar6 = 
    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
    ;
    if ((iVar5 != 0) &&
       (iVar5 = func_?(unaff_EDI,
                                TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                               ), unaff_EBX = pIVar6, iVar5 != 0)) {
      unaff_EBX = (IAttributeSetting__Class *)&UNK_?;
      unaff_EDI = value_00;
      iVar5 = func_?(0,
                              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                              ,iVar5);
      if (((this->fields)._.spawnRoleTier == 0) &&
         (100 < ((this->fields)._.spawnRoleCost - (this->fields)._.currentSkillCost) + iVar5)) {
        pAVar2 = (this->fields).skillPercentageSetting;
        if (pAVar2 != (AttributeSettingFloat *)0x0) {
          MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes
          ::KogamaSettingNumericBase`1[System::Single]::
          KogamaSettingNumericBase_1_System_Single__set_NumericValue
                    ((KogamaSettingNumericBase_1_System_Single_ *)pAVar2,value,
                     MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__set_NumericValue_float_
                    );
          pSVar7 = (this->fields).slider;
          if (pSVar7 != (Slider *)0x0) {
            (*(code *)(pSVar7->klass->vtable).set_value.method)
                      (pSVar7,value,(pSVar7->klass->vtable).SetValueWithoutNotify.methodPtr);
            SkillSettingInt::SkillSettingInt_UpdateTextInputFieldWithSliderValue
                      ((SkillSettingInt *)this,(MethodInfo *)0x0);
            pUVar8 = (this->fields)._.cantUpdateSkillCallback;
            if (pUVar8 != (UnityAction *)0x0) {
              (*(pUVar8->fields)._._.invoke_impl)
                        ((pUVar8->fields)._._.method_code,(pUVar8->fields)._._.method);
              return;
            }
          }
        }
      }
      else {
        pUVar9 = (this->fields)._.updateSkillCallback;
        if (pUVar9 != (UnityAction_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                       *)0x0) {
          (*(pUVar9->fields)._._.invoke_impl)
                    ((pUVar9->fields)._._.method_code,(this->fields).skillPercentageSetting,
                     (pUVar9->fields)._._.method);
          SkillSettingBase::SkillSettingBase_UpdateSkillCost
                    ((SkillSettingBase *)this,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
  }
  func_?(unaff_EDI,unaff_EBX);
  pSVar3 = extraout_ECX;
  newValue = (Object *)unaff_EDI;
code_?:
  func_?(newValue,pSVar3);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

