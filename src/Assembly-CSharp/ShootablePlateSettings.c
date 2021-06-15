
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::ShootablePlateSettings::ShootablePlateSettings_Initialize
               (ShootablePlateSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_ShootableButton,
               (MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_03 != (MVWorldObjectClientManager *)0x0) {
      this_04 = (PrefabPool *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_03,woID,(MethodInfo *)0x0);
      if (this_04 != (PrefabPool *)0x0) {
        this_05 = (Dictionary_2_System_Type_Pool_ *)
                  PrefabPool::PrefabPool_get_MVBatteryPrefab(this_04,(MethodInfo *)0x0);
        if (this_05 != (Dictionary_2_System_Type_Pool_ *)0x0) {
          value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                  Dictionary_2_System_Type_Pool__get_Item
                            (this_05,(Type *)StringLiteral_duration,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
            func_?();
          }
          value_00 = mscorlib.dll::System::Convert::Convert_ToSingle_14
                               ((Object *)value,(MethodInfo *)0x0);
          this_01 = (this->fields).slider;
          if (this_01 != (SettingsSlider *)0x0) {
            SettingsSlider::SettingsSlider_Initialize
                      (this_01,StringLiteral_duration,value_00,0.5,30.0,(MethodInfo *)0x0);
            this_02 = (this->fields).inputField;
            if (this_02 != (SettingsInputFieldSlider *)0x0) {
              SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                        (this_02,StringLiteral_duration,value_00,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::ShootablePlateSettings::ShootablePlateSettings_OnSettingChanged
               (ShootablePlateSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Convert);
  }
  this = (ShootablePlateSettings *)
         mscorlib.dll::System::Convert::Convert_ToSingle_14(value,(MethodInfo *)0x0);
  value_00 = (Object *)func_?(TypeInfo__System__Single,&this);
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_OnSettingChanged(this_00,key,value_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

