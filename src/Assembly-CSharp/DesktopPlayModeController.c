
/* Void Activate(ActivateUIElement) */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_Activate
               (DesktopPlayModeController *this,ActivateUIElement__Enum element,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    BoostMenuController_MethodInfo__UnityEngine__Object__Instantiate<BoostMenuController>_BoostMenuController_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (element == ActivateUIElement__Enum_AvatarAccessoryShop) {
    pAVar1 = (this->fields).accessoryShopController;
    if (pAVar1 != (AccessoryShopController *)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__AccessoryDataManager,unaff_EBP);
        func_?(&MethodInfo__AccessoryShopController__ReadyCallback__);
        func_?(&TypeInfo__UnityEngine__Events__UnityAction);
        cRam_? = '\x01';
      }
      (pAVar1->fields).pushOption = 2;
      pUVar2 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)
                func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)pAVar1,MethodInfo__AccessoryShopController__ReadyCallback__,
                 (MethodInfo *)0x0);
      pUStack3 =
           (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar2,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pUStack3 != (UnityAction *)0x0) {
        pUVar2 = (UnityAction *)0x0;
        if (pUStack3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pUVar2 = pUStack3;
        }
        if (pUVar2 == (UnityAction *)0x0) {
          pUStack4 = TypeInfo__UnityEngine__Events__UnityAction;
          func_?();
          pUStack3 = extraout_ECX;
          pUStack4 = extraout_EDX;
        }
        else {
          TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar2;
          pUVar2 = (UnityAction *)0x0;
          if (pUStack3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
            pUVar2 = pUStack3;
          }
          pUStack4 = TypeInfo__UnityEngine__Events__UnityAction;
          if (pUVar2 != (UnityAction *)0x0) goto code_?;
        }
        func_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      TypeInfo__AccessoryDataManager->static_fields->readyCallback = (UnityAction *)0x0;
      pUVar2 = (UnityAction *)0x0;
code_?:
      pUStack3 = (UnityAction *)TypeInfo__AccessoryDataManager->static_fields;
      pUStack4 = (UnityAction__Class *)pUVar2;
      func_?();
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
    pBVar6 = (this->fields).boosterMenu;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pBVar6 = (BoostMenuController *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pBVar6,
                        BoostMenuController_MethodInfo__UnityEngine__Object__Instantiate<BoostMenuController>_BoostMenuController_
                       );
    if (pBVar6 != (BoostMenuController *)0x0) {
      BoostMenuController::BoostMenuController_Initialize(pBVar6,(MethodInfo *)0x0);
      this_00 = (this->fields).uiStack;
      gameObject = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pBVar6,(MethodInfo *)0x0);
      if (this_00 != (UIStack *)0x0) {
        UIStack::UIStack_Push
                  (this_00,gameObject,UIPushOption__Enum_InvisibleBlocker,(UnityAction *)0x0,
                   UIGroupFlags__Enum_GameObjectUI,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ActivateAdminButton(Boolean) */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_ActivateAdminButton
               (DesktopPlayModeController *this,bool active,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).adminGameMgmtButton;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pRVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  pRVar1 = (this->fields).adminGameMgmtButton;
  if (active == 0) {
    if ((pRVar1 != (RectTransform *)0x0) &&
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar1,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0)) {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      (*pcRam_?)();
      return;
    }
  }
  else if (pRVar1 != (RectTransform *)0x0) {
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pRVar1,(MethodInfo *)0x0);
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((this_00 != (MVNetworkGame *)0x0) &&
        (this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
        this_01 != (MVLocalPlayer *)0x0)) &&
       (bVar2 = MVLocalPlayer::MVLocalPlayer_get_IsAdmin(this_01,(MethodInfo *)0x0),
       pGVar3 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,bVar2,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_Awake
               (DesktopPlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__DesktopPlayModeController__SetUIReady__);
    func_?(&
                    LockCursorManager3DMode_MethodInfo__UnityEngine__GameObject__AddComponent<LockCursorManager3DMode>__
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).uiStack;
  if (this_00 != (UIStack *)0x0) {
    UIStack::UIStack_Push
              (this_00,(this->fields).stackBottom,UIPushOption__Enum_None,(UnityAction *)0x0,
               UIGroupFlags__Enum_StackBottom,(MethodInfo *)0x0);
    DesktopPlayModeController_CreateGUI(this,(MethodInfo *)0x0);
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      pIVar1 = (ILockCursorManager *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                         (this_01,
                          LockCursorManager3DMode_MethodInfo__UnityEngine__GameObject__AddComponent<LockCursorManager3DMode>__
                         );
      (this->fields).lockCursorManager = pIVar1;
      func_?();
      return;
    }
  }
  func_?();
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CreateGUI() */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_CreateGUI
               (DesktopPlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    ChatControllerUGUI_MethodInfo__UnityEngine__Object__Instantiate<ChatControllerUGUI>_ChatControllerUGUI__UnityEngine__Transform__bool_
                   );
    func_?(&
                    DesktopInGameGUIController_MethodInfo__UnityEngine__Object__Instantiate<DesktopInGameGUIController>_DesktopInGameGUIController__UnityEngine__Transform__bool_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&
                    UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).stackBottom;
  pCVar2 = (this->fields).chatController;
  if (pGVar1 != (GameObject *)0x0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pCVar2 = (ChatControllerUGUI *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                       ((Object *)pCVar2,pTVar3,0,
                        ChatControllerUGUI_MethodInfo__UnityEngine__Object__Instantiate<ChatControllerUGUI>_ChatControllerUGUI__UnityEngine__Transform__bool_
                       );
    (this->fields).chatController = pCVar2;
    func_?(&(this->fields).chatController,pCVar2);
    pCVar2 = (this->fields).chatController;
    if (pCVar2 != (ChatControllerUGUI *)0x0) {
      ChatControllerUGUI::ChatControllerUGUI_SubscribeToMessages(pCVar2,(MethodInfo *)0x0);
      pGVar1 = (GameObject *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)(this->fields).fullscreenPlayModeStateTransform,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                         );
      (this->fields).playModeState = pGVar1;
      func_?(&(this->fields).playModeState,pGVar1);
      this_00 = (this->fields).uiStack;
      if (this_00 != (UIStack *)0x0) {
        UIStack::UIStack_Push
                  (this_00,(this->fields).playModeState,UIPushOption__Enum_None,(UnityAction *)0x0,
                   UIGroupFlags__Enum_MainUI,(MethodInfo *)0x0);
        pGVar1 = (this->fields).playModeState;
        pDVar4 = (this->fields).inGameController;
        if (pGVar1 != (GameObject *)0x0) {
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar1,(MethodInfo *)0x0);
          pDVar4 = (DesktopInGameGUIController *)
                   UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                             ((Object *)pDVar4,pTVar3,0,
                              DesktopInGameGUIController_MethodInfo__UnityEngine__Object__Instantiate<DesktopInGameGUIController>_DesktopInGameGUIController__UnityEngine__Transform__bool_
                             );
          (this->fields).inGameController = pDVar4;
          func_?(&(this->fields).inGameController,pDVar4);
          pDVar4 = (this->fields).inGameController;
          if (pDVar4 != (DesktopInGameGUIController *)0x0) {
            DesktopInGameGUIController::DesktopInGameGUIController_Initialize
                      (pDVar4,(MethodInfo *)0x0);
            pGVar1 = (this->fields).playModeState;
            pRVar5 = (this->fields).playerListButton;
            if (pGVar1 != (GameObject *)0x0) {
              pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (pGVar1,(MethodInfo *)0x0);
              pRVar5 = (RectTransform *)
                       UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                                 ((Object *)pRVar5,pTVar3,0,
                                  UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform__UnityEngine__Transform__bool_
                                 );
              (this->fields).playerListButton = pRVar5;
              func_?(&(this->fields).playerListButton,pRVar5);
              bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                ((Object_1 *)(this->fields).adminGameMgmtButton,(Object_1 *)0x0,
                                 (MethodInfo *)0x0);
              if (bVar6 != 0) {
                pGVar1 = (this->fields).playModeState;
                pRVar5 = (this->fields).adminGameMgmtButton;
                if (pGVar1 == (GameObject *)0x0) goto code_?;
                pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(pGVar1,(MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Object);
                }
                pRVar5 = (RectTransform *)
                         UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                                   ((Object *)pRVar5,pTVar3,0,
                                    UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform__UnityEngine__Transform__bool_
                                   );
                (this->fields).adminGameMgmtButton = pRVar5;
                func_?(&(this->fields).adminGameMgmtButton,pRVar5);
              }
              pGVar1 = (this->fields).stackBottom;
              pRVar5 = (this->fields).notificationsManager;
              if (pGVar1 != (GameObject *)0x0) {
                pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(pGVar1,(MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Object);
                }
                pRVar5 = (RectTransform *)
                         UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                                   ((Object *)pRVar5,pTVar3,0,
                                    UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform__UnityEngine__Transform__bool_
                                   );
                (this->fields).notificationsManager = pRVar5;
                func_?(&(this->fields).notificationsManager,pRVar5);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
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
  puStack_1 = &stack0xfffffffc;
  pDVar2 = (this->fields).inGameController;
  if (pDVar2 != (DesktopInGameGUIController *)0x0) {
    return (IGUICrossHair *)(pDVar2->fields).crossHair;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pIVar6 = (IGUICrossHair *)(*pcVar5)();
  return pIVar6;
}


/* Void HandleInput() */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_HandleInput
               (DesktopPlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ILockCursorManager);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__NotificationController);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                    (KogamaControls__Enum_LobbyMenu,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pIVar2 = (this->fields).lockCursorManager;
    if (pIVar2 == (ILockCursorManager *)0x0) goto code_?;
    func_?(3,TypeInfo__ILockCursorManager,pIVar2,0);
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                    (KogamaControls__Enum_Deprecated_ToggleHD,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    this_00 = (this->fields).uiStack;
    if (this_00 == (UIStack *)0x0) goto code_?;
    bVar1 = UIStack::UIStack_IsStackEmpty(this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__NotificationController);
      }
      NotificationController::NotificationController_ToggleHDIsDeprecated((MethodInfo *)0x0);
    }
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
      (IEditModeUI *)0x0) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                      (KogamaControls__Enum_ToggleLogicRendering,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((pMVar3 == (MainCameraManager *)0x0) || (this_01 == (MainCameraManager *)0x0)) {
code_?:
        func_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      MainCameraManager::MainCameraManager_set_IsLogicRendered
                (this_01,(pMVar3->fields).isLogicRendered == 0,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void HideEUseIcon() */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_HideEUseIcon
               (DesktopPlayModeController *this,MethodInfo *method)

{
  pDVar1 = (this->fields).inGameController;
  if (((pDVar1 != (DesktopInGameGUIController *)0x0) &&
      (this_00 = (pDVar1->fields).use, this_00 != (ShowUse *)0x0)) &&
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0), this_01 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_01,0,(MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&stack0xfffffff8);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_Initialize
               (DesktopPlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<IWinningCondition>);
    func_?(&TypeInfo__System__Action<int>);
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__ChatCommandManager);
    func_?(&MethodInfo__DesktopPlayModeController__HideUI__);
    func_?(&MethodInfo__DesktopPlayModeController__OnHideTimeAttackFlagCountDown__);
    func_?(&MethodInfo__DesktopPlayModeController__OnRoundEnd_IWinningCondition_);
    func_?(&MethodInfo__DesktopPlayModeController__OnShowTimeAttackFlagCountDown__);
    func_?(&MethodInfo__DesktopPlayModeController__OnShowTimeAttackFlagDebriefing_int_);
    func_?(&TypeInfo__DesktopPlayMode);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&
                    ChatBubbleController_MethodInfo__UnityEngine__Object__Instantiate<ChatBubbleController>_ChatBubbleController__UnityEngine__Transform__bool_
                   );
    func_?(&
                    InGameMenu_MethodInfo__UnityEngine__Object__Instantiate<InGameMenu>_InGameMenu__UnityEngine__Transform__bool_
                   );
    func_?(&
                    UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform__UnityEngine__Transform__bool_
                   );
    func_?(&
                    TimeAttackFlagDebriefing_MethodInfo__UnityEngine__Object__Instantiate<TimeAttackFlagDebriefing>_TimeAttackFlagDebriefing__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__DesktopPlayModeController____c___Initialize_b__36_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__DesktopPlayModeController____c);
    cRam_? = '\x01';
  }
  ModeControllerBase::ModeControllerBase_Initialize((ModeControllerBase *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
      (IEditModeUI *)0x0) {
    this_04 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (this_04 != (MainCameraManager *)0x0) {
      MainCameraManager::MainCameraManager_set_CamMaskMode
                (this_04,MaskMode__Enum_AvatarLobbyFocus,(MethodInfo *)0x0);
      goto code_?;
    }
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
code_?:
    pCVar1 = (this->fields).chatBubbleController;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pCVar1 = (ChatBubbleController *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                       ((Object *)pCVar1,pTVar2,0,
                        ChatBubbleController_MethodInfo__UnityEngine__Object__Instantiate<ChatBubbleController>_ChatBubbleController__UnityEngine__Transform__bool_
                       );
    (this->fields).chatBubbleController = pCVar1;
    func_?(&(this->fields).chatBubbleController,pCVar1);
    pGVar3 = (this->fields).playModeState;
    pRVar4 = (this->fields).lobbyState;
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar3,(MethodInfo *)0x0);
    pRVar4 = (RectTransform *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                       ((Object *)pRVar4,pTVar2,0,
                        UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform__UnityEngine__Transform__bool_
                       );
    (this->fields).lobbyStateRect = pRVar4;
    func_?(&(this->fields).lobbyStateRect,pRVar4);
    pGVar3 = (this->fields).playModeState;
    pIVar5 = (this->fields).inGameMenuPrefab;
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar3,(MethodInfo *)0x0);
    pIVar5 = (InGameMenu *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                       ((Object *)pIVar5,pTVar2,0,
                        InGameMenu_MethodInfo__UnityEngine__Object__Instantiate<InGameMenu>_InGameMenu__UnityEngine__Transform__bool_
                       );
    (this->fields).inGameMenu = pIVar5;
    func_?(&(this->fields).inGameMenu,pIVar5);
    pIVar5 = (this->fields).inGameMenu;
    if (pIVar5 == (InGameMenu *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pIVar5,(MethodInfo *)0x0);
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,0,(MethodInfo *)0x0);
    pIVar5 = (this->fields).inGameMenu;
    if (pIVar5 == (InGameMenu *)0x0) goto code_?;
    InGameMenu::InGameMenu_Initialize(pIVar5,(MethodInfo *)0x0);
    pGVar3 = (this->fields).playModeState;
    pTVar6 = (this->fields).timeAttackFlagDebriefing;
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar3,(MethodInfo *)0x0);
    pTVar6 = (TimeAttackFlagDebriefing *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                       ((Object *)pTVar6,pTVar2,0,
                        TimeAttackFlagDebriefing_MethodInfo__UnityEngine__Object__Instantiate<TimeAttackFlagDebriefing>_TimeAttackFlagDebriefing__UnityEngine__Transform__bool_
                       );
    (this->fields).timeAttackFlagDebriefing = pTVar6;
    func_?(&(this->fields).timeAttackFlagDebriefing,pTVar6);
    pFVar7 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0)
    ;
    if (pFVar7 == (FlagDebriefingControl *)0x0) goto code_?;
    pAVar8 = (pFVar7->fields).OnFlagDebriefing;
    this_05 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_05,(Object *)this,
               MethodInfo__DesktopPlayModeController__OnShowTimeAttackFlagDebriefing_int_,
               (MethodInfo *)0x0);
    pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar8,(Delegate *)this_05,(MethodInfo *)0x0);
    if (pDVar9 != (Delegate *)0x0) {
      pAVar8 = (Action_1_Int32_ *)func_?();
      if (pAVar8 != (Action_1_Int32_ *)0x0) {
        (pFVar7->fields).OnFlagDebriefing = pAVar8;
        iVar10 = func_?();
        if (iVar10 != 0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
    (pFVar7->fields).OnFlagDebriefing = (Action_1_Int32_ *)0x0;
code_?:
    func_?();
    pFVar7 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0)
    ;
    if (pFVar7 == (FlagDebriefingControl *)0x0) goto code_?;
    pAVar11 = (pFVar7->fields).OnFlagCountDown;
    pNVar12 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar12,(Object *)this,
               MethodInfo__DesktopPlayModeController__OnShowTimeAttackFlagCountDown__,
               (MethodInfo *)0x0);
    pAVar11 = (Action *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar11,(Delegate *)pNVar12,(MethodInfo *)0x0);
    if (pAVar11 == (Action *)0x0) {
      (pFVar7->fields).OnFlagCountDown = (Action *)0x0;
code_?:
      func_?();
      pFVar7 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                         ((MethodInfo *)0x0);
      if (pFVar7 == (FlagDebriefingControl *)0x0) goto code_?;
      pAVar11 = (pFVar7->fields).OnFlagCountDownEnd;
      pNVar12 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar12,(Object *)this,
                 MethodInfo__DesktopPlayModeController__OnHideTimeAttackFlagCountDown__,
                 (MethodInfo *)0x0);
      pAVar11 = (Action *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar11,(Delegate *)pNVar12,(MethodInfo *)0x0);
      if (pAVar11 == (Action *)0x0) {
        (pFVar7->fields).OnFlagCountDownEnd = (Action *)0x0;
      }
      else {
        pAVar13 = (Action *)0x0;
        if (pAVar11->klass == TypeInfo__System__Action) {
          pAVar13 = pAVar11;
        }
        if (pAVar13 == (Action *)0x0) goto code_?;
        (pFVar7->fields).OnFlagCountDownEnd = pAVar13;
        pAVar13 = (Action *)0x0;
        if (pAVar11->klass == TypeInfo__System__Action) {
          pAVar13 = pAVar11;
        }
        if (pAVar13 == (Action *)0x0) goto code_?;
      }
      func_?();
      pMVar14 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar14 == (MVNetworkGame *)0x0) goto code_?;
      pAVar15 = (pMVar14->fields).OnWinningConditionFulfilled;
      this_06 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)func_?(TypeInfo__System__Action<IWinningCondition>);
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_06,(Object *)this,
                 MethodInfo__DesktopPlayModeController__OnRoundEnd_IWinningCondition_,
                 (MethodInfo *)0x0);
      pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar15,(Delegate *)this_06,(MethodInfo *)0x0);
      if (pDVar9 == (Delegate *)0x0) {
        (pMVar14->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
      }
      else {
        pAVar15 = (Action_1_IWinningCondition_ *)func_?();
        if (pAVar15 == (Action_1_IWinningCondition_ *)0x0) goto code_?;
        (pMVar14->fields).OnWinningConditionFulfilled = pAVar15;
        iVar10 = func_?();
        if (iVar10 == 0) goto code_?;
      }
      func_?();
      this_00 = (this->fields).goldPurchasedTracker;
      if (this_00 == (GoldPurchasedTracker *)0x0) goto code_?;
      GoldPurchasedTracker::GoldPurchasedTracker_Initialize(this_00,(MethodInfo *)0x0);
      this_01 = (this->fields).deathPromotionController;
      if (this_01 == (DeathPromotionController *)0x0) goto code_?;
      DeathPromotionController::DeathPromotionController_Initialize(this_01,(MethodInfo *)0x0);
      this_07 = (DesktopPlayMode *)func_?(TypeInfo__DesktopPlayMode);
      DesktopPlayMode::DesktopPlayMode__ctor(this_07,(MethodInfo *)0x0);
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      TypeInfo__MVInputWrapper->static_fields->inputMap = (IKogamaInputMap *)this_07;
      func_?();
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      pGVar16 = pGVar3;
      if ((TypeInfo__DesktopPlayModeController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__DesktopPlayModeController____c);
      }
      callbackFunction = TypeInfo__DesktopPlayModeController____c->static_fields->__9__36_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        pGVar3 = pGVar16;
        if ((TypeInfo__DesktopPlayModeController____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__DesktopPlayModeController____c);
          pGVar3 = pGVar16;
        }
        object = TypeInfo__DesktopPlayModeController____c->static_fields->__9;
        callbackFunction =
             (ExecuteEvents_EventFunction_1_IUIStack_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__DesktopPlayModeController____c___Initialize_b__36_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__DesktopPlayModeController____c->static_fields->__9__36_0 = callbackFunction;
        func_?(&TypeInfo__DesktopPlayModeController____c->static_fields->__9__36_0,
                        callbackFunction);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar3,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      MVar17 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      if (MVar17 == MVGameMode__Enum_Play) {
        (this->fields)._._IsInLobby_k__BackingField = 1;
        (*(code *)(this->klass->vtable).set_IsInPauseMenu_1.method)
                  (this,1,(this->klass->vtable).Initialize.methodPtr);
      }
      this_02 = (this->fields).lobbyStatePlayModeController;
      if (this_02 == (LobbyStatePlayModeController *)0x0) goto code_?;
      LobbyStatePlayModeController::LobbyStatePlayModeController_Initialize
                (this_02,(this->fields).inGameController,(this->fields).lobbyStateRect,
                 (this->fields).inGameMenu,(this->fields).chatController,(MethodInfo *)0x0);
      this_03 = (this->fields).chatController;
      if (this_03 == (ChatControllerUGUI *)0x0) goto code_?;
      ChatControllerUGUI::ChatControllerUGUI_Initialize(this_03,(MethodInfo *)0x0);
      pRVar4 = (this->fields).playerListButton;
      if (pRVar4 == (RectTransform *)0x0) goto code_?;
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pRVar4,(MethodInfo *)0x0);
      if (pGVar3 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,1,(MethodInfo *)0x0);
      DesktopPlayModeController_ActivateAdminButton(this,1,(MethodInfo *)0x0);
      if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pAVar11 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                          (ChatCommand__Enum_HideAllUI,(MethodInfo *)0x0);
      pNVar12 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar12,(Object *)this,MethodInfo__DesktopPlayModeController__HideUI__,
                 (MethodInfo *)0x0);
      pAVar13 = (Action *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar11,(Delegate *)pNVar12,(MethodInfo *)0x0);
      pAVar11 = (Action *)0x0;
      if (pAVar13 == (Action *)0x0) {
code_?:
        ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
                  (ChatCommand__Enum_HideAllUI,pAVar11,(MethodInfo *)0x0);
        return;
      }
      if (pAVar13->klass == TypeInfo__System__Action) {
        pAVar11 = pAVar13;
      }
      if (pAVar11 != (Action *)0x0) goto code_?;
      goto code_?;
    }
    pAVar13 = (Action *)0x0;
    if (pAVar11->klass == TypeInfo__System__Action) {
      pAVar13 = pAVar11;
    }
    if (pAVar13 == (Action *)0x0) goto code_?;
    (pFVar7->fields).OnFlagCountDown = pAVar13;
    pAVar13 = (Action *)0x0;
    if (pAVar11->klass == TypeInfo__System__Action) {
      pAVar13 = pAVar11;
    }
    if (pAVar13 != (Action *)0x0) goto code_?;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void LeaveEditPlayMode() */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_LeaveEditPlayMode
               (DesktopPlayModeController *this,MethodInfo *method)

{
  bVar1 = ModeControllerBase::ModeControllerBase_CannotLeaveEditPlayMode
                    ((ModeControllerBase *)this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    TypeInfo__MVGameControllerBase->static_fields->_LeavingEditPlayMode_k__BackingField = 1;
    this_00 = (this->fields).timeAttackFlagDebriefing;
    if (this_00 == (TimeAttackFlagDebriefing *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_EndDebriefingEarly(this_00,(MethodInfo *)0x0)
    ;
    if ((this->fields).OnLeaveEditPlayMode != (UnityAction *)0x0) {
      (*(((this->fields).OnLeaveEditPlayMode)->fields)._._.invoke_impl)();
    }
  }
  return;
}


/* Void LeavePlayMode() */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_LeavePlayMode
               (DesktopPlayModeController *this,MethodInfo *method)

{
  this_00 = (this->fields).timeAttackFlagDebriefing;
  if (this_00 != (TimeAttackFlagDebriefing *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_isActiveAndEnabled
                      ((Behaviour *)this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0)
    ;
    if (pFVar2 != (FlagDebriefingControl *)0x0) {
      if ((pFVar2->fields).OnFlagDebriefingEnd != (Action *)0x0) {
        (*(((pFVar2->fields).OnFlagDebriefingEnd)->fields)._._.invoke_impl)();
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
          (IPlayModeUI *)0x0) {
        func_?();
        (this_00->fields).isDebriefingOn = 0;
        (this_00->fields).isWaitingForStart = 0;
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0);
        if (this_02 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_02,0,(MethodInfo *)0x0);
          fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
          this_01 = (this_00->fields).scoreBoardCanvasGroup;
          (this_00->fields).countdownEndTime = fVar3;
          if (this_01 != (CanvasGroup *)0x0) {
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                      (this_01,0.0,(MethodInfo *)0x0);
            pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                               ((MethodInfo *)0x0);
            if (pFVar2 != (FlagDebriefingControl *)0x0) {
              fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                ((MethodInfo *)0x0);
              (pFVar2->fields).IsInFlagDebriefing = 0;
              (pFVar2->fields).RunStartTime = fVar3;
              if ((pFVar2->fields).OnFlagCountDownEnd != (Action *)0x0) {
                (*(((pFVar2->fields).OnFlagCountDownEnd)->fields)._._.invoke_impl)();
              }
              pGVar4 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                 ((MethodInfo *)0x0);
              if ((pGVar4 != (GameEventManager *)0x0) &&
                 ((pGVar4->fields).AvatarCommandsPlayMode !=
                  (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
                if (*(int *)(in_stack_5 + 0x14) != 0) {
                  (**(code **)(*(int *)(in_stack_5 + 0x14) + 0xc))();
                }
                return;
              }
            }
          }
        }
      }
    }
  }
  uVar6 = func_?(&stack0xfffffff4);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnHideTimeAttackFlagCountDown() */

void Assembly-CSharp.dll::DesktopPlayModeController::
     DesktopPlayModeController_OnHideTimeAttackFlagCountDown
               (DesktopPlayModeController *this,MethodInfo *method)

{
  this_00 = (this->fields).timeAttackFlagDebriefing;
  if (this_00 != (TimeAttackFlagDebriefing *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      this_01 = (this->fields).playerListButton;
      if (this_01 != (RectTransform *)0x0) {
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_01,(MethodInfo *)0x0);
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,1,(MethodInfo *)0x0);
          DesktopPlayModeController_ActivateAdminButton(this,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
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
      if (pTVar1 != (TimeAttackFlagDebriefing *)0x0) {
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pTVar1,(MethodInfo *)0x0);
        if (pGVar3 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,0,(MethodInfo *)0x0);
          this_00 = (this->fields).lobbyStateRect;
          if (this_00 != (RectTransform *)0x0) {
            pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this_00,(MethodInfo *)0x0);
            if (pGVar3 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar3,1,(MethodInfo *)0x0);
              this_01 = (this->fields).inGameMenu;
              if (this_01 != (InGameMenu *)0x0) {
                pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)this_01,(MethodInfo *)0x0);
                if (pGVar3 != (GameObject *)0x0) {
                  if (pcRam_? == (code *)0x0) {
                    pcRam_? = (code *)func_?();
                  }
                  (*pcRam_?)();
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
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
    if ((pTVar1 != (TimeAttackFlagDebriefing *)0x0) &&
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pTVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,1,(MethodInfo *)0x0);
      pRVar3 = (this->fields).lobbyStateRect;
      if ((pRVar3 != (RectTransform *)0x0) &&
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pRVar3,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
        this_00 = (this->fields).inGameMenu;
        if ((this_00 != (InGameMenu *)0x0) &&
           (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this_00,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0
           )) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,0,(MethodInfo *)0x0);
          pRVar3 = (this->fields).playerListButton;
          if ((pRVar3 != (RectTransform *)0x0) &&
             (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pRVar3,(MethodInfo *)0x0),
             pGVar2 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar2,0,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pRVar3 = (this->fields).adminGameMgmtButton;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                              ((Object_1 *)pRVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar4 != 0) {
              return;
            }
            pRVar3 = (this->fields).adminGameMgmtButton;
            if ((pRVar3 != (RectTransform *)0x0) &&
               (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pRVar3,(MethodInfo *)0x0),
               pGVar2 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar2,0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnShowTimeAttackFlagDebriefing(Int32) */

void Assembly-CSharp.dll::DesktopPlayModeController::
     DesktopPlayModeController_OnShowTimeAttackFlagDebriefing
               (DesktopPlayModeController *this,int32_t captureTime,MethodInfo *method)

{
  pTVar1 = (this->fields).timeAttackFlagDebriefing;
  if (pTVar1 != (TimeAttackFlagDebriefing *)0x0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pTVar1,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,1,(MethodInfo *)0x0);
      pTVar1 = (this->fields).timeAttackFlagDebriefing;
      if (pTVar1 != (TimeAttackFlagDebriefing *)0x0) {
        TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_Initialize(pTVar1,0,(MethodInfo *)0x0);
        pRVar3 = (this->fields).lobbyStateRect;
        if (pRVar3 != (RectTransform *)0x0) {
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pRVar3,(MethodInfo *)0x0);
          if (pGVar2 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar2,0,(MethodInfo *)0x0);
            this_00 = (this->fields).inGameMenu;
            if (this_00 != (InGameMenu *)0x0) {
              pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this_00,(MethodInfo *)0x0);
              if (pGVar2 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar2,0,(MethodInfo *)0x0);
                pRVar3 = (this->fields).playerListButton;
                if (pRVar3 != (RectTransform *)0x0) {
                  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)pRVar3,(MethodInfo *)0x0);
                  if (pGVar2 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar2,0,(MethodInfo *)0x0);
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                    }
                    pRVar3 = (this->fields).adminGameMgmtButton;
                    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__UnityEngine__Object);
                    }
                    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                                      ((Object_1 *)pRVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
                    if (bVar4 != 0) {
                      return;
                    }
                    pRVar3 = (this->fields).adminGameMgmtButton;
                    if (pRVar3 != (RectTransform *)0x0) {
                      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_get_gameObject((Component *)pRVar3,(MethodInfo *)0x0);
                      if (pGVar2 != (GameObject *)0x0) {
                        if (pcRam_? == (code *)0x0) {
                          pcRam_? = (code *)func_?();
                        }
                        (*pcRam_?)(0);
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
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OpenInventoryAtItem(UIPushOption, AccessoryDataClient) */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_OpenInventoryAtItem
               (DesktopPlayModeController *this,UIPushOption__Enum pushOption,
               AccessoryDataClient *displayShopItems,MethodInfo *method)

{
  object = (this->fields).accessoryShopController;
  if (object == (AccessoryShopController *)0x0) {
    uVar1 = func_?(&stack0xfffffff0);
    func_?(uVar1);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  (object->fields).accessoryDataToShow = displayShopItems;
  func_?(&(object->fields).accessoryDataToShow,displayShopItems);
  (object->fields).pushOption = pushOption;
  pUVar3 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)object,
             MethodInfo__AccessoryShopController__ReadyCallbackAccessoryView__,(MethodInfo *)0x0);
  pUVar3 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar3,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pUVar3 == (UnityAction *)0x0) {
    TypeInfo__AccessoryDataManager->static_fields->readyCallback = (UnityAction *)0x0;
    pUVar4 = (UnityAction *)0x0;
code_?:
    pUStack5 = (UnityAction__Class *)pUVar4;
    func_?();
    AccessoryDataManager::AccessoryDataManager_SetReady((MethodInfo *)0x0);
    return;
  }
  pUVar4 = (UnityAction *)0x0;
  if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
    pUVar4 = pUVar3;
  }
  if (pUVar4 == (UnityAction *)0x0) {
    pUStack5 = TypeInfo__UnityEngine__Events__UnityAction;
    func_?();
    pUStack5 = extraout_EDX;
  }
  else {
    TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar4;
    pUVar4 = (UnityAction *)0x0;
    if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar4 = pUVar3;
    }
    pUStack5 = TypeInfo__UnityEngine__Events__UnityAction;
    if (pUVar4 != (UnityAction *)0x0) goto code_?;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RegisterHotkeys() */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_RegisterHotkeys
               (DesktopPlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__DesktopPlayModeController___RegisterHotkeys_b__34_0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  callbackFunction =
       (ExecuteEvents_EventFunction_1_System_Object_ *)
       func_?(
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>
                      );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
             MethodInfo__DesktopPlayModeController___RegisterHotkeys_b__34_0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
            );
  return;
}


/* Void SetPixelPerfect(Boolean) */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_SetPixelPerfect
               (DesktopPlayModeController *this,bool pixelPerfect,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pCVar2 = (this->fields).canvas;
  if (pCVar2 != (Canvas *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    puStack_1 = (undefined1 *)_pixelPerfect;
    pCStack_3 = pCVar2;
    (*pcRam_?)();
    return;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetUIReady() */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_SetUIReady
               (DesktopPlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).uiStack;
  if (this_00 != (UIStack *)0x0) {
    UIStack::UIStack_SetStackReady(this_00,(MethodInfo *)0x0);
    source = MVGameControllerBase::MVGameControllerBase_get_OnFirstFrameUpdateActorReady
                       ((MethodInfo *)0x0);
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__DesktopPlayModeController__SetUIReady__,
               (MethodInfo *)0x0);
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pDVar1 != (Delegate *)0x0) {
      pDVar2 = (Delegate *)0x0;
      if ((Action__Class *)pDVar1->klass == TypeInfo__System__Action) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        pDStack_3 = pDVar1;
        func_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar5 != (MVGameControllerBase *)0x0) &&
       (pFVar6 = (pMVar5->fields).firstFrameUpdateActorReady,
       pFVar6 != (FirstFrameUpdateActorReady *)0x0)) {
      (pFVar6->fields).callbacks = unaff_ESI;
      func_?();
      return;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ShowEUseIcon(ShowUseOption, Int32) */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_ShowEUseIcon
               (DesktopPlayModeController *this,ShowUseOption__Enum option,int32_t woID,
               MethodInfo *method)

{
  pDVar1 = (this->fields).inGameController;
  if (((pDVar1 != (DesktopInGameGUIController *)0x0) &&
      (pSVar2 = (pDVar1->fields).use, pSVar2 != (ShowUse *)0x0)) &&
     (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pSVar2,(MethodInfo *)0x0), this_00 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,1,(MethodInfo *)0x0);
    pSVar2 = (pDVar1->fields).use;
    if (pSVar2 != (ShowUse *)0x0) {
      (*(code *)(pSVar2->klass->vtable).__unknown.method)();
      return;
    }
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ToggleLogicVisibility() */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_ToggleLogicVisibility
               (DesktopPlayModeController *this,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar1 != (MainCameraManager *)0x0) && (this_00 != (MainCameraManager *)0x0)) {
    MainCameraManager::MainCameraManager_set_IsLogicRendered
              (this_00,(pMVar1->fields).isLogicRendered == 0,(MethodInfo *)0x0);
    return;
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
    func_?(&TypeInfo__ILockCursorManager);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__NotificationController);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                    (KogamaControls__Enum_LobbyMenu,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((this->fields).lockCursorManager == (ILockCursorManager *)0x0) goto code_?;
    func_?(3,TypeInfo__ILockCursorManager);
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                    (KogamaControls__Enum_Deprecated_ToggleHD,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    this_00 = (this->fields).uiStack;
    if (this_00 == (UIStack *)0x0) goto code_?;
    bVar1 = UIStack::UIStack_IsStackEmpty(this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__NotificationController);
      }
      NotificationController::NotificationController_ToggleHDIsDeprecated((MethodInfo *)0x0);
    }
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
      (IEditModeUI *)0x0) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                      (KogamaControls__Enum_ToggleLogicRendering,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((pMVar2 == (MainCameraManager *)0x0) || (this_01 == (MainCameraManager *)0x0)) {
code_?:
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      MainCameraManager::MainCameraManager_set_IsLogicRendered
                (this_01,(pMVar2->fields).isLogicRendered == 0,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void <RegisterHotkeys>b__34_0(IShortcutKeyRegister, BaseEventData) */

void Assembly-CSharp.dll::DesktopPlayModeController::
     DesktopPlayModeController__RegisterHotkeys_b__34_0
               (DesktopPlayModeController *this,IShortcutKeyRegister *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__DesktopPlayModeController__Respawn__);
    func_?(&TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__DesktopPlayModeController__Respawn__,
             (MethodInfo *)0x0);
  if (x == (IShortcutKeyRegister *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar2 = x->klass;
  uVar3 = 0;
  uVar4._0_1_ = (pIVar2->_1).rank;
  uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister) {
        ppMVar5 = &(&x->klass->vtable)[x->klass->interfaceOffsets[uVar3].offset].RegisterShortcutKey
                   .method;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  ppMVar5 = (MethodInfo **)
            func_?(x,TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister,0);
code_?:
  (*(code *)*ppMVar5)(x,0x10,1,ppMVar5[1]);
  return;
}


/* GameObject get_InGameUIRoot() */

GameObject *
Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_get_InGameUIRoot
          (DesktopPlayModeController *this,MethodInfo *method)

{
  pDStack_1 = (DesktopInGameGUIController *)&stack0xfffffffc;
  pDVar2 = (this->fields).inGameController;
  if (pDVar2 != (DesktopInGameGUIController *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    pDStack_1 = pDVar2;
    pGVar3 = (GameObject *)(*pcRam_?)();
    return pGVar3;
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  pGVar3 = (GameObject *)(*pcVar6)();
  return pGVar3;
}


/* Boolean get_IsInPauseMenu() */

bool Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_get_IsInPauseMenu
               (DesktopPlayModeController *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pLVar2 = (this->fields).lobbyStatePlayModeController;
  if (pLVar2 != (LobbyStatePlayModeController *)0x0) {
    return (pLVar2->fields).isInLobbyState;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void set_IsInPauseMenu(Boolean) */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_set_IsInPauseMenu
               (DesktopPlayModeController *this,bool value,MethodInfo *method)

{
  this_00 = (this->fields).lobbyStatePlayModeController;
  if (this_00 != (LobbyStatePlayModeController *)0x0) {
    (this_00->fields).wantsToEnterPlayState = value ^ 1;
    LobbyStatePlayModeController::LobbyStatePlayModeController_Update(this_00,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&puStack_2);
  func_?(uVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

