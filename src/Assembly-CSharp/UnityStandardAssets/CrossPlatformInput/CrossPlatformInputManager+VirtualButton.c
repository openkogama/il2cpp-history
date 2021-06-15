
/* Void Pressed() */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::
     CrossPlatformInputManager+VirtualButton::CrossPlatformInputManager_VirtualButton_Pressed
               (CrossPlatformInputManager_VirtualButton *this,MethodInfo *method)

{
  if ((this->fields).m_Pressed == 0) {
    (this->fields).m_Pressed = 1;
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0);
    (this->fields).m_LastPressedFrame = iVar1;
  }
  return;
}


/* Void Released() */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::
     CrossPlatformInputManager+VirtualButton::CrossPlatformInputManager_VirtualButton_Released
               (CrossPlatformInputManager_VirtualButton *this,MethodInfo *method)

{
  (this->fields).m_Pressed = 0;
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0);
  (this->fields).m_ReleasedFrame = iVar1;
  return;
}


/* Void Remove() */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::
     CrossPlatformInputManager+VirtualButton::CrossPlatformInputManager_VirtualButton_Remove
               (CrossPlatformInputManager_VirtualButton *this,MethodInfo *method)

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
  if ((((uint)(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->vtable)
              .Equals.methodPtr & 0x2000000) != 0) &&
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
               *)(pVVar1->fields).m_VirtualButtons;
    if (this_00 !=
        (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
         *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
              WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
              KogamaSettingWrapperBase]::
              Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                        (this_00,key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                        );
      if (bVar2 != 0) {
        this_01 = (pVVar1->fields).m_VirtualButtons;
        if (this_01 ==
            (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
             *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Remove
                  (this_01,key,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__Remove_System__String_
                  );
      }
      return;
    }
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* CrossPlatformInputManager+VirtualButton(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::
     CrossPlatformInputManager+VirtualButton::CrossPlatformInputManager_VirtualButton__ctor
               (CrossPlatformInputManager_VirtualButton *this,String *name,MethodInfo *method)

{
  (this->fields).m_LastPressedFrame = -5;
  (this->fields).m_ReleasedFrame = -5;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields)._name_k__BackingField = name;
  (this->fields)._matchWithInputManager_k__BackingField = 1;
  return;
}


/* CrossPlatformInputManager+VirtualButton(String, Boolean) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::
     CrossPlatformInputManager+VirtualButton::CrossPlatformInputManager_VirtualButton__ctor_1
               (CrossPlatformInputManager_VirtualButton *this,String *name,bool matchToInputSettings
               ,MethodInfo *method)

{
  (this->fields).m_LastPressedFrame = -5;
  (this->fields).m_ReleasedFrame = -5;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields)._name_k__BackingField = name;
  (this->fields)._matchWithInputManager_k__BackingField = matchToInputSettings;
  return;
}


/* Boolean get_GetButtonDown() */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::
     CrossPlatformInputManager+VirtualButton::
     CrossPlatformInputManager_VirtualButton_get_GetButtonDown
               (CrossPlatformInputManager_VirtualButton *this,MethodInfo *method)

{
  iVar1 = (this->fields).m_LastPressedFrame;
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0);
  return iVar1 - iVar2 == -1;
}


/* Boolean get_GetButtonUp() */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::
     CrossPlatformInputManager+VirtualButton::
     CrossPlatformInputManager_VirtualButton_get_GetButtonUp
               (CrossPlatformInputManager_VirtualButton *this,MethodInfo *method)

{
  iVar1 = (this->fields).m_ReleasedFrame;
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0);
  return iVar1 == iVar2 + -1;
}


/* Boolean get_matchWithInputManager() */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::
     CrossPlatformInputManager+VirtualButton::
     CrossPlatformInputManager_VirtualButton_get_matchWithInputManager
               (CrossPlatformInputManager_VirtualButton *this,MethodInfo *method)

{
  return (this->fields)._matchWithInputManager_k__BackingField;
}


/* Void set_matchWithInputManager(Boolean) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::
     CrossPlatformInputManager+VirtualButton::
     CrossPlatformInputManager_VirtualButton_set_matchWithInputManager
               (CrossPlatformInputManager_VirtualButton *this,bool value,MethodInfo *method)

{
  (this->fields)._matchWithInputManager_k__BackingField = value;
  return;
}

