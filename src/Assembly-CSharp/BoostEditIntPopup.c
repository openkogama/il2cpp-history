
/* Void BoostInputFieldChange() */

void Assembly-CSharp.dll::BoostEditIntPopup::BoostEditIntPopup_BoostInputFieldChange
               (BoostEditIntPopup *this,MethodInfo *method)

{
  fStack_1 = 0.0;
  pIVar2 = (this->fields).boostInputField;
  if (pIVar2 != (InputField *)0x0) {
    mscorlib.dll::System::Single::Single_TryParse
              ((pIVar2->fields).m_Text,&fStack_1,(MethodInfo *)0x0);
    pSVar3 = (this->fields).boostSlider;
    if (pSVar3 != (Slider *)0x0) {
      (*(pSVar3->klass->vtable).set_value.methodPtr)(pSVar3);
      BoostEditIntPopup_UpdateBoostTextInputFieldWithBoostSliderValue(this,(MethodInfo *)0x0);
      BoostEditIntPopup_UpdateSettingData(this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void BoostSliderValueChanged() */

void Assembly-CSharp.dll::BoostEditIntPopup::BoostEditIntPopup_BoostSliderValueChanged
               (BoostEditIntPopup *this,MethodInfo *method)

{
  BoostEditIntPopup_UpdateBoostTextInputFieldWithBoostSliderValue(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  if (*(char *)(in_stack_1 + 0x24) == '\0') {
    return;
  }
  piVar2 = *(int **)(in_stack_1 + 0x3c);
  iVar3 = *(int *)(in_stack_1 + 0x2c);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x22c))(piVar2,*(undefined4 *)(*piVar2 + 0x230));
    uVar4 = func_?(TypeInfo__System__Int32,&stack0x00000000);
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

void Assembly-CSharp.dll::BoostEditIntPopup::BoostEditIntPopup_Initialize
               (BoostEditIntPopup *this,Boost *boost,GameBoosterSettingWithGoldSetting *boostSetting
               ,UnityAction_1_System_Object_ *settingChangedCallback,
               UnityAction_1_System_Int32_ *priceChangedCallback,UnityAction *submitDataCallback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
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
        this_00 = (KogamaSettingNumericBase_1_System_Object_ *)
                  MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                  GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
                  GameBoosterSettingWithGoldSetting_get_Setting(boostSetting,(MethodInfo *)0x0);
        unaff_EDI = this_00;
        if (this_00 != (KogamaSettingNumericBase_1_System_Object_ *)0x0) {
          pKVar2 = 
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
          ;
          if (((this_00->klass->_1).typeHierarchyDepth <
               (
               TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
               ->_1).typeHierarchyDepth) ||
             ((this_00->klass->_1).typeHierarchy
              [(
               TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
               ->_1).typeHierarchyDepth - 1] !=
              (Il2CppClass *)
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
             )) goto code_?;
          pKVar3 = (this_00->fields).KogamaSettingNumeric;
          if ((pKVar3 != (KogamaSettingNumeric_1_System_Object_ *)0x0) &&
             ((pRVar4 = (pKVar3->fields).RangeValidator,
              pRVar4 != (RangeValidator_1_System_Object_ *)0x0 &&
              (pSVar5 = (this->fields).boostSlider, pSVar5 != (Slider *)0x0)))) {
            UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_maxValue
                      (pSVar5,(float)(int)(pRVar4->fields).max,(MethodInfo *)0x0);
            pKVar3 = (this_00->fields).KogamaSettingNumeric;
            if ((pKVar3 != (KogamaSettingNumeric_1_System_Object_ *)0x0) &&
               ((pRVar4 = (pKVar3->fields).RangeValidator,
                pRVar4 != (RangeValidator_1_System_Object_ *)0x0 &&
                (pSVar5 = (this->fields).boostSlider, pSVar5 != (Slider *)0x0)))) {
              UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_minValue
                        (pSVar5,(float)(int)(pRVar4->fields).min,(MethodInfo *)0x0);
              pSVar5 = (this->fields).boostSlider;
              pOVar6 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                       KogamaSettingTypes::KogamaSettingNumericBase`1[System::Object]::
                       KogamaSettingNumericBase_1_System_Object__get_NumericValue
                                 (this_00,
                                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                                 );
              unaff_EDI = (KogamaSettingNumericBase_1_System_Object_ *)0x0;
              if (pSVar5 != (Slider *)0x0) {
                (*(pSVar5->klass->vtable).set_value.methodPtr)
                          (pSVar5,(float)(int)pOVar6,(pSVar5->klass->vtable).set_value.method);
                pOVar6 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                         KogamaSettingTypes::KogamaSettingNumericBase`1[System::Object]::
                         KogamaSettingNumericBase_1_System_Object__get_NumericValue
                                   (this_00,
                                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                                   );
                (this->fields).originalSettingValue = (int32_t)pOVar6;
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

void Assembly-CSharp.dll::BoostEditIntPopup::BoostEditIntPopup_OnCancelBoostEdit
               (BoostEditIntPopup *this,MethodInfo *method)

{
  pSVar1 = (this->fields).boostSlider;
  if (pSVar1 != (Slider *)0x0) {
    (*(pSVar1->klass->vtable).set_value.methodPtr)
              (pSVar1,(float)(this->fields).originalSettingValue,
               (pSVar1->klass->vtable).set_value.method);
    BoostEditIntPopup_UpdateSettingData(this,(MethodInfo *)0x0);
    BoostEditPopup::BoostEditPopup_OnCancelBoostEdit((BoostEditPopup *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateBoostSliderValueWithBoostInputFieldText() */

void Assembly-CSharp.dll::BoostEditIntPopup::
     BoostEditIntPopup_UpdateBoostSliderValueWithBoostInputFieldText
               (BoostEditIntPopup *this,MethodInfo *method)

{
  pSStack_1 = (Slider *)0x0;
  pIVar2 = (this->fields).boostInputField;
  if (pIVar2 != (InputField *)0x0) {
    mscorlib.dll::System::Single::Single_TryParse
              ((pIVar2->fields).m_Text,(float *)&pSStack_1,(MethodInfo *)0x0);
    pSVar3 = (this->fields).boostSlider;
    if (pSVar3 != (Slider *)0x0) {
      pSStack_1 = pSVar3;
      (*(pSVar3->klass->vtable).set_value.methodPtr)();
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateBoostTextInputFieldWithBoostSliderValue() */

void Assembly-CSharp.dll::BoostEditIntPopup::
     BoostEditIntPopup_UpdateBoostTextInputFieldWithBoostSliderValue
               (BoostEditIntPopup *this,MethodInfo *method)

{
  pSVar1 = (this->fields).boostSlider;
  this_00 = (this->fields).boostInputField;
  if (pSVar1 != (Slider *)0x0) {
    fVar2 = (float10)(*(pSVar1->klass->vtable).get_value.methodPtr)
                               (pSVar1,(pSVar1->klass->vtable).get_value.method);
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


/* Void UpdateSettingData() */

void Assembly-CSharp.dll::BoostEditIntPopup::BoostEditIntPopup_UpdateSettingData
               (BoostEditIntPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  if ((this->fields)._.isInitialized == 0) {
    return;
  }
  pSVar1 = (this->fields).boostSlider;
  pUVar2 = (this->fields)._.settingChangedCallback;
  if (pSVar1 != (Slider *)0x0) {
    (*(pSVar1->klass->vtable).get_value.methodPtr)(pSVar1,(pSVar1->klass->vtable).get_value.method);
    uVar3 = func_?(TypeInfo__System__Int32,auStack_4);
    if (pUVar2 != (UnityAction_1_System_Object_ *)0x0) {
      (*(pUVar2->fields)._._.invoke_impl)
                ((pUVar2->fields)._._.method_code,uVar3,(pUVar2->fields)._._.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

