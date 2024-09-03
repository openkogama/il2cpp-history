
/* Void OnDestroy() */

void Assembly-CSharp.dll::LevelRequirementPanel::LevelRequirementPanel_OnDestroy
               (LevelRequirementPanel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__BadgeManager);
    func_?(&
                    MethodInfo__LevelRequirementPanel__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
                   );
    cRam_? = '\x01';
  }
  this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
  SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
  SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__LevelRequirementPanel__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  BadgeManager::BadgeManager_UnsubscribeGetBadgeRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
  (this->fields).levelRequirementTextureAsset = (Texture2D *)0x0;
  func_?(&(this->fields).levelRequirementTextureAsset);
  return;
}


/* Void OnLevelingIsReady() */

void Assembly-CSharp.dll::LevelRequirementPanel::LevelRequirementPanel_OnLevelingIsReady
               (LevelRequirementPanel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__LevelRequirementPanel__OnLevelingIsReady__);
    func_?(&TypeInfo__LevelingManager);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__LevelingManager);
  }
  pUVar1 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__LevelRequirementPanel__OnLevelingIsReady__,
             (MethodInfo *)0x0);
  pUVar1 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pUVar1 == (UnityAction *)0x0) {
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
code_?:
    func_?();
    if (cRam_? == '\0') {
      func_?();
      func_?();
      ppMStack2 =
           &
           MethodInfo__LevelRequirementPanel__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
      ;
      func_?();
      cRam_? = '\x01';
    }
    level = (Object__Class *)in_stack_3[3].monitor;
    if (level != in_stack_3[3].klass) {
      in_stack_3[3].klass = level;
      this_01 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)func_?();
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
      SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
                (this_01,in_stack_3,
                 MethodInfo__LevelRequirementPanel__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      BadgeManager::BadgeManager_GetBadgeTexture
                ((int32_t)level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,
                 (MethodInfo *)0x0);
    }
    return;
  }
  pUVar4 = (UnityAction *)0x0;
  if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
    pUVar4 = pUVar1;
  }
  if (pUVar4 == (UnityAction *)0x0) {
    func_?();
  }
  else {
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar4;
    pUVar4 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar4 = pUVar1;
    }
    if (pUVar4 != (UnityAction *)0x0) goto code_?;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetLevelBadge() */

void Assembly-CSharp.dll::LevelRequirementPanel::LevelRequirementPanel_SetLevelBadge
               (LevelRequirementPanel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__BadgeManager);
    func_?(&
                    MethodInfo__LevelRequirementPanel__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
                   );
    cRam_? = '\x01';
  }
  level = (this->fields).desiredLevel;
  if (level != (this->fields).prevLevel) {
    (this->fields).prevLevel = level;
    this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
              func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
    SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__LevelRequirementPanel__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__BadgeManager);
    }
    BadgeManager::BadgeManager_GetBadgeTexture
              (level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
  }
  return;
}


/* Void SetLevelSpriteFromCallback(Int32) */

void Assembly-CSharp.dll::LevelRequirementPanel::LevelRequirementPanel_SetLevelSpriteFromCallback
               (LevelRequirementPanel *this,int32_t level,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__LevelRequirementPanel__OnLevelingIsReady__);
    func_?(&TypeInfo__LevelingManager);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  (this->fields).desiredLevel = level;
  if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__LevelingManager);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__LevelingManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__LevelingManager);
  }
  if (TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField != 0) {
    LevelRequirementPanel_SetLevelBadge(this,(MethodInfo *)0x0);
    return;
  }
  if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__LevelingManager);
  }
  pUVar1 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__LevelRequirementPanel__OnLevelingIsReady__,
             (MethodInfo *)0x0);
  pUVar1 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pUVar1 == (UnityAction *)0x0) {
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
    pUStack2 = (UnityAction__Class *)0x0;
    func_?();
    return;
  }
  pUVar3 = (UnityAction *)0x0;
  if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
    pUVar3 = pUVar1;
  }
  if (pUVar3 == (UnityAction *)0x0) {
    pUStack2 = TypeInfo__UnityEngine__Events__UnityAction;
    func_?();
    pUStack2 = extraout_EDX;
  }
  else {
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar3;
    pUVar3 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar3 = pUVar1;
    }
    pUStack2 = TypeInfo__UnityEngine__Events__UnityAction;
    if (pUVar3 != (UnityAction *)0x0) {
      pUStack2 = (UnityAction__Class *)pUVar3;
      func_?();
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void StreamingAssetCallback(UnityWebRequest) */

void Assembly-CSharp.dll::LevelRequirementPanel::LevelRequirementPanel_StreamingAssetCallback
               (LevelRequirementPanel *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
           DownloadHandlerTexture::DownloadHandlerTexture_GetContent(www,(MethodInfo *)0x0);
  (this->fields).levelRequirementTextureAsset = pTVar1;
  func_?(&(this->fields).levelRequirementTextureAsset,pTVar1);
  pTVar1 = (this->fields).levelRequirementTextureAsset;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  pRVar3 = (this->fields).levelRequirementImage;
  if (pRVar3 != (RawImage *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pRVar3,1,(MethodInfo *)0x0);
    pRVar3 = (this->fields).levelRequirementImage;
    if (pRVar3 != (RawImage *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                (pRVar3,(Texture *)(this->fields).levelRequirementTextureAsset,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* LevelRequirementPanel() */

void Assembly-CSharp.dll::LevelRequirementPanel::LevelRequirementPanel__ctor
               (LevelRequirementPanel *this,MethodInfo *method)

{
  (this->fields).prevLevel = -1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

