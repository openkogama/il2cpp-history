
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::PressurePlateSettings::PressurePlateSettings_Initialize
               (PressurePlateSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_PressurePlate,
               (MethodInfo *)0x0);
    if (woID == -1) {
      this_04 = (Dictionary_2_System_Type_Pool_ *)func_?();
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_04,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      value = (CrossPlatformInputManager_VirtualButton *)func_?(TypeInfo__System__Boolean);
      if (this_04 != (Dictionary_2_System_Type_Pool_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)this_04,StringLiteral_hide,value,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
code_?:
        this_01 = (this->fields).toggle;
        if (this_04 != (Dictionary_2_System_Type_Pool_ *)0x0) {
          pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             (this_04,(Type *)StringLiteral_hide,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if ((this_01 != (SettingsToggle *)0x0) && (pPVar1 != (Pool *)0x0)) {
            pBStack2 = TypeInfo__System__Boolean;
            if ((pPVar1->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class)
            {
              pBStack2 = (Boolean__Class *)pPVar1;
              pbVar3 = (bool *)func_?();
              SettingsToggle::SettingsToggle_Initialize
                        (this_01,StringLiteral_hide,*pbVar3,(MethodInfo *)0x0);
              return;
            }
            goto code_?;
          }
        }
      }
    }
    else {
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
          goto code_?;
        }
      }
    }
  }
  func_?();
  pBStack2 = extraout_EDX;
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

