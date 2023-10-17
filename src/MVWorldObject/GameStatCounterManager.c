
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
  pDVar1 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).statTypeCounters
  ;
  if (pDVar1 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (pDVar1,(Object *)statType,
                       MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                      );
    if (bVar2 == 0) {
      pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).statTypeCounters;
      pTVar4 = (TeamsCounter *)func_?(TypeInfo__TeamsCounter);
      if ((pTVar4 == (TeamsCounter *)0x0) ||
         (TeamsCounter::TeamsCounter__ctor(pTVar4,(MethodInfo *)0x0),
         pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0)) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDVar3,(Object *)statType,(Object *)pTVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Add_GameStatCounterType__TeamsCounter_
                );
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).sessionPersistentStats;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Contains
                        (this_00,(RegexCharClass_SingleRange)statType,
                         MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Contains_GameStatCounterType_
                        );
      if (bVar2 == 0) {
        return;
      }
      pDVar1 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
               (this->fields).persistentStats;
      if (pDVar1 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          (pDVar1,(Object *)statType,
                           MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                          );
        if (bVar2 != 0) {
          return;
        }
        pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).persistentStats;
        pTVar4 = (TeamsCounter *)func_?();
        if ((pTVar4 != (TeamsCounter *)0x0) &&
           (TeamsCounter::TeamsCounter__ctor(pTVar4,(MethodInfo *)0x0),
           pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (pDVar3,(Object *)statType,(Object *)pTVar4,
                     MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Add_GameStatCounterType__TeamsCounter_
                    );
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  auStack_6._0_4_ = (Object__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = 0;
  pOStack_7 = (Object *)0x0;
  uStack_8._0_4_ = (TeamsCounter *)0x0;
  uStack_8._4_4_ = 0;
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).persistentStats;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                        &stack0xffffffa4,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__GetEnumerator__
                       );
    uStack_10 = 0;
    auStack_6._0_4_ = pDVar9->_dictionary;
    auStack_6._4_4_ = pDVar9->_version;
    auStack_6._8_4_ = pDVar9->_index;
    pOStack_7 = (pDVar9->_current).key;
    uStack_8 = *(undefined8 *)&(pDVar9->_current).value;
    uStack_1 = 1;
    pOStack_11 = (Object *)auStack_6;
    while( true ) {
      bVar12 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object_ *)
                         auStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__MoveNext__
                        );
      if (bVar12 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)auStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__Dispose__
                   ,in_stack_13);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pOStack_14 = pOStack_7;
      pTStack_15 = (TeamsCounter *)uStack_8;
      pDStack_16 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).statTypeCounters;
      this_01 = (TeamsCounter *)func_?();
      if (this_01 == (TeamsCounter *)0x0) break;
      TeamsCounter::TeamsCounter__ctor_1(this_01,pTStack_15,(MethodInfo *)0x0);
      if (pDStack_16 == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDStack_16,pOStack_14,(Object *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Add_GameStatCounterType__TeamsCounter_
                );
    }
  }
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
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
  this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            (this->fields).statTypeCounters;
  if (this_00 !=
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
    Regex+CachedCodeEntryKey,System::Object]::
    Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Clear
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
  this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            (this->fields).statTypeCounters;
  if (this_00 !=
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
    Regex+CachedCodeEntryKey,System::Object]::
    Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Clear
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


/* Boolean ContainsStatTypeForActor(GameStatCounterType, MVTeam, Int32) */

