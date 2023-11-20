
/* Void ActivateLobbyState() */

void Assembly-CSharp.dll::LobbyStatePlayModeController::
     LobbyStatePlayModeController_ActivateLobbyState
               (LobbyStatePlayModeController *this,MethodInfo *method)

{
  this_00 = (this->fields).lobbyState;
  if (this_00 != (RectTransform *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,(this->fields).shouldOpenLobbyMenu,(MethodInfo *)0x0);
      this_01 = (this->fields).inGameMenu;
      if (this_01 != (InGameMenu *)0x0) {
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_01,(MethodInfo *)0x0);
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,(this->fields).shouldOpenLobbyMenu == 0,(MethodInfo *)0x0);
          this_02 = (this->fields).inGameController;
          if (this_02 != (DesktopInGameGUIController *)0x0) {
            pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this_02,(MethodInfo *)0x0);
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
  func_?();
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
  func_?();
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
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pRVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar2,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
    pRVar1 = (this->fields).lobbyState;
    if ((pRVar1 != (RectTransform *)0x0) &&
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
      this_00 = (this->fields).inGameMenu;
      if ((this_00 != (InGameMenu *)0x0) &&
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_00,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
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
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (this_01,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        (this->fields).shouldOpenLobbyMenu = 1;
      }
      return;
    }
  }
  func_?();
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
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__ILockCursorManager);
    func_?(&MethodInfo__LobbyStatePlayModeController__DisableLobbyState__);
    func_?(&MethodInfo__LobbyStatePlayModeController__EnableLobbyState__);
    func_?(&MethodInfo__LobbyStatePlayModeController__OnCursorLockChanged_bool_);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    pIVar1 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager
                       ((MethodInfo *)0x0);
    if (pIVar1 == (ILockCursorManager *)0x0) goto code_?;
    pIVar2 = pIVar1->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pIVar2->_1).rank;
    uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__ILockCursorManager) {
          ppMVar5 = &(&(pIVar1->klass->vtable).get_OnCursorLockChanged)
                     [pIVar1->klass->interfaceOffsets[uVar3].offset].method;
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    ppMVar5 = (MethodInfo **)func_?(pIVar1,TypeInfo__ILockCursorManager,0);
code_?:
    pDVar6 = (Delegate *)(*(code *)*ppMVar5)(pIVar1,ppMVar5[1]);
    this_00 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<bool>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,
               MethodInfo__LobbyStatePlayModeController__OnCursorLockChanged_bool_,(MethodInfo *)0x0
              );
    pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                       (pDVar6,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar6 == (Delegate *)0x0) {
      this = (LobbyStatePlayModeController *)0x0;
code_?:
      pIVar2 = pIVar1->klass;
      uVar4 = 0;
      uVar3._0_1_ = (pIVar2->_1).rank;
      uVar3._1_1_ = (pIVar2->_1).minimumAlignment;
      if (uVar3 != 0) {
        do {
          if (pIVar2->interfaceOffsets[uVar4].interfaceType ==
              (Il2CppClass *)TypeInfo__ILockCursorManager) {
            ppMVar5 = &(&(pIVar1->klass->vtable).set_OnCursorLockChanged)
                       [pIVar1->klass->interfaceOffsets[uVar4].offset].method;
            goto code_?;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar3);
      }
      ppMVar5 = (MethodInfo **)func_?();
code_?:
      (*(code *)*ppMVar5)();
      goto code_?;
    }
    this = (LobbyStatePlayModeController *)func_?();
    if (this != (LobbyStatePlayModeController *)0x0) goto code_?;
  }
  else {
code_?:
    pGVar7 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if ((pGVar7 != (GameEventManager *)0x0) &&
       (pGVar8 = (pGVar7->fields).GameState, pGVar8 != (GameEventManager_GameStateManager *)0x0)) {
      pAVar9 = (pGVar8->fields).OnEnableLobbyState;
      pNVar10 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar10,(Object *)this,MethodInfo__LobbyStatePlayModeController__EnableLobbyState__,
                 (MethodInfo *)0x0);
      pAVar9 = (Action *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar9,(Delegate *)pNVar10,(MethodInfo *)0x0);
      if (pAVar9 == (Action *)0x0) {
        (pGVar8->fields).OnEnableLobbyState = (Action *)0x0;
      }
      else {
        pAVar11 = (Action *)0x0;
        if (pAVar9->klass == TypeInfo__System__Action) {
          pAVar11 = pAVar9;
        }
        if (pAVar11 == (Action *)0x0) goto code_?;
        (pGVar8->fields).OnEnableLobbyState = pAVar11;
        pAVar11 = (Action *)0x0;
        if (pAVar9->klass == TypeInfo__System__Action) {
          pAVar11 = pAVar9;
        }
        if (pAVar11 == (Action *)0x0) goto code_?;
      }
      func_?();
      pGVar7 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar7 != (GameEventManager *)0x0) &&
         (pGVar12 = (pGVar7->fields).GameState, pGVar12 != (GameEventManager_GameStateManager *)0x0))
      {
        pAVar9 = (pGVar12->fields).OnDisableLobbyState;
        pNVar10 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar10,(Object *)&pGVar8->fields,
                   MethodInfo__LobbyStatePlayModeController__DisableLobbyState__,(MethodInfo *)0x0);
        pAVar11 = (Action *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pAVar9,(Delegate *)pNVar10,(MethodInfo *)0x0);
        pAVar9 = (Action *)0x0;
        if (pAVar11 == (Action *)0x0) {
          (pGVar12->fields).OnDisableLobbyState = (Action *)0x0;
code_?:
          func_?();
          pGVar12[1].fields.OnDisableLobbyState = pAVar9;
          func_?(&pGVar12[1].fields.OnDisableLobbyState);
          pGVar12[1].fields.gameStateType =
               (GameEventManager_GameEventSubscribableVariable_1_MV_Common_MVGameStateType_ *)
               lobbyState;
          func_?(&pGVar12[1].fields.gameStateType,lobbyState);
          pGVar12[2].klass = (GameEventManager_GameStateManager__Class *)inGameMenu;
          func_?(pGVar12 + 2,inGameMenu);
          pGVar12[2].monitor = (MonitorData *)chatController;
          func_?(&pGVar12[2].monitor,chatController);
          LobbyStatePlayModeController_SetObjectToLobbyState
                    ((LobbyStatePlayModeController *)&(pGVar12->fields).OnDisableLobbyState,
                     *(bool *)&pGVar12[1].fields.OnEnableLobbyState,(MethodInfo *)0x0);
          *(undefined1 *)((int)&pGVar12[1].fields.OnEnableLobbyState + 2) = 0;
          return;
        }
        if (pAVar11->klass == TypeInfo__System__Action) {
          pAVar9 = pAVar11;
        }
        if (pAVar9 != (Action *)0x0) {
          (pGVar12->fields).OnDisableLobbyState = pAVar9;
          pAVar9 = (Action *)0x0;
          if (pAVar11->klass == TypeInfo__System__Action) {
            pAVar9 = pAVar11;
          }
          if (pAVar9 != (Action *)0x0) goto code_?;
        }
        goto code_?;
      }
    }
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pRVar1,(MethodInfo *)0x0);
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
        pIVar3 = (this->fields).inGameMenu;
        if (pIVar3 != (InGameMenu *)0x0) {
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pIVar3,(MethodInfo *)0x0);
          if (pGVar2 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar2,0,(MethodInfo *)0x0);
            pDVar4 = (this->fields).inGameController;
            if (pDVar4 != (DesktopInGameGUIController *)0x0) {
              pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pDVar4,(MethodInfo *)0x0);
              if (pGVar2 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar2,1,(MethodInfo *)0x0);
                if ((this->fields).chatController != (ChatControllerUGUI *)0x0) {
                  (in_stack_5->fields).currentlyInLobbyState = in_stack_6 ^ 1;
                  ChatControllerUGUI::ChatControllerUGUI_UpdateFadeTime
                            (in_stack_5,(MethodInfo *)0x0);
                  (in_stack_5->fields).shouldUpdateFade = in_stack_6;
                  ChatControllerUGUI::ChatControllerUGUI_ChatFocusChanged
                            (in_stack_5,0,(MethodInfo *)0x0);
                  bVar7 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession
                                    ((MethodInfo *)0x0);
                  if (bVar7 == 0) {
                    bVar8 = in_stack_6 ^ 1;
                  }
                  else {
                    bVar8 = 0;
                  }
                  pRVar1 = (in_stack_5->fields).inputAreaRoot;
                  if (pRVar1 != (RectTransform *)0x0) {
                    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_gameObject((Component *)pRVar1,(MethodInfo *)0x0);
                    if (pGVar2 != (GameObject *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar2,0,(MethodInfo *)0x0);
                      pRVar1 = (in_stack_5->fields).inputAreaDeactivated;
                      if (pRVar1 != (RectTransform *)0x0) {
                        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_get_gameObject((Component *)pRVar1,(MethodInfo *)0x0);
                        if (pGVar2 != (GameObject *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (pGVar2,bVar8 ^ 1,(MethodInfo *)0x0);
                          this_00 = (in_stack_5->fields).scrollRect;
                          if (this_00 != (ScrollRect *)0x0) {
                            UnityEngine.UI.dll::UnityEngine::UI::ScrollRect::
                            ScrollRect_SetVerticalNormalizedPosition(this_00,0.0,(MethodInfo *)0x0);
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
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pRVar1,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,(this->fields).shouldOpenLobbyMenu,(MethodInfo *)0x0);
      pIVar3 = (this->fields).inGameMenu;
      if (pIVar3 != (InGameMenu *)0x0) {
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pIVar3,(MethodInfo *)0x0);
        if (pGVar2 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,(this->fields).shouldOpenLobbyMenu == 0,(MethodInfo *)0x0);
          pDVar4 = (this->fields).inGameController;
          if (pDVar4 != (DesktopInGameGUIController *)0x0) {
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pDVar4,(MethodInfo *)0x0);
            if (pGVar2 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar2,0,(MethodInfo *)0x0);
              this_01 = (this->fields).chatController;
              if (this_01 != (ChatControllerUGUI *)0x0) {
                ChatControllerUGUI::ChatControllerUGUI_OnLobbyStateChange
                          (this_01,0,(MethodInfo *)0x0);
                (this->fields).shouldOpenLobbyMenu = 0;
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


/* Void Update() */

void Assembly-CSharp.dll::LobbyStatePlayModeController::LobbyStatePlayModeController_Update
               (LobbyStatePlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__IPlayModeUI);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__op_Equality_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__MV__Common__SpawnRoleModeType_
                   );
    func_?(&StringLiteral_Bad_state);
    func_?(&StringLiteral_This_happens_when_playmode_avata);
    cRam_? = '\x01';
  }
  bVar1 = (this->fields).isInLobbyState;
  if ((this->fields).wantsToEnterPlayState == 0) {
    if (bVar1 == 0) {
      MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(0,0,(MethodInfo *)0x0);
      LobbyStatePlayModeController_SetObjectToLobbyState(this,1,(MethodInfo *)0x0);
    }
  }
  else if (bVar1 != 0) {
    LobbyStatePlayModeController_SetObjectToLobbyState(this,0,(MethodInfo *)0x0);
    pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    if ((pSVar2 == (SpawnRoleDataMediator *)0x0) ||
       (this_00 = (pSVar2->fields).SpawnRoleModeTypeWrapper,
       this_00 == (SpawnRoleModeTypeWrapper *)0x0)) goto code_?;
    bVar1 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                      (this_00,SpawnRoleModeType__Enum_Hidden,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar3 == (GameEventManager *)0x0) ||
         (this_01 = (pGVar3->fields).AvatarCommandsPlayMode,
         this_01 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) goto code_?;
      GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd__RegisterAdEvents_m__9
                ((RewardedAd *)this_01,(MethodInfo *)0x0);
    }
  }
  pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar2 == (SpawnRoleDataMediator *)0x0) goto code_?;
  bVar1 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
          SpawnRoleVariable`1[System::Int32Enum]::
          SpawnRoleVariable_1_System_Int32Enum__op_Equality_1
                    ((SpawnRoleVariable_1_System_Int32Enum_ *)(pSVar2->fields).spawnRoleMode,1,
                     MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__op_Equality_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__MV__Common__SpawnRoleModeType_
                    );
  if (bVar1 != 0) {
    bVar1 = MVGameControllerDesktop::MVGameControllerDesktop_get_IsCursorLock((MethodInfo *)0x0);
    if (bVar1 == 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField ==
          (IPlayModeUI *)0x0) {
code_?:
        func_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      cVar5 = func_?();
      if (cVar5 == '\0') {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_This_happens_when_playmode_avata,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Bad_state,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField ==
            (IPlayModeUI *)0x0) goto code_?;
        func_?(4);
      }
    }
  }
  return;
}


/* LobbyStatePlayModeController() */

void Assembly-CSharp.dll::LobbyStatePlayModeController::LobbyStatePlayModeController__ctor
               (LobbyStatePlayModeController *this,MethodInfo *method)

{
  (this->fields).isInLobbyState = 1;
  (this->fields).shouldOpenLobbyMenu = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
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

