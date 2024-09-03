
/* Void OnDestroy() */

void Assembly-CSharp.dll::AvatarBlobShadowController::AvatarBlobShadowController_OnDestroy
               (AvatarBlobShadowController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::Object>);
    func_?(&MethodInfo__AvatarBlobShadowController__OnQualityLevelChanged_System__Object_);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
                   );
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  this_00 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
            ProfileSettingsChanged;
  if (this_00 !=
      (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) {
    pDVar1 = (Delegate *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,6,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                       );
    this_01 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
              func_?(TypeInfo__System__Action<System::Object>);
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
    SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__AvatarBlobShadowController__OnQualityLevelChanged_System__Object_,
               (MethodInfo *)0x0);
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       (pDVar1,(Delegate *)this_01,(MethodInfo *)0x0);
    method_00 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
    ;
    if (pDVar1 == (Delegate *)0x0) {
      value = (Object *)0x0;
    }
    else {
      value = (Object *)func_?();
      if (value == (Object *)0x0) goto code_?;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__set_Item
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,6,value,method_00);
    return;
  }
  func_?();
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::AvatarBlobShadowController::AvatarBlobShadowController_OnDisable
               (AvatarBlobShadowController *this,MethodInfo *method)

{
  this_00 = (this->fields).blobProjector;
  if (this_00 != (Projector *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::AvatarBlobShadowController::AvatarBlobShadowController_OnEnable
               (AvatarBlobShadowController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel);
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  iStack_1 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
             _LightQualityLevel_k__BackingField;
  value = (Object *)
          func_?(TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel,&iStack_1);
  AvatarBlobShadowController_OnQualityLevelChanged(this,value,(MethodInfo *)0x0);
  return;
}


/* Void OnQualityLevelChanged(Object) */

void Assembly-CSharp.dll::AvatarBlobShadowController::
     AvatarBlobShadowController_OnQualityLevelChanged
               (AvatarBlobShadowController *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel);
    cRam_? = '\x01';
  }
  if ((this->fields).forceHidden == 0) {
    if (value == (Object *)0x0) goto code_?;
    if ((value->klass->_0).element_class !=
        (TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel->_0).element_class) {
      func_?(value,TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel);
      goto code_?;
    }
    piVar1 = (int *)func_?(value);
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      this = (AvatarBlobShadowController *)(this->fields).blobProjector;
      if (this == (AvatarBlobShadowController *)0x0) goto code_?;
      value = (Object *)0x1;
      goto UnityEngine_CoreModule_dll_UnityEngine_Behaviour_Behaviour_set_enabled;
    }
    if ((iVar2 != 1) && (iVar2 != 2)) {
      return;
    }
  }
  this = (AvatarBlobShadowController *)(this->fields).blobProjector;
  if (this != (AvatarBlobShadowController *)0x0) {
    value = (Object *)0x0;
UnityEngine_CoreModule_dll_UnityEngine_Behaviour_Behaviour_set_enabled:
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?(&UNK_?,unaff_EBP);
    }
    (*pcRam_?)(this,value);
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ScaleShadow(Single) */

void Assembly-CSharp.dll::AvatarBlobShadowController::AvatarBlobShadowController_ScaleShadow
               (AvatarBlobShadowController *this,float scale,MethodInfo *method)

{
  this_00 = (this->fields).blobProjector;
  if (this_00 != (Projector *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Projector::Projector_set_orthographicSize
              (this_00,scale,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::AvatarBlobShadowController::AvatarBlobShadowController_Start
               (AvatarBlobShadowController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::Object>);
    func_?(&MethodInfo__AvatarBlobShadowController__OnQualityLevelChanged_System__Object_);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
                   );
    func_?(&TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel);
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  this_00 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
            ProfileSettingsChanged;
  if (this_00 !=
      (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) {
    pDVar1 = (Delegate *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,6,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                       );
    this_01 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
              func_?(TypeInfo__System__Action<System::Object>);
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
    SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__AvatarBlobShadowController__OnQualityLevelChanged_System__Object_,
               (MethodInfo *)0x0);
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       (pDVar1,(Delegate *)this_01,(MethodInfo *)0x0);
    pMStack_2 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
    ;
    if (pDVar1 == (Delegate *)0x0) {
      pOVar3 = (Object *)0x0;
    }
    else {
      pOVar3 = (Object *)func_?();
      if (pOVar3 == (Object *)0x0) goto code_?;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__set_Item
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,6,pOVar3,pMStack_2);
    if (cRam_? == '\0') {
      ppPStack4 = &TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager;
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
        cctor_finished_or_no_cctor == 0) {
      ppPStack4 =
           (ProfileSettingsManager__Class **)
           TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager;
      func_?();
    }
    iStack_5 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
               _LightQualityLevel_k__BackingField;
    ppPStack4 = (ProfileSettingsManager__Class **)&iStack_5;
    pLStack6 = TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel;
    pOVar3 = (Object *)func_?();
    AvatarBlobShadowController_OnQualityLevelChanged
              ((AvatarBlobShadowController *)0x6,pOVar3,(MethodInfo *)0x0);
    uRam_? = 0;
    return;
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void set_ForceHidden(Boolean) */

void Assembly-CSharp.dll::AvatarBlobShadowController::AvatarBlobShadowController_set_ForceHidden
               (AvatarBlobShadowController *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel);
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  (this->fields).forceHidden = value;
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  _value = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
           _LightQualityLevel_k__BackingField;
  value_00 = (Object *)
             func_?(TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel,&value);
  AvatarBlobShadowController_OnQualityLevelChanged(this,value_00,(MethodInfo *)0x0);
  return;
}

