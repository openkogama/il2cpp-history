
/* Void OnDestroy() */

void Assembly-CSharp.dll::GameTierProgressBarRoundEndController::
     GameTierProgressBarRoundEndController_OnDestroy
               (GameTierProgressBarRoundEndController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<IWinningCondition>);
    func_?(&
                    MethodInfo__GameTierProgressBarRoundEndController__OnRoundEnd_IWinningCondition_
                   );
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) {
      func_?();
      goto code_?;
    }
    pAVar3 = (pMVar2->fields).OnWinningConditionFulfilled;
    this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
              func_?(TypeInfo__System__Action<IWinningCondition>);
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
    SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__GameTierProgressBarRoundEndController__OnRoundEnd_IWinningCondition_,
               (MethodInfo *)0x0);
    unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
    unaff_EDI = TypeInfo__System__Action<IWinningCondition>;
    if (unaff_ESI == (Delegate *)0x0) {
      (pMVar2->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
      pAStack4 = (Action_1_IWinningCondition___Class *)0x0;
    }
    else {
      pAStack4 = TypeInfo__System__Action<IWinningCondition>;
      pDStack5 = unaff_ESI;
      pAVar3 = (Action_1_IWinningCondition_ *)func_?();
      if (pAVar3 == (Action_1_IWinningCondition_ *)0x0) {
code_?:
        pDStack5 = unaff_ESI;
        pAStack4 = unaff_EDI;
        func_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (pMVar2->fields).OnWinningConditionFulfilled = pAVar3;
      unaff_EDI = TypeInfo__System__Action<IWinningCondition>;
      pAStack4 = TypeInfo__System__Action<IWinningCondition>;
      pDStack5 = unaff_ESI;
      pAStack4 = (Action_1_IWinningCondition___Class *)func_?();
      if (pAStack4 == (Action_1_IWinningCondition___Class *)0x0) goto code_?;
    }
    pDStack5 = (Delegate *)&(pMVar2->fields).OnWinningConditionFulfilled;
    func_?();
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
    func_?(&TypeInfo__GamePassesManager);
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
    func_?(&TypeInfo__System__Action<IWinningCondition>);
    func_?(&
                    MethodInfo__GameTierProgressBarRoundEndController__OnRoundEnd_IWinningCondition_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pAVar2 = (pMVar1->fields).OnWinningConditionFulfilled;
    this_02 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
              func_?(TypeInfo__System__Action<IWinningCondition>);
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
    SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__GameTierProgressBarRoundEndController__OnRoundEnd_IWinningCondition_,
               (MethodInfo *)0x0);
    uVar3 = 0;
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar2,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pDVar4 == (Delegate *)0x0) {
      (pMVar1->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
    }
    else {
      pAVar2 = (Action_1_IWinningCondition_ *)func_?();
      if (pAVar2 == (Action_1_IWinningCondition_ *)0x0) goto code_?;
      (pMVar1->fields).OnWinningConditionFulfilled = pAVar2;
      iVar5 = func_?();
      if (iVar5 == 0) goto code_?;
    }
    func_?();
    if ((_UNK_? != (GameTierProgressBar *)0x0) &&
       (GameTierProgressBar::GameTierProgressBar_Initialize(_UNK_?,(MethodInfo *)0x0),
       this_00 = _UNK_?, _UNK_? != (GameTierProgressBarGainEffectController *)0x0)) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Action<int>,unaff_EBP);
        func_?(&TypeInfo__System__Action);
        func_?(&TypeInfo__GamePassesManager);
        func_?(&TypeInfo__GamePointGainEffectManager);
        func_?(&
                        MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownGainEffect_int_
                       );
        func_?(&
                        MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownTierProgressBarGainEffect_int_
                       );
        func_?(&
                        MethodInfo__GameTierProgressBarGainEffectController__OnPlayerPlanetDataUpdated__
                       );
        cRam_? = '\x01';
      }
      if ((this_00->fields).isInitialized != 0) {
        return;
      }
      (this_00->fields).isInitialized = 1;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GamePassesManager,unaff_ESI);
        cRam_? = '\x01';
      }
      if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
