
/* Void OnDestroy() */

void Assembly-CSharp.dll::LevelRequirementPanel::LevelRequirementPanel_OnDestroy
               (LevelRequirementPanel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__LevelRequirementPanel__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
             ,
             MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
            );
  if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
    func_?();
  }
  BadgeManager::BadgeManager_UnsubscribeGetBadgeRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
  (this->fields).levelRequirementTextureAsset = (Texture2D *)0x0;
  return;
}


/* Void OnLevelingIsReady() */

void Assembly-CSharp.dll::LevelRequirementPanel::LevelRequirementPanel_OnLevelingIsReady
               (LevelRequirementPanel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__LevelingManager);
  }
  pUVar1 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,MethodInfo__LevelRequirementPanel__OnLevelingIsReady__,
             (MethodInfo *)0x0);
  pUVar3 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pUVar1 = (UnityAction *)0x0;
  if (pUVar3 != (UnityAction *)0x0) {
    if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar1 = pUVar3;
    }
    if (pUVar1 == (UnityAction *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar1;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  level = in_stack_5[3].klass;
  if (level != (Object__Class *)in_stack_5[2].monitor) {
    in_stack_5[2].monitor = (MonitorData *)level;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,in_stack_5,
               MethodInfo__LevelRequirementPanel__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
               ,
               MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
              );
    if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
      func_?();
    }
    BadgeManager::BadgeManager_GetBadgeTexture
              ((int32_t)level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar2,
               (MethodInfo *)0x0);
  }
  return;
}


/* Void SetLevelBadge() */

void Assembly-CSharp.dll::LevelRequirementPanel::LevelRequirementPanel_SetLevelBadge
               (LevelRequirementPanel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  level = (this->fields).desiredLevel;
  if (level != (this->fields).prevLevel) {
    (this->fields).prevLevel = level;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__LevelRequirementPanel__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
               ,
               MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
              );
    if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).desiredLevel = level;
  if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__LevelingManager);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__LevelingManager);
  }
  if (TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField != 0) {
    LevelRequirementPanel_SetLevelBadge(this,(MethodInfo *)0x0);
    return;
  }
  if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__LevelingManager);
  }
  pUVar1 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,MethodInfo__LevelRequirementPanel__OnLevelingIsReady__,
             (MethodInfo *)0x0);
  pUVar2 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pUVar1 = (UnityAction *)0x0;
  if (pUVar2 != (UnityAction *)0x0) {
    if (pUVar2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar1 = pUVar2;
    }
    if (pUVar1 == (UnityAction *)0x0) {
      pUStack3 = TypeInfo__UnityEngine__Events__UnityAction;
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar1;
  return;
}


/* Void StreamingAssetCallback(UnityWebRequest) */

void Assembly-CSharp.dll::LevelRequirementPanel::LevelRequirementPanel_StreamingAssetCallback
               (LevelRequirementPanel *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::DownloadHandlerTexture
      ::DownloadHandlerTexture_GetContent(www,(MethodInfo *)0x0);
  (this->fields).levelRequirementTextureAsset = x;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pRVar2 = (this->fields).levelRequirementImage;
  if (pRVar2 != (RawImage *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pRVar2,1,(MethodInfo *)0x0);
    pRVar2 = (this->fields).levelRequirementImage;
    if (pRVar2 != (RawImage *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                (pRVar2,(Texture *)(this->fields).levelRequirementTextureAsset,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* LevelRequirementPanel() */

void Assembly-CSharp.dll::LevelRequirementPanel::LevelRequirementPanel__ctor
               (LevelRequirementPanel *this,MethodInfo *method)

{
  (this->fields).prevLevel = -1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

