
/* Void Initialize() */

void Assembly-CSharp.dll::GameMeterKillLimit::GameMeterKillLimit_Initialize
               (GameMeterKillLimit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    func_?(&
                    MethodInfo__GameMeterKillLimit__OnVictoryConditionMet_System__Object__System__EventArgs_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    this_00 = (pMVar1->fields)._WinningConditionManager_k__BackingField;
    this_01 = (EventHandler_1_Object_ *)
              func_?(TypeInfo__System__EventHandler<System::EventArgs>);
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__GameMeterKillLimit__OnVictoryConditionMet_System__Object__System__EventArgs_
               ,(MethodInfo *)0x0);
    if (this_00 != (WinningConditionManager *)0x0) {
      MVWorldObject.dll::WinningConditionManager::
      WinningConditionManager_add_OnWinningConditionReset
                (this_00,(EventHandler_1_EventArgs_ *)this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GameMeterKillLimit::GameMeterKillLimit_OnDestroy
               (GameMeterKillLimit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    func_?(&
                    MethodInfo__GameMeterKillLimit__OnVictoryConditionMet_System__Object__System__EventArgs_
                   );
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if ((bVar1 != 0) &&
     (pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0),
     pMVar2 != (MVNetworkGame *)0x0)) {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      this_00 = (pMVar2->fields)._WinningConditionManager_k__BackingField;
      this_01 = (EventHandler_1_Object_ *)
                func_?(TypeInfo__System__EventHandler<System::EventArgs>);
      mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                (this_01,unaff_ESI,
                 MethodInfo__GameMeterKillLimit__OnVictoryConditionMet_System__Object__System__EventArgs_
                 ,(MethodInfo *)0x0);
      if (this_00 != (WinningConditionManager *)0x0) {
        MVWorldObject.dll::WinningConditionManager::
        WinningConditionManager_remove_OnWinningConditionReset
                  (this_00,(EventHandler_1_EventArgs_ *)this_01,(MethodInfo *)0x0);
        return;
      }
    }
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}


/* Boolean SetGameMeterVisibility() */

bool Assembly-CSharp.dll::GameMeterKillLimit::GameMeterKillLimit_SetGameMeterVisibility
               (GameMeterKillLimit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields)._WinningConditionManager_k__BackingField,
     this_00 != (WinningConditionManager *)0x0)) {
    pKVar2 = (KillLimitClient *)
             MVWorldObject.dll::WinningConditionManager::
             WinningConditionManager_GetSingletonWinnerConditionByType
                       (this_00,
                        KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__
                       );
    (this->fields).killClient = pKVar2;
    func_?(&(this->fields).killClient,pKVar2);
    bVar3 = WinningConditionControl::WinningConditionControl_IsWinConditionPresent
                      (WinningConditionType__Enum_Kill,(MethodInfo *)0x0);
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      return bVar3;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Void UpdateValue() */

void Assembly-CSharp.dll::GameMeterKillLimit::GameMeterKillLimit_UpdateValue
               (GameMeterKillLimit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  if ((this->fields).killClient == (KillLimitClient *)0x0) {
    return;
  }
  GameMeterKillBase::GameMeterKillBase_SetCount
            ((GameMeterKillBase *)this,GameStatCounterType__Enum_Kill,
             (((this->fields).killClient)->fields)._._.limit,(MethodInfo *)0x0);
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_01 != (MVNetworkGame *)0x0) &&
     (this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0),
     this_02 != (MVLocalPlayer *)0x0)) {
    iVar1 = MVPlayer::MVPlayer_GetGameStat
                      ((MVPlayer *)this_02,GameStatCounterType__Enum_Kill,(MethodInfo *)0x0);
    if ((this->fields).prevValue == iVar1) {
      return;
    }
    if (iVar1 == 0) {
      return;
    }
    (this->fields).prevValue = iVar1;
    index = 0;
    pLVar2 = (this->fields)._._.gameMeterVisualEffects;
    while (pLVar2 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) {
      if ((pLVar2->fields)._size <= index) {
        return;
      }
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields)._._.gameMeterVisualEffects;
      if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_00,index,
                             MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                            ), RVar3 == (RegexCharClass_SingleRange)0x0)) break;
      (**(code **)(*(int *)RVar3 + 0xe0))();
      index = index + 1;
      pLVar2 = (this->fields)._._.gameMeterVisualEffects;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

