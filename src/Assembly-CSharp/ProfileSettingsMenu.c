
/* Void GoToPreviousMenu() */

void Assembly-CSharp.dll::ProfileSettingsMenu::ProfileSettingsMenu_GoToPreviousMenu
               (ProfileSettingsMenu *this,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_set_CamMaskMode
              (this_00,MaskMode__Enum_Default,(MethodInfo *)0x0);
    newMenuType = LobbyFlowMenu::LobbyFlowMenu_GetPreviousMenuType
                            ((LobbyFlowMenu *)this,(MethodInfo *)0x0);
    LobbyFlowMenu::LobbyFlowMenu_GoToMenu((LobbyFlowMenu *)this,newMenuType,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff4);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void MouseSensitivityChanged() */

void Assembly-CSharp.dll::ProfileSettingsMenu::ProfileSettingsMenu_MouseSensitivityChanged
               (ProfileSettingsMenu *this,MethodInfo *method)

{
  if ((this->fields).mouseSenseSetRoutine == (IEnumerator *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__ProfileSettingsMenu___MouseSetRoutine_d__12);
      cRam_? = '\x01';
    }
    method_00 = TypeInfo__ProfileSettingsMenu___MouseSetRoutine_d__12;
    value = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?(value + 2,this);
    (this->fields).mouseSenseSetRoutine = (IEnumerator *)value;
    func_?(&(this->fields).mouseSenseSetRoutine,value);
    Coroutines::Coroutines_Start((this->fields).mouseSenseSetRoutine,(MethodInfo *)0x0);
  }
  return;
}


/* IEnumerator MouseSetRoutine() */

