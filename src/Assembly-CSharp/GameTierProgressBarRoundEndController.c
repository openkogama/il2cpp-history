
/* Void OnDestroy() */

void Assembly-CSharp.dll::GameTierProgressBarRoundEndController::
     GameTierProgressBarRoundEndController_OnDestroy
               (GameTierProgressBarRoundEndController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<IWinningCondition>);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar2 == (MVGameControllerBase *)0x0) ||
       (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pAVar5 = (pMVar3->fields).OnWinningConditionFulfilled;
    this_00 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<IWinningCondition>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__GameTierProgressBarRoundEndController__OnRoundEnd_IWinningCondition_,
               (MethodInfo *)0x0);
    pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar5,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar7 = TypeInfo__System__Action<IWinningCondition>;
    if (pDVar6 == (Delegate *)0x0) {
      (pMVar3->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
    }
    else {
      pAVar5 = (Action_1_IWinningCondition_ *)
                FUN_?(pDVar6,TypeInfo__System__Action<IWinningCondition>);
      if (pAVar5 == (Action_1_IWinningCondition_ *)0x0) {
        FUN_?(pDVar6,pAVar7);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (pMVar3->fields).OnWinningConditionFulfilled = pAVar5;
      pAVar7 = TypeInfo__System__Action<IWinningCondition>;
      lVar8 = FUN_?(pDVar6,TypeInfo__System__Action<IWinningCondition>);
      if (lVar8 == 0) {
        FUN_?(pDVar6,pAVar7);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar9 = (uint)((ulonglong)&(pMVar3->fields).OnWinningConditionFulfilled >> 0xc);
      puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar11 = *puVar10;
        LOCK();
        uVar12 = *puVar10;
        if (uVar11 == uVar12) {
          *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (uVar11 != uVar12);
    }
  }
  return;
}


/* Void OnRoundEnd(IWinningCondition) */

void Assembly-CSharp.dll::GameTierProgressBarRoundEndController::
     GameTierProgressBarRoundEndController_OnRoundEnd
               (GameTierProgressBarRoundEndController *this,IWinningCondition *winningCondition,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
    (this->fields).hasRoundEnded = 1;
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::GameTierProgressBarRoundEndController::
     GameTierProgressBarRoundEndController_Start
               (GameTierProgressBarRoundEndController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<IWinningCondition>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GameTierProgressBarRoundEndController__OnRoundEnd_IWinningCondition_)
    ;
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
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    pAVar3 = (pMVar2->fields).OnWinningConditionFulfilled;
    this_03 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<IWinningCondition>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_03,(Object *)this,
               MethodInfo__GameTierProgressBarRoundEndController__OnRoundEnd_IWinningCondition_,
               (MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar3,(Delegate *)this_03,(MethodInfo *)0x0);
    pAVar5 = TypeInfo__System__Action<IWinningCondition>;
    if (pDVar4 == (Delegate *)0x0) {
      (pMVar2->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
    }
    else {
      pAVar3 = (Action_1_IWinningCondition_ *)
                FUN_?(pDVar4,TypeInfo__System__Action<IWinningCondition>);
      if (pAVar3 == (Action_1_IWinningCondition_ *)0x0) {
        FUN_?(pDVar4,pAVar5);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (pMVar2->fields).OnWinningConditionFulfilled = pAVar3;
      pAVar5 = TypeInfo__System__Action<IWinningCondition>;
      lVar7 = FUN_?();
      if (lVar7 == 0) {
        FUN_?(pDVar4,pAVar5);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)&(pMVar2->fields).OnWinningConditionFulfilled >> 0xc);
      puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar10 = *puVar9;
        LOCK();
        uVar11 = *puVar9;
        if (uVar10 == uVar11) {
          *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (uVar10 != uVar11);
    }
    this_00 = (this->fields).tierProgressBar;
    if (this_00 != (GameTierProgressBar *)0x0) {
      GameTierProgressBar::GameTierProgressBar_Initialize(this_00,(MethodInfo *)0x0);
      this_01 = (this->fields).gainEffectController;
      if (this_01 != (GameTierProgressBarGainEffectController *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Action<int>,0);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__System__Action);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__GamePassesManager);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__GamePointGainEffectManager);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownGainEffect_int_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownTierProgressBarGainEffect_int_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__GameTierProgressBarGainEffectController__OnPlayerPlanetDataUpdated__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((this_01->fields).isInitialized == 0) {
          bVar12 = cRam_? == '\0';
          (this_01->fields).isInitialized = 1;
          if (bVar12) {
            FUN_?(&TypeInfo__GamePassesManager);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__GamePassesManager);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pPVar13 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
            if (pPVar13 == (PlayerPlanetData *)0x0) {
              FUN_?();
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            (this_01->fields).currentGamePoints = (pPVar13->fields).progressionGamePoints;
          }
          pAVar14 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
          this_02 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_02,(Object *)this_01,
                     MethodInfo__GameTierProgressBarGainEffectController__OnPlayerPlanetDataUpdated__
                     ,(MethodInfo *)0x0);
          pAVar14 = (Action *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pAVar14,(Delegate *)this_02,(MethodInfo *)0x0);
          if (pAVar14 == (Action *)0x0) {
            TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
          }
          else {
            pAVar15 = (Action *)0x0;
            if (pAVar14->klass == TypeInfo__System__Action) {
              pAVar15 = pAVar14;
            }
            if (pAVar15 == (Action *)0x0) {
              FUN_?(pAVar14,TypeInfo__System__Action);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar15;
            pAVar15 = (Action *)0x0;
            if (pAVar14->klass == TypeInfo__System__Action) {
              pAVar15 = pAVar14;
            }
            if (pAVar15 == (Action *)0x0) {
              FUN_?(pAVar14);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar8 = (uint)((ulonglong)
                            &TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated
                           >> 0xc);
            lVar7 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
            do {
              uVar11 = *(ulonglong *)(lVar7 + 0xADDR);
              puVar9 = (ulonglong *)(lVar7 + 0xADDR);
              LOCK();
              bVar12 = uVar11 == *puVar9;
              if (bVar12) {
                *puVar9 = uVar11 | 1L << (ulonglong)(uVar8 & 0x3f);
              }
              UNLOCK();
            } while (!bVar12);
          }
          pAVar16 = TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown;
          pDVar4 = (Delegate *)FUN_?(TypeInfo__System__Action<int>);
          FUN_?(pDVar4,this_01);
          pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pAVar16,pDVar4,(MethodInfo *)0x0);
          pAVar17 = TypeInfo__System__Action<int>;
          if (pDVar4 == (Delegate *)0x0) {
            TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown =
                 (Action_1_Int32_ *)0x0;
          }
          else {
            pAVar16 = (Action_1_Int32_ *)FUN_?(pDVar4,TypeInfo__System__Action<int>);
            if (pAVar16 == (Action_1_Int32_ *)0x0) {
              FUN_?(pDVar4,pAVar17);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown =
                 pAVar16;
            pAVar17 = TypeInfo__System__Action<int>;
            lVar7 = FUN_?(pDVar4,TypeInfo__System__Action<int>);
            if (lVar7 == 0) {
              FUN_?(pDVar4,pAVar17);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar8 = (uint)((ulonglong)TypeInfo__GamePointGainEffectManager->static_fields >> 0xc);
            lVar7 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
            do {
              uVar11 = *(ulonglong *)(lVar7 + 0xADDR);
              puVar9 = (ulonglong *)(lVar7 + 0xADDR);
              LOCK();
              bVar12 = uVar11 == *puVar9;
              if (bVar12) {
                *puVar9 = uVar11 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (!bVar12);
          }
          pAVar16 = TypeInfo__GamePointGainEffectManager->static_fields->
                    OnTierProgressBarGamePointGainEffectShown;
          pDVar4 = (Delegate *)FUN_?(TypeInfo__System__Action<int>);
          FUN_?(pDVar4,this_01);
          pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pAVar16,pDVar4,(MethodInfo *)0x0);
          pAVar17 = TypeInfo__System__Action<int>;
          if (pDVar4 == (Delegate *)0x0) {
            TypeInfo__GamePointGainEffectManager->static_fields->
            OnTierProgressBarGamePointGainEffectShown = (Action_1_Int32_ *)0x0;
          }
          else {
            pAVar16 = (Action_1_Int32_ *)FUN_?(pDVar4,TypeInfo__System__Action<int>);
            if (pAVar16 == (Action_1_Int32_ *)0x0) {
              FUN_?(pDVar4,pAVar17);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            TypeInfo__GamePointGainEffectManager->static_fields->
            OnTierProgressBarGamePointGainEffectShown = pAVar16;
            pAVar17 = TypeInfo__System__Action<int>;
            lVar7 = FUN_?(pDVar4);
            if (lVar7 == 0) {
              FUN_?(pDVar4,pAVar17);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar8 = (uint)((ulonglong)
                            &TypeInfo__GamePointGainEffectManager->static_fields->
                             OnTierProgressBarGamePointGainEffectShown >> 0xc);
            lVar7 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
            do {
              uVar11 = *(ulonglong *)(lVar7 + 0xADDR);
              puVar9 = (ulonglong *)(lVar7 + 0xADDR);
              LOCK();
              bVar12 = uVar11 == *puVar9;
              if (bVar12) {
                *puVar9 = uVar11 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (!bVar12);
          }
          lVar7 = 5;
          do {
            GameTierProgressBarGainEffectController::
            GameTierProgressBarGainEffectController_CreateGamePointGainEffect
                      (this_01,(MethodInfo *)0x0);
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GameTierProgressBarRoundEndController::
     GameTierProgressBarRoundEndController_Update
               (GameTierProgressBarRoundEndController *this,MethodInfo *method)

{
  if ((this->fields).hasRoundEnded == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields)._NetworkGameStateListener_k__BackingField,
     pMVar3 != (MVNetworkGameStateListener *)0x0)) {
    if ((pMVar3->fields).currentGameState == 2) {
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar2 != (MVNetworkGame *)0x0) &&
         (pMVar3 = (pMVar2->fields)._NetworkGameStateListener_k__BackingField,
         pMVar3 != (MVNetworkGameStateListener *)0x0)) {
        if (3000 < (pMVar3->fields).timeLeft) {
          return;
        }
        pGVar4 = (this->fields).tierProgressBar;
        if ((pGVar4 != (GameTierProgressBar *)0x0) &&
           (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pGVar4,(MethodInfo *)0x0), pGVar5 != (GameObject *)0x0)
           ) {
          bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                            (pGVar5,(MethodInfo *)0x0);
          if (bVar6 == 0) {
            pGVar4 = (this->fields).tierProgressBar;
            if ((pGVar4 == (GameTierProgressBar *)0x0) ||
               (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pGVar4,(MethodInfo *)0x0),
               pGVar5 == (GameObject *)0x0)) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar5,1,(MethodInfo *)0x0);
          }
          pGVar5 = (this->fields).inGameUIContent;
          if (pGVar5 != (GameObject *)0x0) {
            bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                              (pGVar5,(MethodInfo *)0x0);
            if (bVar6 == 0) {
              return;
            }
            pGVar5 = (this->fields).inGameUIContent;
            if (pGVar5 != (GameObject *)0x0) {
              uVar7 = 0;
              goto code_?;
            }
          }
        }
      }
    }
    else {
      pGVar4 = (this->fields).tierProgressBar;
      (this->fields).hasRoundEnded = 0;
      if ((pGVar4 != (GameTierProgressBar *)0x0) &&
         (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pGVar4,(MethodInfo *)0x0), pGVar5 != (GameObject *)0x0))
      {
        bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar5,(MethodInfo *)0x0);
        if (bVar6 != 0) {
          pGVar4 = (this->fields).tierProgressBar;
          if ((pGVar4 == (GameTierProgressBar *)0x0) ||
             (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pGVar4,(MethodInfo *)0x0),
             pGVar5 == (GameObject *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar5,0,(MethodInfo *)0x0);
        }
        pGVar5 = (this->fields).inGameUIContent;
        if (pGVar5 != (GameObject *)0x0) {
          bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                            (pGVar5,(MethodInfo *)0x0);
          if (bVar6 != 0) {
            return;
          }
          pGVar5 = (this->fields).inGameUIContent;
          if (pGVar5 != (GameObject *)0x0) {
            uVar7 = 1;
code_?:
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                            ,uVar7,0);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (pGVar5 == (GameObject *)0x0) {
              FUN_?();
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pvVar9 = (pGVar5->fields)._.m_CachedPtr;
            if (pvVar9 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar5,(MethodInfo *)0x0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcVar8 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
              uVar7 = func_?(&UNK_?);
              FUN_?(uVar7,0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcRam_? = pcVar8;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam_?)(pvVar9,uVar7);
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