bool MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_ContainsStatTypeForActor
               (GameStatCounterManager *this,GameStatCounterType__Enum statType,MVTeam__Enum team,
               int32_t actorNr,MethodInfo *method)

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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
            (this->fields).statTypeCounters;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)statType,
                       MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                      );
    if (bVar1 == 0) {
      return 0;
    }
    this_01 = (this->fields).statTypeCounters;
    if ((this_01 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) &&
       (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,statType,
                            MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                           ), pOVar2 != (Object *)0x0)) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      if (pOVar2[1].klass != (Object__Class *)0x0) {
        bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)pOVar2[1].klass
                           ,(Object *)team,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__ContainsKey_MV__WorldObject__MVTeam_
                          );
        if (bVar1 == 0) {
          return 0;
        }
        if ((pOVar2[1].klass != (Object__Class *)0x0) &&
           (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)pOVar2[1].klass,team
                                ,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                               ), pOVar2 != (Object *)0x0)) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (pOVar2[1].klass != (Object__Class *)0x0) {
            bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,GUILoginHandler+PlanetData]::
                    Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                              ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                               pOVar2[1].klass,(Object *)team,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__ContainsKey_int_
                              );
            return bVar1;
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
            (this->fields).statTypeCounters;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)counterType,
                       MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                      );
    if (bVar1 == 0) {
      return 0;
    }
    this_01 = (this->fields).statTypeCounters;
    if (this_01 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
      this_02 = (TeamsCounter *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                          ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,counterType,
                           MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                          );
      if (this_02 != (TeamsCounter *)0x0) {
        iVar2 = TeamsCounter::TeamsCounter_GetActorCount
                          (this_02,MVTeam__Enum_Blue,actorNumber,(MethodInfo *)0x0);
        return iVar2;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  iVar2 = (*pcVar3)();
  return iVar2;
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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
            (this->fields).statTypeCounters;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)statType,
                       MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                      );
    if (bVar1 == 0) {
      pHVar2 = (HighScores *)func_?(TypeInfo__HighScores);
      if (pHVar2 != (HighScores *)0x0) {
        HighScores::HighScores__ctor
                  (pHVar2,statType,(Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0,
                   presentAsTeamScore,winningConditionPresentStyle,byAscending,(MethodInfo *)0x0);
        return pHVar2;
      }
    }
    else {
      this_01 = (this->fields).statTypeCounters;
      if (this_01 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
        pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,statType,
                            MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                           );
        if (pOVar3 != (Object *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          teamCounters = pOVar3[1].klass;
          pHVar2 = (HighScores *)func_?();
          if (pHVar2 != (HighScores *)0x0) {
            HighScores::HighScores__ctor
                      (pHVar2,statType,
                       (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)teamCounters,
                       presentAsTeamScore,winningConditionPresentStyle,byAscending,(MethodInfo *)0x0
                      );
            return pHVar2;
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pHVar2 = (HighScores *)(*pcVar4)();
  return pHVar2;
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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
            (this->fields).statTypeCounters;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)statType,
                       MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                      );
    if (bVar1 == 0) {
      return 0;
    }
    this_01 = (this->fields).statTypeCounters;
    if ((this_01 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) &&
       (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,statType,
                            MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                           ), pOVar2 != (Object *)0x0)) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      if (pOVar2[1].klass != (Object__Class *)0x0) {
        bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)pOVar2[1].klass
                           ,(Object *)team,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__ContainsKey_MV__WorldObject__MVTeam_
                          );
        if (bVar1 == 0) {
          return 0;
        }
        if ((pOVar2[1].klass != (Object__Class *)0x0) &&
           (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)pOVar2[1].klass,team
                                ,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                               ), pOVar2 != (Object *)0x0)) {
          return (int32_t)pOVar2[1].monitor;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
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
    pMVar2 = (MethodInfo *)(pTVar1->fields).teamCounters;
    if ((pMVar2 != (MethodInfo *)0x0) &&
       (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)pMVar2,team,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                           ), pOVar3 != (Object *)0x0)) {
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
        bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)pOVar3[1].klass
                           ,(Object *)actorNumber,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__ContainsKey_int_
                          );
        if (bVar4 == 0) {
          pOVar5 = pOVar3[1].klass;
          value_00 = (Object *)func_?();
          if (value_00 != (Object *)0x0) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      (value_00,ExceptionArgument__Enum_obj,pMVar2);
            value_00[1].klass = (Object__Class *)0x0;
            if (pOVar5 != (Object__Class *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)pOVar5,(Object *)actorNumber,
                         value_00,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Add_int__ActorCounter_
                        );
              goto code_?;
            }
          }
        }
        else {
code_?:
          if (includeTeamScore != 0) {
            pOVar3[1].monitor = pOVar3[1].monitor + value;
          }
          if ((pOVar3[1].klass != (Object__Class *)0x0) &&
             (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32Enum,System::Object]::
                       Dictionary_2_System_Int32Enum_System_Object__get_Item
                                 ((Dictionary_2_System_Int32Enum_System_Object_ *)pOVar3[1].klass,
                                  actorNumber,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__get_Item_int_
                                 ), pOVar3 != (Object *)0x0)) {
            pOVar5 = (Object__Class *)((int)&((pOVar3[1].klass)->_0).image + value);
            pOVar3[1].klass = pOVar5;
            GameStatCounterManager_SendChangeEvent
                      ((GameStatCounterManager *)0x0,(int32_t)pOVar5,counterType,actorNumber,team,
                       otherID,(MethodInfo *)0x0);
            if (pLRam0000000c !=
                (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
              bVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Contains
                                (pLRam0000000c,(RegexCharClass_SingleRange)counterType,
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
  func_?();
code_?:
  uVar8 = func_?(&TypeInfo__System__Exception);
  this_01 = (Exception *)func_?(uVar8);
  func_?(this_01);
  pMVar2 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Team_Server_is_reserved_by_serve);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,pMVar2);
  uVar8 = func_?(&
                          MethodInfo__GameStatCounterManager__Validate_int__MV__WorldObject__MVTeam_
                         );
  func_?(this_01,uVar8);
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
    this_00 = (HashSet_1_System_Int32Enum_ *)(this->fields).activeTeams;
    if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
      bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
              HashSet_1_System_Int32Enum__Contains
                        (this_00,(e->fields).team,
                         MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__Contains_MV__WorldObject__MVTeam_
                        );
      if (bVar1 != 0) goto code_?;
      this_01 = (HashSet_1_System_Object_ *)(this->fields).activeTeams;
      if (this_01 != (HashSet_1_System_Object_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
        HashSet_1_System_Object__Add
                  (this_01,(Object *)(e->fields).team,
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
  func_?(this_02);
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
    pHVar1 = (HashSet_1_System_Int32Enum_ *)(this->fields).activeTeams;
    if (pHVar1 != (HashSet_1_System_Int32Enum_ *)0x0) {
      bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
              HashSet_1_System_Int32Enum__Contains
                        (pHVar1,(e->fields).team,
                         MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__Contains_MV__WorldObject__MVTeam_
                        );
      if (bVar2 == 0) goto code_?;
      pHVar1 = (HashSet_1_System_Int32Enum_ *)(this->fields).activeTeams;
      if (pHVar1 != (HashSet_1_System_Int32Enum_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
        HashSet_1_System_Int32Enum__Remove
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
  func_?(this_00);
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
        pDVar3 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                 (this->fields).persistentStats;
        if (pDVar3 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
          bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,GUILoginHandler+PlanetData]::
                  Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                            (pDVar3,(Object *)statType,
                             MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                            );
          if (bVar4 == 0) {
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
          (pTVar5 = (TeamsCounter *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                              ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,statType,
                               MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                              ), pTVar5 != (TeamsCounter *)0x0)) {
    TeamsCounter::TeamsCounter_UpdateTeam(pTVar5,team,newBestScore,(MethodInfo *)0x0);
    pDVar3 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
             (this->fields).persistentStats;
    if (pDVar3 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (pDVar3,(Object *)statType,
                         MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                        );
      if (bVar4 == 0) {
        return;
      }
      pDVar1 = (this->fields).persistentStats;
      if ((pDVar1 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) &&
         (pTVar5 = (TeamsCounter *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,statType,
                              MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                             ), pTVar5 != (TeamsCounter *)0x0)) {
        TeamsCounter::TeamsCounter_UpdateTeam(pTVar5,team,newBestScore,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  puStack_4 = &stack0xffffff88;
  puVar5 = &stack0xffffff88;
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
  auStack_6._0_4_ = (Object__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = 0;
  pOStack_7 = (Object *)0x0;
  uStack_8._0_4_ = (TeamsCounter *)0x0;
  uStack_8._4_4_ = 0;
  pDVar9 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).statTypeCounters;
  uStack_10._0_4_ = (TeamsCounter *)0x0;
  uStack_10._4_4_ = 0;
  auStack_11._0_4_ = (Object__Class *)0x0;
  auStack_11._4_4_ = (MonitorData *)0x0;
  auStack_11._8_4_ = 0;
  pOStack_12 = (Object *)0x0;
  if (pDVar9 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       (&DStack_14,pDVar9,
                        MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__GetEnumerator__
                       );
    uStack_15 = 0;
    auStack_6._0_4_ = pDVar13->_dictionary;
    auStack_6._4_4_ = pDVar13->_version;
    auStack_6._8_4_ = pDVar13->_index;
    pOStack_7 = (pDVar13->_current).key;
    uStack_8 = *(undefined8 *)&(pDVar13->_current).value;
    uStack_1 = 1;
    pOStack_16 = (Object *)auStack_6;
    while( true ) {
      bVar17 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object_ *)
                         auStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__MoveNext__
                        );
      if (bVar17 == 0) break;
      if ((TeamsCounter *)uStack_8 == (TeamsCounter *)0x0) goto code_?;
      TeamsCounter::TeamsCounter_RemoveStatsFromActor
                ((TeamsCounter *)uStack_8,actorNumber,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)auStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__Dispose__
               ,in_stack_18);
    uStack_1 = 0xffffffff;
    pDVar9 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).persistentStats;
    if (pDVar9 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                         (&DStack_14,pDVar9,
                          MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__GetEnumerator__
                         );
      uStack_15 = 0;
      auStack_11._0_4_ = pDVar13->_dictionary;
      auStack_11._4_4_ = pDVar13->_version;
      auStack_11._8_4_ = pDVar13->_index;
      pOStack_12 = (pDVar13->_current).key;
      uStack_10 = *(undefined8 *)&(pDVar13->_current).value;
      uStack_1 = 4;
      pOStack_16 = (Object *)auStack_11;
      while( true ) {
        bVar17 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object_ *)
                           auStack_11,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__MoveNext__
                          );
        if (bVar17 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)auStack_11,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__Dispose__
                     ,unaff_EDI);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if ((TeamsCounter *)uStack_10 == (TeamsCounter *)0x0) break;
        TeamsCounter::TeamsCounter_RemoveStatsFromActor
                  ((TeamsCounter *)uStack_10,actorNumber,(MethodInfo *)0x0);
      }
    }
  }
code_?:
  uVar19 = func_?();
  func_?(uVar19);
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
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
  this_02 = this;
  index = (MethodInfo **)0x0;
  pLVar1 = (this->fields).statsToRemoveOnActorLeave;
  while (pLVar1 != (List_1_GameStatCounterType_ *)0x0) {
    if ((pLVar1->fields)._size <= (int)index) {
      return;
    }
    this_00 = (List_1_System_ByteEnum_ *)(this_02->fields).statsToRemoveOnActorLeave;
    if (this_00 == (List_1_System_ByteEnum_ *)0x0) break;
    BVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
            List_1_System_ByteEnum__get_Item
                      (this_00,(int32_t)index,
                       MethodInfo__System__Collections__Generic__List<GameStatCounterType>__get_Item_int_
                      );
    key = (GameStatCounterManager *)CONCAT31((int3)((uint)in_stack_3 >> 8),(char)BVar2);
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                     );
      cRam_? = '\x01';
    }
    this_01 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
              (this_02->fields).statTypeCounters;
    if (this_01 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) break;
    in_stack_3 = key;
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_01,(Object *)key,
                       MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                      );
    if (bVar4 != 0) {
      pDVar5 = (this_02->fields).statTypeCounters;
      if ((pDVar5 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) ||
         (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,
                              (ByteEnum__Enum)key,
                              MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                             ), pOVar6 == (Object *)0x0)) break;
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__ContainsKey_MV__WorldObject__MVTeam_
                       );
        index = &
                MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
        ;
        in_stack_3 = (GameStatCounterManager *)&UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      if (pOVar6[1].klass == (Object__Class *)0x0) break;
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)pOVar6[1].klass,
                         (Object *)team,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__ContainsKey_MV__WorldObject__MVTeam_
                        );
      if (bVar4 == 0) {
        pMVar7 = (MonitorData *)0x0;
      }
      else {
        if ((pOVar6[1].klass == (Object__Class *)0x0) ||
           (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)pOVar6[1].klass,team
                                ,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                               ), pOVar6 == (Object *)0x0)) break;
        pMVar7 = pOVar6[1].monitor;
      }
      if ((0 < (int)pMVar7) &&
         (pMVar8 = (MonitorData *)
                   GameStatCounterManager_GetActorCount
                             (this_02,(GameStatCounterType__Enum)key,team,actorNr,(MethodInfo *)0x0)
         , pMVar8 == pMVar7)) {
        pDVar5 = (this_02->fields).statTypeCounters;
        this = (GameStatCounterManager *)0x0;
        if ((pDVar5 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) ||
           (this_03 = (TeamsCounter *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                                ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,
                                 (ByteEnum__Enum)key,
                                 MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                                ), team_00 = team, this_03 == (TeamsCounter *)0x0)) break;
        this = (GameStatCounterManager *)0x0;
        TeamsCounter::TeamsCounter_GetActorWithBestScore
                  (this_03,(int32_t *)&this,team,(GameStatCounterType__Enum)key,actorNr,
                   (MethodInfo *)0x0);
        this = (GameStatCounterManager *)0x0;
        index = (MethodInfo **)0x0;
        in_stack_3 = this_02;
        GameStatCounterManager_RemoveActorHighScoreFromTeam
                  (this_02,0,team_00,(GameStatCounterType__Enum)key,(MethodInfo *)0x0);
      }
    }
    index = (MethodInfo **)((int)index + 1);
    pLVar1 = (this_02->fields).statsToRemoveOnActorLeave;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  if ((this->fields).OnCounterTypeChanged != (EventHandler_1_OnCounterTypeChangedArgs_ *)0x0) {
    pEVar1 = (this->fields).OnCounterTypeChanged;
    this_00 = (TweenRunner_1_FloatTween_ *)func_?(TypeInfo__OnCounterTypeChangedArgs);
    if (this_00 == (TweenRunner_1_FloatTween_ *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__EventArgs);
      cRam_? = '\x01';
    }
    this_00[1].fields.m_CoroutineContainer = (MonoBehaviour *)0xffffffff;
    if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__EventArgs);
    }
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
    TweenRunner_1_FloatTween___ctor(this_00,(MethodInfo *)0x0);
    (this_00->fields).m_CoroutineContainer = (MonoBehaviour *)count;
    *(undefined1 *)&(this_00->fields).m_Tween = (undefined1)counterType;
    this_00[1].klass = (TweenRunner_1_FloatTween___Class *)actorNumber;
    this_00[1].monitor = (MonitorData *)team;
    this_00[1].fields.m_CoroutineContainer = (MonoBehaviour *)otherID;
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
  this_00 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
  if (this_00 != (BytePacker *)0x0) {
    MV::WorldObject::BytePacker::BytePacker__ctor_1(this_00,data,(MethodInfo *)0x0);
    GameStatCounterManager_SetStat_1(this,this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
    if (this_01 != (TeamsCounter *)0x0) {
      TeamsCounter::TeamsCounter__ctor_2(this_01,bp_00,(MethodInfo *)0x0);
      pDVar2 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
               (this->fields).statTypeCounters;
      if (pDVar2 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
        bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          (pDVar2,(Object *)bp,
                           MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                          );
        if (bVar3 != 0) {
          pDVar4 = (this->fields).statTypeCounters;
          if (pDVar4 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0)
          goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]
          ::Dictionary_2_System_ByteEnum_System_Object__Remove
                    ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar4,(ByteEnum__Enum)bp,
                     MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Remove_GameStatCounterType_
                    );
        }
        pDVar5 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).statTypeCounters;
        if (pDVar5 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (pDVar5,(Object *)bp,(Object *)this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Add_GameStatCounterType__TeamsCounter_
                    );
          this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    (this->fields).sessionPersistentStats;
          if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
            bVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Contains
                              (this_00,(RegexCharClass_SingleRange)bp,
                               MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Contains_GameStatCounterType_
                              );
            if (bVar3 == 0) {
              return;
            }
            pDVar2 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                     (this->fields).persistentStats;
            if (pDVar2 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
              bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,GUILoginHandler+PlanetData]::
                      Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                                (pDVar2,(Object *)bp,
                                 MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                                );
              if (bVar3 != 0) {
                pDVar4 = (this->fields).persistentStats;
                if (pDVar4 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0)
                goto code_?;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Object]::Dictionary_2_System_ByteEnum_System_Object__Remove
                          ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar4,(ByteEnum__Enum)bp,
                           MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Remove_GameStatCounterType_
                          );
              }
              pDVar5 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).persistentStats;
              if (pDVar5 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__Add
                          (pDVar5,(Object *)bp,(Object *)this_01,
                           MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Add_GameStatCounterType__TeamsCounter_
                          );
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
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  this_02 = (RegexCharClass_SingleRange)func_?(TypeInfo__MV__WorldObject__BytePacker);
  if (this_02 == (RegexCharClass_SingleRange)0x0) {
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  MV::WorldObject::BytePacker::BytePacker__ctor_1((BytePacker *)this_02,data,(MethodInfo *)0x0);
  iVar2 = MV::WorldObject::BytePacker::BytePacker_ReadInt32((BytePacker *)this_02,(MethodInfo *)0x0)
  ;
  data = (Byte__Array *)0x0;
  if (0 < iVar2) {
    do {
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
      uVar3 = MV::WorldObject::BytePacker::BytePacker_ReadByte
                        ((BytePacker *)this_02,(MethodInfo *)0x0);
      item._1_3_ = unaff_ESI._1_3_;
      item.First._0_1_ = uVar3;
      this_03 = (TeamsCounter *)func_?(TypeInfo__TeamsCounter);
      if (this_03 == (TeamsCounter *)0x0) goto code_?;
      TeamsCounter::TeamsCounter__ctor_2(this_03,(BytePacker *)this_02,(MethodInfo *)0x0);
      this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                (this->fields).statTypeCounters;
      if (this_00 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
      goto code_?;
      unaff_ESI = item;
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this_00,(Object *)item,
                         MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                        );
      if (bVar4 != 0) {
        pDVar5 = (this->fields).statTypeCounters;
        if (pDVar5 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
        Dictionary_2_System_ByteEnum_System_Object__Remove
                  ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,(ByteEnum__Enum)item,
                   MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Remove_GameStatCounterType_
                  );
      }
      pDVar6 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).statTypeCounters;
      if (pDVar6 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDVar6,(Object *)item,(Object *)this_03,
                 MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Add_GameStatCounterType__TeamsCounter_
                );
      this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).sessionPersistentStats;
      if (this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      this_02 = item;
      pMVar7 = 
      MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Contains_GameStatCounterType_
      ;
      bVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Contains
                        (this_01,item,
                         MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Contains_GameStatCounterType_
                        );
      if (bVar4 != 0) {
        unaff_ESI = (RegexCharClass_SingleRange)(this->fields).persistentStats;
        if (unaff_ESI == (RegexCharClass_SingleRange)0x0) goto code_?;
        pMVar7 = (MethodInfo *)&UNK_?;
        bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)unaff_ESI,
                           (Object *)item,
                           MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                          );
        if (bVar4 != 0) {
          pDVar5 = (this->fields).persistentStats;
          if (pDVar5 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0)
          goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]
          ::Dictionary_2_System_ByteEnum_System_Object__Remove
                    ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,(ByteEnum__Enum)item,
                     MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Remove_GameStatCounterType_
                    );
          data = (Byte__Array *)item;
        }
        pDVar6 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).persistentStats;
        if (pDVar6 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (pDVar6,(Object *)item,(Object *)this_03,
                   MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Add_GameStatCounterType__TeamsCounter_
                  );
      }
      data = (Byte__Array *)((int)&data->klass + 1);
    } while ((int)data < (int)pMVar7);
  }
  return;
}