IEnumerator *
Assembly-CSharp.dll::ProfileSettingsMenu::ProfileSettingsMenu_MouseSetRoutine
          (ProfileSettingsMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ProfileSettingsMenu___MouseSetRoutine_d__12);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ProfileSettingsMenu___MouseSetRoutine_d__12;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ProfileSettingsMenu::ProfileSettingsMenu_OnDestroy
               (ProfileSettingsMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::Object>);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
                   );
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    func_?(&MethodInfo__ProfileSettingsMenu__SetMouseSensitivitySlider_System__Object_);
    cRam_? = '\x01';
  }
  LobbyFlowMenu::LobbyFlowMenu_OnDestroy((LobbyFlowMenu *)this,(MethodInfo *)0x0);
  if ((this->fields).mouseSenseSetRoutine != (IEnumerator *)0x0) {
    Coroutines::Coroutines_Stop((this->fields).mouseSenseSetRoutine,(MethodInfo *)0x0);
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  this_00 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
            ProfileSettingsChanged;
  if (this_00 ==
      (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) {
    func_?();
  }
  else {
    pDVar1 = (Delegate *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                       );
    this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(TypeInfo__System__Action<System::Object>);
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_01,(Object *)this,
               MethodInfo__ProfileSettingsMenu__SetMouseSensitivitySlider_System__Object_,
               (MethodInfo *)0x0);
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       (pDVar1,(Delegate *)this_01,(MethodInfo *)0x0);
    method_00 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
    ;
    if (pDVar1 == (Delegate *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__set_Item
                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0,(Object *)0x0,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
                );
      return;
    }
    value = (Object *)func_?();
    if (value != (Object *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__set_Item
                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0,value,method_00);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ResetProfileSettings() */

void Assembly-CSharp.dll::ProfileSettingsMenu::ProfileSettingsMenu_ResetProfileSettings
               (ProfileSettingsMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  Assets::Scripts::ProfileSettings::ProfileSettingsManager::
  ProfileSettingsManager_ResetToDefaultValues((MethodInfo *)0x0);
  return;
}


/* Void SetMouseSensitivitySlider(Object) */

void Assembly-CSharp.dll::ProfileSettingsMenu::ProfileSettingsMenu_SetMouseSensitivitySlider
               (ProfileSettingsMenu *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pSStack_1 = (Single__Class *)&TypeInfo__System__Single;
    func_?();
    cRam_? = '\x01';
  }
  if (value != (Object *)0x0) {
    if ((value->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class) {
      pSStack_1 = TypeInfo__System__Single;
      pOStack_2 = value;
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pSStack_1 = (Single__Class *)value;
    puVar4 = (undefined4 *)func_?();
    pSVar5 = (this->fields).mouseSensitivitySlider;
    if ((pSVar5 != (SettingsSlider *)0x0) &&
       (pSStack_6 = (pSVar5->fields).slider, pSStack_6 != (Slider *)0x0)) {
      pOStack_2 = (Object *)*puVar4;
      pSStack_1 = (Single__Class *)(pSStack_6->klass->vtable).SetValueWithoutNotify.methodPtr;
      (*(code *)(pSStack_6->klass->vtable).set_value.method)();
      return;
    }
  }
  pSStack_1 = (Single__Class *)&stack0xfffffffc;
  uVar7 = func_?(&pSStack_6);
  func_?(uVar7);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::ProfileSettingsMenu::ProfileSettingsMenu_Start
               (ProfileSettingsMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::Object>);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
                   );
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    func_?(&MethodInfo__ProfileSettingsMenu__SetMouseSensitivitySlider_System__Object_);
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  LobbyFlowMenu::LobbyFlowMenu_Start((LobbyFlowMenu *)this,(MethodInfo *)0x0);
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  pOVar1 = Assets::Scripts::ProfileSettings::ProfileSettingsManager::
           ProfileSettingsManager_GetSettingValue
                     (ProfileSettingKey__Enum_MouseSensitivity,(MethodInfo *)0x0);
  uVar2 = CONCAT44(TypeInfo__System__Single,pOVar1);
  if (pOVar1 == (Object *)0x0) goto code_?;
  if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
  goto code_?;
  puVar3 = (undefined4 *)func_?(pOVar1);
  pSVar4 = (this->fields).mouseSensitivitySlider;
  if ((pSVar4 == (SettingsSlider *)0x0) ||
     (pSVar5 = (pSVar4->fields).slider, pSVar5 == (Slider *)0x0)) {
code_?:
    func_?();
  }
  else {
    (*(code *)(pSVar5->klass->vtable).set_value.method)
              (pSVar5,*puVar3,(pSVar5->klass->vtable).SetValueWithoutNotify.methodPtr);
    pSVar4 = (this->fields).mouseSensitivitySlider;
    if ((pSVar4 == (SettingsSlider *)0x0) ||
       (pSVar5 = (pSVar4->fields).slider, pSVar5 == (Slider *)0x0)) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_minValue(pSVar5,1.0,(MethodInfo *)0x0);
    pSVar4 = (this->fields).mouseSensitivitySlider;
    if ((pSVar4 == (SettingsSlider *)0x0) ||
       (pSVar5 = (pSVar4->fields).slider, pSVar5 == (Slider *)0x0)) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_maxValue(pSVar5,100.0,(MethodInfo *)0x0)
    ;
    this_00 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
              ProfileSettingsChanged;
    if (this_00 ==
        (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0)
    goto code_?;
    pDVar6 = (Delegate *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                       );
    this_02 = TypeInfo__System__Action<System::Object>;
    this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?();
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_01,(Object *)this,
               MethodInfo__ProfileSettingsMenu__SetMouseSensitivitySlider_System__Object_,
               (MethodInfo *)0x0);
    pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                       (pDVar6,(Delegate *)this_01,(MethodInfo *)0x0);
    method_00 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
    ;
    pOVar1 = (Object *)0x0;
    if (pDVar6 == (Delegate *)0x0) {
code_?:
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__set_Item
                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,0,pOVar1,method_00);
      return;
    }
    pOVar1 = (Object *)func_?();
    if (pOVar1 != (Object *)0x0) goto code_?;
  }
  uVar2 = func_?();
code_?:
  func_?(uVar2);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ProfileSettingsMenu::ProfileSettingsMenu_Update
               (ProfileSettingsMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IPlayModeUI);
    cRam_? = '\x01';
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 == MVGameMode__Enum_Play) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pIVar2 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
    if (pIVar2 == (IPlayModeUI *)0x0) goto code_?;
    bVar3 = func_?(5,TypeInfo__IPlayModeUI,pIVar2);
    bVar3 = bVar3 ^ 1;
  }
  else {
    bVar3 = 0;
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 == MVGameMode__Enum_Edit) {
    bVar3 = 1;
  }
  if (bVar3 != 0) {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (this_00 == (MainCameraManager *)0x0) {
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    MainCameraManager::MainCameraManager_set_CamMaskMode
              (this_00,MaskMode__Enum_Default,(MethodInfo *)0x0);
  }
  return;
}


/* Void UpdateBackButtonVisibility() */

void Assembly-CSharp.dll::ProfileSettingsMenu::ProfileSettingsMenu_UpdateBackButtonVisibility
               (ProfileSettingsMenu *this,MethodInfo *method)

{
  this_00 = (this->fields).backButton;
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,1,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

