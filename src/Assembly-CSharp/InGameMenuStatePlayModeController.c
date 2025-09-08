
/* Void ActivateInGameMenuState() */

void Assembly-CSharp.dll::InGameMenuStatePlayModeController::
     InGameMenuStatePlayModeController_ActivateInGameMenuState
               (InGameMenuStatePlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IPlayModeUI);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).lobbyMenu;
  if (this_00 != (RectTransform *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pIVar2 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
    if (pIVar2 != (IPlayModeUI *)0x0) {
      value = func_?(9,TypeInfo__IPlayModeUI,pIVar2);
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,value,(MethodInfo *)0x0);
        this_01 = (this->fields).inGameMenu;
        if (this_01 != (InGameMenu *)0x0) {
          pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_01,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__MVGameControllerBase);
            cRam_? = '\x01';
          }
          pIVar2 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
          if (pIVar2 != (IPlayModeUI *)0x0) {
            bVar3 = func_?(9,TypeInfo__IPlayModeUI,pIVar2);
            if (pGVar1 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar1,bVar3 ^ 1,(MethodInfo *)0x0);
              this_02 = (this->fields).inGameController;
              if (this_02 != (DesktopInGameGUIController *)0x0) {
                pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)this_02,(MethodInfo *)0x0);
                if (pGVar1 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar1,0,(MethodInfo *)0x0);
                  this_03 = (this->fields).chatController;
                  if (this_03 != (ChatControllerUGUI *)0x0) {
                    ChatControllerUGUI::ChatControllerUGUI_OnInGameMenuStateChange
                              (this_03,0,(MethodInfo *)0x0);
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
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void DeactivateInGameMenuState() */

void Assembly-CSharp.dll::InGameMenuStatePlayModeController::
     InGameMenuStatePlayModeController_DeactivateInGameMenuState
               (InGameMenuStatePlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IPlayModeUI);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).lobbyMenu;
  if (this_00 != (RectTransform *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      this_01 = (this->fields).inGameMenu;
      if (this_01 != (InGameMenu *)0x0) {
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_01,(MethodInfo *)0x0);
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,0,(MethodInfo *)0x0);
          this_02 = (this->fields).inGameController;
          if (this_02 != (DesktopInGameGUIController *)0x0) {
            pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this_02,(MethodInfo *)0x0);
            if (pGVar1 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar1,1,(MethodInfo *)0x0);
              this_03 = (this->fields).chatController;
              if (this_03 != (ChatControllerUGUI *)0x0) {
                ChatControllerUGUI::ChatControllerUGUI_OnInGameMenuStateChange
                          (this_03,1,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  ppMStack2 = &TypeInfo__MVGameControllerBase;
                  func_?();
                  cRam_? = '\x01';
                }
                if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
                    (IPlayModeUI *)0x0) {
                  ppMStack2 = (MVGameControllerBase__Class **)0x0;
                  pIStack3 = TypeInfo__IPlayModeUI;
                  func_?();
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


/* Void DisableLobbyState() */

void Assembly-CSharp.dll::InGameMenuStatePlayModeController::
     InGameMenuStatePlayModeController_DisableLobbyState
               (InGameMenuStatePlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IPlayModeUI);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pIVar1 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
  if (pIVar1 != (IPlayModeUI *)0x0) {
    func_?(10,TypeInfo__IPlayModeUI,pIVar1,0);
    pRVar2 = (this->fields).lobbyMenu;
    if ((pRVar2 != (RectTransform *)0x0) &&
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar2,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0)) {
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar3,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        return;
      }
      pRVar2 = (this->fields).lobbyMenu;
      if ((pRVar2 != (RectTransform *)0x0) &&
         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pRVar2,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0,(MethodInfo *)0x0);
        this_00 = (this->fields).inGameMenu;
        if ((this_00 != (InGameMenu *)0x0) &&
           (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this_00,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0
           )) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void EnableLobbyState() */

void Assembly-CSharp.dll::InGameMenuStatePlayModeController::
     InGameMenuStatePlayModeController_EnableLobbyState
               (InGameMenuStatePlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).lobbyMenu;
  if (this_00 != (RectTransform *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (this_01,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField ==
            (IPlayModeUI *)0x0) goto code_?;
        pIStack_2 = TypeInfo__IPlayModeUI;
        func_?(10);
      }
      return;
    }
  }
code_?:
  uVar3 = func_?(&pIStack_2);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize(DesktopInGameGUIController, RectTransform, InGameMenu, ChatControllerUGUI) */

void Assembly-CSharp.dll::InGameMenuStatePlayModeController::
     InGameMenuStatePlayModeController_Initialize
               (InGameMenuStatePlayModeController *this,DesktopInGameGUIController *inGameController
               ,RectTransform *lobbyMenuTransform,InGameMenu *inGameMenu,
               ChatControllerUGUI *chatController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__IPlayModeUI);
    func_?(&MethodInfo__InGameMenuStatePlayModeController__DisableLobbyState__);
    func_?(&MethodInfo__InGameMenuStatePlayModeController__EnableLobbyState__);
    func_?(&MethodInfo__InGameMenuStatePlayModeController__UpdateInGameMenuState_bool_);
    cRam_? = '\x01';
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (pGVar1 == (GameEventManager *)0x0) {
code_?:
    func_?();
  }
  else {
    pGVar2 = (pGVar1->fields).GameState;
    if (pGVar2 == (GameEventManager_GameStateManager *)0x0) goto code_?;
    pAVar3 = (pGVar2->fields).OnEnableLobbyState;
    pNVar4 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar4,(Object *)this,
               MethodInfo__InGameMenuStatePlayModeController__EnableLobbyState__,(MethodInfo *)0x0);
    pAVar3 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar3,(Delegate *)pNVar4,(MethodInfo *)0x0);
    if (pAVar3 == (Action *)0x0) {
      (pGVar2->fields).OnEnableLobbyState = (Action *)0x0;
    }
    else {
      pAVar5 = (Action *)0x0;
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAVar5 = pAVar3;
      }
      if (pAVar5 == (Action *)0x0) goto code_?;
      (pGVar2->fields).OnEnableLobbyState = pAVar5;
      pAVar5 = (Action *)0x0;
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAVar5 = pAVar3;
      }
      if (pAVar5 == (Action *)0x0) goto code_?;
    }
    func_?();
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if ((pGVar1 == (GameEventManager *)0x0) ||
       (pGVar6 = (pGVar1->fields).GameState, pGVar6 == (GameEventManager_GameStateManager *)0x0))
    goto code_?;
    pAVar3 = (pGVar6->fields).OnDisableLobbyState;
    pNVar4 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar4,(Object *)&pGVar2->fields,
               MethodInfo__InGameMenuStatePlayModeController__DisableLobbyState__,(MethodInfo *)0x0)
    ;
    pAVar3 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar3,(Delegate *)pNVar4,(MethodInfo *)0x0);
    if (pAVar3 == (Action *)0x0) {
      (pGVar6->fields).OnDisableLobbyState = (Action *)0x0;
    }
    else {
      pAVar5 = (Action *)0x0;
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAVar5 = pAVar3;
      }
      if (pAVar5 == (Action *)0x0) goto code_?;
      (pGVar6->fields).OnDisableLobbyState = pAVar5;
      pAVar5 = (Action *)0x0;
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAVar5 = pAVar3;
      }
      if (pAVar5 == (Action *)0x0) goto code_?;
    }
    func_?();
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pIVar7 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
    if (pIVar7 == (IPlayModeUI *)0x0) goto code_?;
    pIVar8 = pIVar7->klass;
    uVar9 = 0;
    uVar10._0_1_ = (pIVar8->_1).rank;
    uVar10._1_1_ = (pIVar8->_1).minimumAlignment;
    if (uVar10 != 0) {
      do {
        if (pIVar8->interfaceOffsets[uVar9].interfaceType == (Il2CppClass *)TypeInfo__IPlayModeUI)
        {
          ppMVar11 = &(&(pIVar7->klass->vtable).get_IsPausedStateChange)
                      [pIVar7->klass->interfaceOffsets[uVar9].offset].method;
          goto code_?;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar10);
    }
    ppMVar11 = (MethodInfo **)func_?(pIVar7,TypeInfo__IPlayModeUI,3);
code_?:
    pDVar12 = (Delegate *)(*(code *)*ppMVar11)(pIVar7,ppMVar11[1]);
    this_00 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<bool>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)&(pGVar6->fields).OnDisableLobbyState,
               MethodInfo__InGameMenuStatePlayModeController__UpdateInGameMenuState_bool_,
               (MethodInfo *)0x0);
    pDVar12 = mscorlib.dll::System::Delegate::Delegate_Combine
                        (pDVar12,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar12 == (Delegate *)0x0) {
      this_01 = (InGameMenuStatePlayModeController *)0x0;
code_?:
      pIVar8 = pIVar7->klass;
      uVar10 = 0;
      uVar9._0_1_ = (pIVar8->_1).rank;
      uVar9._1_1_ = (pIVar8->_1).minimumAlignment;
      if (uVar9 != 0) {
        do {
          if (pIVar8->interfaceOffsets[uVar10].interfaceType == (Il2CppClass *)TypeInfo__IPlayModeUI
             ) {
            ppMVar11 = &(&(pIVar7->klass->vtable).set_IsPausedStateChange)
                        [pIVar7->klass->interfaceOffsets[uVar10].offset].method;
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar9);
      }
      ppMVar11 = (MethodInfo **)func_?();
code_?:
      pDVar13 = (DesktopInGameGUIController *)ppMVar11[1];
      (*(code *)*ppMVar11)();
      (this_01->fields).inGameController = pDVar13;
      func_?(&(this_01->fields).inGameController,pDVar13);
      (this_01->fields).lobbyMenu = lobbyMenuTransform;
      func_?(&(this_01->fields).lobbyMenu,lobbyMenuTransform);
      (this_01->fields).inGameMenu = inGameMenu;
      func_?(&(this_01->fields).inGameMenu,inGameMenu);
      (this_01->fields).chatController = chatController;
      func_?(&(this_01->fields).chatController,chatController);
      InGameMenuStatePlayModeController_SetObjectToInGameMenuState
                (this_01,(this_01->fields).isInMenu,(MethodInfo *)0x0);
      return;
    }
    this_01 = (InGameMenuStatePlayModeController *)func_?();
    if (this_01 != (InGameMenuStatePlayModeController *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void SetObjectToInGameMenuState(Boolean) */

void Assembly-CSharp.dll::InGameMenuStatePlayModeController::
     InGameMenuStatePlayModeController_SetObjectToInGameMenuState
               (InGameMenuStatePlayModeController *this,bool isInMenu,MethodInfo *method)

{
  (this->fields).isInMenu = isInMenu;
  if (isInMenu == 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__IPlayModeUI);
      cRam_? = '\x01';
    }
    pRVar1 = (this->fields).lobbyMenu;
    if ((pRVar1 != (RectTransform *)0x0) &&
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
      pIVar3 = (this->fields).inGameMenu;
      if ((pIVar3 != (InGameMenu *)0x0) &&
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pIVar3,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
        pDVar4 = (this->fields).inGameController;
        if ((pDVar4 != (DesktopInGameGUIController *)0x0) &&
           (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pDVar4,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)
           ) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,1,(MethodInfo *)0x0);
          pCVar5 = (this->fields).chatController;
          if (pCVar5 != (ChatControllerUGUI *)0x0) {
            ChatControllerUGUI::ChatControllerUGUI_OnInGameMenuStateChange
                      (pCVar5,1,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pIVar6 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
            if (pIVar6 != (IPlayModeUI *)0x0) {
              func_?(10,TypeInfo__IPlayModeUI,pIVar6,0);
              return;
            }
          }
        }
      }
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__IPlayModeUI);
      cRam_? = '\x01';
    }
    pRVar1 = (this->fields).lobbyMenu;
    if (pRVar1 != (RectTransform *)0x0) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pRVar1,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      pIVar6 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
      if ((pIVar6 != (IPlayModeUI *)0x0) &&
         (bVar7 = func_?(9,TypeInfo__IPlayModeUI,pIVar6), pGVar2 != (GameObject *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,bVar7,(MethodInfo *)0x0);
        pIVar3 = (this->fields).inGameMenu;
        if (pIVar3 != (InGameMenu *)0x0) {
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pIVar3,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__MVGameControllerBase);
            cRam_? = '\x01';
          }
          pIVar6 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
          if ((pIVar6 != (IPlayModeUI *)0x0) &&
             (bVar8 = func_?(9,TypeInfo__IPlayModeUI,pIVar6), pGVar2 != (GameObject *)0x0))
          {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar2,bVar8 ^ 1,(MethodInfo *)0x0);
            pDVar4 = (this->fields).inGameController;
            if ((pDVar4 != (DesktopInGameGUIController *)0x0) &&
               (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pDVar4,(MethodInfo *)0x0),
               pGVar2 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar2,0,(MethodInfo *)0x0);
              pCVar5 = (this->fields).chatController;
              if (pCVar5 != (ChatControllerUGUI *)0x0) {
                (pCVar5->fields).currentlyInLobbyState = 1;
                ChatControllerUGUI::ChatControllerUGUI_UpdateFadeTime(pCVar5,(MethodInfo *)0x0);
                (pCVar5->fields).shouldUpdateFade = 0;
                ChatControllerUGUI::ChatControllerUGUI_ChatFocusChanged(pCVar5,0,(MethodInfo *)0x0);
                this_01 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer
                                    ((MethodInfo *)0x0);
                if (this_01 != (MVLocalPlayer *)0x0) {
                  bVar7 = MVLocalPlayer::MVLocalPlayer_get_IsChatLocked(this_01,(MethodInfo *)0x0);
                  pRVar1 = (pCVar5->fields)._._InputAreaRoot_k__BackingField;
                  if ((pRVar1 != (RectTransform *)0x0) &&
                     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_get_gameObject((Component *)pRVar1,(MethodInfo *)0x0),
                     pGVar2 != (GameObject *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar2,bVar7 == 0,(MethodInfo *)0x0);
                    pRVar1 = (pCVar5->fields).inputAreaDeactivated;
                    if ((pRVar1 != (RectTransform *)0x0) &&
                       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_get_gameObject((Component *)pRVar1,(MethodInfo *)0x0),
                       pGVar2 != (GameObject *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar2,bVar7 != 0,(MethodInfo *)0x0);
                      this_00 = (pCVar5->fields)._._ScrollRect_k__BackingField;
                      if (this_00 != (ScrollRect *)0x0) {
                        UnityEngine.UI.dll::UnityEngine::UI::ScrollRect::
                        ScrollRect_SetVerticalNormalizedPosition(this_00,0.0,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
                func_?();
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void UpdateInGameMenuState(Boolean) */

void Assembly-CSharp.dll::InGameMenuStatePlayModeController::
     InGameMenuStatePlayModeController_UpdateInGameMenuState
               (InGameMenuStatePlayModeController *this,bool isEnteringMenu,MethodInfo *method)

{
  bVar1 = (this->fields).isInMenu;
  if (isEnteringMenu == 0) {
    if (bVar1 != 0) {
      InGameMenuStatePlayModeController_SetObjectToInGameMenuState(this,0,(MethodInfo *)0x0);
      pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                         ((MethodInfo *)0x0);
      if ((pSVar2 != (SpawnRoleDataMediator *)0x0) &&
         (this_00 = (pSVar2->fields).SpawnRoleModeTypeWrapper,
         this_00 != (SpawnRoleModeTypeWrapper *)0x0)) {
        bVar1 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                          (this_00,SpawnRoleModeType__Enum_Hidden,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          return;
        }
        pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        if ((pGVar3 != (GameEventManager *)0x0) &&
           (this_01 = (pGVar3->fields).AvatarCommandsPlayMode,
           this_01 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
          GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd__RegisterAdEvents_m__9
                    ((RewardedAd *)this_01,(MethodInfo *)0x0);
          return;
        }
      }
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (bVar1 == 0) {
    MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(0,0,(MethodInfo *)0x0);
    InGameMenuStatePlayModeController_SetObjectToInGameMenuState(this,1,(MethodInfo *)0x0);
  }
  return;
}


/* InGameMenuStatePlayModeController() */

void Assembly-CSharp.dll::InGameMenuStatePlayModeController::InGameMenuStatePlayModeController__ctor
               (InGameMenuStatePlayModeController *this,MethodInfo *method)

{
  (this->fields).isInMenu = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