/* Byte[] ToByteArray() */

Byte__Array *
MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_ToByteArray
          (GameStatCounterManager *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__BytePacker);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Count__
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
    cRam_? = '\x01';
  }
  this_02 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
  if (this_02 != (BytePacker *)0x0) {
    MV::WorldObject::BytePacker::BytePacker__ctor(this_02,(MethodInfo *)0x0);
    this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )(this->fields).statTypeCounters;
    if (this_00 !=
        (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0)
    {
      value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                        (this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Count__
                        );
      MV::WorldObject::BytePacker::BytePacker_Write_7(this_02,value,(MethodInfo *)0x0);
      this_01 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).statTypeCounters;
      if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                            &pDStack_5,this_01,
                            MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__GetEnumerator__
                           );
        method_00 = (MethodInfo *)(pDVar4->_current).key;
        uVar6 = *(undefined8 *)&(pDVar4->_current).value;
        uStack_1 = 1;
        while( true ) {
          this_03 = (TeamsCounter *)uVar6;
          bVar7 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object_ *)
                             &stack0xffffffb8,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__MoveNext__
                            );
          if (bVar7 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&stack0xffffffb8,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__Dispose__
                       ,method_00);
            uStack_1 = 0xffffffff;
            pBVar8 = MV::WorldObject::BytePacker::BytePacker_ToArray(this_02,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return pBVar8;
          }
          MV::WorldObject::BytePacker::BytePacker_Write
                    (this_02,(uint8_t)method_00,(MethodInfo *)0x0);
          if (this_03 == (TeamsCounter *)0x0) break;
          method_00 = (MethodInfo *)&UNK_?;
          pBVar8 = TeamsCounter::TeamsCounter_ToByteArray(this_03,(MethodInfo *)0x0);
          uVar6._4_4_ = (int32_t)this_02;
          uVar6._0_4_ = (Object *)&UNK_?;
          MV::WorldObject::BytePacker::BytePacker_Write_1(this_02,pBVar8,(MethodInfo *)0x0);
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar9 = (code *)swi(3);
  pBVar8 = (Byte__Array *)(*pcVar9)();
  return pBVar8;
}


