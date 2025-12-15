
/* Void Activate(ActivateUIElement) */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_Activate
               (DesktopPlayModeController *this,ActivateUIElement__Enum element,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  BoostMenuController_MethodInfo__UnityEngine__Object__Instantiate<BoostMenuController>_BoostMenuController_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (element == ActivateUIElement__Enum_AvatarAccessoryShop) {
    this_01 = (this->fields).accessoryShopController;
    if (this_01 != (AccessoryShopController *)0x0) {
code_?:
      AccessoryShopController::AccessoryShopController_Activate
                (this_01,UIPushOption__Enum_HideAll,(MethodInfo *)0x0);
      return;
    }
  }
  else if (element == ActivateUIElement__Enum_AvatarAccessoryShopBundles) {
    this_01 = (this->fields).accessoryShopController;
    if (this_01 != (AccessoryShopController *)0x0) {
      (this_01->fields).startingCategory = 0xfe;
      goto code_?;
    }
  }
  else {
    if (element != ActivateUIElement__Enum_BoosterMenu) {
      return;
    }
    pBVar1 = (this->fields).boosterMenu;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pBVar1 = (BoostMenuController *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pBVar1,
                        BoostMenuController_MethodInfo__UnityEngine__Object__Instantiate<BoostMenuController>_BoostMenuController_
                       );
    if (pBVar1 != (BoostMenuController *)0x0) {
      BoostMenuController::BoostMenuController_Initialize(pBVar1,(MethodInfo *)0x0);
      this_00 = (this->fields).uiStack;
      gameObject = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pBVar1,(MethodInfo *)0x0);
      if (this_00 != (UIStack *)0x0) {
        UIStack::UIStack_Push
                  (this_00,gameObject,UIPushOption__Enum_InvisibleBlocker,(UnityAction *)0x0,
                   UIGroupFlags__Enum_GameObjectUI,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ActivateAdminButton(Boolean) */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_ActivateAdminButton
               (DesktopPlayModeController *this,bool active,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).adminGameMgmtButton;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pRVar1 != (RectTransform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pRVar1->fields)._._._.m_CachedPtr != (void *)0x0) {
      pRVar1 = (this->fields).adminGameMgmtButton;
      if (pRVar1 == (RectTransform *)0x0) goto code_?;
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pRVar1,(MethodInfo *)0x0);
      if (active == 0) {
        if (this_01 == (GameObject *)0x0) goto code_?;
        value = 0;
      }
      else {
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar2 == (MVNetworkGame *)0x0) ||
            (this_00 = (pMVar2->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
           (pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0)
           , pMVar3 == (MVLocalPlayer *)0x0)) {
code_?:
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((pMVar3->fields)._._ProfileID_k__BackingField < 1) {
          value = 0;
        }
        else {
          pUVar5 = (pMVar3->fields)._._UserProfileData_k__BackingField;
          if (pUVar5 == (UserProfileData *)0x0) goto code_?;
          value = (pUVar5->fields).IsAdmin;
        }
        if (this_01 == (GameObject *)0x0) goto code_?;
      }
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,value,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_Awake
               (DesktopPlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DesktopPlayModeController__OnStackChanged__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DesktopPlayModeController__SetUIReady__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  LockCursorManager3DMode_MethodInfo__UnityEngine__GameObject__AddComponent<LockCursorManager3DMode>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields).uiStack;
  if (pUVar1 != (UIStack *)0x0) {
    value = (Action *)0x0;
    UIStack::UIStack_Push
              (pUVar1,(this->fields).stackBottom,UIPushOption__Enum_None,(UnityAction *)0x0,
               UIGroupFlags__Enum_StackBottom,(MethodInfo *)0x0);
    DesktopPlayModeController_CreateGUI(this,(MethodInfo *)0x0);
    pUVar1 = (this->fields).uiStack;
    pNVar2 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar2,(Object *)this,MethodInfo__DesktopPlayModeController__OnStackChanged__,
               (MethodInfo *)0x0);
    if (pUVar1 != (UIStack *)0x0) {
      UIStack::UIStack_SubscribeToStackChanges(pUVar1,(Action *)pNVar2,(MethodInfo *)0x0);
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (this_01 != (GameObject *)0x0) {
        pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                           (this_01,
                            LockCursorManager3DMode_MethodInfo__UnityEngine__GameObject__AddComponent<LockCursorManager3DMode>__
                           );
        bVar4 = iRam_? != 0;
        (this->fields).lockCursorManager = (ILockCursorManager *)pOVar3;
        if (bVar4) {
          uVar5 = (uint)((ulonglong)&(this->fields).lockCursorManager >> 0xc);
          puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar7 = *puVar6;
            LOCK();
            uVar8 = *puVar6;
            if (uVar7 == uVar8) {
              *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (uVar7 != uVar8);
        }
        MVGameControllerDesktop::MVGameControllerDesktop_RegisterPlayModeController
                  (this,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((((pMVar9 != (MVGameControllerBase *)0x0) &&
             (pMVar10 = (pMVar9->fields).game, pMVar10 != (MVNetworkGame *)0x0)) &&
            (this_00 = (pMVar10->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
           (pMVar11 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                (this_00,(MethodInfo *)0x0), pMVar11 != (MVLocalPlayer *)0x0)) {
          if ((pMVar11->fields)._.playerState == 1) {
            DesktopPlayModeController_SetUIReady(this,(MethodInfo *)0x0);
          }
          else {
            pAVar12 = MVGameControllerBase::MVGameControllerBase_get_OnFirstFrameUpdateActorReady
                                ((MethodInfo *)0x0);
            pNVar2 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar2,(Object *)this,MethodInfo__DesktopPlayModeController__SetUIReady__,
                       (MethodInfo *)0x0);
            pAVar12 = (Action *)
                      mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pAVar12,(Delegate *)pNVar2,(MethodInfo *)0x0);
            if (pAVar12 != (Action *)0x0) {
              if (pAVar12->klass == TypeInfo__System__Action) {
                value = pAVar12;
              }
              if (value == (Action *)0x0) {
                FUN_?(pAVar12);
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
            }
            MVGameControllerBase::MVGameControllerBase_set_OnFirstFrameUpdateActorReady
                      (value,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void CreateGUI() */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_CreateGUI
               (DesktopPlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  ChatControllerUGUI_MethodInfo__UnityEngine__Object__Instantiate<ChatControllerUGUI>_ChatControllerUGUI__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  DesktopInGameGUIController_MethodInfo__UnityEngine__Object__Instantiate<DesktopInGameGUIController>_DesktopInGameGUIController__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).chatController;
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pCVar1 = (ChatControllerUGUI *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                     ((Object *)pCVar1,pTVar2,0,
                      ChatControllerUGUI_MethodInfo__UnityEngine__Object__Instantiate<ChatControllerUGUI>_ChatControllerUGUI__UnityEngine__Transform__bool_
                     );
  bVar3 = iRam_? != 0;
  (this->fields).chatController = pCVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).chatController >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pCVar1 = (this->fields).chatController;
  if (pCVar1 != (ChatControllerUGUI *)0x0) {
    ChatControllerUGUI::ChatControllerUGUI_SubscribeToMessages(pCVar1,(MethodInfo *)0x0);
    pCVar1 = (this->fields).chatController;
    if ((pCVar1 != (ChatControllerUGUI *)0x0) &&
       (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pCVar1,(MethodInfo *)0x0), pGVar8 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar8,0,(MethodInfo *)0x0);
      pGVar8 = (GameObject *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)(this->fields).fullscreenPlayModeStateTransform,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                         );
      bVar3 = iRam_? != 0;
      (this->fields).playModeState = pGVar8;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields).playModeState >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      this_00 = (this->fields).uiStack;
      if (this_00 != (UIStack *)0x0) {
        UIStack::UIStack_Push
                  (this_00,(this->fields).playModeState,UIPushOption__Enum_None,(UnityAction *)0x0,
                   UIGroupFlags__Enum_MainUI,(MethodInfo *)0x0);
        pGVar8 = (this->fields).playModeState;
        pDVar9 = (this->fields).inGameController;
        if (pGVar8 != (GameObject *)0x0) {
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar8,(MethodInfo *)0x0);
          pDVar9 = (DesktopInGameGUIController *)
                   UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                             ((Object *)pDVar9,pTVar2,0,
                              DesktopInGameGUIController_MethodInfo__UnityEngine__Object__Instantiate<DesktopInGameGUIController>_DesktopInGameGUIController__UnityEngine__Transform__bool_
                             );
          bVar3 = iRam_? != 0;
          (this->fields).inGameController = pDVar9;
          if (bVar3) {
            uVar4 = (uint)((ulonglong)&(this->fields).inGameController >> 0xc);
            lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
            do {
              uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
              puVar7 = (ulonglong *)(lVar5 + 0xADDR);
              LOCK();
              bVar3 = uVar6 == *puVar7;
              if (bVar3) {
                *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
              }
              UNLOCK();
            } while (!bVar3);
          }
          pDVar9 = (this->fields).inGameController;
          if (pDVar9 != (DesktopInGameGUIController *)0x0) {
            DesktopInGameGUIController::DesktopInGameGUIController_Initialize
                      (pDVar9,(MethodInfo *)0x0);
            pGVar8 = (this->fields).playModeState;
            pRVar10 = (this->fields).playerListButton;
            if (pGVar8 != (GameObject *)0x0) {
              pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (pGVar8,(MethodInfo *)0x0);
              pRVar10 = (RectTransform *)
                       UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                                 ((Object *)pRVar10,pTVar2,0,
                                  UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform__UnityEngine__Transform__bool_
                                 );
              bVar3 = iRam_? != 0;
              (this->fields).playerListButton = pRVar10;
              if (bVar3) {
                uVar4 = (uint)((ulonglong)&(this->fields).playerListButton >> 0xc);
                lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
                do {
                  uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
                  puVar7 = (ulonglong *)(lVar5 + 0xADDR);
                  LOCK();
                  bVar3 = uVar6 == *puVar7;
                  if (bVar3) {
                    *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar3);
              }
              pRVar10 = (this->fields).adminGameMgmtButton;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Object);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Object);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (pRVar10 != (RectTransform *)0x0) {
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if ((pRVar10->fields)._._._.m_CachedPtr != (void *)0x0) {
                  pGVar8 = (this->fields).playModeState;
                  pRVar10 = (this->fields).adminGameMgmtButton;
                  if (pGVar8 == (GameObject *)0x0) goto code_?;
                  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_get_transform(pGVar8,(MethodInfo *)0x0);
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  pRVar10 = (RectTransform *)
                           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                                     ((Object *)pRVar10,pTVar2,0,
                                      UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform__UnityEngine__Transform__bool_
                                     );
                  bVar3 = iRam_? != 0;
                  (this->fields).adminGameMgmtButton = pRVar10;
                  if (bVar3) {
                    uVar4 = (uint)((ulonglong)&(this->fields).adminGameMgmtButton >> 0xc);
                    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
                      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
                      LOCK();
                      bVar3 = uVar6 == *puVar7;
                      if (bVar3) {
                        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar3);
                  }
                }
              }
              pGVar8 = (this->fields).stackBottom;
              pRVar10 = (this->fields).notificationsManager;
              if (pGVar8 != (GameObject *)0x0) {
                pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(pGVar8,(MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pRVar10 = (RectTransform *)
                         UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                                   ((Object *)pRVar10,pTVar2,0,
                                    UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform__UnityEngine__Transform__bool_
                                   );
                bVar3 = iRam_? != 0;
                (this->fields).notificationsManager = pRVar10;
                if (bVar3) {
                  uVar4 = (uint)((ulonglong)&(this->fields).notificationsManager >> 0xc);
                  lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
                    puVar7 = (ulonglong *)(lVar5 + 0xADDR);
                    LOCK();
                    bVar3 = uVar6 == *puVar7;
                    if (bVar3) {
                      *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar3);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
  FUN_?();
  pcVar2 = (code *)swi(3);
  pIVar3 = (IGUICrossHair *)(*pcVar2)();
  return pIVar3;
}


/* Void HandleInput() */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_HandleInput
               (DesktopPlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ILockCursorManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                    (KogamaControls__Enum_PauseMenu,KeyState__Enum_Down,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pIVar2 = (this->fields).lockCursorManager;
    if (pIVar2 == (ILockCursorManager *)0x0) goto code_?;
    FUN_?(1,TypeInfo__ILockCursorManager,pIVar2,0);
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                    (KogamaControls__Enum_Deprecated_ToggleHD,KeyState__Enum_Down,(MethodInfo *)0x0)
  ;
  if (bVar1 != 0) {
    pUVar3 = (this->fields).uiStack;
    if (pUVar3 == (UIStack *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar4 = (pUVar3->fields).stackableUiElements;
    if (pLVar4 == (List_1_UIStack_StackElement_ *)0x0) goto code_?;
    if ((pLVar4->fields)._size < 3) {
      if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
        FUN_?();
      }
      NotificationController::NotificationController_ToggleHDIsDeprecated((MethodInfo *)0x0);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
      (IEditModeUI *)0x0) {
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVInputWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                      (KogamaControls__Enum_ToggleLogicRendering,KeyState__Enum_Down,
                       (MethodInfo *)0x0);
    if (bVar1 != 0) {
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      pMVar6 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((pMVar6 == (MainCameraManager *)0x0) || (pMVar5 == (MainCameraManager *)0x0)) {
code_?:
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      bVar8 = (pMVar6->fields).isLogicRendered == 0;
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_Logic);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (pMVar5->fields).mainCamera;
      if (bVar8) {
        if (this_00 == (Camera *)0x0) goto code_?;
        uVar9 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                          (this_00,(MethodInfo *)0x0);
        uVar10 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Logic,(MethodInfo *)0x0);
        uVar9 = uVar9 | 1 << (uVar10 & 0x1f);
      }
      else {
        if (this_00 == (Camera *)0x0) {
code_?:
          FUN_?();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar9 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                          (this_00,(MethodInfo *)0x0);
        uVar10 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Logic,(MethodInfo *)0x0);
        uVar9 = uVar9 & ~(1 << (uVar10 & 0x1f));
      }
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                (this_00,uVar9,(MethodInfo *)0x0);
      (pMVar5->fields).isLogicRendered = bVar8;
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
  if (((pDVar1 == (DesktopInGameGUIController *)0x0) ||
      (this_00 = (pDVar1->fields).use, this_00 == (ShowUse *)0x0)) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (GameObject *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,0,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar3 = (obj->fields)._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar3,0);
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_Initialize
               (DesktopPlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<IWinningCondition>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ChatCommandManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DesktopPlayModeController__HideUI__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DesktopPlayModeController__OnHideTimeAttackFlagCountDown__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DesktopPlayModeController__OnRoundEnd_IWinningCondition_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DesktopPlayModeController__OnShowTimeAttackFlagCountDown__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DesktopPlayModeController__OnShowTimeAttackFlagDebriefing_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DesktopPlayMode);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&
                  ChatBubbleController_MethodInfo__UnityEngine__Object__Instantiate<ChatBubbleController>_ChatBubbleController__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  InGameMenu_MethodInfo__UnityEngine__Object__Instantiate<InGameMenu>_InGameMenu__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TimeAttackFlagDebriefing_MethodInfo__UnityEngine__Object__Instantiate<TimeAttackFlagDebriefing>_TimeAttackFlagDebriefing__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DesktopPlayModeController____c___Initialize_b__36_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 == (MainCameraManager *)0x0) goto code_?;
  MainCameraManager::MainCameraManager_Init(pMVar1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
      (IEditModeUI *)0x0) {
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar1 == (MainCameraManager *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_CamRotateTarget);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    (pMVar1->fields).maskMode = 1;
    this_00 = (pMVar1->fields).mainCamera;
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                       (StringLiteral_CamRotateTarget,(MethodInfo *)0x0);
    if (this_00 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
              (this_00,1 << ((byte)iVar2 & 0x1f),(MethodInfo *)0x0);
    (pMVar1->fields).blueModeEnabled = 1;
  }
  pCVar3 = (this->fields).chatBubbleController;
  pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pCVar3 = (ChatBubbleController *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                      ((Object *)pCVar3,pTVar4,0,
                       ChatBubbleController_MethodInfo__UnityEngine__Object__Instantiate<ChatBubbleController>_ChatBubbleController__UnityEngine__Transform__bool_
                      );
  bVar5 = iRam_? != 0;
  (this->fields).chatBubbleController = pCVar3;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).chatBubbleController >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  pGVar10 = (this->fields).playModeState;
  pRVar11 = (this->fields).lobbyState;
  if (pGVar10 != (GameObject *)0x0) {
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar10,(MethodInfo *)0x0);
    pRVar11 = (RectTransform *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                        ((Object *)pRVar11,pTVar4,0,
                         UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform__UnityEngine__Transform__bool_
                        );
    bVar5 = iRam_? != 0;
    (this->fields).lobbyStateRect = pRVar11;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(this->fields).lobbyStateRect >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    pGVar10 = (this->fields).playModeState;
    pIVar12 = (this->fields).inGameMenuPrefab;
    if (pGVar10 != (GameObject *)0x0) {
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar10,(MethodInfo *)0x0);
      pIVar12 = (InGameMenu *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                          ((Object *)pIVar12,pTVar4,0,
                           InGameMenu_MethodInfo__UnityEngine__Object__Instantiate<InGameMenu>_InGameMenu__UnityEngine__Transform__bool_
                          );
      bVar5 = iRam_? != 0;
      (this->fields).inGameMenu = pIVar12;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(this->fields).inGameMenu >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar5 = uVar8 == *puVar9;
          if (bVar5) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      pIVar12 = (this->fields).inGameMenu;
      if ((pIVar12 != (InGameMenu *)0x0) &&
         (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pIVar12,(MethodInfo *)0x0), pGVar10 != (GameObject *)0x0
         )) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar10,0,(MethodInfo *)0x0);
        pIVar12 = (this->fields).inGameMenu;
        if (pIVar12 != (InGameMenu *)0x0) {
          InGameMenu::InGameMenu_Initialize(pIVar12,(MethodInfo *)0x0);
          pGVar10 = (this->fields).playModeState;
          pTVar13 = (this->fields).timeAttackFlagDebriefing;
          if (pGVar10 != (GameObject *)0x0) {
            pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar10,(MethodInfo *)0x0);
            pTVar13 = (TimeAttackFlagDebriefing *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                                ((Object *)pTVar13,pTVar4,0,
                                 TimeAttackFlagDebriefing_MethodInfo__UnityEngine__Object__Instantiate<TimeAttackFlagDebriefing>_TimeAttackFlagDebriefing__UnityEngine__Transform__bool_
                                );
            bVar5 = iRam_? != 0;
            (this->fields).timeAttackFlagDebriefing = pTVar13;
            if (bVar5) {
              uVar6 = (uint)((ulonglong)&(this->fields).timeAttackFlagDebriefing >> 0xc);
              lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
              do {
                uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                LOCK();
                bVar5 = uVar8 == *puVar9;
                if (bVar5) {
                  *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                }
                UNLOCK();
              } while (!bVar5);
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar14 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if ((pMVar14 != (MVGameControllerBase *)0x0) &&
               (pFVar15 = (pMVar14->fields).flagDebriefingControl,
               pFVar15 != (FlagDebriefingControl *)0x0)) {
              pAVar16 = (pFVar15->fields).OnFlagDebriefing;
              pDVar17 = (Delegate *)FUN_?(TypeInfo__System__Action<int>);
              FUN_?(pDVar17,this);
              pDVar17 = mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)pAVar16,pDVar17,(MethodInfo *)0x0);
              pAVar18 = TypeInfo__System__Action<int>;
              value = (Action *)0x0;
              if (pDVar17 == (Delegate *)0x0) {
                (pFVar15->fields).OnFlagDebriefing = (Action_1_Int32_ *)0x0;
              }
              else {
                pAVar16 = (Action_1_Int32_ *)FUN_?(pDVar17,TypeInfo__System__Action<int>);
                if (pAVar16 == (Action_1_Int32_ *)0x0) {
                  FUN_?(pDVar17,pAVar18);
                  pcVar19 = (code *)swi(3);
                  (*pcVar19)();
                  return;
                }
                (pFVar15->fields).OnFlagDebriefing = pAVar16;
                pAVar18 = TypeInfo__System__Action<int>;
                lVar7 = FUN_?(pDVar17,TypeInfo__System__Action<int>);
                if (lVar7 == 0) {
                  FUN_?(pDVar17,pAVar18);
                  pcVar19 = (code *)swi(3);
                  (*pcVar19)();
                  return;
                }
              }
              if (iRam_? != 0) {
                uVar6 = (uint)((ulonglong)&(pFVar15->fields).OnFlagDebriefing >> 0xc);
                lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                do {
                  uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                  puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                  LOCK();
                  bVar5 = uVar8 == *puVar9;
                  if (bVar5) {
                    *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar5);
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar14 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if ((pMVar14 != (MVGameControllerBase *)0x0) &&
                 (pFVar15 = (pMVar14->fields).flagDebriefingControl,
                 pFVar15 != (FlagDebriefingControl *)0x0)) {
                pAVar20 = (pFVar15->fields).OnFlagCountDown;
                pNVar21 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (pNVar21,(Object *)this,
                           MethodInfo__DesktopPlayModeController__OnShowTimeAttackFlagCountDown__,
                           (MethodInfo *)0x0);
                pAVar20 = (Action *)
                          mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)pAVar20,(Delegate *)pNVar21,(MethodInfo *)0x0);
                if (pAVar20 == (Action *)0x0) {
                  (pFVar15->fields).OnFlagCountDown = (Action *)0x0;
                }
                else {
                  pAVar22 = value;
                  if (pAVar20->klass == TypeInfo__System__Action) {
                    pAVar22 = pAVar20;
                  }
                  if (pAVar22 == (Action *)0x0) {
                    FUN_?();
                    pcVar19 = (code *)swi(3);
                    (*pcVar19)();
                    return;
                  }
                  (pFVar15->fields).OnFlagCountDown = pAVar22;
                  pAVar22 = value;
                  if (pAVar20->klass == TypeInfo__System__Action) {
                    pAVar22 = pAVar20;
                  }
                  if (pAVar22 == (Action *)0x0) {
                    FUN_?();
                    pcVar19 = (code *)swi(3);
                    (*pcVar19)();
                    return;
                  }
                }
                if (iRam_? != 0) {
                  uVar6 = (uint)((ulonglong)&(pFVar15->fields).OnFlagCountDown >> 0xc);
                  lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                    puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                    LOCK();
                    bVar5 = uVar8 == *puVar9;
                    if (bVar5) {
                      *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar5);
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pMVar14 = TypeInfo__MVGameControllerBase->static_fields->instance;
                if ((pMVar14 != (MVGameControllerBase *)0x0) &&
                   (pFVar15 = (pMVar14->fields).flagDebriefingControl,
                   pFVar15 != (FlagDebriefingControl *)0x0)) {
                  pAVar20 = (pFVar15->fields).OnFlagCountDownEnd;
                  pNVar21 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
                  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                  NavMesh_OnNavMeshPreUpdate__ctor
                            (pNVar21,(Object *)this,
                             MethodInfo__DesktopPlayModeController__OnHideTimeAttackFlagCountDown__,
                             (MethodInfo *)0x0);
                  pAVar20 = (Action *)
                            mscorlib.dll::System::Delegate::Delegate_Combine
                                      ((Delegate *)pAVar20,(Delegate *)pNVar21,(MethodInfo *)0x0);
                  if (pAVar20 == (Action *)0x0) {
                    (pFVar15->fields).OnFlagCountDownEnd = (Action *)0x0;
                  }
                  else {
                    pAVar22 = value;
                    if (pAVar20->klass == TypeInfo__System__Action) {
                      pAVar22 = pAVar20;
                    }
                    if (pAVar22 == (Action *)0x0) {
                      FUN_?();
                      pcVar19 = (code *)swi(3);
                      (*pcVar19)();
                      return;
                    }
                    (pFVar15->fields).OnFlagCountDownEnd = pAVar22;
                    pAVar22 = value;
                    if (pAVar20->klass == TypeInfo__System__Action) {
                      pAVar22 = pAVar20;
                    }
                    if (pAVar22 == (Action *)0x0) {
                      FUN_?();
                      pcVar19 = (code *)swi(3);
                      (*pcVar19)();
                      return;
                    }
                  }
                  if (iRam_? != 0) {
                    uVar6 = (uint)((ulonglong)&(pFVar15->fields).OnFlagCountDownEnd >> 0xc);
                    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                      LOCK();
                      bVar5 = uVar8 == *puVar9;
                      if (bVar5) {
                        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar5);
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__MVGameControllerBase);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pMVar14 = TypeInfo__MVGameControllerBase->static_fields->instance;
                  if ((pMVar14 != (MVGameControllerBase *)0x0) &&
                     (pMVar23 = (pMVar14->fields).game, pMVar23 != (MVNetworkGame *)0x0)) {
                    pAVar24 = (pMVar23->fields).OnWinningConditionFulfilled;
                    this_07 = (UnityAction_1_System_Object_ *)
                              FUN_?(TypeInfo__System__Action<IWinningCondition>);
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
                    UnityAction_1_System_Object___ctor
                              (this_07,(Object *)this,
                               MethodInfo__DesktopPlayModeController__OnRoundEnd_IWinningCondition_,
                               (MethodInfo *)0x0);
                    pDVar17 = mscorlib.dll::System::Delegate::Delegate_Combine
                                        ((Delegate *)pAVar24,(Delegate *)this_07,(MethodInfo *)0x0);
                    pAVar25 = TypeInfo__System__Action<IWinningCondition>;
                    if (pDVar17 == (Delegate *)0x0) {
                      (pMVar23->fields).OnWinningConditionFulfilled =
                           (Action_1_IWinningCondition_ *)0x0;
                    }
                    else {
                      pAVar24 = (Action_1_IWinningCondition_ *)
                                FUN_?(pDVar17,TypeInfo__System__Action<IWinningCondition>);
                      if (pAVar24 == (Action_1_IWinningCondition_ *)0x0) {
                        FUN_?(pDVar17,pAVar25);
                        pcVar19 = (code *)swi(3);
                        (*pcVar19)();
                        return;
                      }
                      (pMVar23->fields).OnWinningConditionFulfilled = pAVar24;
                      pAVar25 = TypeInfo__System__Action<IWinningCondition>;
                      lVar7 = FUN_?();
                      if (lVar7 == 0) {
                        FUN_?(pDVar17,pAVar25);
                        pcVar19 = (code *)swi(3);
                        (*pcVar19)();
                        return;
                      }
                    }
                    if (iRam_? != 0) {
                      uVar6 = (uint)((ulonglong)&(pMVar23->fields).OnWinningConditionFulfilled >>
                                     0xc);
                      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                      do {
                        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                        LOCK();
                        bVar5 = uVar8 == *puVar9;
                        if (bVar5) {
                          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar5);
                    }
                    this_01 = (this->fields).goldPurchasedTracker;
                    if (this_01 != (GoldPurchasedTracker *)0x0) {
                      GoldPurchasedTracker::GoldPurchasedTracker_Initialize
                                (this_01,(MethodInfo *)0x0);
                      this_02 = (this->fields).deathPromotionController;
                      if (this_02 != (DeathPromotionController *)0x0) {
                        DeathPromotionController::DeathPromotionController_Initialize
                                  (this_02,(MethodInfo *)0x0);
                        this_08 = (DesktopPlayMode *)FUN_?(TypeInfo__DesktopPlayMode);
                        DesktopPlayMode::DesktopPlayMode__ctor(this_08,(MethodInfo *)0x0);
                        if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        FUN_?(this_08);
                        pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                        if (*(int *)&(TypeInfo__DesktopPlayModeController____c->_1).field_0x1c == 0)
                        {
                          FUN_?(TypeInfo__DesktopPlayModeController____c);
                        }
                        this_09 = TypeInfo__DesktopPlayModeController____c->static_fields->__9__36_0
                        ;
                        if (this_09 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
                          if (*(int *)&(TypeInfo__DesktopPlayModeController____c->_1).field_0x1c ==
                              0) {
                            FUN_?(TypeInfo__DesktopPlayModeController____c);
                          }
                          object = TypeInfo__DesktopPlayModeController____c->static_fields->__9;
                          this_09 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                                    FUN_?(
                                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                                 );
                          UnityEngine.UI.dll::UnityEngine::EventSystems::
                          ExecuteEvents+EventFunction`1[System::Object]::
                          ExecuteEvents_EventFunction_1_System_Object___ctor
                                    ((ExecuteEvents_EventFunction_1_System_Object_ *)this_09,
                                     (Object *)object,
                                     MethodInfo__DesktopPlayModeController____c___Initialize_b__36_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                                     ,(MethodInfo *)0x0);
                          TypeInfo__DesktopPlayModeController____c->static_fields->__9__36_0 =
                               this_09;
                          if (iRam_? != 0) {
                            uVar6 = (uint)((ulonglong)
                                            &TypeInfo__DesktopPlayModeController____c->static_fields
                                             ->__9__36_0 >> 0xc);
                            lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                            do {
                              uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                              puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                              LOCK();
                              bVar5 = uVar8 == *puVar9;
                              if (bVar5) {
                                *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar5);
                          }
                        }
                        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                                     field_0x1c == 0) {
                          FUN_?();
                        }
                        uVar26 = 0;
                        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                        ExecuteEvents_ExecuteHierarchy
                                  (pGVar10,(BaseEventData *)0x0,
                                   (ExecuteEvents_EventFunction_1_System_Object_ *)this_09,
                                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                                  );
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__MVGameControllerBase);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pGVar27 = TypeInfo__MVGameControllerBase->static_fields->
                                 _GameSessionData_k__BackingField;
                        if (pGVar27 != (GameSessionData *)0x0) {
                          if ((pGVar27->fields).gameMode == 1) {
                            pDVar28 = this->klass;
                            (this->fields)._._IsInLobby_k__BackingField = 1;
                            (*(pDVar28->vtable).set_IsInPauseMenu_1.methodPtr)
                                      (this,CONCAT71((int7)((ulonglong)uVar26 >> 8),1),
                                       (pDVar28->vtable).set_IsInPauseMenu_1.method);
                          }
                          this_03 = (this->fields).lobbyStatePlayModeController;
                          if (this_03 != (InGameMenuStatePlayModeController *)0x0) {
                            InGameMenuStatePlayModeController::
                            InGameMenuStatePlayModeController_Initialize
                                      (this_03,(this->fields).inGameController,
                                       (this->fields).lobbyStateRect,(this->fields).inGameMenu,
                                       (this->fields).chatController,(MethodInfo *)0x0);
                            this_04 = (this->fields).chatController;
                            if (this_04 != (ChatControllerUGUI *)0x0) {
                              ChatControllerUGUI::ChatControllerUGUI_Initialize
                                        (this_04,(MethodInfo *)0x0);
                              pRVar11 = (this->fields).playerListButton;
                              if ((pRVar11 != (RectTransform *)0x0) &&
                                 (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                            Component_get_gameObject
                                                      ((Component *)pRVar11,(MethodInfo *)0x0),
                                 pGVar10 != (GameObject *)0x0)) {
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive(pGVar10,1,(MethodInfo *)0x0);
                                DesktopPlayModeController_ActivateAdminButton
                                          (this,1,(MethodInfo *)0x0);
                                if (*(int *)&(TypeInfo__ChatCommandManager->_1).field_0x1c == 0) {
                                  FUN_?();
                                }
                                pAVar20 = ChatCommandManager::
                                          ChatCommandManager_GetChatCommandCallback
                                                    (ChatCommand__Enum_HideAllUI,(MethodInfo *)0x0);
                                pNVar21 = (NavMesh_OnNavMeshPreUpdate *)
                                          FUN_?(TypeInfo__System__Action);
                                uVar26 = 0;
                                UnityEngine.AIModule.dll::UnityEngine::AI::
                                NavMesh+OnNavMeshPreUpdate::NavMesh_OnNavMeshPreUpdate__ctor
                                          (pNVar21,(Object *)this,
                                           MethodInfo__DesktopPlayModeController__HideUI__,
                                           (MethodInfo *)0x0);
                                pAVar20 = (Action *)
                                          mscorlib.dll::System::Delegate::Delegate_Combine
                                                    ((Delegate *)pAVar20,(Delegate *)pNVar21,
                                                     (MethodInfo *)0x0);
                                if (pAVar20 != (Action *)0x0) {
                                  if (pAVar20->klass == TypeInfo__System__Action) {
                                    value = pAVar20;
                                  }
                                  if (value == (Action *)0x0) {
                                    FUN_?(pAVar20);
                                    pcVar19 = (code *)swi(3);
                                    (*pcVar19)();
                                    return;
                                  }
                                }
                                if (cRam_? == '\0') {
                                  FUN_?(&TypeInfo__ChatCommandManager,value,0);
                                  LOCK();
                                  UNLOCK();
                                  FUN_?(&
                                                MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__ContainsKey_ChatCommand_
                                               );
                                  LOCK();
                                  UNLOCK();
                                  FUN_?(&
                                                MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__set_Item_ChatCommand__System__Action_
                                               );
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                if (*(int *)&(TypeInfo__ChatCommandManager->_1).field_0x1c == 0) {
                                  FUN_?(TypeInfo__ChatCommandManager);
                                }
                                this_05 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
                                          TypeInfo__ChatCommandManager->static_fields->
                                          chatCommandCallBackDictionary;
                                if (this_05 ==
                                    (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
code_?:
                                  FUN_?();
                                  pcVar19 = (code *)swi(3);
                                  (*pcVar19)();
                                  return;
                                }
                                iVar2 = mscorlib.dll::System::Collections::Generic::
                                         Dictionary`2[System::Int32Enum,UnityEngine::Vector3]::
                                         Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                                                   (this_05,3,
                                                                                                        
                                                  MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__ContainsKey_ChatCommand_
                                                  ->klass->rgctx_data[0x21].method);
                                if (-1 < iVar2) {
                                  if (*(int *)&(TypeInfo__ChatCommandManager->_1).field_0x1c == 0) {
                                    FUN_?(TypeInfo__ChatCommandManager);
                                  }
                                  this_06 = TypeInfo__ChatCommandManager->static_fields->
                                            chatCommandCallBackDictionary;
                                  if (this_06 == (Dictionary_2_ChatCommand_System_Action_ *)0x0)
                                  goto code_?;
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Int32Enum,System::Object]::
                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_06
                                             ,3,(Object *)value,
                                             (InsertionBehavior__Enum)
                                             CONCAT71((int7)((ulonglong)uVar26 >> 8),1),
                                             MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__set_Item_ChatCommand__System__Action_
                                             ->klass->rgctx_data[0x22].method);
                                }
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
code_?:
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
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
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    TypeInfo__MVGameControllerBase->static_fields->_LeavingEditPlayMode_k__BackingField = 1;
    this_00 = (this->fields).timeAttackFlagDebriefing;
    if (this_00 == (TimeAttackFlagDebriefing *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_EndDebriefingEarly(this_00,(MethodInfo *)0x0)
    ;
    if ((this->fields).OnLeaveEditPlayMode != (UnityAction *)0x0) {
      pUVar3 = (this->fields).OnLeaveEditPlayMode;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pUVar3->fields)._._.invoke_impl)
                ((pUVar3->fields)._._.method_code,(pUVar3->fields)._._.method);
      return;
    }
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_OnDestroy
               (DesktopPlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DesktopPlayModeController__OnStackChanged__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields).uiStack;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pUVar1 != (UIStack *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pUVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pUVar1 = (this->fields).uiStack;
      this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,MethodInfo__DesktopPlayModeController__OnStackChanged__,
                 (MethodInfo *)0x0);
      if (pUVar1 == (UIStack *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UIStack::UIStack_UnSubscribeToStackChanges(pUVar1,(Action *)this_00,(MethodInfo *)0x0);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField = (IPlayModeUI *)0x0;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)
                   &TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField >>
                  0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}


/* Void OnHideTimeAttackFlagCountDown() */

void Assembly-CSharp.dll::DesktopPlayModeController::
     DesktopPlayModeController_OnHideTimeAttackFlagCountDown
               (DesktopPlayModeController *this,MethodInfo *method)

{
  this_01 = (this->fields).timeAttackFlagDebriefing;
  if ((this_01 != (TimeAttackFlagDebriefing *)0x0) &&
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_01,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pRVar2 = (this->fields).playerListButton;
    if ((pRVar2 != (RectTransform *)0x0) &&
       (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar2,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pRVar2 = (this->fields).adminGameMgmtButton;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pRVar2 != (RectTransform *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pRVar2->fields)._._._.m_CachedPtr != (void *)0x0) {
          pRVar2 = (this->fields).adminGameMgmtButton;
          if (pRVar2 != (RectTransform *)0x0) {
            pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pRVar2,(MethodInfo *)0x0);
            pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (((pMVar3 != (MVNetworkGame *)0x0) &&
                (this_00 = (pMVar3->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0))
               && (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                      (this_00,(MethodInfo *)0x0), pMVar4 != (MVLocalPlayer *)0x0))
            {
              if ((pMVar4->fields)._._ProfileID_k__BackingField < 1) {
                value = 0;
              }
              else {
                pUVar5 = (pMVar4->fields)._._UserProfileData_k__BackingField;
                if (pUVar5 == (UserProfileData *)0x0) goto code_?;
                value = (pUVar5->fields).IsAdmin;
              }
              if (pGVar1 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar1,value,(MethodInfo *)0x0);
                return;
              }
            }
          }
code_?:
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnRoundEnd(IWinningCondition) */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_OnRoundEnd
               (DesktopPlayModeController *this,IWinningCondition *winningCondition,
               MethodInfo *method)

{
  pTVar1 = (this->fields).timeAttackFlagDebriefing;
  if (pTVar1 != (TimeAttackFlagDebriefing *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar2 = (pTVar1->fields)._._._._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    cVar5 = (*pcRam_?)(pvVar2);
    if (cVar5 == '\0') {
      return;
    }
    pTVar1 = (this->fields).timeAttackFlagDebriefing;
    if (pTVar1 != (TimeAttackFlagDebriefing *)0x0) {
      TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_OnRoundEnd(pTVar1,(MethodInfo *)0x0);
      pTVar1 = (this->fields).timeAttackFlagDebriefing;
      if ((pTVar1 != (TimeAttackFlagDebriefing *)0x0) &&
         (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pTVar1,(MethodInfo *)0x0), pGVar6 != (GameObject *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar6,0,(MethodInfo *)0x0);
        this_00 = (this->fields).lobbyStateRect;
        if ((this_00 != (RectTransform *)0x0) &&
           (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this_00,(MethodInfo *)0x0), pGVar6 != (GameObject *)0x0
           )) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar6,1,(MethodInfo *)0x0);
          this_01 = (this->fields).inGameMenu;
          if ((this_01 != (InGameMenu *)0x0) &&
             (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this_01,(MethodInfo *)0x0),
             pGVar6 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar6,1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pRVar3 = (this->fields).adminGameMgmtButton;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (pRVar3 != (RectTransform *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if ((pRVar3->fields)._._._.m_CachedPtr != (void *)0x0) {
                pRVar3 = (this->fields).adminGameMgmtButton;
                if ((pRVar3 == (RectTransform *)0x0) ||
                   (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_gameObject((Component *)pRVar3,(MethodInfo *)0x0),
                   pGVar2 == (GameObject *)0x0)) {
                  FUN_?();
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar2,0,(MethodInfo *)0x0);
              }
            }
            return;
          }
        }
      }
    }
  }
  FUN_?();
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
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,1,(MethodInfo *)0x0);
    pTVar1 = (this->fields).timeAttackFlagDebriefing;
    if (pTVar1 != (TimeAttackFlagDebriefing *)0x0) {
      TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_Initialize
                (pTVar1,captureTime,(MethodInfo *)0x0);
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
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pRVar3 = (this->fields).adminGameMgmtButton;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (pRVar3 != (RectTransform *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if ((pRVar3->fields)._._._.m_CachedPtr != (void *)0x0) {
                pRVar3 = (this->fields).adminGameMgmtButton;
                if ((pRVar3 == (RectTransform *)0x0) ||
                   (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_gameObject((Component *)pRVar3,(MethodInfo *)0x0),
                   pGVar2 == (GameObject *)0x0)) {
                  FUN_?();
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar2,0,(MethodInfo *)0x0);
              }
            }
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnStackChanged() */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_OnStackChanged
               (DesktopPlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).chatController;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pCVar1 != (ChatControllerUGUI *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pCVar1->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      pCVar1 = (this->fields).chatController;
      if ((pCVar1 != (ChatControllerUGUI *)0x0) &&
         (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pCVar1,(MethodInfo *)0x0), this_00 != (GameObject *)0x0)
         ) {
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (this_00,(MethodInfo *)0x0);
        if (bVar2 == 0) {
          return;
        }
        pCVar1 = (this->fields).chatController;
        if ((pCVar1 != (ChatControllerUGUI *)0x0) &&
           (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pCVar1,(MethodInfo *)0x0), this_01 != (Transform *)0x0
           )) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                    (this_01,(MethodInfo *)0x0);
          return;
        }
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}


/* Void RegisterHotkeys() */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_RegisterHotkeys
               (DesktopPlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__DesktopPlayModeController___RegisterHotkeys_b__34_0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__DesktopPlayModeController___RegisterHotkeys_b__34_0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar2 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar2->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar2);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar3 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar3 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar4 = (longlong)(pLVar3->fields)._size;
    uVar5 = 0;
    if (0 < lVar4) {
      lVar6 = 0;
      lVar7 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar3 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar3 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar3->fields)._size <= uVar5) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar9 = (pLVar3->fields)._items;
        if (pTVar9 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar9->max_length <= uVar5) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar9->vector + lVar7 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar10 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,this_01,
                           (pMVar2->field7_0x38).rgctx_data[1].method);
        if (bVar10 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 1;
        lVar7 = lVar7 + 8;
      } while (lVar6 < lVar4);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetPixelPerfect(Boolean) */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_SetPixelPerfect
               (DesktopPlayModeController *this,bool pixelPerfect,MethodInfo *method)

{
  obj = (this->fields).canvas;
  if (obj == (Canvas *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Canvas>_UnityEngine__Canvas_
                  ,CONCAT71(in_register_00000011,pixelPerfect),0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Canvas *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,pixelPerfect);
  return;
}


/* Void SetUIReady() */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_SetUIReady
               (DesktopPlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DesktopPlayModeController__SetUIReady__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).uiStack;
  if (this_00 != (UIStack *)0x0) {
    (this_00->fields).stackReady = 1;
    UIStack::UIStack_UpdateStack(this_00,(MethodInfo *)0x0);
    pCVar1 = (this->fields).chatController;
    if ((pCVar1 != (ChatControllerUGUI *)0x0) &&
       (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pCVar1,(MethodInfo *)0x0), this_01 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,1,(MethodInfo *)0x0);
      pCVar1 = (this->fields).chatController;
      if ((pCVar1 != (ChatControllerUGUI *)0x0) &&
         (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pCVar1,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar2 = (obj->fields)._._.m_CachedPtr;
        if (pvVar2 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(pvVar2);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar5 != (MVGameControllerBase *)0x0) &&
           (pFVar6 = (pMVar5->fields).firstFrameUpdateActorReady,
           pFVar6 != (FirstFrameUpdateActorReady *)0x0)) {
          pAVar7 = (pFVar6->fields).callbacks;
          this_02 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_02,(Object *)this,MethodInfo__DesktopPlayModeController__SetUIReady__,
                     (MethodInfo *)0x0);
          pAVar8 = (Action *)
                   mscorlib.dll::System::Delegate::Delegate_Remove
                             ((Delegate *)pAVar7,(Delegate *)this_02,(MethodInfo *)0x0);
          pAVar7 = (Action *)0x0;
          if (pAVar8 != (Action *)0x0) {
            if (pAVar8->klass == TypeInfo__System__Action) {
              pAVar7 = pAVar8;
            }
            if (pAVar7 == (Action *)0x0) {
              FUN_?(pAVar8);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase,0);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((pMVar5 != (MVGameControllerBase *)0x0) &&
             (pFVar6 = (pMVar5->fields).firstFrameUpdateActorReady,
             pFVar6 != (FirstFrameUpdateActorReady *)0x0)) {
            bVar9 = iRam_? != 0;
            (pFVar6->fields).callbacks = pAVar7;
            if (bVar9) {
              uVar10 = (uint)((ulonglong)&(pFVar6->fields).callbacks >> 0xc);
              puVar11 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar12 = *puVar11;
                LOCK();
                uVar13 = *puVar11;
                if (uVar12 == uVar13) {
                  *puVar11 = uVar12 | 1L << (uVar10 & 0x3f);
                }
                UNLOCK();
              } while (uVar12 != uVar13);
            }
            return;
          }
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pSVar2,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,1,(MethodInfo *)0x0);
      pSVar2 = (pDVar1->fields).use;
      if (pSVar2 != (ShowUse *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pSVar2->klass->vtable).__unknown.methodPtr)
                  (pSVar2,(ulonglong)option,woID,(pSVar2->klass->vtable).__unknown.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ToggleLogicVisibility() */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_ToggleLogicVisibility
               (DesktopPlayModeController *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar2 == (MainCameraManager *)0x0) || (pMVar1 == (MainCameraManager *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = (pMVar2->fields).isLogicRendered == 0;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Logic);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (pMVar1->fields).mainCamera;
  if (bVar4) {
    if (this_00 == (Camera *)0x0) goto code_?;
    uVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                      (this_00,(MethodInfo *)0x0);
    uVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Logic,(MethodInfo *)0x0);
    uVar5 = uVar5 | 1 << (uVar6 & 0x1f);
  }
  else {
    if (this_00 == (Camera *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                      (this_00,(MethodInfo *)0x0);
    uVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Logic,(MethodInfo *)0x0);
    uVar5 = uVar5 & ~(1 << (uVar6 & 0x1f));
  }
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
            (this_00,uVar5,(MethodInfo *)0x0);
  (pMVar1->fields).isLogicRendered = bVar4;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_Update
               (DesktopPlayModeController *this,MethodInfo *method)

{
  ModeControllerBase::ModeControllerBase_HandleFpsShortcut
            ((ModeControllerBase *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ILockCursorManager,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                    (KogamaControls__Enum_PauseMenu,KeyState__Enum_Down,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pIVar2 = (this->fields).lockCursorManager;
    if (pIVar2 == (ILockCursorManager *)0x0) goto code_?;
    FUN_?(1,TypeInfo__ILockCursorManager,pIVar2,0);
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                    (KogamaControls__Enum_Deprecated_ToggleHD,KeyState__Enum_Down,(MethodInfo *)0x0)
  ;
  if (bVar1 != 0) {
    pUVar3 = (this->fields).uiStack;
    if (pUVar3 == (UIStack *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar4 = (pUVar3->fields).stackableUiElements;
    if (pLVar4 == (List_1_UIStack_StackElement_ *)0x0) goto code_?;
    if ((pLVar4->fields)._size < 3) {
      if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
        FUN_?();
      }
      NotificationController::NotificationController_ToggleHDIsDeprecated((MethodInfo *)0x0);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
      (IEditModeUI *)0x0) {
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVInputWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                      (KogamaControls__Enum_ToggleLogicRendering,KeyState__Enum_Down,
                       (MethodInfo *)0x0);
    if (bVar1 != 0) {
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      pMVar6 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((pMVar6 == (MainCameraManager *)0x0) || (pMVar5 == (MainCameraManager *)0x0)) {
code_?:
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      bVar8 = (pMVar6->fields).isLogicRendered == 0;
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_Logic);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (pMVar5->fields).mainCamera;
      if (bVar8) {
        if (this_00 == (Camera *)0x0) goto code_?;
        uVar9 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                          (this_00,(MethodInfo *)0x0);
        uVar10 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Logic,(MethodInfo *)0x0);
        uVar9 = uVar9 | 1 << (uVar10 & 0x1f);
      }
      else {
        if (this_00 == (Camera *)0x0) {
code_?:
          FUN_?();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar9 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                          (this_00,(MethodInfo *)0x0);
        uVar10 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Logic,(MethodInfo *)0x0);
        uVar9 = uVar9 & ~(1 << (uVar10 & 0x1f));
      }
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                (this_00,uVar9,(MethodInfo *)0x0);
      (pMVar5->fields).isLogicRendered = bVar8;
      return;
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
    FUN_?(&MethodInfo__DesktopPlayModeController__Respawn__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__DesktopPlayModeController__Respawn__,
             (MethodInfo *)0x0);
  if (x != (IShortcutKeyRegister *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* GameObject get_InGameUIRoot() */

GameObject *
Assembly-CSharp.dll::DesktopPlayModeController::DesktopPlayModeController_get_InGameUIRoot
          (DesktopPlayModeController *this,MethodInfo *method)

{
  obj = (this->fields).inGameController;
  if (obj == (DesktopInGameGUIController *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pGVar2 = (GameObject *)(*pcVar1)();
    return pGVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (DesktopInGameGUIController *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pGVar2 = (GameObject *)(*pcVar1)();
    return pGVar2;
  }
  pvVar3 = (obj->fields)._._._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pGVar2 = (GameObject *)(*pcVar1)();
    return pGVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    pGVar2 = (GameObject *)(*pcVar1)();
    return pGVar2;
  }
  pcRam_? = pcVar1;
  plVar5 = (longlong *)(*pcRam_?)(pvVar3);
  pMVar6 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(
                 UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                 );
  }
  if (plVar5 != (longlong *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    System__Runtime__InteropServices__GCHandle__MethodInfo__Unity__Collections__LowLevel__Unsafe__UnsafeUtility__As<void*,_System::Runtime::InteropServices::GCHandle>_System__IntPtr__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (((ulonglong)plVar5 & 1) == 0) {
      lVar7 = *plVar5;
    }
    else {
      lVar7 = FUN_?(plVar5);
    }
    pvVar3 = ((pMVar6->field7_0x38).rgctx_data)->rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
      pvVar3 = (void *)FUN_?(pvVar3);
    }
    if (lVar7 != 0) {
      pGVar2 = (GameObject *)FUN_?(lVar7,pvVar3,in_R8,in_R9,unaff_RDI);
      if (pGVar2 != (GameObject *)0x0) {
        return pGVar2;
      }
      FUN_?(lVar7,pvVar3);
      pcVar1 = (code *)swi(3);
      pGVar2 = (GameObject *)(*pcVar1)();
      return pGVar2;
    }
  }
  return (GameObject *)0x0;
}

