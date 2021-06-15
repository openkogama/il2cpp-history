
/* Void AddIfNotPresent(GameStatCounterType) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_AddIfNotPresent
               (GameStatCounterManager *this,GameStatCounterType__Enum statType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).statTypeCounters;
  if (pDVar1 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[GameStatCounterType,System::
            Object]::Dictionary_2_GameStatCounterType_System_Object__ContainsKey
                      ((Dictionary_2_GameStatCounterType_System_Object_ *)pDVar1,statType,
                       MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                      );
    if (bVar2 == 0) {
      pDVar1 = (this->fields).statTypeCounters;
      pTVar3 = (TeamsCounter *)func_?(TypeInfo__TeamsCounter);
      TeamsCounter::TeamsCounter__ctor(pTVar3,(MethodInfo *)0x0);
      if (pDVar1 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[GameStatCounterType,System::Object]::
      Dictionary_2_GameStatCounterType_System_Object__Add
                ((Dictionary_2_GameStatCounterType_System_Object_ *)pDVar1,statType,(Object *)pTVar3
                 ,
                 MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Add_GameStatCounterType__TeamsCounter_
                );
    }
    this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).sessionPersistentStats;
    if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
      item._4_4_ = 
      MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Contains_GameStatCounterType_
      ;
      item.rgba = statType;
      bVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
              List_1_UnityEngine_Color32__Contains(this_00,item,unaff_EBP);
      if (bVar2 != 0) {
        pDVar1 = (this->fields).persistentStats;
        if (pDVar1 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) goto code_?;
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[GameStatCounterType,System
                ::Object]::Dictionary_2_GameStatCounterType_System_Object__ContainsKey
                          ((Dictionary_2_GameStatCounterType_System_Object_ *)pDVar1,statType,
                           MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                          );
        if (bVar2 == 0) {
          pDVar1 = (this->fields).persistentStats;
          pTVar3 = (TeamsCounter *)func_?();
          TeamsCounter::TeamsCounter__ctor(pTVar3,(MethodInfo *)0x0);
          if (pDVar1 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0)
          goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[GameStatCounterType,System::
          Object]::Dictionary_2_GameStatCounterType_System_Object__Add
                    ((Dictionary_2_GameStatCounterType_System_Object_ *)pDVar1,statType,
                     (Object *)pTVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Add_GameStatCounterType__TeamsCounter_
                    );
        }
      }
      return;
    }
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void AddPersistentStats() */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_AddPersistentStats
               (GameStatCounterManager *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  pDVar8 = (this->fields).persistentStats;
  puStack_9 = (undefined4 *)&stack0xffffffa0;
  puStack_4 = &stack0xffffffa0;
  if (pDVar8 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
    puStack_9 = (undefined4 *)&stack0xffffffa0;
    puStack_4 = &stack0xffffffa0;
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        &stack0xffffffac,(Dictionary_2_WinningConditionType_System_Object_ *)pDVar8,
                        MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar10->dictionary;
    auStack_6._4_4_ = pDVar10->next;
    auStack_6._8_4_ = pDVar10->stamp;
    auStack_6._12_4_ = (pDVar10->current).key;
    auStack_6._16_4_ = (pDVar10->current).value;
    uStack_1 = 0;
    while( true ) {
      cVar11 = func_?();
      if (cVar11 == '\0') {
        *puStack_9 = 0x4d;
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      KStack_7 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__get_Current__
                            );
      pDVar8 = (this->fields).statTypeCounters;
      uVar12 = func_?();
      GStack_13 = CONCAT31(GStack_13._1_3_,uVar12);
      pTStack_14 = (TeamsCounter *)func_?();
      this_00 = (TeamsCounter *)func_?();
      TeamsCounter::TeamsCounter__ctor_1(this_00,pTStack_14,(MethodInfo *)0x0);
      if (pDVar8 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[GameStatCounterType,System::Object]::
      Dictionary_2_GameStatCounterType_System_Object__Add
                ((Dictionary_2_GameStatCounterType_System_Object_ *)pDVar8,GStack_13,
                 (Object *)this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Add_GameStatCounterType__TeamsCounter_
                );
    }
  }
  func_?(0);
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void Clear() */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Clear
               (GameStatCounterManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).statTypeCounters;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Clear__
              );
    GameStatCounterManager_AddPersistentStats(this,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ClearStats() */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_ClearStats
               (GameStatCounterManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).statTypeCounters;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Clear__
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Int32 GetActorCount(GameStatCounterType, MVTeam, Int32) */

int32_t MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                  (GameStatCounterManager *this,GameStatCounterType__Enum counterType,
                  MVTeam__Enum team,int32_t actorNumber,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).statTypeCounters;
  if (pDVar1 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[GameStatCounterType,System::
            Object]::Dictionary_2_GameStatCounterType_System_Object__ContainsKey
                      ((Dictionary_2_GameStatCounterType_System_Object_ *)pDVar1,counterType,
                       MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                      );
    if (bVar2 == 0) {
      return 0;
    }
    pDVar1 = (this->fields).statTypeCounters;
    if (pDVar1 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
      this_00 = (TeamsCounter *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[GameStatCounterType,System
                ::Object]::Dictionary_2_GameStatCounterType_System_Object__get_Item
                          ((Dictionary_2_GameStatCounterType_System_Object_ *)pDVar1,counterType,
                           MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                          );
      if (this_00 != (TeamsCounter *)0x0) {
        iVar3 = TeamsCounter::TeamsCounter_GetActorCount
                          (this_00,MVTeam__Enum_Blue,actorNumber,(MethodInfo *)0x0);
        return iVar3;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar3 = (*pcVar4)();
  return iVar3;
}


/* HighScores GetHighScores(GameStatCounterType, Boolean, WinningConditionPresentStyle, Boolean) */

HighScores *
MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetHighScores
          (GameStatCounterManager *this,GameStatCounterType__Enum statType,bool presentAsTeamScore,
          WinningConditionPresentStyle__Enum winningConditionPresentStyle,bool byAscending,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).statTypeCounters;
  if (pDVar1 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[GameStatCounterType,System::
            Object]::Dictionary_2_GameStatCounterType_System_Object__ContainsKey
                      ((Dictionary_2_GameStatCounterType_System_Object_ *)pDVar1,statType,
                       MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                      );
    if (bVar2 == 0) {
      pHVar3 = (HighScores *)func_?(TypeInfo__HighScores);
      HighScores::HighScores__ctor
                (pHVar3,statType,(Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0,
                 presentAsTeamScore,winningConditionPresentStyle,byAscending,(MethodInfo *)0x0);
      return pHVar3;
    }
    pDVar1 = (this->fields).statTypeCounters;
    if (pDVar1 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
      this_00 = (TeamsCounter *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[GameStatCounterType,System
                ::Object]::Dictionary_2_GameStatCounterType_System_Object__get_Item
                          ((Dictionary_2_GameStatCounterType_System_Object_ *)pDVar1,statType,
                           MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                          );
      if (this_00 != (TeamsCounter *)0x0) {
        pHVar3 = TeamsCounter::TeamsCounter_GetHighScores
                           (this_00,statType,presentAsTeamScore,winningConditionPresentStyle,
                            byAscending,(MethodInfo *)0x0);
        return pHVar3;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pHVar3 = (HighScores *)(*pcVar4)();
  return pHVar3;
}


/* Int32 GetTeamCount(GameStatCounterType, MVTeam) */

int32_t MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetTeamCount
                  (GameStatCounterManager *this,GameStatCounterType__Enum statType,MVTeam__Enum team
                  ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).statTypeCounters;
  if (pDVar1 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[GameStatCounterType,System::
            Object]::Dictionary_2_GameStatCounterType_System_Object__ContainsKey
                      ((Dictionary_2_GameStatCounterType_System_Object_ *)pDVar1,statType,
                       MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                      );
    if (bVar2 == 0) {
      return 0;
    }
    pDVar1 = (this->fields).statTypeCounters;
    if (pDVar1 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
      this_00 = (TeamsCounter *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[GameStatCounterType,System
                ::Object]::Dictionary_2_GameStatCounterType_System_Object__get_Item
                          ((Dictionary_2_GameStatCounterType_System_Object_ *)pDVar1,statType,
                           MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                          );
      if (this_00 != (TeamsCounter *)0x0) {
        iVar3 = TeamsCounter::TeamsCounter_GetTeamCount(this_00,MVTeam__Enum_Blue,(MethodInfo *)0x0)
        ;
        return iVar3;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar3 = (*pcVar4)();
  return iVar3;
}


/* Void Increment(GameStatCounterType, MVTeam, Int32, Int32, Int32, Boolean) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Increment
               (GameStatCounterManager *this,GameStatCounterType__Enum counterType,MVTeam__Enum team
               ,int32_t actorNumber,int32_t value,int32_t otherID,bool includeTeamScore,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((team != MVTeam__Enum_Server) || (actorNumber == 0)) {
    GameStatCounterManager_AddIfNotPresent(this,counterType,(MethodInfo *)0x0);
    pDVar1 = (this->fields).statTypeCounters;
    if ((pDVar1 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) &&
       (pTVar2 = (TeamsCounter *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[GameStatCounterType,System
                 ::Object]::Dictionary_2_GameStatCounterType_System_Object__get_Item
                           ((Dictionary_2_GameStatCounterType_System_Object_ *)pDVar1,counterType,
                            MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                           ), pTVar2 != (TeamsCounter *)0x0)) {
      count = TeamsCounter::TeamsCounter_Increment
                        (pTVar2,team,actorNumber,value,includeTeamScore,(MethodInfo *)0x0);
      GameStatCounterManager_SendChangeEvent
                (this,count,counterType,actorNumber,team,otherID,(MethodInfo *)0x0);
      this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).sessionPersistentStats;
      if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
        item._4_4_ = 
        MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Contains_GameStatCounterType_
        ;
        item.rgba = counterType;
        bVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                List_1_UnityEngine_Color32__Contains(this_00,item,in_stack_4);
        if (bVar3 == 0) {
          return;
        }
        pDVar1 = (this->fields).persistentStats;
        if ((pDVar1 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) &&
           (pTVar2 = (TeamsCounter *)
                     mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[GameStatCounterType,System::Object]::
                     Dictionary_2_GameStatCounterType_System_Object__get_Item
                               ((Dictionary_2_GameStatCounterType_System_Object_ *)pDVar1,
                                counterType,
                                MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                               ), pTVar2 != (TeamsCounter *)0x0)) {
          oldScore = TeamsCounter::TeamsCounter_GetActorCount
                               (pTVar2,team,actorNumber,(MethodInfo *)0x0);
          bVar3 = GameStatCounterManager_IsNewScoreBetter
                            (count,oldScore,in_stack_5,in_stack_6);
          if (bVar3 == 0) {
            return;
          }
          pDVar1 = (this->fields).persistentStats;
          if ((pDVar1 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) &&
             (pTVar2 = (TeamsCounter *)
                       mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[GameStatCounterType,System::Object]::
                       Dictionary_2_GameStatCounterType_System_Object__get_Item
                                 ((Dictionary_2_GameStatCounterType_System_Object_ *)pDVar1,
                                  counterType,
                                  MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                                 ), pTVar2 != (TeamsCounter *)0x0)) {
            TeamsCounter::TeamsCounter_Update
                      (pTVar2,team,actorNumber,count,includeTeamScore,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    func_?(0);
  }
  this_01 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_01,StringLiteral_Team_Server_is_reserved_by_serve,(MethodInfo *)0x0);
  func_?(this_01,0,
                  MethodInfo__GameStatCounterManager__Validate_int__MV__WorldObject__MVTeam_);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean IsNewScoreBetter(Int32, Int32, GameStatCounterType) */

bool MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_IsNewScoreBetter
               (int32_t newScore,int32_t oldScore,GameStatCounterType__Enum statType,
               MethodInfo *method)

{
  switch(statType & 0xff) {
  case GameStatCounterType__Enum_Kill:
  case GameStatCounterType__Enum_Collectible:
  case GameStatCounterType__Enum_OculusKill:
    if (oldScore < newScore) {
      return 1;
    }
    break;
  case GameStatCounterType__Enum_Flag:
  case GameStatCounterType__Enum_TimeAttackFlag:
    if (oldScore < 0) {
      return 1;
    }
    if (0 < newScore) {
      if (newScore < oldScore) {
        return 1;
      }
      if (oldScore == 0) {
        return 1;
      }
    }
  }
  return 0;
}


/* Void OnTeamAdded(Object, TeamEventArgs) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_OnTeamAdded
               (GameStatCounterManager *this,Object *sender,TeamEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (e != (TeamEventArgs *)0x0) {
    this_00 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)(this->fields).activeTeams;
    if (this_00 != (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0) {
      bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
              NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                        (this_00,(e->fields).team,
                         MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__Contains_MV__WorldObject__MVTeam_
                        );
      if (bVar1 != 0) goto code_?;
      this_01 = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)(this->fields).activeTeams;
      if (this_01 != (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
        UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                  (this_01,(UnityWebRequest *)(e->fields).team,
                   MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__Add_MV__WorldObject__MVTeam_
                  );
        return;
      }
    }
  }
  func_?();
code_?:
  this_02 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this_02,StringLiteral_Team_already_added,(MethodInfo *)0x0);
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnTeamRemoved(Object, TeamEventArgs) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_OnTeamRemoved
               (GameStatCounterManager *this,Object *sender,TeamEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (e != (TeamEventArgs *)0x0) {
    this_00 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)(this->fields).activeTeams;
    if (this_00 != (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0) {
      bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
              NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                        (this_00,(e->fields).team,
                         MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__Contains_MV__WorldObject__MVTeam_
                        );
      if (bVar1 == 0) goto code_?;
      this_01 = (this->fields).activeTeams;
      if (this_01 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
        FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__Remove
                  ((HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)this_01,(e->fields).team,
                   MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__Remove_MV__WorldObject__MVTeam_
                  );
        return;
      }
    }
  }
  func_?();
code_?:
  this_02 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this_02,StringLiteral_Team_does_not_exists,(MethodInfo *)0x0);
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RemoveActorHighScoreFromTeam(Int32, MVTeam, GameStatCounterType) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_RemoveActorHighScoreFromTeam
               (GameStatCounterManager *this,int32_t newBestScore,MVTeam__Enum team,
               GameStatCounterType__Enum statType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).statTypeCounters;
  if (newBestScore < 1) {
    if ((pDVar1 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) &&
       (pTVar2 = (TeamsCounter *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[GameStatCounterType,System
                 ::Object]::Dictionary_2_GameStatCounterType_System_Object__get_Item
                           ((Dictionary_2_GameStatCounterType_System_Object_ *)pDVar1,statType,
                            MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                           ), pTVar2 != (TeamsCounter *)0x0)) {
      TeamsCounter::TeamsCounter_RemoveTeam(pTVar2,team,(MethodInfo *)0x0);
      pDVar1 = (this->fields).persistentStats;
      if (pDVar1 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
        bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[GameStatCounterType,System
                ::Object]::Dictionary_2_GameStatCounterType_System_Object__ContainsKey
                          ((Dictionary_2_GameStatCounterType_System_Object_ *)pDVar1,statType,
                           MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                          );
        if (bVar3 == 0) {
          return;
        }
        pDVar1 = (this->fields).persistentStats;
        if ((pDVar1 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) &&
           (pTVar2 = (TeamsCounter *)
                     mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[GameStatCounterType,System::Object]::
                     Dictionary_2_GameStatCounterType_System_Object__get_Item
                               ((Dictionary_2_GameStatCounterType_System_Object_ *)pDVar1,statType,
                                MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                               ), pTVar2 != (TeamsCounter *)0x0)) {
          TeamsCounter::TeamsCounter_RemoveTeam(pTVar2,team,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  else if ((pDVar1 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) &&
          (pTVar2 = (TeamsCounter *)
                    mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[GameStatCounterType,System::Object]::
                    Dictionary_2_GameStatCounterType_System_Object__get_Item
                              ((Dictionary_2_GameStatCounterType_System_Object_ *)pDVar1,statType,
                               MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                              ), pTVar2 != (TeamsCounter *)0x0)) {
    TeamsCounter::TeamsCounter_UpdateTeam(pTVar2,team,newBestScore,(MethodInfo *)0x0);
    pDVar1 = (this->fields).persistentStats;
    if (pDVar1 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[GameStatCounterType,System::
              Object]::Dictionary_2_GameStatCounterType_System_Object__ContainsKey
                        ((Dictionary_2_GameStatCounterType_System_Object_ *)pDVar1,statType,
                         MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                        );
      if (bVar3 == 0) {
        return;
      }
      pDVar1 = (this->fields).persistentStats;
      if ((pDVar1 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) &&
         (pTVar2 = (TeamsCounter *)
                   mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[GameStatCounterType,System::Object]::
                   Dictionary_2_GameStatCounterType_System_Object__get_Item
                             ((Dictionary_2_GameStatCounterType_System_Object_ *)pDVar1,statType,
                              MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                             ), pTVar2 != (TeamsCounter *)0x0)) {
        TeamsCounter::TeamsCounter_UpdateTeam
                  (pTVar2,(MVTeam__Enum)pDVar1,newBestScore,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RemoveStatsFromActor(Int32) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_RemoveStatsFromActor
               (GameStatCounterManager *this,int32_t actorNumber,MethodInfo *method)

{
  pIStack_1 = (IEqualityComparer_1_WinningConditionType_ *)0xffffffff;
  pSStack_2 = (SerializationInfo *)&DAT_?;
  pIStack_3 = (IEqualityComparer_1_WinningConditionType_ *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pIStack_3;
  puStack_4 = &stack0xffffff80;
  puVar5 = &stack0xffffff80;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pOStack_6 = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  pOStack_8 = (Object__Array *)0x0;
  KStack_9.key = 0;
  KStack_9.value = 0;
  auStack_10._20_4_ = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  iStack_11 = 0;
  iStack_12 = 0;
  iStack_13 = 0;
  auStack_10._16_4_ = (Object *)0x0;
  auStack_10._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_10._4_4_ = (MonitorData *)0x0;
  auStack_10._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_10._12_4_ = 0;
  func_?();
  pWStack_14 = (WinningConditionType__Enum__Array *)0xffffffff;
  pDVar15 = (this->fields).statTypeCounters;
  piStack_16 = (int *)&stack0xffffff80;
  puStack_4 = &stack0xffffff80;
  if (pDVar15 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
    piStack_16 = (int *)&stack0xffffff80;
    puStack_4 = &stack0xffffff80;
    pDVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_18,(Dictionary_2_WinningConditionType_System_Object_ *)pDVar15,
                        MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__GetEnumerator__
                       );
    auStack_10._20_4_ = pDVar17->dictionary;
    iStack_11 = pDVar17->next;
    iStack_12 = pDVar17->stamp;
    iStack_13 = (pDVar17->current).key;
    pOStack_6 = (pDVar17->current).value;
    pIStack_1 = (IEqualityComparer_1_WinningConditionType_ *)0x0;
    while (cVar19 = func_?(), cVar19 != '\0') {
      KStack_7 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)(auStack_10 + 0x14),
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__get_Current__
                            );
      DStack_18.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
      DStack_18.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__KeyValuePair<GameStatCounterType,_TeamsCounter>__get_Value__
      ;
      pTVar20 = (TeamsCounter *)func_?();
      if (pTVar20 == (TeamsCounter *)0x0) goto code_?;
      TeamsCounter::TeamsCounter_RemoveStatsFromActor(pTVar20,actorNumber,(MethodInfo *)0x0);
    }
    iVar21 = 0;
    *piStack_16 = 0x3c;
    pIStack_1 = (IEqualityComparer_1_WinningConditionType_ *)0xffffffff;
    func_?();
    if (pOStack_8 == (Object__Array *)0x0) {
      if (*piStack_16 == 0x3c) {
        iVar21 = -1;
      }
      pDVar15 = (this->fields).persistentStats;
      if (pDVar15 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) goto code_?;
      pDVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                         (&DStack_18,(Dictionary_2_WinningConditionType_System_Object_ *)pDVar15,
                          MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__GetEnumerator__
                         );
      auStack_10._0_4_ = pDVar17->dictionary;
      auStack_10._4_4_ = pDVar17->next;
      auStack_10._8_4_ = pDVar17->stamp;
      auStack_10._12_4_ = (pDVar17->current).key;
      auStack_10._16_4_ = (pDVar17->current).value;
      pIStack_1 = (IEqualityComparer_1_WinningConditionType_ *)0x2;
      while (cVar19 = func_?(), pOVar22 = pOStack_8, cVar19 != '\0') {
        KStack_9 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                              ((LevelRewardsManager *)auStack_10,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__get_Current__
                              );
        DStack_18.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_9;
        DStack_18.next =
             (int32_t)
             MethodInfo__System__Collections__Generic__KeyValuePair<GameStatCounterType,_TeamsCounter>__get_Value__
        ;
        pTVar20 = (TeamsCounter *)func_?();
        if (pTVar20 == (TeamsCounter *)0x0) goto code_?;
        TeamsCounter::TeamsCounter_RemoveStatsFromActor(pTVar20,actorNumber,(MethodInfo *)0x0);
      }
      piStack_16[iVar21 + 1] = 0x78;
      pIStack_1 = (IEqualityComparer_1_WinningConditionType_ *)0xffffffff;
      func_?();
      if (pOVar22 == (Object__Array *)0x0) {
        *unaff_FS_OFFSET = pIStack_3;
        return;
      }
    }
    else {
      func_?(pOStack_8,0,0);
    }
    func_?();
  }
code_?:
  func_?(0);
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void RemoveTeamScoreOnActorLeave(Int32, MVTeam) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_RemoveTeamScoreOnActorLeave
               (GameStatCounterManager *this,int32_t actorNr,MVTeam__Enum team,MethodInfo *method)

{
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).statsToRemoveOnActorLeave;
  if (pLVar1 != (List_1_GameStatCounterType_ *)0x0) {
    while( true ) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<GameStatCounterType>__get_Count__
                         );
      if ((int)pOVar2 <= index) {
        return;
      }
      pLVar1 = (this_00->fields).statsToRemoveOnActorLeave;
      if (pLVar1 == (List_1_GameStatCounterType_ *)0x0) break;
      GVar3 = mscorlib.dll::System::Collections::Generic::List`1[GameStatCounterType]::
              List_1_GameStatCounterType__get_Item
                        (pLVar1,index,
                         MethodInfo__System__Collections__Generic__List<GameStatCounterType>__get_Item_int_
                        );
      this = (GameStatCounterManager *)CONCAT31(this._1_3_,(char)GVar3);
      counterType = this;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pDVar4 = (this_00->fields).statTypeCounters;
      if (pDVar4 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) break;
      bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[GameStatCounterType,System::
              Object]::Dictionary_2_GameStatCounterType_System_Object__ContainsKey
                        ((Dictionary_2_GameStatCounterType_System_Object_ *)pDVar4,
                         (GameStatCounterType__Enum)this,
                         MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                        );
      if (bVar5 != 0) {
        pDVar4 = (this_00->fields).statTypeCounters;
        if ((pDVar4 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) ||
           (pTVar6 = (TeamsCounter *)
                     mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[GameStatCounterType,System::Object]::
                     Dictionary_2_GameStatCounterType_System_Object__get_Item
                               ((Dictionary_2_GameStatCounterType_System_Object_ *)pDVar4,
                                (GameStatCounterType__Enum)this,
                                MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                               ), pTVar6 == (TeamsCounter *)0x0)) break;
        iVar7 = TeamsCounter::TeamsCounter_GetTeamCount(pTVar6,team,(MethodInfo *)0x0);
        if (0 < iVar7) {
          this = (GameStatCounterManager *)0x0;
          puVar8 = &UNK_?;
          puVar9 = (undefined *)
                   GameStatCounterManager_GetActorCount
                             (this_00,(GameStatCounterType__Enum)counterType,team,0,
                              (MethodInfo *)0x0);
          if (puVar9 == puVar8) {
            pDVar4 = (this_00->fields).statTypeCounters;
            iVar7 = 0;
            if ((pDVar4 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) ||
               (pTVar6 = (TeamsCounter *)
                         mscorlib.dll::System::Collections::Generic::
                         Dictionary`2[GameStatCounterType,System::Object]::
                         Dictionary_2_GameStatCounterType_System_Object__get_Item
                                   ((Dictionary_2_GameStatCounterType_System_Object_ *)pDVar4,
                                    (GameStatCounterType__Enum)counterType,
                                    MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                                   ), pTVar6 == (TeamsCounter *)0x0)) break;
            TeamsCounter::TeamsCounter_GetActorWithBestScore
                      (pTVar6,(int32_t *)&stack0xfffffff8,team,
                       (GameStatCounterType__Enum)counterType,0,(MethodInfo *)0x0);
            GameStatCounterManager_RemoveActorHighScoreFromTeam
                      (this_00,iVar7,team,(GameStatCounterType__Enum)counterType,(MethodInfo *)0x0);
          }
        }
      }
      pLVar1 = (this_00->fields).statsToRemoveOnActorLeave;
      index = index + 1;
      if (pLVar1 == (List_1_GameStatCounterType_ *)0x0) break;
    }
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SendChangeEvent(Int32, GameStatCounterType, Int32, MVTeam, Int32) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SendChangeEvent
               (GameStatCounterManager *this,int32_t count,GameStatCounterType__Enum counterType,
               int32_t actorNumber,MVTeam__Enum team,int32_t otherID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)(this->fields).OnCounterTypeChanged
  ;
  if (this_00 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
    this_01 = (OnCounterTypeChangedArgs *)func_?(TypeInfo__OnCounterTypeChangedArgs);
    OnCounterTypeChangedArgs::OnCounterTypeChangedArgs__ctor
              (this_01,count,counterType,actorNumber,team,otherID,(MethodInfo *)0x0);
    mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
    EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
              (this_00,(Object *)this,(InitializedGameQueryDataEventArgs *)this_01,
               MethodInfo__System__EventHandler<OnCounterTypeChangedArgs>__Invoke_System__Object__OnCounterTypeChangedArgs_
              );
  }
  return;
}


/* Void SetStat(Byte[]) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStat
               (GameStatCounterManager *this,Byte__Array *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
  MV::WorldObject::BytePacker::BytePacker__ctor_1(this_00,data,(MethodInfo *)0x0);
  GameStatCounterManager_SetStat_1(this,this_00,(MethodInfo *)0x0);
  return;
}


/* Void SetStat(BytePacker) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStat_1
               (GameStatCounterManager *this,BytePacker *bp,MethodInfo *method)

{
  bp_00 = bp;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (bp != (BytePacker *)0x0) {
    uVar1 = MV::WorldObject::BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
    bp = (BytePacker *)CONCAT31(bp._1_3_,uVar1);
    this_01 = (TeamsCounter *)func_?(TypeInfo__TeamsCounter);
    TeamsCounter::TeamsCounter__ctor_2(this_01,bp_00,(MethodInfo *)0x0);
    pDVar2 = (this->fields).statTypeCounters;
    if (pDVar2 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[GameStatCounterType,System::
              Object]::Dictionary_2_GameStatCounterType_System_Object__ContainsKey
                        ((Dictionary_2_GameStatCounterType_System_Object_ *)pDVar2,
                         (GameStatCounterType__Enum)bp,
                         MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                        );
      if (bVar3 != 0) {
        pDVar2 = (this->fields).statTypeCounters;
        if (pDVar2 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[GameStatCounterType,System::Object]
        ::Dictionary_2_GameStatCounterType_System_Object__Remove
                  ((Dictionary_2_GameStatCounterType_System_Object_ *)pDVar2,
                   (GameStatCounterType__Enum)bp,
                   MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Remove_GameStatCounterType_
                  );
      }
      pDVar2 = (this->fields).statTypeCounters;
      if (pDVar2 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[GameStatCounterType,System::Object]
        ::Dictionary_2_GameStatCounterType_System_Object__Add
                  ((Dictionary_2_GameStatCounterType_System_Object_ *)pDVar2,
                   (GameStatCounterType__Enum)bp,(Object *)this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Add_GameStatCounterType__TeamsCounter_
                  );
        this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).sessionPersistentStats;
        if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
          item._4_4_ = 
          MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Contains_GameStatCounterType_
          ;
          item.rgba = (int32_t)bp;
          bVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                  List_1_UnityEngine_Color32__Contains(this_00,item,unaff_retaddr);
          if (bVar3 == 0) {
            return;
          }
          pDVar2 = (this->fields).persistentStats;
          if (pDVar2 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
            bVar3 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[GameStatCounterType,System::Object]::
                    Dictionary_2_GameStatCounterType_System_Object__ContainsKey
                              ((Dictionary_2_GameStatCounterType_System_Object_ *)pDVar2,
                               (GameStatCounterType__Enum)bp,
                               MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                              );
            if (bVar3 != 0) {
              pDVar2 = (this->fields).persistentStats;
              if (pDVar2 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0)
              goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[GameStatCounterType,System::
              Object]::Dictionary_2_GameStatCounterType_System_Object__Remove
                        ((Dictionary_2_GameStatCounterType_System_Object_ *)pDVar2,
                         (GameStatCounterType__Enum)bp,
                         MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Remove_GameStatCounterType_
                        );
            }
            pDVar2 = (this->fields).persistentStats;
            if (pDVar2 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[GameStatCounterType,System::
              Object]::Dictionary_2_GameStatCounterType_System_Object__Add
                        ((Dictionary_2_GameStatCounterType_System_Object_ *)pDVar2,
                         (GameStatCounterType__Enum)bp,(Object *)this_01,
                         MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Add_GameStatCounterType__TeamsCounter_
                        );
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetStats(Byte[]) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStats
               (GameStatCounterManager *this,Byte__Array *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
  MV::WorldObject::BytePacker::BytePacker__ctor_1(this_00,data,(MethodInfo *)0x0);
  if (this_00 == (BytePacker *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = MV::WorldObject::BytePacker::BytePacker_ReadInt32(this_00,(MethodInfo *)0x0);
  if (0 < iVar2) {
    do {
      GameStatCounterManager_SetStat_1(unaff_EBX,this_00,(MethodInfo *)0x0);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


/* String ToString() */

String * MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_ToString
                   (GameStatCounterManager *this,MethodInfo *method)

{
  p_Stack_8 = (Il2CppMetadataTypeHandle)0xffffffff;
  pIStack_1 = (Il2CppGenericClass *)&DAT_?;
  pIStack_2 = (Il2CppClass *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pIStack_2;
  pIStack_3 = (Il2CppClass *)&stack0xffffff80;
  pIVar4 = (Il2CppClass *)&stack0xffffff80;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pIVar4 = pIStack_3;
  }
  pIStack_3 = pIVar4;
  auStack_5._16_4_ = (Object *)0x0;
  iStack_6 = 0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  CStack_8.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_8.monitor = (MonitorData *)0x0;
  CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_8.fields.syncRoot = (Object *)0x0;
  auStack_5._0_4_ = (MVTeam__Enum__Class *)0x0;
  auStack_5._4_4_ = (_union_86 *)0x0;
  auStack_5._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_5._12_4_ = 0;
  func_?();
  pIVar4 = (Il2CppClass *)StringLiteral_Active_teams__u000A;
  pOStack_9 = (Object *)0xffffffff;
  this_00 = (this->fields).activeTeams;
  pIStack_10 = (Il2CppClass *)StringLiteral_Active_teams__u000A;
  pIStack_11 = (Il2CppClass *)&stack0xffffff80;
  pIStack_3 = (Il2CppClass *)&stack0xffffff80;
  if (this_00 == (HashSet_1_MV_WorldObject_MVTeam_ *)0x0) {
code_?:
    iVar12 = func_?(0);
  }
  else {
    pIStack_11 = (Il2CppClass *)&stack0xffffff80;
    pIStack_3 = (Il2CppClass *)&stack0xffffff80;
    pHVar13 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::
             InteractionPackageType]::HashSet_1_MV_WorldObject_InteractionPackageType__GetEnumerator
                       (&HStack_14,(HashSet_1_MV_WorldObject_InteractionPackageType_ *)this_00,
                        MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__GetEnumerator__
                       );
    CStack_8.klass =
         (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pHVar13->hashset;
    CStack_8.monitor = (MonitorData *)pHVar13->next;
    CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pHVar13->stamp;
    CStack_8.fields.syncRoot = *(Object **)&pHVar13->current;
    p_Stack_8 = (Il2CppMetadataTypeHandle)0x0;
    while (cVar15 = func_?(), cVar15 != '\0') {
      _Stack_24.typeHandle =
           (Il2CppMetadataTypeHandle)
           mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     (&CStack_8,
                      MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::MVTeam>__get_Current__
                     );
      auStack_5._4_4_ = &_Stack_24;
      auStack_5._0_4_ = TypeInfo__MV__WorldObject__MVTeam;
      arg0 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar16 = mscorlib.dll::System::String::String_Format
                         (StringLiteral__0_u000A,arg0,(MethodInfo *)0x0);
      pIVar4 = (Il2CppClass *)
               mscorlib.dll::System::String::String_Concat_2
                         ((String *)pIVar4,pSVar16,(MethodInfo *)0x0);
      pIStack_10 = pIVar4;
    }
    iVar17 = 0;
    pIStack_11->image = (Il2CppImage *)0x4d;
    p_Stack_8 = (Il2CppMetadataTypeHandle)0xffffffff;
    func_?();
    iVar12 = iStack_6;
    if (iStack_6 == 0) {
      if (pIStack_11->image == (Il2CppImage *)0x4d) {
        iVar17 = -1;
      }
      this_01 = (this->fields).statTypeCounters;
      if (this_01 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
        pDVar18 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[WinningConditionType,System::Object]::
                 Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                             *)(auStack_5 + 0x14),
                            (Dictionary_2_WinningConditionType_System_Object_ *)this_01,
                            MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__GetEnumerator__
                           );
        auStack_5._0_4_ = pDVar18->dictionary;
        auStack_5._4_4_ = pDVar18->next;
        auStack_5._8_4_ = pDVar18->stamp;
        auStack_5._12_4_ = (pDVar18->current).key;
        auStack_5._16_4_ = (pDVar18->current).value;
        p_Stack_8 = (Il2CppMetadataTypeHandle)0x2;
        while (cVar15 = func_?(), iVar12 = iStack_6, cVar15 != '\0') {
          KStack_7 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                                ((LevelRewardsManager *)auStack_5,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__get_Current__
                                );
          auStack_5._0_4_ = &KStack_7;
          auStack_5._4_4_ =
               MethodInfo__System__Collections__Generic__KeyValuePair<GameStatCounterType,_TeamsCounter>__get_Key__
          ;
          uVar19 = func_?();
          this = (GameStatCounterManager *)CONCAT13(uVar19,this._0_3_);
          auStack_5._4_4_ = (int)&this + 3;
          auStack_5._0_4_ = TypeInfo__GameStatCounterType;
          _Stack_2c.dummy = (void *)func_?();
          auStack_5._0_4_ = &KStack_7;
          auStack_5._4_4_ =
               MethodInfo__System__Collections__Generic__KeyValuePair<GameStatCounterType,_TeamsCounter>__get_Value__
          ;
          pOStack_9 = (Object *)func_?();
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          pSVar16 = mscorlib.dll::System::String::String_Format_1
                             (StringLiteral_CounterType___0___Stats___1_,
                              (Object *)_Stack_2c.typeHandle,pOStack_9,(MethodInfo *)0x0);
          pIVar4 = (Il2CppClass *)
                   mscorlib.dll::System::String::String_Concat_2
                             ((String *)pIVar4,pSVar16,(MethodInfo *)0x0);
          pIStack_10 = pIVar4;
        }
        (&pIStack_11->gc_desc)[iVar17] = (void *)0xa3;
        p_Stack_8 = (Il2CppMetadataTypeHandle)0xffffffff;
        func_?();
        if (iVar12 == 0) {
          *unaff_FS_OFFSET = pIStack_2;
          return (String *)pIVar4;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?(iVar12,0,0);
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  pSVar16 = (String *)(*pcVar20)();
  return pSVar16;
}


/* Void Update(GameStatCounterType, Int32, MVTeam, Int32, Int32, Boolean) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Update
               (GameStatCounterManager *this,GameStatCounterType__Enum counterType,
               int32_t actorNumber,MVTeam__Enum team,int32_t value,int32_t otherID,
               bool includeTeamScore,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((team == MVTeam__Enum_Server) && (actorNumber != 0)) goto code_?;
  GameStatCounterManager_AddIfNotPresent(this,counterType,(MethodInfo *)0x0);
  pLVar1 = (List_1_UnityEngine_Color32_ *)(this->fields).roundEndingStats;
  if (pLVar1 != (List_1_UnityEngine_Color32_ *)0x0) {
    item._4_4_ = 
    MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Contains_GameStatCounterType_
    ;
    item.rgba = counterType;
    bVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
            List_1_UnityEngine_Color32__Contains(pLVar1,item,unaff_EBP);
    if (bVar2 != 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(this->fields).statTypeCounters;
      if (this_00 ==
          (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
           *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
      Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Clear__
                );
      GameStatCounterManager_AddIfNotPresent(this,counterType,(MethodInfo *)0x0);
    }
    pLVar1 = (List_1_UnityEngine_Color32_ *)(this->fields).sessionPersistentStats;
    if (pLVar1 != (List_1_UnityEngine_Color32_ *)0x0) {
      item_00._4_4_ =
           MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Contains_GameStatCounterType_
      ;
      item_00.rgba = counterType;
      bVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
              List_1_UnityEngine_Color32__Contains(pLVar1,item_00,unaff_EBP);
      if (bVar2 == 0) goto code_?;
      pDVar3 = (this->fields).persistentStats;
      if (pDVar3 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
        pTVar4 = (TeamsCounter *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[GameStatCounterType,System
                 ::Object]::Dictionary_2_GameStatCounterType_System_Object__get_Item
                           ((Dictionary_2_GameStatCounterType_System_Object_ *)pDVar3,counterType,
                            MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                           );
        if (pTVar4 != (TeamsCounter *)0x0) {
          otherID = TeamsCounter::TeamsCounter_GetActorCount
                              (pTVar4,team,actorNumber,(MethodInfo *)0x0);
          team = (MVTeam__Enum)&UNK_?;
          bVar2 = GameStatCounterManager_IsNewScoreBetter(value,otherID,_includeTeamScore,method);
          if (bVar2 == 0) {
code_?:
            pDVar3 = (this->fields).statTypeCounters;
            if (pDVar3 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
              pTVar4 = (TeamsCounter *)
                       mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[GameStatCounterType,System::Object]::
                       Dictionary_2_GameStatCounterType_System_Object__get_Item
                                 ((Dictionary_2_GameStatCounterType_System_Object_ *)pDVar3,
                                  counterType,
                                  MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                                 );
              if (pTVar4 != (TeamsCounter *)0x0) {
                count = TeamsCounter::TeamsCounter_Update
                                  (pTVar4,team,actorNumber,value,includeTeamScore,(MethodInfo *)0x0)
                ;
                GameStatCounterManager_SendChangeEvent
                          (this,count,counterType,actorNumber,team,otherID,(MethodInfo *)0x0);
                return;
              }
            }
          }
          else {
            pDVar3 = (this->fields).persistentStats;
            if (pDVar3 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
              pTVar4 = (TeamsCounter *)
                       mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[GameStatCounterType,System::Object]::
                       Dictionary_2_GameStatCounterType_System_Object__get_Item
                                 ((Dictionary_2_GameStatCounterType_System_Object_ *)pDVar3,
                                  counterType,
                                  MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                                 );
              if (pTVar4 != (TeamsCounter *)0x0) {
                TeamsCounter::TeamsCounter_Update
                          (pTVar4,0xADDR,actorNumber,value,includeTeamScore,(MethodInfo *)0x0);
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
code_?:
  this_01 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_01,StringLiteral_Team_Server_is_reserved_by_serve,(MethodInfo *)0x0);
  func_?(this_01,0,
                  MethodInfo__GameStatCounterManager__Validate_int__MV__WorldObject__MVTeam_);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Validate(Int32, MVTeam) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Validate
               (GameStatCounterManager *this,int32_t actorNumber,MVTeam__Enum team,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((team == MVTeam__Enum_Server) && (actorNumber != 0)) {
    this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1
              (this_00,StringLiteral_Team_Server_is_reserved_by_serve,(MethodInfo *)0x0);
    func_?(this_00,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}


/* GameStatCounterManager() */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager__ctor
               (GameStatCounterManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<GameStatCounterType>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,MethodInfo__System__Collections__Generic__List<GameStatCounterType>__List__);
  if (pLVar1 != (List_1_UnityEngine_Vector4_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::List_1_System_Byte__1_Add
              ((List_1_System_Byte__1 *)pLVar1,2,
               MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Add_GameStatCounterType_
              );
    (this->fields).roundEndingStats = (List_1_GameStatCounterType_ *)pLVar1;
    pLVar1 = (List_1_UnityEngine_Vector4_ *)
             func_?(TypeInfo__System__Collections__Generic__List<GameStatCounterType>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (pLVar1,MethodInfo__System__Collections__Generic__List<GameStatCounterType>__List__);
    if (pLVar1 != (List_1_UnityEngine_Vector4_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::List_1_System_Byte__1_Add
                ((List_1_System_Byte__1 *)pLVar1,2,
                 MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Add_GameStatCounterType_
                );
      (this->fields).sessionPersistentStats = (List_1_GameStatCounterType_ *)pLVar1;
      pLVar1 = (List_1_UnityEngine_Vector4_ *)
               func_?(TypeInfo__System__Collections__Generic__List<GameStatCounterType>);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
      List_1_UnityEngine_Vector4___ctor
                (pLVar1,MethodInfo__System__Collections__Generic__List<GameStatCounterType>__List__)
      ;
      if (pLVar1 != (List_1_UnityEngine_Vector4_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::List_1_System_Byte__1_Add
                  ((List_1_System_Byte__1 *)pLVar1,2,
                   MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Add_GameStatCounterType_
                  );
        mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::List_1_System_Byte__1_Add
                  ((List_1_System_Byte__1 *)pLVar1,8,
                   MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Add_GameStatCounterType_
                  );
        (this->fields).statsToRemoveOnActorLeave = (List_1_GameStatCounterType_ *)pLVar1;
        this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
                  func_?(
                                 TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>
                                 );
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  (this_00,
                   MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__HashSet__
                  );
        (this->fields).activeTeams = (HashSet_1_MV_WorldObject_MVTeam_ *)this_00;
        method_00 = 
        TypeInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>;
        pDVar2 = (Dictionary_2_GameStatCounterType_TeamsCounter_ *)func_?();
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Dictionary__
                  );
        (this->fields).statTypeCounters = pDVar2;
        Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
                  ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
        if ((this->fields).persistentStats == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0)
        {
          pDStack3 =
               TypeInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>
          ;
          pDVar2 = (Dictionary_2_GameStatCounterType_TeamsCounter_ *)func_?();
          System.Core.dll::System::Collections::Generic::
          HashSet`1[AvatarModifierPackage+AvatarModifier]::
          HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                    ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Dictionary__
                    );
          (this->fields).persistentStats = pDVar2;
        }
        return;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void add_OnCounterTypeChanged(EventHandler`1[OnCounterTypeChangedArgs]) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_add_OnCounterTypeChanged
               (GameStatCounterManager *this,EventHandler_1_OnCounterTypeChangedArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnCounterTypeChanged;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_OnCounterTypeChangedArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_OnCounterTypeChangedArgs_ *)func_?(ppEVar1,pDVar3,a);
    bVar6 = pEVar5 == a;
    a = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* HashSet`1[MV.WorldObject.MVTeam] get_ActiveTeams() */

HashSet_1_MV_WorldObject_MVTeam_ *
MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
          (GameStatCounterManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  capacity = (this->fields).activeTeams;
  this_00 = (HashSet_1_MV_WorldObject_MVTeam_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>
                           );
  System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
  SortedList_2_System_Single_System_Object___ctor_1
            ((SortedList_2_System_Single_System_Object_ *)this_00,(int32_t)capacity,
             MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__HashSet_System__Collections__Generic__IEnumerable<MV::WorldObject::MVTeam>_
            );
  return this_00;
}


/* Void remove_OnCounterTypeChanged(EventHandler`1[OnCounterTypeChangedArgs]) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_remove_OnCounterTypeChanged
               (GameStatCounterManager *this,EventHandler_1_OnCounterTypeChangedArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnCounterTypeChanged;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_OnCounterTypeChangedArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_OnCounterTypeChangedArgs_ *)func_?(ppEVar1,pDVar3,source);
    bVar6 = pEVar5 == source;
    source = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}

