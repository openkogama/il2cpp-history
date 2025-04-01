
/* Void AddIfNotPresent(GameStatCounterType) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_AddIfNotPresent
               (GameStatCounterManager *this,GameStatCounterType__Enum statType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Add_GameStatCounterType__TeamsCounter_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Contains_GameStatCounterType_
                   );
    func_?(&TypeInfo__TeamsCounter);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).statTypeCounters;
  if (pDVar1 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
            Single]::Dictionary_2_System_ByteEnum_System_Single__ContainsKey
                      ((Dictionary_2_System_ByteEnum_System_Single_ *)pDVar1,statType,
                       MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                      );
    if (bVar2 == 0) {
      pDVar1 = (this->fields).statTypeCounters;
      pTVar3 = (TeamsCounter *)func_?(TypeInfo__TeamsCounter);
      TeamsCounter::TeamsCounter__ctor(pTVar3,(MethodInfo *)0x0);
      if (pDVar1 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
      Dictionary_2_System_ByteEnum_System_Object__Add
                ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,statType,(Object *)pTVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Add_GameStatCounterType__TeamsCounter_
                );
    }
    this_00 = (List_1_System_ByteEnum_ *)(this->fields).sessionPersistentStats;
    if (this_00 != (List_1_System_ByteEnum_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
              List_1_System_ByteEnum__Contains
                        (this_00,statType,
                         MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Contains_GameStatCounterType_
                        );
      if (bVar2 != 0) {
        pDVar1 = (this->fields).persistentStats;
        if (pDVar1 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) goto code_?;
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Single]::Dictionary_2_System_ByteEnum_System_Single__ContainsKey
                          ((Dictionary_2_System_ByteEnum_System_Single_ *)pDVar1,statType,
                           MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                          );
        if (bVar2 == 0) {
          pDVar1 = (this->fields).persistentStats;
          pTVar3 = (TeamsCounter *)func_?();
          TeamsCounter::TeamsCounter__ctor(pTVar3,(MethodInfo *)0x0);
          if (pDVar1 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0)
          goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]
          ::Dictionary_2_System_ByteEnum_System_Object__Add
                    ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,statType,(Object *)pTVar3
                     ,
                     MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Add_GameStatCounterType__TeamsCounter_
                    );
        }
      }
      return;
    }
  }
code_?:
  func_?();
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
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Add_GameStatCounterType__TeamsCounter_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<GameStatCounterType,_TeamsCounter>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<GameStatCounterType,_TeamsCounter>__get_Value__
                   );
    func_?(&TypeInfo__TeamsCounter);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).persistentStats;
  if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffffa4,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__GetEnumerator__
                       );
    uStack_7 = 0;
    DStack_8._dictionary = (Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6->_dictionary;
    DStack_8._version = pDVar6->_version;
    DStack_8._index = pDVar6->_index;
    DStack_8._current._0_4_ = (pDVar6->_current).key;
    DStack_8._16_8_ = *(undefined8 *)&(pDVar6->_current).value;
    uStack_1 = 1;
    pDStack_9 = &DStack_8;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                        (&DStack_8,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__MoveNext__
                        );
      if (bVar10 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&DStack_8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__Dispose__
                   ,in_stack_11);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      this_01 = (this->fields).statTypeCounters;
      BStack_12 = DStack_8._current._0_4_;
      pTStack_13 = (TeamsCounter *)DStack_8._current.value;
      pTStack_14 = (TeamsCounter *)func_?();
      TeamsCounter::TeamsCounter__ctor_1(pTStack_14,pTStack_13,(MethodInfo *)0x0);
      if (this_01 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
      Dictionary_2_System_ByteEnum_System_Object__Add
                ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,BStack_12,
                 (Object *)pTStack_14,
                 MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Add_GameStatCounterType__TeamsCounter_
                );
    }
  }
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Clear__
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).statTypeCounters;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::StyleSheets::
    StyleSheetCache+SheetHandleKey,System::Object]::
    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Clear__
              );
    GameStatCounterManager_AddPersistentStats(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ClearStats() */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_ClearStats
               (GameStatCounterManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).statTypeCounters;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::StyleSheets::
    StyleSheetCache+SheetHandleKey,System::Object]::
    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Clear__
              );
    return;
  }
  uVar1 = func_?(&puStack_2);
  func_?(uVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Int32 GetActorCount(GameStatCounterType, MVTeam, Int32) */

int32_t MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                  (GameStatCounterManager *this,GameStatCounterType__Enum counterType,
                  MVTeam__Enum team,int32_t actorNumber,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).statTypeCounters;
  if (pDVar1 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
            Single]::Dictionary_2_System_ByteEnum_System_Single__ContainsKey
                      ((Dictionary_2_System_ByteEnum_System_Single_ *)pDVar1,counterType,
                       MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                      );
    if (bVar2 == 0) {
      return 0;
    }
    pDVar1 = (this->fields).statTypeCounters;
    if (pDVar1 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
      this_00 = (TeamsCounter *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                          ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,counterType,
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                   );
    func_?(&TypeInfo__HighScores);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).statTypeCounters;
  if (pDVar1 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
            Single]::Dictionary_2_System_ByteEnum_System_Single__ContainsKey
                      ((Dictionary_2_System_ByteEnum_System_Single_ *)pDVar1,statType,
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
      pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,statType,
                          MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                         );
      if (pOVar4 != (Object *)0x0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        teamCounters = pOVar4[1].klass;
        pHVar3 = (HighScores *)func_?();
        HighScores::HighScores__ctor
                  (pHVar3,statType,(Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)teamCounters,
                   presentAsTeamScore,winningConditionPresentStyle,byAscending,(MethodInfo *)0x0);
        return pHVar3;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pHVar3 = (HighScores *)(*pcVar5)();
  return pHVar3;
}


/* Int32 GetTeamCount(GameStatCounterType, MVTeam) */

int32_t MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetTeamCount
                  (GameStatCounterManager *this,GameStatCounterType__Enum statType,MVTeam__Enum team
                  ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).statTypeCounters;
  if (pDVar1 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
            Single]::Dictionary_2_System_ByteEnum_System_Single__ContainsKey
                      ((Dictionary_2_System_ByteEnum_System_Single_ *)pDVar1,statType,
                       MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                      );
    if (bVar2 == 0) {
      return 0;
    }
    pDVar1 = (this->fields).statTypeCounters;
    if ((pDVar1 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) &&
       (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,statType,
                            MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                           ), pOVar3 != (Object *)0x0)) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      if (pOVar3[1].klass != (Object__Class *)0x0) {
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                          ((Dictionary_2_System_Int32Enum_System_Single_ *)pOVar3[1].klass,team,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__ContainsKey_MV__WorldObject__MVTeam_
                          );
        if (bVar2 == 0) {
          return 0;
        }
        if ((pOVar3[1].klass != (Object__Class *)0x0) &&
           (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)pOVar3[1].klass,team
                                ,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                               ), pOVar3 != (Object *)0x0)) {
          return (int32_t)pOVar3[1].monitor;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Void Increment(GameStatCounterType, MVTeam, Int32, Int32, Int32, Boolean) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Increment
               (GameStatCounterManager *this,GameStatCounterType__Enum counterType,MVTeam__Enum team
               ,int32_t actorNumber,int32_t value,int32_t otherID,bool includeTeamScore,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Contains_GameStatCounterType_
                   );
    cRam_? = '\x01';
  }
  if ((team == MVTeam__Enum_Server) && (actorNumber != 0)) goto code_?;
  GameStatCounterManager_AddIfNotPresent(this,counterType,(MethodInfo *)0x0);
  this_00 = (this->fields).statTypeCounters;
  if ((this_00 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) &&
     (pTVar1 = (TeamsCounter *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,counterType,
                          MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                         ), pTVar1 != (TeamsCounter *)0x0)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    TeamsCounter::TeamsCounter_AddIfNotPresent(pTVar1,team,(MethodInfo *)0x0);
    this_01 = (pTVar1->fields).teamCounters;
    if (this_01 != (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) {
      pMVar2 = (MethodInfo *)&UNK_?;
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,team,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                         );
      if (pOVar3 != (Object *)0x0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__ActorCounter);
          func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Add_int__ActorCounter_
                         );
          func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__ContainsKey_int_
                         );
          func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__get_Item_int_
                         );
          cRam_? = '\x01';
        }
        if (pOVar3[1].klass != (Object__Class *)0x0) {
          bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                            ((Dictionary_2_System_Int32_System_Single_ *)pOVar3[1].klass,actorNumber
                             ,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__ContainsKey_int_
                            );
          if (bVar4 == 0) {
            pOVar5 = pOVar3[1].klass;
            value_00 = (Object *)func_?();
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      (value_00,ExceptionArgument__Enum_obj,pMVar2);
            value_00[1].klass = (Object__Class *)0x0;
            if (pOVar5 == (Object__Class *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Add
                      ((Dictionary_2_System_Int32_System_Object_ *)pOVar5,actorNumber,value_00,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Add_int__ActorCounter_
                      );
          }
          if (includeTeamScore != 0) {
            pOVar3[1].monitor = pOVar3[1].monitor + value;
          }
          if ((pOVar3[1].klass != (Object__Class *)0x0) &&
             (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                       ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                 ((Dictionary_2_System_Int32_System_Object_ *)pOVar3[1].klass,
                                  actorNumber,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__get_Item_int_
                                 ), pOVar3 != (Object *)0x0)) {
            pOVar3[1].klass = (Object__Class *)((int)&((pOVar3[1].klass)->_0).image + value);
            pOVar5 = pOVar3[1].klass;
            GameStatCounterManager_SendChangeEvent
                      ((GameStatCounterManager *)0x0,(int32_t)pOVar5,counterType,actorNumber,team,
                       otherID,(MethodInfo *)0x0);
            if (pLRam0000000c != (List_1_System_ByteEnum_ *)0x0) {
              bVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
                      List_1_System_ByteEnum__Contains
                                (pLRam0000000c,counterType,
                                 MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Contains_GameStatCounterType_
                                );
              if (bVar4 == 0) {
                return;
              }
              if ((pDRam00000014 != (Dictionary_2_System_ByteEnum_System_Object_ *)0x0) &&
                 (pTVar1 = (TeamsCounter *)
                           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           ByteEnum,System::Object]::
                           Dictionary_2_System_ByteEnum_System_Object__get_Item
                                     (pDRam00000014,counterType,
                                      MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                                     ), pTVar1 != (TeamsCounter *)0x0)) {
                oldScore = TeamsCounter::TeamsCounter_GetActorCount
                                     (pTVar1,team,actorNumber,(MethodInfo *)0x0);
                bVar4 = GameStatCounterManager_IsNewScoreBetter
                                  ((int32_t)pOVar5,oldScore,in_stack_6,in_stack_7);
                if (bVar4 == 0) {
                  return;
                }
                if ((pDRam00000014 != (Dictionary_2_System_ByteEnum_System_Object_ *)0x0) &&
                   (pTVar1 = (TeamsCounter *)
                             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             ByteEnum,System::Object]::
                             Dictionary_2_System_ByteEnum_System_Object__get_Item
                                       (pDRam00000014,counterType,
                                        MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                                       ), pTVar1 != (TeamsCounter *)0x0)) {
                  TeamsCounter::TeamsCounter_Update
                            (pTVar1,team,actorNumber,(int32_t)pOVar5,(bool)counterType,
                             (MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  uVar8 = func_?(&TypeInfo__System__Exception);
  this_02 = (Exception *)func_?(uVar8);
  pMVar2 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Team_Server_is_reserved_by_serve);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_02,message,pMVar2);
  uVar8 = func_?(&
                          MethodInfo__GameStatCounterManager__Validate_int__MV__WorldObject__MVTeam_
                         );
  func_?(this_02,uVar8);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__Add_MV__WorldObject__MVTeam_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__Contains_MV__WorldObject__MVTeam_
                   );
    cRam_? = '\x01';
  }
  if (e != (TeamEventArgs *)0x0) {
    this_00 = (HashSet_1_System_UInt32_ *)(this->fields).activeTeams;
    if (this_00 != (HashSet_1_System_UInt32_ *)0x0) {
      bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
              HashSet_1_System_UInt32__Contains
                        (this_00,(e->fields).team,
                         MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__Contains_MV__WorldObject__MVTeam_
                        );
      if (bVar1 != 0) goto code_?;
      this_01 = (HashSet_1_System_Int32Enum_ *)(this->fields).activeTeams;
      if (this_01 != (HashSet_1_System_Int32Enum_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
        HashSet_1_System_Int32Enum__System_Collections_Generic_ICollection_T__Add
                  (this_01,(e->fields).team,
                   MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__Add_MV__WorldObject__MVTeam_
                  );
        return;
      }
    }
  }
  func_?();
code_?:
  uVar2 = func_?(&TypeInfo__System__Exception);
  this_02 = (Exception *)func_?(uVar2);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Team_already_added);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_02,message,method_00);
  func_?(&
                  MethodInfo__GameStatCounterManager__OnTeamAdded_System__Object__MV__WorldObject__TeamEventArgs_
                 );
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnTeamRemoved(Object, TeamEventArgs) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_OnTeamRemoved
               (GameStatCounterManager *this,Object *sender,TeamEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__Contains_MV__WorldObject__MVTeam_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__Remove_MV__WorldObject__MVTeam_
                   );
    cRam_? = '\x01';
  }
  if (e != (TeamEventArgs *)0x0) {
    pHVar1 = (HashSet_1_System_UInt32_ *)(this->fields).activeTeams;
    if (pHVar1 != (HashSet_1_System_UInt32_ *)0x0) {
      bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
              HashSet_1_System_UInt32__Contains
                        (pHVar1,(e->fields).team,
                         MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__Contains_MV__WorldObject__MVTeam_
                        );
      if (bVar2 == 0) goto code_?;
      pHVar1 = (HashSet_1_System_UInt32_ *)(this->fields).activeTeams;
      if (pHVar1 != (HashSet_1_System_UInt32_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
        HashSet_1_System_UInt32__Remove
                  (pHVar1,(e->fields).team,
                   MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__Remove_MV__WorldObject__MVTeam_
                  );
        return;
      }
    }
  }
  func_?();
code_?:
  uVar3 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar3);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Team_does_not_exists);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,method_00);
  func_?(&
                  MethodInfo__GameStatCounterManager__OnTeamRemoved_System__Object__MV__WorldObject__TeamEventArgs_
                 );
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RemoveActorHighScoreFromTeam(Int32, MVTeam, GameStatCounterType) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_RemoveActorHighScoreFromTeam
               (GameStatCounterManager *this,int32_t newBestScore,MVTeam__Enum team,
               GameStatCounterType__Enum statType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).statTypeCounters;
  if (newBestScore < 1) {
    if ((pDVar1 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) &&
       (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,statType,
                            MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                           ), pOVar2 != (Object *)0x0)) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Remove_MV__WorldObject__MVTeam_
                       );
        cRam_? = '\x01';
      }
      if (pOVar2[1].klass != (Object__Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__Remove
                  ((Dictionary_2_System_Int32Enum_System_Object_ *)pOVar2[1].klass,team,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Remove_MV__WorldObject__MVTeam_
                  );
        pDVar1 = (this->fields).persistentStats;
        if (pDVar1 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
          bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Single]::Dictionary_2_System_ByteEnum_System_Single__ContainsKey
                            ((Dictionary_2_System_ByteEnum_System_Single_ *)pDVar1,statType,
                             MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                            );
          if (bVar3 == 0) {
            return;
          }
          pDVar1 = (this->fields).persistentStats;
          if ((pDVar1 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) &&
             (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       ByteEnum,System::Object]::
                       Dictionary_2_System_ByteEnum_System_Object__get_Item
                                 ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,statType,
                                  MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                                 ), pOVar2 != (Object *)0x0)) {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if (pOVar2[1].klass != (Object__Class *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__Remove
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)pOVar2[1].klass,team,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Remove_MV__WorldObject__MVTeam_
                        );
              return;
            }
          }
        }
      }
    }
  }
  else if ((pDVar1 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) &&
          (pTVar4 = (TeamsCounter *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                              ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,statType,
                               MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                              ), pTVar4 != (TeamsCounter *)0x0)) {
    TeamsCounter::TeamsCounter_UpdateTeam(pTVar4,team,newBestScore,(MethodInfo *)0x0);
    pDVar1 = (this->fields).persistentStats;
    if (pDVar1 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
              Single]::Dictionary_2_System_ByteEnum_System_Single__ContainsKey
                        ((Dictionary_2_System_ByteEnum_System_Single_ *)pDVar1,statType,
                         MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                        );
      if (bVar3 == 0) {
        return;
      }
      pDVar1 = (this->fields).persistentStats;
      if ((pDVar1 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) &&
         (pTVar4 = (TeamsCounter *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,statType,
                              MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                             ), pTVar4 != (TeamsCounter *)0x0)) {
        TeamsCounter::TeamsCounter_UpdateTeam
                  (pTVar4,(MVTeam__Enum)pDVar1,newBestScore,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RemoveStatsFromActor(Int32) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_RemoveStatsFromActor
               (GameStatCounterManager *this,int32_t actorNumber,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<GameStatCounterType,_TeamsCounter>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pDVar6 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).statTypeCounters;
  if (pDVar6 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_8,pDVar6,
                        MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__GetEnumerator__
                       );
    uStack_9 = 0;
    DStack_10._dictionary = (Dictionary_2_System_ByteEnum_System_Object_ *)pDVar7->_dictionary;
    DStack_10._version = pDVar7->_version;
    DStack_10._index = pDVar7->_index;
    DStack_10._current._0_4_ = (pDVar7->_current).key;
    DStack_10._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
    uStack_1 = 1;
    pDStack_11 = &DStack_10;
    while( true ) {
      bVar12 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                        (&DStack_10,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__MoveNext__
                        );
      if (bVar12 == 0) break;
      if ((TeamsCounter *)DStack_10._current.value == (TeamsCounter *)0x0) goto code_?;
      TeamsCounter::TeamsCounter_RemoveStatsFromActor
                ((TeamsCounter *)DStack_10._current.value,actorNumber,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&DStack_10,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__Dispose__
               ,in_stack_13);
    uStack_1 = 0xffffffff;
    pDVar6 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).persistentStats;
    if (pDVar6 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         (&DStack_8,pDVar6,
                          MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__GetEnumerator__
                         );
      uStack_9 = 0;
      DStack_10._dictionary = (Dictionary_2_System_ByteEnum_System_Object_ *)pDVar7->_dictionary;
      DStack_10._version = pDVar7->_version;
      DStack_10._index = pDVar7->_index;
      DStack_10._current._0_4_ = (pDVar7->_current).key;
      DStack_10._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
      uStack_1 = 4;
      pDStack_11 = &DStack_10;
      while( true ) {
        bVar12 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                          (&DStack_10,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__MoveNext__
                          );
        if (bVar12 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&DStack_10,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__Dispose__
                     ,unaff_EDI);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if ((TeamsCounter *)DStack_10._current.value == (TeamsCounter *)0x0) break;
        TeamsCounter::TeamsCounter_RemoveStatsFromActor
                  ((TeamsCounter *)DStack_10._current.value,actorNumber,(MethodInfo *)0x0);
      }
    }
  }
code_?:
  uVar14 = func_?();
  func_?(uVar14);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void RemoveTeamScoreOnActorLeave(Int32, MVTeam) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_RemoveTeamScoreOnActorLeave
               (GameStatCounterManager *this,int32_t actorNr,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameStatCounterType>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameStatCounterType>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = this;
  index = 0;
  pLVar1 = (this->fields).statsToRemoveOnActorLeave;
  MVar2 = team;
  while (pLVar1 != (List_1_GameStatCounterType_ *)0x0) {
    if ((pLVar1->fields)._size <= index) {
      return;
    }
    pLVar1 = (this_00->fields).statsToRemoveOnActorLeave;
    if (pLVar1 == (List_1_GameStatCounterType_ *)0x0) break;
    iVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
            List_1_System_SByte__get_Item
                      ((List_1_System_SByte_ *)pLVar1,index,
                       MethodInfo__System__Collections__Generic__List<GameStatCounterType>__get_Item_int_
                      );
    key = CONCAT31((int3)(in_ECX >> 8),iVar3);
    in_ECX = key;
    this = (GameStatCounterManager *)
           GameStatCounterManager_GetTeamCount(this_00,key,MVar2,(MethodInfo *)0x0);
    MVar2 = team;
    if (0 < (int)this) {
      this = (GameStatCounterManager *)0x0;
      in_ECX = key;
      pGVar4 = (GameStatCounterManager *)
               GameStatCounterManager_GetActorCount(this_00,key,team,actorNr,(MethodInfo *)0x0);
      MVar2 = team;
      if (pGVar4 == this) {
        pMVar5 = (MethodInfo *)(this_00->fields).statTypeCounters;
        this = (GameStatCounterManager *)0x0;
        if (pMVar5 == (MethodInfo *)0x0) break;
        team = (MVTeam__Enum)&UNK_?;
        method = pMVar5;
        pMVar5 = (MethodInfo *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pMVar5,key,
                            MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                           );
        MVar2 = team;
        if (pMVar5 == (MethodInfo *)0x0) break;
        team = (MVTeam__Enum)&UNK_?;
        method = pMVar5;
        TeamsCounter::TeamsCounter_GetActorWithBestScore
                  ((TeamsCounter *)pMVar5,(int32_t *)&this,MVar2,key,actorNr,(MethodInfo *)0x0);
        MVar2 = team;
        method = (MethodInfo *)&UNK_?;
        GameStatCounterManager_RemoveActorHighScoreFromTeam
                  (this_00,(int32_t)this,team,key,(MethodInfo *)0x0);
      }
    }
    index = index + 1;
    pLVar1 = (this_00->fields).statsToRemoveOnActorLeave;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SendChangeEvent(Int32, GameStatCounterType, Int32, MVTeam, Int32) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SendChangeEvent
               (GameStatCounterManager *this,int32_t count,GameStatCounterType__Enum counterType,
               int32_t actorNumber,MVTeam__Enum team,int32_t otherID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__OnCounterTypeChangedArgs);
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields).OnCounterTypeChanged;
  if (pEVar1 != (EventHandler_1_OnCounterTypeChangedArgs_ *)0x0) {
    this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
              func_?(TypeInfo__OnCounterTypeChangedArgs);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__EventArgs);
      cRam_? = '\x01';
    }
    this_00[2].klass = (UxmlObjectListAttributeDescription_1_System_Object___Class *)0xffffffff;
    if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__EventArgs);
    }
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
    (this_00->fields)._._defaultValue_k__BackingField = (List_1_System_Object_ *)count;
    *(undefined1 *)&this_00[1].klass = (undefined1)counterType;
    this_00[1].monitor = (MonitorData *)actorNumber;
    this_00[1].fields._._defaultValue_k__BackingField = (List_1_System_Object_ *)team;
    this_00[2].klass = (UxmlObjectListAttributeDescription_1_System_Object___Class *)otherID;
    (*(pEVar1->fields)._._.invoke_impl)
              ((pEVar1->fields)._._.method_code,this,this_00,(pEVar1->fields)._._.method);
  }
  return;
}


