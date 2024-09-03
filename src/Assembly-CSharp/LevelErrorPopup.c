
/* Void Initialize(UnityAction, Int32) */

void Assembly-CSharp.dll::LevelErrorPopup::LevelErrorPopup_Initialize
               (LevelErrorPopup *this,UnityAction *resultCallback,int32_t requiredLevel,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__BadgeManager);
    func_?(&
                    MethodInfo__LevelErrorPopup__OnLevelRequirementLoaded_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&
                    MethodInfo__LevelErrorPopup__OnPlayerLevelLoaded_UnityEngine__Networking__UnityWebRequest_
                   );
    cRam_? = '\x01';
  }
  pSVar1 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
           func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
  SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
  SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
            (pSVar1,(Object *)this,
             MethodInfo__LevelErrorPopup__OnLevelRequirementLoaded_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BadgeManager);
  }
  BadgeManager::BadgeManager_GetBadgeTexture
            (requiredLevel,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pSVar1,
             (MethodInfo *)0x0);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (pMVar2 != (MVLocalPlayer *)0x0) {
      pAStack3 = TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
      level = (UnityAction *)(pMVar2->fields)._.level;
      pSVar1 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)func_?();
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
      SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
                (pSVar1,(Object *)this,
                 MethodInfo__LevelErrorPopup__OnPlayerLevelLoaded_UnityEngine__Networking__UnityWebRequest_
                 ,(MethodInfo *)0x0);
      BadgeManager::BadgeManager_GetBadgeTexture
                ((int32_t)level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pSVar1,
                 (MethodInfo *)0x0);
      (this->fields).resultCallback = level;
      func_?();
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnButtonPressed() */

void Assembly-CSharp.dll::LevelErrorPopup::LevelErrorPopup_OnButtonPressed
               (LevelErrorPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__LevelErrorPopup____c___OnButtonPressed_b__8_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__LevelErrorPopup____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__LevelErrorPopup____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__LevelErrorPopup____c);
  }
  callbackFunction = TypeInfo__LevelErrorPopup____c->static_fields->__9__8_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__LevelErrorPopup____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__LevelErrorPopup____c);
    }
    object = TypeInfo__LevelErrorPopup____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__LevelErrorPopup____c___OnButtonPressed_b__8_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__LevelErrorPopup____c->static_fields->__9__8_0 = callbackFunction;
    func_?(&TypeInfo__LevelErrorPopup____c->static_fields->__9__8_0,callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  (this->fields).requiredLevelTextureAsset = (Texture2D *)0x0;
  func_?(&(this->fields).requiredLevelTextureAsset,0);
  (this->fields).playerLevelTextureAsset = (Texture2D *)0x0;
  func_?(&(this->fields).playerLevelTextureAsset,0);
  if ((this->fields).resultCallback != (UnityAction *)0x0) {
    (*(((this->fields).resultCallback)->fields)._._.invoke_impl)();
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::LevelErrorPopup::LevelErrorPopup_OnDestroy
               (LevelErrorPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__BadgeManager);
    func_?(&
                    MethodInfo__LevelErrorPopup__OnLevelRequirementLoaded_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&
                    MethodInfo__LevelErrorPopup__OnPlayerLevelLoaded_UnityEngine__Networking__UnityWebRequest_
                   );
    cRam_? = '\x01';
  }
  pSVar1 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
           func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
  SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
  SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
            (pSVar1,(Object *)this,
             MethodInfo__LevelErrorPopup__OnLevelRequirementLoaded_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  BadgeManager::BadgeManager_UnsubscribeGetBadgeRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pSVar1,(MethodInfo *)0x0);
  object = TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
  pSVar1 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)func_?();
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
  SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
  SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
            (pSVar1,(Object *)object,
             MethodInfo__LevelErrorPopup__OnPlayerLevelLoaded_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  BadgeManager::BadgeManager_UnsubscribeGetBadgeRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pSVar1,(MethodInfo *)0x0);
  return;
}


/* Void OnLevelRequirementLoaded(UnityWebRequest) */

void Assembly-CSharp.dll::LevelErrorPopup::LevelErrorPopup_OnLevelRequirementLoaded
               (LevelErrorPopup *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Badge_not_loaded_for_accessory_l);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
           DownloadHandlerTexture::DownloadHandlerTexture_GetContent(www,(MethodInfo *)0x0);
  (this->fields).requiredLevelTextureAsset = pTVar1;
  func_?(&(this->fields).requiredLevelTextureAsset,pTVar1);
  pTVar1 = (this->fields).requiredLevelTextureAsset;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    this_00 = (this->fields).requiredLevelImage;
    if (this_00 != (RawImage *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                (this_00,(Texture *)(this->fields).requiredLevelTextureAsset,(MethodInfo *)0x0);
      return;
    }
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)StringLiteral_Badge_not_loaded_for_accessory_l,(MethodInfo *)0x0);
  return;
}


/* Void OnPlayerLevelLoaded(UnityWebRequest) */

void Assembly-CSharp.dll::LevelErrorPopup::LevelErrorPopup_OnPlayerLevelLoaded
               (LevelErrorPopup *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Badge_not_loaded_for_accessory_l);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
           DownloadHandlerTexture::DownloadHandlerTexture_GetContent(www,(MethodInfo *)0x0);
  (this->fields).playerLevelTextureAsset = pTVar1;
  func_?(&(this->fields).playerLevelTextureAsset,pTVar1);
  pTVar1 = (this->fields).playerLevelTextureAsset;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    this_00 = (this->fields).playerLevelImage;
    if (this_00 != (RawImage *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                (this_00,(Texture *)(this->fields).playerLevelTextureAsset,(MethodInfo *)0x0);
      return;
    }
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)StringLiteral_Badge_not_loaded_for_accessory_l,(MethodInfo *)0x0);
  return;
}

