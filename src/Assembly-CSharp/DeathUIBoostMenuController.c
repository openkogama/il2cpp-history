
/* Void Initialize() */

void Assembly-CSharp.dll::DeathUIBoostMenuController::DeathUIBoostMenuController_Initialize
               (DeathUIBoostMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DeathUIBoostMenuController__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DeathUIBoostMenuController__OnResetToSpawnPoint__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DeathUIBoostMenuController__OnRespawn__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Respawning_at_start___);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Respawning_at_checkpoint___);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).timeUntilGhostMode <= 0.0) {
    pIVar1 = (this->fields).readyToPlayTimerFill;
    if ((pIVar1 == (Image *)0x0) ||
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pIVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
    pSVar3 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                        ((MethodInfo *)0x0);
    if ((pSVar3 == (SpawnRoleDataMediator *)0x0) ||
       ((pSVar4 = (pSVar3->fields).spawnRoleMode,
        pSVar4 == (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_SpawnRoleModeType_ *)
                  0x0 ||
        (pSVar5 = (pSVar4->fields)._.subscribableVariable,
        pSVar5 == (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0))))
    goto code_?;
    if ((pSVar5->fields)._.value != 4) {
      pGVar6 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar6 == (GameEventManager *)0x0) ||
         (pGVar7 = (pGVar6->fields).AvatarCommandsPlayMode,
         pGVar7 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))
      goto code_?;
      if ((pGVar7->fields).OnSpawnAsGhost != (Action *)0x0) {
        pAVar8 = (pGVar7->fields).OnSpawnAsGhost;
        (*(pAVar8->fields)._._.invoke_impl)((pAVar8->fields)._._.method_code);
      }
    }
    (this->fields).isGhost = 1;
  }
  pcVar9 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pcRam_? = pcVar9;
  fVar11 = (float)(*pcRam_?)();
  pNVar12 = (this->fields).fader;
  (this->fields).startTime = fVar11;
  if (pNVar12 != (NotificationFade *)0x0) {
    pCVar13 = (pNVar12->fields).group;
    (pNVar12->fields).playing = 1;
    (pNVar12->fields).pauseAt = (pNVar12->fields).duration;
    if (pCVar13 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (pCVar13,0.0,(MethodInfo *)0x0);
      (pNVar12->fields).currentTime = 0.0;
      pNVar12 = (this->fields).fader;
      if (pNVar12 != (NotificationFade *)0x0) {
        (pNVar12->fields).shouldHideWhenDone = 0;
        pEVar14 = (this->fields).embeddedPlayerConfig;
        if (pEVar14 != (EmbeddedPlayerConfig *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_Embedded_site_data_not_initializ);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((pEVar14->fields).initialized == 0) {
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_Embedded_site_data_not_initializ,(MethodInfo *)0x0);
            auVar15._0_8_ = (pEVar14->fields).kogamaDefaultData.sites;
            auVar15._8_4_ = (pEVar14->fields).kogamaDefaultData.siteEnum;
            auVar15[0xc] = (pEVar14->fields).kogamaDefaultData.showTouristPromotion;
            auVar15[0xd] = (pEVar14->fields).kogamaDefaultData.allowsOpenInNewTab;
            auVar15[0xe] = (pEVar14->fields).kogamaDefaultData.allowsRedirectToWebpage;
            auVar15[0xf] = (pEVar14->fields).kogamaDefaultData.allowsModals;
            uVar10._0_1_ = (pEVar14->fields).kogamaDefaultData.integratedSdk;
            uVar10._1_1_ = (pEVar14->fields).kogamaDefaultData.allowsFallbackAds;
            uVar10._2_1_ = (pEVar14->fields).kogamaDefaultData.showPlayButtonAd;
            uVar10._3_1_ = (pEVar14->fields).kogamaDefaultData.hideGoldShop;
            uVar10._4_1_ = (pEVar14->fields).kogamaDefaultData.allowInHouseAds;
            uVar10._5_1_ = (pEVar14->fields).kogamaDefaultData.removeFullscreenButton;
            uVar10._6_1_ = (pEVar14->fields).kogamaDefaultData.hideSignUp;
            uVar10._7_1_ = (pEVar14->fields).kogamaDefaultData.noPlayButtonVideoIcon;
          }
          else {
            auVar15._0_8_ = (pEVar14->fields).currentSite.sites;
            auVar15._8_4_ = (pEVar14->fields).currentSite.siteEnum;
            auVar15[0xc] = (pEVar14->fields).currentSite.showTouristPromotion;
            auVar15[0xd] = (pEVar14->fields).currentSite.allowsOpenInNewTab;
            auVar15[0xe] = (pEVar14->fields).currentSite.allowsRedirectToWebpage;
            auVar15[0xf] = (pEVar14->fields).currentSite.allowsModals;
            uVar10._0_1_ = (pEVar14->fields).currentSite.integratedSdk;
            uVar10._1_1_ = (pEVar14->fields).currentSite.allowsFallbackAds;
            uVar10._2_1_ = (pEVar14->fields).currentSite.showPlayButtonAd;
            uVar10._3_1_ = (pEVar14->fields).currentSite.hideGoldShop;
            uVar10._4_1_ = (pEVar14->fields).currentSite.allowInHouseAds;
            uVar10._5_1_ = (pEVar14->fields).currentSite.removeFullscreenButton;
            uVar10._6_1_ = (pEVar14->fields).currentSite.hideSignUp;
            uVar10._7_1_ = (pEVar14->fields).currentSite.noPlayButtonVideoIcon;
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar16 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((pMVar16 != (MVGameControllerBase *)0x0) &&
             (lVar17 = (*(pMVar16->klass->vtable).__unknown.methodPtr)
                                 (pMVar16,(pMVar16->klass->vtable).__unknown.method), lVar17 != 0))
          {
            bVar18 = FUN_?();
            bVar19 = 0;
            if (auVar15[0xc] == '\0') {
              bVar19 = bVar18;
            }
            bVar19 = bVar19 & (byte)((ulonglong)uVar10 >> 0x10);
            pIVar1 = (this->fields).adIcon;
            if (pIVar1 != (Image *)0x0) {
              pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pIVar1,(MethodInfo *)0x0);
              if (pGVar2 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar2,bVar19 != 0 && (char)((ulonglong)uVar10 >> 0x38) == '\0',
                           (MethodInfo *)0x0);
                pIVar1 = (this->fields).readyToPlayTimerFill;
                if ((pIVar1 != (Image *)0x0) &&
                   (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)pIVar1,(MethodInfo *)0x0),
                   pGVar2 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar2,bVar19 ^ 1,(MethodInfo *)0x0);
                  pPVar20 = (this->fields).respawnButton;
                  pNVar21 = (NavMesh_OnNavMeshPreUpdate *)
                            FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
                  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                  NavMesh_OnNavMeshPreUpdate__ctor
                            (pNVar21,(Object *)this,
                             MethodInfo__DeathUIBoostMenuController__OnRespawn__,(MethodInfo *)0x0);
                  if (pPVar20 != (PointerDownController *)0x0) {
                    bVar22 = iRam_? != 0;
                    (pPVar20->fields).pointerDownCallback = (UnityAction *)pNVar21;
                    if (bVar22) {
                      uVar23 = (uint)((ulonglong)&(pPVar20->fields).pointerDownCallback >> 0xc);
                      uVar24 = (ulonglong)((uVar23 & 0x1fffff) >> 6);
                      do {
                        uVar25 = *(ulonglong *)(uVar24 * 8 + 0xADDR);
                        puVar26 = (ulonglong *)(uVar24 * 8 + 0xADDR);
                        LOCK();
                        bVar22 = uVar25 == *puVar26;
                        if (bVar22) {
                          *puVar26 = uVar25 | 1L << (uVar23 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar22);
                    }
                    (pPVar20->fields).isInitialized = 1;
                    pPVar20 = (this->fields).resetButton;
                    pNVar21 = (NavMesh_OnNavMeshPreUpdate *)
                              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
                    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                    NavMesh_OnNavMeshPreUpdate__ctor
                              (pNVar21,(Object *)this,
                               MethodInfo__DeathUIBoostMenuController__OnResetToSpawnPoint__,
                               (MethodInfo *)0x0);
                    if (pPVar20 != (PointerDownController *)0x0) {
                      bVar22 = iRam_? != 0;
                      (pPVar20->fields).pointerDownCallback = (UnityAction *)pNVar21;
                      if (bVar22) {
                        uVar23 = (uint)((ulonglong)&(pPVar20->fields).pointerDownCallback >> 0xc);
                        uVar24 = (ulonglong)((uVar23 & 0x1fffff) >> 6);
                        do {
                          uVar25 = *(ulonglong *)(uVar24 * 8 + 0xADDR);
                          puVar26 = (ulonglong *)(uVar24 * 8 + 0xADDR);
                          LOCK();
                          bVar22 = uVar25 == *puVar26;
                          if (bVar22) {
                            *puVar26 = uVar25 | 1L << (uVar23 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar22);
                      }
                      (pPVar20->fields).isInitialized = 1;
                      pSVar3 = MVGameControllerBase::
                                MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                          ((MethodInfo *)0x0);
                      if (pSVar3 != (SpawnRoleDataMediator *)0x0) {
                        this_00 = (pSVar3->fields).SpawnRoleModeTypeWrapper;
                        this_03 = (UnityAction_1_System_Int32Enum_ *)
                                  FUN_?(
                                               TypeInfo__System__Action<MV::Common::SpawnRoleModeType>
                                               );
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                        Int32Enum]::UnityAction_1_System_Int32Enum___ctor
                                  (this_03,(Object *)this,
                                   MethodInfo__DeathUIBoostMenuController__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                                   ,(MethodInfo *)0x0);
                        if (this_00 != (SpawnRoleModeTypeWrapper *)0x0) {
                          SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_add_OnChange
                                    (this_00,(Action_1_MV_Common_SpawnRoleModeType_ *)this_03,
                                     (MethodInfo *)0x0);
                          this_01 = (this->fields).boostMenu;
                          if (this_01 != (BoostMenuController *)0x0) {
                            BoostMenuController::BoostMenuController_Initialize
                                      (this_01,(MethodInfo *)0x0);
                            if (cRam_? == '\0') {
                              FUN_?(&TypeInfo__MVGameControllerBase);
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            pMVar16 = TypeInfo__MVGameControllerBase->static_fields->instance;
                            if ((((pMVar16 != (MVGameControllerBase *)0x0) &&
                                 (pMVar27 = (pMVar16->fields).game, pMVar27 != (MVNetworkGame *)0x0)
                                 ) && (this_02 = (pMVar27->fields).playerContainer,
                                      this_02 != (MVPlayerContainer *)0x0)) &&
                               (this_04 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                                    (this_02,(MethodInfo *)0x0),
                               this_04 != (MVLocalPlayer *)0x0)) {
                              pMVar28 = MVPlayer::MVPlayer_GetCheckpoint
                                                  ((MVPlayer *)this_04,(MethodInfo *)0x0);
                              pNVar12 = (this->fields).buttonFader;
                              if (pNVar12 != (NotificationFade *)0x0) {
                                (pNVar12->fields).pauseAt = (pNVar12->fields).duration;
                                pCVar13 = (pNVar12->fields).group;
                                (pNVar12->fields).playing = 1;
                                if (pCVar13 != (CanvasGroup *)0x0) {
                                  UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::
                                  CanvasGroup_set_alpha(pCVar13,0.0,(MethodInfo *)0x0);
                                  (pNVar12->fields).currentTime = 0.0;
                                  pNVar12 = (this->fields).buttonFader;
                                  if (pNVar12 != (NotificationFade *)0x0) {
                                    (pNVar12->fields).pauseAt = 0.0;
                                    if (pMVar28 == (MVCheckpoint *)0x0) {
                                      pNVar12 = (this->fields).resetButtonFader;
                                      if ((pNVar12 == (NotificationFade *)0x0) ||
                                         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    Component::Component_get_gameObject
                                                              ((Component *)pNVar12,(MethodInfo *)0x0
                                                              ), pGVar2 == (GameObject *)0x0))
                                      goto code_?;
                                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_SetActive(pGVar2,0,(MethodInfo *)0x0);
                                      pTVar29 = (this->fields).restartText;
                                      pSVar30 = StringLiteral_Respawning_at_start___;
                                    }
                                    else {
                                      pTVar29 = (this->fields).restartText;
                                      pSVar30 = StringLiteral_Respawning_at_checkpoint___;
                                    }
                                    if (pTVar29 != (Text *)0x0) {
                                      (*(pTVar29->klass->vtable).set_text.methodPtr)
                                                (pTVar29,pSVar30,
                                                 (pTVar29->klass->vtable).set_text.method);
                                      if (cRam_? == '\0') {
                                        FUN_?(&TypeInfo__GamePointGainEffectManager);
                                        LOCK();
                                        UNLOCK();
                                        cRam_? = '\x01';
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
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void LockCursorAndPop() */

void Assembly-CSharp.dll::DeathUIBoostMenuController::DeathUIBoostMenuController_LockCursorAndPop
               (DeathUIBoostMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    FUN_?(&
                  MethodInfo__DeathUIBoostMenuController____c___LockCursorAndPop_b__27_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DeathUIBoostMenuController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
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
    pMVar1 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
    if ((pMVar1 == (MVGameControllerDesktop *)0x0) ||
       ((pMVar1->fields).lockCursorManager == (ILockCursorManager *)0x0))
    goto code_?;
    FUN_?();
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__DeathUIBoostMenuController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__DeathUIBoostMenuController____c);
  }
  this_00 = TypeInfo__DeathUIBoostMenuController____c->static_fields->__9__27_0;
  if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__DeathUIBoostMenuController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__DeathUIBoostMenuController____c);
    }
    object = TypeInfo__DeathUIBoostMenuController____c->static_fields->__9;
    this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
               MethodInfo__DeathUIBoostMenuController____c___LockCursorAndPop_b__27_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__DeathUIBoostMenuController____c->static_fields->__9__27_0 = this_00;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)
                      &TypeInfo__DeathUIBoostMenuController____c->static_fields->__9__27_0 >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar6 != (MVGameControllerBase *)0x0) &&
       (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
      (pGVar8 = (pMVar7->fields).GameEventManager, pGVar8 != (GameEventManager *)0x0)) &&
     (pGVar9 = (pGVar8->fields).AvatarCommandsPlayMode,
     pGVar9 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
    if ((pGVar9->fields).OnEnterPlaymode == (Action *)0x0) {
      return;
    }
    pAVar10 = (pGVar9->fields).OnEnterPlaymode;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar10->fields)._._.invoke_impl)
              ((pAVar10->fields)._._.method_code,(pAVar10->fields)._._.method);
    return;
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnAvatarStateChanged(SpawnRoleModeType) */

void Assembly-CSharp.dll::DeathUIBoostMenuController::
     DeathUIBoostMenuController_OnAvatarStateChanged
               (DeathUIBoostMenuController *this,SpawnRoleModeType__Enum mode,MethodInfo *method)

{
  if ((mode - SpawnRoleModeType__Enum_Dead & 0xfffffffd) != 0) {
    (this->fields).shouldPop = 1;
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::DeathUIBoostMenuController::DeathUIBoostMenuController_OnDestroy
               (DeathUIBoostMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar2 != (SpawnRoleDataMediator *)0x0) {
    this_00 = (pSVar2->fields).SpawnRoleModeTypeWrapper;
    this_01 = (UnityAction_1_System_Int32Enum_ *)
              FUN_?(TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_01,(Object *)this,
               MethodInfo__DeathUIBoostMenuController__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
               ,(MethodInfo *)0x0);
    if (this_00 != (SpawnRoleModeTypeWrapper *)0x0) {
      SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_remove_OnChange
                (this_00,(Action_1_MV_Common_SpawnRoleModeType_ *)this_01,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::DeathUIBoostMenuController::DeathUIBoostMenuController_OnEnable
               (DeathUIBoostMenuController *this,MethodInfo *method)

{
  pNVar1 = (this->fields).buttonFader;
  if (pNVar1 != (NotificationFade *)0x0) {
    this_00 = (pNVar1->fields).group;
    (pNVar1->fields).playing = 1;
    (pNVar1->fields).pauseAt = (pNVar1->fields).duration;
    if (this_00 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,0.0,(MethodInfo *)0x0);
      (pNVar1->fields).currentTime = 0.0;
      pNVar1 = (this->fields).buttonFader;
      if (pNVar1 != (NotificationFade *)0x0) {
        (pNVar1->fields).pauseAt = 0.0;
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnResetToSpawnPoint() */

void Assembly-CSharp.dll::DeathUIBoostMenuController::DeathUIBoostMenuController_OnResetToSpawnPoint
               (DeathUIBoostMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Respawning_at_start___);
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
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     (pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     pMVar3 != (MVLocalPlayer *)0x0)) {
    (pMVar3->fields)._.checkpointWOID = -1;
    pTVar4 = (this->fields).restartText;
    if (pTVar4 != (Text *)0x0) {
      (*(pTVar4->klass->vtable).set_text.methodPtr)
                (pTVar4,StringLiteral_Respawning_at_start___,(pTVar4->klass->vtable).set_text.method
                );
      pSVar5 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                          ((MethodInfo *)0x0);
      if (((pSVar5 != (SpawnRoleDataMediator *)0x0) &&
          (pSVar6 = (pSVar5->fields).spawnRoleMode,
          pSVar6 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_SpawnRoleModeType_
                     *)0x0)) &&
         (pSVar7 = (pSVar6->fields)._.subscribableVariable,
         pSVar7 != (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0)) {
        if ((pSVar7->fields)._.value == 4) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar1 == (MVGameControllerBase *)0x0) ||
              (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
             ((pGVar8 = (pMVar2->fields).GameEventManager, pGVar8 == (GameEventManager *)0x0 ||
              (pGVar9 = (pGVar8->fields).AvatarCommandsPlayMode,
              pGVar9 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))))
          goto code_?;
          if ((pGVar9->fields).OnSetToSpawnPoint != (Action *)0x0) {
            pAVar10 = (pGVar9->fields).OnSetToSpawnPoint;
            (*(pAVar10->fields)._._.invoke_impl)((pAVar10->fields)._._.method_code);
          }
        }
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__DeathUIBoostMenuController___OnRespawn_b__25_0_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IDeathPromotionSelector>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pcVar11 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
          uVar12 = func_?(&UNK_?);
          FUN_?(uVar12,0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pcRam_? = pcVar11;
        fVar13 = (float)(*pcRam_?)();
        if (0.0 < _UNK_? -
                  (fVar13 - (this->fields).startTime) / (this->fields).timeUntilGhostMode) {
          return;
        }
        pNVar14 = (this->fields).buttonFader;
        if (pNVar14 != (NotificationFade *)0x0) {
          if ((pNVar14->fields).pauseAt == (pNVar14->fields).duration) {
            return;
          }
          pGVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (this_02,(Object *)this,
                     MethodInfo__DeathUIBoostMenuController___OnRespawn_b__25_0_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar15,(BaseEventData *)0x0,this_02,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IDeathPromotionSelector>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>_
                    );
          this_01 = (this->fields).respawnButton;
          if ((this_01 != (PointerDownController *)0x0) &&
             (pGVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)this_01,(MethodInfo *)0x0),
             pGVar15 != (GameObject *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                            ,0,0);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (pGVar15 == (GameObject *)0x0) {
              FUN_?();
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pvVar16 = (pGVar15->fields)._.m_CachedPtr;
            if (pvVar16 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar15,(MethodInfo *)0x0);
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pcVar11 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
              uVar12 = func_?(&UNK_?);
              FUN_?(uVar12,0);
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pcRam_? = pcVar11;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam_?)(pvVar16,0);
            return;
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


/* Void OnRespawn() */

void Assembly-CSharp.dll::DeathUIBoostMenuController::DeathUIBoostMenuController_OnRespawn
               (DeathUIBoostMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__DeathUIBoostMenuController___OnRespawn_b__25_0_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IDeathPromotionSelector>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  if (0.0 < _UNK_? - (fVar3 - (this->fields).startTime) / (this->fields).timeUntilGhostMode)
  {
    return;
  }
  pNVar4 = (this->fields).buttonFader;
  if (pNVar4 != (NotificationFade *)0x0) {
    if ((pNVar4->fields).pauseAt == (pNVar4->fields).duration) {
      return;
    }
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__DeathUIBoostMenuController___OnRespawn_b__25_0_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar5,(BaseEventData *)0x0,this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IDeathPromotionSelector>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>_
              );
    this_00 = (this->fields).respawnButton;
    if ((this_00 != (PointerDownController *)0x0) &&
       (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_00,(MethodInfo *)0x0), pGVar5 != (GameObject *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,0,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar5 == (GameObject *)0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pvVar6 = (pGVar5->fields)._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar5,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar6,0);
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OpenMenu() */

void Assembly-CSharp.dll::DeathUIBoostMenuController::DeathUIBoostMenuController_OpenMenu
               (DeathUIBoostMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DeathUIBoostMenuController____c___OpenMenu_b__20_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pNVar1 = (this->fields).buttonFader;
  if (pNVar1 != (NotificationFade *)0x0) {
    if ((pNVar1->fields).pauseAt == (pNVar1->fields).duration) {
      return;
    }
    if ((this->fields).isGhost == 0) {
      pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar2 == (GameEventManager *)0x0) ||
         (pGVar3 = (pGVar2->fields).AvatarCommandsPlayMode,
         pGVar3 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))
      goto code_?;
      if ((pGVar3->fields).OnSpawnAsGhost != (Action *)0x0) {
        pAVar4 = (pGVar3->fields).OnSpawnAsGhost;
        (*(pAVar4->fields)._._.invoke_impl)((pAVar4->fields)._._.method_code);
      }
      (this->fields).isGhost = 1;
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__DeathUIBoostMenuController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__DeathUIBoostMenuController____c);
    }
    this_00 = TypeInfo__DeathUIBoostMenuController____c->static_fields->__9__20_0;
    if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__DeathUIBoostMenuController____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__DeathUIBoostMenuController____c);
      }
      object = TypeInfo__DeathUIBoostMenuController____c->static_fields->__9;
      this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
                 MethodInfo__DeathUIBoostMenuController____c___OpenMenu_b__20_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__DeathUIBoostMenuController____c->static_fields->__9__20_0 = this_00;
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)
                        &TypeInfo__DeathUIBoostMenuController____c->static_fields->__9__20_0 >> 0xc)
        ;
        uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
        do {
          uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
          puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pIVar10 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
    if (pIVar10 != (IPlayModeUI *)0x0) {
      pIVar11 = (Il2CppRuntimeInterfaceOffsetPair *)0x1;
      uVar12 = 0;
      pIVar13 = pIVar10->klass;
      uVar14._0_1_ = (pIVar13->_1).rank;
      uVar14._1_1_ = (pIVar13->_1).minimumAlignment;
      if (uVar14 != 0) {
        pIVar11 = pIVar13->interfaceOffsets;
        do {
          if (pIVar11[uVar12].interfaceType == (Il2CppClass *)TypeInfo__IPlayModeUI) {
            pVVar15 = &(pIVar13->vtable).ShowEUseIcon + (pIVar11[uVar12].offset + 8);
            goto code_?;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar14);
      }
      pVVar15 = (VirtualInvokeData *)FUN_?(pIVar10,TypeInfo__IPlayModeUI,8,pIVar11,unaff_RDI)
      ;
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar15->methodPtr)(pIVar10,1,pVVar15->method,pVVar15->methodPtr);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void ReadyToSpawn(Boolean, Boolean) */

void Assembly-CSharp.dll::DeathUIBoostMenuController::DeathUIBoostMenuController_ReadyToSpawn
               (DeathUIBoostMenuController *this,bool promotionPushedToStack,bool withAd,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
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
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DeathUIBoostMenuController____c___ReadyToSpawn_b__26_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DeathUIBoostMenuController____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ReadyToSpawn_u000APromotion_Pushed_T);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  fVar3 = _UNK_? - (fVar3 - (this->fields).startTime) / (this->fields).timeUntilGhostMode;
  abStack_4[0] = promotionPushedToStack;
  arg0 = (Object *)FUN_?(uRam_?,abStack_4);
  abStack_4[0] = withAd;
  arg1 = (Object *)FUN_?(uRam_?,abStack_4);
  fStack_5 = fVar3;
  arg2 = (Object *)FUN_?(uRam_?,&fStack_5);
  pSVar6 = StringLiteral_ReadyToSpawn_u000APromotion_Pushed_T;
  PStack_7._arg0 = (Object *)0x0;
  PStack_7._arg1 = (Object *)0x0;
  PStack_7._arg2 = (Object *)0x0;
  PStack_7._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_2
            (&PStack_7,arg0,arg1,arg2,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&stack0xffffffffffffffb8;
  pOStack_8 = PStack_7._arg0;
  pOStack_9 = PStack_7._arg1;
  pOStack_10 = PStack_7._arg2;
  pOStack_11 = PStack_7._args;
  pSVar6 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar6,(ParamsArray *)method_00,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  player = (MVPlayer *)0x0;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar6,(MethodInfo *)0x0);
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
  if ((((extraout_RAX != 0) && (*(longlong *)(extraout_RAX + 200) != 0)) &&
      (lVar12 = *(longlong *)(*(longlong *)(extraout_RAX + 200) + 0x38), lVar12 != 0)) &&
     (lVar12 = *(longlong *)(lVar12 + 0x10), lVar12 != 0)) {
    if ((*(int *)(lVar12 + 0x10) == 2) || (0.0 < fVar3)) {
      pNVar13 = (this->fields).buttonFader;
      if (pNVar13 != (NotificationFade *)0x0) {
        if ((pNVar13->fields).pauseAt != (pNVar13->fields).duration) {
          (pNVar13->fields).currentTime = (pNVar13->fields).pauseAt;
          (pNVar13->fields).pauseAt = (pNVar13->fields).duration;
        }
        pNVar13 = (this->fields).resetButtonFader;
        if (pNVar13 != (NotificationFade *)0x0) {
          pCVar14 = (pNVar13->fields).group;
          (pNVar13->fields).playing = 1;
          (pNVar13->fields).pauseAt = (pNVar13->fields).duration;
          if (pCVar14 != (CanvasGroup *)0x0) {
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                      (pCVar14,0.0,(MethodInfo *)0x0);
            (pNVar13->fields).currentTime = 0.0;
            pNVar13 = (this->fields).boostFader;
            if (pNVar13 != (NotificationFade *)0x0) {
              pCVar14 = (pNVar13->fields).group;
              (pNVar13->fields).playing = 1;
              (pNVar13->fields).pauseAt = (pNVar13->fields).duration;
              if (pCVar14 != (CanvasGroup *)0x0) {
                UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                          (pCVar14,0.0,(MethodInfo *)0x0);
                (pNVar13->fields).currentTime = 0.0;
                pNVar13 = (this->fields).menuButtonFader;
                if (pNVar13 != (NotificationFade *)0x0) {
                  pCVar14 = (pNVar13->fields).group;
                  (pNVar13->fields).playing = 1;
                  (pNVar13->fields).pauseAt = (pNVar13->fields).duration;
                  if (pCVar14 != (CanvasGroup *)0x0) {
                    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                              (pCVar14,0.0,(MethodInfo *)0x0);
                    bVar15 = cRam_? == '\0';
                    (pNVar13->fields).currentTime = 0.0;
                    if (bVar15) {
                      FUN_?(&TypeInfo__MVGameControllerBase);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pMVar16 = TypeInfo__MVGameControllerBase->static_fields->instance;
                    if (((pMVar16 != (MVGameControllerBase *)0x0) &&
                        (pMVar17 = (pMVar16->fields).game, pMVar17 != (MVNetworkGame *)0x0)) &&
                       ((pGVar18 = (pMVar17->fields).GameEventManager,
                        pGVar18 != (GameEventManager *)0x0 &&
                        (pGVar19 = (pGVar18->fields).AvatarCommandsPlayMode,
                        pGVar19 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)))) {
                      if ((pGVar19->fields).OnSetRespawnWhenPossible != (Action *)0x0) {
                        pAVar20 = (pGVar19->fields).OnSetRespawnWhenPossible;
                        (*(pAVar20->fields)._._.invoke_impl)
                                  ((pAVar20->fields)._._.method_code,(pAVar20->fields)._._.method);
                      }
                      (this->fields).wantsToPlay = 1;
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
    else {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__DeathUIBoostMenuController____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__DeathUIBoostMenuController____c);
      }
      this_00 = TypeInfo__DeathUIBoostMenuController____c->static_fields->__9__26_0;
      if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__DeathUIBoostMenuController____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__DeathUIBoostMenuController____c);
        }
        object = TypeInfo__DeathUIBoostMenuController____c->static_fields->__9;
        this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
                   MethodInfo__DeathUIBoostMenuController____c___ReadyToSpawn_b__26_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__DeathUIBoostMenuController____c->static_fields->__9__26_0 = this_00;
        func_?(&TypeInfo__DeathUIBoostMenuController____c->static_fields->__9__26_0);
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pGVar18 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar18 != (GameEventManager *)0x0) &&
         (pGVar19 = (pGVar18->fields).AvatarCommandsPlayMode,
         pGVar19 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
        if ((pGVar19->fields).OnEnterPlaymode != (Action *)0x0) {
          pAVar20 = (pGVar19->fields).OnEnterPlaymode;
          (*(pAVar20->fields)._._.invoke_impl)
                    ((pAVar20->fields)._._.method_code,(pAVar20->fields)._._.method);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::DeathUIBoostMenuController::DeathUIBoostMenuController_Update
               (DeathUIBoostMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    FUN_?(&
                  MethodInfo__DeathUIBoostMenuController____c___Update_b__22_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DeathUIBoostMenuController____c___Update_b__22_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DeathUIBoostMenuController____c__DisplayClass22_0___Update_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DeathUIBoostMenuController____c__DisplayClass22_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DeathUIBoostMenuController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__DeathUIBoostMenuController____c__DisplayClass22_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].monitor = (MonitorData *)this;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&object[1].monitor >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcRam_? = pcVar6;
    fVar8 = (float)(*pcRam_?)();
    this_00 = (this->fields).readyToPlayTimerFill;
    fVar8 = _UNK_? -
             (fVar8 - (this->fields).startTime) / (this->fields).timeUntilGhostMode;
    if (this_00 != (Image *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                (this_00,fVar8,(MethodInfo *)0x0);
      *(undefined1 *)&object[1].klass = 0;
      pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_01,object,
                 MethodInfo__DeathUIBoostMenuController____c__DisplayClass22_0___Update_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar9,(BaseEventData *)0x0,this_01,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      if (((this->fields).shouldPop != 0) && (*(char *)&object[1].klass == '\0')) {
        pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__DeathUIBoostMenuController____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__DeathUIBoostMenuController____c);
        }
        pEVar10 = TypeInfo__DeathUIBoostMenuController____c->static_fields->__9__22_1;
        if (pEVar10 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if (*(int *)&(TypeInfo__DeathUIBoostMenuController____c->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__DeathUIBoostMenuController____c);
          }
          pDVar11 = TypeInfo__DeathUIBoostMenuController____c->static_fields->__9;
          pEVar10 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                   FUN_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar10,(Object *)pDVar11,
                     MethodInfo__DeathUIBoostMenuController____c___Update_b__22_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__DeathUIBoostMenuController____c->static_fields->__9__22_1 = pEVar10;
          func_?(&TypeInfo__DeathUIBoostMenuController____c->static_fields->__9__22_1);
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar9,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar10,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
      }
      if (((this->fields).isGhost == 0) && (fVar8 <= 0.0)) {
        pGVar12 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        if ((pGVar12 == (GameEventManager *)0x0) ||
           (pGVar13 = (pGVar12->fields).AvatarCommandsPlayMode,
           pGVar13 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))
        goto code_?;
        if ((pGVar13->fields).OnSpawnAsGhost != (Action *)0x0) {
          pAVar14 = (pGVar13->fields).OnSpawnAsGhost;
          (*(pAVar14->fields)._._.invoke_impl)((pAVar14->fields)._._.method_code);
        }
        (this->fields).isGhost = 1;
      }
      if (((this->fields).wantsToPlay != 0) && (fVar8 <= 0.0)) {
        (this->fields).wantsToPlay = 0;
        pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__DeathUIBoostMenuController____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__DeathUIBoostMenuController____c);
        }
        pEVar10 = TypeInfo__DeathUIBoostMenuController____c->static_fields->__9__22_2;
        if (pEVar10 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if (*(int *)&(TypeInfo__DeathUIBoostMenuController____c->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__DeathUIBoostMenuController____c);
          }
          pDVar11 = TypeInfo__DeathUIBoostMenuController____c->static_fields->__9;
          pEVar10 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                   FUN_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar10,(Object *)pDVar11,
                     MethodInfo__DeathUIBoostMenuController____c___Update_b__22_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__DeathUIBoostMenuController____c->static_fields->__9__22_2 = pEVar10;
          func_?(&TypeInfo__DeathUIBoostMenuController____c->static_fields->__9__22_2);
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar9,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar10,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        pGVar12 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        if ((pGVar12 == (GameEventManager *)0x0) ||
           (pGVar13 = (pGVar12->fields).AvatarCommandsPlayMode,
           pGVar13 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))
        goto code_?;
        if ((pGVar13->fields).OnEnterPlaymode != (Action *)0x0) {
          pAVar14 = (pGVar13->fields).OnEnterPlaymode;
          (*(pAVar14->fields)._._.invoke_impl)
                    ((pAVar14->fields)._._.method_code,(pAVar14->fields)._._.method);
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void <OnRespawn>b__25_0(IDeathPromotionSelector, BaseEventData) */

void Assembly-CSharp.dll::DeathUIBoostMenuController::DeathUIBoostMenuController__OnRespawn_b__25_0
               (DeathUIBoostMenuController *this,IDeathPromotionSelector *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__DeathUIBoostMenuController__ReadyToSpawn_bool__bool_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IDeathPromotionSelector);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<bool,_bool>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_bool>);
  FUN_?(uVar1,this,MethodInfo__DeathUIBoostMenuController__ReadyToSpawn_bool__bool_);
  if (x == (IDeathPromotionSelector *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = 0;
  pIVar4 = x->klass;
  uVar5._0_1_ = (pIVar4->_1).rank;
  uVar5._1_1_ = (pIVar4->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar4->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)TypeInfo__IDeathPromotionSelector) {
        pIVar6 = &pIVar4->vtable + pIVar4->interfaceOffsets[uVar3].offset;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar5);
  }
  pIVar6 = (IDeathPromotionSelector__VTable *)FUN_?(x);
code_?:
  UNRECOVERED_JUMPTABLE = (pIVar6->TryShowPromotionOrAd).methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(x,uVar1,(pIVar6->TryShowPromotionOrAd).method,UNRECOVERED_JUMPTABLE);
  return;
}


/* DeathUIBoostMenuController() */

void Assembly-CSharp.dll::DeathUIBoostMenuController::DeathUIBoostMenuController__ctor
               (DeathUIBoostMenuController *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).timeUntilGhostMode = 2.0;
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
                while (ppMVar16 = ppMVar15 + 0x30528cee,
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

