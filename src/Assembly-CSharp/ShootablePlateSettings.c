
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::ShootablePlateSettings::ShootablePlateSettings_Initialize
               (ShootablePlateSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&StringLiteral_duration);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_ShootableButton,
               (MethodInfo *)0x0);
    this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_04 != (MVWorldObjectClientManager *)0x0) {
      pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_04,woID,(MethodInfo *)0x0);
      if ((pMVar1 != (MVWorldObject *)0x0) &&
         (this_01 = (pMVar1->fields).data,
         this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
        value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (this_01,(Object *)StringLiteral_duration,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        provider = mscorlib.dll::System::Globalization::CultureInfo::
                   CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        value_00 = mscorlib.dll::System::Convert::Convert_ToSingle
                             (value,(IFormatProvider *)provider,(MethodInfo *)0x0);
        this_02 = (this->fields).slider;
        if (this_02 != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_Initialize
                    (this_02,StringLiteral_duration,value_00,0.5,30.0,(MethodInfo *)0x0);
          this_03 = (this->fields).inputField;
          if (this_03 != (SettingsInputFieldSlider *)0x0) {
            SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                      (this_03,StringLiteral_duration,value_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::ShootablePlateSettings::ShootablePlateSettings_OnSettingChanged
               (ShootablePlateSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Convert);
  }
  this = (ShootablePlateSettings *)
         mscorlib.dll::System::Convert::Convert_ToSingle
                   (value,(IFormatProvider *)provider,(MethodInfo *)0x0);
  value_00 = (Object *)func_?(TypeInfo__System__Single,&this);
  if (this_00 != (SettingsBase *)0x0) {
    this = (ShootablePlateSettings *)0x0;
    SettingsBase::SettingsBase_OnSettingChanged(this_00,key,value_00,(MethodInfo *)0x0);
    return;
  }
  this = (ShootablePlateSettings *)&UNK_?;
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

