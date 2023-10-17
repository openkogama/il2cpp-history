
/* Void BoostInputFieldChange() */

void Assembly-CSharp.dll::BoostEditFloatPopup::BoostEditFloatPopup_BoostInputFieldChange
               (BoostEditFloatPopup *this,MethodInfo *method)

{
  fStack_1 = 0.0;
  pIVar2 = (this->fields).boostInputField;
  if (pIVar2 != (InputField *)0x0) {
    mscorlib.dll::System::Single::Single_TryParse
              ((pIVar2->fields).m_Text,&fStack_1,(MethodInfo *)0x0);
    pSVar3 = (this->fields).boostSlider;
    if (pSVar3 != (Slider *)0x0) {
      (*(pSVar3->klass->vtable).set_value.methodPtr)(pSVar3);
      BoostEditIntPopup::BoostEditIntPopup_UpdateBoostTextInputFieldWithBoostSliderValue
                ((BoostEditIntPopup *)this,(MethodInfo *)0x0);
      BoostEditFloatPopup_UpdateSettingData(this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void BoostSliderValueChanged() */

void Assembly-CSharp.dll::BoostEditFloatPopup::BoostEditFloatPopup_BoostSliderValueChanged
               (BoostEditFloatPopup *this,MethodInfo *method)

{
  BoostEditIntPopup::BoostEditIntPopup_UpdateBoostTextInputFieldWithBoostSliderValue
            ((BoostEditIntPopup *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  if (*(char *)(in_stack_1 + 0x24) == '\0') {
    return;
  }
  piVar2 = *(int **)(in_stack_1 + 0x3c);
  iVar3 = *(int *)(in_stack_1 + 0x2c);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x22c))(piVar2,*(undefined4 *)(*piVar2 + 0x230));
    uVar4 = func_?(TypeInfo__System__Single,&stack0x00000000);
    if (iVar3 != 0) {
      (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar3 + 0x20),uVar4,*(undefined4 *)(iVar3 + 0x14));
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
                   );
    cRam_? = '\x01';
  }
  if (boost != (Boost *)0x0) {
    pTVar1 = (this->fields).boostSliderDescription;
    if (pTVar1 != (Text *)0x0) {
      (*(pTVar1->klass->vtable).set_text.methodPtr)
                (pTVar1,(boost->fields)._ValueDescription_k__BackingField,
                 (pTVar1->klass->vtable).set_text.method);
      if (boostSetting != (GameBoosterSettingWithGoldSetting *)0x0) {
        this_00 = (KogamaSettingNumericBase_1_System_Single_ *)
                  MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                  GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
                  GameBoosterSettingWithGoldSetting_get_Setting(boostSetting,(MethodInfo *)0x0);
        unaff_EDI = this_00;
        if (this_00 != (KogamaSettingNumericBase_1_System_Single_ *)0x0) {
          pKVar2 = 
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
          ;
          if (((this_00->klass->_1).typeHierarchyDepth <
               (
               TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
               ->_1).typeHierarchyDepth) ||
             ((this_00->klass->_1).typeHierarchy
              [(
               TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
               ->_1).typeHierarchyDepth - 1] !=
              (Il2CppClass *)
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
             )) goto code_?;
          pKVar3 = (this_00->fields).KogamaSettingNumeric;
          if ((pKVar3 != (KogamaSettingNumeric_1_System_Single_ *)0x0) &&
             ((pRVar4 = (pKVar3->fields).RangeValidator,
              pRVar4 != (RangeValidator_1_System_Single_ *)0x0 &&
              (pSVar5 = (this->fields).boostSlider, pSVar5 != (Slider *)0x0)))) {
            UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_maxValue
                      (pSVar5,(pRVar4->fields).max,(MethodInfo *)0x0);
            pKVar3 = (this_00->fields).KogamaSettingNumeric;
            if ((pKVar3 != (KogamaSettingNumeric_1_System_Single_ *)0x0) &&
               ((pRVar4 = (pKVar3->fields).RangeValidator,
                pRVar4 != (RangeValidator_1_System_Single_ *)0x0 &&
                (pSVar5 = (this->fields).boostSlider, pSVar5 != (Slider *)0x0)))) {
              UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_minValue
                        (pSVar5,(pRVar4->fields).min,(MethodInfo *)0x0);
              pSVar5 = (this->fields).boostSlider;
              fVar6 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                      KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                      KogamaSettingNumericBase_1_System_Single__get_NumericValue
                                (this_00,
                                 MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                                );
              unaff_EDI = (KogamaSettingNumericBase_1_System_Single_ *)0x0;
              if (pSVar5 != (Slider *)0x0) {
                (*(pSVar5->klass->vtable).set_value.methodPtr)
                          (pSVar5,fVar6,(pSVar5->klass->vtable).set_value.method);
                fVar6 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                        KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                        KogamaSettingNumericBase_1_System_Single__get_NumericValue
                                  (this_00,
                                   MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                                  );
                (this->fields).originalSettingValue = fVar6;
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
  func_?();
  pKVar2 = extraout_EDX;
code_?:
  func_?(unaff_EDI,pKVar2);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnCancelBoostEdit() */

void Assembly-CSharp.dll::BoostEditFloatPopup::BoostEditFloatPopup_OnCancelBoostEdit
               (BoostEditFloatPopup *this,MethodInfo *method)

{
  pSVar1 = (this->fields).boostSlider;
  if (pSVar1 != (Slider *)0x0) {
    (*(pSVar1->klass->vtable).set_value.methodPtr)
              (pSVar1,(this->fields).originalSettingValue,(pSVar1->klass->vtable).set_value.method);
    BoostEditFloatPopup_UpdateSettingData(this,(MethodInfo *)0x0);
    BoostEditPopup::BoostEditPopup_OnCancelBoostEdit((BoostEditPopup *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateSettingData() */

void Assembly-CSharp.dll::BoostEditFloatPopup::BoostEditFloatPopup_UpdateSettingData
               (BoostEditFloatPopup *this,MethodInfo *method)

{
  fStack_1 = in_ECX;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  if ((this->fields)._.isInitialized == 0) {
    return;
  }
  pSVar2 = (this->fields).boostSlider;
  pUVar3 = (this->fields)._.settingChangedCallback;
  if (pSVar2 != (Slider *)0x0) {
    fVar4 = (float10)(*(pSVar2->klass->vtable).get_value.methodPtr)
                               (pSVar2,(pSVar2->klass->vtable).get_value.method);
    fStack_1 = (float)fVar4;
    uVar5 = func_?(TypeInfo__System__Single,&fStack_1);
    if (pUVar3 != (UnityAction_1_System_Object_ *)0x0) {
      (*(pUVar3->fields)._._.invoke_impl)
                ((pUVar3->fields)._._.method_code,uVar5,(pUVar3->fields)._._.method);
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

