
/* Void Remove() */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::
     CrossPlatformInputManager+VirtualAxis::CrossPlatformInputManager_VirtualAxis_Remove
               (CrossPlatformInputManager_VirtualAxis *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  key = (this->fields)._name_k__BackingField;
  if ((((uint)(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->vtable)
              .Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
      cctor_started == 0)) {
    func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (key == (String *)0x0) {
    this_02 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_02,StringLiteral_name,(MethodInfo *)0x0);
    func_?(this_02,0,
                    MethodInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__UnRegisterVirtualAxis_System__String_
                   );
  }
  else {
    if ((((uint)(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
                vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
        cctor_started == 0)) {
      func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    }
    pVVar1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
             static_fields->activeInput;
    if (pVVar1 != (VirtualInput *)0x0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      this_00 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                 *)(pVVar1->fields).m_VirtualAxes;
      if (this_00 !=
          (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
           *)0x0) {
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                KogamaSettingWrapperBase]::
                Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                          (this_00,key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                          );
        if (bVar2 != 0) {
          this_01 = (pVVar1->fields).m_VirtualAxes;
          if (this_01 ==
              (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualAxis_
               *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Remove
                    ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                      *)this_01,key,
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__Remove_System__String_
                    );
        }
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update(Single) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::
     CrossPlatformInputManager+VirtualAxis::CrossPlatformInputManager_VirtualAxis_Update
               (CrossPlatformInputManager_VirtualAxis *this,float value,MethodInfo *method)

{
  (this->fields).m_Value = value;
  return;
}


/* CrossPlatformInputManager+VirtualAxis(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::
     CrossPlatformInputManager+VirtualAxis::CrossPlatformInputManager_VirtualAxis__ctor
               (CrossPlatformInputManager_VirtualAxis *this,String *name,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields)._name_k__BackingField = name;
  (this->fields)._matchWithInputManager_k__BackingField = 1;
  return;
}


/* CrossPlatformInputManager+VirtualAxis(String, Boolean) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::
     CrossPlatformInputManager+VirtualAxis::CrossPlatformInputManager_VirtualAxis__ctor_1
               (CrossPlatformInputManager_VirtualAxis *this,String *name,bool matchToInputSettings,
               MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields)._name_k__BackingField = name;
  (this->fields)._matchWithInputManager_k__BackingField = matchToInputSettings;
  return;
}


/* Single get_GetValueRaw() */

float Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::
      CrossPlatformInputManager+VirtualAxis::CrossPlatformInputManager_VirtualAxis_get_GetValueRaw
                (CrossPlatformInputManager_VirtualAxis *this,MethodInfo *method)

{
  return (this->fields).m_Value;
}


/* Boolean get_matchWithInputManager() */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::
     CrossPlatformInputManager+VirtualAxis::
     CrossPlatformInputManager_VirtualAxis_get_matchWithInputManager
               (CrossPlatformInputManager_VirtualAxis *this,MethodInfo *method)

{
  return (this->fields)._matchWithInputManager_k__BackingField;
}


/* Void set_matchWithInputManager(Boolean) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::
     CrossPlatformInputManager+VirtualAxis::
     CrossPlatformInputManager_VirtualAxis_set_matchWithInputManager
               (CrossPlatformInputManager_VirtualAxis *this,bool value,MethodInfo *method)

{
  (this->fields)._matchWithInputManager_k__BackingField = value;
  return;
}

