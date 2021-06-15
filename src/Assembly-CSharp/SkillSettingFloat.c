
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (skillSetting == (KogamaSettingValueWrapperBase *)0x0) {
    pAVar1 = (AttributeSettingFloat *)0x0;
  }
  else {
    bVar2 = (
            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
            ->_1).naturalAligment;
    if (((skillSetting->klass->_1).naturalAligment < bVar2) ||
       ((skillSetting->klass->_1).typeHierarchy[bVar2 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
       )) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pAVar1 = (AttributeSettingFloat *)0x0;
    if (bVar3) {
      pAVar1 = (AttributeSettingFloat *)skillSetting;
    }
    if (pAVar1 == (AttributeSettingFloat *)0x0) {
      func_?(skillSetting,
                      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                     );
      goto code_?;
    }
  }
  (this->fields).skillPercentageSetting = pAVar1;
  if (pAVar1 != (AttributeSettingFloat *)0x0) {
    MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
    KogamaSettingNumericBase`1[System::Int32]::
    KogamaSettingNumericBase_1_System_Int32__get_NumericValue
              ((KogamaSettingNumericBase_1_System_Int32_ *)pAVar1,
               MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
              );
    (this->fields).settingValue = (float)extraout_ST0;
    SkillSettingBase::SkillSettingBase_Initialize
              ((SkillSettingBase *)this,skill,skillDataManager,skillCost,spawnRoleCost,spawnRoleTier
               ,skillSetting,removeSkillCallback,updateSkillCallback,cantUpdateSkillCallback,
               cantRemoveSkillCallback,(MethodInfo *)0x0);
    pAVar1 = (this->fields).skillPercentageSetting;
    if ((((pAVar1 != (AttributeSettingFloat *)0x0) &&
         (pKVar4 = (pAVar1->fields)._.KogamaSettingNumeric,
         pKVar4 != (KogamaSettingNumeric_1_System_Single_ *)0x0)) &&
        (pRVar5 = (pKVar4->fields).RangeValidator, pRVar5 != (RangeValidator_1_System_Single_ *)0x0)
        ) && (pSVar6 = (this->fields).slider, pSVar6 != (Slider *)0x0)) {
      UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_minValue
                (pSVar6,(pRVar5->fields).min,(MethodInfo *)0x0);
      pAVar1 = (this->fields).skillPercentageSetting;
      if (((pAVar1 != (AttributeSettingFloat *)0x0) &&
          (pKVar4 = (pAVar1->fields)._.KogamaSettingNumeric,
          pKVar4 != (KogamaSettingNumeric_1_System_Single_ *)0x0)) &&
         ((pRVar5 = (pKVar4->fields).RangeValidator,
          pRVar5 != (RangeValidator_1_System_Single_ *)0x0 &&
          (pSVar6 = (this->fields).slider, pSVar6 != (Slider *)0x0)))) {
        UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_maxValue
                  (pSVar6,(pRVar5->fields).max,(MethodInfo *)0x0);
        pSStack7 = (this->fields).slider;
        if (pSStack7 != (Slider *)0x0) {
          puStack8 = (undefined *)(this->fields).settingValue;
          pIStack9 = (pSStack7->klass->vtable).Rebuild_1.methodPtr;
          (*(code *)(pSStack7->klass->vtable).set_value.method)();
          SkillSettingFloat_UpdateTextInputFieldWithSliderValue(this,(MethodInfo *)0x0);
          (this->fields).isInitialized = 1;
          return;
        }
      }
    }
  }
code_?:
  pIStack9 = (Il2CppMethodPointer)0x0;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.infoButton;
  this = (SkillSettingFloat *)(this->fields).settingValue;
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

void Assembly-CSharp.dll::SkillSettingFloat::SkillSettingFloat_InputFieldChange
               (SkillSettingFloat *this,MethodInfo *method)

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
      SkillSettingFloat_UpdateTextInputFieldWithSliderValue(this,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::SkillSettingFloat::SkillSettingFloat_SliderValueChanged
               (SkillSettingFloat *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).slider;
  if (pSVar1 != (Slider *)0x0) {
    fVar2 = (float10)(*(code *)(pSVar1->klass->vtable).get_value.method)
                               (pSVar1,(pSVar1->klass->vtable).set_value.methodPtr);
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    if (pSVar1 != (Slider *)0x0) {
      pSVar3 = pSVar1->klass;
      fVar2 = (float10)func_?((double)(float)fVar2,(pSVar3->vtable).Rebuild_1.methodPtr);
      (*(code *)(pSVar3->vtable).set_value.method)(pSVar1,(float)fVar2);
      SkillSettingFloat_UpdateTextInputFieldWithSliderValue(this,(MethodInfo *)0x0);
      pSVar1 = (this->fields).slider;
      if (pSVar1 != (Slider *)0x0) {
        fVar2 = (float10)(*(code *)(pSVar1->klass->vtable).get_value.method)
                                   (pSVar1,(pSVar1->klass->vtable).set_value.methodPtr);
        fStack_4 = (float)fVar2;
        uVar5 = func_?(TypeInfo__System__Single,&fStack_4);
        (*(code *)(this->klass->vtable).UpdateSkillData.method)
                  (this,uVar5,(this->klass->vtable).InitializeInfoButton.methodPtr);
        return;
      }
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateSkillData(Object) */

void Assembly-CSharp.dll::SkillSettingFloat::SkillSettingFloat_UpdateSkillData
               (SkillSettingFloat *this,Object *newValue,MethodInfo *method)

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
    func_?(0);
  }
  else {
    AccessoryPreviewPopup::AccessoryPreviewPopup_SetBody
              ((AccessoryPreviewPopup *)this_00,(MVBody *)newValue,(MethodInfo *)0x0);
    pAVar1 = (this->fields).skillPercentageSetting;
    unaff_EDI = (KogamaSettingValueWrapperBase *)newValue;
    if (pAVar1 == (AttributeSettingFloat *)0x0) goto code_?;
    MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
    KogamaSettingNumericBase`1[System::Int32]::
    KogamaSettingNumericBase_1_System_Int32__get_NumericValue
              ((KogamaSettingNumericBase_1_System_Int32_ *)pAVar1,
               MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
              );
    unaff_EBX = (IAttributeSetting__Class *)(this->fields).skillPercentageSetting;
    if ((unaff_EBX == (IAttributeSetting__Class *)0x0) || (newValue == (Object *)0x0))
    goto code_?;
    if ((newValue->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar2 = (float *)func_?();
    value = (KogamaSettingValueWrapperBase *)*pfVar2;
    MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
    KogamaSettingNumericBase`1[System::Single]::
    KogamaSettingNumericBase_1_System_Single__set_NumericValue
              ((KogamaSettingNumericBase_1_System_Single_ *)unaff_EBX,(float)value,
               MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__set_NumericValue_float_
              );
    unaff_EBX = 
    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
    ;
    unaff_EDI = (this->fields)._.skillSetting;
    if (unaff_EDI == (KogamaSettingValueWrapperBase *)0x0) goto code_?;
    iVar3 = func_?(unaff_EDI,
                            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                           );
    pIVar4 = 
    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
    ;
    if ((iVar3 != 0) &&
       (iVar3 = func_?(unaff_EDI,
                                TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                               ), unaff_EBX = pIVar4, iVar3 != 0)) {
      unaff_EBX = (IAttributeSetting__Class *)&UNK_?;
      unaff_EDI = value;
      iVar3 = func_?(0,
                              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                              ,iVar3);
      if (((this->fields)._.spawnRoleTier == 0) &&
         (100 < ((this->fields)._.spawnRoleCost - (this->fields)._.currentSkillCost) + iVar3)) {
        pAVar1 = (this->fields).skillPercentageSetting;
        if (pAVar1 != (AttributeSettingFloat *)0x0) {
          MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes
          ::KogamaSettingNumericBase`1[System::Single]::
          KogamaSettingNumericBase_1_System_Single__set_NumericValue
                    ((KogamaSettingNumericBase_1_System_Single_ *)pAVar1,(float)extraout_ST0,
                     MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__set_NumericValue_float_
                    );
          pSVar5 = (this->fields).slider;
          if (pSVar5 != (Slider *)0x0) {
            (*(code *)(pSVar5->klass->vtable).set_value.method)
                      (pSVar5,(float)extraout_ST0,(pSVar5->klass->vtable).Rebuild_1.methodPtr);
            SkillSettingFloat_UpdateTextInputFieldWithSliderValue(this,(MethodInfo *)0x0);
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
  func_?(unaff_EDI,unaff_EBX);
  newValue = (Object *)unaff_EDI;
code_?:
  func_?(newValue);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateTextInputFieldWithSliderValue() */

void Assembly-CSharp.dll::SkillSettingFloat::SkillSettingFloat_UpdateTextInputFieldWithSliderValue
               (SkillSettingFloat *this,MethodInfo *method)

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

