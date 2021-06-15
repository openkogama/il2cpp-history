
/* Void Activate(ActivateUIElement) */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_Activate
               (DesktopPlayModeController *this,ActivateUIElement__Enum element,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (element == ActivateUIElement__Enum_AvatarAccessoryShop) {
    pAVar1 = (this->fields).accessoryShopController;
    if (pAVar1 != (AccessoryShopController *)0x0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?,unaff_EBP);
        cRam_? = '\x01';
      }
      (pAVar1->fields).pushOption = 2;
      if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__AccessoryDataManager);
      }
      pUVar2 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)pAVar1,MethodInfo__AccessoryShopController__ReadyCallback__,
                 (MethodInfo *)0x0);
      pUStack3 =
           (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar2,(Delegate *)this_01,(MethodInfo *)0x0);
      pUVar2 = (UnityAction *)0x0;
      if (pUStack3 != (UnityAction *)0x0) {
        if (pUStack3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pUVar2 = pUStack3;
        }
        if (pUVar2 == (UnityAction *)0x0) {
          func_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar2;
      AccessoryDataManager::AccessoryDataManager_SetReady((MethodInfo *)0x0);
      return;
    }
  }
  else if (element == ActivateUIElement__Enum_AvatarAccessoryShopBundles) {
    pAVar1 = (this->fields).accessoryShopController;
    if (pAVar1 != (AccessoryShopController *)0x0) {
      AccessoryShopController::AccessoryShopController_Activate_1
                (pAVar1,UIPushOption__Enum_HideAll,AccessoryCategoryClient__Enum_Bundles,
                 (MethodInfo *)0x0);
      return;
    }
  }
  else {
    if (element != ActivateUIElement__Enum_BoosterMenu) {
      return;
    }
    pXVar5 = (XpBoostParticlePreviewer *)(this->fields).boosterMenu;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       (pXVar5,
                        BoostMenuController_MethodInfo__UnityEngine__Object__Instantiate<BoostMenuController>_BoostMenuController_
                       );
    if (pXVar5 != (XpBoostParticlePreviewer *)0x0) {
      BoostMenuController::BoostMenuController_Initialize
                ((BoostMenuController *)pXVar5,(MethodInfo *)0x0);
      this_00 = (this->fields).uiStack;
      gameObject = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pXVar5,(MethodInfo *)0x0);
      if (this_00 != (UIStack *)0x0) {
        UIStack::UIStack_Push
                  (this_00,gameObject,UIPushOption__Enum_InvisibleBlocker,(UnityAction *)0x0,
                   UIGroupFlags__Enum_GameObjectUI,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_Awake
               (DesktopPlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields).uiStack;
  if (pUVar1 != (UIStack *)0x0) {
    UIStack::UIStack_Push
              (pUVar1,(this->fields).stackBottom,UIPushOption__Enum_None,(UnityAction *)0x0,
               UIGroupFlags__Enum_StackBottom,(MethodInfo *)0x0);
    DesktopPlayModeController_CreateGUI(this,(MethodInfo *)0x0);
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      pWVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                         (this_00,
                          LockCursorManager3DMode_MethodInfo__UnityEngine__GameObject__AddComponent<LockCursorManager3DMode>__
                         );
      (this->fields).lockCursorManager = (ILockCursorManager *)pWVar2;
      MVGameControllerDesktop::MVGameControllerDesktop_RegisterPlayModeController
                (this,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_01 != (MVNetworkGame *)0x0) {
        this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
        if (this_02 != (MVLocalPlayer *)0x0) {
          bVar3 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)this_02,(MethodInfo *)0x0);
          if (bVar3 == 0) {
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?();
            }
            pAVar4 = MVGameControllerBase::MVGameControllerBase_get_OnFirstFrameUpdateActorReady
                               ((MethodInfo *)0x0);
            pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar5,(Object *)this,MethodInfo__DesktopPlayModeController__SetUIReady__,
                       (MethodInfo *)0x0);
            pDStack6 =
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
          }
          else {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pUVar1 = (this->fields).uiStack;
            if (pUVar1 == (UIStack *)0x0) goto code_?;
            UIStack::UIStack_SetStackReady(pUVar1,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?();
            }
            pAVar4 = MVGameControllerBase::MVGameControllerBase_get_OnFirstFrameUpdateActorReady
                               ((MethodInfo *)0x0);
            pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar5,(Object *)this,MethodInfo__DesktopPlayModeController__SetUIReady__,
                       (MethodInfo *)0x0);
            pDStack6 =
                 mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)pAVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
          }
          if (pDStack6 == (Delegate *)0x0) {
Assembly_CSharp_dll_MVGameControllerBase_MVGameControllerBase_set_OnFirstFrameUpdateActorReady:
            if (cRam_? == '\0') {
              pMStack7 = (MVGameControllerBase__Class *)_UNK_?;
              func_?();
              cRam_? = '\x01';
            }
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              pMStack7 = TypeInfo__MVGameControllerBase;
              func_?();
            }
            pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if ((pMVar8 != (MVGameControllerBase *)0x0) &&
               (pFVar9 = (pMVar8->fields).firstFrameUpdateActorReady,
               pFVar9 != (FirstFrameUpdateActorReady *)0x0)) {
              (pFVar9->fields).callbacks = in_stack_10;
              return;
            }
            pMStack7 = (MVGameControllerBase__Class *)0x0;
            func_?();
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pDVar12 = (Delegate *)0x0;
          if ((Action__Class *)pDStack6->klass == TypeInfo__System__Action) {
            pDVar12 = pDStack6;
          }
          pAStack13 = TypeInfo__System__Action;
          if (pDVar12 != (Delegate *)0x0)
          goto 
          Assembly_CSharp_dll_MVGameControllerBase_MVGameControllerBase_set_OnFirstFrameUpdateActorReady
          ;
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
  pDStack6 = extraout_ECX;
  pAStack13 = extraout_EDX;
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void CreateGUI() */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_CreateGUI
               (DesktopPlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).chatController;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pCVar1 = (ChatControllerUGUI *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pCVar1,
                      ChatControllerUGUI_MethodInfo__UnityEngine__Object__Instantiate<ChatControllerUGUI>_ChatControllerUGUI_
                     );
  (this->fields).chatController = pCVar1;
  if (pCVar1 != (ChatControllerUGUI *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pCVar1,(MethodInfo *)0x0);
    pGVar3 = (this->fields).stackBottom;
    if (pGVar3 != (GameObject *)0x0) {
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar3,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (pTVar2,pTVar4,0,(MethodInfo *)0x0);
        pCVar1 = (this->fields).chatController;
        if (pCVar1 != (ChatControllerUGUI *)0x0) {
          ChatControllerUGUI::ChatControllerUGUI_SubscribeToMessages(pCVar1,(MethodInfo *)0x0);
          pXVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                             ((XpBoostParticlePreviewer *)
                              (this->fields).fullscreenPlayModeStateTransform,
                              UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                             );
          this_00 = (this->fields).uiStack;
          (this->fields).playModeState = (GameObject *)pXVar5;
          if (this_00 != (UIStack *)0x0) {
            UIStack::UIStack_Push
                      (this_00,(GameObject *)pXVar5,UIPushOption__Enum_None,(UnityAction *)0x0,
                       UIGroupFlags__Enum_MainUI,(MethodInfo *)0x0);
            pDVar6 = (DesktopInGameGUIController *)
                     UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                               ((XpBoostParticlePreviewer *)(this->fields).inGameController,
                                DesktopInGameGUIController_MethodInfo__UnityEngine__Object__Instantiate<DesktopInGameGUIController>_DesktopInGameGUIController_
                               );
            (this->fields).inGameController = pDVar6;
            if (pDVar6 != (DesktopInGameGUIController *)0x0) {
              DesktopInGameGUIController::DesktopInGameGUIController_Initialize
                        (pDVar6,(MethodInfo *)0x0);
              pDVar6 = (this->fields).inGameController;
              if (pDVar6 != (DesktopInGameGUIController *)0x0) {
                pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_transform((Component_1 *)pDVar6,(MethodInfo *)0x0);
                pGVar3 = (this->fields).playModeState;
                if (pGVar3 != (GameObject *)0x0) {
                  pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_get_transform(pGVar3,(MethodInfo *)0x0);
                  if (pTVar2 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                              (pTVar2,pTVar4,0,(MethodInfo *)0x0);
                    pXVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                             Object_1_Instantiate_251
                                       ((XpBoostParticlePreviewer *)(this->fields).playerListButton,
                                        UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                                       );
                    (this->fields).playerListButton = (RectTransform *)pXVar5;
                    if (pXVar5 != (XpBoostParticlePreviewer *)0x0) {
                      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_1_get_transform((Component_1 *)pXVar5,(MethodInfo *)0x0);
                      pGVar3 = (this->fields).playModeState;
                      if (pGVar3 != (GameObject *)0x0) {
                        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                 GameObject_get_transform(pGVar3,(MethodInfo *)0x0);
                        if (pTVar2 != (Transform *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                                    (pTVar2,pTVar4,0,(MethodInfo *)0x0);
                          pXVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                   Object_1_Instantiate_251
                                             ((XpBoostParticlePreviewer *)
                                              (this->fields).notificationsManager,
                                              UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                                             );
                          (this->fields).notificationsManager = (RectTransform *)pXVar5;
                          if (pXVar5 != (XpBoostParticlePreviewer *)0x0) {
                            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                     Component_1_get_transform
                                               ((Component_1 *)pXVar5,(MethodInfo *)0x0);
                            pGVar3 = (this->fields).stackBottom;
                            if (pGVar3 != (GameObject *)0x0) {
                              pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                       GameObject_get_transform(pGVar3,(MethodInfo *)0x0);
                              if (pTVar2 != (Transform *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_SetParent_1(pTVar2,pTVar4,0,(MethodInfo *)0x0);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* IGUICrossHair GetCrossHair() */

IGUICrossHair *
Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_GetCrossHair
          (DesktopPlayModeController *this,MethodInfo *method)

{
  pDVar1 = (this->fields).inGameController;
  if (pDVar1 != (DesktopInGameGUIController *)0x0) {
    return (IGUICrossHair *)(pDVar1->fields).crossHair;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pIVar3 = (IGUICrossHair *)(*pcVar2)();
  return pIVar3;
}


/* Void HandleInput() */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_HandleInput
               (DesktopPlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                    (KogamaControls__Enum_LobbyMenu,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pIVar2 = (this->fields).lockCursorManager;
    if (pIVar2 == (ILockCursorManager *)0x0) goto code_?;
    func_?(3,TypeInfo__ILockCursorManager,pIVar2,0);
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                    (KogamaControls__Enum_ToggleHD,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    this_00 = (this->fields).uiStack;
    if (this_00 == (UIStack *)0x0) goto code_?;
    bVar1 = UIStack::UIStack_IsStackEmpty(this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVQualitySettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVQualitySettings->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVQualitySettings);
      }
      iVar3 = MVQualitySettings::MVQualitySettings_get_CurrentLevel((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVQualitySettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVQualitySettings->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVQualitySettings);
      }
      MVQualitySettings::MVQualitySettings_set_CurrentLevel((uint)(iVar3 == 0),(MethodInfo *)0x0);
    }
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar4 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
  if (pIVar4 != (IEditModeUI *)0x0) {
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                      (KogamaControls__Enum_ToggleLogicRendering,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      this_02 = (MVBuildModeAvatarLocal_EditMode *)
                MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((this_02 != (MVBuildModeAvatarLocal_EditMode *)0x0) &&
         (bVar1 = MVBuildModeAvatarLocal+EditMode::
                  MVBuildModeAvatarLocal_EditMode_get_MovementConstrained(this_02,(MethodInfo *)0x0)
         , this_01 != (MainCameraManager *)0x0)) {
        MainCameraManager::MainCameraManager_set_IsLogicRendered
                  (this_01,bVar1 == 0,(MethodInfo *)0x0);
        return;
      }
code_?:
      func_?(0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}


/* Void HideEUseIcon() */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_HideEUseIcon
               (DesktopPlayModeController *this,MethodInfo *method)

{
  pDVar1 = (this->fields).inGameController;
  if ((pDVar1 != (DesktopInGameGUIController *)0x0) &&
     (this_00 = (pDVar1->fields).use, this_00 != (ShowUse *)0x0)) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_Initialize
               (DesktopPlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ModeControllerBase::ModeControllerBase_Initialize((ModeControllerBase *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
  if (pIVar1 == (IEditModeUI *)0x0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_03 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (this_03 != (MainCameraManager *)0x0) {
      MainCameraManager::MainCameraManager_set_CamMaskMode
                (this_03,MaskMode__Enum_AvatarLobbyFocus,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  else {
code_?:
    pXVar2 = (XpBoostParticlePreviewer *)(this->fields).chatBubbleController;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       (pXVar2,
                        ChatBubbleController_MethodInfo__UnityEngine__Object__Instantiate<ChatBubbleController>_ChatBubbleController_
                       );
    (this->fields).chatBubbleController = (ChatBubbleController *)pXVar2;
    if (pXVar2 != (XpBoostParticlePreviewer *)0x0) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)pXVar2,(MethodInfo *)0x0);
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (pTVar3 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (pTVar3,pTVar4,0,(MethodInfo *)0x0);
        pXVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                           ((XpBoostParticlePreviewer *)(this->fields).lobbyState,
                            UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                           );
        pGVar5 = (this->fields).playModeState;
        (this->fields).lobbyStateRect = (RectTransform *)pXVar2;
        if (pGVar5 != (GameObject *)0x0) {
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar5,(MethodInfo *)0x0);
          if (pXVar2 != (XpBoostParticlePreviewer *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                      ((Transform *)pXVar2,pTVar3,0,(MethodInfo *)0x0);
            pIVar6 = (InGameMenu *)
                     UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                               ((XpBoostParticlePreviewer *)(this->fields).inGameMenuPrefab,
                                InGameMenu_MethodInfo__UnityEngine__Object__Instantiate<InGameMenu>_InGameMenu_
                               );
            (this->fields).inGameMenu = pIVar6;
            if (pIVar6 != (InGameMenu *)0x0) {
              pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                 ((Component_1 *)pIVar6,(MethodInfo *)0x0);
              pGVar5 = (this->fields).playModeState;
              if (pGVar5 != (GameObject *)0x0) {
                pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(pGVar5,(MethodInfo *)0x0);
                if (pTVar3 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                            (pTVar3,pTVar4,0,(MethodInfo *)0x0);
                  pIVar6 = (this->fields).inGameMenu;
                  if (pIVar6 != (InGameMenu *)0x0) {
                    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_1_get_gameObject((Component_1 *)pIVar6,(MethodInfo *)0x0);
                    if (pGVar5 != (GameObject *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar5,0,(MethodInfo *)0x0);
                      pIVar6 = (this->fields).inGameMenu;
                      if (pIVar6 != (InGameMenu *)0x0) {
                        InGameMenu::InGameMenu_Initialize(pIVar6,(MethodInfo *)0x0);
                        this_04 = (TimeAttackFlagDebriefing *)
                                  UnityEngine.CoreModule.dll::UnityEngine::Object::
                                  Object_1_Instantiate_251
                                            ((XpBoostParticlePreviewer *)
                                             (this->fields).timeAttackFlagDebriefing,
                                             TimeAttackFlagDebriefing_MethodInfo__UnityEngine__Object__Instantiate<TimeAttackFlagDebriefing>_TimeAttackFlagDebriefing_
                                            );
                        (this->fields).timeAttackFlagDebriefing = this_04;
                        if (this_04 != (TimeAttackFlagDebriefing *)0x0) {
                          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_1_get_transform
                                             ((Component_1 *)this_04,(MethodInfo *)0x0);
                          pGVar5 = (this->fields).playModeState;
                          if (pGVar5 != (GameObject *)0x0) {
                            pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                     GameObject_get_transform(pGVar5,(MethodInfo *)0x0);
                            if (pTVar3 != (Transform *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_SetParent_1(pTVar3,pTVar4,0,(MethodInfo *)0x0);
                              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr
                                   & 0x2000000) != 0) &&
                                 ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                                func_?();
                              }
                              pFVar7 = MVGameControllerBase::
                                        MVGameControllerBase_get_FlagDebriefingControl
                                                  ((MethodInfo *)0x0);
                              if (pFVar7 != (FlagDebriefingControl *)0x0) {
                                pAVar8 = (pFVar7->fields).OnFlagDebriefing;
                                pUVar9 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                           *)func_?();
                                UnityEngine.CoreModule.dll::UnityEngine::Events::
                                UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine::
                                SceneManagement::Scene]::
                                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                          (pUVar9,(Object *)this,
                                           MethodInfo__DesktopPlayModeController__OnShowTimeAttackFlagDebriefing_int_
                                           ,
                                           MethodInfo__System__Action<int>__Action_System__Object__void__
                                          );
                                pAVar10 = (Action_1_Int32_ *)
                                          mscorlib.dll::System::Delegate::Delegate_Combine
                                                    ((Delegate *)pAVar8,(Delegate *)pUVar9,
                                                     (MethodInfo *)0x0);
                                pAVar8 = (Action_1_Int32_ *)0x0;
                                if (pAVar10 != (Action_1_Int32_ *)0x0) {
                                  if (pAVar10->klass == TypeInfo__System__Action<int>) {
                                    pAVar8 = pAVar10;
                                  }
                                  if (pAVar8 == (Action_1_Int32_ *)0x0) goto code_?;
                                }
                                (pFVar7->fields).OnFlagDebriefing = pAVar8;
                                pFVar7 = MVGameControllerBase::
                                          MVGameControllerBase_get_FlagDebriefingControl
                                                    ((MethodInfo *)0x0);
                                if (pFVar7 != (FlagDebriefingControl *)0x0) {
                                  pAVar11 = (pFVar7->fields).OnFlagCountDown;
                                  pUVar9 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                             *)func_?();
                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                  UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine::
                                  SceneManagement::Scene]::
                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                            (pUVar9,(Object *)this,
                                             MethodInfo__DesktopPlayModeController__OnShowTimeAttackFlagCountDown__
                                             ,(MethodInfo *)0x0);
                                  pAVar12 = (Action *)
                                            mscorlib.dll::System::Delegate::Delegate_Combine
                                                      ((Delegate *)pAVar11,(Delegate *)pUVar9,
                                                       (MethodInfo *)0x0);
                                  pAVar11 = (Action *)0x0;
                                  if (pAVar12 != (Action *)0x0) {
                                    if (pAVar12->klass == TypeInfo__System__Action) {
                                      pAVar11 = pAVar12;
                                    }
                                    if (pAVar11 == (Action *)0x0) goto code_?;
                                  }
                                  (pFVar7->fields).OnFlagCountDown = pAVar11;
                                  pFVar7 = MVGameControllerBase::
                                            MVGameControllerBase_get_FlagDebriefingControl
                                                      ((MethodInfo *)0x0);
                                  if (pFVar7 != (FlagDebriefingControl *)0x0) {
                                    pAVar11 = (pFVar7->fields).OnFlagCountDownEnd;
                                    pUVar9 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                               *)func_?();
                                    UnityEngine.CoreModule.dll::UnityEngine::Events::
                                    UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine::
                                    SceneManagement::Scene]::
                                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                              (pUVar9,(Object *)this,
                                               MethodInfo__DesktopPlayModeController__OnHideTimeAttackFlagCountDown__
                                               ,(MethodInfo *)0x0);
                                    pAVar12 = (Action *)
                                              mscorlib.dll::System::Delegate::Delegate_Combine
                                                        ((Delegate *)pAVar11,(Delegate *)pUVar9,
                                                         (MethodInfo *)0x0);
                                    pAVar11 = (Action *)0x0;
                                    if (pAVar12 != (Action *)0x0) {
                                      if (pAVar12->klass == TypeInfo__System__Action) {
                                        pAVar11 = pAVar12;
                                      }
                                      if (pAVar11 == (Action *)0x0) goto code_?;
                                    }
                                    (pFVar7->fields).OnFlagCountDownEnd = pAVar11;
                                    pMVar13 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                        ((MethodInfo *)0x0);
                                    if (pMVar13 != (MVNetworkGame *)0x0) {
                                      pAVar14 = (pMVar13->fields).OnWinningConditionFulfilled;
                                      pUVar9 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                 *)func_?();
                                      UnityEngine.CoreModule.dll::UnityEngine::Events::
                                      UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine
                                      ::SceneManagement::Scene]::
                                      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                (pUVar9,(Object *)this,
                                                 MethodInfo__DesktopPlayModeController__OnRoundEnd_IWinningCondition_
                                                 ,
                                                 MethodInfo__System__Action<IWinningCondition>__Action_System__Object__void__
                                                );
                                      pAVar15 = (Action_1_IWinningCondition_ *)
                                                mscorlib.dll::System::Delegate::Delegate_Combine
                                                          ((Delegate *)pAVar14,(Delegate *)pUVar9,
                                                           (MethodInfo *)0x0);
                                      pAVar14 = (Action_1_IWinningCondition_ *)0x0;
                                      if (pAVar15 != (Action_1_IWinningCondition_ *)0x0) {
                                        if (pAVar15->klass ==
                                            TypeInfo__System__Action<IWinningCondition>) {
                                          pAVar14 = pAVar15;
                                        }
                                        if (pAVar14 == (Action_1_IWinningCondition_ *)0x0)
                                        goto code_?;
                                      }
                                      (pMVar13->fields).OnWinningConditionFulfilled = pAVar14;
                                      this_00 = (this->fields).goldPurchasedTracker;
                                      if (this_00 != (GoldPurchasedTracker *)0x0) {
                                        GoldPurchasedTracker::GoldPurchasedTracker_Initialize
                                                  (this_00,(MethodInfo *)0x0);
                                        pDVar16 = (this->fields).deathPromotionController;
                                        if (pDVar16 != (DeathPromotionController *)0x0) {
                                          if (cRam_? == '\0') {
                                            func_?();
                                            cRam_? = '\x01';
                                          }
                                          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).
                                                      Equals.methodPtr & 0x2000000) != 0) &&
                                             ((TypeInfo__MVGameControllerBase->_1).cctor_started ==
                                              0)) {
                                            func_?();
                                          }
                                          bVar17 = MVGameControllerBase::
                                                  MVGameControllerBase_get_IsTouristSession
                                                            ((MethodInfo *)0x0);
                                          if (bVar17 == 0) {
                                            pRVar18 = (pDVar16->fields).registeredAdController;
                                          }
                                          else {
                                            pRVar18 = (RegisteredPromotionController *)
                                                      (pDVar16->fields).touristAdController;
                                          }
                                          (pDVar16->fields).adController =
                                               (IPromotionController *)pRVar18;
                                          if (pRVar18 != (RegisteredPromotionController *)0x0) {
                                            func_?();
                                          }
                                          this_05 = (DesktopPlayMode *)func_?();
                                          DesktopPlayMode::DesktopPlayMode__ctor
                                                    (this_05,(MethodInfo *)0x0);
                                          if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.
                                                      methodPtr & 0x2000000) != 0) &&
                                             ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
                                            func_?();
                                          }
                                          MVInputWrapper::MVInputWrapper_SetInputMap
                                                    ((IKogamaInputMap *)this_05,(MethodInfo *)0x0);
                                          pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    Component::Component_1_get_gameObject
                                                              ((Component_1 *)this,(MethodInfo *)0x0
                                                              );
                                          if (TypeInfo__DesktopPlayModeController->static_fields->
                                              __f__am_cache0 ==
                                              (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
                                            pUVar9 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?();
                                            UnityEngine.CoreModule.dll::UnityEngine::Events::
                                            UnityAction`2[UnityEngine::SceneManagement::
                                            Scene,UnityEngine::SceneManagement::Scene]::
                                            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                      (pUVar9,(Object *)0x0,
                                                                                                              
                                                  MethodInfo__DesktopPlayModeController___Initialize_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                                                  ,
                                                  MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                                                  );
                                            TypeInfo__DesktopPlayModeController->static_fields->
                                            __f__am_cache0 =
                                                 (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar9;
                                          }
                                          callbackFunction =
                                               (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                                               TypeInfo__DesktopPlayModeController->static_fields->
                                               __f__am_cache0;
                                          if ((((uint)(
                                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents
                                                  ->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                                             ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->
                                              _1).cctor_started == 0)) {
                                            func_?();
                                          }
                                          UnityEngine.UI.dll::UnityEngine::EventSystems::
                                          ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
                                                    (pGVar5,(BaseEventData *)0x0,callbackFunction,
                                                                                                          
                                                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                                                  );
                                          pLVar19 = (this->fields).lobbyStatePlayModeController;
                                          if (pLVar19 != (LobbyStatePlayModeController *)0x0) {
                                            LobbyStatePlayModeController::
                                            LobbyStatePlayModeController_Initialize
                                                      (pLVar19,(this->fields).inGameController,
                                                       (this->fields).lobbyStateRect,
                                                       (this->fields).inGameMenu,
                                                       (this->fields).chatController,
                                                       (MethodInfo *)0x0);
                                            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).
                                                        Equals.methodPtr & 0x2000000) != 0) &&
                                               ((TypeInfo__MVGameControllerBase->_1).cctor_started
                                                == 0)) {
                                              func_?();
                                            }
                                            MVar20 = MVGameControllerBase::
                                                     MVGameControllerBase_get_GameMode
                                                               ((MethodInfo *)0x0);
                                            if (MVar20 == MVGameMode__Enum_Play) {
                                              pLVar19 = (this->fields).lobbyStatePlayModeController;
                                              if (pLVar19 == (LobbyStatePlayModeController *)0x0)
                                              goto code_?;
                                              LobbyStatePlayModeController::
                                              LobbyStatePlayModeController_set_IsInLobbyState
                                                        (pLVar19,1,(MethodInfo *)0x0);
                                            }
                                            this_01 = (this->fields).chatController;
                                            if (this_01 != (ChatControllerUGUI *)0x0) {
                                              ChatControllerUGUI::ChatControllerUGUI_Initialize
                                                        (this_01,(MethodInfo *)0x0);
                                              this_02 = (this->fields).playerListButton;
                                              if (this_02 != (RectTransform *)0x0) {
                                                pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::
                                                          Component::Component_1_get_gameObject
                                                                    ((Component_1 *)this_02,
                                                                     (MethodInfo *)0x0);
                                                if (pGVar5 != (GameObject *)0x0) {
                                                  UnityEngine.CoreModule.dll::UnityEngine::
                                                  GameObject::GameObject_SetActive
                                                            (pGVar5,1,(MethodInfo *)0x0);
                                                  if ((((uint)(TypeInfo__ChatCommandManager->vtable)
                                                              .Equals.methodPtr & 0x2000000) != 0)
                                                     && ((TypeInfo__ChatCommandManager->_1).
                                                         cctor_started == 0)) {
                                                    func_?();
                                                  }
                                                  pAVar11 = ChatCommandManager::
                                                                                                                        
                                                  ChatCommandManager_GetChatCommandCallback
                                                            (ChatCommand__Enum_HideAllUI,
                                                             (MethodInfo *)0x0);
                                                  pUVar9 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?();
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[UnityEngine::SceneManagement::
                                                  Scene,UnityEngine::SceneManagement::Scene]::
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                            (pUVar9,(Object *)this,
                                                                                                                          
                                                  MethodInfo__DesktopPlayModeController__HideUI__,
                                                  (MethodInfo *)0x0);
                                                  pAVar12 = (Action *)
                                                            mscorlib.dll::System::Delegate::
                                                            Delegate_Combine((Delegate *)pAVar11,
                                                                             (Delegate *)pUVar9,
                                                                             (MethodInfo *)0x0);
                                                  pAVar11 = (Action *)0x0;
                                                  if (pAVar12 == (Action *)0x0) {
code_?:
                                                    ChatCommandManager::
                                                    ChatCommandManager_UpdateChatCommandCallback
                                                              (ChatCommand__Enum_HideAllUI,pAVar11,
                                                               (MethodInfo *)0x0);
                                                    return;
                                                  }
                                                  if (pAVar12->klass == TypeInfo__System__Action) {
                                                    pAVar11 = pAVar12;
                                                  }
                                                  if (pAVar11 != (Action *)0x0)
                                                  goto code_?;
                                                  goto code_?;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void LeaveEditPlayMode() */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_LeaveEditPlayMode
               (DesktopPlayModeController *this,MethodInfo *method)

{
  this_00 = (this->fields).timeAttackFlagDebriefing;
  if (this_00 == (TimeAttackFlagDebriefing *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_EndDebriefingEarly(this_00,(MethodInfo *)0x0);
  if ((this->fields).OnLeaveEditPlayMode == (UnityAction *)0x0) {
    return;
  }
  if (*(AvatarMotor_OnActiveBounceDelegate **)(in_stack_2 + 0x2c) !=
      (AvatarMotor_OnActiveBounceDelegate *)0x0) {
    AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
              (*(AvatarMotor_OnActiveBounceDelegate **)(in_stack_2 + 0x2c),in_stack_3)
    ;
  }
  pcVar1 = *(code **)(in_stack_2 + 8);
  this_01 = *(MethodInfo **)(in_stack_2 + 0x14);
  piVar4 = *(int **)(in_stack_2 + 0x10);
  if (this_01->flags == 0xffff) {
    func_?(this_01);
  }
  cVar5 = func_?(this_01);
  if (cVar5 == '\0') {
    if ((char)this_01->iflags == '\0') {
      (*pcVar1)();
      return;
    }
  }
  else if ((this_01->flags != 0xffff) &&
          (((piVar4 == (int *)0x0 || ((*(uint *)(*piVar4 + 0xa0) & 0x100) == 0)) &&
           (*(int *)(in_stack_2 + 0xc) != 0)))) {
    cVar5 = func_?(piVar4);
    if (cVar5 != '\0') {
      return;
    }
    method_00 = this_01;
    cVar5 = func_?();
    pOVar6 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System
             ::Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                       ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,method_00);
    cVar7 = func_?(pOVar6);
    if (cVar5 != '\0') {
      if (cVar7 != '\0') {
        func_?();
        return;
      }
      func_?();
      return;
    }
    if (cVar7 != '\0') {
      mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System::
      Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,(MethodInfo *)0x0);
      func_?();
      return;
    }
    func_?();
    return;
  }
  (*pcVar1)(piVar4,this_01);
  return;
}


/* Void LeavePlayMode() */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_LeavePlayMode
               (DesktopPlayModeController *this,MethodInfo *method)

{
  this_01 = (this->fields).timeAttackFlagDebriefing;
  if (this_01 == (TimeAttackFlagDebriefing *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_isActiveAndEnabled
                    ((Behaviour *)this_01,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pFVar3 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0);
  if (pFVar3 != (FlagDebriefingControl *)0x0) {
    ShowingAdsPopup::ShowingAdsPopup_OnSkip((ShowingAdsPopup *)pFVar3,(MethodInfo *)0x0);
    pIVar4 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager
                        ((MethodInfo *)0x0);
    if (pIVar4 != (ILockCursorManager *)0x0) {
      func_?();
      pIVar5 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
      if (pIVar5 != (IPlayModeUI *)0x0) {
        func_?();
        (this_01->fields).isDebriefingOn = 0;
        (this_01->fields).isWaitingForStart = 0;
        this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)this_01,(MethodInfo *)0x0);
        if (this_03 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_03,0,(MethodInfo *)0x0);
          fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0)
          ;
          this_02 = (this_01->fields).scoreBoardCanvasGroup;
          (this_01->fields).countdownEndTime = fVar6;
          if (this_02 != (CanvasGroup *)0x0) {
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                      (this_02,0.0,(MethodInfo *)0x0);
            pFVar3 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                               ((MethodInfo *)0x0);
            if (pFVar3 != (FlagDebriefingControl *)0x0) {
              FlagDebriefingControl::FlagDebriefingControl_EndFlagCountDown
                        (pFVar3,(MethodInfo *)0x0);
              pGVar7 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                  ((MethodInfo *)0x0);
              if ((pGVar7 != (GameEventManager *)0x0) &&
                 ((pGVar7->fields).AvatarCommandsPlayMode !=
                  (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
                iVar8 = *(int *)(in_stack_9 + 0x14);
                if (iVar8 == 0) {
                  return;
                }
                uStack10 = 0;
                if (*(JumpState_OnWallJumpDelegate **)(iVar8 + 0x2c) !=
                    (JumpState_OnWallJumpDelegate *)0x0) {
                  JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke
                            (*(JumpState_OnWallJumpDelegate **)(iVar8 + 0x2c),(MethodInfo *)0x0);
                }
                this_00 = *(MethodInfo **)(iVar8 + 0x14);
                pcVar1 = *(code **)(iVar8 + 8);
                piVar11 = *(int **)(iVar8 + 0x10);
                method_01 = this_00;
                if (this_00->flags == 0xffff) {
                  func_?();
                }
                cVar12 = func_?();
                if (cVar12 == '\0') {
                  if ((char)this_00->iflags == '\0') {
                    (*pcVar1)();
                    return;
                  }
                }
                else if ((this_00->flags != 0xffff) &&
                        (((piVar11 == (int *)0x0 || ((*(uint *)(*piVar11 + 0xa0) & 0x100) == 0)) &&
                         (*(int *)(iVar8 + 0xc) != 0)))) {
                  cVar12 = func_?();
                  if (cVar12 != '\0') {
                    return;
                  }
                  method_00 = this_00;
                  cVar12 = func_?();
                  mscorlib.dll::System::Collections::Generic::
                  KeyValuePair`2[WinningConditionType,System::Object]::
                  KeyValuePair_2_WinningConditionType_System_Object__get_Value
                            ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_00,method_00
                            );
                  cVar13 = func_?();
                  if (cVar12 == '\0') {
                    if (cVar13 != '\0') {
                      mscorlib.dll::System::Collections::Generic::
                      KeyValuePair`2[WinningConditionType,System::Object]::
                      KeyValuePair_2_WinningConditionType_System_Object__get_Value
                                ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_00,
                                 method_01);
                      func_?();
                      return;
                    }
                    (**(code **)(*piVar11 + 0xc0 + (uint)this_00->flags * 8))();
                    return;
                  }
                  if (cVar13 == '\0') {
                    puVar14 = (undefined4 *)func_?();
                    (*(code *)*puVar14)(piVar11);
                    return;
                  }
                  iStack15 = *piVar11;
                  uVar16 = 0;
                  if (*(ushort *)(iStack15 + 0xb6) != 0) {
                    do {
                      if (*(char **)(*(int *)(iStack15 + 0x58) + (uint)uVar16 * 8) ==
                          this_00->name) goto code_?;
                      uVar16 = uVar16 + 1;
                    } while (uVar16 < *(ushort *)(iStack15 + 0xb6));
                  }
                  func_?();
code_?:
                  puVar14 = (undefined4 *)func_?();
                  (*(code *)*puVar14)(piVar11);
                  return;
                }
                (*pcVar1)(piVar11);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_OnDestroy
               (DesktopPlayModeController *this,MethodInfo *method)

{
  MVGameControllerDesktop::MVGameControllerDesktop_UnregisterPlayModeController((MethodInfo *)0x0);
  return;
}


/* Void OnHideTimeAttackFlagCountDown() */

void Assembly-CSharp.dll::DesktopPlayModeController::
     DesktopPlayModeController_OnHideTimeAttackFlagCountDown
               (DesktopPlayModeController *this,MethodInfo *method)

{
  this_00 = (this->fields).timeAttackFlagDebriefing;
  if (this_00 != (TimeAttackFlagDebriefing *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      this_01 = (this->fields).playerListButton;
      if (this_01 != (RectTransform *)0x0) {
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this_01,(MethodInfo *)0x0);
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnRoundEnd(IWinningCondition) */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_OnRoundEnd
               (DesktopPlayModeController *this,IWinningCondition *winningCondition,
               MethodInfo *method)

{
  pTVar1 = (this->fields).timeAttackFlagDebriefing;
  if (pTVar1 != (TimeAttackFlagDebriefing *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_isActiveAndEnabled
                      ((Behaviour *)pTVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    pTVar1 = (this->fields).timeAttackFlagDebriefing;
    if (pTVar1 != (TimeAttackFlagDebriefing *)0x0) {
      TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_OnRoundEnd(pTVar1,(MethodInfo *)0x0);
      pTVar1 = (this->fields).timeAttackFlagDebriefing;
      if ((pTVar1 != (TimeAttackFlagDebriefing *)0x0) &&
         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pTVar1,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0,(MethodInfo *)0x0);
        this_00 = (this->fields).lobbyStateRect;
        if ((this_00 != (RectTransform *)0x0) &&
           (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)this_00,(MethodInfo *)0x0),
           pGVar3 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,1,(MethodInfo *)0x0);
          this_01 = (this->fields).inGameMenu;
          if ((this_01 != (InGameMenu *)0x0) &&
             (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)this_01,(MethodInfo *)0x0),
             pGVar3 != (GameObject *)0x0)) {
            pcVar4 = pcRam_?;
            if (pcRam_? == (code *)0x0) {
              pcVar4 = (code *)func_?();
              if (pcVar4 == (code *)0x0) {
                puStack5 = (undefined *)0x0;
                puStack6 = (undefined *)0x0;
                puStack7 = (undefined *)func_?();
                func_?();
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            pcRam_? = pcVar4;
            (*pcRam_?)();
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnShowTimeAttackFlagCountDown() */

void Assembly-CSharp.dll::DesktopPlayModeController::
     DesktopPlayModeController_OnShowTimeAttackFlagCountDown
               (DesktopPlayModeController *this,MethodInfo *method)

{
  pTVar1 = (this->fields).timeAttackFlagDebriefing;
  if (pTVar1 != (TimeAttackFlagDebriefing *)0x0) {
    TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_InitializeCountDown(pTVar1,(MethodInfo *)0x0)
    ;
    pTVar1 = (this->fields).timeAttackFlagDebriefing;
    if (pTVar1 != (TimeAttackFlagDebriefing *)0x0) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pTVar1,(MethodInfo *)0x0);
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,1,(MethodInfo *)0x0);
        pRVar3 = (this->fields).lobbyStateRect;
        if (pRVar3 != (RectTransform *)0x0) {
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pRVar3,(MethodInfo *)0x0);
          if (pGVar2 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar2,0,(MethodInfo *)0x0);
            this_00 = (this->fields).inGameMenu;
            if (this_00 != (InGameMenu *)0x0) {
              pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)this_00,(MethodInfo *)0x0);
              if (pGVar2 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar2,0,(MethodInfo *)0x0);
                pRVar3 = (this->fields).playerListButton;
                if (pRVar3 != (RectTransform *)0x0) {
                  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_1_get_gameObject((Component_1 *)pRVar3,(MethodInfo *)0x0);
                  if (pGVar2 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar2,0,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnShowTimeAttackFlagDebriefing(Int32) */

void Assembly-CSharp.dll::DesktopPlayModeController::
     DesktopPlayModeController_OnShowTimeAttackFlagDebriefing
               (DesktopPlayModeController *this,int32_t captureTime,MethodInfo *method)

{
  pTVar1 = (this->fields).timeAttackFlagDebriefing;
  if ((pTVar1 != (TimeAttackFlagDebriefing *)0x0) &&
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pTVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,1,(MethodInfo *)0x0);
    pTVar1 = (this->fields).timeAttackFlagDebriefing;
    if (pTVar1 != (TimeAttackFlagDebriefing *)0x0) {
      TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_Initialize(pTVar1,0,(MethodInfo *)0x0);
      pRVar3 = (this->fields).lobbyStateRect;
      if ((pRVar3 != (RectTransform *)0x0) &&
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pRVar3,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
        this_00 = (this->fields).inGameMenu;
        if ((this_00 != (InGameMenu *)0x0) &&
           (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)this_00,(MethodInfo *)0x0),
           pGVar2 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,0,(MethodInfo *)0x0);
          pRVar3 = (this->fields).playerListButton;
          if ((pRVar3 != (RectTransform *)0x0) &&
             (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)pRVar3,(MethodInfo *)0x0),
             pGVar2 != (GameObject *)0x0)) {
            pcVar4 = pcRam_?;
            if (pcRam_? == (code *)0x0) {
              pcVar4 = (code *)func_?();
              if (pcVar4 == (code *)0x0) {
                puStack5 = (undefined *)0x0;
                puStack6 = (undefined *)0x0;
                func_?();
                func_?();
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            pcRam_? = pcVar4;
            (*pcRam_?)();
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OpenInventoryAtItem(UIPushOption, AccessoryDataClient) */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_OpenInventoryAtItem
               (DesktopPlayModeController *this,UIPushOption__Enum pushOption,
               AccessoryDataClient *displayShopItems,MethodInfo *method)

{
  object = (this->fields).accessoryShopController;
  if (object == (AccessoryShopController *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (object->fields).accessoryDataToShow = displayShopItems;
  (object->fields).pushOption = pushOption;
  if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__AccessoryDataManager);
  }
  pUVar2 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)object,
             MethodInfo__AccessoryShopController__ReadyCallbackAccessoryView__,(MethodInfo *)0x0);
  pUVar3 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar2,(Delegate *)this_00,(MethodInfo *)0x0);
  pUVar2 = (UnityAction *)0x0;
  if (pUVar3 != (UnityAction *)0x0) {
    if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar2 = pUVar3;
    }
    if (pUVar2 == (UnityAction *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar2;
  AccessoryDataManager::AccessoryDataManager_SetReady((MethodInfo *)0x0);
  return;
}


/* Void RegisterHotkeys() */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_RegisterHotkeys
               (DesktopPlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__DesktopPlayModeController___RegisterHotkeys_m__0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
             ,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>__EventFunction_System__Object__void__
            );
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
            );
  return;
}


/* Void Respawn() */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_Respawn
               (DesktopPlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if ((pGVar1 != (GameEventManager *)0x0) &&
     (this_00 = (pGVar1->fields).AvatarCommandsPlayMode,
     this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
    GameEventManager+AvatarCommandsPlayModeManager::
    GameEventManager_AvatarCommandsPlayModeManager_KillSelf(this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetPixelPerfect(Boolean) */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_SetPixelPerfect
               (DesktopPlayModeController *this,bool pixelPerfect,MethodInfo *method)

{
  pCVar1 = (this->fields).canvas;
  if (pCVar1 == (Canvas *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)func_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?,0,0);
    func_?(uVar3);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pCVar1,_pixelPerfect);
  return;
}


/* Void SetUIReady() */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_SetUIReady
               (DesktopPlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).uiStack;
  if (this_00 != (UIStack *)0x0) {
    UIStack::UIStack_SetStackReady(this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    source = MVGameControllerBase::MVGameControllerBase_get_OnFirstFrameUpdateActorReady
                       ((MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,MethodInfo__DesktopPlayModeController__SetUIReady__,
               (MethodInfo *)0x0);
    pDStack1 =
         mscorlib.dll::System::Delegate::Delegate_Remove
                   ((Delegate *)source,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pDStack1 != (Delegate *)0x0) {
      pDVar2 = (Delegate *)0x0;
      if ((Action__Class *)pDStack1->klass == TypeInfo__System__Action) {
        pDVar2 = pDStack1;
      }
      pMStack3 = (MVGameControllerBase__Class *)TypeInfo__System__Action;
      if (pDVar2 == (Delegate *)0x0) goto code_?;
    }
    if (cRam_? == '\0') {
      pMStack3 = (MVGameControllerBase__Class *)_UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      pMStack3 = TypeInfo__MVGameControllerBase;
      func_?();
    }
    pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar4 != (MVGameControllerBase *)0x0) &&
       (pFVar5 = (pMVar4->fields).firstFrameUpdateActorReady,
       pFVar5 != (FirstFrameUpdateActorReady *)0x0)) {
      (pFVar5->fields).callbacks = in_stack_6;
      return;
    }
    pMStack3 = (MVGameControllerBase__Class *)0x0;
    func_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  func_?();
  pDStack1 = extraout_ECX;
  pMStack3 = (MVGameControllerBase__Class *)extraout_EDX;
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ShowEUseIcon(ShowUseOption, Int32) */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_ShowEUseIcon
               (DesktopPlayModeController *this,ShowUseOption__Enum option,int32_t woID,
               MethodInfo *method)

{
  pDVar1 = (this->fields).inGameController;
  if ((pDVar1 != (DesktopInGameGUIController *)0x0) &&
     (pSVar2 = (pDVar1->fields).use, pSVar2 != (ShowUse *)0x0)) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)pSVar2,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,1,(MethodInfo *)0x0);
      pSVar2 = (pDVar1->fields).use;
      if (pSVar2 != (ShowUse *)0x0) {
        (*(code *)(pSVar2->klass->vtable).__unknown.method)();
        return;
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ToggleHD() */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_ToggleHD
               (DesktopPlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVQualitySettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVQualitySettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVQualitySettings);
  }
  iVar1 = MVQualitySettings::MVQualitySettings_get_CurrentLevel((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVQualitySettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVQualitySettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVQualitySettings);
  }
  MVQualitySettings::MVQualitySettings_set_CurrentLevel((uint)(iVar1 == 0),(MethodInfo *)0x0);
  return;
}


/* Void ToggleLogicVisibility() */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_ToggleLogicVisibility
               (DesktopPlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  this_01 = (MVBuildModeAvatarLocal_EditMode *)
            MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_01 != (MVBuildModeAvatarLocal_EditMode *)0x0) {
    bVar1 = MVBuildModeAvatarLocal+EditMode::MVBuildModeAvatarLocal_EditMode_get_MovementConstrained
                      (this_01,(MethodInfo *)0x0);
    if (this_00 != (MainCameraManager *)0x0) {
      MainCameraManager::MainCameraManager_set_IsLogicRendered(this_00,bVar1 == 0,(MethodInfo *)0x0)
      ;
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_Update
               (DesktopPlayModeController *this,MethodInfo *method)

{
  ModeControllerBase::ModeControllerBase_HandleFpsShortcut
            ((ModeControllerBase *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                    (KogamaControls__Enum_LobbyMenu,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (*(int *)(in_stack_2 + 0x14) == 0) goto code_?;
    func_?(3,TypeInfo__ILockCursorManager);
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                    (KogamaControls__Enum_ToggleHD,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (*(UIStack **)(in_stack_2 + 0x18) == (UIStack *)0x0) goto code_?;
    bVar1 = UIStack::UIStack_IsStackEmpty(*(UIStack **)(in_stack_2 + 0x18),(MethodInfo *)0x0)
    ;
    if (bVar1 != 0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVQualitySettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVQualitySettings->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVQualitySettings);
      }
      iVar3 = MVQualitySettings::MVQualitySettings_get_CurrentLevel((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVQualitySettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVQualitySettings->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVQualitySettings);
      }
      MVQualitySettings::MVQualitySettings_set_CurrentLevel((uint)(iVar3 == 0),(MethodInfo *)0x0);
    }
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar4 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
  if (pIVar4 != (IEditModeUI *)0x0) {
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                      (KogamaControls__Enum_ToggleLogicRendering,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      this_01 = (MVBuildModeAvatarLocal_EditMode *)
                MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((this_01 != (MVBuildModeAvatarLocal_EditMode *)0x0) &&
         (bVar1 = MVBuildModeAvatarLocal+EditMode::
                  MVBuildModeAvatarLocal_EditMode_get_MovementConstrained(this_01,(MethodInfo *)0x0)
         , this_00 != (MainCameraManager *)0x0)) {
        MainCameraManager::MainCameraManager_set_IsLogicRendered
                  (this_00,bVar1 == 0,(MethodInfo *)0x0);
        return;
      }
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}


/* Void <Initialize>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController__Initialize_m__1
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,handler,0xc);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <RegisterHotkeys>m__0(IShortcutKeyRegister, BaseEventData) */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController__RegisterHotkeys_m__0
               (DesktopPlayModeController *this,IShortcutKeyRegister *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,MethodInfo__DesktopPlayModeController__Respawn__,
             (MethodInfo *)0x0);
  if (x != (IShortcutKeyRegister *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister,x,0x10);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* GameObject get_InGameUIRoot() */

GameObject *
Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_get_InGameUIRoot
          (DesktopPlayModeController *this,MethodInfo *method)

{
  pDVar1 = (this->fields).inGameController;
  if (pDVar1 == (DesktopInGameGUIController *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    pGVar3 = (GameObject *)(*pcVar2)();
    return pGVar3;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)func_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?,0,0);
    func_?(uVar4);
    pcVar2 = (code *)swi(3);
    pGVar3 = (GameObject *)(*pcVar2)();
    return pGVar3;
  }
  pcRam_? = pcVar2;
  pGVar3 = (GameObject *)(*pcRam_?)(pDVar1);
  return pGVar3;
}


/* Boolean get_InLobbyState() */

bool Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_get_InLobbyState
               (DesktopPlayModeController *this,MethodInfo *method)

{
  pLVar1 = (this->fields).lobbyStatePlayModeController;
  if (pLVar1 != (LobbyStatePlayModeController *)0x0) {
    return (pLVar1->fields).isInLobbyState;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void set_InLobbyState(Boolean) */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_set_InLobbyState
               (DesktopPlayModeController *this,bool value,MethodInfo *method)

{
  this_00 = (this->fields).lobbyStatePlayModeController;
  if (this_00 != (LobbyStatePlayModeController *)0x0) {
    (this_00->fields).wantsToEnterPlayState = value ^ 1;
    LobbyStatePlayModeController::LobbyStatePlayModeController_Update(this_00,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

