
/* Void ActivateInGameMenuState() */

void Assembly-CSharp.dll::InGameMenuStatePlayModeController::
     InGameMenuStatePlayModeController_ActivateInGameMenuState
               (InGameMenuStatePlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).lobbyMenu;
  if (pRVar1 == (RectTransform *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)pRVar1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField ==
      (IPlayModeUI *)0x0) goto code_?;
  value = FUN_?(9,TypeInfo__IPlayModeUI);
  if (pGVar3 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar3,value,(MethodInfo *)0x0);
  this_00 = (this->fields).inGameMenu;
  if (this_00 == (InGameMenu *)0x0) goto code_?;
  pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this_00,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField ==
      (IPlayModeUI *)0x0) goto code_?;
  bVar4 = FUN_?(9,TypeInfo__IPlayModeUI);
  if (pGVar3 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar3,bVar4 ^ 1,(MethodInfo *)0x0);
  this_01 = (this->fields).inGameController;
  if (this_01 == (DesktopInGameGUIController *)0x0) goto code_?;
  pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this_01,(MethodInfo *)0x0);
  if (pGVar3 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar3,0,(MethodInfo *)0x0);
  this_02 = (this->fields).chatController;
  if (this_02 == (ChatControllerUGUI *)0x0) goto code_?;
  (this_02->fields).currentlyInLobbyState = 1;
  ChatControllerUGUI::ChatControllerUGUI_UpdateFadeTime(this_02,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  (this_02->fields).shouldUpdateFade = 0;
  player = (MVPlayer *)0x0;
  ChatControllerUGUI::ChatControllerUGUI_ChatFocusChanged(this_02,0,(MethodInfo *)0x0);
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
  if (extraout_RAX == 0) goto code_?;
  if (*(int *)(extraout_RAX + 0x58) == 0) {
code_?:
    bVar4 = 0;
  }
  else {
    if (*(longlong *)(extraout_RAX + 0x70) == 0) goto code_?;
    if (*(char *)(*(longlong *)(extraout_RAX + 0x70) + 0x25) != '\0') goto code_?;
    bVar4 = 1;
  }
  pRVar1 = (this_02->fields)._._InputAreaRoot_k__BackingField;
  if (pRVar1 != (RectTransform *)0x0) {
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pRVar1,(MethodInfo *)0x0);
    if (pGVar3 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,bVar4,(MethodInfo *)0x0);
      pRVar1 = (this_02->fields).inputAreaDeactivated;
      if (pRVar1 != (RectTransform *)0x0) {
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar1,(MethodInfo *)0x0);
        if (pGVar3 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,bVar4 ^ 1,(MethodInfo *)0x0);
          pSVar5 = (this_02->fields)._._ScrollRect_k__BackingField;
          if (pSVar5 != (ScrollRect *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pSVar5->klass->vtable).SetNormalizedPosition.methodPtr)
                      (pSVar5,0,1,(pSVar5->klass->vtable).SetNormalizedPosition.method);
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void DeactivateInGameMenuState() */

void Assembly-CSharp.dll::InGameMenuStatePlayModeController::
     InGameMenuStatePlayModeController_DeactivateInGameMenuState
               (InGameMenuStatePlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
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
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pIVar2 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
                if (pIVar2 != (IPlayModeUI *)0x0) {
                  pIVar3 = (Il2CppRuntimeInterfaceOffsetPair *)0x0;
                  uVar4 = 0;
                  pIVar5 = pIVar2->klass;
                  uVar6._0_1_ = (pIVar5->_1).rank;
                  uVar6._1_1_ = (pIVar5->_1).minimumAlignment;
                  if (uVar6 != 0) {
                    pIVar3 = pIVar5->interfaceOffsets;
                    do {
                      if (pIVar3[uVar4].interfaceType == (Il2CppClass *)TypeInfo__IPlayModeUI) {
                        pVVar7 = &(pIVar5->vtable).ShowEUseIcon + (pIVar3[uVar4].offset + 10);
                        goto code_?;
                      }
                      uVar4 = uVar4 + 1;
                    } while (uVar4 < uVar6);
                  }
                  pVVar7 = (VirtualInvokeData *)
                           FUN_?(pIVar2,TypeInfo__IPlayModeUI,10,pIVar3);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pVVar7->methodPtr)(pIVar2,0,pVVar7->method,pVVar7->methodPtr);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void DisableLobbyState() */

void Assembly-CSharp.dll::InGameMenuStatePlayModeController::
     InGameMenuStatePlayModeController_DisableLobbyState
               (InGameMenuStatePlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
  if (pIVar1 != (IPlayModeUI *)0x0) {
    FUN_?(10,TypeInfo__IPlayModeUI,pIVar1,0);
    pRVar2 = (this->fields).lobbyMenu;
    if ((pRVar2 != (RectTransform *)0x0) &&
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar2,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar4 = (pGVar3->fields)._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar3,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      cVar7 = (*pcRam_?)(pvVar4);
      if (cVar7 == '\0') {
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
  FUN_?();
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
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).lobbyMenu;
  if ((this_00 != (RectTransform *)0x0) &&
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0), obj != (GameObject *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar1 = (obj->fields)._.m_CachedPtr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    cVar4 = (*pcRam_?)(pvVar1);
    if (cVar4 == '\0') {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pIVar5 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
      if (pIVar5 == (IPlayModeUI *)0x0) goto code_?;
      FUN_?(10,TypeInfo__IPlayModeUI,pIVar5,1);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__InGameMenuStatePlayModeController__DisableLobbyState__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__InGameMenuStatePlayModeController__EnableLobbyState__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__InGameMenuStatePlayModeController__UpdateInGameMenuState_bool_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
      (pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 == (GameEventManager *)0x0)) ||
     (pGVar4 = (pGVar3->fields).GameState, pGVar4 == (GameEventManager_GameStateManager *)0x0)) {
code_?:
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pAVar6 = (pGVar4->fields).OnEnableLobbyState;
  pNVar7 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar7,(Object *)this,
             MethodInfo__InGameMenuStatePlayModeController__EnableLobbyState__,(MethodInfo *)0x0);
  pAVar6 = (Action *)
            mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pAVar6,(Delegate *)pNVar7,(MethodInfo *)0x0);
  pAVar8 = (Action *)0x0;
  if (pAVar6 == (Action *)0x0) {
    (pGVar4->fields).OnEnableLobbyState = (Action *)0x0;
  }
  else {
    pAVar9 = pAVar8;
    if (pAVar6->klass == TypeInfo__System__Action) {
      pAVar9 = pAVar6;
    }
    if (pAVar9 == (Action *)0x0) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (pGVar4->fields).OnEnableLobbyState = pAVar9;
    pAVar9 = pAVar8;
    if (pAVar6->klass == TypeInfo__System__Action) {
      pAVar9 = pAVar6;
    }
    if (pAVar9 == (Action *)0x0) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar10 = (uint)((ulonglong)&pGVar4->fields >> 0xc);
    lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
    do {
      uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
      puVar13 = (ulonglong *)(lVar11 + 0xADDR);
      LOCK();
      bVar14 = uVar12 == *puVar13;
      if (bVar14) {
        *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
      }
      UNLOCK();
    } while (!bVar14);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 == (MVGameControllerBase *)0x0) ||
      (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
     ((pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 == (GameEventManager *)0x0 ||
      (pGVar4 = (pGVar3->fields).GameState, pGVar4 == (GameEventManager_GameStateManager *)0x0))))
  goto code_?;
  pAVar6 = (pGVar4->fields).OnDisableLobbyState;
  pNVar7 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar7,(Object *)this,
             MethodInfo__InGameMenuStatePlayModeController__DisableLobbyState__,(MethodInfo *)0x0);
  pAVar6 = (Action *)
            mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pAVar6,(Delegate *)pNVar7,(MethodInfo *)0x0);
  if (pAVar6 == (Action *)0x0) {
    (pGVar4->fields).OnDisableLobbyState = (Action *)0x0;
  }
  else {
    pAVar9 = pAVar8;
    if (pAVar6->klass == TypeInfo__System__Action) {
      pAVar9 = pAVar6;
    }
    if (pAVar9 == (Action *)0x0) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (pGVar4->fields).OnDisableLobbyState = pAVar9;
    pAVar9 = pAVar8;
    if (pAVar6->klass == TypeInfo__System__Action) {
      pAVar9 = pAVar6;
    }
    if (pAVar9 == (Action *)0x0) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar10 = (uint)((ulonglong)&(pGVar4->fields).OnDisableLobbyState >> 0xc);
    lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
    do {
      uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
      puVar13 = (ulonglong *)(lVar11 + 0xADDR);
      LOCK();
      bVar14 = uVar12 == *puVar13;
      if (bVar14) {
        *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
      }
      UNLOCK();
    } while (!bVar14);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar15 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
  if (pIVar15 == (IPlayModeUI *)0x0) goto code_?;
  pDVar16 = (Delegate *)FUN_?(3,TypeInfo__IPlayModeUI,pIVar15);
  b = (Delegate *)FUN_?(TypeInfo__System__Action<bool>);
  FUN_?(b,this);
  pDVar16 = mscorlib.dll::System::Delegate::Delegate_Combine(pDVar16,b,(MethodInfo *)0x0);
  pAVar17 = TypeInfo__System__Action<bool>;
  if ((pDVar16 != (Delegate *)0x0) &&
     (pAVar8 = (Action *)FUN_?(pDVar16,TypeInfo__System__Action<bool>),
     pAVar8 == (Action *)0x0)) {
    FUN_?(pDVar16,pAVar17);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FUN_?(4,TypeInfo__IPlayModeUI,pIVar15,pAVar8);
  iVar18 = iRam_?;
  (this->fields).inGameController = inGameController;
  if (iVar18 != 0) {
    uVar10 = (uint)((ulonglong)&(this->fields).inGameController >> 0xc);
    lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
    do {
      uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
      puVar13 = (ulonglong *)(lVar11 + 0xADDR);
      LOCK();
      bVar14 = uVar12 == *puVar13;
      if (bVar14) {
        *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
      }
      UNLOCK();
      iVar18 = iRam_?;
    } while (!bVar14);
  }
  (this->fields).lobbyMenu = lobbyMenuTransform;
  iVar19 = 0;
  if (iVar18 != 0) {
    uVar10 = (uint)((ulonglong)&(this->fields).lobbyMenu >> 0xc);
    lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
    do {
      uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
      puVar13 = (ulonglong *)(lVar11 + 0xADDR);
      LOCK();
      bVar14 = uVar12 == *puVar13;
      if (bVar14) {
        *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
      }
      UNLOCK();
      iVar19 = iRam_?;
    } while (!bVar14);
  }
  (this->fields).inGameMenu = inGameMenu;
  iVar18 = 0;
  if (iVar19 != 0) {
    uVar10 = (uint)((ulonglong)&(this->fields).inGameMenu >> 0xc);
    lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
    do {
      uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
      puVar13 = (ulonglong *)(lVar11 + 0xADDR);
      LOCK();
      bVar14 = uVar12 == *puVar13;
      if (bVar14) {
        *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
      }
      UNLOCK();
      iVar18 = iRam_?;
    } while (!bVar14);
  }
  (this->fields).chatController = chatController;
  if (iVar18 != 0) {
    uVar10 = (uint)((ulonglong)&(this->fields).chatController >> 0xc);
    lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
    do {
      uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
      puVar13 = (ulonglong *)(lVar11 + 0xADDR);
      LOCK();
      bVar14 = uVar12 == *puVar13;
      if (bVar14) {
        *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
      }
      UNLOCK();
    } while (!bVar14);
  }
  bVar20 = (this->fields).isInMenu;
  (this->fields).isInMenu = bVar20;
  if (bVar20 == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__IPlayModeUI,0,0,0xADDR,unaff_RDI);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pRVar21 = (this->fields).lobbyMenu;
    if ((pRVar21 != (RectTransform *)0x0) &&
       (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pRVar21,(MethodInfo *)0x0), pGVar22 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar22,0,(MethodInfo *)0x0);
      pIVar23 = (this->fields).inGameMenu;
      if ((pIVar23 != (InGameMenu *)0x0) &&
         (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pIVar23,(MethodInfo *)0x0), pGVar22 != (GameObject *)0x0
         )) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar22,0,(MethodInfo *)0x0);
        pDVar24 = (this->fields).inGameController;
        if ((pDVar24 != (DesktopInGameGUIController *)0x0) &&
           (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pDVar24,(MethodInfo *)0x0),
           pGVar22 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar22,1,(MethodInfo *)0x0);
          pCVar25 = (this->fields).chatController;
          if (pCVar25 != (ChatControllerUGUI *)0x0) {
            ChatControllerUGUI::ChatControllerUGUI_OnInGameMenuStateChange
                      (pCVar25,1,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pIVar15 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
            if (pIVar15 != (IPlayModeUI *)0x0) {
              pIVar26 = (Il2CppRuntimeInterfaceOffsetPair *)0x0;
              uVar27 = 0;
              pIVar28 = pIVar15->klass;
              uVar29._0_1_ = (pIVar28->_1).rank;
              uVar29._1_1_ = (pIVar28->_1).minimumAlignment;
              if (uVar29 != 0) {
                pIVar26 = pIVar28->interfaceOffsets;
                do {
                  if (pIVar26[uVar27].interfaceType == (Il2CppClass *)TypeInfo__IPlayModeUI) {
                    pVVar30 = &(pIVar28->vtable).ShowEUseIcon + (pIVar26[uVar27].offset + 10);
                    goto code_?;
                  }
                  uVar27 = uVar27 + 1;
                } while (uVar27 < uVar29);
              }
              pVVar30 = (VirtualInvokeData *)
                        FUN_?(pIVar15,TypeInfo__IPlayModeUI,10,pIVar26,unaff_RDI);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pVVar30->methodPtr)(pIVar15,0,pVVar30->method,pVVar30->methodPtr);
              return;
            }
          }
        }
      }
    }
