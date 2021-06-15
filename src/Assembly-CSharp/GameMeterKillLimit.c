
/* Void Initialize() */

void Assembly-CSharp.dll::GameMeterKillLimit::GameMeterKillLimit_Initialize
               (GameMeterKillLimit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    this_01 = (WinningConditionManager *)
              PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(this_00,(MethodInfo *)0x0);
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__EventHandler<System::EventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this,
               MethodInfo__GameMeterKillLimit__OnVictoryConditionMet_System__Object__System__EventArgs_
               ,
               MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
              );
    if (this_01 != (WinningConditionManager *)0x0) {
      MVWorldObject.dll::WinningConditionManager::
      WinningConditionManager_add_OnWinningConditionReset
                (this_01,(EventHandler_1_EventArgs_ *)this_02,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GameMeterKillLimit::GameMeterKillLimit_OnDestroy
               (GameMeterKillLimit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_00 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
      ;
      if (this_00 != (PrefabPool *)0x0) {
        this_01 = (WinningConditionManager *)
                  PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(this_00,(MethodInfo *)0x0);
        this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(TypeInfo__System__EventHandler<System::EventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_02,unaff_ESI,
                   MethodInfo__GameMeterKillLimit__OnVictoryConditionMet_System__Object__System__EventArgs_
                   ,
                   MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                  );
        if (this_01 != (WinningConditionManager *)0x0) {
          MVWorldObject.dll::WinningConditionManager::
          WinningConditionManager_remove_OnWinningConditionReset
                    (this_01,(EventHandler_1_EventArgs_ *)this_02,(MethodInfo *)0x0);
          return;
        }
      }
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}


/* Void SetGameMeterVisibility() */

void Assembly-CSharp.dll::GameMeterKillLimit::GameMeterKillLimit_SetGameMeterVisibility
               (GameMeterKillLimit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    this_01 = (WinningConditionManager *)
              PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(this_00,(MethodInfo *)0x0);
    if (this_01 != (WinningConditionManager *)0x0) {
      pTVar1 = MVWorldObject.dll::WinningConditionManager::
               WinningConditionManager_GetSingletonWinnerConditionByType_6
                         (this_01,
                          KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__
                         );
      (this->fields).killClient = (KillLimitClient *)pTVar1;
      condition = (WinningConditionType__Enum *)&stack0xfffffff8;
      WinningConditionControl::WinningConditionControl_TryGetPrioritizedWinCondition
                (condition,(MethodInfo *)0x0);
      if (condition == (WinningConditionType__Enum *)0x2) {
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if (pGVar2 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,1,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if (pGVar2 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateValue() */

void Assembly-CSharp.dll::GameMeterKillLimit::GameMeterKillLimit_UpdateValue
               (GameMeterKillLimit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).killClient;
  if (this_00 == (KillLimitClient *)0x0) {
    return;
  }
  pOVar1 = System.dll::System::Collections::Generic::
           SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
           Single,System::Object]::
           SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                     ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                       *)this_00,(MethodInfo *)0x0);
  GameMeterKillBase::GameMeterKillBase_SetCount
            ((GameMeterKillBase *)this,GameStatCounterType__Enum_Kill,(int32_t)pOVar1,
             (MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_01 != (MVNetworkGame *)0x0) &&
     (this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0),
     this_02 != (MVLocalPlayer *)0x0)) {
    iVar2 = MVPlayer::MVPlayer_GetGameStat
                      ((MVPlayer *)this_02,GameStatCounterType__Enum_Kill,(MethodInfo *)0x0);
    if ((this->fields).prevValue == iVar2) {
      return;
    }
    if (iVar2 == 0) {
      return;
    }
    (this->fields).prevValue = iVar2;
    index = 0;
    pLVar3 = (this->fields)._._.gameMeterVisualEffects;
    while (pLVar3 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) {
      pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar3,
                          MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Count__
                         );
      if ((int)pOVar1 <= index) {
        return;
      }
      pLVar3 = (this->fields)._._.gameMeterVisualEffects;
      if ((pLVar3 == (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) ||
         (pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar3,index,
                              MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                             ), pIVar4 == (IEventSystemHandler *)0x0)) break;
      (*(code *)pIVar4->klass[1]._0.castClass)();
      index = index + 1;
      pLVar3 = (this->fields)._._.gameMeterVisualEffects;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

