
/* Void ActivateLobbyState() */

void Assembly-CSharp.dll::LobbyStatePlayModeController::
     LobbyStatePlayModeController_ActivateLobbyState
               (LobbyStatePlayModeController *this,MethodInfo *method)

{
  this_00 = (this->fields).lobbyState;
  if (this_00 != (RectTransform *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,(this->fields).shouldOpenLobbyMenu,(MethodInfo *)0x0);
      this_01 = (this->fields).inGameMenu;
      if (this_01 != (InGameMenu *)0x0) {
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this_01,(MethodInfo *)0x0);
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,(this->fields).shouldOpenLobbyMenu == 0,(MethodInfo *)0x0);
          this_02 = (this->fields).inGameController;
          if (this_02 != (DesktopInGameGUIController *)0x0) {
            pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)this_02,(MethodInfo *)0x0);
            if (pGVar1 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar1,0,(MethodInfo *)0x0);
              this_03 = (this->fields).chatController;
              if (this_03 != (ChatControllerUGUI *)0x0) {
                ChatControllerUGUI::ChatControllerUGUI_OnLobbyStateChange
                          (this_03,0,(MethodInfo *)0x0);
                (this->fields).shouldOpenLobbyMenu = 0;
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void DeactivateLobbyState() */

void Assembly-CSharp.dll::LobbyStatePlayModeController::
     LobbyStatePlayModeController_DeactivateLobbyState
               (LobbyStatePlayModeController *this,MethodInfo *method)

{
  this_00 = (this->fields).lobbyState;
  if (this_00 != (RectTransform *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      this_01 = (this->fields).inGameMenu;
      if (this_01 != (InGameMenu *)0x0) {
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this_01,(MethodInfo *)0x0);
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,0,(MethodInfo *)0x0);
          this_02 = (this->fields).inGameController;
          if (this_02 != (DesktopInGameGUIController *)0x0) {
            pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)this_02,(MethodInfo *)0x0);
            if (pGVar1 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar1,1,(MethodInfo *)0x0);
              this_03 = (this->fields).chatController;
              if (this_03 != (ChatControllerUGUI *)0x0) {
                ChatControllerUGUI::ChatControllerUGUI_OnLobbyStateChange
                          (this_03,1,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void DisableLobbyState() */

void Assembly-CSharp.dll::LobbyStatePlayModeController::
     LobbyStatePlayModeController_DisableLobbyState
               (LobbyStatePlayModeController *this,MethodInfo *method)

{
  pRVar1 = (this->fields).lobbyState;
  (this->fields).shouldOpenLobbyMenu = 0;
  if ((pRVar1 != (RectTransform *)0x0) &&
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pRVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar2,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
    pRVar1 = (this->fields).lobbyState;
    if ((pRVar1 != (RectTransform *)0x0) &&
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pRVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
      this_00 = (this->fields).inGameMenu;
      if ((this_00 != (InGameMenu *)0x0) &&
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this_00,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0
         )) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void EnableLobbyState() */

void Assembly-CSharp.dll::LobbyStatePlayModeController::
     LobbyStatePlayModeController_EnableLobbyState
               (LobbyStatePlayModeController *this,MethodInfo *method)

{
  this_00 = (this->fields).lobbyState;
  if (this_00 != (RectTransform *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (this_01,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        (this->fields).shouldOpenLobbyMenu = 1;
      }
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize(DesktopInGameGUIController, RectTransform, InGameMenu, ChatControllerUGUI) */

void Assembly-CSharp.dll::LobbyStatePlayModeController::LobbyStatePlayModeController_Initialize
               (LobbyStatePlayModeController *this,DesktopInGameGUIController *inGameController,
               RectTransform *lobbyState,InGameMenu *inGameMenu,ChatControllerUGUI *chatController,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager((MethodInfo *)0x0)
  ;
  if (pIVar1 == (ILockCursorManager *)0x0) {
code_?:
    func_?(0);
    pAVar2 = extraout_ECX;
    pAVar3 = extraout_EDX;
  }
  else {
    pIVar4 = pIVar1->klass;
    uVar5 = 0;
    uVar6._0_1_ = (pIVar4->_1).rank;
    uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
    pIVar7 = pIVar1;
    if (uVar6 != 0) {
      do {
        if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
            (Il2CppClass *)TypeInfo__ILockCursorManager) {
          ppMVar8 = &(&(pIVar1->klass->vtable).get_OnCursorLockChanged)
                     [pIVar4->interfaceOffsets[uVar5].offset].method;
          goto code_?;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar6);
    }
    ppMVar8 = (MethodInfo **)func_?(pIVar1,TypeInfo__ILockCursorManager,0);
code_?:
    pDVar9 = (Delegate *)(*(code *)*ppMVar8)(pIVar1,ppMVar8[1]);
    pUVar10 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__Action<bool>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar10,(Object *)this,
               MethodInfo__LobbyStatePlayModeController__OnCursorLockChanged_bool_,
               MethodInfo__System__Action<bool>__Action_System__Object__void__);
    pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                       (pDVar9,(Delegate *)pUVar10,(MethodInfo *)0x0);
    pDVar9 = (Delegate *)0x0;
    if (pDVar11 != (Delegate *)0x0) {
      if ((Action_1_Boolean___Class *)pDVar11->klass == TypeInfo__System__Action<bool>) {
        pDVar9 = pDVar11;
      }
      pAVar12 = TypeInfo__System__Action<bool>;
      if (pDVar9 == (Delegate *)0x0) goto code_?;
    }
    uVar6 = 0;
    pIVar4 = pIVar7->klass;
    uVar5._0_1_ = (pIVar4->_1).rank;
    uVar5._1_1_ = (pIVar4->_1).minimumAlignment;
    if (uVar5 != 0) {
      do {
        if (pIVar4->interfaceOffsets[uVar6].interfaceType ==
            (Il2CppClass *)TypeInfo__ILockCursorManager) {
          ppMVar8 = &(&(pIVar7->klass->vtable).set_OnCursorLockChanged)
                     [pIVar7->klass->interfaceOffsets[uVar6].offset].method;
          goto code_?;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar5);
    }
    ppMVar8 = (MethodInfo **)func_?(pIVar7,TypeInfo__ILockCursorManager,1);
code_?:
    (*(code *)*ppMVar8)(pIVar7,pDVar9,ppMVar8[1]);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pGVar13 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (pGVar13 == (GameEventManager *)0x0) goto code_?;
    pGVar14 = (pGVar13->fields).GameState;
    if (pGVar14 == (GameEventManager_GameStateManager *)0x0) goto code_?;
    pAVar15 = (pGVar14->fields).OnEnableLobbyState;
    pUVar10 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar10,(Object *)this,MethodInfo__LobbyStatePlayModeController__EnableLobbyState__,
               (MethodInfo *)0x0);
    pAVar2 = (Action *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar15,(Delegate *)pUVar10,(MethodInfo *)0x0);
    pAVar15 = (Action *)0x0;
    if (pAVar2 == (Action *)0x0) {
code_?:
      (pGVar14->fields).OnEnableLobbyState = pAVar15;
      pGVar13 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (pGVar13 != (GameEventManager *)0x0) {
        pGVar14 = (pGVar13->fields).GameState;
        if (pGVar14 != (GameEventManager_GameStateManager *)0x0) {
          pAVar15 = (pGVar14->fields).OnDisableLobbyState;
          pUVar10 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__System__Action);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar10,(Object *)this,
                     MethodInfo__LobbyStatePlayModeController__DisableLobbyState__,(MethodInfo *)0x0
                    );
          pAVar2 = (Action *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pAVar15,(Delegate *)pUVar10,(MethodInfo *)0x0);
          pAVar15 = (Action *)0x0;
          if (pAVar2 == (Action *)0x0) {
code_?:
            (pGVar14->fields).OnDisableLobbyState = pAVar15;
            (this->fields).inGameController = inGameController;
            (this->fields).lobbyState = lobbyState;
            (this->fields).inGameMenu = inGameMenu;
            (this->fields).chatController = chatController;
            LobbyStatePlayModeController_SetObjectToLobbyState
                      (this,(this->fields).isInLobbyState,(MethodInfo *)0x0);
            (this->fields).shouldOpenLobbyMenu = 0;
            return;
          }
          if (pAVar2->klass == TypeInfo__System__Action) {
            pAVar15 = pAVar2;
          }
          pAVar3 = TypeInfo__System__Action;
          if (pAVar15 != (Action *)0x0) goto code_?;
          goto code_?;
        }
      }
      goto code_?;
    }
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar15 = pAVar2;
    }
    pAVar3 = TypeInfo__System__Action;
    if (pAVar15 != (Action *)0x0) goto code_?;
  }
code_?:
  pDVar11 = (Delegate *)func_?(pAVar2,pAVar3);
  pAVar12 = extraout_ECX_00;
code_?:
  func_?(pDVar11,pAVar12);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void OnCursorLockChanged(Boolean) */

void Assembly-CSharp.dll::LobbyStatePlayModeController::
     LobbyStatePlayModeController_OnCursorLockChanged
               (LobbyStatePlayModeController *this,bool cursorLocked,MethodInfo *method)

{
  (this->fields).wantsToEnterPlayState = cursorLocked;
  return;
}


/* Void SetObjectToLobbyState(Boolean) */

void Assembly-CSharp.dll::LobbyStatePlayModeController::
     LobbyStatePlayModeController_SetObjectToLobbyState
               (LobbyStatePlayModeController *this,bool isInLobbyState,MethodInfo *method)

{
  pRVar1 = (this->fields).lobbyState;
  (this->fields).isInLobbyState = isInLobbyState;
  if (isInLobbyState == 0) {
    if (pRVar1 != (RectTransform *)0x0) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pRVar1,(MethodInfo *)0x0);
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
        pIVar3 = (this->fields).inGameMenu;
        if (pIVar3 != (InGameMenu *)0x0) {
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pIVar3,(MethodInfo *)0x0);
          if (pGVar2 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar2,0,(MethodInfo *)0x0);
            pDVar4 = (this->fields).inGameController;
            if (pDVar4 != (DesktopInGameGUIController *)0x0) {
              pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)pDVar4,(MethodInfo *)0x0);
              if (pGVar2 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar2,1,(MethodInfo *)0x0);
                if ((this->fields).chatController != (ChatControllerUGUI *)0x0) {
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  bVar5 = in_stack_6 ^ 1;
                  (in_stack_7->fields).currentlyInLobbyState = bVar5;
                  ChatControllerUGUI::ChatControllerUGUI_UpdateFadeTime
                            (in_stack_7,(MethodInfo *)0x0);
                  (in_stack_7->fields).shouldUpdateFade = in_stack_6;
                  ChatControllerUGUI::ChatControllerUGUI_ChatFocusChanged
                            (in_stack_7,0,(MethodInfo *)0x0);
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    func_?();
                  }
                  bVar8 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession
                                    ((MethodInfo *)0x0);
                  if (bVar8 != 0) {
                    bVar5 = 0;
                  }
                  pRVar1 = (in_stack_7->fields).inputAreaRoot;
                  if (pRVar1 != (RectTransform *)0x0) {
                    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_1_get_gameObject((Component_1 *)pRVar1,(MethodInfo *)0x0);
                    if (pGVar2 != (GameObject *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar2,0,(MethodInfo *)0x0);
                      pRVar1 = (in_stack_7->fields).inputAreaDeactivated;
                      if (pRVar1 != (RectTransform *)0x0) {
                        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_1_get_gameObject((Component_1 *)pRVar1,(MethodInfo *)0x0)
                        ;
                        if (pGVar2 != (GameObject *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (pGVar2,bVar5 ^ 1,(MethodInfo *)0x0);
                          this_01 = (in_stack_7->fields).scrollRect;
                          if (this_01 != (ScrollRect *)0x0) {
                            UnityEngine.UI.dll::UnityEngine::UI::ScrollRect::
                            ScrollRect_SetVerticalNormalizedPosition(this_01,0.0,(MethodInfo *)0x0);
                            return;
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
              }
            }
          }
        }
      }
    }
  }
  else if (pRVar1 != (RectTransform *)0x0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pRVar1,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,(this->fields).shouldOpenLobbyMenu,(MethodInfo *)0x0);
      pIVar3 = (this->fields).inGameMenu;
      if (pIVar3 != (InGameMenu *)0x0) {
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pIVar3,(MethodInfo *)0x0);
        if (pGVar2 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,(this->fields).shouldOpenLobbyMenu == 0,(MethodInfo *)0x0);
          pDVar4 = (this->fields).inGameController;
          if (pDVar4 != (DesktopInGameGUIController *)0x0) {
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)pDVar4,(MethodInfo *)0x0);
            if (pGVar2 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar2,0,(MethodInfo *)0x0);
              this_00 = (this->fields).chatController;
              if (this_00 != (ChatControllerUGUI *)0x0) {
                ChatControllerUGUI::ChatControllerUGUI_OnLobbyStateChange
                          (this_00,0,(MethodInfo *)0x0);
                (this->fields).shouldOpenLobbyMenu = 0;
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::LobbyStatePlayModeController::LobbyStatePlayModeController_Update
               (LobbyStatePlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = (this->fields).isInLobbyState;
  if ((this->fields).wantsToEnterPlayState == 0) {
    if (bVar1 == 0) {
      pIVar2 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager
                         ((MethodInfo *)0x0);
      if (pIVar2 == (ILockCursorManager *)0x0) goto code_?;
      func_?(3,TypeInfo__ILockCursorManager,pIVar2,0);
      LobbyStatePlayModeController_SetObjectToLobbyState(this,1,(MethodInfo *)0x0);
    }
  }
  else if (bVar1 != 0) {
    LobbyStatePlayModeController_SetObjectToLobbyState(this,0,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar3 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    if ((pSVar3 == (SpawnRoleDataMediator *)0x0) ||
       (this_00 = (pSVar3->fields).SpawnRoleModeTypeWrapper,
       this_00 == (SpawnRoleModeTypeWrapper *)0x0)) goto code_?;
    bVar1 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                      (this_00,SpawnRoleModeType__Enum_Hidden,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pGVar4 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar4 == (GameEventManager *)0x0) ||
         (pSVar3 = (SpawnRoleDataMediator *)(pGVar4->fields).AvatarCommandsPlayMode,
         pSVar3 == (SpawnRoleDataMediator *)0x0)) goto code_?;
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator::
      SpawnRoleDataMediator_SpawnRoleDataReceiverOnOnSuicide(pSVar3,(MethodInfo *)0x0);
    }
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pSVar3 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar3 != (SpawnRoleDataMediator *)0x0) {
    a = (SpawnRoleVariable_1_LastRespawnType_ *)
        System.Core.dll::System::Linq::Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::
        Json::Schema::JsonSchemaType]::
        Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                  ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                    *)pSVar3,(MethodInfo *)0x0);
    bVar1 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
            SpawnRoleVariable`1[LastRespawnType]::SpawnRoleVariable_1_LastRespawnType__op_Equality_1
                      (a,LastRespawnType__Enum_Revive,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__op_Equality_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__MV__Common__SpawnRoleModeType_
                      );
    if (bVar1 != 0) {
      pIVar2 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager
                         ((MethodInfo *)0x0);
      if (pIVar2 == (ILockCursorManager *)0x0) goto code_?;
      cVar5 = func_?();
      if (cVar5 == '\0') {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pIVar6 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
        if (pIVar6 == (IPlayModeUI *)0x0) goto code_?;
        cVar5 = func_?();
        if (cVar5 == '\0') {
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)StringLiteral_This_happens_when_playmode_avata,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)StringLiteral_Bad_state,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pIVar6 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
          if (pIVar6 == (IPlayModeUI *)0x0) goto code_?;
          func_?();
        }
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* LobbyStatePlayModeController() */

void Assembly-CSharp.dll::LobbyStatePlayModeController::LobbyStatePlayModeController__ctor
               (LobbyStatePlayModeController *this,MethodInfo *method)

{
  (this->fields).isInLobbyState = 1;
  (this->fields).shouldOpenLobbyMenu = 1;
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


/* Void set_IsInLobbyState(Boolean) */

void Assembly-CSharp.dll::LobbyStatePlayModeController::
     LobbyStatePlayModeController_set_IsInLobbyState
               (LobbyStatePlayModeController *this,bool value,MethodInfo *method)

{
  (this->fields).wantsToEnterPlayState = value ^ 1;
  LobbyStatePlayModeController_Update(this,(MethodInfo *)0x0);
  return;
}

