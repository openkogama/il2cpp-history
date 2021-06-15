
/* Boolean AxisExists(String) */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_AxisExists(String *name,MethodInfo *method)

{
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
    this = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
            *)(pVVar1->fields).m_VirtualAxes;
    if (this != (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                 *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
              WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
              KogamaSettingWrapperBase]::
              Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                        (this,name,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                        );
      return bVar2;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean ButtonExists(String) */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_ButtonExists(String *name,MethodInfo *method)

{
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
    this = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
            *)(pVVar1->fields).m_VirtualButtons;
    if (this != (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                 *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
              WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
              KogamaSettingWrapperBase]::
              Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                        (this,name,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                        );
      return bVar2;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Single GetAxis(String) */

float Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
      CrossPlatformInputManager_GetAxis(String *name,MethodInfo *method)

{
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
  fVar1 = CrossPlatformInputManager_GetAxis_1(name,0,(MethodInfo *)0x0);
  return fVar1;
}


/* Single GetAxisRaw(String) */

float Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
      CrossPlatformInputManager_GetAxisRaw(String *name,MethodInfo *method)

{
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
  fVar1 = CrossPlatformInputManager_GetAxis_1(name,1,(MethodInfo *)0x0);
  return fVar1;
}


/* Single GetAxis(String, Boolean) */

float Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
      CrossPlatformInputManager_GetAxis_1(String *name,bool raw,MethodInfo *method)

{
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
    fVar2 = (float10)(*(code *)(pVVar1->klass->vtable).__unknown.method)
                               (pVVar1,name,_raw,(pVVar1->klass->vtable).__unknown_1.methodPtr);
    return (float)fVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  fVar2 = (float10)(*pcVar3)();
  return (float)fVar2;
}


/* Boolean GetButton(String) */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_GetButton(String *name,MethodInfo *method)

{
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
    bVar2 = (*(code *)(pVVar1->klass->vtable).__unknown_1.method)
                      (pVVar1,name,(pVVar1->klass->vtable).__unknown_2.methodPtr);
    return bVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean GetButtonDown(String) */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_GetButtonDown(String *name,MethodInfo *method)

{
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
    bVar2 = (*(code *)(pVVar1->klass->vtable).__unknown_2.method)
                      (pVVar1,name,(pVVar1->klass->vtable).__unknown_3.methodPtr);
    return bVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean GetButtonUp(String) */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_GetButtonUp(String *name,MethodInfo *method)

{
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
    bVar2 = (*(code *)(pVVar1->klass->vtable).__unknown_3.method)
                      (pVVar1,name,(pVVar1->klass->vtable).__unknown_4.methodPtr);
    return bVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void RegisterVirtualAxis(CrossPlatformInputManager+VirtualAxis) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_RegisterVirtualAxis
               (CrossPlatformInputManager_VirtualAxis *axis,MethodInfo *method)

{
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
    if ((axis != (CrossPlatformInputManager_VirtualAxis *)0x0) &&
       (this = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                *)(pVVar1->fields).m_VirtualAxes,
       this != (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                *)0x0)) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
              WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
              KogamaSettingWrapperBase]::
              Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                        (this,(axis->fields)._name_k__BackingField,
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
                    *)pDVar3,(axis->fields)._name_k__BackingField,
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
                    *)pDVar3,(axis->fields)._name_k__BackingField,
                   (CrossPlatformInputManager_VirtualButton *)axis,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__Add_System__String__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualAxis_
                  );
        if ((axis->fields)._matchWithInputManager_k__BackingField == 0) {
          this_00 = (pVVar1->fields).m_AlwaysUseVirtual;
          if (this_00 == (List_1_System_String_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)this_00,
                     (UIPushOption__Enum)(axis->fields)._name_k__BackingField,
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


/* Void RegisterVirtualButton(CrossPlatformInputManager+VirtualButton) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_RegisterVirtualButton
               (CrossPlatformInputManager_VirtualButton *button,MethodInfo *method)

{
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
    if ((button != (CrossPlatformInputManager_VirtualButton *)0x0) &&
       (this = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                *)(pVVar1->fields).m_VirtualButtons,
       this != (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                *)0x0)) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
              WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
              KogamaSettingWrapperBase]::
              Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                        (this,(button->fields)._name_k__BackingField,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                        );
      if (bVar2 != 0) {
        pSVar3 = (button->fields)._name_k__BackingField;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
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
      this_00 = (pVVar1->fields).m_VirtualButtons;
      if (this_00 !=
          (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  (this_00,(button->fields)._name_k__BackingField,button,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__Add_System__String__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualButton_
                  );
        if ((button->fields)._matchWithInputManager_k__BackingField == 0) {
          this_01 = (pVVar1->fields).m_AlwaysUseVirtual;
          if (this_01 == (List_1_System_String_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)this_01,
                     (UIPushOption__Enum)(button->fields)._name_k__BackingField,
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


/* Void SetAxis(String, Single) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_SetAxis(String *name,float value,MethodInfo *method)

{
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
    (*(code *)(pVVar1->klass->vtable).__unknown_9.method)
              (pVVar1,name,value,(pVVar1->klass->vtable).__unknown_10.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetAxisNegative(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_SetAxisNegative(String *name,MethodInfo *method)

{
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
    (*(code *)(pVVar1->klass->vtable).__unknown_7.method)
              (pVVar1,name,(pVVar1->klass->vtable).__unknown_8.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetAxisPositive(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_SetAxisPositive(String *name,MethodInfo *method)

{
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
    (*(code *)(pVVar1->klass->vtable).__unknown_6.method)
              (pVVar1,name,(pVVar1->klass->vtable).__unknown_7.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetAxisZero(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_SetAxisZero(String *name,MethodInfo *method)

{
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
    (*(code *)(pVVar1->klass->vtable).__unknown_8.method)
              (pVVar1,name,(pVVar1->klass->vtable).__unknown_9.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetButtonDown(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_SetButtonDown(String *name,MethodInfo *method)

{
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
    (*(code *)(pVVar1->klass->vtable).__unknown_4.method)
              (pVVar1,name,(pVVar1->klass->vtable).__unknown_5.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetButtonUp(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_SetButtonUp(String *name,MethodInfo *method)

{
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
    (*(code *)(pVVar1->klass->vtable).__unknown_5.method)
              (pVVar1,name,(pVVar1->klass->vtable).__unknown_6.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetVirtualMousePositionX(Single) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_SetVirtualMousePositionX(float f,MethodInfo *method)

{
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
    uVar2 = (pVVar1->fields)._virtualMousePosition_k__BackingField.y;
    uStack_3 = 0;
    fStack_4 = 0.0;
    func_?(&uStack_3,f,uVar2,(pVVar1->fields)._virtualMousePosition_k__BackingField.z);
    (pVVar1->fields)._virtualMousePosition_k__BackingField.x = (float)(undefined4)uStack_3;
    (pVVar1->fields)._virtualMousePosition_k__BackingField.y = (float)uStack_3._4_4_;
    (pVVar1->fields)._virtualMousePosition_k__BackingField.z = fStack_4;
    return;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetVirtualMousePositionY(Single) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_SetVirtualMousePositionY(float f,MethodInfo *method)

{
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
    uVar2 = (pVVar1->fields)._virtualMousePosition_k__BackingField.x;
    uStack_3 = 0;
    fStack_4 = 0.0;
    func_?(&uStack_3,uVar2,f,(pVVar1->fields)._virtualMousePosition_k__BackingField.z);
    (pVVar1->fields)._virtualMousePosition_k__BackingField.x = (float)(undefined4)uStack_3;
    (pVVar1->fields)._virtualMousePosition_k__BackingField.y = (float)uStack_3._4_4_;
    (pVVar1->fields)._virtualMousePosition_k__BackingField.z = fStack_4;
    return;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetVirtualMousePositionZ(Single) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_SetVirtualMousePositionZ(float f,MethodInfo *method)

{
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
    uVar2 = (pVVar1->fields)._virtualMousePosition_k__BackingField.x;
    uVar3 = (pVVar1->fields)._virtualMousePosition_k__BackingField.y;
    fStack_4 = 0.0;
    uStack_5 = 0;
    func_?(&uStack_5,uVar2,uVar3,f);
    (pVVar1->fields)._virtualMousePosition_k__BackingField.x = (float)(undefined4)uStack_5;
    (pVVar1->fields)._virtualMousePosition_k__BackingField.y = (float)uStack_5._4_4_;
    (pVVar1->fields)._virtualMousePosition_k__BackingField.z = fStack_4;
    return;
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SwitchActiveInputMethod(CrossPlatformInputManager+ActiveInputMethod) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_SwitchActiveInputMethod
               (CrossPlatformInputManager_ActiveInputMethod__Enum activeInputMethod,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (activeInputMethod == CrossPlatformInputManager_ActiveInputMethod__Enum_Hardware) {
    if ((((uint)(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
                vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
        cctor_started == 0)) {
      func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    }
    TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->static_fields->
    activeInput = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
                  static_fields->s_HardwareInput;
    return;
  }
  if (activeInputMethod == CrossPlatformInputManager_ActiveInputMethod__Enum_Touch) {
    if ((((uint)(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
                vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
        cctor_started == 0)) {
      func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    }
    TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->static_fields->
    activeInput = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
                  static_fields->s_TouchInput;
  }
  return;
}


/* Void UnRegisterVirtualAxis(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_UnRegisterVirtualAxis(String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (name == (String *)0x0) {
    this_01 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_01,StringLiteral_name,(MethodInfo *)0x0);
    func_?(this_01,0,
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
      this = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
              *)(pVVar1->fields).m_VirtualAxes;
      if (this != (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                   *)0x0) {
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                KogamaSettingWrapperBase]::
                Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                          (this,name,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                          );
        if (bVar2 != 0) {
          this_00 = (pVVar1->fields).m_VirtualAxes;
          if (this_00 ==
              (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualAxis_
               *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Remove
                    ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                      *)this_00,name,
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


/* Void UnRegisterVirtualButton(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_UnRegisterVirtualButton(String *name,MethodInfo *method)

{
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
    this = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
            *)(pVVar1->fields).m_VirtualButtons;
    if (this != (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                 *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
              WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
              KogamaSettingWrapperBase]::
              Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                        (this,name,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                        );
      if (bVar2 != 0) {
        this_00 = (pVVar1->fields).m_VirtualButtons;
        if (this_00 ==
            (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
             *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Remove
                  (this_00,name,
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


/* CrossPlatformInputManager+VirtualAxis VirtualAxisReference(String) */

CrossPlatformInputManager_VirtualAxis *
Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
CrossPlatformInputManager_VirtualAxisReference(String *name,MethodInfo *method)

{
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
    this = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
            *)(pVVar1->fields).m_VirtualAxes;
    if (this != (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                 *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
              WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
              KogamaSettingWrapperBase]::
              Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                        (this,name,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                        );
      if (bVar2 == 0) {
        return (CrossPlatformInputManager_VirtualAxis *)0x0;
      }
      this_00 = (Dictionary_2_System_Type_Pool_ *)(pVVar1->fields).m_VirtualAxes;
      if (this_00 != (Dictionary_2_System_Type_Pool_ *)0x0) {
        pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           (this_00,(Type *)name,
                            MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__get_Item_System__String_
                           );
        return (CrossPlatformInputManager_VirtualAxis *)pPVar3;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  pCVar5 = (CrossPlatformInputManager_VirtualAxis *)(*pcVar4)();
  return pCVar5;
}


/* CrossPlatformInputManager() */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pVVar1 = (VirtualInput *)
           func_?(
                          TypeInfo__UnityStandardAssets__CrossPlatformInput__PlatformSpecific__MobileInput
                          );
  VirtualInput::VirtualInput__ctor(pVVar1,(MethodInfo *)0x0);
  TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->static_fields->
  s_TouchInput = pVVar1;
  pVVar1 = (VirtualInput *)
           func_?(
                          TypeInfo__UnityStandardAssets__CrossPlatformInput__PlatformSpecific__StandaloneInput
                          );
  VirtualInput::VirtualInput__ctor(pVVar1,(MethodInfo *)0x0);
  TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->static_fields->
  s_HardwareInput = pVVar1;
  TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->static_fields->
  activeInput = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
                static_fields->s_HardwareInput;
  return;
}


/* Vector3 get_mousePosition() */

Vector3 * Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
          CrossPlatformInputManager_get_mousePosition
                    (Vector3 *__return_storage_ptr__,MethodInfo *method)

{
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
    puVar2 = (undefined8 *)
             (*(code *)(pVVar1->klass->vtable).__unknown_10.method)
                       (auStack_3,pVVar1,pVVar1->klass[1]._0.image);
    uVar4 = *puVar2;
    fVar5 = *(float *)(puVar2 + 1);
    __return_storage_ptr__->x = (float)(int)uVar4;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar4 >> 0x20);
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar6)();
  return pVVar7;
}

