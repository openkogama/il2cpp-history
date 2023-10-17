
/* Void GetDebriefing(IDebriefing) */

void Assembly-CSharp.dll::TimeLimitClient::TimeLimitClient_GetDebriefing
               (TimeLimitClient *this,IDebriefing *winningConditionDebriefingView,MethodInfo *method
               )

{
  uStack_1 = (undefined *)in_ECX;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IDebriefing);
    cRam_? = '\x01';
  }
  uStack_1 = (undefined *)((uint)uStack_1 & 0xffffff);
  WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
            ((GameStatCounterType__Enum *)((int)&uStack_1 + 3),(MethodInfo *)0x0);
  bVar2 = cRam_? == '\0';
  (this->fields)._.counterType = uStack_1._3_1_;
  if (bVar2) {
    func_?(&
                    AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                   );
    func_?(&
                    FlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<FlagReachedClient>__
                   );
    func_?(&
                    KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__
                   );
    func_?(&
                    OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                   );
    func_?(&
                    TimeAttackFlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeAttackFlagReachedClient>__
                   );
    cRam_? = '\x01';
  }
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar3 != (MVNetworkGame *)0x0) &&
     (pWVar4 = (pMVar3->fields)._WinningConditionManager_k__BackingField,
     pWVar4 != (WinningConditionManager *)0x0)) {
    pOVar5 = MVWorldObject.dll::WinningConditionManager::
             WinningConditionManager_GetSingletonWinnerConditionByType
                       (pWVar4,
                        FlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<FlagReachedClient>__
                       );
    if (pOVar5 == (Object *)0x0) {
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar3 == (MVNetworkGame *)0x0) ||
         (pWVar4 = (pMVar3->fields)._WinningConditionManager_k__BackingField,
         pWVar4 == (WinningConditionManager *)0x0)) goto code_?;
      pOVar5 = MVWorldObject.dll::WinningConditionManager::
               WinningConditionManager_GetSingletonWinnerConditionByType
                         (pWVar4,
                          TimeAttackFlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeAttackFlagReachedClient>__
                         );
      if (pOVar5 == (Object *)0x0) {
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar3 == (MVNetworkGame *)0x0) ||
           (winningConditionDebriefingView =
                 (IDebriefing *)(pMVar3->fields)._WinningConditionManager_k__BackingField,
           (WinningConditionManager *)winningConditionDebriefingView ==
           (WinningConditionManager *)0x0)) goto code_?;
        pOVar5 = MVWorldObject.dll::WinningConditionManager::
                 WinningConditionManager_GetSingletonWinnerConditionByType
                           ((WinningConditionManager *)winningConditionDebriefingView,
                            AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                           );
        if (pOVar5 == (Object *)0x0) {
          pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar3 == (MVNetworkGame *)0x0) ||
             (pWVar4 = (pMVar3->fields)._WinningConditionManager_k__BackingField,
             pWVar4 == (WinningConditionManager *)0x0)) goto code_?;
          pOVar5 = MVWorldObject.dll::WinningConditionManager::
                   WinningConditionManager_GetSingletonWinnerConditionByType
                             (pWVar4,
                              KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__
                             );
          if (pOVar5 == (Object *)0x0) {
            pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar3 == (MVNetworkGame *)0x0) ||
               (pWVar4 = (pMVar3->fields)._WinningConditionManager_k__BackingField,
               pWVar4 == (WinningConditionManager *)0x0)) goto code_?;
            MVWorldObject.dll::WinningConditionManager::
            WinningConditionManager_GetSingletonWinnerConditionByType
                      (pWVar4,
                       OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                      );
          }
        }
      }
    }
    (*(this->klass->vtable).get_HighScores_1.methodPtr)();
    (*(this->klass->vtable).get_IsTeamMode_1.methodPtr)();
    if (winningConditionDebriefingView != (IDebriefing *)0x0) {
      func_?();
      return;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* TimeLimitClient(WinningCondition, Int32, GameStatCounterManager) */

void Assembly-CSharp.dll::TimeLimitClient::TimeLimitClient__ctor
               (TimeLimitClient *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,MethodInfo *method)

{
  MVWorldObject.dll::WinningCondition::WinningCondition__ctor
            ((WinningCondition *)this,parent,id,gameCounterManager,0,1,
             GameStatCounterType__Enum_Time_1,WinningConditionPresentStyle__Enum_MultipleWinners,
             (MethodInfo *)0x0);
  return;
}


/* Boolean get_IsBriefingNode() */

bool Assembly-CSharp.dll::TimeLimitClient::TimeLimitClient_get_IsBriefingNode
               (TimeLimitClient *this,MethodInfo *method)

{
  return (this->fields)._.counterType != 0;
}

