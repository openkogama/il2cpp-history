
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (skillSetting == (KogamaSettingValueWrapperBase *)0x0) {
    pAVar1 = (AttributeSettingInt *)0x0;
  }
  else {
    bVar2 = (
            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
            ->_1).naturalAligment;
    if (((skillSetting->klass->_1).naturalAligment < bVar2) ||
       ((skillSetting->klass->_1).typeHierarchy[bVar2 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
       )) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pAVar1 = (AttributeSettingInt *)0x0;
    if (bVar3) {
      pAVar1 = (AttributeSettingInt *)skillSetting;
    }
    if (pAVar1 == (AttributeSettingInt *)0x0) {
      func_?(skillSetting,
                      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                     );
      goto code_?;
    }
  }
  (this->fields).skillPercentageSetting = pAVar1;
  if (pAVar1 != (AttributeSettingInt *)0x0) {
    iVar4 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
            KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
            KogamaSettingNumericBase_1_System_Int32__get_NumericValue
                      ((KogamaSettingNumericBase_1_System_Int32_ *)pAVar1,
                       MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                      );
    (this->fields).settingValue = (float)iVar4;
    SkillSettingBase::SkillSettingBase_Initialize
              ((SkillSettingBase *)this,skill,skillDataManager,skillCost,spawnRoleCost,spawnRoleTier
               ,skillSetting,removeSkillCallback,updateSkillCallback,cantUpdateSkillCallback,
               cantRemoveSkillCallback,(MethodInfo *)0x0);
    pAVar1 = (this->fields).skillPercentageSetting;
    if ((((pAVar1 != (AttributeSettingInt *)0x0) &&
         (pKVar5 = (pAVar1->fields)._.KogamaSettingNumeric,
         pKVar5 != (KogamaSettingNumeric_1_System_Int32_ *)0x0)) &&
        (pRVar6 = (pKVar5->fields).RangeValidator, pRVar6 != (RangeValidator_1_System_Int32_ *)0x0))
       && (pSVar7 = (this->fields).slider, pSVar7 != (Slider *)0x0)) {
      UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_minValue
                (pSVar7,(float)(pRVar6->fields).min,(MethodInfo *)0x0);
      pAVar1 = (this->fields).skillPercentageSetting;
      if (((pAVar1 != (AttributeSettingInt *)0x0) &&
          (pKVar5 = (pAVar1->fields)._.KogamaSettingNumeric,
          pKVar5 != (KogamaSettingNumeric_1_System_Int32_ *)0x0)) &&
         ((pRVar6 = (pKVar5->fields).RangeValidator, pRVar6 != (RangeValidator_1_System_Int32_ *)0x0
          && (pSVar7 = (this->fields).slider, pSVar7 != (Slider *)0x0)))) {
        UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_maxValue
                  (pSVar7,(float)(pRVar6->fields).max,(MethodInfo *)0x0);
        pSStack8 = (this->fields).slider;
        if (pSStack8 != (Slider *)0x0) {
          puStack9 = (undefined *)(this->fields).settingValue;
          pIStack10 = (pSStack8->klass->vtable).Rebuild_1.methodPtr;
          (*(code *)(pSStack8->klass->vtable).set_value.method)();
          SkillSettingInt_UpdateTextInputFieldWithSliderValue(this,(MethodInfo *)0x0);
          (this->fields).isInitialized = 1;
          return;
        }
      }
    }
  }
code_?:
  pIStack10 = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void InitializeInfoButton(String, Int32, SpawnRolesSkillDataManager) */

void Assembly-CSharp.dll::SkillSettingInt::SkillSettingInt_InitializeInfoButton
               (SkillSettingInt *this,String *skill,int32_t skillCost,
               SpawnRolesSkillDataManager *skillDataManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSStack_1 = (Single__Class *)0x0;
  this_00 = (this->fields).inputField;
  if (this_00 != (InputField *)0x0) {
    s = (String *)
        TriggerCube::TriggerCube_get_InputSignalReceiver((TriggerCube *)this_00,(MethodInfo *)0x0);
    mscorlib.dll::System::Single::Single_TryParse_1(s,(float *)&pSStack_1,(MethodInfo *)0x0);
    pSVar2 = (this->fields).slider;
    if (pSVar2 != (Slider *)0x0) {
      (*(code *)(pSVar2->klass->vtable).set_value.method)();
      SkillSettingInt_UpdateTextInputFieldWithSliderValue(this,(MethodInfo *)0x0);
      pSVar2 = (this->fields).slider;
      if (pSVar2 != (Slider *)0x0) {
        (*(code *)(pSVar2->klass->vtable).get_value.method)();
        pSStack_1 = TypeInfo__System__Single;
        uVar3 = func_?();
        (*(code *)(this->klass->vtable).UpdateSkillData.method)
                  (this,uVar3,(this->klass->vtable).InitializeInfoButton.methodPtr);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SliderValueChanged() */

void Assembly-CSharp.dll::SkillSettingInt::SkillSettingInt_SliderValueChanged
               (SkillSettingInt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = this;
  SkillSettingInt_UpdateTextInputFieldWithSliderValue(this,(MethodInfo *)0x0);
  pSVar2 = (pSVar1->fields).slider;
  if (pSVar2 != (Slider *)0x0) {
    fVar3 = (float10)(*(code *)(pSVar2->klass->vtable).get_value.method)
                               (pSVar2,(pSVar2->klass->vtable).set_value.methodPtr);
    this = (SkillSettingInt *)(float)fVar3;
    uVar4 = func_?(TypeInfo__System__Single,&this);
    (*(code *)(pSVar1->klass->vtable).UpdateSkillData.method)
              (pSVar1,uVar4,(pSVar1->klass->vtable).InitializeInfoButton.methodPtr);
    return;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateSkillData(Object) */

void Assembly-CSharp.dll::SkillSettingInt::SkillSettingInt_UpdateSkillData
               (SkillSettingInt *this,Object *newValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isInitialized == 0) {
    return;
  }
  this_00 = (this->fields)._.infoButton;
  if (this_00 == (SpawnRoleSkillInfoButton *)0x0) {
code_?:
    func_?();
  }
  else {
    AccessoryPreviewPopup::AccessoryPreviewPopup_SetBody
              ((AccessoryPreviewPopup *)this_00,(MVBody *)newValue,(MethodInfo *)0x0);
    pAVar1 = (this->fields).skillPercentageSetting;
    unaff_EDI = (KogamaSettingValueWrapperBase *)newValue;
    if (pAVar1 == (AttributeSettingInt *)0x0) goto code_?;
    value = (KogamaSettingValueWrapperBase *)
            MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
            KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
            KogamaSettingNumericBase_1_System_Int32__get_NumericValue
                      ((KogamaSettingNumericBase_1_System_Int32_ *)pAVar1,
                       MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                      );
    pAVar1 = (this->fields).skillPercentageSetting;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    unaff_EDI = (KogamaSettingValueWrapperBase *)newValue;
    if (newValue == (Object *)0x0) goto code_?;
    unaff_EDI = (KogamaSettingValueWrapperBase *)newValue;
    if ((newValue->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar2 = (float *)func_?();
    value_00 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                         (*pfVar2,(MethodInfo *)0x0);
    unaff_EDI = (KogamaSettingValueWrapperBase *)newValue;
    if (pAVar1 == (AttributeSettingInt *)0x0) goto code_?;
    MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
    KogamaSettingNumericBase`1[System::Int32]::
    KogamaSettingNumericBase_1_System_Int32__set_NumericValue
              ((KogamaSettingNumericBase_1_System_Int32_ *)pAVar1,value_00,
               MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__set_NumericValue_int_
              );
    unaff_EDI = (this->fields)._.skillSetting;
    if (unaff_EDI == (KogamaSettingValueWrapperBase *)0x0) goto code_?;
    iVar3 = func_?(unaff_EDI);
    if ((iVar3 != 0) && (iVar3 = func_?(unaff_EDI), iVar3 != 0)) {
      iVar3 = func_?(0,
                              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                             );
      if (((this->fields)._.spawnRoleTier == 0) &&
         (100 < ((this->fields)._.spawnRoleCost - (this->fields)._.currentSkillCost) + iVar3)) {
        pAVar1 = (this->fields).skillPercentageSetting;
        if (pAVar1 != (AttributeSettingInt *)0x0) {
          MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes
          ::KogamaSettingNumericBase`1[System::Int32]::
          KogamaSettingNumericBase_1_System_Int32__set_NumericValue
                    ((KogamaSettingNumericBase_1_System_Int32_ *)pAVar1,(int32_t)value,
                     MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__set_NumericValue_int_
                    );
          pSVar4 = (this->fields).slider;
          unaff_EDI = value;
          if (pSVar4 != (Slider *)0x0) {
            (*(code *)(pSVar4->klass->vtable).set_value.method)(pSVar4,(float)(int)value);
            SkillSettingInt_UpdateTextInputFieldWithSliderValue(this,(MethodInfo *)0x0);
            this_01 = (AvatarMotor_OnActiveBounceDelegate *)(this->fields)._.cantUpdateSkillCallback
            ;
            if (this_01 != (AvatarMotor_OnActiveBounceDelegate *)0x0) {
              AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
                        (this_01,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      else {
        this_02 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
                  (this->fields)._.updateSkillCallback;
        if (this_02 !=
            (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
          mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
          String,System::Object]]::
          Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                    (this_02,(Dictionary_2_System_String_System_Object_ *)
                             (this->fields).skillPercentageSetting,
                     MethodInfo__UnityEngine__Events__UnityAction<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__Invoke_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase_
                    );
          SkillSettingBase::SkillSettingBase_UpdateSkillCost
                    ((SkillSettingBase *)this,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
  }
  func_?(unaff_EDI);
code_?:
  func_?(unaff_EDI);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateSliderValueWithInputFieldText() */

void Assembly-CSharp.dll::SkillSettingInt::SkillSettingInt_UpdateSliderValueWithInputFieldText
               (SkillSettingInt *this,MethodInfo *method)

{
  fStack_1 = 0.0;
  this_00 = (this->fields).inputField;
  if (this_00 != (InputField *)0x0) {
    s = (String *)
        TriggerCube::TriggerCube_get_InputSignalReceiver((TriggerCube *)this_00,(MethodInfo *)0x0);
    mscorlib.dll::System::Single::Single_TryParse_1(s,&fStack_1,(MethodInfo *)0x0);
    pSVar2 = (this->fields).slider;
    if (pSVar2 != (Slider *)0x0) {
      (*(code *)(pSVar2->klass->vtable).set_value.method)();
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateTextInputFieldWithSliderValue() */

void Assembly-CSharp.dll::SkillSettingInt::SkillSettingInt_UpdateTextInputFieldWithSliderValue
               (SkillSettingInt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  pSVar2 = (this->fields).slider;
  this_00 = (this->fields).inputField;
  if (pSVar2 != (Slider *)0x0) {
    fVar3 = (float10)(*(code *)(pSVar2->klass->vtable).get_value.method)
                               (pSVar2,(pSVar2->klass->vtable).set_value.methodPtr);
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    iStack_1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                         ((float)fVar3,(MethodInfo *)0x0);
    value = (String *)func_?(&iStack_1,0);
    if (this_00 != (InputField *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                (this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

