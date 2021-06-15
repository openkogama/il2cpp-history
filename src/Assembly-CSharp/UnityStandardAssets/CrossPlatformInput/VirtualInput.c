
/* Boolean AxisExists(String) */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::VirtualInput::
     VirtualInput_AxisExists(VirtualInput *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)(this->fields).m_VirtualAxes;
  if (this_00 !=
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (this_00,name,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                      );
    return bVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean ButtonExists(String) */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::VirtualInput::
     VirtualInput_ButtonExists(VirtualInput *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)(this->fields).m_VirtualButtons;
  if (this_00 !=
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (this_00,name,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                      );
    return bVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void RegisterVirtualAxis(CrossPlatformInputManager+VirtualAxis) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::VirtualInput::
     VirtualInput_RegisterVirtualAxis
               (VirtualInput *this,CrossPlatformInputManager_VirtualAxis *axis,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (axis != (CrossPlatformInputManager_VirtualAxis *)0x0) {
    this_00 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
               *)(this->fields).m_VirtualAxes;
    if (this_00 !=
        (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
         *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
              WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
              KogamaSettingWrapperBase]::
              Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                        (this_00,(axis->fields)._name_k__BackingField,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                        );
      if (bVar1 != 0) {
        pDVar2 = (this->fields).m_VirtualAxes;
        if (pDVar2 == (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualAxis_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Remove
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)pDVar2,(axis->fields)._name_k__BackingField,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__Remove_System__String_
                  );
      }
      pDVar2 = (this->fields).m_VirtualAxes;
      if (pDVar2 != (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualAxis_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)pDVar2,(axis->fields)._name_k__BackingField,
                   (CrossPlatformInputManager_VirtualButton *)axis,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__Add_System__String__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualAxis_
                  );
        if ((axis->fields)._matchWithInputManager_k__BackingField == 0) {
          this_01 = (this->fields).m_AlwaysUseVirtual;
          if (this_01 == (List_1_System_String_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)this_01,
                     (UIPushOption__Enum)(axis->fields)._name_k__BackingField,
                     MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                    );
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RegisterVirtualButton(CrossPlatformInputManager+VirtualButton) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::VirtualInput::
     VirtualInput_RegisterVirtualButton
               (VirtualInput *this,CrossPlatformInputManager_VirtualButton *button,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (button != (CrossPlatformInputManager_VirtualButton *)0x0) {
    this_00 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
               *)(this->fields).m_VirtualButtons;
    if (this_00 !=
        (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
         *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
              WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
              KogamaSettingWrapperBase]::
              Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                        (this_00,(button->fields)._name_k__BackingField,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                        );
      if (bVar1 != 0) {
        pSVar2 = (button->fields)._name_k__BackingField;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar2 = mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral_There_is_already_a_virtual_butto,pSVar2,
                            StringLiteral__registered_,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)pSVar2,(MethodInfo *)0x0);
        return;
      }
      this_01 = (this->fields).m_VirtualButtons;
      if (this_01 !=
          (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  (this_01,(button->fields)._name_k__BackingField,button,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__Add_System__String__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualButton_
                  );
        if ((button->fields)._matchWithInputManager_k__BackingField == 0) {
          this_02 = (this->fields).m_AlwaysUseVirtual;
          if (this_02 == (List_1_System_String_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)this_02,
                     (UIPushOption__Enum)(button->fields)._name_k__BackingField,
                     MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                    );
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetVirtualMousePositionX(Single) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::VirtualInput::
     VirtualInput_SetVirtualMousePositionX(VirtualInput *this,float f,MethodInfo *method)

{
  fStack_1 = 0.0;
  uVar2 = (this->fields)._virtualMousePosition_k__BackingField.y;
  uStack_3 = 0;
  func_?(&uStack_3,f,uVar2,(this->fields)._virtualMousePosition_k__BackingField.z,0);
  (this->fields)._virtualMousePosition_k__BackingField.x = (float)(undefined4)uStack_3;
  (this->fields)._virtualMousePosition_k__BackingField.y = (float)uStack_3._4_4_;
  (this->fields)._virtualMousePosition_k__BackingField.z = fStack_1;
  return;
}


/* Void SetVirtualMousePositionY(Single) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::VirtualInput::
     VirtualInput_SetVirtualMousePositionY(VirtualInput *this,float f,MethodInfo *method)

{
  fStack_1 = 0.0;
  uVar2 = (this->fields)._virtualMousePosition_k__BackingField.x;
  uStack_3 = 0;
  func_?(&uStack_3,uVar2,f,(this->fields)._virtualMousePosition_k__BackingField.z,0);
  (this->fields)._virtualMousePosition_k__BackingField.x = (float)(undefined4)uStack_3;
  (this->fields)._virtualMousePosition_k__BackingField.y = (float)uStack_3._4_4_;
  (this->fields)._virtualMousePosition_k__BackingField.z = fStack_1;
  return;
}


/* Void SetVirtualMousePositionZ(Single) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::VirtualInput::
     VirtualInput_SetVirtualMousePositionZ(VirtualInput *this,float f,MethodInfo *method)

{
  fStack_1 = 0.0;
  uVar2 = (this->fields)._virtualMousePosition_k__BackingField.x;
  uVar3 = (this->fields)._virtualMousePosition_k__BackingField.y;
  uStack_4 = 0;
  func_?(&uStack_4,uVar2,uVar3,f,0);
  (this->fields)._virtualMousePosition_k__BackingField.x = (float)(undefined4)uStack_4;
  (this->fields)._virtualMousePosition_k__BackingField.y = (float)uStack_4._4_4_;
  (this->fields)._virtualMousePosition_k__BackingField.z = fStack_1;
  return;
}


/* Void UnRegisterVirtualAxis(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::VirtualInput::
     VirtualInput_UnRegisterVirtualAxis(VirtualInput *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)(this->fields).m_VirtualAxes;
  if (this_00 !=
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (this_00,name,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                      );
    if (bVar1 != 0) {
      this_01 = (this->fields).m_VirtualAxes;
      if (this_01 ==
          (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualAxis_
           *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Remove
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)this_01,name,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__Remove_System__String_
                );
    }
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UnRegisterVirtualButton(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::VirtualInput::
     VirtualInput_UnRegisterVirtualButton(VirtualInput *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)(this->fields).m_VirtualButtons;
  if (this_00 !=
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (this_00,name,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                      );
    if (bVar1 != 0) {
      this_01 = (this->fields).m_VirtualButtons;
      if (this_01 ==
          (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
           *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Remove
                (this_01,name,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__Remove_System__String_
                );
    }
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* CrossPlatformInputManager+VirtualAxis VirtualAxisReference(String) */

CrossPlatformInputManager_VirtualAxis *
Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::VirtualInput::
VirtualInput_VirtualAxisReference(VirtualInput *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)(this->fields).m_VirtualAxes;
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
      return (CrossPlatformInputManager_VirtualAxis *)0x0;
    }
    this_01 = (Dictionary_2_System_Type_Pool_ *)(this->fields).m_VirtualAxes;
    if (this_01 != (Dictionary_2_System_Type_Pool_ *)0x0) {
      pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         (this_01,(Type *)name,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__get_Item_System__String_
                         );
      return (CrossPlatformInputManager_VirtualAxis *)pPVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pCVar4 = (CrossPlatformInputManager_VirtualAxis *)(*pcVar3)();
  return pCVar4;
}


/* VirtualInput() */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::VirtualInput::VirtualInput__ctor
               (VirtualInput *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualAxis_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>
                              );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__Dictionary__
            );
  (this->fields).m_VirtualAxes = this_00;
  this_01 = (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>
                              );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__Dictionary__
            );
  (this->fields).m_VirtualButtons = this_01;
  method_00 = TypeInfo__System__Collections__Generic__List<System::String>;
  this_02 = (List_1_UnityEngine_Vector4_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_02,MethodInfo__System__Collections__Generic__List<System::String>__List__);
  (this->fields).m_AlwaysUseVirtual = (List_1_System_String_ *)this_02;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  return;
}


/* Void set_virtualMousePosition(Vector3) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::VirtualInput::
     VirtualInput_set_virtualMousePosition(VirtualInput *this,Vector3 value,MethodInfo *method)

{
  (this->fields)._virtualMousePosition_k__BackingField.x = value.x;
  (this->fields)._virtualMousePosition_k__BackingField.y = value.y;
  (this->fields)._virtualMousePosition_k__BackingField.z = value.z;
  return;
}