code_?:
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IPlayModeUI,bVar20,0,0xADDR,unaff_RDI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar21 = (this->fields).lobbyMenu;
  if (pRVar21 == (RectTransform *)0x0) goto code_?;
  pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pRVar21,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField ==
       (IPlayModeUI *)0x0) ||
     (bVar20 = FUN_?(9,TypeInfo__IPlayModeUI), pGVar22 == (GameObject *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar22,bVar20,(MethodInfo *)0x0);
  pIVar23 = (this->fields).inGameMenu;
  if (pIVar23 == (InGameMenu *)0x0) goto code_?;
  pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pIVar23,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField ==
       (IPlayModeUI *)0x0) ||
     (bVar31 = FUN_?(9,TypeInfo__IPlayModeUI), pGVar22 == (GameObject *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar22,bVar31 ^ 1,(MethodInfo *)0x0);
  pDVar24 = (this->fields).inGameController;
  if ((pDVar24 == (DesktopInGameGUIController *)0x0) ||
     (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pDVar24,(MethodInfo *)0x0), pGVar22 == (GameObject *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar22,0,(MethodInfo *)0x0);
  pCVar25 = (this->fields).chatController;
  if (pCVar25 == (ChatControllerUGUI *)0x0) goto code_?;
  (pCVar25->fields).currentlyInLobbyState = 1;
  ChatControllerUGUI::ChatControllerUGUI_UpdateFadeTime(pCVar25,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  (pCVar25->fields).shouldUpdateFade = 0;
  player = (MVPlayer *)0x0;
  ChatControllerUGUI::ChatControllerUGUI_ChatFocusChanged(pCVar25,0,(MethodInfo *)0x0);
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
  if (extraout_RAX == 0) goto code_?;
  if (*(int *)(extraout_RAX + 0x58) == 0) {
code_?:
    bVar31 = 0;
  }
  else {
    if (*(longlong *)(extraout_RAX + 0x70) == 0) goto code_?;
    if (*(char *)(*(longlong *)(extraout_RAX + 0x70) + 0x25) != '\0') goto code_?;
    bVar31 = 1;
  }
  pRVar21 = (pCVar25->fields)._._InputAreaRoot_k__BackingField;
  if ((pRVar21 != (RectTransform *)0x0) &&
     (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pRVar21,(MethodInfo *)0x0), pGVar22 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar22,bVar31,(MethodInfo *)0x0);
    pRVar21 = (pCVar25->fields).inputAreaDeactivated;
    if ((pRVar21 != (RectTransform *)0x0) &&
       (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pRVar21,(MethodInfo *)0x0), pGVar22 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar22,bVar31 ^ 1,(MethodInfo *)0x0);
      pSVar32 = (pCVar25->fields)._._ScrollRect_k__BackingField;
      if (pSVar32 != (ScrollRect *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pSVar32->klass->vtable).SetNormalizedPosition.methodPtr)
                  (pSVar32,0,1,(pSVar32->klass->vtable).SetNormalizedPosition.method);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
      FUN_?(&TypeInfo__IPlayModeUI);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pRVar1 = (this->fields).lobbyMenu;
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
                pCVar5 = (this->fields).chatController;
                if (pCVar5 != (ChatControllerUGUI *)0x0) {
                  ChatControllerUGUI::ChatControllerUGUI_OnInGameMenuStateChange
                            (pCVar5,1,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__MVGameControllerBase);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pIVar6 = TypeInfo__MVGameControllerBase->static_fields->
                           _PlayModeUI_k__BackingField;
                  if (pIVar6 != (IPlayModeUI *)0x0) {
                    pIVar7 = (Il2CppRuntimeInterfaceOffsetPair *)0x0;
                    uVar8 = 0;
                    pIVar9 = pIVar6->klass;
                    uVar10._0_1_ = (pIVar9->_1).rank;
                    uVar10._1_1_ = (pIVar9->_1).minimumAlignment;
                    if (uVar10 != 0) {
                      pIVar7 = pIVar9->interfaceOffsets;
                      do {
                        if (pIVar7[uVar8].interfaceType == (Il2CppClass *)TypeInfo__IPlayModeUI) {
                          pVVar11 = &(pIVar9->vtable).ShowEUseIcon + (pIVar7[uVar8].offset + 10);
                          goto code_?;
                        }
                        uVar8 = uVar8 + 1;
                      } while (uVar8 < uVar10);
                    }
                    pVVar11 = (VirtualInvokeData *)
                              FUN_?(pIVar6,TypeInfo__IPlayModeUI,10,pIVar7,unaff_RDI);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*pVVar11->methodPtr)(pIVar6,0,pVVar11->method,pVVar11->methodPtr);
                    return;
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
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).lobbyMenu;
  if (pRVar1 == (RectTransform *)0x0) goto code_?;
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pRVar1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField ==
      (IPlayModeUI *)0x0) goto code_?;
  value = FUN_?(9,TypeInfo__IPlayModeUI);
  if (pGVar2 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar2,value,(MethodInfo *)0x0);
  pIVar3 = (this->fields).inGameMenu;
  if (pIVar3 == (InGameMenu *)0x0) goto code_?;
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pIVar3,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField ==
      (IPlayModeUI *)0x0) goto code_?;
  bVar13 = FUN_?(9,TypeInfo__IPlayModeUI);
  if (pGVar2 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar2,bVar13 ^ 1,(MethodInfo *)0x0);
  pDVar4 = (this->fields).inGameController;
  if (pDVar4 == (DesktopInGameGUIController *)0x0) goto code_?;
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pDVar4,(MethodInfo *)0x0);
  if (pGVar2 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar2,0,(MethodInfo *)0x0);
  pCVar5 = (this->fields).chatController;
  if (pCVar5 == (ChatControllerUGUI *)0x0) goto code_?;
  (pCVar5->fields).currentlyInLobbyState = 1;
  ChatControllerUGUI::ChatControllerUGUI_UpdateFadeTime(pCVar5,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  (pCVar5->fields).shouldUpdateFade = 0;
  player = (MVPlayer *)0x0;
  ChatControllerUGUI::ChatControllerUGUI_ChatFocusChanged(pCVar5,0,(MethodInfo *)0x0);
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
  if (extraout_RAX == 0) goto code_?;
  if (*(int *)(extraout_RAX + 0x58) == 0) {
code_?:
    bVar13 = 0;
  }
  else {
    if (*(longlong *)(extraout_RAX + 0x70) == 0) goto code_?;
    if (*(char *)(*(longlong *)(extraout_RAX + 0x70) + 0x25) != '\0') goto code_?;
    bVar13 = 1;
  }
  pRVar1 = (pCVar5->fields)._._InputAreaRoot_k__BackingField;
  if (pRVar1 != (RectTransform *)0x0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pRVar1,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,bVar13,(MethodInfo *)0x0);
      pRVar1 = (pCVar5->fields).inputAreaDeactivated;
      if (pRVar1 != (RectTransform *)0x0) {
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pRVar1,(MethodInfo *)0x0);
        if (pGVar2 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,bVar13 ^ 1,(MethodInfo *)0x0);
          pSVar14 = (pCVar5->fields)._._ScrollRect_k__BackingField;
          if (pSVar14 != (ScrollRect *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pSVar14->klass->vtable).SetNormalizedPosition.methodPtr)
                      (pSVar14,0,1,(pSVar14->klass->vtable).SetNormalizedPosition.method);
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void UpdateInGameMenuState(Boolean) */

void Assembly-CSharp.dll::InGameMenuStatePlayModeController::
     InGameMenuStatePlayModeController_UpdateInGameMenuState
               (InGameMenuStatePlayModeController *this,bool isEnteringMenu,MethodInfo *method)

{
  bVar1 = (this->fields).isInMenu;
  if (isEnteringMenu == 0) {
    if (bVar1 == 0) {
      return;
    }
    InGameMenuStatePlayModeController_SetObjectToInGameMenuState(this,0,(MethodInfo *)0x0);
    pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                        ((MethodInfo *)0x0);
    if ((pSVar2 != (SpawnRoleDataMediator *)0x0) &&
       (pSVar3 = (pSVar2->fields).SpawnRoleModeTypeWrapper,
       pSVar3 != (SpawnRoleModeTypeWrapper *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar4 = (pSVar3->fields).spawnRoleType;
      if ((pSVar4 != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) &&
         (pSVar5 = (pSVar4->fields).subscribableVariable,
         pSVar5 != (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0)) {
        if (((pSVar5->fields)._.value & 4) == 0) {
          return;
        }
        pGVar6 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0)
        ;
        if ((pGVar6 != (GameEventManager *)0x0) &&
           (pGVar7 = (pGVar6->fields).AvatarCommandsPlayMode,
           pGVar7 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
          if ((pGVar7->fields).OnEnterPlaymode == (Action *)0x0) {
            return;
          }
          pAVar8 = (pGVar7->fields).OnEnterPlaymode;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pAVar8->fields)._._.invoke_impl)
                    ((pAVar8->fields)._._.method_code,(pAVar8->fields)._._.method);
          return;
        }
      }
    }
code_?:
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (bVar1 != 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ILockCursorManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    pMVar10 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
    if ((pMVar10 == (MVGameControllerDesktop *)0x0) ||
       (pIVar11 = (pMVar10->fields).lockCursorManager, pIVar11 == (ILockCursorManager *)0x0))
    goto code_?;
    FUN_?(1,TypeInfo__ILockCursorManager,pIVar11,0);
  }
  (this->fields).isInMenu = 1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar12 = (this->fields).lobbyMenu;
  if (pRVar12 == (RectTransform *)0x0) {
code_?:
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pRVar12,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField ==
       (IPlayModeUI *)0x0) ||
     (bVar1 = FUN_?(9,TypeInfo__IPlayModeUI), pGVar13 == (GameObject *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar13,bVar1,(MethodInfo *)0x0);
  this_00 = (this->fields).inGameMenu;
  if (this_00 == (InGameMenu *)0x0) goto code_?;
  pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField ==
       (IPlayModeUI *)0x0) ||
     (bVar14 = FUN_?(9,TypeInfo__IPlayModeUI), pGVar13 == (GameObject *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar13,bVar14 ^ 1,(MethodInfo *)0x0);
  this_01 = (this->fields).inGameController;
  if ((this_01 == (DesktopInGameGUIController *)0x0) ||
     (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_01,(MethodInfo *)0x0), pGVar13 == (GameObject *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar13,0,(MethodInfo *)0x0);
  this_02 = (this->fields).chatController;
  if (this_02 == (ChatControllerUGUI *)0x0) goto code_?;
  (this_02->fields).currentlyInLobbyState = 1;
  ChatControllerUGUI::ChatControllerUGUI_UpdateFadeTime(this_02,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  (this_02->fields).shouldUpdateFade = 0;
  player = (MVPlayer *)0x0;
  ChatControllerUGUI::ChatControllerUGUI_ChatFocusChanged(this_02,0,(MethodInfo *)0x0);
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
  if (extraout_RAX == 0) goto code_?;
  if (*(int *)(extraout_RAX + 0x58) == 0) {
code_?:
    bVar14 = 0;
  }
  else {
    if (*(longlong *)(extraout_RAX + 0x70) == 0) goto code_?;
    if (*(char *)(*(longlong *)(extraout_RAX + 0x70) + 0x25) != '\0') goto code_?;
    bVar14 = 1;
  }
  pRVar12 = (this_02->fields)._._InputAreaRoot_k__BackingField;
  if ((pRVar12 != (RectTransform *)0x0) &&
     (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pRVar12,(MethodInfo *)0x0), pGVar13 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar13,bVar14,(MethodInfo *)0x0);
    pRVar12 = (this_02->fields).inputAreaDeactivated;
    if ((pRVar12 != (RectTransform *)0x0) &&
       (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pRVar12,(MethodInfo *)0x0), pGVar13 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar13,bVar14 ^ 1,(MethodInfo *)0x0);
      pSVar15 = (this_02->fields)._._ScrollRect_k__BackingField;
      if (pSVar15 != (ScrollRect *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pSVar15->klass->vtable).SetNormalizedPosition.methodPtr)
                  (pSVar15,0,1,(pSVar15->klass->vtable).SetNormalizedPosition.method);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* InGameMenuStatePlayModeController() */

void Assembly-CSharp.dll::InGameMenuStatePlayModeController::InGameMenuStatePlayModeController__ctor
               (InGameMenuStatePlayModeController *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).isInMenu = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x30529dd4,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

