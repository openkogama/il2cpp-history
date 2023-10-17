
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
  if (bVar1 == 0) {
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 != (MVNetworkGame *)0x0) {
    unaff_EBX = (Action_1_IWinningCondition___Class *)(pMVar2->fields).OnWinningConditionFulfilled;
    this_00 = (Action_1_Object_ *)func_?(TypeInfo__System__Action<IWinningCondition>);
    unaff_EDI = (Delegate *)0x0;
    if (this_00 != (Action_1_Object_ *)0x0) {
      mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__GameTierProgressBarRoundEndController__OnRoundEnd_IWinningCondition_,
                 (MethodInfo *)0x0);
      unaff_EDI = mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)unaff_EBX,(Delegate *)this_00,(MethodInfo *)0x0);
      unaff_EBX = TypeInfo__System__Action<IWinningCondition>;
      if (unaff_EDI == (Delegate *)0x0) {
        (pMVar2->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
        pAStack3 = (Action_1_IWinningCondition___Class *)0x0;
code_?:
        pDStack4 = (Delegate *)&(pMVar2->fields).OnWinningConditionFulfilled;
        func_?();
        return;
      }
      pAStack3 = TypeInfo__System__Action<IWinningCondition>;
      pDStack4 = unaff_EDI;
      pAVar5 = (Action_1_IWinningCondition_ *)func_?();
      if (pAVar5 != (Action_1_IWinningCondition_ *)0x0) {
        (pMVar2->fields).OnWinningConditionFulfilled = pAVar5;
        unaff_EBX = TypeInfo__System__Action<IWinningCondition>;
        pAStack3 = TypeInfo__System__Action<IWinningCondition>;
        pDStack4 = unaff_EDI;
        pAStack3 = (Action_1_IWinningCondition___Class *)func_?();
        if (pAStack3 != (Action_1_IWinningCondition___Class *)0x0) goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  pDStack4 = unaff_EDI;
  pAStack3 = unaff_EBX;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
    this_02 = (Action_1_Object_ *)func_?(TypeInfo__System__Action<IWinningCondition>);
    if (this_02 != (Action_1_Object_ *)0x0) {
      mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                (this_02,(Object *)this,
                 MethodInfo__GameTierProgressBarRoundEndController__OnRoundEnd_IWinningCondition_,
                 (MethodInfo *)0x0);
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar2,(Delegate *)this_02,(MethodInfo *)0x0);
      if (pDVar3 == (Delegate *)0x0) {
        (pMVar1->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
      }
      else {
        pAVar2 = (Action_1_IWinningCondition_ *)func_?();
        if (pAVar2 == (Action_1_IWinningCondition_ *)0x0) goto code_?;
        (pMVar1->fields).OnWinningConditionFulfilled = pAVar2;
        iVar4 = func_?();
        if (iVar4 == 0) goto code_?;
      }
      func_?();
      this_00 = (this->fields).tierProgressBar;
      if (this_00 != (GameTierProgressBar *)0x0) {
        GameTierProgressBar::GameTierProgressBar_Initialize(this_00,(MethodInfo *)0x0);
        this_01 = (this->fields).gainEffectController;
        if (this_01 != (GameTierProgressBarGainEffectController *)0x0) {
          GameTierProgressBarGainEffectController::
          GameTierProgressBarGainEffectController_Initialize(this_01,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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

