
/* Int32 GetMinutes(String) */

int32_t Assembly-CSharp.dll::RoundCubeSettings::RoundCubeSettings_GetMinutes
                  (RoundCubeSettings *this,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    iVar2 = mscorlib.dll::System::Int32::Int32_Parse_3(value,(MethodInfo *)0x0);
    _this = CONCAT44(iVar2,this);
    method = (MethodInfo *)0x0;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    _this = 0;
    if ((((uint)(TypeInfo__System__TimeSpan->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__TimeSpan->_1).cctor_started == 0)) {
      func_?();
    }
    _this = mscorlib.dll::System::TimeSpan::TimeSpan_FromMinutes
                      ((double)in_stack_3,(MethodInfo *)0x0);
    ppRVar4 = &this;
    uVar5 = 0;
    iVar6 = func_?();
    iVar7 = func_?(&this,0,ppRVar4,uVar5);
    return iVar7 + iVar6 * 0x3c;
  }
  return 0;
}


/* Int32 GetMinutes(Int32) */

int32_t Assembly-CSharp.dll::RoundCubeSettings::RoundCubeSettings_GetMinutes_1
                  (RoundCubeSettings *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  if ((((uint)(TypeInfo__System__TimeSpan->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__TimeSpan->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__TimeSpan);
  }
  iStack_1 = (int64_t)mscorlib.dll::System::TimeSpan::TimeSpan_FromMinutes
                                ((double)value,(MethodInfo *)0x0);
  piVar2 = &iStack_1;
  uVar3 = 0;
  iVar4 = func_?();
  iVar5 = func_?(&iStack_1,0,piVar2,uVar3);
  return iVar5 + iVar4 * 0x3c;
}


/* Int32 GetSeconds(String) */

int32_t Assembly-CSharp.dll::RoundCubeSettings::RoundCubeSettings_GetSeconds
                  (RoundCubeSettings *this,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    mscorlib.dll::System::Int32::Int32_Parse_3(value,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__System__TimeSpan->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__TimeSpan->_1).cctor_started == 0)) {
      func_?();
    }
    mscorlib.dll::System::TimeSpan::TimeSpan_FromSeconds
              ((double)in_stack_2,(MethodInfo *)0x0);
    iVar3 = func_?();
    return iVar3;
  }
  return 0;
}


/* Int32 GetSeconds(Int32) */

int32_t Assembly-CSharp.dll::RoundCubeSettings::RoundCubeSettings_GetSeconds_1
                  (RoundCubeSettings *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__TimeSpan->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__TimeSpan->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__TimeSpan);
  }
  mscorlib.dll::System::TimeSpan::TimeSpan_FromSeconds((double)value,(MethodInfo *)0x0);
  iVar1 = func_?();
  return iVar1;
}


