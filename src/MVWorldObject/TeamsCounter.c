
/* Void AddIfNotPresent(MVTeam) */

void MVWorldObject.dll::TeamsCounter::TeamsCounter_AddIfNotPresent
               (TeamsCounter *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).teamCounters;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System
            ::Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__ContainsKey
                      ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)pDVar1,team,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__ContainsKey_MV__WorldObject__MVTeam_
                      );
    if (bVar2 == 0) {
      pDVar1 = (this->fields).teamCounters;
      this_00 = (ScaleAnimationBase *)func_?(TypeInfo__TeamCounter);
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>
                               );
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Dictionary__
                );
      (this_00->fields)._._._._.m_CachedPtr = this_01;
      Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
                (this_00,0.0,in_stack_3);
      if (pDVar1 == (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System::
      Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__Add
                ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)pDVar1,team,(Object *)this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Add_MV__WorldObject__MVTeam__TeamCounter_
                );
    }
    return;
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Int32 GetActorCount(MVTeam, Int32) */

int32_t MVWorldObject.dll::TeamsCounter::TeamsCounter_GetActorCount
                  (TeamsCounter *this,MVTeam__Enum team,int32_t actorNumber,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).teamCounters;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System
            ::Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__ContainsKey
                      ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)pDVar1,team,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__ContainsKey_MV__WorldObject__MVTeam_
                      );
    if (bVar2 == 0) {
      return 0;
    }
    pDVar1 = (this->fields).teamCounters;
    if ((pDVar1 != (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) &&
       (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                 MVTeam,System::Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                           ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)pDVar1,team,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                           ), pOVar3 != (Object *)0x0)) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (pOVar3[1].klass != (Object__Class *)0x0) {
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__ContainsKey
                          ((Dictionary_2_System_Int32_System_Object_ *)pOVar3[1].klass,actorNumber,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__ContainsKey_int_
                          );
        if (bVar2 == 0) {
          return 0;
        }
        if ((pOVar3[1].klass != (Object__Class *)0x0) &&
           (this_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                  *)pOVar3[1].klass,actorNumber,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__get_Item_int_
                                ), this_00 != (TerrainUtility_TerrainMap *)0x0)) {
          pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items
                             ((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
          return (int32_t)pIVar4;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Void GetActorWithBestScore(Int32 ByRef, MVTeam, GameStatCounterType, Int32) */

void MVWorldObject.dll::TeamsCounter::TeamsCounter_GetActorWithBestScore
               (TeamsCounter *this,int32_t *score,MVTeam__Enum team,
               GameStatCounterType__Enum statType,int32_t excludedActorNr,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa8;
  puVar5 = &stack0xffffffa8;
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
  *score = 0;
  this_00 = (this->fields).teamCounters;
  puStack_8 = (undefined4 *)&stack0xffffffa8;
  puStack_4 = &stack0xffffffa8;
  if (((this_00 != (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) &&
      (puStack_8 = (undefined4 *)&stack0xffffffa8, puStack_4 = &stack0xffffffa8,
      pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
               MVTeam,System::Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                         ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)this_00,team,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                         ), pOVar9 != (Object *)0x0)) && (pOVar9[1].klass != (Object__Class *)0x0))
  {
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        &pDStack_11,
                        (Dictionary_2_WinningConditionType_System_Object_ *)pOVar9[1].klass,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar10->dictionary;
    auStack_6._4_4_ = pDVar10->next;
    auStack_6._8_4_ = pDVar10->stamp;
    auStack_6._12_4_ = (pDVar10->current).key;
    auStack_6._16_4_ = (pDVar10->current).value;
    uStack_1 = 0;
    while( true ) {
      do {
        cVar12 = func_?();
        if (cVar12 == '\0') {
          *puStack_8 = 0x67;
          uStack_1 = 0xffffffff;
          func_?();
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        KStack_7 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                              ((LevelRewardsManager *)auStack_6,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__get_Current__
                              );
        iVar13 = func_?();
      } while (iVar13 == excludedActorNr);
      this_01 = (Collection_1_VoxelHit_ *)func_?();
      if (this_01 == (Collection_1_VoxelHit_ *)0x0) break;
      newScore = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items(this_01,(MethodInfo *)0x0);
      if ((0 < (int)newScore) &&
         (bVar14 = GameStatCounterManager::GameStatCounterManager_IsNewScoreBetter
                            ((int32_t)newScore,*score,statType,(MethodInfo *)0x0), bVar14 != 0)) {
        *score = (int32_t)newScore;
      }
    }
  }
  func_?(0);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* HighScores GetHighScores(GameStatCounterType, Boolean, WinningConditionPresentStyle, Boolean) */

HighScores *
MVWorldObject.dll::TeamsCounter::TeamsCounter_GetHighScores
          (TeamsCounter *this,GameStatCounterType__Enum gameStatCounterType,bool presentAsTeamScore,
          WinningConditionPresentStyle__Enum winningConditionPresentStyle,bool byAscending,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  teamCounters = (this->fields).teamCounters;
  this_00 = (HighScores *)func_?(TypeInfo__HighScores);
  HighScores::HighScores__ctor
            (this_00,gameStatCounterType,teamCounters,presentAsTeamScore,
             winningConditionPresentStyle,byAscending,(MethodInfo *)0x0);
  return this_00;
}


/* Int32 GetTeamCount(MVTeam) */

int32_t MVWorldObject.dll::TeamsCounter::TeamsCounter_GetTeamCount
                  (TeamsCounter *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).teamCounters;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System
            ::Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__ContainsKey
                      ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)pDVar1,team,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__ContainsKey_MV__WorldObject__MVTeam_
                      );
    if (bVar2 == 0) {
      return 0;
    }
    pDVar1 = (this->fields).teamCounters;
    if (pDVar1 != (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
               MVTeam,System::Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                         ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)pDVar1,team,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                         );
      if (pOVar3 != (Object *)0x0) {
        return (int32_t)pOVar3[1].monitor;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Int32 Increment(MVTeam, Int32, Int32, Boolean) */

int32_t MVWorldObject.dll::TeamsCounter::TeamsCounter_Increment
                  (TeamsCounter *this,MVTeam__Enum team,int32_t actorNumber,int32_t value,
                  bool includeTeamScore,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TeamsCounter_AddIfNotPresent(this,team,(MethodInfo *)0x0);
  this_00 = (this->fields).teamCounters;
  if (this_00 != (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System
             ::Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                       ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)this_00,team,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                       );
    if (pOVar1 != (Object *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (pOVar1[1].klass != (Object__Class *)0x0) {
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__ContainsKey
                          ((Dictionary_2_System_Int32_System_Object_ *)pOVar1[1].klass,actorNumber,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__ContainsKey_int_
                          );
        if (bVar2 == 0) {
          this_01 = pOVar1[1].klass;
          this_02 = (TextCommand_Command *)func_?();
          Assembly-CSharp.dll::TextCommand+Command::TextCommand_Command__ctor
                    (this_02,(String__Array *)0x0,(MethodInfo *)0x0);
          if (this_01 == (Object__Class *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Add
                    ((Dictionary_2_System_Int32_System_Object_ *)this_01,actorNumber,
                     (Object *)this_02,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Add_int__ActorCounter_
                    );
        }
        if (includeTeamScore != 0) {
          pOVar1[1].monitor = pOVar1[1].monitor + value;
        }
        if (pOVar1[1].klass != (Object__Class *)0x0) {
          this_03 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                              ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                *)pOVar1[1].klass,actorNumber,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__get_Item_int_
                              );
          if (this_03 != (TerrainUtility_TerrainMap *)0x0) {
            iVar3 = ActorCounter::ActorCounter_Increment
                              ((ActorCounter *)this_03,value,(MethodInfo *)0x0);
            return iVar3;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  iVar3 = (*pcVar4)();
  return iVar3;
}


/* Void RemoveStatsFromActor(Int32) */

void MVWorldObject.dll::TeamsCounter::TeamsCounter_RemoveStatsFromActor
               (TeamsCounter *this,int32_t actorNumber,MethodInfo *method)

{
  iStack_1 = -1;
  puStack_2 = &DAT_?;
  pOStack_3 = (Object__Array *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pOStack_3;
  pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
  pWVar5 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pWVar5 = pWStack_4;
  }
  pWStack_4 = pWVar5;
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  this_00 = (this->fields).teamCounters;
  pLStack_8 = (Link__Array *)&stack0xffffffa8;
  pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
  if (this_00 != (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) {
    pLStack_8 = (Link__Array *)&stack0xffffffa8;
    pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_10,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar9->dictionary;
    auStack_6._4_4_ = pDVar9->next;
    auStack_6._8_4_ = pDVar9->stamp;
    auStack_6._12_4_ = (pDVar9->current).key;
    auStack_6._16_4_ = (pDVar9->current).value;
    iStack_1 = 0;
    while( true ) {
      cVar11 = func_?();
      if (cVar11 == '\0') {
        pLStack_8->klass = (Link__Array__Class *)0x3c;
        iStack_1 = -1;
        func_?();
        *unaff_FS_OFFSET = pOStack_3;
        return;
      }
      KStack_7 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__get_Current__
                            );
      DStack_10.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
      DStack_10.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_TeamCounter>__get_Value__
      ;
      iVar12 = func_?();
      if (iVar12 == 0) break;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if (*(Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            **)(iVar12 + 8) ==
          (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
           *)0x0) break;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
      Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                (*(Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   **)(iVar12 + 8),actorNumber,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Remove_int_
                );
    }
  }
  func_?(0);
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void RemoveTeam(MVTeam) */

void MVWorldObject.dll::TeamsCounter::TeamsCounter_RemoveTeam
               (TeamsCounter *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).teamCounters;
  if (this_00 != (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System::Object]
    ::Dictionary_2_MV_WorldObject_MVTeam_System_Object__Remove
              ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)this_00,team,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Remove_MV__WorldObject__MVTeam_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* String ToString() */

String * MVWorldObject.dll::TeamsCounter::TeamsCounter_ToString
                   (TeamsCounter *this,MethodInfo *method)

{
  iStack_1 = -1;
  puStack_2 = &DAT_?;
  iStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int32_t)&iStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = 0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  str0 = (Object__Array *)::StringLiteral__;
  pOStack_8 = (Object__Array *)::StringLiteral__;
  this_00 = (this->fields).teamCounters;
  if (this_00 != (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) {
    pLStack_9 = (Link__Array *)&stack0xffffffa0;
    puStack_4 = &stack0xffffffa0;
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_11,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar10->dictionary;
    auStack_6._4_4_ = pDVar10->next;
    auStack_6._8_4_ = pDVar10->stamp;
    auStack_6._12_4_ = (pDVar10->current).key;
    auStack_6._16_4_ = (pDVar10->current).value;
    iStack_1 = 0;
    while (cVar12 = func_?(), cVar12 != '\0') {
      KStack_7 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__get_Current__
                            );
      DStack_11.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
      DStack_11.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_TeamCounter>__get_Key__
      ;
      this = (TeamsCounter *)func_?();
      DStack_11.next = (int32_t)&this;
      DStack_11.dictionary =
           (Dictionary_2_WinningConditionType_System_Object_ *)TypeInfo__MV__WorldObject__MVTeam;
      pWStack_13 = (WinningConditionType__Enum__Array *)func_?();
      DStack_11.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
      DStack_11.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_TeamCounter>__get_Value__
      ;
      arg1 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar14 = mscorlib.dll::System::String::String_Format_1
                         (StringLiteral_u000ATeam___0___TeamCounter___1_u000A,(Object *)pWStack_13,
                          arg1,(MethodInfo *)0x0);
      str0 = (Object__Array *)
             mscorlib.dll::System::String::String_Concat_2((String *)str0,pSVar14,(MethodInfo *)0x0);
      pOStack_8 = str0;
    }
    pLStack_9->klass = (Link__Array__Class *)0x5b;
    iStack_1 = -1;
    func_?();
    *unaff_FS_OFFSET = iStack_3;
    return (String *)str0;
  }
  pLStack_9 = (Link__Array *)&stack0xffffffa0;
  puStack_4 = &stack0xffffffa0;
  func_?(0);
  func_?();
  pcVar15 = (code *)swi(3);
  pSVar14 = (String *)(*pcVar15)();
  return pSVar14;
}


/* Int32 Update(MVTeam, Int32, Int32, Boolean) */

int32_t MVWorldObject.dll::TeamsCounter::TeamsCounter_Update
                  (TeamsCounter *this,MVTeam__Enum team,int32_t actorNumber,int32_t value,
                  bool includeTeamScore,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TeamsCounter_AddIfNotPresent(this,team,(MethodInfo *)0x0);
  this_00 = (this->fields).teamCounters;
  if (this_00 != (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System
             ::Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                       ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)this_00,team,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                       );
    if (pOVar1 != (Object *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (includeTeamScore != 0) {
        pOVar1[1].monitor = (MonitorData *)value;
      }
      this_01 = pOVar1[1].klass;
      pTVar2 = (TerrainUtility_TerrainMap *)func_?();
      Assembly-CSharp.dll::TextCommand+Command::TextCommand_Command__ctor
                ((TextCommand_Command *)pTVar2,(String__Array *)value,(MethodInfo *)0x0);
      if (this_01 != (Object__Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__set_Item
                  ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)this_01,actorNumber,pTVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__set_Item_int__ActorCounter_
                  );
        if (pOVar1[1].klass != (Object__Class *)0x0) {
          pTVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                             ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                               *)pOVar1[1].klass,actorNumber,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__get_Item_int_
                             );
          if (pTVar2 != (TerrainUtility_TerrainMap *)0x0) {
            pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items
                               ((Collection_1_VoxelHit_ *)pTVar2,(MethodInfo *)0x0);
            return (int32_t)pIVar3;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Int32 UpdateTeam(MVTeam, Int32) */

int32_t MVWorldObject.dll::TeamsCounter::TeamsCounter_UpdateTeam
                  (TeamsCounter *this,MVTeam__Enum team,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TeamsCounter_AddIfNotPresent(this,team,(MethodInfo *)0x0);
  this_00 = (this->fields).teamCounters;
  if (this_00 != (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System
             ::Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                       ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)this_00,team,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                       );
    if (pOVar1 != (Object *)0x0) {
      pOVar1[1].monitor = (MonitorData *)value;
      return value;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* TeamsCounter() */

void MVWorldObject.dll::TeamsCounter::TeamsCounter__ctor(TeamsCounter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Dictionary__
            );
  (this->fields).teamCounters = this_00;
  return;
}


/* TeamsCounter(TeamsCounter) */

void MVWorldObject.dll::TeamsCounter::TeamsCounter__ctor_1
               (TeamsCounter *this,TeamsCounter *teamCounterCopy,MethodInfo *method)

{
  uStack_1 = 0xff;
  uStack_2 = 0xffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffff80;
  puVar6 = &stack0xffffff80;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar6 = puStack_5;
  }
  puStack_5 = puVar6;
  auStack_7._16_4_ = (Object *)0x0;
  pOStack_8 = (Object *)0x0;
  KStack_9.key = 0;
  KStack_9.value = 0;
  KStack_10.key = 0;
  KStack_10.value = 0;
  iStack_11 = 0;
  auStack_7._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_7._4_4_ = (MonitorData *)0x0;
  auStack_7._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_7._12_4_ = 0;
  auStack_7._20_4_ = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  iStack_12 = 0;
  iStack_13 = 0;
  iStack_14 = 0;
  func_?();
  iStack_15 = -1;
  method_01 = 
  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>;
  puStack_16 = &stack0xffffff80;
  puStack_5 = &stack0xffffff80;
  pDVar17 = (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar17,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Dictionary__
            );
  (this->fields).teamCounters = pDVar17;
  method_00 = (MethodInfo *)this;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_01);
  if ((teamCounterCopy == (TeamsCounter *)0x0) ||
     (pDVar17 = (teamCounterCopy->fields).teamCounters,
     pDVar17 == (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0)) {
code_?:
    func_?();
  }
  else {
    pDVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        &stack0xffffff8c,(Dictionary_2_WinningConditionType_System_Object_ *)pDVar17,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__GetEnumerator__
                       );
    auStack_7._0_4_ = pDVar18->dictionary;
    auStack_7._4_4_ = pDVar18->next;
    auStack_7._8_4_ = pDVar18->stamp;
    auStack_7._12_4_ = (pDVar18->current).key;
    auStack_7._16_4_ = (pDVar18->current).value;
    uStack_1 = 0;
    uStack_2 = 0;
    iVar19 = -1;
    while (cVar20 = func_?(), iVar21 = iStack_11, cVar20 != '\0') {
      KStack_9 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_7,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__get_Current__
                            );
      auStack_7._0_4_ =
           MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_TeamCounter>__get_Value__
      ;
      iVar21 = func_?();
      if ((iVar21 == 0) ||
         (*(Dictionary_2_WinningConditionType_System_Object_ **)(iVar21 + 8) ==
          (Dictionary_2_WinningConditionType_System_Object_ *)0x0)) goto code_?;
      pDVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *
                          )&stack0xffffff8c,
                          *(Dictionary_2_WinningConditionType_System_Object_ **)(iVar21 + 8),
                          MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__GetEnumerator__
                         );
      auStack_7._20_4_ = pDVar18->dictionary;
      iStack_12 = pDVar18->next;
      iStack_13 = pDVar18->stamp;
      iStack_14 = (pDVar18->current).key;
      pOStack_8 = (pDVar18->current).value;
      uStack_1 = 1;
      while (cVar20 = func_?(), iVar21 = iStack_11, cVar20 != '\0') {
        KStack_10 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                              ((LevelRewardsManager *)(auStack_7 + 0x14),
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__get_Current__
                              );
        MVar22 = func_?();
        actorNumber = func_?();
        this_00 = (Collection_1_VoxelHit_ *)func_?();
        if (this_00 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
        method_00 = (MethodInfo *)
                    mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                    Collection_1_VoxelHit__get_Items(this_00,method_00);
        TeamsCounter_Update(this,MVar22,actorNumber,(int32_t)method_00,0,(MethodInfo *)0x0);
      }
      iVar23 = iVar19 + 1;
      uStack_1 = 0;
      *(undefined4 *)(puStack_16 + iVar23 * 4) = 0x7e;
      iStack_15 = iVar23;
      func_?();
      if (iVar21 != 0) {
        func_?();
        goto code_?;
      }
      if (((iVar23 != -1) && (*(int *)(puStack_16 + iVar23 * 4) == 0x7e)) && (-1 < iVar23)) {
        iVar23 = iVar19;
        iStack_15 = iVar19;
      }
      MVar22 = func_?();
      iVar19 = func_?();
      if (iVar19 == 0) goto code_?;
      TeamsCounter_UpdateTeam(this,MVar22,*(int32_t *)(iVar19 + 0xc),(MethodInfo *)0x0);
      iVar19 = iVar23;
    }
    *(undefined4 *)(puStack_16 + iVar19 * 4 + 4) = 0xb4;
    uStack_1 = 0xff;
    uStack_2 = 0xffffff;
    func_?();
    if (iVar21 == 0) {
      *unaff_FS_OFFSET = uStack_4;
      return;
    }
  }
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* TeamsCounter(BytePacker) */

void MVWorldObject.dll::TeamsCounter::TeamsCounter__ctor_2
               (TeamsCounter *this,BytePacker *bp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>;
  pDVar1 = (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Dictionary__
            );
  (this->fields).teamCounters = pDVar1;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  if (bp == (BytePacker *)0x0) {
code_?:
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar3 = MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
  if (0 < iVar3) {
    do {
      puVar4 = &UNK_?;
      MV::WorldObject::BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
      key_00 = &UNK_?;
      this_01 = (ScaleAnimationBase *)func_?(TypeInfo__TeamCounter);
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pDVar5 = TypeInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>;
      this_02 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                (this_02,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Dictionary__
                );
      (this_01->fields)._._._._.m_CachedPtr = this_02;
      Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
                (this_01,0.0,in_stack_6);
      iVar3 = MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      (this_01->fields).state = iVar3;
      iVar3 = MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      iVar7 = 0;
      if (0 < iVar3) {
        do {
          key = MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
          this_03 = (MethodInfo *)func_?(TypeInfo__ActorCounter);
          in_stack_6 = this_03;
          ActorCounter::ActorCounter__ctor_1((ActorCounter *)this_03,bp,(MethodInfo *)0x0);
          this_00 = (this_01->fields)._._._._.m_CachedPtr;
          if (this_00 == (Dictionary_2_System_Int32_System_Object_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Add
                    (this_00,key,(Object *)this_03,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Add_int__ActorCounter_
                    );
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar3);
      }
      pDVar1 = (this->fields).teamCounters;
      if (pDVar1 == (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System::
      Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__Add
                ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)pDVar1,(MVTeam__Enum)key_00,
                 (Object *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Add_MV__WorldObject__MVTeam__TeamCounter_
                );
    } while ((int)((int)&(pDVar5->_0).image + 1) < (int)puVar4);
  }
  return;
}

