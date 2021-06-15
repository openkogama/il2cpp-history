
/* Void InitializeGameUI(RectTransform) */

void Assembly-CSharp.dll::CollectiblesWinningCondition::
     CollectiblesWinningCondition_InitializeGameUI
               (CollectiblesWinningCondition *this,RectTransform *lobbyState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)0xffffffff;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (PrefabPool *)0x0) {
    this_02 = (WinningConditionManager *)
              PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(this_01,(MethodInfo *)0x0);
    if (this_02 != (WinningConditionManager *)0x0) {
      this_03 = MVWorldObject.dll::WinningConditionManager::
                WinningConditionManager_GetSingletonWinnerConditionByType_6
                          (this_02,
                           AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                          );
      if (this_03 == (TimeAttackFlagReachedClient *)0x0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_Failed_to_determine_collectibles,(MethodInfo *)0x0);
      }
      else {
        pOVar1 = System.dll::System::Collections::Generic::
                 SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                 ::Single,System::Object]::
                 SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                           ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                             *)this_03,(MethodInfo *)0x0);
      }
      (this->fields).amountOfStars = (int32_t)pOVar1;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar2 != (MVNetworkGame *)0x0) {
        this_04 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                            ((DayNightCycle *)pMVar2,(MethodInfo *)0x0);
        if (this_04 != (SkyParam *)0x0) {
          this_05 = MVTeamManager::MVTeamManager_GetTeamList
                              ((MVTeamManager *)this_04,(MethodInfo *)0x0);
          if (this_05 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
            pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_05,
                                MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                               );
            if ((int)pOVar1 < 2) {
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?();
              }
              pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
              pGVar3 = (GameStatCounterManager *)
                       DayNightCycle::DayNightCycle_get_CurrentStarsParam
                                 ((DayNightCycle *)pMVar2,(MethodInfo *)0x0);
              pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
              pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
              if (pMVar4 == (MVLocalPlayer *)0x0) goto code_?;
              pIVar5 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                       KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                       KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                 ((KogamaSettingNumericBase_1_System_Single_ *)pMVar4,
                                  (MethodInfo *)0x0);
              pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
              pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
              if (pMVar4 == (MVLocalPlayer *)0x0) goto code_?;
              actorNumber = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                            NamedThemeAttribute_1_UnityEngine_Color__get_Name
                                      ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar4,
                                       (MethodInfo *)0x0);
              if (pGVar3 == (GameStatCounterManager *)0x0) goto code_?;
              iVar6 = MVWorldObject.dll::GameStatCounterManager::
                      GameStatCounterManager_GetActorCount
                                (pGVar3,GameStatCounterType__Enum_Collectible,(MVTeam__Enum)pIVar5,
                                 (int32_t)actorNumber,(MethodInfo *)0x0);
            }
            else {
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?();
              }
              pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
              pGVar3 = (GameStatCounterManager *)
                       DayNightCycle::DayNightCycle_get_CurrentStarsParam
                                 ((DayNightCycle *)pMVar2,(MethodInfo *)0x0);
              pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
              pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
              if (pMVar4 == (MVLocalPlayer *)0x0) goto code_?;
              pIVar5 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                       KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                       KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                 ((KogamaSettingNumericBase_1_System_Single_ *)pMVar4,
                                  (MethodInfo *)0x0);
              if (pGVar3 == (GameStatCounterManager *)0x0) goto code_?;
              iVar6 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetTeamCount
                                (pGVar3,GameStatCounterType__Enum_Collectible,(MVTeam__Enum)pIVar5,
                                 (MethodInfo *)0x0);
            }
            pTVar7 = (this->fields).progress;
            value = (float)iVar6 / (float)(this->fields).amountOfStars;
            pOVar1 = (Object *)func_?();
            arg2 = (Object *)func_?();
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?();
            }
            mscorlib.dll::System::String::String_Concat_1
                      (pOVar1,(Object *)::StringLiteral__,arg2,(MethodInfo *)0x0);
            if (pTVar7 != (Text *)0x0) {
              (*(code *)(pTVar7->klass->vtable).set_text.method)();
              this_00 = (this->fields).progressBar;
              if (this_00 != (ProgressBar *)0x0) {
                ProgressBar::ProgressBar_set_Progress(this_00,value,(MethodInfo *)0x0);
                WinningConditionBase::WinningConditionBase_InitializeGameUI
                          ((WinningConditionBase *)this,(RectTransform *)this_05,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void RoundEndReset() */

void Assembly-CSharp.dll::CollectiblesWinningCondition::CollectiblesWinningCondition_RoundEndReset
               (CollectiblesWinningCondition *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = this;
  pTVar1 = (this->fields).progress;
  this = (CollectiblesWinningCondition *)0x0;
  arg0 = (Object *)func_?(TypeInfo__System__Int32,&this);
  iStack_2 = (this_01->fields).amountOfStars;
  arg2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_2);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar3 = mscorlib.dll::System::String::String_Concat_1
                     (arg0,(Object *)::StringLiteral__,arg2,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,pSVar3,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    this_00 = (this_01->fields).progressBar;
    if (this_00 != (ProgressBar *)0x0) {
      ProgressBar::ProgressBar_set_Progress(this_00,0.0,(MethodInfo *)0x0);
      WinningConditionBase::WinningConditionBase_RoundEndReset
                ((WinningConditionBase *)this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateValue(Int32) */

void Assembly-CSharp.dll::CollectiblesWinningCondition::CollectiblesWinningCondition_UpdateValue
               (CollectiblesWinningCondition *this,int32_t newValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (PrefabPool *)0x0) {
    this_02 = (WinningConditionManager *)
              PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(this_01,(MethodInfo *)0x0);
    if (this_02 != (WinningConditionManager *)0x0) {
      this_03 = MVWorldObject.dll::WinningConditionManager::
                WinningConditionManager_GetSingletonWinnerConditionByType_6
                          (this_02,
                           AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                          );
      if (this_03 == (TimeAttackFlagReachedClient *)0x0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_Failed_to_determine_collectibles,(MethodInfo *)0x0);
      }
      else {
        pOVar1 = System.dll::System::Collections::Generic::
                 SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                 ::Single,System::Object]::
                 SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                           ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                             *)this_03,(MethodInfo *)0x0);
        if (pOVar1 != (Object *)(this->fields).amountOfStars) {
          (this->fields).amountOfStars = (int32_t)pOVar1;
        }
      }
      pTVar2 = (this->fields).progress;
      func_?();
      arg0 = TypeInfo__System__Int32;
      pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff4);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar3 = mscorlib.dll::System::String::String_Concat_1
                         ((Object *)arg0,(Object *)::StringLiteral__,pOVar1,(MethodInfo *)0x0);
      if (pTVar2 != (Text *)0x0) {
        (*(code *)(pTVar2->klass->vtable).set_text.method)(pTVar2,pSVar3);
        this_00 = (this->fields).progressBar;
        if (this_00 != (ProgressBar *)0x0) {
          ProgressBar::ProgressBar_set_Progress
                    (this_00,(float)newValue / (float)(this->fields).amountOfStars,(MethodInfo *)0x0
                    );
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* GameStatCounterType get_StatType() */

GameStatCounterType__Enum
Assembly-CSharp.dll::CollectiblesWinningCondition::CollectiblesWinningCondition_get_StatType
          (CollectiblesWinningCondition *this,MethodInfo *method)

{
  return CONCAT31((int3)((uint)in_EAX >> 8),3);
}