/* Void SetStat(Byte[]) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStat
               (GameStatCounterManager *this,Byte__Array *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__BytePacker);
    cRam_? = '\x01';
  }
  bp = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<unsigned_char>__List_System__Collections__Generic__IEnumerable<unsigned_char>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<unsigned_char>);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)bp,ExceptionArgument__Enum_obj,unaff_EDI);
  if (data != (Byte__Array *)0x0) {
    this_00 = (List_1_System_Byte_ *)
              func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
    mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::List_1_System_Byte___ctor_1
              (this_00,(IEnumerable_1_System_Byte_ *)data,
               MethodInfo__System__Collections__Generic__List<unsigned_char>__List_System__Collections__Generic__IEnumerable<unsigned_char>_
              );
    (bp->fields)._buffer = this_00;
    func_?(&bp->fields,this_00);
    GameStatCounterManager_SetStat_1(this,bp,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
  this_01 = (ArgumentNullException *)func_?(uVar1);
  message = (String *)func_?(&StringLiteral_The_buffer_cannot_be_null_);
  paramName = (String *)func_?(&StringLiteral_buffer);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_2
            (this_01,paramName,message,(MethodInfo *)0x0);
  func_?(&MethodInfo__MV__WorldObject__BytePacker__BytePacker_System__Byte____);
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetStat(BytePacker) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStat_1
               (GameStatCounterManager *this,BytePacker *bp,MethodInfo *method)

{
  bp_00 = bp;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Add_GameStatCounterType__TeamsCounter_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Remove_GameStatCounterType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Contains_GameStatCounterType_
                   );
    func_?(&TypeInfo__TeamsCounter);
    cRam_? = '\x01';
  }
  if (bp != (BytePacker *)0x0) {
    uVar1 = MV::WorldObject::BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
    bp = (BytePacker *)CONCAT31(bp._1_3_,uVar1);
    this_01 = (TeamsCounter *)func_?(TypeInfo__TeamsCounter);
    TeamsCounter::TeamsCounter__ctor_2(this_01,bp_00,(MethodInfo *)0x0);
    pDVar2 = (this->fields).statTypeCounters;
    if (pDVar2 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
              Single]::Dictionary_2_System_ByteEnum_System_Single__ContainsKey
                        ((Dictionary_2_System_ByteEnum_System_Single_ *)pDVar2,(ByteEnum__Enum)bp,
                         MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                        );
      if (bVar3 != 0) {
        pDVar2 = (this->fields).statTypeCounters;
        if (pDVar2 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
        Dictionary_2_System_ByteEnum_System_Object__Remove
                  ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,(ByteEnum__Enum)bp,
                   MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Remove_GameStatCounterType_
                  );
      }
      pDVar2 = (this->fields).statTypeCounters;
      if (pDVar2 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
        Dictionary_2_System_ByteEnum_System_Object__Add
                  ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,(ByteEnum__Enum)bp,
                   (Object *)this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Add_GameStatCounterType__TeamsCounter_
                  );
        this_00 = (List_1_System_ByteEnum_ *)(this->fields).sessionPersistentStats;
        if (this_00 != (List_1_System_ByteEnum_ *)0x0) {
          bVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
                  List_1_System_ByteEnum__Contains
                            (this_00,(ByteEnum__Enum)bp,
                             MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Contains_GameStatCounterType_
                            );
          if (bVar3 == 0) {
            return;
          }
          pDVar2 = (this->fields).persistentStats;
          if (pDVar2 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
            bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Single]::Dictionary_2_System_ByteEnum_System_Single__ContainsKey
                              ((Dictionary_2_System_ByteEnum_System_Single_ *)pDVar2,
                               (ByteEnum__Enum)bp,
                               MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                              );
            if (bVar3 != 0) {
              pDVar2 = (this->fields).persistentStats;
              if (pDVar2 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0)
              goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
              Object]::Dictionary_2_System_ByteEnum_System_Object__Remove
                        ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,(ByteEnum__Enum)bp,
                         MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Remove_GameStatCounterType_
                        );
            }
            pDVar2 = (this->fields).persistentStats;
            if (pDVar2 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
              Object]::Dictionary_2_System_ByteEnum_System_Object__Add
                        ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,(ByteEnum__Enum)bp,
                         (Object *)this_01,
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
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetStats(Byte[]) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStats
               (GameStatCounterManager *this,Byte__Array *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__BytePacker);
    cRam_? = '\x01';
  }
  this_00 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<unsigned_char>__List_System__Collections__Generic__IEnumerable<unsigned_char>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<unsigned_char>);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this_00,ExceptionArgument__Enum_obj,unaff_EDI);
  if (data == (Byte__Array *)0x0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
    this_02 = (ArgumentNullException *)func_?(uVar1);
    message = (String *)func_?(&StringLiteral_The_buffer_cannot_be_null_);
    paramName = (String *)func_?(&StringLiteral_buffer);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_2
              (this_02,paramName,message,(MethodInfo *)0x0);
    func_?(&MethodInfo__MV__WorldObject__BytePacker__BytePacker_System__Byte____);
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_01 = (List_1_System_Byte_ *)
            func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::List_1_System_Byte___ctor_1
            (this_01,(IEnumerable_1_System_Byte_ *)data,
             MethodInfo__System__Collections__Generic__List<unsigned_char>__List_System__Collections__Generic__IEnumerable<unsigned_char>_
            );
  (this_00->fields)._buffer = this_01;
  func_?(&this_00->fields,this_01);
  iVar3 = MV::WorldObject::BytePacker::BytePacker_ReadInt32(this_00,(MethodInfo *)0x0);
  if (0 < iVar3) {
    do {
      GameStatCounterManager_SetStat_1(this,this_00,(MethodInfo *)0x0);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}


/* String ToString() */

String * MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_ToString
                   (GameStatCounterManager *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff80;
  puVar5 = &stack0xffffff80;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::MVTeam>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::MVTeam>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__get_Current__
                   );
    func_?(&TypeInfo__GameStatCounterType);
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<GameStatCounterType,_TeamsCounter>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<GameStatCounterType,_TeamsCounter>__get_Value__
                   );
    func_?(&TypeInfo__MV__WorldObject__MVTeam);
    func_?(&StringLiteral__0_u000A);
    func_?(&StringLiteral_CounterType___0___Stats___1_);
    func_?(&StringLiteral_Active_teams__u000A);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pSVar6 = StringLiteral_Active_teams__u000A;
  pSStack_7 = StringLiteral_Active_teams__u000A;
  pMVar8 = (MethodInfo *)(this->fields).activeTeams;
  if (pMVar8 != (MethodInfo *)0x0) {
    pHVar9 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
             HashSet_1_System_UInt32__GetEnumerator
                       ((HashSet_1_T_Enumerator_System_UInt32_ *)(auStack_10 + 8),
                        (HashSet_1_System_UInt32_ *)pMVar8,
                        MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__GetEnumerator__
                       );
    uStack_11 = 0;
    HStack_12._set = pHVar9->_set;
    HStack_12._index = pHVar9->_index;
    HStack_12._version = pHVar9->_version;
    HStack_12._current = pHVar9->_current;
    uStack_1 = 1;
    pHStack_13 = &HStack_12;
    while( true ) {
      bVar14 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::UInt32]
              ::HashSet_1_T_Enumerator_System_UInt32__MoveNext
                        (&HStack_12,
                         MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
                        );
      if (bVar14 == 0) break;
      uStack_15 = HStack_12._current;
      pOVar16 = (Object *)func_?(TypeInfo__MV__WorldObject__MVTeam,&uStack_15);
      pSVar17 = mscorlib.dll::System::String::String_Format
                         (StringLiteral__0_u000A,pOVar16,(MethodInfo *)0x0);
      pSVar6 = mscorlib.dll::System::String::String_Concat_3(pSVar6,pSVar17,(MethodInfo *)0x0);
      pSStack_7 = pSVar6;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&HStack_12,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::MVTeam>__Dispose__
               ,pMVar8);
    uStack_1 = 0xffffffff;
    this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).statTypeCounters;
    if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      pDVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                          auStack_10,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__GetEnumerator__
                         );
      uStack_19 = 0;
      pMVar8 = (MethodInfo *)pDVar18->_index;
      uVar20 = *(undefined8 *)&(pDVar18->_current).value;
      uStack_1 = 4;
      pOStack_21 = (Object *)&stack0xffffff8c;
      while( true ) {
        bVar14 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object_ *)
                           &stack0xffffff8c,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__MoveNext__
                          );
        if (bVar14 == 0) break;
        pHStack_22 = (HashSet_1_T_Enumerator_System_UInt32_ *)uVar20;
        pHStack_13 = pHStack_22;
        pOVar16 = (Object *)func_?();
        pSVar17 = mscorlib.dll::System::String::String_Format_1
                           (StringLiteral_CounterType___0___Stats___1_,pOVar16,(Object *)pHStack_13,
                            (MethodInfo *)0x0);
        pSVar6 = mscorlib.dll::System::String::String_Concat_3(pSVar6,pSVar17,(MethodInfo *)0x0);
        pSStack_7 = pSVar6;
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&stack0xffffff8c,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__Dispose__
                 ,pMVar8);
      *unaff_FS_OFFSET = uStack_3;
      return pSVar6;
    }
  }
  uVar23 = func_?();
  uVar23 = func_?(uVar23);
  func_?(uVar23);
  pcVar24 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar24)();
  return pSVar6;
}