code_?:
        pAVar6 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
        this_01 = (NavMesh_OnNavMeshPreUpdate *)
                  func_?(TypeInfo__System__Action,this_02,uVar3);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_01,(Object *)this_00,
                   MethodInfo__GameTierProgressBarGainEffectController__OnPlayerPlanetDataUpdated__,
                   (MethodInfo *)0x0);
        pAVar6 = (Action *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar6,(Delegate *)this_01,(MethodInfo *)0x0);
        if (pAVar6 == (Action *)0x0) {
          TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
        }
        else {
          pAVar7 = (Action *)0x0;
          if (pAVar6->klass == TypeInfo__System__Action) {
            pAVar7 = pAVar6;
          }
          if (pAVar7 == (Action *)0x0) {
            func_?();
            goto code_?;
          }
          TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar7;
          pAVar7 = (Action *)0x0;
          if (pAVar6->klass == TypeInfo__System__Action) {
            pAVar7 = pAVar6;
          }
          if (pAVar7 == (Action *)0x0) goto code_?;
        }
        func_?();
        pAVar8 = TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown;
        pUVar9 = (UnityAction_1_System_Int32Enum_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (pUVar9,(Object *)this_00,
                   MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownGainEffect_int_,
                   (MethodInfo *)0x0);
        pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar8,(Delegate *)pUVar9,(MethodInfo *)0x0);
        if (pDVar4 == (Delegate *)0x0) {
          TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown =
               (Action_1_Int32_ *)0x0;
code_?:
          func_?();
          pAVar8 = TypeInfo__GamePointGainEffectManager->static_fields->
                   OnTierProgressBarGamePointGainEffectShown;
          pUVar9 = (UnityAction_1_System_Int32Enum_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
          UnityAction_1_System_Int32Enum___ctor
                    (pUVar9,(Object *)this_00,
                     MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownTierProgressBarGainEffect_int_
                     ,(MethodInfo *)0x0);
          pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pAVar8,(Delegate *)pUVar9,(MethodInfo *)0x0);
          if (pDVar4 == (Delegate *)0x0) {
            TypeInfo__GamePointGainEffectManager->static_fields->
            OnTierProgressBarGamePointGainEffectShown = (Action_1_Int32_ *)0x0;
code_?:
            func_?();
            iVar5 = 5;
            do {
              GameTierProgressBarGainEffectController::
              GameTierProgressBarGainEffectController_CreateGamePointGainEffect
                        (this_00,(MethodInfo *)0x0);
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            return;
          }
          pAVar8 = (Action_1_Int32_ *)func_?();
          if (pAVar8 != (Action_1_Int32_ *)0x0) {
            TypeInfo__GamePointGainEffectManager->static_fields->
            OnTierProgressBarGamePointGainEffectShown = pAVar8;
            iVar5 = func_?();
            if (iVar5 != 0) goto code_?;
          }
        }
        else {
          pAVar8 = (Action_1_Int32_ *)func_?();
          if (pAVar8 != (Action_1_Int32_ *)0x0) {
            TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown = pAVar8
            ;
            iVar5 = func_?();
            if (iVar5 != 0) goto code_?;
          }
        }
      }
      else {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__GamePassesManager,unaff_ESI);
          cRam_? = '\x01';
        }
        pPVar10 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if (pPVar10 != (PlayerPlanetData *)0x0) {
          (this_00->fields).currentGamePoints = (pPVar10->fields).progressionGamePoints;
          goto code_?;
        }
code_?:
        func_?();
      }
      func_?();
code_?:
      func_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = (pMVar1->fields)._NetworkGameStateListener_k__BackingField,
     pMVar2 != (MVNetworkGameStateListener *)0x0)) {
    if ((pMVar2->fields).currentGameState == 2) {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (pMVar2 = (pMVar1->fields)._NetworkGameStateListener_k__BackingField,
         pMVar2 != (MVNetworkGameStateListener *)0x0)) {
        if (3000 < (pMVar2->fields).timeLeft) {
          return;
        }
        pGVar3 = (this->fields).tierProgressBar;
        if ((pGVar3 != (GameTierProgressBar *)0x0) &&
           (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pGVar3,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0)
           ) {
          bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                            (pGVar4,(MethodInfo *)0x0);
          if (bVar5 == 0) {
            pGVar3 = (this->fields).tierProgressBar;
            if ((pGVar3 == (GameTierProgressBar *)0x0) ||
               (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pGVar3,(MethodInfo *)0x0),
               pGVar4 == (GameObject *)0x0)) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar4,1,(MethodInfo *)0x0);
          }
          pGVar4 = (this->fields).inGameUIContent;
          if (pGVar4 != (GameObject *)0x0) {
            bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                              (pGVar4,(MethodInfo *)0x0);
            if (bVar5 == 0) {
              return;
            }
            pGVar4 = (this->fields).inGameUIContent;
            if (pGVar4 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar4,0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    else {
      pGVar3 = (this->fields).tierProgressBar;
      (this->fields).hasRoundEnded = 0;
      if ((pGVar3 != (GameTierProgressBar *)0x0) &&
         (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pGVar3,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0))
      {
        bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar4,(MethodInfo *)0x0);
        if (bVar5 != 0) {
          pGVar3 = (this->fields).tierProgressBar;
          if ((pGVar3 == (GameTierProgressBar *)0x0) ||
             (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pGVar3,(MethodInfo *)0x0),
             pGVar4 == (GameObject *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,0,(MethodInfo *)0x0);
        }
        pGVar4 = (this->fields).inGameUIContent;
        if (pGVar4 != (GameObject *)0x0) {
          bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                            (pGVar4,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            return;
          }
          pGVar4 = (this->fields).inGameUIContent;
          if (pGVar4 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar4,1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

