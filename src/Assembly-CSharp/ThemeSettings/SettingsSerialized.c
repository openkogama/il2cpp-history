
/* Void CommitChanges() */

void Assembly-CSharp.dll::ThemeSettings::SettingsSerialized::SettingsSerialized_CommitChanges
               (SettingsSerialized *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (WorldObjectClientRef_1_System_Object_ *)(this->fields).worldObjectRef;
  if (this_00 != (WorldObjectClientRef_1_System_Object_ *)0x0) {
    pOVar1 = WorldObjectClientRef`1[System::Object]::
             WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                       (this_00,
                        MethodInfo__WorldObjectClientRef<ThemeWorldObject>__get_WorldObjectClient__)
    ;
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    worldObjectID = *(int32_t *)(in_stack_2 + 8);
    this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (this_02,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    if (*(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)(in_stack_2 + 0x58)
        != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (*(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)
                          (in_stack_2 + 0x58),(Object *)StringLiteral_settings,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if ((value.m_Index != 0) &&
         ((*(byte *)(*(int *)value.m_Index + 0xb8) <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment ||
          (*(Dictionary_2_System_Object_System_Object___Class **)
            (*(int *)(*(int *)value.m_Index + 100) + -4 +
            (uint)(
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment * 4) !=
           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)))) {
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((this_02 !=
           (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)0x0) &&
         (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)this_02,
                     (Object *)StringLiteral_settings,(Object *)value.m_Index,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    ), this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
        MVNetworkGame+OperationRequests::
        MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial_1
                  (this_01,worldObjectID,(Dictionary_2_System_Object_System_Object_ *)this_02,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* SettingsSerialized(Int32) */

void Assembly-CSharp.dll::ThemeSettings::SettingsSerialized::SettingsSerialized__ctor
               (SettingsSerialized *this,int32_t woid,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    WorldObjectClientRef<ThemeWorldObject>_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClientRef<ThemeWorldObject>_int_
                   );
    func_?(&MethodInfo__WorldObjectClientRef<ThemeWorldObject>__get_WorldObjectClient__);
    cRam_? = '\x01';
  }
  SettingsWrapper::SettingsWrapper__ctor((SettingsWrapper *)this,(MethodInfo *)0x0);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef_1
                       (this_00,woid,
                        WorldObjectClientRef<ThemeWorldObject>_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClientRef<ThemeWorldObject>_int_
                       );
    (this->fields).worldObjectRef = (WorldObjectClientRef_1_ThemeWorldObject_ *)pWVar1;
    func_?(&(this->fields).worldObjectRef);
    pWVar1 = (WorldObjectClientRef_1_System_Object_ *)(this->fields).worldObjectRef;
    if (pWVar1 != (WorldObjectClientRef_1_System_Object_ *)0x0) {
      this_01 = (ThemeWorldObject *)
                WorldObjectClientRef`1[System::Object]::
                WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                          (pWVar1,
                           MethodInfo__WorldObjectClientRef<ThemeWorldObject>__get_WorldObjectClient__
                          );
      if (this_01 != (ThemeWorldObject *)0x0) {
        pDVar2 = ThemeWorldObject::ThemeWorldObject_get_SettingsData(this_01,(MethodInfo *)0x0);
        (this->fields)._.settingsData = pDVar2;
        func_?(&this->fields);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

