
/* Boolean SetGameMeterVisibility() */

bool Assembly-CSharp.dll::GameMeterFlag::GameMeterFlag_SetGameMeterVisibility
               (GameMeterFlag *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  FlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<FlagReachedClient>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TimeAttackFlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeAttackFlagReachedClient>__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields)._WinningConditionManager_k__BackingField,
     this_00 != (WinningConditionManager *)0x0)) {
    pOVar2 = MVWorldObject.dll::WinningConditionManager::
             WinningConditionManager_GetSingletonWinnerConditionByType
                       (this_00,
                        FlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<FlagReachedClient>__
                       );
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,pOVar2 != (Object *)0x0,(MethodInfo *)0x0);
      return pOVar2 != (Object *)0x0;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}

