
/* Void AddAxes(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::MobileInput::
     MobileInput_AddAxes(MobileInput *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualAxis;
  this_02 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,(MethodInfo *)method_00);
  (this_02->fields)._._._._.m_CachedPtr = name;
  *(undefined1 *)&(this_02->fields).originalScale.x = 1;
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
               *)(pVVar1->fields).m_VirtualAxes;
    if (this_00 !=
        (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
         *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
              WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
              KogamaSettingWrapperBase]::
              Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                        (this_00,(this_02->fields)._._._._.m_CachedPtr,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                        );
      if (bVar2 != 0) {
        pDVar3 = (pVVar1->fields).m_VirtualAxes;
        if (pDVar3 == (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualAxis_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Remove
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)pDVar3,(this_02->fields)._._._._.m_CachedPtr,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__Remove_System__String_
                  );
      }
      pDVar3 = (pVVar1->fields).m_VirtualAxes;
      if (pDVar3 != (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualAxis_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)pDVar3,(this_02->fields)._._._._.m_CachedPtr,
                   (CrossPlatformInputManager_VirtualButton *)this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__Add_System__String__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualAxis_
                  );
        if (*(char *)&(this_02->fields).originalScale.x == '\0') {
          this_01 = (pVVar1->fields).m_AlwaysUseVirtual;
          if (this_01 == (List_1_System_String_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)this_01,
                     (UIPushOption__Enum)(this_02->fields)._._._._.m_CachedPtr,
                     MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                    );
        }
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void AddButton(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::MobileInput::
     MobileInput_AddButton(MobileInput *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualButton;
  this_03 = (ScaleAnimationBase *)func_?();
  (this_03->fields).originalScale.x = -NAN;
  (this_03->fields).originalScale.y = -NAN;
  ScaleAnimationBase::ScaleAnimationBase_Play(this_03,0.0,(MethodInfo *)method_00);
  (this_03->fields)._._._._.m_CachedPtr = name;
  *(undefined1 *)&(this_03->fields).state = 1;
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
                        (this_00,(this_03->fields)._._._._.m_CachedPtr,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                        );
      if (bVar2 != 0) {
        pSVar3 = (this_03->fields)._._._._.m_CachedPtr;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar3 = mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral_There_is_already_a_virtual_butto,pSVar3,
                            StringLiteral__registered_,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)pSVar3,(MethodInfo *)0x0);
        return;
      }
      this_01 = (pVVar1->fields).m_VirtualButtons;
      if (this_01 !=
          (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  (this_01,(this_03->fields)._._._._.m_CachedPtr,
                   (CrossPlatformInputManager_VirtualButton *)this_03,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__Add_System__String__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualButton_
                  );
        if ((char)(this_03->fields).state == '\0') {
          this_02 = (pVVar1->fields).m_AlwaysUseVirtual;
          if (this_02 == (List_1_System_String_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)this_02,
                     (UIPushOption__Enum)(this_03->fields)._._._._.m_CachedPtr,
                     MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                    );
        }
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Single GetAxis(String, Boolean) */

float Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::MobileInput::
      MobileInput_GetAxis(MobileInput *this,String *name,bool raw,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)(this->fields)._.m_VirtualAxes;
  if (this_00 !=
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (this_00,name,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                      );
    if (bVar1 == 0) {
      MobileInput_AddAxes(this,name,(MethodInfo *)0x0);
    }
    this_01 = (Dictionary_2_System_Type_Pool_ *)(this->fields)._.m_VirtualAxes;
    if (this_01 != (Dictionary_2_System_Type_Pool_ *)0x0) {
      pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         (this_01,(Type *)name,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__get_Item_System__String_
                         );
      if (pPVar2 != (Pool *)0x0) {
        return (float)(pPVar2->fields).poolSize;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* Boolean GetButton(String) */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::MobileInput::
     MobileInput_GetButton(MobileInput *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)(this->fields)._.m_VirtualButtons;
  if (this_00 !=
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (this_00,name,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                      );
    if (bVar1 == 0) {
      MobileInput_AddButton(this,name,(MethodInfo *)0x0);
    }
    this_01 = (Dictionary_2_System_Type_Pool_ *)(this->fields)._.m_VirtualButtons;
    if (this_01 != (Dictionary_2_System_Type_Pool_ *)0x0) {
      pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         (this_01,(Type *)name,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__get_Item_System__String_
                         );
      if (pPVar2 != (Pool *)0x0) {
        return *(bool *)&(pPVar2->fields).available;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Boolean GetButtonDown(String) */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::MobileInput::
     MobileInput_GetButtonDown(MobileInput *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)(this->fields)._.m_VirtualButtons;
  if (this_00 !=
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (this_00,name,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                      );
    if (bVar1 == 0) {
      MobileInput_AddButton(this,name,(MethodInfo *)0x0);
    }
    this_01 = (Dictionary_2_System_Type_Pool_ *)(this->fields)._.m_VirtualButtons;
    if (this_01 != (Dictionary_2_System_Type_Pool_ *)0x0) {
      pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         (this_01,(Type *)name,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__get_Item_System__String_
                         );
      if (pPVar2 != (Pool *)0x0) {
        iVar3 = (pPVar2->fields).poolEnum;
        iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount
                          ((MethodInfo *)0x0);
        return iVar3 - iVar4 == -1;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar1 = (*pcVar5)();
  return bVar1;
}


/* Boolean GetButtonUp(String) */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::MobileInput::
     MobileInput_GetButtonUp(MobileInput *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)(this->fields)._.m_VirtualButtons;
  if (this_00 !=
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (this_00,name,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                      );
    if (bVar1 == 0) {
      MobileInput_AddButton(this,name,(MethodInfo *)0x0);
    }
    this_01 = (Dictionary_2_System_Type_Pool_ *)(this->fields)._.m_VirtualButtons;
    if (this_01 != (Dictionary_2_System_Type_Pool_ *)0x0) {
      pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         (this_01,(Type *)name,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__get_Item_System__String_
                         );
      if (pPVar2 != (Pool *)0x0) {
        pTVar3 = (pPVar2->fields).parent;
        iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount
                          ((MethodInfo *)0x0);
        return pTVar3 == (Transform *)(iVar4 + -1);
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar1 = (*pcVar5)();
  return bVar1;
}


/* Void SetAxis(String, Single) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::MobileInput::
     MobileInput_SetAxis(MobileInput *this,String *name,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)(this->fields)._.m_VirtualAxes;
  if (this_00 !=
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (this_00,name,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                      );
    if (bVar1 == 0) {
      MobileInput_AddAxes(this,name,(MethodInfo *)0x0);
    }
    this_01 = (Dictionary_2_System_Type_Pool_ *)(this->fields)._.m_VirtualAxes;
    if (this_01 != (Dictionary_2_System_Type_Pool_ *)0x0) {
      pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         (this_01,(Type *)name,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__get_Item_System__String_
                         );
      if (pPVar2 != (Pool *)0x0) {
        (pPVar2->fields).poolSize = (int32_t)value;
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetAxisNegative(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::MobileInput::
     MobileInput_SetAxisNegative(MobileInput *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)(this->fields)._.m_VirtualAxes;
  if (this_00 !=
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (this_00,name,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                      );
    if (bVar1 == 0) {
      MobileInput_AddAxes(this,name,(MethodInfo *)0x0);
    }
    this_01 = (Dictionary_2_System_Type_Pool_ *)(this->fields)._.m_VirtualAxes;
    if (this_01 != (Dictionary_2_System_Type_Pool_ *)0x0) {
      pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         (this_01,(Type *)name,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__get_Item_System__String_
                         );
      if (pPVar2 != (Pool *)0x0) {
        (pPVar2->fields).poolSize = -0x40800000;
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetAxisPositive(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::MobileInput::
     MobileInput_SetAxisPositive(MobileInput *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)(this->fields)._.m_VirtualAxes;
  if (this_00 !=
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (this_00,name,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                      );
    if (bVar1 == 0) {
      MobileInput_AddAxes(this,name,(MethodInfo *)0x0);
    }
    this_01 = (Dictionary_2_System_Type_Pool_ *)(this->fields)._.m_VirtualAxes;
    if (this_01 != (Dictionary_2_System_Type_Pool_ *)0x0) {
      pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         (this_01,(Type *)name,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__get_Item_System__String_
                         );
      if (pPVar2 != (Pool *)0x0) {
        (pPVar2->fields).poolSize = 0x3f800000;
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetAxisZero(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::MobileInput::
     MobileInput_SetAxisZero(MobileInput *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)(this->fields)._.m_VirtualAxes;
  if (this_00 !=
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (this_00,name,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                      );
    if (bVar1 == 0) {
      MobileInput_AddAxes(this,name,(MethodInfo *)0x0);
    }
    this_01 = (Dictionary_2_System_Type_Pool_ *)(this->fields)._.m_VirtualAxes;
    if (this_01 != (Dictionary_2_System_Type_Pool_ *)0x0) {
      pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         (this_01,(Type *)name,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__get_Item_System__String_
                         );
      if (pPVar2 != (Pool *)0x0) {
        (pPVar2->fields).poolSize = 0;
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetButtonDown(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::MobileInput::
     MobileInput_SetButtonDown(MobileInput *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)(this->fields)._.m_VirtualButtons;
  if (this_00 !=
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (this_00,name,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                      );
    if (bVar1 == 0) {
      MobileInput_AddButton(this,name,(MethodInfo *)0x0);
    }
    this_01 = (Dictionary_2_System_Type_Pool_ *)(this->fields)._.m_VirtualButtons;
    if (this_01 != (Dictionary_2_System_Type_Pool_ *)0x0) {
      pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         (this_01,(Type *)name,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__get_Item_System__String_
                         );
      if (pPVar2 != (Pool *)0x0) {
        if (*(char *)&(pPVar2->fields).available == '\0') {
          *(undefined1 *)&(pPVar2->fields).available = 1;
          iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount
                            ((MethodInfo *)0x0);
          (pPVar2->fields).poolEnum = iVar3;
        }
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetButtonUp(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::MobileInput::
     MobileInput_SetButtonUp(MobileInput *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)(this->fields)._.m_VirtualButtons;
  if (this_00 !=
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (this_00,name,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                      );
    if (bVar1 == 0) {
      MobileInput_AddButton(this,name,(MethodInfo *)0x0);
    }
    this_01 = (Dictionary_2_System_Type_Pool_ *)(this->fields)._.m_VirtualButtons;
    if (this_01 != (Dictionary_2_System_Type_Pool_ *)0x0) {
      pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         (this_01,(Type *)name,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__get_Item_System__String_
                         );
      if (pPVar2 != (Pool *)0x0) {
        *(undefined1 *)&(pPVar2->fields).available = 0;
        pTVar3 = (Transform *)
                 UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount
                           ((MethodInfo *)0x0);
        (pPVar2->fields).parent = pTVar3;
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