/* Void Update(GameStatCounterType, Int32, MVTeam, Int32, Int32, Boolean) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Update
               (GameStatCounterManager *this,GameStatCounterType__Enum counterType,
               int32_t actorNumber,MVTeam__Enum team,int32_t value,int32_t otherID,
               bool includeTeamScore,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Contains_GameStatCounterType_
                   );
    cRam_? = '\x01';
  }
  if ((team == MVTeam__Enum_Server) && (actorNumber != 0)) goto code_?;
  GameStatCounterManager_AddIfNotPresent(this,counterType,(MethodInfo *)0x0);
  pLVar1 = (List_1_System_ByteEnum_ *)(this->fields).roundEndingStats;
  if (pLVar1 != (List_1_System_ByteEnum_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
            List_1_System_ByteEnum__Contains
                      (pLVar1,counterType,
                       MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Contains_GameStatCounterType_
                      );
    if (bVar2 != 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)(this->fields).statTypeCounters;
      if (this_00 ==
          (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::StyleSheets
      ::StyleSheetCache+SheetHandleKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Clear__
                );
      GameStatCounterManager_AddIfNotPresent(this,counterType,(MethodInfo *)0x0);
    }
    pLVar1 = (List_1_System_ByteEnum_ *)(this->fields).sessionPersistentStats;
    if (pLVar1 != (List_1_System_ByteEnum_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
              List_1_System_ByteEnum__Contains
                        (pLVar1,counterType,
                         MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Contains_GameStatCounterType_
                        );
      if (bVar2 == 0) goto code_?;
      pDVar3 = (this->fields).persistentStats;
      if (pDVar3 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
        pTVar4 = (TeamsCounter *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar3,counterType,
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
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       ByteEnum,System::Object]::
                       Dictionary_2_System_ByteEnum_System_Object__get_Item
                                 ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar3,counterType,
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
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       ByteEnum,System::Object]::
                       Dictionary_2_System_ByteEnum_System_Object__get_Item
                                 ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar3,counterType,
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
  func_?();
code_?:
  uVar5 = func_?(&TypeInfo__System__Exception);
  this_01 = (Exception *)func_?(uVar5);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Team_Server_is_reserved_by_serve);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,method_00);
  uVar5 = func_?(&
                          MethodInfo__GameStatCounterManager__Validate_int__MV__WorldObject__MVTeam_
                         );
  func_?(this_01,uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Validate(Int32, MVTeam) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Validate
               (GameStatCounterManager *this,int32_t actorNumber,MVTeam__Enum team,
               MethodInfo *method)

{
  if ((team == MVTeam__Enum_Server) && (actorNumber != 0)) {
    uVar1 = func_?(&TypeInfo__System__Exception);
    this_00 = (Exception *)func_?(uVar1);
    method_00 = (MethodInfo *)0x0;
    message = (String *)func_?(&StringLiteral_Team_Server_is_reserved_by_serve);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,method_00);
    func_?(&MethodInfo__GameStatCounterManager__Validate_int__MV__WorldObject__MVTeam_);
    func_?(this_00);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}


/* GameStatCounterManager() */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager__ctor
               (GameStatCounterManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__HashSet__
                   );
    func_?(&TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Add_GameStatCounterType_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<GameStatCounterType>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<GameStatCounterType>);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_GameStatCounterType_ *)
           func_?(TypeInfo__System__Collections__Generic__List<GameStatCounterType>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<GameStatCounterType>__List__);
  pMVar2 = 
  MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Add_GameStatCounterType_;
  if (pLVar1 != (List_1_GameStatCounterType_ *)0x0) {
    piVar3 = &(pLVar1->fields)._version;
    *piVar3 = *piVar3 + 1;
    pGVar4 = (pLVar1->fields)._items;
    if (pGVar4 != (GameStatCounterType__Enum__Array *)0x0) {
      uVar5 = (pLVar1->fields)._size;
      if (uVar5 < pGVar4->max_length) {
        (pLVar1->fields)._size = uVar5 + 1;
        if (pGVar4->max_length <= uVar5) goto code_?;
        *(int8_t *)((int)pGVar4->vector + uVar5) = 2;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
        List_1_System_SByte__AddWithResize
                  ((List_1_System_SByte_ *)pLVar1,2,pMVar2->klass->rgctx_data[0xe].method);
      }
      (this->fields).roundEndingStats = pLVar1;
      func_?();
      pLVar1 = (List_1_GameStatCounterType_ *)
               func_?(TypeInfo__System__Collections__Generic__List<GameStatCounterType>);
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
                 MethodInfo__System__Collections__Generic__List<GameStatCounterType>__List__);
      pMVar2 = 
      MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Add_GameStatCounterType_;
      if (pLVar1 != (List_1_GameStatCounterType_ *)0x0) {
        piVar3 = &(pLVar1->fields)._version;
        *piVar3 = *piVar3 + 1;
        pGVar4 = (pLVar1->fields)._items;
        if (pGVar4 != (GameStatCounterType__Enum__Array *)0x0) {
          uVar5 = (pLVar1->fields)._size;
          if (uVar5 < pGVar4->max_length) {
            (pLVar1->fields)._size = uVar5 + 1;
            if (pGVar4->max_length <= uVar5) goto code_?;
            *(int8_t *)((int)pGVar4->vector + uVar5) = 2;
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
            List_1_System_SByte__AddWithResize
                      ((List_1_System_SByte_ *)pLVar1,2,pMVar2->klass->rgctx_data[0xe].method);
          }
          ppLVar6 = &(this->fields).sessionPersistentStats;
          *ppLVar6 = pLVar1;
          func_?(ppLVar6,pLVar1);
          pLVar1 = (List_1_GameStatCounterType_ *)
                   func_?(TypeInfo__System__Collections__Generic__List<GameStatCounterType>
                                  );
          mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
          __Il2CppFullySharedGenericType]::
          LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                    ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
                     MethodInfo__System__Collections__Generic__List<GameStatCounterType>__List__);
          pMVar2 = 
          MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Add_GameStatCounterType_
          ;
          if (pLVar1 != (List_1_GameStatCounterType_ *)0x0) {
            piVar3 = &(pLVar1->fields)._version;
            *piVar3 = *piVar3 + 1;
            pGVar4 = (pLVar1->fields)._items;
            if (pGVar4 != (GameStatCounterType__Enum__Array *)0x0) {
              uVar5 = (pLVar1->fields)._size;
              if (uVar5 < pGVar4->max_length) {
                (pLVar1->fields)._size = uVar5 + 1;
                if (pGVar4->max_length <= uVar5) goto code_?;
                *(int8_t *)((int)pGVar4->vector + uVar5) = 2;
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
                List_1_System_SByte__AddWithResize
                          ((List_1_System_SByte_ *)pLVar1,2,pMVar2->klass->rgctx_data[0xe].method);
              }
              pMVar2 = 
              MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Add_GameStatCounterType_
              ;
              piVar3 = &(pLVar1->fields)._version;
              *piVar3 = *piVar3 + 1;
              pGVar4 = (pLVar1->fields)._items;
              if (pGVar4 != (GameStatCounterType__Enum__Array *)0x0) {
                uVar5 = (pLVar1->fields)._size;
                if (pGVar4->max_length <= uVar5) {
                  mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
                  List_1_System_SByte__AddWithResize
                            ((List_1_System_SByte_ *)pLVar1,8,pMVar2->klass->rgctx_data[0xe].method
                            );
code_?:
                  ppLVar6 = &(this->fields).statsToRemoveOnActorLeave;
                  *ppLVar6 = pLVar1;
                  func_?(ppLVar6,pLVar1);
                  this_00 = (HashSet_1_System_Int32Enum_ *)
                            func_?(
                                           TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>
                                           );
                  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                  HashSet_1_System_Int32Enum___ctor
                            (this_00,
                             MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__HashSet__
                            );
                  ppHVar7 = &(this->fields).activeTeams;
                  *ppHVar7 = (HashSet_1_MV_WorldObject_MVTeam_ *)this_00;
                  func_?(ppHVar7,this_00);
                  pDVar8 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                            *)func_?(
                                             TypeInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>
                                             );
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::
                  WorldObject::RuntimeEvents::ExplosionEvent+ExplosionValues]::
                  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
                            (pDVar8,
                             MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Dictionary__
                            );
                  pMVar2 = (MethodInfo *)&(this->fields).statTypeCounters;
                  *(Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                    **)pMVar2 = pDVar8;
                  func_?(pMVar2,pDVar8);
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                            ((Object *)this,ExceptionArgument__Enum_obj,pMVar2);
                  ppDVar9 = &(this->fields).persistentStats;
                  if (*ppDVar9 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
                    pDStack10 =
                         TypeInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>
                    ;
                    pDVar8 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                              *)func_?();
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::
                    WorldObject::RuntimeEvents::ExplosionEvent+ExplosionValues]::
                    Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
                              (pDVar8,
                               MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Dictionary__
                              );
                    *ppDVar9 = (Dictionary_2_GameStatCounterType_TeamsCounter_ *)pDVar8;
                    func_?();
                  }
                  return;
                }
                (pLVar1->fields)._size = uVar5 + 1;
                if (uVar5 < pGVar4->max_length) {
                  *(int8_t *)((int)pGVar4->vector + uVar5) = 8;
                  goto code_?;
                }
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void add_OnCounterTypeChanged(EventHandler`1[OnCounterTypeChangedArgs]) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_add_OnCounterTypeChanged
               (GameStatCounterManager *this,EventHandler_1_OnCounterTypeChangedArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnCounterTypeChanged;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
      if (iVar4 == 0) {
        func_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pEVar6 = (EventHandler_1_OnCounterTypeChangedArgs_ *)func_?(ppEVar1,iVar4,a);
    bVar7 = pEVar6 != a;
    a = pEVar6;
  } while (bVar7);
  return;
}


/* HashSet`1[MV.WorldObject.MVTeam] get_ActiveTeams() */

HashSet_1_MV_WorldObject_MVTeam_ *
MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
          (GameStatCounterManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__HashSet_System__Collections__Generic__IEnumerable<MV::WorldObject::MVTeam>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>);
    cRam_? = '\x01';
  }
  collection = (this->fields).activeTeams;
  this_00 = (HashSet_1_System_Int32Enum_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
  HashSet_1_System_Int32Enum___ctor_1
            (this_00,(IEnumerable_1_System_Int32Enum_ *)collection,
             MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__HashSet_System__Collections__Generic__IEnumerable<MV::WorldObject::MVTeam>_
            );
  return (HashSet_1_MV_WorldObject_MVTeam_ *)this_00;
}


/* Void remove_OnCounterTypeChanged(EventHandler`1[OnCounterTypeChangedArgs]) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_remove_OnCounterTypeChanged
               (GameStatCounterManager *this,EventHandler_1_OnCounterTypeChangedArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnCounterTypeChanged;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
      if (iVar4 == 0) {
        func_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pEVar6 = (EventHandler_1_OnCounterTypeChangedArgs_ *)func_?(ppEVar1,iVar4,source);
    bVar7 = pEVar6 != source;
    source = pEVar6;
  } while (bVar7);
  return;
}

