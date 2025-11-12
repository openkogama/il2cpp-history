
/* Void Activate(ActivateUIElement) */

void Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController_Activate
               (TouchPlayModeController *this,ActivateUIElement__Enum element,MethodInfo *method)

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


/* Void ActivatePauseMenuState() */

void Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController_ActivatePauseMenuState
               (TouchPlayModeController *this,MethodInfo *method)

{
  this_00 = (this->fields).lobbyState;
  if ((this_00 != (RectTransform *)0x0) &&
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    this_01 = (this->fields).inGameMenu;
    if ((this_01 != (AndroidInGameMenu *)0x0) &&
       (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_01,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
      this_02 = (this->fields).playModeControlsBase;
      if ((this_02 != (PlayModeControlsBase *)0x0) &&
         (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_02,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0))
      {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,0,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pGVar1 == (GameObject *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar3 = (pGVar1->fields)._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
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
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController_Awake
               (TouchPlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ResolutionManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TouchPlayModeController__SetUIReady__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  canvasScaler = (this->fields).canvasScaler;
  if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  ResolutionManager::ResolutionManager_Init(canvasScaler,(MethodInfo *)0x0);
  pUVar1 = (this->fields).uiStack;
  if (pUVar1 != (UIStack *)0x0) {
    value = (Action *)0x0;
    UIStack::UIStack_Push
              (pUVar1,(this->fields).stackBottom,UIPushOption__Enum_None,(UnityAction *)0x0,
               UIGroupFlags__Enum_StackBottom,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar2 != (MVGameControllerBase *)0x0) &&
         (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
        (this_00 = (pMVar3->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
       (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       pMVar4 != (MVLocalPlayer *)0x0)) {
      if ((pMVar4->fields)._.playerState != 1) {
        pAVar5 = MVGameControllerBase::MVGameControllerBase_get_OnFirstFrameUpdateActorReady
                            ((MethodInfo *)0x0);
        pNVar6 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar6,(Object *)this,MethodInfo__TouchPlayModeController__SetUIReady__,
                   (MethodInfo *)0x0);
        pAVar5 = (Action *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pAVar5,(Delegate *)pNVar6,(MethodInfo *)0x0);
        if (pAVar5 != (Action *)0x0) {
          if (pAVar5->klass == TypeInfo__System__Action) {
            value = pAVar5;
          }
          if (value == (Action *)0x0) {
            FUN_?(pAVar5);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
code_?:
        MVGameControllerBase::MVGameControllerBase_set_OnFirstFrameUpdateActorReady
                  (value,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&
                        AndroidChatController_MethodInfo__UnityEngine__Object__Instantiate<AndroidChatController>_AndroidChatController__UnityEngine__Transform__bool_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        PlayMode3DController_MethodInfo__UnityEngine__Object__Instantiate<PlayMode3DController>_PlayMode3DController__UnityEngine__Transform__bool_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar8 = (this->fields).stackBottom;
        pAVar9 = (this->fields).chatController;
        if (pGVar8 != (GameObject *)0x0) {
          pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar8,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pAVar9 = (AndroidChatController *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                              ((Object *)pAVar9,pTVar10,0,
                               AndroidChatController_MethodInfo__UnityEngine__Object__Instantiate<AndroidChatController>_AndroidChatController__UnityEngine__Transform__bool_
                              );
          bVar11 = iRam_? != 0;
          (this->fields).chatController = pAVar9;
          if (bVar11) {
            uVar12 = (uint)((ulonglong)&(this->fields).chatController >> 0xc);
            lVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6) * 8;
            do {
              uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
              puVar15 = (ulonglong *)(lVar13 + 0xADDR);
              LOCK();
              bVar11 = uVar14 == *puVar15;
              if (bVar11) {
                *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
              }
              UNLOCK();
            } while (!bVar11);
          }
          pGVar8 = (this->fields).stackBottom;
          original = (this->fields).playMode3DControllerPrefab;
          if (pGVar8 != (GameObject *)0x0) {
            pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar8,(MethodInfo *)0x0);
            pPVar16 = (PlayModeControlsBase *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                                ((Object *)original,pTVar10,0,
                                 PlayMode3DController_MethodInfo__UnityEngine__Object__Instantiate<PlayMode3DController>_PlayMode3DController__UnityEngine__Transform__bool_
                                );
            bVar11 = iRam_? != 0;
            (this->fields).playModeControlsBase = pPVar16;
            if (bVar11) {
              uVar12 = (uint)((ulonglong)&(this->fields).playModeControlsBase >> 0xc);
              lVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6) * 8;
              do {
                uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
                puVar15 = (ulonglong *)(lVar13 + 0xADDR);
                LOCK();
                bVar11 = uVar14 == *puVar15;
                if (bVar11) {
                  *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
                }
                UNLOCK();
              } while (!bVar11);
            }
            pPVar16 = (this->fields).playModeControlsBase;
            if ((pPVar16 != (PlayModeControlsBase *)0x0) &&
               (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pPVar16,(MethodInfo *)0x0),
               pGVar8 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar8,0,(MethodInfo *)0x0);
              pGVar8 = (this->fields).stackBottom;
              original_00 = (this->fields).notificationManager;
              if (pGVar8 != (GameObject *)0x0) {
                pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(pGVar8,(MethodInfo *)0x0);
                pMVar17 = 
                UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                ;
                if ((
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                    ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                  FUN_?(&TypeInfo__UnityEngine__Object);
                  LOCK();
                  UNLOCK();
                  if ((pMVar17->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                    FUN_?(pMVar17);
                  }
                }
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pOVar18 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_3
                                    ((Object_1 *)original_00,pTVar10,0,(MethodInfo *)0x0);
                pvVar19 = ((pMVar17->field7_0x38).rgctx_data)->rgctxDataDummy;
                if ((*(byte *)((longlong)pvVar19 + 0x135) & 1) == 0) {
                  pvVar19 = (void *)FUN_?(pvVar19);
                }
                if ((pOVar18 != (Object_1 *)0x0) &&
                   (lVar13 = FUN_?(pOVar18,pvVar19), lVar13 == 0)) {
                  FUN_?(pOVar18,pvVar19);
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                return;
              }
            }
          }
        }
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Action);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__TouchPlayModeController__SetUIReady__);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pUVar1 = (this->fields).uiStack;
      if (pUVar1 != (UIStack *)0x0) {
        (pUVar1->fields).stackReady = 1;
        UIStack::UIStack_UpdateStack(pUVar1,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar2 != (MVGameControllerBase *)0x0) &&
           (pFVar20 = (pMVar2->fields).firstFrameUpdateActorReady,
           pFVar20 != (FirstFrameUpdateActorReady *)0x0)) {
          pAVar5 = (pFVar20->fields).callbacks;
          pNVar6 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar6,(Object *)this,MethodInfo__TouchPlayModeController__SetUIReady__,
                     (MethodInfo *)0x0);
          pAVar5 = (Action *)
                    mscorlib.dll::System::Delegate::Delegate_Remove
                              ((Delegate *)pAVar5,(Delegate *)pNVar6,(MethodInfo *)0x0);
          if (pAVar5 != (Action *)0x0) {
            if (pAVar5->klass == TypeInfo__System__Action) {
              value = pAVar5;
            }
            if (value == (Action *)0x0) {
              FUN_?(pAVar5);
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          goto code_?;
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void CreateCanvasGUITemp() */

void Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController_CreateCanvasGUITemp
               (TouchPlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  AndroidChatController_MethodInfo__UnityEngine__Object__Instantiate<AndroidChatController>_AndroidChatController__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  PlayMode3DController_MethodInfo__UnityEngine__Object__Instantiate<PlayMode3DController>_PlayMode3DController__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).stackBottom;
  pAVar2 = (this->fields).chatController;
  if (pGVar1 != (GameObject *)0x0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pAVar2 = (AndroidChatController *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                       ((Object *)pAVar2,pTVar3,0,
                        AndroidChatController_MethodInfo__UnityEngine__Object__Instantiate<AndroidChatController>_AndroidChatController__UnityEngine__Transform__bool_
                       );
    bVar4 = iRam_? != 0;
    (this->fields).chatController = pAVar2;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).chatController >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    pGVar1 = (this->fields).stackBottom;
    original = (this->fields).playMode3DControllerPrefab;
    if (pGVar1 != (GameObject *)0x0) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar1,(MethodInfo *)0x0);
      pPVar9 = (PlayModeControlsBase *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                         ((Object *)original,pTVar3,0,
                          PlayMode3DController_MethodInfo__UnityEngine__Object__Instantiate<PlayMode3DController>_PlayMode3DController__UnityEngine__Transform__bool_
                         );
      bVar4 = iRam_? != 0;
      (this->fields).playModeControlsBase = pPVar9;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(this->fields).playModeControlsBase >> 0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar4 = uVar7 == *puVar8;
          if (bVar4) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar4);
      }
      pPVar9 = (this->fields).playModeControlsBase;
      if ((pPVar9 != (PlayModeControlsBase *)0x0) &&
         (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pPVar9,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,0,(MethodInfo *)0x0);
        pGVar1 = (this->fields).stackBottom;
        original_00 = (this->fields).notificationManager;
        if (pGVar1 != (GameObject *)0x0) {
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar1,(MethodInfo *)0x0);
          pMVar10 = 
          UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
          ;
          if ((
              UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            if ((pMVar10->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
              FUN_?(pMVar10);
            }
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pOVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_3
                             ((Object_1 *)original_00,pTVar3,0,(MethodInfo *)0x0);
          pvVar12 = ((pMVar10->field7_0x38).rgctx_data)->rgctxDataDummy;
          if ((*(byte *)((longlong)pvVar12 + 0x135) & 1) == 0) {
            pvVar12 = (void *)FUN_?(pvVar12);
          }
          if ((pOVar11 != (Object_1 *)0x0) && (lVar6 = FUN_?(pOVar11,pvVar12), lVar6 == 0))
          {
            FUN_?(pOVar11,pvVar12);
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
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


/* Void DeActivatePauseMenuState() */

void Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController_DeActivatePauseMenuState
               (TouchPlayModeController *this,MethodInfo *method)

{
  this_00 = (this->fields).lobbyState;
  if ((this_00 != (RectTransform *)0x0) &&
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    this_01 = (this->fields).inGameMenu;
    if ((this_01 != (AndroidInGameMenu *)0x0) &&
       (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_01,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      this_02 = (this->fields).playModeControlsBase;
      if ((this_02 != (PlayModeControlsBase *)0x0) &&
         (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_02,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0))
      {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,1,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pGVar1 == (GameObject *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar3 = (pGVar1->fields)._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
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
        (*pcRam_?)(pvVar3,1);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HideEUseIcon() */

void Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController_HideEUseIcon
               (TouchPlayModeController *this,MethodInfo *method)

{
  pPVar1 = (this->fields).playModeControlsBase;
  if (((pPVar1 == (PlayModeControlsBase *)0x0) ||
      (this_00 = (pPVar1->fields).useButtonLarge, this_00 == (ShowUse *)0x0)) ||
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

void Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController_Initialize
               (TouchPlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AndroidChatController__OnIsPausedStateChange_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ChatCommandManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&
                  AndroidInGameMenu_MethodInfo__UnityEngine__Object__Instantiate<AndroidInGameMenu>_AndroidInGameMenu__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  ChatBubbleController_MethodInfo__UnityEngine__Object__Instantiate<ChatBubbleController>_ChatBubbleController__UnityEngine__Transform__bool_
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
    FUN_?(&TypeInfo__TouchInputMap);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TouchPlayModeController__HideUI__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TouchPlayModeController__OnHideTimeAttackFlagCountDown__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TouchPlayModeController__OnIsPausedStateChange_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TouchPlayModeController__OnShowTimeAttackFlagCountDown__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_04 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_04 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_Init(this_04,(MethodInfo *)0x0);
    pCVar1 = (this->fields).chatBubbleController;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pCVar1 = (ChatBubbleController *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                        ((Object *)pCVar1,pTVar2,0,
                         ChatBubbleController_MethodInfo__UnityEngine__Object__Instantiate<ChatBubbleController>_ChatBubbleController__UnityEngine__Transform__bool_
                        );
    bVar3 = iRam_? != 0;
    (this->fields).chatBubbleController = pCVar1;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).chatBubbleController >> 0xc);
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
    pGVar8 = (this->fields).stackBottom;
    pRVar9 = (this->fields).lobbyState;
    if (pGVar8 != (GameObject *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar8,(MethodInfo *)0x0);
      pRVar9 = (RectTransform *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                          ((Object *)pRVar9,pTVar2,0,
                           UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform__UnityEngine__Transform__bool_
                          );
      bVar3 = iRam_? != 0;
      (this->fields).lobbyState = pRVar9;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields).lobbyState >> 0xc);
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
      pGVar8 = (this->fields).stackBottom;
      pAVar10 = (this->fields).inGameMenu;
      if (pGVar8 != (GameObject *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar8,(MethodInfo *)0x0);
        pAVar10 = (AndroidInGameMenu *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                            ((Object *)pAVar10,pTVar2,0,
                             AndroidInGameMenu_MethodInfo__UnityEngine__Object__Instantiate<AndroidInGameMenu>_AndroidInGameMenu__UnityEngine__Transform__bool_
                            );
        bVar3 = iRam_? != 0;
        (this->fields).inGameMenu = pAVar10;
        if (bVar3) {
          uVar4 = (uint)((ulonglong)&(this->fields).inGameMenu >> 0xc);
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
        pAVar10 = (this->fields).inGameMenu;
        if (pAVar10 != (AndroidInGameMenu *)0x0) {
          AndroidInGameMenu::AndroidInGameMenu_Initialize(pAVar10,(MethodInfo *)0x0);
          pAVar10 = (this->fields).inGameMenu;
          if ((pAVar10 != (AndroidInGameMenu *)0x0) &&
             (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pAVar10,(MethodInfo *)0x0),
             pGVar8 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar8,0,(MethodInfo *)0x0);
            pGVar8 = (this->fields).stackBottom;
            pTVar11 = (this->fields).timeAttackFlagDebriefing;
            if (pGVar8 != (GameObject *)0x0) {
              pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar8,(MethodInfo *)0x0);
              pTVar11 = (TimeAttackFlagDebriefing *)
                        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                                  ((Object *)pTVar11,pTVar2,0,
                                   TimeAttackFlagDebriefing_MethodInfo__UnityEngine__Object__Instantiate<TimeAttackFlagDebriefing>_TimeAttackFlagDebriefing__UnityEngine__Transform__bool_
                                  );
              bVar3 = iRam_? != 0;
              (this->fields).timeAttackFlagDebriefing = pTVar11;
              if (bVar3) {
                uVar4 = (uint)((ulonglong)&(this->fields).timeAttackFlagDebriefing >> 0xc);
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
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if ((pMVar12 != (MVGameControllerBase *)0x0) &&
                 (pFVar13 = (pMVar12->fields).flagDebriefingControl,
                 pFVar13 != (FlagDebriefingControl *)0x0)) {
                pAVar14 = (pFVar13->fields).OnFlagDebriefing;
                pDVar15 = (Delegate *)FUN_?(TypeInfo__System__Action<int>);
                FUN_?(pDVar15,this);
                pDVar15 = mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)pAVar14,pDVar15,(MethodInfo *)0x0);
                pAVar16 = TypeInfo__System__Action<int>;
                value = (Action *)0x0;
                if (pDVar15 == (Delegate *)0x0) {
                  (pFVar13->fields).OnFlagDebriefing = (Action_1_Int32_ *)0x0;
                }
                else {
                  pAVar14 = (Action_1_Int32_ *)FUN_?(pDVar15,TypeInfo__System__Action<int>);
                  if (pAVar14 == (Action_1_Int32_ *)0x0) {
                    FUN_?(pDVar15,pAVar16);
                    pcVar17 = (code *)swi(3);
                    (*pcVar17)();
                    return;
                  }
                  (pFVar13->fields).OnFlagDebriefing = pAVar14;
                  pAVar16 = TypeInfo__System__Action<int>;
                  lVar5 = FUN_?(pDVar15,TypeInfo__System__Action<int>);
                  if (lVar5 == 0) {
                    FUN_?(pDVar15,pAVar16);
                    pcVar17 = (code *)swi(3);
                    (*pcVar17)();
                    return;
                  }
                }
                if (iRam_? != 0) {
                  uVar4 = (uint)((ulonglong)&(pFVar13->fields).OnFlagDebriefing >> 0xc);
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
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
                if ((pMVar12 != (MVGameControllerBase *)0x0) &&
                   (pFVar13 = (pMVar12->fields).flagDebriefingControl,
                   pFVar13 != (FlagDebriefingControl *)0x0)) {
                  pAVar18 = (pFVar13->fields).OnFlagCountDown;
                  pNVar19 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
                  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                  NavMesh_OnNavMeshPreUpdate__ctor
                            (pNVar19,(Object *)this,
                             MethodInfo__TouchPlayModeController__OnShowTimeAttackFlagCountDown__,
                             (MethodInfo *)0x0);
                  pAVar18 = (Action *)
                            mscorlib.dll::System::Delegate::Delegate_Combine
                                      ((Delegate *)pAVar18,(Delegate *)pNVar19,(MethodInfo *)0x0);
                  if (pAVar18 == (Action *)0x0) {
                    (pFVar13->fields).OnFlagCountDown = (Action *)0x0;
                  }
                  else {
                    pAVar20 = value;
                    if (pAVar18->klass == TypeInfo__System__Action) {
                      pAVar20 = pAVar18;
                    }
                    if (pAVar20 == (Action *)0x0) {
                      FUN_?();
                      pcVar17 = (code *)swi(3);
                      (*pcVar17)();
                      return;
                    }
                    (pFVar13->fields).OnFlagCountDown = pAVar20;
                    pAVar20 = value;
                    if (pAVar18->klass == TypeInfo__System__Action) {
                      pAVar20 = pAVar18;
                    }
                    if (pAVar20 == (Action *)0x0) {
                      FUN_?();
                      pcVar17 = (code *)swi(3);
                      (*pcVar17)();
                      return;
                    }
                  }
                  if (iRam_? != 0) {
                    uVar4 = (uint)((ulonglong)&(pFVar13->fields).OnFlagCountDown >> 0xc);
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
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__MVGameControllerBase);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
                  if ((pMVar12 != (MVGameControllerBase *)0x0) &&
                     (pFVar13 = (pMVar12->fields).flagDebriefingControl,
                     pFVar13 != (FlagDebriefingControl *)0x0)) {
                    pAVar18 = (pFVar13->fields).OnFlagCountDownEnd;
                    pNVar19 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
                    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                    NavMesh_OnNavMeshPreUpdate__ctor
                              (pNVar19,(Object *)this,
                               MethodInfo__TouchPlayModeController__OnHideTimeAttackFlagCountDown__,
                               (MethodInfo *)0x0);
                    pAVar18 = (Action *)
                              mscorlib.dll::System::Delegate::Delegate_Combine
                                        ((Delegate *)pAVar18,(Delegate *)pNVar19,(MethodInfo *)0x0);
                    if (pAVar18 == (Action *)0x0) {
                      (pFVar13->fields).OnFlagCountDownEnd = (Action *)0x0;
                    }
                    else {
                      pAVar20 = value;
                      if (pAVar18->klass == TypeInfo__System__Action) {
                        pAVar20 = pAVar18;
                      }
                      if (pAVar20 == (Action *)0x0) {
                        FUN_?();
                        pcVar17 = (code *)swi(3);
                        (*pcVar17)();
                        return;
                      }
                      (pFVar13->fields).OnFlagCountDownEnd = pAVar20;
                      pAVar20 = value;
                      if (pAVar18->klass == TypeInfo__System__Action) {
                        pAVar20 = pAVar18;
                      }
                      if (pAVar20 == (Action *)0x0) {
                        FUN_?();
                        pcVar17 = (code *)swi(3);
                        (*pcVar17)();
                        return;
                      }
                    }
                    if (iRam_? != 0) {
                      uVar4 = (uint)((ulonglong)&(pFVar13->fields).OnFlagCountDownEnd >> 0xc);
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
                    this_05 = (TouchInputMap *)FUN_?(TypeInfo__TouchInputMap);
                    TouchInputMap::TouchInputMap__ctor(this_05,(MethodInfo *)0x0);
                    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    FUN_?(this_05);
                    this_02 = (this->fields).playModeControlsBase;
                    if ((this_02 != (PlayModeControlsBase *)0x0) &&
                       (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_transform((Component *)this_02,(MethodInfo *)0x0),
                       pTVar2 != (Transform *)0x0)) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pvVar21 = (pTVar2->fields)._._.m_CachedPtr;
                      if (pvVar21 == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)pTVar2,(MethodInfo *)0x0);
                        pcVar17 = (code *)swi(3);
                        (*pcVar17)();
                        return;
                      }
                      pcVar17 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0))
                      {
                        uVar22 = func_?(&UNK_?);
                        FUN_?(uVar22,0);
                        pcVar17 = (code *)swi(3);
                        (*pcVar17)();
                        return;
                      }
                      pcRam_? = pcVar17;
                      (*pcRam_?)(pvVar21);
                      pAVar23 = (this->fields).chatController;
                      if (pAVar23 != (AndroidChatController *)0x0) {
                        AndroidChatController::AndroidChatController_Initialize
                                  (pAVar23,(MethodInfo *)0x0);
                        this_03 = (this->fields).deathPromotionController;
                        if (this_03 != (DeathPromotionController *)0x0) {
                          uVar22 = 0;
                          DeathPromotionController::DeathPromotionController_Initialize
                                    (this_03,(MethodInfo *)0x0);
                          if (cRam_? == '\0') {
                            FUN_?(&TypeInfo__MVGameControllerBase);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pGVar24 = TypeInfo__MVGameControllerBase->static_fields->
                                   _GameSessionData_k__BackingField;
                          if (pGVar24 != (GameSessionData *)0x0) {
                            if ((pGVar24->fields).gameMode == 1) {
                              pTVar25 = this->klass;
                              (this->fields)._._IsInLobby_k__BackingField = 1;
                              (*(pTVar25->vtable).set_IsInPauseMenu_1.methodPtr)
                                        (this,CONCAT71((int7)((ulonglong)uVar22 >> 8),1),
                                         (pTVar25->vtable).set_IsInPauseMenu_1.method);
                            }
                            pAVar26 = (this->fields)._._IsPausedStateChange_k__BackingField;
                            pAVar23 = (this->fields).chatController;
                            pDVar15 = (Delegate *)FUN_?(TypeInfo__System__Action<bool>);
                            FUN_?(pDVar15,pAVar23);
                            pDVar15 = mscorlib.dll::System::Delegate::Delegate_Combine
                                                ((Delegate *)pAVar26,pDVar15,(MethodInfo *)0x0);
                            pAVar27 = TypeInfo__System__Action<bool>;
                            pAVar18 = value;
                            if ((pDVar15 != (Delegate *)0x0) &&
                               (pAVar18 = (Action *)
                                          FUN_?(pDVar15,TypeInfo__System__Action<bool>),
                               pAVar18 == (Action *)0x0)) {
                              FUN_?(pDVar15,pAVar27);
                              pcVar17 = (code *)swi(3);
                              (*pcVar17)();
                              return;
                            }
                            bVar3 = iRam_? != 0;
                            (this->fields)._._IsPausedStateChange_k__BackingField =
                                 (Action_1_Boolean_ *)pAVar18;
                            if (bVar3) {
                              uVar4 = (uint)((ulonglong)
                                              &(this->fields)._._IsPausedStateChange_k__BackingField
                                             >> 0xc);
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
                            pAVar26 = (this->fields)._._IsPausedStateChange_k__BackingField;
                            pDVar15 = (Delegate *)FUN_?(TypeInfo__System__Action<bool>);
                            FUN_?(pDVar15,this);
                            pDVar15 = mscorlib.dll::System::Delegate::Delegate_Combine
                                                ((Delegate *)pAVar26,pDVar15,(MethodInfo *)0x0);
                            pAVar27 = TypeInfo__System__Action<bool>;
                            pAVar18 = value;
                            if ((pDVar15 != (Delegate *)0x0) &&
                               (pAVar18 = (Action *)FUN_?(pDVar15), pAVar18 == (Action *)0x0
                               )) {
                              FUN_?(pDVar15,pAVar27);
                              pcVar17 = (code *)swi(3);
                              (*pcVar17)();
                              return;
                            }
                            bVar3 = iRam_? != 0;
                            (this->fields)._._IsPausedStateChange_k__BackingField =
                                 (Action_1_Boolean_ *)pAVar18;
                            if (bVar3) {
                              uVar4 = (uint)((ulonglong)
                                              &(this->fields)._._IsPausedStateChange_k__BackingField
                                             >> 0xc);
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
                            if (*(int *)&(TypeInfo__ChatCommandManager->_1).field_0x1c == 0) {
                              FUN_?();
                            }
                            pAVar18 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                                                (ChatCommand__Enum_HideAllUI,(MethodInfo *)0x0);
                            pNVar19 = (NavMesh_OnNavMeshPreUpdate *)
                                      FUN_?(TypeInfo__System__Action);
                            uVar22 = 0;
                            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                            NavMesh_OnNavMeshPreUpdate__ctor
                                      (pNVar19,(Object *)this,
                                       MethodInfo__TouchPlayModeController__HideUI__,
                                       (MethodInfo *)0x0);
                            pAVar18 = (Action *)
                                      mscorlib.dll::System::Delegate::Delegate_Combine
                                                ((Delegate *)pAVar18,(Delegate *)pNVar19,
                                                 (MethodInfo *)0x0);
                            if (pAVar18 != (Action *)0x0) {
                              if (pAVar18->klass == TypeInfo__System__Action) {
                                value = pAVar18;
                              }
                              if (value == (Action *)0x0) {
                                FUN_?(pAVar18);
                                pcVar17 = (code *)swi(3);
                                (*pcVar17)();
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
                            this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
                                      TypeInfo__ChatCommandManager->static_fields->
                                      chatCommandCallBackDictionary;
                            if (this_00 == (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0
                               ) {
code_?:
                              FUN_?();
                              pcVar17 = (code *)swi(3);
                              (*pcVar17)();
                              return;
                            }
                            iVar28 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                     ::Int32Enum,UnityEngine::Vector3]::
                                     Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                                               (this_00,3,
                                                MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__ContainsKey_ChatCommand_
                                                ->klass->rgctx_data[0x21].method);
                            if (-1 < iVar28) {
                              if (*(int *)&(TypeInfo__ChatCommandManager->_1).field_0x1c == 0) {
                                FUN_?(TypeInfo__ChatCommandManager);
                              }
                              this_01 = TypeInfo__ChatCommandManager->static_fields->
                                        chatCommandCallBackDictionary;
                              if (this_01 == (Dictionary_2_ChatCommand_System_Action_ *)0x0)
                              goto code_?;
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32Enum,System::Object]::
                              Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,3,
                                         (Object *)value,
                                         (InsertionBehavior__Enum)
                                         CONCAT71((int7)((ulonglong)uVar22 >> 8),1),
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
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void LeaveEditPlayMode() */

void Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController_LeaveEditPlayMode
               (TouchPlayModeController *this,MethodInfo *method)

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


/* Void LeavePlayMode() */

void Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController_LeavePlayMode
               (TouchPlayModeController *this,MethodInfo *method)

{
  this_00 = (this->fields).timeAttackFlagDebriefing;
  if (this_00 == (TimeAttackFlagDebriefing *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this_00 != (TimeAttackFlagDebriefing *)0x0) {
    pvVar2 = (this_00->fields)._._._._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
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
    cVar4 = (*pcRam_?)(pvVar2);
    if (cVar4 == '\0') {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar5 != (MVGameControllerBase *)0x0) &&
       (pFVar6 = (pMVar5->fields).flagDebriefingControl, pFVar6 != (FlagDebriefingControl *)0x0)) {
      if ((pFVar6->fields).OnFlagDebriefingEnd != (Action *)0x0) {
        pAVar7 = (pFVar6->fields).OnFlagDebriefingEnd;
        (*(pAVar7->fields)._._.invoke_impl)
                  ((pAVar7->fields)._._.method_code,(pAVar7->fields)._._.method);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pIVar8 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
      if (pIVar8 != (IPlayModeUI *)0x0) {
        FUN_?(8,TypeInfo__IPlayModeUI,pIVar8,0);
        (this_00->fields).isDebriefingOn = 0;
        (this_00->fields).isWaitingForStart = 0;
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0);
        if (this_02 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_02,0,(MethodInfo *)0x0);
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
          fVar9 = (float)(*pcRam_?)();
          this_01 = (this_00->fields).scoreBoardCanvasGroup;
          (this_00->fields).countdownEndTime = fVar9;
          if (this_01 != (CanvasGroup *)0x0) {
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                      (this_01,0.0,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if ((pMVar5 != (MVGameControllerBase *)0x0) &&
               (pFVar6 = (pMVar5->fields).flagDebriefingControl,
               pFVar6 != (FlagDebriefingControl *)0x0)) {
              FlagDebriefingControl::FlagDebriefingControl_EndFlagCountDown
                        (pFVar6,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if ((((pMVar5 != (MVGameControllerBase *)0x0) &&
                   (pMVar10 = (pMVar5->fields).game, pMVar10 != (MVNetworkGame *)0x0)) &&
                  (pGVar11 = (pMVar10->fields).GameEventManager, pGVar11 != (GameEventManager *)0x0))
                 && (pGVar12 = (pGVar11->fields).AvatarCommandsPlayMode,
                    pGVar12 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
                if ((pGVar12->fields).OnEnterPlaymode == (Action *)0x0) {
                  return;
                }
                pAVar7 = (pGVar12->fields).OnEnterPlaymode;
                (*(pAVar7->fields)._._.invoke_impl)
                          ((pAVar7->fields)._._.method_code,(pAVar7->fields)._._.method);
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController_OnDestroy
               (TouchPlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField = (IPlayModeUI *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)
                   &TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField >>
                  0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  return;
}


/* Void OnHideTimeAttackFlagCountDown() */

void Assembly-CSharp.dll::TouchPlayModeController::
     TouchPlayModeController_OnHideTimeAttackFlagCountDown
               (TouchPlayModeController *this,MethodInfo *method)

{
  this_00 = (this->fields).timeAttackFlagDebriefing;
  if ((this_00 == (TimeAttackFlagDebriefing *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (GameObject *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
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
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._.m_CachedPtr;
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
  (*pcRam_?)(pvVar2,0);
  return;
}


/* Void OnIsPausedStateChange(Boolean) */

void Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController_OnIsPausedStateChange
               (TouchPlayModeController *this,bool isPaused,MethodInfo *method)

{
  this_00 = (this->fields).timeAttackFlagDebriefing;
  if ((this_00 == (TimeAttackFlagDebriefing *)0x0) ||
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0), pGVar1 == (GameObject *)0x0))
  goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar2 = (pGVar1->fields)._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
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
    this_01 = (this->fields).lobbyState;
    if (this_01 == (RectTransform *)0x0) goto code_?;
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_01,(MethodInfo *)0x0);
    if (isPaused == 0) {
      if (pGVar1 == (GameObject *)0x0) {
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      pAVar6 = (this->fields).inGameMenu;
      if ((pAVar6 == (AndroidInGameMenu *)0x0) ||
         (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pAVar6,(MethodInfo *)0x0), pGVar1 == (GameObject *)0x0))
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      pPVar7 = (this->fields).playModeControlsBase;
      if ((pPVar7 == (PlayModeControlsBase *)0x0) ||
         (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pPVar7,(MethodInfo *)0x0), pGVar1 == (GameObject *)0x0))
      goto code_?;
      value = 1;
    }
    else {
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      pAVar6 = (this->fields).inGameMenu;
      if ((pAVar6 == (AndroidInGameMenu *)0x0) ||
         (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pAVar6,(MethodInfo *)0x0), pGVar1 == (GameObject *)0x0))
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
      pPVar7 = (this->fields).playModeControlsBase;
      if ((pPVar7 == (PlayModeControlsBase *)0x0) ||
         (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pPVar7,(MethodInfo *)0x0), pGVar1 == (GameObject *)0x0))
      goto code_?;
      value = 0;
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,value,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnShowTimeAttackFlagCountDown() */

void Assembly-CSharp.dll::TouchPlayModeController::
     TouchPlayModeController_OnShowTimeAttackFlagCountDown
               (TouchPlayModeController *this,MethodInfo *method)

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
      this_00 = (this->fields).lobbyState;
      if ((this_00 != (RectTransform *)0x0) &&
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_00,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0))
      {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,0,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pGVar2 == (GameObject *)0x0) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pvVar4 = (pGVar2->fields)._.m_CachedPtr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar4,0);
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnShowTimeAttackFlagDebriefing(Int32) */

void Assembly-CSharp.dll::TouchPlayModeController::
     TouchPlayModeController_OnShowTimeAttackFlagDebriefing
               (TouchPlayModeController *this,int32_t captureTime,MethodInfo *method)

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
      this_00 = (this->fields).lobbyState;
      if ((this_00 != (RectTransform *)0x0) &&
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_00,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0))
      {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,0,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pGVar2 == (GameObject *)0x0) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pvVar4 = (pGVar2->fields)._.m_CachedPtr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar4,0);
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OpenInventoryAtItem(UIPushOption, AccessoryDataClient) */

void Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController_OpenInventoryAtItem
               (TouchPlayModeController *this,UIPushOption__Enum pushOption,
               AccessoryDataClient *displayShopItems,MethodInfo *method)

{
  object = (this->fields).accessoryShopController;
  if (object == (AccessoryShopController *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryDataManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AccessoryShopController__ReadyCallbackAccessoryView__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar2 = iRam_? != 0;
  (object->fields).accessoryDataToShow = displayShopItems;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(object->fields).accessoryDataToShow >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  (object->fields).pushOption = pushOption;
  pUVar7 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
  this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_01,(Object *)object,
             MethodInfo__AccessoryShopController__ReadyCallbackAccessoryView__,(MethodInfo *)0x0);
  pUVar7 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar7,(Delegate *)this_01,(MethodInfo *)0x0);
  if (pUVar7 == (UnityAction *)0x0) {
    TypeInfo__AccessoryDataManager->static_fields->readyCallback = (UnityAction *)0x0;
  }
  else {
    pUVar8 = (UnityAction *)0x0;
    if (pUVar7->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar8 = pUVar7;
    }
    if (pUVar8 == (UnityAction *)0x0) {
      FUN_?(pUVar7,TypeInfo__UnityEngine__Events__UnityAction);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar8;
    pUVar8 = (UnityAction *)0x0;
    if (pUVar7->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar8 = pUVar7;
    }
    if (pUVar8 == (UnityAction *)0x0) {
      FUN_?(pUVar7,TypeInfo__UnityEngine__Events__UnityAction);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)TypeInfo__AccessoryDataManager->static_fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (ulonglong)(uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryDataManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar9 = TypeInfo__AccessoryDataManager->static_fields;
  if (pAVar9->accessoriesReady == 0) {
    if (pAVar9->accessoriesRequested == 0) {
      this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_00 == (MVNetworkGame_OperationRequests *)0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestAccessoryData
                (this_00,(MethodInfo *)0x0);
      TypeInfo__AccessoryDataManager->static_fields->accessoriesRequested = 1;
      return;
    }
  }
  else if (pAVar9->readyCallback != (UnityAction *)0x0) {
    pUVar7 = pAVar9->readyCallback;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar7->fields)._._.invoke_impl)
              ((pUVar7->fields)._._.method_code,(pUVar7->fields)._._.method);
    return;
  }
  return;
}


/* Void SetPixelPerfect(Boolean) */

void Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController_SetPixelPerfect
               (TouchPlayModeController *this,bool pixelPerfect,MethodInfo *method)

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

void Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController_SetUIReady
               (TouchPlayModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TouchPlayModeController__SetUIReady__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).uiStack;
  if (this_00 != (UIStack *)0x0) {
    (this_00->fields).stackReady = 1;
    UIStack::UIStack_UpdateStack(this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pFVar2 = (pMVar1->fields).firstFrameUpdateActorReady,
       pFVar2 != (FirstFrameUpdateActorReady *)0x0)) {
      pAVar3 = (pFVar2->fields).callbacks;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)this,MethodInfo__TouchPlayModeController__SetUIReady__,
                 (MethodInfo *)0x0);
      pAVar4 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar3,(Delegate *)this_01,(MethodInfo *)0x0);
      pAVar3 = (Action *)0x0;
      if (pAVar4 != (Action *)0x0) {
        if (pAVar4->klass == TypeInfo__System__Action) {
          pAVar3 = pAVar4;
        }
        if (pAVar3 == (Action *)0x0) {
          FUN_?(pAVar4);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar1 != (MVGameControllerBase *)0x0) &&
         (pFVar2 = (pMVar1->fields).firstFrameUpdateActorReady,
         pFVar2 != (FirstFrameUpdateActorReady *)0x0)) {
        bVar6 = iRam_? != 0;
        (pFVar2->fields).callbacks = pAVar3;
        if (bVar6) {
          uVar7 = (uint)((ulonglong)&(pFVar2->fields).callbacks >> 0xc);
          puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar9 = *puVar8;
            LOCK();
            uVar10 = *puVar8;
            if (uVar9 == uVar10) {
              *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (uVar9 != uVar10);
        }
        return;
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ShowEUseIcon(ShowUseOption, Int32) */

void Assembly-CSharp.dll::TouchPlayModeController::TouchPlayModeController_ShowEUseIcon
               (TouchPlayModeController *this,ShowUseOption__Enum option,int32_t woId,
               MethodInfo *method)

{
  pPVar1 = (this->fields).playModeControlsBase;
  if ((pPVar1 != (PlayModeControlsBase *)0x0) &&
     (pSVar2 = (pPVar1->fields).useButtonLarge, pSVar2 != (ShowUse *)0x0)) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pSVar2,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,1,(MethodInfo *)0x0);
      pSVar2 = (pPVar1->fields).useButtonLarge;
      if (pSVar2 != (ShowUse *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pSVar2->klass->vtable).__unknown.methodPtr)
                  (pSVar2,(ulonglong)option,0,(pSVar2->klass->vtable).__unknown.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

