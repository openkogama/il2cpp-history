
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::CountingCubeSettings::CountingCubeSettings_Initialize
               (CountingCubeSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_CountingCube,(MethodInfo *)0x0
              );
    if (woID == -1) {
      this_06 = (Dictionary_2_System_Type_Pool_ *)func_?();
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_06,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      root = (GameObject *)0x5;
      pCVar1 = (CrossPlatformInputManager_VirtualButton *)
               func_?(TypeInfo__System__Int32,&root);
      if (this_06 != (Dictionary_2_System_Type_Pool_ *)0x0) {
        method = (MethodInfo *)StringLiteral_startingValue;
        root = (GameObject *)this_06;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)this_06,StringLiteral_startingValue,pCVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        method = (MethodInfo *)&UNK_?;
        pCVar1 = (CrossPlatformInputManager_VirtualButton *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)this_06,StringLiteral_reset,pCVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
code_?:
        this_01 = (this->fields).slider;
        if (this_06 != (Dictionary_2_System_Type_Pool_ *)0x0) {
          root = (GameObject *)&UNK_?;
          method = (MethodInfo *)this_06;
          pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             (this_06,(Type *)StringLiteral_startingValue,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if ((this_01 != (SettingsSlider *)0x0) && (pPVar2 != (Pool *)0x0)) {
            if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
            goto code_?;
            piVar3 = (int32_t *)func_?();
            SettingsSlider::SettingsSlider_Initialize_1
                      (this_01,StringLiteral_startingValue,*piVar3,1,99,(MethodInfo *)0x0);
            this_02 = (this->fields).inputField;
            pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                     Dictionary_2_System_Type_Pool__get_Item
                               (this_06,(Type *)StringLiteral_startingValue,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            if ((this_02 != (SettingsInputFieldSlider *)0x0) && (pPVar2 != (Pool *)0x0)) {
              if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
              goto code_?;
              piVar3 = (int32_t *)func_?();
              SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                        (this_02,StringLiteral_startingValue,*piVar3,(MethodInfo *)0x0);
              this_03 = (this->fields).toggle;
              pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                       Dictionary_2_System_Type_Pool__get_Item
                                 (this_06,(Type *)StringLiteral_reset,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              if ((this_03 != (SettingsToggle *)0x0) && (pPVar2 != (Pool *)0x0)) {
                if ((pPVar2->klass->_0).element_class ==
                    (TypeInfo__System__Boolean->_0).element_class) {
                  pbVar4 = (byte *)func_?();
                  method = (MethodInfo *)(uint)*pbVar4;
                  root = (GameObject *)StringLiteral_reset;
                  SettingsToggle::SettingsToggle_Initialize
                            (this_03,StringLiteral_reset,*pbVar4,(MethodInfo *)0x0);
                  return;
                }
                goto code_?;
              }
            }
          }
        }
      }
    }
    else {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_04 != (MVWorldObjectClientManager *)0x0) {
        this_05 = (PrefabPool *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (this_04,woID,(MethodInfo *)0x0);
        if (this_05 != (PrefabPool *)0x0) {
          method = (MethodInfo *)0x0;
          root = (GameObject *)this_05;
          this_06 = (Dictionary_2_System_Type_Pool_ *)
                    PrefabPool::PrefabPool_get_MVBatteryPrefab(this_05,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  method = (MethodInfo *)&UNK_?;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::CountingCubeSettings::CountingCubeSettings_OnSettingChanged
               (CountingCubeSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  key_00 = key;
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (key,StringLiteral_startingValue,(MethodInfo *)0x0);
  this_00 = (this->fields).settingsBase;
  if (bVar1 == 0) {
    if (this_00 != (SettingsBase *)0x0) {
      SettingsBase::SettingsBase_OnSettingChanged(this_00,key_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Convert);
    }
    key = (String *)mscorlib.dll::System::Convert::Convert_ToInt32_16(value,(MethodInfo *)0x0);
    value_00 = (Object *)func_?(TypeInfo__System__Int32,&key);
    if (this_00 != (SettingsBase *)0x0) {
      SettingsBase::SettingsBase_OnSettingChanged(this_00,key_00,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

