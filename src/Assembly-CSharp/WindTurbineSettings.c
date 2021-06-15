
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::WindTurbineSettings::WindTurbineSettings_Initialize
               (WindTurbineSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = woID;
  pWVar2 = this;
  this_00 = (this->fields).settingsBase;
  if (this_00 == (SettingsBase *)0x0) goto code_?;
  SettingsBase::SettingsBase_Initialize
            (this_00,woID,root,MVWorldObjectDocumentationType__Enum_WindTurbine,(MethodInfo *)0x0);
  if (iVar1 == -1) {
    this_03 = (Dictionary_2_System_Type_Pool_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_03,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    this = (WindTurbineSettings *)0x0;
    pCVar3 = (CrossPlatformInputManager_VirtualButton *)
             func_?(TypeInfo__System__Int32,&this);
    if (this_03 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    method = (MethodInfo *)StringLiteral_windPitch;
    woID = (int32_t)&UNK_?;
    root = (GameObject *)this_03;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this_03,StringLiteral_windPitch,pCVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    root = (GameObject *)0xa;
    method = (MethodInfo *)&UNK_?;
    pCVar3 = (CrossPlatformInputManager_VirtualButton *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this_03,StringLiteral_windSize,pCVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
  }
  else {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 == (MVWorldObjectClientManager *)0x0) goto code_?;
    this = (WindTurbineSettings *)0x0;
    this_02 = (PrefabPool *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_01,iVar1,(MethodInfo *)0x0);
    if (this_02 == (PrefabPool *)0x0) goto code_?;
    method = (MethodInfo *)0x0;
    woID = (int32_t)&UNK_?;
    root = (GameObject *)this_02;
    this_03 = (Dictionary_2_System_Type_Pool_ *)
              PrefabPool::PrefabPool_get_MVBatteryPrefab(this_02,(MethodInfo *)0x0);
  }
  pSVar4 = (pWVar2->fields).pitchSlider;
  if (this_03 != (Dictionary_2_System_Type_Pool_ *)0x0) {
    root = (GameObject *)&UNK_?;
    method = (MethodInfo *)this_03;
    woID = (int32_t)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                    Dictionary_2_System_Type_Pool__get_Item
                              (this_03,(Type *)StringLiteral_windPitch,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?();
    }
    iVar1 = mscorlib.dll::System::Convert::Convert_ToInt32_16((Object *)woID,(MethodInfo *)0x0);
    if (pSVar4 != (SettingsSlider *)0x0) {
      SettingsSlider::SettingsSlider_Initialize_1
                (pSVar4,StringLiteral_windPitch,iVar1,0,0xb4,(MethodInfo *)0x0);
      pSVar5 = (pWVar2->fields).pitchInputField;
      pPVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         (this_03,(Type *)StringLiteral_windPitch,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      iVar1 = mscorlib.dll::System::Convert::Convert_ToInt32_16((Object *)pPVar6,(MethodInfo *)0x0);
      if (pSVar5 != (SettingsInputFieldSlider *)0x0) {
        SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                  (pSVar5,StringLiteral_windPitch,iVar1,(MethodInfo *)0x0);
        pSVar4 = (pWVar2->fields).powerSlider;
        pPVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           (this_03,(Type *)StringLiteral_windSize,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        iVar1 = mscorlib.dll::System::Convert::Convert_ToInt32_16
                          ((Object *)pPVar6,(MethodInfo *)0x0);
        if (pSVar4 != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_Initialize_1
                    (pSVar4,StringLiteral_windSize,iVar1,1,0x14,(MethodInfo *)0x0);
          pSVar5 = (pWVar2->fields).powerInputField;
          pPVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             (this_03,(Type *)StringLiteral_windSize,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          iVar1 = mscorlib.dll::System::Convert::Convert_ToInt32_16
                            ((Object *)pPVar6,(MethodInfo *)0x0);
          if (pSVar5 != (SettingsInputFieldSlider *)0x0) {
            method = (MethodInfo *)StringLiteral_windSize;
            woID = (int32_t)&UNK_?;
            root = (GameObject *)pSVar5;
            SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                      (pSVar5,StringLiteral_windSize,iVar1,(MethodInfo *)0x0);
            return;
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


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::WindTurbineSettings::WindTurbineSettings_OnSettingChanged
               (WindTurbineSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,4);
  if (args == (Object__Array *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
  }
  else {
    if ((StringLiteral_Setting_changed_ != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral_Setting_changed_,(args->klass->_0).element_class),
       iVar2 == 0)) goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)StringLiteral_Setting_changed_;
    if ((key != (String *)0x0) &&
       (iVar2 = func_?(key,(args->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = (Object *)key;
    if ((::StringLiteral__ != (String *)0x0) &&
       (iVar2 = func_?(::StringLiteral__,(args->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)::StringLiteral__;
    if ((value == (Object *)0x0) ||
       (iVar2 = func_?(value,(args->klass->_0).element_class), iVar2 != 0)) {
      if (args->max_length < 4) goto code_?;
      args->vector[3] = value;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      message = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)message,(MethodInfo *)0x0);
      this_00 = (this->fields).settingsBase;
      if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
        func_?();
      }
      mscorlib.dll::System::Convert::Convert_ToSingle_14(value,(MethodInfo *)0x0);
      value_00 = (Object *)func_?(TypeInfo__System__Single);
      if (this_00 != (SettingsBase *)0x0) {
        SettingsBase::SettingsBase_OnSettingChanged(this_00,key,value_00,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  uVar1 = func_?(0,0);
  func_?(uVar1);
code_?:
  uVar1 = func_?(0,0);
  func_?(uVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