/* Byte[] ToByteArrayStatType(GameStatCounterType) */

Byte__Array *
MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_ToByteArrayStatType
          (GameStatCounterManager *this,GameStatCounterType__Enum statCounterType,MethodInfo *method
          )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__BytePacker);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
            (this->fields).statTypeCounters;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)statCounterType,
                       MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                      );
    if (bVar1 == 0) {
      return (Byte__Array *)0x0;
    }
    this_02 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
    if (this_02 != (BytePacker *)0x0) {
      MV::WorldObject::BytePacker::BytePacker__ctor(this_02,(MethodInfo *)0x0);
      this_01 = (this->fields).statTypeCounters;
      if (this_01 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
        this_03 = (TeamsCounter *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,statCounterType,
                             MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                            );
        MV::WorldObject::BytePacker::BytePacker_Write
                  (this_02,(uint8_t)statCounterType,(MethodInfo *)0x0);
        if (this_03 != (TeamsCounter *)0x0) {
          pBVar2 = TeamsCounter::TeamsCounter_ToByteArray(this_03,(MethodInfo *)0x0);
          MV::WorldObject::BytePacker::BytePacker_Write_1(this_02,pBVar2,(MethodInfo *)0x0);
          pBVar2 = MV::WorldObject::BytePacker::BytePacker_ToArray(this_02,(MethodInfo *)0x0);
          return pBVar2;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pBVar2 = (Byte__Array *)(*pcVar3)();
  return pBVar2;
}


/* Void ToByteArray(GameStatCounterType, TeamsCounter, BytePacker) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_ToByteArray_1
               (GameStatCounterManager *this,GameStatCounterType__Enum statTypeCounter,
               TeamsCounter *teamsCounter,BytePacker *bytePacker,MethodInfo *method)

{
  if (bytePacker != (BytePacker *)0x0) {
    MV::WorldObject::BytePacker::BytePacker_Write
              (bytePacker,(uint8_t)statTypeCounter,(MethodInfo *)0x0);
    if (teamsCounter != (TeamsCounter *)0x0) {
      buffer = TeamsCounter::TeamsCounter_ToByteArray(teamsCounter,(MethodInfo *)0x0);
      MV::WorldObject::BytePacker::BytePacker_Write_1(bytePacker,buffer,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  HStack_7._set = (HashSet_1_System_Int32Enum_ *)0x0;
  HStack_7._index = 0;
  HStack_7._version = 0;
  HStack_7._current = 0;
  pSStack_8 = StringLiteral_Active_teams__u000A;
  pMVar9 = (MethodInfo *)(this->fields).activeTeams;
  if (pMVar9 != (MethodInfo *)0x0) {
    pHVar10 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
             HashSet_1_System_Object__GetEnumerator
                       ((HashSet_1_T_Enumerator_System_Object_ *)(auStack_11 + 8),
                        (HashSet_1_System_Object_ *)pMVar9,
                        MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__GetEnumerator__
                       );
    uStack_12 = 0;
    HStack_7._set = (HashSet_1_System_Int32Enum_ *)pHVar10->_set;
    HStack_7._index = pHVar10->_index;
    HStack_7._version = pHVar10->_version;
    HStack_7._current = (int32_t)pHVar10->_current;
    uStack_1 = 1;
    pHStack_13 = &HStack_7;
    while( true ) {
      bVar14 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
              Int32Enum]::HashSet_1_T_Enumerator_System_Int32Enum__MoveNext
                        (&HStack_7,
                         MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
                        );
      if (bVar14 == 0) break;
      pOStack_15 = (Object *)HStack_7._current;
      pOVar16 = (Object *)func_?(TypeInfo__MV__WorldObject__MVTeam,&pOStack_15);
      pSVar17 = mscorlib.dll::System::String::String_Format
                         (StringLiteral__0_u000A,pOVar16,(MethodInfo *)0x0);
      pSVar6 = mscorlib.dll::System::String::String_Concat_3(pSVar6,pSVar17,(MethodInfo *)0x0);
      pSStack_8 = pSVar6;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&HStack_7,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::MVTeam>__Dispose__
               ,pMVar9);
    uStack_1 = 0xffffffff;
    this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).statTypeCounters;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                          auStack_11,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__GetEnumerator__
                         );
      uStack_19 = 0;
      pMVar9 = (MethodInfo *)pDVar18->_index;
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
        pHStack_22 = (HashSet_1_T_Enumerator_System_Int32Enum_ *)uVar20;
        pHStack_13 = pHStack_22;
        pOVar16 = (Object *)func_?();
        pSVar17 = mscorlib.dll::System::String::String_Format_1
                           (StringLiteral_CounterType___0___Stats___1_,pOVar16,(Object *)pHStack_13,
                            (MethodInfo *)0x0);
        pSVar6 = mscorlib.dll::System::String::String_Concat_3(pSVar6,pSVar17,(MethodInfo *)0x0);
        pSStack_8 = pSVar6;
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&stack0xffffff8c,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__Dispose__
                 ,pMVar9);
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
  pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).roundEndingStats;
  if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Contains
                      (pLVar1,(RegexCharClass_SingleRange)counterType,
                       MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Contains_GameStatCounterType_
                      );
    if (bVar2 != 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                 *)(this->fields).statTypeCounters;
      if (this_00 ==
          (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0
         ) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Clear
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Clear__
                );
      GameStatCounterManager_AddIfNotPresent(this,counterType,(MethodInfo *)0x0);
    }
    pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).sessionPersistentStats;
    if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Contains
                        (pLVar1,(RegexCharClass_SingleRange)counterType,
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
  func_?(this_01);
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
    func_?(this_00);
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
  if (pLVar1 != (List_1_GameStatCounterType_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)pLVar1,
               MethodInfo__System__Collections__Generic__List<GameStatCounterType>__List__);
    func_?(pLVar1,2,
                    MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Add_GameStatCounterType_
                   );
    (this->fields).roundEndingStats = pLVar1;
    func_?(&this->fields,pLVar1);
    pLVar1 = (List_1_GameStatCounterType_ *)
             func_?(TypeInfo__System__Collections__Generic__List<GameStatCounterType>);
    if (pLVar1 != (List_1_GameStatCounterType_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)pLVar1,
                 MethodInfo__System__Collections__Generic__List<GameStatCounterType>__List__);
      func_?(pLVar1,2,
                      MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Add_GameStatCounterType_
                     );
      (this->fields).sessionPersistentStats = pLVar1;
      func_?(&(this->fields).sessionPersistentStats,pLVar1);
      pLVar1 = (List_1_GameStatCounterType_ *)
               func_?(TypeInfo__System__Collections__Generic__List<GameStatCounterType>);
      if (pLVar1 != (List_1_GameStatCounterType_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
        LowLevelList_1_System_Object___ctor
                  ((LowLevelList_1_System_Object_ *)pLVar1,
                   MethodInfo__System__Collections__Generic__List<GameStatCounterType>__List__);
        func_?(pLVar1,2,
                        MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Add_GameStatCounterType_
                       );
        func_?(pLVar1,8,
                        MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Add_GameStatCounterType_
                       );
        (this->fields).statsToRemoveOnActorLeave = pLVar1;
        func_?(&(this->fields).statsToRemoveOnActorLeave,pLVar1);
        this_00 = (HashSet_1_UnityEngine_Vector3_ *)
                  func_?(
                                 TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>
                                 );
        if (this_00 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
          System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
          HashSet_1_UnityEngine_Vector3___ctor
                    (this_00,
                     MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__HashSet__
                    );
          (this->fields).activeTeams = (HashSet_1_MV_WorldObject_MVTeam_ *)this_00;
          func_?(&(this->fields).activeTeams,this_00);
          pDVar2 = (Dictionary_2_GameStatCounterType_TeamsCounter_ *)
                   func_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>
                                  );
          if (pDVar2 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
            Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
            ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                      ((ParameterOverride_1_System_Object_ *)pDVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Dictionary__
                      );
            method_00 = (MethodInfo *)&(this->fields).statTypeCounters;
            (this->fields).statTypeCounters = pDVar2;
            func_?(method_00,pDVar2);
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)this,ExceptionArgument__Enum_obj,method_00);
            if ((this->fields).persistentStats ==
                (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
              pDVar2 = (Dictionary_2_GameStatCounterType_TeamsCounter_ *)func_?();
              if (pDVar2 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0)
              goto code_?;
              Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
              ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                        ((ParameterOverride_1_System_Object_ *)pDVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Dictionary__
                        );
              (this->fields).persistentStats = pDVar2;
              func_?(&(this->fields).persistentStats,pDVar2);
            }
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* GameStatCounterManager(Byte[]) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager__ctor_1
               (GameStatCounterManager *this,Byte__Array *data,MethodInfo *method)

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
  if (pLVar1 != (List_1_GameStatCounterType_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)pLVar1,
               MethodInfo__System__Collections__Generic__List<GameStatCounterType>__List__);
    func_?(pLVar1,2,
                    MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Add_GameStatCounterType_
                   );
    (this->fields).roundEndingStats = pLVar1;
    func_?(&this->fields,pLVar1);
    pLVar1 = (List_1_GameStatCounterType_ *)
             func_?(TypeInfo__System__Collections__Generic__List<GameStatCounterType>);
    if (pLVar1 != (List_1_GameStatCounterType_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)pLVar1,
                 MethodInfo__System__Collections__Generic__List<GameStatCounterType>__List__);
      func_?(pLVar1,2,
                      MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Add_GameStatCounterType_
                     );
      (this->fields).sessionPersistentStats = pLVar1;
      func_?(&(this->fields).sessionPersistentStats,pLVar1);
      pLVar1 = (List_1_GameStatCounterType_ *)
               func_?(TypeInfo__System__Collections__Generic__List<GameStatCounterType>);
      if (pLVar1 != (List_1_GameStatCounterType_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
        LowLevelList_1_System_Object___ctor
                  ((LowLevelList_1_System_Object_ *)pLVar1,
                   MethodInfo__System__Collections__Generic__List<GameStatCounterType>__List__);
        func_?(pLVar1,2,
                        MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Add_GameStatCounterType_
                       );
        func_?(pLVar1,8,
                        MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Add_GameStatCounterType_
                       );
        (this->fields).statsToRemoveOnActorLeave = pLVar1;
        func_?(&(this->fields).statsToRemoveOnActorLeave,pLVar1);
        this_00 = (HashSet_1_UnityEngine_Vector3_ *)
                  func_?(
                                 TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>
                                 );
        if (this_00 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
          System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
          HashSet_1_UnityEngine_Vector3___ctor
                    (this_00,
                     MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__HashSet__
                    );
          (this->fields).activeTeams = (HashSet_1_MV_WorldObject_MVTeam_ *)this_00;
          func_?(&(this->fields).activeTeams,this_00);
          pDVar2 = (Dictionary_2_GameStatCounterType_TeamsCounter_ *)
                   func_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>
                                  );
          if (pDVar2 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
            Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
            ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                      ((ParameterOverride_1_System_Object_ *)pDVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Dictionary__
                      );
            method_00 = (MethodInfo *)&(this->fields).statTypeCounters;
            (this->fields).statTypeCounters = pDVar2;
            func_?(method_00,pDVar2);
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)this,ExceptionArgument__Enum_obj,method_00);
            if ((this->fields).persistentStats ==
                (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
              pDVar2 = (Dictionary_2_GameStatCounterType_TeamsCounter_ *)func_?();
              if (pDVar2 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0)
              goto code_?;
              Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
              ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                        ((ParameterOverride_1_System_Object_ *)pDVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Dictionary__
                        );
              (this->fields).persistentStats = pDVar2;
              func_?(&(this->fields).persistentStats,pDVar2);
            }
            GameStatCounterManager_SetStats(this,data,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  a = (this->fields).OnCounterTypeChanged;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_OnCounterTypeChangedArgs_ *)
             func_?(&(this->fields).OnCounterTypeChanged,iVar3,a);
    bVar6 = pEVar5 != a;
    a = pEVar5;
  } while (bVar6);
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
  pHVar1 = (this->fields).activeTeams;
  this_00 = (HashSet_1_UnityEngine_Vector3_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>
                           );
  if (this_00 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
    HashSet_1_UnityEngine_Vector3___ctor_1
              (this_00,(IEnumerable_1_UnityEngine_Vector3_ *)pHVar1,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__HashSet_System__Collections__Generic__IEnumerable<MV::WorldObject::MVTeam>_
              );
    return (HashSet_1_MV_WorldObject_MVTeam_ *)this_00;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pHVar1 = (HashSet_1_MV_WorldObject_MVTeam_ *)(*pcVar2)();
  return pHVar1;
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
  source = (this->fields).OnCounterTypeChanged;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_OnCounterTypeChangedArgs_ *)
             func_?(&(this->fields).OnCounterTypeChanged,iVar3,source);
    bVar6 = pEVar5 != source;
    source = pEVar5;
  } while (bVar6);
  return;
}

