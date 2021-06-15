
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
        pSVar6 = (this->fields).slider;
        if (pSVar6 != (Slider *)0x0) {
          (*(code *)(pSVar6->klass->vtable).set_value.method)();
          pSVar6 = (this->fields).slider;
          this_00 = (this->fields).inputField;
          if (pSVar6 != (Slider *)0x0) {
            (*(code *)(pSVar6->klass->vtable).get_value.method)();
            value = (String *)func_?();
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
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void InitializeInfoButton(String, Int32, SpawnRolesSkillDataManager) */

void Assembly-CSharp.dll::SkillSettingFloatDecimal::SkillSettingFloatDecimal_InitializeInfoButton
               (SkillSettingFloatDecimal *this,String *skill,int32_t skillCost,
               SpawnRolesSkillDataManager *skillDataManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.infoButton;
  this = (SkillSettingFloatDecimal *)(this->fields).settingValue;
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

void Assembly-CSharp.dll::SkillSettingFloatDecimal::SkillSettingFloatDecimal_InputFieldChange
               (SkillSettingFloatDecimal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = this;
  iVar2 = (this->fields).decimalPlaces;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  dVar3 = (double)iVar2;
  func_?();
  pSVar4 = (pSVar1->fields).slider;
  this = (SkillSettingFloatDecimal *)(float)dVar3;
  if (pSVar4 != (Slider *)0x0) {
    fVar5 = (float10)(*(code *)(pSVar4->klass->vtable).get_value.method)
                               (pSVar4,(pSVar4->klass->vtable).set_value.methodPtr);
    fVar5 = (float10)func_?((double)(fVar5 * (float10)(float)this));
    fStack_6 = (float)fVar5;
    (*(code *)(pSVar4->klass->vtable).set_value.method)
              (pSVar4,fStack_6 / (float)this,(pSVar4->klass->vtable).Rebuild_1.methodPtr);
    pIVar7 = (pSVar1->fields).inputField;
    this = (SkillSettingFloatDecimal *)0x0;
    if (pIVar7 != (InputField *)0x0) {
      pSVar8 = (String *)
               TriggerCube::TriggerCube_get_InputSignalReceiver
                         ((TriggerCube *)pIVar7,(MethodInfo *)0x0);
      mscorlib.dll::System::Single::Single_TryParse_1(pSVar8,(float *)&this,(MethodInfo *)0x0);
      pSVar4 = (pSVar1->fields).slider;
      if (pSVar4 != (Slider *)0x0) {
        (*(code *)(pSVar4->klass->vtable).set_value.method)
                  (pSVar4,this,(pSVar4->klass->vtable).Rebuild_1.methodPtr);
        pSVar4 = (pSVar1->fields).slider;
        pIVar7 = (pSVar1->fields).inputField;
        this = (SkillSettingFloatDecimal *)0x0;
        if (pSVar4 != (Slider *)0x0) {
          fVar5 = (float10)(*(code *)(pSVar4->klass->vtable).get_value.method)
                                     (pSVar4,(pSVar4->klass->vtable).set_value.methodPtr);
          this = (SkillSettingFloatDecimal *)(float)fVar5;
          pSVar8 = (String *)func_?(&this,0);
          if (pIVar7 != (InputField *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                      (pIVar7,pSVar8,(MethodInfo *)0x0);
            pSVar4 = (pSVar1->fields).slider;
            if (pSVar4 != (Slider *)0x0) {
              fVar5 = (float10)(*(code *)(pSVar4->klass->vtable).get_value.method)
                                         (pSVar4,(pSVar4->klass->vtable).set_value.methodPtr);
              fStack_9 = (float)fVar5;
              uVar10 = func_?(TypeInfo__System__Single,&fStack_9);
              (*(code *)(pSVar1->klass->vtable).UpdateSkillData.method)
                        (pSVar1,uVar10,(pSVar1->klass->vtable).InitializeInfoButton.methodPtr);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SliderValueChanged() */

void Assembly-CSharp.dll::SkillSettingFloatDecimal::SkillSettingFloatDecimal_SliderValueChanged
               (SkillSettingFloatDecimal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = this;
  iVar2 = (this->fields).decimalPlaces;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  dVar3 = (double)iVar2;
  func_?();
  pSVar4 = (pSVar1->fields).slider;
  this = (SkillSettingFloatDecimal *)(float)dVar3;
  if (pSVar4 != (Slider *)0x0) {
    fVar5 = (float10)(*(code *)(pSVar4->klass->vtable).get_value.method)
                               (pSVar4,(pSVar4->klass->vtable).set_value.methodPtr);
    fVar5 = (float10)func_?((double)(fVar5 * (float10)(float)this));
    fStack_6 = (float)fVar5;
    (*(code *)(pSVar4->klass->vtable).set_value.method)
              (pSVar4,fStack_6 / (float)this,(pSVar4->klass->vtable).Rebuild_1.methodPtr);
    pSVar4 = (pSVar1->fields).slider;
    this_00 = (pSVar1->fields).inputField;
    this = (SkillSettingFloatDecimal *)0x0;
    if (pSVar4 != (Slider *)0x0) {
      fVar5 = (float10)(*(code *)(pSVar4->klass->vtable).get_value.method)
                                 (pSVar4,(pSVar4->klass->vtable).set_value.methodPtr);
      this = (SkillSettingFloatDecimal *)(float)fVar5;
      value = (String *)func_?(&this,0);
      if (this_00 != (InputField *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                  (this_00,value,(MethodInfo *)0x0);
        pSVar4 = (pSVar1->fields).slider;
        if (pSVar4 != (Slider *)0x0) {
          fVar5 = (float10)(*(code *)(pSVar4->klass->vtable).get_value.method)
                                     (pSVar4,(pSVar4->klass->vtable).set_value.methodPtr);
          fStack_7 = (float)fVar5;
          uVar8 = func_?(TypeInfo__System__Single,&fStack_7);
          (*(code *)(pSVar1->klass->vtable).UpdateSkillData.method)
                    (pSVar1,uVar8,(pSVar1->klass->vtable).InitializeInfoButton.methodPtr);
          return;
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void UpdateSkillData(Object) */

void Assembly-CSharp.dll::SkillSettingFloatDecimal::SkillSettingFloatDecimal_UpdateSkillData
               (SkillSettingFloatDecimal *this,Object *newValue,MethodInfo *method)

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
    if (pAVar1 == (AttributeSettingFloat *)0x0) goto code_?;
    MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
    KogamaSettingNumericBase`1[System::Int32]::
    KogamaSettingNumericBase_1_System_Int32__get_NumericValue
              ((KogamaSettingNumericBase_1_System_Int32_ *)pAVar1,
               MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
              );
    iVar2 = (this->fields).decimalPlaces;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    dVar3 = (double)iVar2;
    func_?();
    if (newValue == (Object *)0x0) goto code_?;
    pSVar4 = TypeInfo__System__Single;
    if ((newValue->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar5 = (float *)func_?(newValue);
    pAVar1 = (this->fields).skillPercentageSetting;
    if (pAVar1 == (AttributeSettingFloat *)0x0) goto code_?;
    method_00 = (MethodInfo *)&UNK_?;
    fVar6 = (float10)func_?((double)(*pfVar5 * (float)dVar3),
                                     MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__set_NumericValue_float_
                                    );
    MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
    KogamaSettingNumericBase`1[System::Single]::
    KogamaSettingNumericBase_1_System_Single__set_NumericValue
              ((KogamaSettingNumericBase_1_System_Single_ *)pAVar1,(float)fVar6 / (float)dVar3,
               method_00);
    if ((this->fields)._.skillSetting == (KogamaSettingValueWrapperBase *)0x0)
    goto code_?;
    iVar2 = func_?();
    if ((iVar2 != 0) && (iVar2 = func_?(), iVar2 != 0)) {
      iVar2 = func_?(0,
                              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                              ,iVar2);
      if (((this->fields)._.spawnRoleTier == 0) &&
         (100 < ((this->fields)._.spawnRoleCost - (this->fields)._.currentSkillCost) + iVar2)) {
        pAVar1 = (this->fields).skillPercentageSetting;
        if (pAVar1 != (AttributeSettingFloat *)0x0) {
          MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes
          ::KogamaSettingNumericBase`1[System::Single]::
          KogamaSettingNumericBase_1_System_Single__set_NumericValue
                    ((KogamaSettingNumericBase_1_System_Single_ *)pAVar1,(float)extraout_ST0,
                     MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__set_NumericValue_float_
                    );
          pSVar7 = (this->fields).slider;
          if (pSVar7 != (Slider *)0x0) {
            (*(code *)(pSVar7->klass->vtable).set_value.method)
                      (pSVar7,(float)extraout_ST0,(pSVar7->klass->vtable).Rebuild_1.methodPtr);
            SkillSettingFloatDecimal_UpdateTextInputFieldWithSliderValue(this,(MethodInfo *)0x0);
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
  func_?();
  pSVar4 = extraout_ECX;
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)(pSVar4);
  return;
}


/* Void UpdateTextInputFieldWithSliderValue() */

void Assembly-CSharp.dll::SkillSettingFloatDecimal::
     SkillSettingFloatDecimal_UpdateTextInputFieldWithSliderValue
               (SkillSettingFloatDecimal *this,MethodInfo *method)

{
  fStack_1 = 0.0;
  pSVar2 = (this->fields).slider;
  this_00 = (this->fields).inputField;
  if (pSVar2 != (Slider *)0x0) {
    fVar3 = (float10)(*(code *)(pSVar2->klass->vtable).get_value.method)
                               (pSVar2,(pSVar2->klass->vtable).set_value.methodPtr);
    fStack_1 = (float)fVar3;
    value = (String *)func_?(&fStack_1,0);
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


/* SkillSettingFloatDecimal() */

void Assembly-CSharp.dll::SkillSettingFloatDecimal::SkillSettingFloatDecimal__ctor
               (SkillSettingFloatDecimal *this,MethodInfo *method)

{
  (this->fields).decimalPlaces = 2;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

