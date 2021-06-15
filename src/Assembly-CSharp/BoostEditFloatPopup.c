
/* Void BoostInputFieldChange() */

void Assembly-CSharp.dll::BoostEditFloatPopup::BoostEditFloatPopup_BoostInputFieldChange
               (BoostEditFloatPopup *this,MethodInfo *method)

{
  this_00 = (this->fields).boostInputField;
  if (this_00 != (InputField *)0x0) {
    s = (String *)
        TriggerCube::TriggerCube_get_InputSignalReceiver((TriggerCube *)this_00,(MethodInfo *)0x0);
    mscorlib.dll::System::Single::Single_TryParse_1(s,(float *)&stack0xfffffff8,(MethodInfo *)0x0);
    pSVar1 = (this->fields).boostSlider;
    if (pSVar1 != (Slider *)0x0) {
      (*(code *)(pSVar1->klass->vtable).set_value.method)();
      BoostEditFloatPopup_UpdateBoostTextInputFieldWithBoostSliderValue(this,(MethodInfo *)0x0);
      BoostEditFloatPopup_UpdateSettingData(this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void BoostSliderValueChanged() */

void Assembly-CSharp.dll::BoostEditFloatPopup::BoostEditFloatPopup_BoostSliderValueChanged
               (BoostEditFloatPopup *this,MethodInfo *method)

{
  BoostEditFloatPopup_UpdateBoostTextInputFieldWithBoostSliderValue(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (*(char *)((int)in_stack_1 + 0x24) == '\0') {
    return;
  }
  piVar2 = *(int **)((int)in_stack_1 + 0x3c);
  this_00 = *(Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ **)
             ((int)in_stack_1 + 0x2c);
  if (piVar2 != (int *)0x0) {
    fVar3 = (float10)(**(code **)(*piVar2 + 0x230))(piVar2,*(undefined4 *)(*piVar2 + 0x234));
    in_stack_1 = (float)fVar3;
    obj = (Dictionary_2_System_String_System_Object_ *)
          func_?(TypeInfo__System__Single,&stack0x0000000c);
    if (this_00 !=
        (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
      mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
      String,System::Object]]::
      Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                (this_00,obj,
                 MethodInfo__UnityEngine__Events__UnityAction<System::Object>__Invoke_System__Object_
                );
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize(Boost, GameBoosterSettingWithGoldSetting, UnityAction`1[System.Object],
   UnityAction`1[System.Int32], UnityAction) */

void Assembly-CSharp.dll::BoostEditFloatPopup::BoostEditFloatPopup_Initialize
               (BoostEditFloatPopup *this,Boost *boost,
               GameBoosterSettingWithGoldSetting *boostSetting,
               UnityAction_1_System_Object_ *settingChangedCallback,
               UnityAction_1_System_Int32_ *priceChangedCallback,UnityAction *submitDataCallback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (boost != (Boost *)0x0) {
    pTVar1 = (this->fields).boostSliderDescription;
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,(boost->fields)._ValueDescription_k__BackingField,
                 (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      if (boostSetting != (GameBoosterSettingWithGoldSetting *)0x0) {
        pKVar2 = (KogamaSettingNumericBase_1_System_Int32_ *)
                 MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                 GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
                 GameBoosterSettingWithGoldSetting_get_Setting(boostSetting,(MethodInfo *)0x0);
        unaff_EBX = 
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
        ;
        if (pKVar2 != (KogamaSettingNumericBase_1_System_Int32_ *)0x0) {
          bVar3 = (
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
                  ->_1).naturalAligment;
          if (((((KogamaSettingValueWrapperBase__Class *)pKVar2->klass)->_1).naturalAligment < bVar3
              ) || ((((KogamaSettingValueWrapperBase__Class *)pKVar2->klass)->_1).typeHierarchy
                    [bVar3 - 1] !=
                    (Il2CppClass *)
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
                   )) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          this_00 = (KogamaSettingNumericBase_1_System_Int32_ *)0x0;
          if (bVar4) {
            this_00 = pKVar2;
          }
          if (this_00 == (KogamaSettingNumericBase_1_System_Int32_ *)0x0) goto code_?;
          pKVar5 = (this_00->fields).KogamaSettingNumeric;
          if (((pKVar5 != (KogamaSettingNumeric_1_System_Int32_ *)0x0) &&
              (pRVar6 = (pKVar5->fields).RangeValidator,
              pRVar6 != (RangeValidator_1_System_Int32_ *)0x0)) &&
             (pSVar7 = (this->fields).boostSlider, pSVar7 != (Slider *)0x0)) {
            UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_maxValue
                      (pSVar7,(float)(pRVar6->fields).max,(MethodInfo *)0x0);
            pKVar5 = (this_00->fields).KogamaSettingNumeric;
            if (((pKVar5 != (KogamaSettingNumeric_1_System_Int32_ *)0x0) &&
                (pRVar6 = (pKVar5->fields).RangeValidator,
                pRVar6 != (RangeValidator_1_System_Int32_ *)0x0)) &&
               (pSVar7 = (this->fields).boostSlider, pSVar7 != (Slider *)0x0)) {
              UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_minValue
                        (pSVar7,(float)(pRVar6->fields).min,(MethodInfo *)0x0);
              pSVar7 = (this->fields).boostSlider;
              MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
              KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
              KogamaSettingNumericBase_1_System_Int32__get_NumericValue
                        (this_00,
                         MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                        );
              unaff_EBX = (KogamaSettingNumericBase_1_System_Single___Class *)0x0;
              if (pSVar7 != (Slider *)0x0) {
                (*(code *)(pSVar7->klass->vtable).set_value.method)
                          (pSVar7,(float)extraout_ST0,(pSVar7->klass->vtable).Rebuild_1.methodPtr);
                MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
                KogamaSettingNumericBase_1_System_Int32__get_NumericValue
                          (this_00,
                           MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                          );
                (this->fields).originalSettingValue = (float)extraout_ST0_00;
                BoostEditPopup::BoostEditPopup_Initialize
                          ((BoostEditPopup *)this,boost,boostSetting,settingChangedCallback,
                           priceChangedCallback,submitDataCallback,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pKVar2 = extraout_EDX;
code_?:
  func_?(pKVar2,unaff_EBX);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnCancelBoostEdit() */

void Assembly-CSharp.dll::BoostEditFloatPopup::BoostEditFloatPopup_OnCancelBoostEdit
               (BoostEditFloatPopup *this,MethodInfo *method)

{
  pSVar1 = (this->fields).boostSlider;
  if (pSVar1 != (Slider *)0x0) {
    (*(code *)(pSVar1->klass->vtable).set_value.method)
              (pSVar1,(this->fields).originalSettingValue,
               (pSVar1->klass->vtable).Rebuild_1.methodPtr);
    BoostEditFloatPopup_UpdateSettingData(this,(MethodInfo *)0x0);
    BoostEditPopup::BoostEditPopup_OnCancelBoostEdit((BoostEditPopup *)this,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateBoostTextInputFieldWithBoostSliderValue() */

void Assembly-CSharp.dll::BoostEditFloatPopup::
     BoostEditFloatPopup_UpdateBoostTextInputFieldWithBoostSliderValue
               (BoostEditFloatPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  pSVar2 = (this->fields).boostSlider;
  this_00 = (this->fields).boostInputField;
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


/* Void UpdateSettingData() */

void Assembly-CSharp.dll::BoostEditFloatPopup::BoostEditFloatPopup_UpdateSettingData
               (BoostEditFloatPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._.isInitialized == 0) {
    return;
  }
  pSVar1 = (this->fields).boostSlider;
  this_00 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
            (this->fields)._.settingChangedCallback;
  if (pSVar1 != (Slider *)0x0) {
    fVar2 = (float10)(*(code *)(pSVar1->klass->vtable).get_value.method)
                               (pSVar1,(pSVar1->klass->vtable).set_value.methodPtr);
    this = (BoostEditFloatPopup *)(float)fVar2;
    obj = (Dictionary_2_System_String_System_Object_ *)
          func_?(TypeInfo__System__Single,&this);
    if (this_00 !=
        (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
      mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
      String,System::Object]]::
      Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                (this_00,obj,
                 MethodInfo__UnityEngine__Events__UnityAction<System::Object>__Invoke_System__Object_
                );
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

