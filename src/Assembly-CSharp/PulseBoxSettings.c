
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::PulseBoxSettings::PulseBoxSettings_Initialize
               (PulseBoxSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 == (SettingsBase *)0x0) goto code_?;
  SettingsBase::SettingsBase_Initialize
            (this_00,woID,root,MVWorldObjectDocumentationType__Enum_PulseBox,(MethodInfo *)0x0);
  if (woID == -1) {
    this_03 = (Dictionary_2_System_Type_Pool_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_03,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    root = (GameObject *)0x3f000000;
    pCVar1 = (CrossPlatformInputManager_VirtualButton *)
             func_?(TypeInfo__System__Single,&root);
    if (this_03 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    method = (MethodInfo *)StringLiteral_intervalOn;
    root = (GameObject *)this_03;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this_03,StringLiteral_intervalOn,pCVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    method = (MethodInfo *)&UNK_?;
    pCVar1 = (CrossPlatformInputManager_VirtualButton *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this_03,StringLiteral_intervalOff,pCVar1,
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
    this_02 = (PrefabPool *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_01,woID,(MethodInfo *)0x0);
    if (this_02 == (PrefabPool *)0x0) goto code_?;
    method = (MethodInfo *)0x0;
    root = (GameObject *)this_02;
    this_03 = (Dictionary_2_System_Type_Pool_ *)
              PrefabPool::PrefabPool_get_MVBatteryPrefab(this_02,(MethodInfo *)0x0);
  }
  if (this_03 != (Dictionary_2_System_Type_Pool_ *)0x0) {
    root = (GameObject *)&UNK_?;
    method = (MethodInfo *)this_03;
    pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_03,(Type *)StringLiteral_intervalOn,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?();
    }
    value_00 = mscorlib.dll::System::Convert::Convert_ToSingle_14
                         ((Object *)pPVar2,(MethodInfo *)0x0);
    pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_03,(Type *)StringLiteral_intervalOff,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    root = (GameObject *)
           mscorlib.dll::System::Convert::Convert_ToSingle_14((Object *)pPVar2,(MethodInfo *)0x0);
    pSVar3 = (this->fields).enabledSlider;
    if (pSVar3 != (SettingsSlider *)0x0) {
      SettingsSlider::SettingsSlider_Initialize
                (pSVar3,StringLiteral_intervalOn,value_00,0.1,1000.0,(MethodInfo *)0x0);
      pSVar4 = (this->fields).enabledInputField;
      if (pSVar4 != (SettingsInputFieldSlider *)0x0) {
        SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                  (pSVar4,StringLiteral_intervalOn,value_00,(MethodInfo *)0x0);
        pSVar3 = (this->fields).disabledSlider;
        if (pSVar3 != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_Initialize
                    (pSVar3,StringLiteral_intervalOff,(float)root,0.1,1000.0,(MethodInfo *)0x0);
          value = root;
          pSVar4 = (this->fields).disabledInputField;
          if (pSVar4 != (SettingsInputFieldSlider *)0x0) {
            method = (MethodInfo *)StringLiteral_intervalOff;
            root = (GameObject *)pSVar4;
            SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                      (pSVar4,StringLiteral_intervalOff,(float)value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

