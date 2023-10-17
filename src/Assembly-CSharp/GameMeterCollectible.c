
/* Void Initialize() */

void Assembly-CSharp.dll::GameMeterCollectible::GameMeterCollectible_Initialize
               (GameMeterCollectible *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    func_?(&
                    MethodInfo__GameMeterCollectible__OnVictoryConditionMet_System__Object__System__EventArgs_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    this_00 = (pMVar1->fields)._WinningConditionManager_k__BackingField;
    this_01 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(TypeInfo__System__EventHandler<System::EventArgs>);
    if (this_01 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__GameMeterCollectible__OnVictoryConditionMet_System__Object__System__EventArgs_
                 ,(MethodInfo *)0x0);
      if (this_00 != (WinningConditionManager *)0x0) {
        MVWorldObject.dll::WinningConditionManager::
        WinningConditionManager_add_OnWinningConditionReset
                  (this_00,(EventHandler_1_EventArgs_ *)this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GameMeterCollectible::GameMeterCollectible_OnDestroy
               (GameMeterCollectible *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    func_?(&
                    MethodInfo__GameMeterCollectible__OnVictoryConditionMet_System__Object__System__EventArgs_
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
      this_01 = (UnityAction_2_System_Object_System_Object_ *)
                func_?(TypeInfo__System__EventHandler<System::EventArgs>);
      if ((this_01 != (UnityAction_2_System_Object_System_Object_ *)0x0) &&
         (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (this_01,unaff_ESI,
                     MethodInfo__GameMeterCollectible__OnVictoryConditionMet_System__Object__System__EventArgs_
                     ,(MethodInfo *)0x0), this_00 != (WinningConditionManager *)0x0)) {
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


/* Void SetGameMeterVisibility() */

void Assembly-CSharp.dll::GameMeterCollectible::GameMeterCollectible_SetGameMeterVisibility
               (GameMeterCollectible *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                   );
    cRam_? = '\x01';
  }
  WStack_1 = WinningConditionType__Enum_Collectible;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar2->fields)._WinningConditionManager_k__BackingField,
     this_00 != (WinningConditionManager *)0x0)) {
    pAVar3 = (AllCollectiblesCollectedClient *)
             MVWorldObject.dll::WinningConditionManager::
             WinningConditionManager_GetSingletonWinnerConditionByType
                       (this_00,
                        AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                       );
    (this->fields).collectedClient = pAVar3;
    func_?(&(this->fields).collectedClient,pAVar3);
    WinningConditionControl::WinningConditionControl_TryGetPrioritizedWinCondition
              (&WStack_1,(MethodInfo *)0x0);
    if (WStack_1 == WinningConditionType__Enum_Collectible) {
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (pGVar4 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar4,1,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (pGVar4 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar4,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateValue() */

void Assembly-CSharp.dll::GameMeterCollectible::GameMeterCollectible_UpdateValue
               (GameMeterCollectible *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                   );
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if ((this->fields).collectedClient == (AllCollectiblesCollectedClient *)0x0) {
    return;
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar1 == (MVNetworkGame *)0x0) ||
      (this_00 = (pMVar1->fields).teamManager, this_00 == (MVTeamManager *)0x0)) ||
     (pLVar2 = MVTeamManager::MVTeamManager_GetTeamList(this_00,(MethodInfo *)0x0),
     pLVar2 == (List_1_MV_WorldObject_MVTeam_ *)0x0)) goto code_?;
  if ((pLVar2->fields)._size < 2) {
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 == (MVNetworkGame *)0x0) ||
       (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
       pMVar3 == (MVLocalPlayer *)0x0)) goto code_?;
    IVar4.m_value =
         MVPlayer::MVPlayer_GetGameStat
                   ((MVPlayer *)pMVar3,GameStatCounterType__Enum_Collectible,(MethodInfo *)0x0);
  }
  else {
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    this_01 = (pMVar1->fields).gameStatCounterManager;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar1 == (MVNetworkGame *)0x0) ||
        (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
        pMVar3 == (MVLocalPlayer *)0x0)) || (this_01 == (GameStatCounterManager *)0x0))
    goto code_?;
    IVar4.m_value =
         MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetTeamCount
                   (this_01,GameStatCounterType__Enum_Collectible,
                    (pMVar3->fields)._._Team_k__BackingField,(MethodInfo *)0x0);
  }
  if (((this->fields).prevValue == IVar4.m_value) || (IVar4.m_value == 0)) {
code_?:
    str0 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
    if ((this->fields).collectedClient != (AllCollectiblesCollectedClient *)0x0) {
      str2 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&stack0xfffffff4,(MethodInfo *)0x0);
      pSStack5 =
           mscorlib.dll::System::String::String_Concat_4
                     (str0,::StringLiteral__,str2,(MethodInfo *)0x0);
      pTStack6 = (this->fields).collectibleText;
      if (pTStack6 != (Text *)0x0) {
        pMStack7 = (pTStack6->klass->vtable).set_text.method;
        (*(pTStack6->klass->vtable).set_text.methodPtr)();
        return;
      }
    }
  }
  else {
    index = 0;
    pLVar8 = (this->fields)._.gameMeterVisualEffects;
    while (pLVar8 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) {
      if ((pLVar8->fields)._size <= index) {
        (this->fields).prevValue = IVar4.m_value;
        goto code_?;
      }
      this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields)._.gameMeterVisualEffects;
      if ((this_02 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_02,index,
                             MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                            ), RVar9 == (RegexCharClass_SingleRange)0x0)) break;
      (**(code **)(*(int *)RVar9 + 0xdc))();
      index = index + 1;
      pLVar8 = (this->fields)._.gameMeterVisualEffects;
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

