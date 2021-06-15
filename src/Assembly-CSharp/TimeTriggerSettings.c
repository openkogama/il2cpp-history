
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::TimeTriggerSettings::TimeTriggerSettings_Initialize
               (TimeTriggerSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_TimeTrigger,(MethodInfo *)0x0)
    ;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      this_02 = (PrefabPool *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_01,woID,(MethodInfo *)0x0);
      if (this_02 != (PrefabPool *)0x0) {
        this_03 = (Dictionary_2_System_Type_Pool_ *)
                  PrefabPool::PrefabPool_get_MVBatteryPrefab(this_02,(MethodInfo *)0x0);
        if (this_03 != (Dictionary_2_System_Type_Pool_ *)0x0) {
          pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             (this_03,(Type *)StringLiteral_duration,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
            func_?();
          }
          value = mscorlib.dll::System::Convert::Convert_ToSingle_14
                            ((Object *)pPVar1,(MethodInfo *)0x0);
          pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             (this_03,(Type *)StringLiteral_time,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          value_00 = mscorlib.dll::System::Convert::Convert_ToSingle_14
                               ((Object *)pPVar1,(MethodInfo *)0x0);
          pSVar2 = (this->fields).durationSlider;
          if (pSVar2 != (SettingsSlider *)0x0) {
            SettingsSlider::SettingsSlider_Initialize
                      (pSVar2,StringLiteral_duration,value,0.1,1000.0,(MethodInfo *)0x0);
            pSVar3 = (this->fields).durationInputField;
            if (pSVar3 != (SettingsInputFieldSlider *)0x0) {
              SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                        (pSVar3,StringLiteral_duration,value,(MethodInfo *)0x0);
              pSVar2 = (this->fields).delaySlider;
              if (pSVar2 != (SettingsSlider *)0x0) {
                SettingsSlider::SettingsSlider_Initialize
                          (pSVar2,StringLiteral_time,value_00,0.0,1000.0,(MethodInfo *)0x0);
                pSVar3 = (this->fields).delayInputField;
                if (pSVar3 != (SettingsInputFieldSlider *)0x0) {
                  SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                            (pSVar3,StringLiteral_time,value_00,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

