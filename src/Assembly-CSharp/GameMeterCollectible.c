
/* Void Initialize() */

void Assembly-CSharp.dll::GameMeterCollectible::GameMeterCollectible_Initialize
               (GameMeterCollectible *this,MethodInfo *method)

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
               MethodInfo__GameMeterCollectible__OnVictoryConditionMet_System__Object__System__EventArgs_
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

void Assembly-CSharp.dll::GameMeterCollectible::GameMeterCollectible_OnDestroy
               (GameMeterCollectible *this,MethodInfo *method)

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
                   MethodInfo__GameMeterCollectible__OnVictoryConditionMet_System__Object__System__EventArgs_
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

void Assembly-CSharp.dll::GameMeterCollectible::GameMeterCollectible_SetGameMeterVisibility
               (GameMeterCollectible *this,MethodInfo *method)

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
                          AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                         );
      (this->fields).collectedClient = (AllCollectiblesCollectedClient *)pTVar1;
      condition = (WinningConditionType__Enum *)&stack0xfffffff8;
      WinningConditionControl::WinningConditionControl_TryGetPrioritizedWinCondition
                (condition,(MethodInfo *)0x0);
      if (condition == (WinningConditionType__Enum *)0x0) {
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

void Assembly-CSharp.dll::GameMeterCollectible::GameMeterCollectible_UpdateValue
               (GameMeterCollectible *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).collectedClient == (AllCollectiblesCollectedClient *)0x0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar1 == (MVNetworkGame *)0x0) ||
      (this_01 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                           ((DayNightCycle *)pMVar1,(MethodInfo *)0x0), this_01 == (SkyParam *)0x0))
     || (this_02 = MVTeamManager::MVTeamManager_GetTeamList
                             ((MVTeamManager *)this_01,(MethodInfo *)0x0),
        this_02 == (List_1_MV_WorldObject_MVTeam_ *)0x0)) goto code_?;
  pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                     );
  if ((int)pOVar2 < 2) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 == (MVNetworkGame *)0x0) ||
       (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
       pMVar3 == (MVLocalPlayer *)0x0)) goto code_?;
    iVar4 = MVPlayer::MVPlayer_GetGameStat
                      ((MVPlayer *)pMVar3,GameStatCounterType__Enum_Collectible,(MethodInfo *)0x0);
  }
  else {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    this_03 = (GameStatCounterManager *)
              DayNightCycle::DayNightCycle_get_CurrentStarsParam
                        ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar1 == (MVNetworkGame *)0x0) ||
        (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
        pMVar3 == (MVLocalPlayer *)0x0)) ||
       (team = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
               KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
               KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                         ((KogamaSettingNumericBase_1_System_Single_ *)pMVar3,(MethodInfo *)0x0),
       this_03 == (GameStatCounterManager *)0x0)) goto code_?;
    iVar4 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetTeamCount
                      (this_03,GameStatCounterType__Enum_Collectible,(MVTeam__Enum)team,
                       (MethodInfo *)0x0);
  }
  if (((this->fields).prevValue == iVar4) || (iVar4 == 0)) {
code_?:
    pOVar2 = (Object *)func_?();
    this_00 = (this->fields).collectedClient;
    if (this_00 != (AllCollectiblesCollectedClient *)0x0) {
      System.dll::System::Collections::Generic::
      SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
      Single,System::Object]::
      SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                  *)this_00,(MethodInfo *)0x0);
      arg2 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      mscorlib.dll::System::String::String_Concat_1
                (pOVar2,(Object *)::StringLiteral__,arg2,(MethodInfo *)0x0);
      pTVar5 = (this->fields).collectibleText;
      if (pTVar5 != (Text *)0x0) {
        (*(code *)(pTVar5->klass->vtable).set_text.method)();
        return;
      }
    }
  }
  else {
    index = 0;
    pLVar6 = (this->fields)._.gameMeterVisualEffects;
    while (pLVar6 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar6,
                          MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Count__
                         );
      if ((int)pOVar2 <= index) {
        (this->fields).prevValue = iVar4;
        goto code_?;
      }
      pLVar6 = (this->fields)._.gameMeterVisualEffects;
      if ((pLVar6 == (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) ||
         (pIVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar6,index,
                              MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                             ), pIVar7 == (IEventSystemHandler *)0x0)) break;
      (*(code *)pIVar7->klass[1]._0.castClass)();
      index = index + 1;
      pLVar6 = (this->fields)._.gameMeterVisualEffects;
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