/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::RoundCubeSettings::RoundCubeSettings_Initialize
               (RoundCubeSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_RoundCube,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 != (MVWorldObjectClientManager *)0x0) {
      this_03 = (PrefabPool *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_02,woID,(MethodInfo *)0x0);
      if (this_03 != (PrefabPool *)0x0) {
        this_04 = (Dictionary_2_System_Type_Pool_ *)
                  PrefabPool::PrefabPool_get_MVBatteryPrefab(this_03,(MethodInfo *)0x0);
        if (this_04 != (Dictionary_2_System_Type_Pool_ *)0x0) {
          value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                  Dictionary_2_System_Type_Pool__get_Item
                            (this_04,(Type *)StringLiteral_interval,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
            func_?();
          }
          value_00 = mscorlib.dll::System::Convert::Convert_ToInt32_16
                               ((Object *)value,(MethodInfo *)0x0);
          this_01 = (this->fields).slider;
          if (this_01 != (SettingsSlider *)0x0) {
            SettingsSlider::SettingsSlider_Initialize_1
                      (this_01,StringLiteral_interval,value_00,0x1e,0xe10,(MethodInfo *)0x0);
            pIVar1 = (this->fields).minutes;
            RoundCubeSettings_GetMinutes_1(this,value_00 / 0x3c,(MethodInfo *)0x0);
            pSVar2 = (String *)func_?();
            if (pIVar1 != (InputField *)0x0) {
              UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                        (pIVar1,pSVar2,(MethodInfo *)0x0);
              pIVar1 = (this->fields).seconds;
              RoundCubeSettings_GetSeconds_1(this,value_00,(MethodInfo *)0x0);
              pSVar2 = (String *)func_?();
              if (pIVar1 != (InputField *)0x0) {
                UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                          (pIVar1,pSVar2,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnInputFieldChanged() */

void Assembly-CSharp.dll::RoundCubeSettings::RoundCubeSettings_OnInputFieldChanged
               (RoundCubeSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).seconds;
  if (pIVar1 != (InputField *)0x0) {
    pSVar2 = (String *)
             TriggerCube::TriggerCube_get_InputSignalReceiver
                       ((TriggerCube *)pIVar1,(MethodInfo *)0x0);
    iVar3 = RoundCubeSettings_GetSeconds(this,pSVar2,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp_1
                      (iVar3,0,0x3c,(MethodInfo *)0x0);
    pIVar1 = (this->fields).minutes;
    if (pIVar1 != (InputField *)0x0) {
      pSVar2 = (String *)
               TriggerCube::TriggerCube_get_InputSignalReceiver
                         ((TriggerCube *)pIVar1,(MethodInfo *)0x0);
      iVar4 = RoundCubeSettings_GetMinutes(this,pSVar2,(MethodInfo *)0x0);
      iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp_1
                        (iVar4,0,0x3c,(MethodInfo *)0x0);
      if (iVar4 == 0) {
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp_1
                  (iVar3,0x1e,0x3c,(MethodInfo *)0x0);
      }
      pIVar1 = (this->fields).minutes;
      pSVar2 = (String *)func_?();
      if (pIVar1 != (InputField *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                  (pIVar1,pSVar2,(MethodInfo *)0x0);
        pIVar1 = (this->fields).seconds;
        pSVar2 = (String *)func_?();
        if (pIVar1 != (InputField *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                    (pIVar1,pSVar2,(MethodInfo *)0x0);
          pSVar5 = (this->fields).slider;
          if ((pSVar5 != (SettingsSlider *)0x0) &&
             (pSVar6 = (pSVar5->fields).slider, pSVar6 != (Slider *)0x0)) {
            (*(code *)(pSVar6->klass->vtable).set_value.method)();
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SliderChanged() */

void Assembly-CSharp.dll::RoundCubeSettings::RoundCubeSettings_SliderChanged
               (RoundCubeSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  iStack_2 = 0;
  iStack_3 = 0;
  pSVar4 = (this->fields).slider;
  iStack_5 = 0;
  if ((pSVar4 != (SettingsSlider *)0x0) &&
     (pSVar6 = (pSVar4->fields).slider, pSVar6 != (Slider *)0x0)) {
    fVar7 = (float10)(*(code *)(pSVar6->klass->vtable).get_value.method)
                               (pSVar6,(pSVar6->klass->vtable).set_value.methodPtr);
    iStack_1 = (int)fVar7;
    pIVar8 = (this->fields).minutes;
    iStack_2 = iStack_1 / 0x3c;
    pSVar9 = (String *)func_?(&iStack_2,0);
    iStack_3 = RoundCubeSettings_GetMinutes(this,pSVar9,(MethodInfo *)0x0);
    pSVar9 = (String *)func_?(&iStack_3,0);
    if (pIVar8 != (InputField *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                (pIVar8,pSVar9,(MethodInfo *)0x0);
      pIVar8 = (this->fields).seconds;
      pSVar9 = (String *)func_?(&iStack_1,0);
      iStack_5 = RoundCubeSettings_GetSeconds(this,pSVar9,(MethodInfo *)0x0);
      pSVar9 = (String *)func_?(&iStack_5,0);
      if (pIVar8 != (InputField *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                  (pIVar8,pSVar9,(MethodInfo *)0x0);
        this_00 = (this->fields).settingsBase;
        iStack_10 = iStack_1;
        value = (Object *)func_?(TypeInfo__System__Int32,&iStack_10);
        if (this_00 != (SettingsBase *)0x0) {
          SettingsBase::SettingsBase_OnSettingChanged
                    (this_00,StringLiteral_interval,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

