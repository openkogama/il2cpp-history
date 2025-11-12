
/* Void AddIfNotPresent(GameStatCounterType) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_AddIfNotPresent
               (GameStatCounterManager *this,GameStatCounterType__Enum statType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Add_GameStatCounterType__TeamsCounter_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Contains_GameStatCounterType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TeamsCounter);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
            *)(this->fields).statTypeCounters;
  if (pDVar1 != (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                 *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::
            WorldObject::RuntimeEvents::ExplosionEvent+ExplosionValues]::
            Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__FindEntry
                      (pDVar1,statType & 0xff,
                       MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                       ->klass->rgctx_data[0x21].method);
    if (iVar2 < 0) {
      pDVar3 = (this->fields).statTypeCounters;
      pTVar4 = (TeamsCounter *)FUN_?(TypeInfo__TeamsCounter);
      TeamsCounter::TeamsCounter__ctor(pTVar4,(MethodInfo *)0x0);
      if (pDVar3 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0)
      goto code_?;
      in_R9D = CONCAT31((int3)(in_R9D >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
      Dictionary_2_System_ByteEnum_System_Object__TryInsert
                ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar3,statType & 0xff,
                 (Object *)pTVar4,in_R9D,
                 MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Add_GameStatCounterType__TeamsCounter_
                 ->klass->rgctx_data[0x22].method);
    }
    pLVar5 = (this->fields).sessionPersistentStats;
    if (pLVar5 != (List_1_GameStatCounterType_ *)0x0) {
      if ((pLVar5->fields)._size != 0) {
        iVar6 = FUN_?(pLVar5,(char)statType,
                              MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Contains_GameStatCounterType_
                              ->klass->rgctx_data[0x17].rgctxDataDummy);
        if (iVar6 != -1) {
          pDVar1 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                    *)(this->fields).persistentStats;
          if (pDVar1 == (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                         *)0x0) goto code_?;
          iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::
                  WorldObject::RuntimeEvents::ExplosionEvent+ExplosionValues]::
                  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__FindEntry
                            (pDVar1,statType & 0xff,
                             MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                             ->klass->rgctx_data[0x21].method);
          if (iVar2 < 0) {
            pDVar3 = (this->fields).persistentStats;
            pTVar4 = (TeamsCounter *)FUN_?(TypeInfo__TeamsCounter);
            TeamsCounter::TeamsCounter__ctor(pTVar4,(MethodInfo *)0x0);
            if (pDVar3 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0)
            goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
            Object]::Dictionary_2_System_ByteEnum_System_Object__TryInsert
                      ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar3,statType & 0xff,
                       (Object *)pTVar4,CONCAT31((int3)(in_R9D >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Add_GameStatCounterType__TeamsCounter_
                       ->klass->rgctx_data[0x22].method);
          }
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void AddPersistentStats() */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_AddPersistentStats
               (GameStatCounterManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Add_GameStatCounterType__TeamsCounter_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<GameStatCounterType,_TeamsCounter>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<GameStatCounterType,_TeamsCounter>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TeamsCounter);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).persistentStats;
  if (pDVar1 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_3 = 0;
  uStack_4 = 0;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&pDStack_6 >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  uStack_10 = (ulonglong)(uint)(pDVar1->fields)._version;
  uStack_11 = 2;
  DStack_12._version = (undefined4)uStack_10;
  DStack_12._index = uStack_10._4_4_;
  DStack_12._current.key = 0;
  DStack_12._current._1_7_ = 0;
  DStack_12._current.value = (Object *)0x0;
  DStack_12._getEnumeratorRetType = 2;
  DStack_12._36_4_ = 0;
  pDStack_6 = pDVar1;
  DStack_12._dictionary = (Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1;
  while( true ) {
    bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::ByteEnum,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                      (&DStack_12,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__MoveNext__
                      );
    teamCounterCopy = DStack_12._current.value;
    if (bVar13 == 0) {
      return;
    }
    key = DStack_12._current._0_4_;
    this_00 = (this->fields).statTypeCounters;
    this_01 = (TeamsCounter *)FUN_?(TypeInfo__TeamsCounter);
    TeamsCounter::TeamsCounter__ctor_1(this_01,(TeamsCounter *)teamCounterCopy,(MethodInfo *)0x0);
    if (this_00 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) break;
    pDVar1 = (Dictionary_2_GameStatCounterType_TeamsCounter_ *)
             CONCAT71((int7)((ulonglong)pDVar1 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
    Dictionary_2_System_ByteEnum_System_Object__TryInsert
              ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,key,(Object *)this_01,
               (InsertionBehavior__Enum)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Add_GameStatCounterType__TeamsCounter_
               ->klass->rgctx_data[0x22].method);
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Clear() */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Clear
               (GameStatCounterManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    DStack_1._current.value = (Object *)&UNK_?;
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Clear__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).statTypeCounters == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
    DStack_1._current.value = (Object *)&UNK_?;
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  DStack_1._current.value = (Object *)&UNK_?;
  FUN_?();
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Add_GameStatCounterType__TeamsCounter_
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<GameStatCounterType,_TeamsCounter>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<GameStatCounterType,_TeamsCounter>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TeamsCounter);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar3 = (this->fields).persistentStats;
  if (pDVar3 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_4 = 0;
  uStack_5 = 0;
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&pDStack_7 >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar9 = *puVar8;
      LOCK();
      uVar10 = *puVar8;
      if (uVar9 == uVar10) {
        *puVar8 = uVar9 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar9 != uVar10);
  }
  uStack_11 = (ulonglong)(uint)(pDVar3->fields)._version;
  uStack_12 = 2;
  DStack_1._version = (undefined4)uStack_11;
  DStack_1._index = uStack_11._4_4_;
  DStack_1._current.key = 0;
  DStack_1._current._1_7_ = 0;
  DStack_1._current.value = (Object *)0x0;
  DStack_1._getEnumeratorRetType = 2;
  DStack_1._36_4_ = 0;
  pDStack_7 = pDVar3;
  DStack_1._dictionary = (Dictionary_2_System_ByteEnum_System_Object_ *)pDVar3;
  while( true ) {
    bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::ByteEnum,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                      (&DStack_1,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__MoveNext__
                      );
    teamCounterCopy = DStack_1._current.value;
    if (bVar13 == 0) {
      return;
    }
    key = DStack_1._current._0_4_;
    this_00 = (this->fields).statTypeCounters;
    this_01 = (TeamsCounter *)FUN_?(TypeInfo__TeamsCounter);
    TeamsCounter::TeamsCounter__ctor_1(this_01,(TeamsCounter *)teamCounterCopy,(MethodInfo *)0x0);
    if (this_00 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) break;
    pDVar3 = (Dictionary_2_GameStatCounterType_TeamsCounter_ *)
             CONCAT71((int7)((ulonglong)pDVar3 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
    Dictionary_2_System_ByteEnum_System_Object__TryInsert
              ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,key,(Object *)this_01,
               (InsertionBehavior__Enum)pDVar3,
               MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Add_GameStatCounterType__TeamsCounter_
               ->klass->rgctx_data[0x22].method);
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ClearStats() */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_ClearStats
               (GameStatCounterManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Clear__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).statTypeCounters;
  if (pDVar1 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
    length = (pDVar1->fields)._count;
    if (0 < length) {
      pIVar2 = (pDVar1->fields)._buckets;
      if (pIVar2 == (Int32__Array *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pDVar1->fields)._buckets,0,(int32_t)pIVar2->max_length,(MethodInfo *)0x0)
      ;
      (pDVar1->fields)._count = 0;
      (pDVar1->fields)._freeCount = 0;
      (pDVar1->fields)._freeList = -1;
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pDVar1->fields)._entries,0,length,(MethodInfo *)0x0);
    }
    piVar4 = &(pDVar1->fields)._version;
    *piVar4 = *piVar4 + 1;
    return;
  }
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)(this->fields).statTypeCounters;
  if (this_00 !=
      (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_ *)
      0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::
            WorldObject::RuntimeEvents::ExplosionEvent+ExplosionValues]::
            Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__FindEntry
                      (this_00,counterType & 0xff,
                       MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      return 0;
    }
    this_01 = (this->fields).statTypeCounters;
    if ((this_01 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) &&
       (this_02 = (TeamsCounter *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,
                             counterType & 0xff,
                             MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                            ), this_02 != (TeamsCounter *)0x0)) {
      iVar1 = TeamsCounter::TeamsCounter_GetActorCount(this_02,team,actorNumber,(MethodInfo *)0x0);
      return iVar1;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar1 = (*pcVar2)();
  return iVar1;
}


/* HighScores GetHighScores(GameStatCounterType, Boolean, WinningConditionPresentStyle, Boolean) */

HighScores *
MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetHighScores
          (GameStatCounterManager *this,GameStatCounterType__Enum statType,bool presentAsTeamScore,
          WinningConditionPresentStyle__Enum winningConditionPresentStyle,bool byAscending,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__HighScores);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)(this->fields).statTypeCounters;
  if (this_00 !=
      (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_ *)
      0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::
            WorldObject::RuntimeEvents::ExplosionEvent+ExplosionValues]::
            Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__FindEntry
                      (this_00,statType & 0xff,
                       MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      pHVar2 = (HighScores *)FUN_?(TypeInfo__HighScores);
      HighScores::HighScores__ctor
                (pHVar2,statType & 0xff,(Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0,
                 presentAsTeamScore,
                 CONCAT31((int3)((uint)in_stack_3 >> 8),
                          (char)winningConditionPresentStyle),byAscending,(MethodInfo *)0x0);
      return pHVar2;
    }
    this_01 = (this->fields).statTypeCounters;
    if ((this_01 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) &&
       (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,statType & 0xff,
                            MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                           ), pOVar4 != (Object *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__HighScores);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      teamCounters = pOVar4[1].klass;
      pHVar2 = (HighScores *)FUN_?(TypeInfo__HighScores);
      HighScores::HighScores__ctor
                (pHVar2,statType & 0xff,
                 (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)teamCounters,presentAsTeamScore,
                 CONCAT31((int3)((uint)in_stack_3 >> 8),
                          (char)winningConditionPresentStyle),byAscending,(MethodInfo *)0x0);
      return pHVar2;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pHVar2 = (HighScores *)(*pcVar5)();
  return pHVar2;
}


/* Int32 GetTeamCount(GameStatCounterType, MVTeam) */

int32_t MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetTeamCount
                  (GameStatCounterManager *this,GameStatCounterType__Enum statType,MVTeam__Enum team
                  ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)(this->fields).statTypeCounters;
  if (this_00 !=
      (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_ *)
      0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::
            WorldObject::RuntimeEvents::ExplosionEvent+ExplosionValues]::
            Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__FindEntry
                      (this_00,statType & 0xff,
                       MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      return 0;
    }
    this_01 = (this->fields).statTypeCounters;
    if ((this_01 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) &&
       (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,statType & 0xff,
                            MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                           ), pOVar2 != (Object *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__ContainsKey_MV__WorldObject__MVTeam_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pOVar2[1].klass != (Object__Class *)0x0) {
        iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Int32Enum,UnityEngine::Vector3]::
                Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                          ((Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)pOVar2[1].klass,
                           team,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__ContainsKey_MV__WorldObject__MVTeam_
                                ->klass->rgctx_data[0x21].method);
        if (iVar1 < 0) {
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
          return *(int32_t *)&pOVar2[1].monitor;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar1 = (*pcVar3)();
  return iVar1;
}


/* Void Increment(GameStatCounterType, MVTeam, Int32, Int32, Int32, Boolean) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Increment
               (GameStatCounterManager *this,GameStatCounterType__Enum counterType,MVTeam__Enum team
               ,int32_t actorNumber,int32_t value,int32_t otherID,bool includeTeamScore,
               MethodInfo *method)

{
  uVar1 = (ulonglong)(uint)actorNumber;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Contains_GameStatCounterType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((team == MVTeam__Enum_Server) && (actorNumber != 0)) {
    uVar2 = func_?(&TypeInfo__System__Exception);
    this_02 = (Exception *)func_?(uVar2);
    message = (String *)func_?(&StringLiteral_Team_Server_is_reserved_by_serve);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_02,message,(MethodInfo *)0x0);
    uVar2 = func_?(&
                                MethodInfo__GameStatCounterManager__Validate_int__MV__WorldObject__MVTeam_
                               );
    FUN_?(this_02,uVar2);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  GameStatCounterManager_AddIfNotPresent(this,counterType & 0xff,(MethodInfo *)0x0);
  pDVar4 = (this->fields).statTypeCounters;
  if ((pDVar4 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) &&
     (pTVar5 = (TeamsCounter *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar4,counterType & 0xff,
                          MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                         ), pTVar5 != (TeamsCounter *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    TeamsCounter::TeamsCounter_AddIfNotPresent(pTVar5,team,(MethodInfo *)0x0);
    this_00 = (pTVar5->fields).teamCounters;
    if ((this_00 == (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) ||
       (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,team,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                           ), pOVar6 == (Object *)0x0)) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__ActorCounter);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Add_int__ActorCounter_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__ContainsKey_int_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pOVar6[1].klass == (Object__Class *)0x0) goto code_?;
    iVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      ((Dictionary_2_System_Int32_UnityEngine_Vector3_ *)pOVar6[1].klass,actorNumber
                       ,MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__ContainsKey_int_
                        ->klass->rgctx_data[0x21].method);
    if (iVar7 < 0) {
      this_01 = pOVar6[1].klass;
      value_00 = (Object *)FUN_?(TypeInfo__ActorCounter);
      *(undefined4 *)&value_00[1].klass = 0;
      if (this_01 == (Object__Class *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryInsert
                ((Dictionary_2_System_Int32_System_Object_ *)this_01,actorNumber,value_00,
                 (InsertionBehavior__Enum)CONCAT71((int7)(uVar1 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Add_int__ActorCounter_
                 ->klass->rgctx_data[0x22].method);
    }
    if (includeTeamScore != 0) {
      *(int *)&pOVar6[1].monitor = *(int *)&pOVar6[1].monitor + value;
    }
    if ((pOVar6[1].klass == (Object__Class *)0x0) ||
       (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)pOVar6[1].klass,actorNumber,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__get_Item_int_
                           ), pOVar6 == (Object *)0x0)) goto code_?;
    count = *(int *)&pOVar6[1].klass + value;
    *(int *)&pOVar6[1].klass = count;
    GameStatCounterManager_SendChangeEvent
              (this,count,counterType & 0xff,actorNumber,team,otherID,(MethodInfo *)0x0);
    pLVar8 = (this->fields).sessionPersistentStats;
    if (pLVar8 == (List_1_GameStatCounterType_ *)0x0) goto code_?;
    if ((pLVar8->fields)._size == 0) {
      return;
    }
    iVar9 = FUN_?(pLVar8,counterType & 0xff,
                          MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Contains_GameStatCounterType_
                          ->klass->rgctx_data[0x17].rgctxDataDummy);
    if (iVar9 == -1) {
      return;
    }
    pDVar4 = (this->fields).persistentStats;
    if ((pDVar4 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) ||
       (pTVar5 = (TeamsCounter *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar4,counterType & 0xff
                            ,
                            MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                           ), pTVar5 == (TeamsCounter *)0x0)) goto code_?;
    iVar7 = TeamsCounter::TeamsCounter_GetActorCount(pTVar5,team,actorNumber,(MethodInfo *)0x0);
    switch(counterType & 0xff) {
    case GameStatCounterType__Enum_Flag:
    case GameStatCounterType__Enum_Time_1:
    case GameStatCounterType__Enum_GameCoin:
      if (count <= iVar7) {
        return;
      }
      break;
    case GameStatCounterType__Enum_Collectible:
    case GameStatCounterType__Enum_TimeAttackFlag|GameStatCounterType__Enum_Kill:
                    /* WARNING: This code block may not be properly labeled as switch case */
      if (-1 < iVar7) {
        if (count < 1) {
          return;
        }
        if ((iVar7 <= count) && (iVar7 != 0)) {
          return;
        }
      }
      break;
    default:
      goto code_?;
    }
    pDVar4 = (this->fields).persistentStats;
    if ((pDVar4 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) &&
       (pTVar5 = (TeamsCounter *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar4,counterType & 0xff
                            ,
                            MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                           ), pTVar5 != (TeamsCounter *)0x0)) {
      TeamsCounter::TeamsCounter_Update
                (pTVar5,team,actorNumber,count,includeTeamScore,(MethodInfo *)0x0);
code_?:
      return;
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__Add_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__Contains_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((e != (TeamEventArgs *)0x0) &&
     (pHVar1 = (HashSet_1_System_Int32Enum_ *)(this->fields).activeTeams,
     pHVar1 != (HashSet_1_System_Int32Enum_ *)0x0)) {
    bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
            HashSet_1_System_Int32Enum__Contains
                      (pHVar1,(e->fields).team,
                       MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__Contains_MV__WorldObject__MVTeam_
                      );
    if (bVar2 != 0) {
      uVar3 = func_?(&TypeInfo__System__Exception);
      this_02 = (Exception *)func_?(uVar3);
      pSVar4 = (String *)func_?(&StringLiteral_Team_already_added);
      mscorlib.dll::System::Exception::Exception__ctor_1(this_02,pSVar4,(MethodInfo *)0x0);
      uVar3 = func_?(&
                                   MethodInfo__GameStatCounterManager__OnTeamAdded_System__Object__MV__WorldObject__TeamEventArgs_
                                  );
      FUN_?(this_02,uVar3);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pHVar1 = (HashSet_1_System_Int32Enum_ *)(this->fields).activeTeams;
    if (pHVar1 != (HashSet_1_System_Int32Enum_ *)0x0) {
      iVar6 = (e->fields).team;
      pMVar7 = MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__Add_MV__WorldObject__MVTeam_
               ->klass->rgctx_data[0x15].method;
      if ((pHVar1->fields)._buckets == (Int32__Array *)0x0) {
        FUN_?(pHVar1,0,pMVar7->klass->rgctx_data[0xe].rgctxDataDummy);
      }
      pIVar8 = (pHVar1->fields)._comparer;
      if (pIVar8 != (IEqualityComparer_1_System_Int32Enum_ *)0x0) {
        pvVar9 = (pMVar7->klass->rgctx_data[0x16].method)->klass->rgctx_data[4].rgctxDataDummy;
        if ((*(byte *)((longlong)pvVar9 + 0x135) & 1) == 0) {
          pvVar9 = (void *)FUN_?(pvVar9);
        }
        uVar10 = FUN_?(1,pvVar9,pIVar8,iVar6);
        pIVar11 = (pHVar1->fields)._buckets;
        uVar10 = uVar10 & 0x7fffffff;
        if (pIVar11 != (Int32__Array *)0x0) {
          pHVar12 = (pHVar1->fields)._slots;
          uVar13 = (int)uVar10 % (int)pIVar11->max_length;
          if (uVar13 < (uint)pIVar11->max_length) {
            uVar14 = pIVar11->vector[(int)uVar13] - 1;
            if (-1 < (int)uVar14) {
              iVar15 = 0;
              if (pHVar12 == (HashSet_1_T_Slot_System_Int32Enum___Array *)0x0)
              goto code_?;
              do {
                if ((uint)pHVar12->max_length <= uVar14) goto code_?;
                if (pHVar12->vector[(int)uVar14].hashCode == uVar10) {
                  if ((pHVar1->fields)._comparer == (IEqualityComparer_1_System_Int32Enum_ *)0x0)
                  goto code_?;
                  pvVar9 = pMVar7->klass->rgctx_data[4].rgctxDataDummy;
                  if ((*(byte *)((longlong)pvVar9 + 0x135) & 1) == 0) {
                    FUN_?(pvVar9);
                  }
                  cVar16 = FUN_?();
                  if (cVar16 != '\0') {
                    return;
                  }
                }
                if ((int)pHVar12->max_length <= iVar15) {
                  uVar3 = func_?(&TypeInfo__System__InvalidOperationException);
                  this_00 = (ProtocolViolationException *)func_?(uVar3);
                  pSVar4 = (String *)
                            func_?(&StringLiteral_Operations_that_change_non_concu);
                  System.dll::System::Net::ProtocolViolationException::
                  ProtocolViolationException__ctor_1(this_00,pSVar4,(MethodInfo *)0x0);
                  FUN_?(this_00,pMVar7);
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                iVar15 = iVar15 + 1;
                if ((uint)pHVar12->max_length <= uVar14) goto code_?;
                uVar14 = pHVar12->vector[(int)uVar14].next;
              } while (-1 < (int)uVar14);
            }
            if ((pHVar1->fields)._freeList < 0) {
              if (pHVar12 == (HashSet_1_T_Slot_System_Int32Enum___Array *)0x0)
              goto code_?;
              if ((pHVar1->fields)._lastIndex == (int)pHVar12->max_length) {
                pMVar7 = pMVar7->klass->rgctx_data[0x2b].method;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__System__Collections__HashHelpers);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                iVar17 = (pHVar1->fields)._count;
                if (*(int *)&(TypeInfo__System__Collections__HashHelpers->_1).field_0x1c == 0) {
                  FUN_?();
                }
                iVar17 = mscorlib.dll::System::Collections::HashHelpers::HashHelpers_1_ExpandPrime
                                   (iVar17,(MethodInfo *)0x0);
                if (iVar17 <= (pHVar1->fields)._count) {
                  uVar3 = func_?(&TypeInfo__System__ArgumentException);
                  this_01 = (InvalidEnumArgumentException *)func_?(uVar3);
                  pSVar4 = (String *)
                            func_?(&StringLiteral_HashSet_capacity_is_too_big_);
                  System.dll::System::ComponentModel::InvalidEnumArgumentException::
                  InvalidEnumArgumentException__ctor_1(this_01,pSVar4,(MethodInfo *)0x0);
                  FUN_?(this_01,pMVar7);
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                HashSet_1_System_Int32Enum__SetCapacity
                          (pHVar1,iVar17,pMVar7->klass->rgctx_data[0x2a].method);
                pIVar11 = (pHVar1->fields)._buckets;
                pHVar12 = (pHVar1->fields)._slots;
                if (pIVar11 == (Int32__Array *)0x0) goto code_?;
                uVar13 = (int)uVar10 % (int)pIVar11->max_length;
              }
              uVar14 = (pHVar1->fields)._lastIndex;
              piVar18 = &(pHVar1->fields)._lastIndex;
              *piVar18 = *piVar18 + 1;
              if (pHVar12 == (HashSet_1_T_Slot_System_Int32Enum___Array *)0x0)
              goto code_?;
            }
            else {
              uVar14 = (pHVar1->fields)._freeList;
              if (pHVar12 == (HashSet_1_T_Slot_System_Int32Enum___Array *)0x0)
              goto code_?;
              if ((uint)pHVar12->max_length <= uVar14) goto code_?;
              (pHVar1->fields)._freeList = pHVar12->vector[(int)uVar14].next;
            }
            if ((uVar14 < (uint)pHVar12->max_length) &&
               (pHVar12->vector[(int)uVar14].hashCode = uVar10, uVar14 < (uint)pHVar12->max_length))
            {
              pHVar12->vector[(int)uVar14].value = iVar6;
              pIVar11 = (pHVar1->fields)._buckets;
              if (pIVar11 == (Int32__Array *)0x0) goto code_?;
              if ((uVar13 < (uint)pIVar11->max_length) && (uVar14 < (uint)pHVar12->max_length)) {
                pHVar12->vector[(int)uVar14].next = pIVar11->vector[(int)uVar13] + -1;
                pIVar11 = (pHVar1->fields)._buckets;
                if (pIVar11 == (Int32__Array *)0x0) goto code_?;
                if (uVar13 < (uint)pIVar11->max_length) {
                  pIVar11->vector[(int)uVar13] = uVar14 + 1;
                  piVar18 = &(pHVar1->fields)._count;
                  *piVar18 = *piVar18 + 1;
                  piVar18 = &(pHVar1->fields)._version;
                  *piVar18 = *piVar18 + 1;
                  return;
                }
              }
            }
          }
code_?:
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnTeamRemoved(Object, TeamEventArgs) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_OnTeamRemoved
               (GameStatCounterManager *this,Object *sender,TeamEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__Contains_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__Remove_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((e != (TeamEventArgs *)0x0) &&
     (this_00 = (HashSet_1_System_Int32Enum_ *)(this->fields).activeTeams,
     this_00 != (HashSet_1_System_Int32Enum_ *)0x0)) {
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
             HashSet_1_System_Int32Enum__Contains
                       (this_00,(e->fields).team,
                        MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__Contains_MV__WorldObject__MVTeam_
                       );
    pMVar2 = 
    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__Remove_MV__WorldObject__MVTeam_
    ;
    if (bVar1 == 0) {
      uVar3 = func_?(&TypeInfo__System__Exception);
      this_02 = (Exception *)func_?(uVar3);
      pSVar4 = (String *)func_?(&StringLiteral_Team_does_not_exists);
      mscorlib.dll::System::Exception::Exception__ctor_1(this_02,pSVar4,(MethodInfo *)0x0);
      uVar3 = func_?(&
                                   MethodInfo__GameStatCounterManager__OnTeamRemoved_System__Object__MV__WorldObject__TeamEventArgs_
                                  );
      FUN_?(this_02,uVar3);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pHVar6 = (this->fields).activeTeams;
    if (pHVar6 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0) {
      iVar7 = (e->fields).team;
      if ((pHVar6->fields)._buckets != (Int32__Array *)0x0) {
        iVar8 = FUN_?(pHVar6,iVar7,
                               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__Remove_MV__WorldObject__MVTeam_
                               ->klass->rgctx_data[0x16].rgctxDataDummy);
        pIVar9 = (pHVar6->fields)._buckets;
        if (pIVar9 == (Int32__Array *)0x0) {
code_?:
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pHVar10 = (pHVar6->fields)._slots;
        uVar11 = iVar8 % (int)pIVar9->max_length;
        if ((uint)pIVar9->max_length <= uVar11) {
code_?:
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar12 = pIVar9->vector[(int)uVar11] - 1;
        if (-1 < (int)uVar12) {
          iVar13 = 0;
          uVar14 = 0xffffffff;
          if (pHVar10 == (HashSet_1_T_Slot_MV_WorldObject_MVTeam___Array *)0x0)
          goto code_?;
          do {
            uVar15 = uVar12;
            if ((uint)pHVar10->max_length <= uVar15) goto code_?;
            if (pHVar10->vector[(int)uVar15].hashCode == iVar8) {
              pIVar16 = (pHVar6->fields)._comparer;
              iVar17 = pHVar10->vector[(int)uVar15].value;
              if (pIVar16 == (IEqualityComparer_1_MV_WorldObject_MVTeam_ *)0x0)
              goto code_?;
              pvVar18 = pMVar2->klass->rgctx_data[4].rgctxDataDummy;
              if ((*(byte *)((longlong)pvVar18 + 0x135) & 1) == 0) {
                pvVar18 = (void *)FUN_?(pvVar18);
              }
              cVar19 = FUN_?(iVar7,pvVar18,pIVar16,iVar17,iVar7);
              if (cVar19 != '\0') {
                if ((int)uVar14 < 0) {
                  pIVar9 = (pHVar6->fields)._buckets;
                  if ((uint)pHVar10->max_length <= uVar15) goto code_?;
                  if (pIVar9 == (Int32__Array *)0x0) goto code_?;
                  if ((uint)pIVar9->max_length <= uVar11) goto code_?;
                  pIVar9->vector[(int)uVar11] = pHVar10->vector[(int)uVar15].next + 1;
                }
                else {
                  if (((uint)pHVar10->max_length <= uVar15) || ((uint)pHVar10->max_length <= uVar14))
                  goto code_?;
                  pHVar10->vector[(int)uVar14].next = pHVar10->vector[(int)uVar15].next;
                }
                if (uVar15 < (uint)pHVar10->max_length) {
                  pHVar10->vector[(int)uVar15].hashCode = -1;
                  if (uVar15 < (uint)pHVar10->max_length) {
                    pHVar10->vector[(int)uVar15].next = (pHVar6->fields)._freeList;
                    piVar20 = &(pHVar6->fields)._version;
                    *piVar20 = *piVar20 + 1;
                    iVar8 = (pHVar6->fields)._count + -1;
                    (pHVar6->fields)._count = iVar8;
                    if (iVar8 == 0) {
                      (pHVar6->fields)._lastIndex = 0;
                      uVar15 = 0xffffffff;
                    }
                    (pHVar6->fields)._freeList = uVar15;
                    return;
                  }
                }
                goto code_?;
              }
            }
            if ((int)pHVar10->max_length <= iVar13) {
              uVar3 = func_?(&TypeInfo__System__InvalidOperationException);
              this_01 = (ProtocolViolationException *)func_?(uVar3);
              pSVar4 = (String *)
                        func_?(&StringLiteral_Operations_that_change_non_concu);
              System.dll::System::Net::ProtocolViolationException::
              ProtocolViolationException__ctor_1(this_01,pSVar4,(MethodInfo *)0x0);
              FUN_?(this_01,pMVar2);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar13 = iVar13 + 1;
            if ((uint)pHVar10->max_length <= uVar15) goto code_?;
            uVar12 = pHVar10->vector[(int)uVar15].next;
            uVar14 = uVar15;
          } while (-1 < (int)uVar12);
        }
      }
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RemoveActorHighScoreFromTeam(Int32, MVTeam, GameStatCounterType) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_RemoveActorHighScoreFromTeam
               (GameStatCounterManager *this,int32_t newBestScore,MVTeam__Enum team,
               GameStatCounterType__Enum statType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).statTypeCounters;
  if (pDVar1 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
    pTVar2 = (TeamsCounter *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
             Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                       ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,statType & 0xff,
                        MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                       );
    if (newBestScore < 1) {
      if (pTVar2 != (TeamsCounter *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Remove_MV__WorldObject__MVTeam_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_00 = (pTVar2->fields).teamCounters;
        if (this_00 != (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__Remove
                    ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,team,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Remove_MV__WorldObject__MVTeam_
                    );
          pDVar3 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                    *)(this->fields).persistentStats;
          if (pDVar3 != (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                         *)0x0) {
            iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::
                    WorldObject::RuntimeEvents::ExplosionEvent+ExplosionValues]::
                    Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__FindEntry
                              (pDVar3,statType & 0xff,
                               MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                               ->klass->rgctx_data[0x21].method);
            if (iVar4 < 0) {
              return;
            }
            pDVar1 = (this->fields).persistentStats;
            if ((pDVar1 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) &&
               (pTVar2 = (TeamsCounter *)
                         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         ByteEnum,System::Object]::
                         Dictionary_2_System_ByteEnum_System_Object__get_Item
                                   ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,
                                    statType & 0xff,
                                    MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                                   ), pTVar2 != (TeamsCounter *)0x0)) {
              TeamsCounter::TeamsCounter_RemoveTeam(pTVar2,team,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    else if (pTVar2 != (TeamsCounter *)0x0) {
      TeamsCounter::TeamsCounter_UpdateTeam(pTVar2,team,newBestScore,(MethodInfo *)0x0);
      pDVar3 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                *)(this->fields).persistentStats;
      if (pDVar3 != (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                     *)0x0) {
        iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::
                WorldObject::RuntimeEvents::ExplosionEvent+ExplosionValues]::
                Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__FindEntry
                          (pDVar3,statType & 0xff,
                           MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                           ->klass->rgctx_data[0x21].method);
        if (iVar4 < 0) {
          return;
        }
        pDVar1 = (this->fields).persistentStats;
        if ((pDVar1 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) &&
           (pTVar2 = (TeamsCounter *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,
                                statType & 0xff,
                                MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                               ), pTVar2 != (TeamsCounter *)0x0)) {
          TeamsCounter::TeamsCounter_UpdateTeam(pTVar2,team,newBestScore,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RemoveStatsFromActor(Int32) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_RemoveStatsFromActor
               (GameStatCounterManager *this,int32_t actorNumber,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<GameStatCounterType,_TeamsCounter>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).statTypeCounters;
  if (pDVar1 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&pDStack_3 >> 0xc);
      lVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    uStack_8 = (ulonglong)(uint)(pDVar1->fields)._version;
    uStack_9 = 2;
    uStack_10 = 0;
    uStack_11 = 0;
    DStack_12._version = (undefined4)uStack_8;
    DStack_12._index = uStack_8._4_4_;
    DStack_12._current.key = 0;
    DStack_12._current._1_7_ = 0;
    DStack_12._current.value = (Object *)0x0;
    DStack_12._getEnumeratorRetType = 2;
    DStack_12._36_4_ = 0;
    pDStack_3 = pDVar1;
    DStack_12._dictionary = (Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1;
    while (bVar13 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                             (&DStack_12,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__MoveNext__
                             ), bVar13 != 0) {
      if ((TeamsCounter *)DStack_12._current.value == (TeamsCounter *)0x0) {
        FUN_?();
        FUN_?();
        goto code_?;
      }
      TeamsCounter::TeamsCounter_RemoveStatsFromActor
                ((TeamsCounter *)DStack_12._current.value,actorNumber,(MethodInfo *)0x0);
    }
    pDVar1 = (this->fields).persistentStats;
    if (pDVar1 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
      uStack_10 = 0;
      uStack_11 = 0;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&pDStack_3 >> 0xc);
        lVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      uStack_8 = (ulonglong)(uint)(pDVar1->fields)._version;
      uStack_9 = 2;
      DStack_12._version = (undefined4)uStack_8;
      DStack_12._index = uStack_8._4_4_;
      DStack_12._current.key = 0;
      DStack_12._current._1_7_ = 0;
      DStack_12._current.value = (Object *)0x0;
      DStack_12._getEnumeratorRetType = 2;
      DStack_12._36_4_ = 0;
      pDStack_3 = pDVar1;
      DStack_12._dictionary = (Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1;
      while( true ) {
        bVar13 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                          (&DStack_12,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__MoveNext__
                          );
        if (bVar13 == 0) {
          return;
        }
        if ((TeamsCounter *)DStack_12._current.value == (TeamsCounter *)0x0) break;
        TeamsCounter::TeamsCounter_RemoveStatsFromActor
                  ((TeamsCounter *)DStack_12._current.value,actorNumber,(MethodInfo *)0x0);
      }
code_?:
      FUN_?();
      FUN_?();
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void RemoveTeamScoreOnActorLeave(Int32, MVTeam) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_RemoveTeamScoreOnActorLeave
               (GameStatCounterManager *this,int32_t actorNr,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<GameStatCounterType>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameStatCounterType>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).statsToRemoveOnActorLeave;
  uVar2 = 0;
  uVar3 = uVar2;
  if (pLVar1 != (List_1_GameStatCounterType_ *)0x0) {
    while( true ) {
      uVar4 = (uint)uVar2;
      if ((pLVar1->fields)._size <= (int)uVar4) {
        return;
      }
      pLVar1 = (this->fields).statsToRemoveOnActorLeave;
      if (pLVar1 == (List_1_GameStatCounterType_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar4) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pGVar6 = (pLVar1->fields)._items;
      if (pGVar6 == (GameStatCounterType__Enum__Array *)0x0) break;
      if ((uint)pGVar6->max_length <= uVar4) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      bVar7 = *(byte *)((longlong)pGVar6->vector + uVar3);
      iVar8 = GameStatCounterManager_GetTeamCount(this,(uint)bVar7,team,(MethodInfo *)0x0);
      if ((0 < iVar8) &&
         (iVar9 = GameStatCounterManager_GetActorCount
                            (this,(uint)bVar7,team,actorNr,(MethodInfo *)0x0), iVar9 == iVar8)) {
        this_00 = (this->fields).statTypeCounters;
        aiStackX_8[0] = 0;
        if ((this_00 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) ||
           (this_01 = (TeamsCounter *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                                ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,(uint)bVar7,
                                 MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                                ), this_01 == (TeamsCounter *)0x0)) break;
        TeamsCounter::TeamsCounter_GetActorWithBestScore
                  (this_01,aiStackX_8,team,(uint)bVar7,actorNr,(MethodInfo *)0x0);
        GameStatCounterManager_RemoveActorHighScoreFromTeam
                  (this,aiStackX_8[0],team,(uint)bVar7,(MethodInfo *)0x0);
      }
      pLVar1 = (this->fields).statsToRemoveOnActorLeave;
      uVar2 = (ulonglong)(uVar4 + 1);
      uVar3 = uVar3 + 1;
      if (pLVar1 == (List_1_GameStatCounterType_ *)0x0) break;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SendChangeEvent(Int32, GameStatCounterType, Int32, MVTeam, Int32) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SendChangeEvent
               (GameStatCounterManager *this,int32_t count,GameStatCounterType__Enum counterType,
               int32_t actorNumber,MVTeam__Enum team,int32_t otherID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__OnCounterTypeChangedArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).OnCounterTypeChanged != (EventHandler_1_OnCounterTypeChangedArgs_ *)0x0) {
    pEVar1 = (this->fields).OnCounterTypeChanged;
    lVar2 = FUN_?(TypeInfo__OnCounterTypeChangedArgs);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__EventArgs);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    *(undefined4 *)(lVar2 + 0x20) = 0xffffffff;
    if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
      FUN_?();
    }
    *(MVTeam__Enum *)(lVar2 + 0x1c) = team;
    *(int32_t *)(lVar2 + 0x20) = otherID;
    *(int32_t *)(lVar2 + 0x10) = count;
    *(char *)(lVar2 + 0x14) = (char)counterType;
    *(int32_t *)(lVar2 + 0x18) = actorNumber;
    (*(pEVar1->fields)._._.invoke_impl)
              ((pEVar1->fields)._._.method_code,this,lVar2,(pEVar1->fields)._._.method);
  }
  return;
}


/* Void SetStat(Byte[]) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStat
               (GameStatCounterManager *this,Byte__Array *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__BytePacker);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (BytePacker *)FUN_?(TypeInfo__MV__WorldObject__BytePacker);
  MV::WorldObject::BytePacker::BytePacker__ctor_1(this_00,data,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Add_GameStatCounterType__TeamsCounter_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Remove_GameStatCounterType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Contains_GameStatCounterType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TeamsCounter);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this_00 != (BytePacker *)0x0) {
    uVar1 = MV::WorldObject::BytePacker::BytePacker_ReadByte(this_00,(MethodInfo *)0x0);
    key = (ByteEnum__Enum)uVar1;
    this_01 = (TeamsCounter *)FUN_?(TypeInfo__TeamsCounter);
    TeamsCounter::TeamsCounter__ctor_2(this_01,this_00,(MethodInfo *)0x0);
    pDVar2 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
              *)(this->fields).statTypeCounters;
    if (pDVar2 != (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                   *)0x0) {
      iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::
              WorldObject::RuntimeEvents::ExplosionEvent+ExplosionValues]::
              Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__FindEntry
                        (pDVar2,key,
                         MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                         ->klass->rgctx_data[0x21].method);
      if (-1 < iVar3) {
        pDVar4 = (this->fields).statTypeCounters;
        if (pDVar4 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
        Dictionary_2_System_ByteEnum_System_Object__Remove
                  ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar4,(uint)uVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Remove_GameStatCounterType_
                  );
      }
      pDVar4 = (this->fields).statTypeCounters;
      if (pDVar4 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
        behavior = CONCAT31((int3)((uint)in_R9D >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
        Dictionary_2_System_ByteEnum_System_Object__TryInsert
                  ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar4,key,(Object *)this_01,
                   behavior,MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Add_GameStatCounterType__TeamsCounter_
                            ->klass->rgctx_data[0x22].method);
        pLVar5 = (this->fields).sessionPersistentStats;
        if (pLVar5 != (List_1_GameStatCounterType_ *)0x0) {
          if (((pLVar5->fields)._size == 0) ||
             (iVar6 = FUN_?(pLVar5,uVar1,
                                    MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Contains_GameStatCounterType_
                                    ->klass->rgctx_data[0x17].rgctxDataDummy), iVar6 == -1)) {
            return;
          }
          pDVar2 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                    *)(this->fields).persistentStats;
          if (pDVar2 != (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                         *)0x0) {
            iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::
                    WorldObject::RuntimeEvents::ExplosionEvent+ExplosionValues]::
                    Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__FindEntry
                              (pDVar2,(uint)uVar1,
                               MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                               ->klass->rgctx_data[0x21].method);
            if (-1 < iVar3) {
              pDVar4 = (this->fields).persistentStats;
              if (pDVar4 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0)
              goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
              Object]::Dictionary_2_System_ByteEnum_System_Object__Remove
                        ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar4,(uint)uVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Remove_GameStatCounterType_
                        );
            }
            pDVar4 = (this->fields).persistentStats;
            if (pDVar4 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
              Object]::Dictionary_2_System_ByteEnum_System_Object__TryInsert
                        ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar4,key,(Object *)this_01
                         ,CONCAT31((int3)(behavior >> 8),2),
                         MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Add_GameStatCounterType__TeamsCounter_
                         ->klass->rgctx_data[0x22].method);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetStat(BytePacker) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStat_1
               (GameStatCounterManager *this,BytePacker *bp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Add_GameStatCounterType__TeamsCounter_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Remove_GameStatCounterType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Contains_GameStatCounterType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TeamsCounter);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (bp != (BytePacker *)0x0) {
    uVar1 = MV::WorldObject::BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
    key = (ByteEnum__Enum)uVar1;
    this_00 = (TeamsCounter *)FUN_?(TypeInfo__TeamsCounter);
    TeamsCounter::TeamsCounter__ctor_2(this_00,bp,(MethodInfo *)0x0);
    pDVar2 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
              *)(this->fields).statTypeCounters;
    if (pDVar2 != (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                   *)0x0) {
      iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::
              WorldObject::RuntimeEvents::ExplosionEvent+ExplosionValues]::
              Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__FindEntry
                        (pDVar2,key,
                         MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                         ->klass->rgctx_data[0x21].method);
      if (-1 < iVar3) {
        pDVar4 = (this->fields).statTypeCounters;
        if (pDVar4 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
        Dictionary_2_System_ByteEnum_System_Object__Remove
                  ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar4,(uint)uVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Remove_GameStatCounterType_
                  );
      }
      pDVar4 = (this->fields).statTypeCounters;
      if (pDVar4 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
        behavior = CONCAT31((int3)((uint)in_R9D >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
        Dictionary_2_System_ByteEnum_System_Object__TryInsert
                  ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar4,key,(Object *)this_00,
                   behavior,MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Add_GameStatCounterType__TeamsCounter_
                            ->klass->rgctx_data[0x22].method);
        pLVar5 = (this->fields).sessionPersistentStats;
        if (pLVar5 != (List_1_GameStatCounterType_ *)0x0) {
          if (((pLVar5->fields)._size == 0) ||
             (iVar6 = FUN_?(pLVar5,uVar1,
                                    MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Contains_GameStatCounterType_
                                    ->klass->rgctx_data[0x17].rgctxDataDummy), iVar6 == -1)) {
            return;
          }
          pDVar2 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                    *)(this->fields).persistentStats;
          if (pDVar2 != (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                         *)0x0) {
            iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::
                    WorldObject::RuntimeEvents::ExplosionEvent+ExplosionValues]::
                    Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__FindEntry
                              (pDVar2,(uint)uVar1,
                               MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                               ->klass->rgctx_data[0x21].method);
            if (-1 < iVar3) {
              pDVar4 = (this->fields).persistentStats;
              if (pDVar4 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0)
              goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
              Object]::Dictionary_2_System_ByteEnum_System_Object__Remove
                        ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar4,(uint)uVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Remove_GameStatCounterType_
                        );
            }
            pDVar4 = (this->fields).persistentStats;
            if (pDVar4 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
              Object]::Dictionary_2_System_ByteEnum_System_Object__TryInsert
                        ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar4,key,(Object *)this_00
                         ,CONCAT31((int3)(behavior >> 8),2),
                         MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Add_GameStatCounterType__TeamsCounter_
                         ->klass->rgctx_data[0x22].method);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetStats(Byte[]) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStats
               (GameStatCounterManager *this,Byte__Array *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__BytePacker);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (BytePacker *)FUN_?(TypeInfo__MV__WorldObject__BytePacker);
  MV::WorldObject::BytePacker::BytePacker__ctor_1(this_00,data,(MethodInfo *)0x0);
  if (this_00 != (BytePacker *)0x0) {
    uVar1 = MV::WorldObject::BytePacker::BytePacker_ReadInt32(this_00,(MethodInfo *)0x0);
    if (0 < (int)uVar1) {
      uVar2 = (ulonglong)uVar1;
      do {
        GameStatCounterManager_SetStat_1(this,this_00,(MethodInfo *)0x0);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* String ToString() */

String * MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_ToString
                   (GameStatCounterManager *this,MethodInfo *method)

{
  pGStackX_8 = this;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::MVTeam>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::MVTeam>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameStatCounterType);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<GameStatCounterType,_TeamsCounter>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<GameStatCounterType,_TeamsCounter>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MVTeam);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CounterType___0___Stats___1_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Active_teams__u000A);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Active_teams__u000A;
  auStack_2 = (undefined1  [8])0x0;
  uStack_3._0_4_ = 0;
  uStack_3._4_4_ = 0;
  KStack_4.key = 0;
  KStack_4._1_7_ = 0;
  KStack_4.value = (Object *)0x0;
  uStack_5._0_4_ = 0;
  uStack_5._4_4_ = 0;
  pSStackX_20 = StringLiteral_Active_teams__u000A;
  pHVar6 = (HashSet_1_System_UInt32_ *)(this->fields).activeTeams;
  if (pHVar6 != (HashSet_1_System_UInt32_ *)0x0) {
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&uStack_8 >> 0xc);
      lVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
      do {
        uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
        puVar11 = (ulonglong *)(lVar9 + 0xADDR);
        LOCK();
        bVar12 = uVar10 == *puVar11;
        if (bVar12) {
          *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar12);
    }
    pHStack_13 = (HashSet_1_T_Enumerator_System_UInt32_ *)
                 ((ulonglong)(uint)(pHVar6->fields)._version << 0x20);
    uStack_14 = 0;
    aHStack_15[0]._8_8_ = pHStack_13;
    aHStack_15[0]._current = 0;
    aHStack_15[0]._20_4_ = 0;
    uStack_8 = 0;
    pHStack_13 = aHStack_15;
    aHStack_15[0]._set = pHVar6;
    while (pSStackX_20 = pSVar1,
          bVar16 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                  UInt32]::HashSet_1_T_Enumerator_System_UInt32__MoveNext
                            (aHStack_15,
                             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
                            ), bVar16 != 0) {
      auStackX_18[0] = aHStack_15[0]._current;
      pOVar17 = (Object *)FUN_?(TypeInfo__MV__WorldObject__MVTeam,auStackX_18);
      pSVar18 = StringLiteral__0_u000A;
      PStack_19._arg0 = (Object *)0x0;
      PStack_19._arg1 = (Object *)0x0;
      PStack_19._arg2 = (Object *)0x0;
      PStack_19._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_19,pOVar17,(MethodInfo *)0x0);
      PStack_20._arg0 = PStack_19._arg0;
      PStack_20._arg1 = PStack_19._arg1;
      PStack_20._arg2 = PStack_19._arg2;
      PStack_20._args = PStack_19._args;
      pSVar18 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar18,&PStack_20,(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::String::String_Concat_4(pSVar1,pSVar18,(MethodInfo *)0x0);
    }
    pDVar21 = (this->fields).statTypeCounters;
    if (pDVar21 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
      PStack_20._arg2 = (Object *)0x0;
      PStack_20._args = (Object__Array *)0x0;
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&PStack_20 >> 0xc);
        lVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
        do {
          uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
          puVar11 = (ulonglong *)(lVar9 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
      PStack_20._arg1 = (Object *)(ulonglong)(uint)(pDVar21->fields)._version;
      uStack_22 = 2;
      uStack_3 = PStack_20._arg1;
      KStack_4.key = 0;
      KStack_4._1_7_ = 0;
      KStack_4.value = (Object *)0x0;
      uStack_5._0_4_ = 2;
      uStack_5._4_4_ = 0;
      uStack_8 = 0;
      pHStack_13 = (HashSet_1_T_Enumerator_System_UInt32_ *)auStack_2;
      PStack_20._arg0 = (Object *)pDVar21;
      auStack_2 = (undefined1  [8])pDVar21;
      while (bVar16 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Object]::
                     Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                               ((Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object_
                                 *)auStack_2,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__MoveNext__
                               ), pOVar17 = KStack_4.value, bVar16 != 0) {
        pGStackX_8 = (GameStatCounterManager *)CONCAT71(pGStackX_8._1_7_,KStack_4.key);
        arg0 = (Object *)FUN_?(TypeInfo__GameStatCounterType,&pGStackX_8);
        pSVar18 = StringLiteral_CounterType___0___Stats___1_;
        PStack_19._arg0 = (Object *)0x0;
        PStack_19._arg1 = (Object *)0x0;
        PStack_19._arg2 = (Object *)0x0;
        PStack_19._args = (Object__Array *)0x0;
        mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                  (&PStack_19,arg0,pOVar17,(MethodInfo *)0x0);
        PStack_20._arg0 = PStack_19._arg0;
        PStack_20._arg1 = PStack_19._arg1;
        PStack_20._arg2 = PStack_19._arg2;
        PStack_20._args = PStack_19._args;
        pSVar18 = mscorlib.dll::System::String::String_FormatHelper
                           ((IFormatProvider *)0x0,pSVar18,&PStack_20,(MethodInfo *)0x0);
        pSVar1 = mscorlib.dll::System::String::String_Concat_4(pSVar1,pSVar18,(MethodInfo *)0x0);
        pSStackX_20 = pSVar1;
      }
      return pSVar1;
    }
  }
  FUN_?();
  pcVar23 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar23)();
  return pSVar1;
}


/* Void Update(GameStatCounterType, Int32, MVTeam, Int32, Int32, Boolean) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Update
               (GameStatCounterManager *this,GameStatCounterType__Enum counterType,
               int32_t actorNumber,MVTeam__Enum team,int32_t value,int32_t otherID,
               bool includeTeamScore,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Contains_GameStatCounterType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((team == MVTeam__Enum_Server) && (actorNumber != 0)) {
    uVar1 = func_?(&TypeInfo__System__Exception);
    this_00 = (Exception *)func_?(uVar1);
    message = (String *)func_?(&StringLiteral_Team_Server_is_reserved_by_serve);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
    uVar1 = func_?(&
                                MethodInfo__GameStatCounterManager__Validate_int__MV__WorldObject__MVTeam_
                               );
    FUN_?(this_00,uVar1);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  GameStatCounterManager_AddIfNotPresent(this,counterType & 0xff,(MethodInfo *)0x0);
  pLVar3 = (this->fields).roundEndingStats;
  if (pLVar3 == (List_1_GameStatCounterType_ *)0x0) goto DAT_?;
  if (((pLVar3->fields)._size != 0) &&
     (iVar4 = FUN_?(pLVar3,counterType & 0xff), iVar4 != -1)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Clear__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((this->fields).statTypeCounters == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0)
    goto DAT_?;
    FUN_?();
    GameStatCounterManager_AddIfNotPresent(this,counterType & 0xff,(MethodInfo *)0x0);
  }
  pLVar3 = (this->fields).sessionPersistentStats;
  if (pLVar3 == (List_1_GameStatCounterType_ *)0x0) goto DAT_?;
  if (((pLVar3->fields)._size != 0) &&
     (iVar4 = FUN_?(pLVar3,counterType & 0xff,
                            MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Contains_GameStatCounterType_
                            ->klass->rgctx_data[0x17].rgctxDataDummy), iVar4 != -1)) {
    pDVar5 = (this->fields).persistentStats;
    if ((pDVar5 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) ||
       (pTVar6 = (TeamsCounter *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,counterType & 0xff
                            ,
                            MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                           ), pTVar6 == (TeamsCounter *)0x0)) goto DAT_?;
    iVar7 = TeamsCounter::TeamsCounter_GetActorCount(pTVar6,team,actorNumber,(MethodInfo *)0x0);
    switch(counterType & 0xff) {
    case GameStatCounterType__Enum_Flag:
    case GameStatCounterType__Enum_Time_1:
    case GameStatCounterType__Enum_GameCoin:
      if (iVar7 < value) {
code_?:
        pDVar5 = (this->fields).persistentStats;
        if ((pDVar5 == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) ||
           (pTVar6 = (TeamsCounter *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,
                                counterType & 0xff,
                                MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                               ), pTVar6 == (TeamsCounter *)0x0)) goto DAT_?;
        TeamsCounter::TeamsCounter_Update
                  (pTVar6,team,actorNumber,value,includeTeamScore,(MethodInfo *)0x0);
      }
      break;
    case GameStatCounterType__Enum_Collectible:
    case GameStatCounterType__Enum_TimeAttackFlag|GameStatCounterType__Enum_Kill:
                    /* WARNING: This code block may not be properly labeled as switch case */
      if ((iVar7 < 0) || ((0 < value && ((value < iVar7 || (iVar7 == 0))))))
      goto code_?;
    }
  }
  pDVar5 = (this->fields).statTypeCounters;
  if ((pDVar5 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) &&
     (pTVar6 = (TeamsCounter *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,counterType & 0xff,
                          MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                         ), pTVar6 != (TeamsCounter *)0x0)) {
    iVar7 = TeamsCounter::TeamsCounter_Update
                      (pTVar6,team,actorNumber,value,includeTeamScore,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__OnCounterTypeChangedArgs);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((this->fields).OnCounterTypeChanged != (EventHandler_1_OnCounterTypeChangedArgs_ *)0x0) {
      pEVar8 = (this->fields).OnCounterTypeChanged;
      lVar9 = FUN_?(TypeInfo__OnCounterTypeChangedArgs);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__EventArgs);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      *(undefined4 *)(lVar9 + 0x20) = 0xffffffff;
      if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
        FUN_?();
      }
      *(MVTeam__Enum *)(lVar9 + 0x1c) = team;
      *(int32_t *)(lVar9 + 0x20) = otherID;
      *(int32_t *)(lVar9 + 0x10) = iVar7;
      *(char *)(lVar9 + 0x14) = (char)counterType;
      *(int32_t *)(lVar9 + 0x18) = actorNumber;
      (*(pEVar8->fields)._._.invoke_impl)
                ((pEVar8->fields)._._.method_code,this,lVar9,(pEVar8->fields)._._.method,unaff_R15,
                 unaff_R14,unaff_RDI);
    }
    return;
  }
DAT_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    message = (String *)func_?(&StringLiteral_Team_Server_is_reserved_by_serve);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
    uVar1 = func_?(&
                                MethodInfo__GameStatCounterManager__Validate_int__MV__WorldObject__MVTeam_
                               );
    FUN_?(this_00,uVar1);
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__HashSet__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Add_GameStatCounterType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<GameStatCounterType>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<GameStatCounterType>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_GameStatCounterType_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<GameStatCounterType>);
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
    if (pGVar4 == (GameStatCounterType__Enum__Array *)0x0) goto code_?;
    uVar5 = (pLVar1->fields)._size;
    if (uVar5 < (uint)pGVar4->max_length) {
      (pLVar1->fields)._size = uVar5 + 1;
      if ((uint)pGVar4->max_length <= uVar5) goto code_?;
      *(int8_t *)((longlong)pGVar4->vector + (longlong)(int)uVar5) = 2;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
      List_1_System_SByte__AddWithResize
                ((List_1_System_SByte_ *)pLVar1,2,pMVar2->klass->rgctx_data[0xe].method);
    }
    bVar6 = iRam_? != 0;
    (this->fields).roundEndingStats = pLVar1;
    if (bVar6) {
      uVar5 = (uint)((ulonglong)&this->fields >> 0xc);
      lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar6 = uVar8 == *puVar9;
        if (bVar6) {
          *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    pLVar1 = (List_1_GameStatCounterType_ *)
             FUN_?(TypeInfo__System__Collections__Generic__List<GameStatCounterType>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
               MethodInfo__System__Collections__Generic__List<GameStatCounterType>__List__);
    pMVar2 = 
    MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Add_GameStatCounterType_;
    if (pLVar1 == (List_1_GameStatCounterType_ *)0x0) goto code_?;
    piVar3 = &(pLVar1->fields)._version;
    *piVar3 = *piVar3 + 1;
    pGVar4 = (pLVar1->fields)._items;
    if (pGVar4 == (GameStatCounterType__Enum__Array *)0x0) goto code_?;
    uVar5 = (pLVar1->fields)._size;
    if (uVar5 < (uint)pGVar4->max_length) {
      (pLVar1->fields)._size = uVar5 + 1;
      if ((uint)pGVar4->max_length <= uVar5) goto code_?;
      *(int8_t *)((longlong)pGVar4->vector + (longlong)(int)uVar5) = 2;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
      List_1_System_SByte__AddWithResize
                ((List_1_System_SByte_ *)pLVar1,2,pMVar2->klass->rgctx_data[0xe].method);
    }
    bVar6 = iRam_? != 0;
    (this->fields).sessionPersistentStats = pLVar1;
    if (bVar6) {
      uVar5 = (uint)((ulonglong)&(this->fields).sessionPersistentStats >> 0xc);
      lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar6 = uVar8 == *puVar9;
        if (bVar6) {
          *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    pLVar1 = (List_1_GameStatCounterType_ *)
             FUN_?(TypeInfo__System__Collections__Generic__List<GameStatCounterType>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
               MethodInfo__System__Collections__Generic__List<GameStatCounterType>__List__);
    pMVar2 = 
    MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Add_GameStatCounterType_;
    if (pLVar1 == (List_1_GameStatCounterType_ *)0x0) goto code_?;
    piVar3 = &(pLVar1->fields)._version;
    *piVar3 = *piVar3 + 1;
    pGVar4 = (pLVar1->fields)._items;
    if (pGVar4 == (GameStatCounterType__Enum__Array *)0x0) goto code_?;
    uVar5 = (pLVar1->fields)._size;
    if (uVar5 < (uint)pGVar4->max_length) {
      (pLVar1->fields)._size = uVar5 + 1;
      if ((uint)pGVar4->max_length <= uVar5) goto code_?;
      *(int8_t *)((longlong)pGVar4->vector + (longlong)(int)uVar5) = 2;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
      List_1_System_SByte__AddWithResize
                ((List_1_System_SByte_ *)pLVar1,2,pMVar2->klass->rgctx_data[0xe].method);
    }
    pMVar2 = 
    MethodInfo__System__Collections__Generic__List<GameStatCounterType>__Add_GameStatCounterType_;
    piVar3 = &(pLVar1->fields)._version;
    *piVar3 = *piVar3 + 1;
    pGVar4 = (pLVar1->fields)._items;
    if (pGVar4 != (GameStatCounterType__Enum__Array *)0x0) {
      uVar5 = (pLVar1->fields)._size;
      if (uVar5 < (uint)pGVar4->max_length) {
        (pLVar1->fields)._size = uVar5 + 1;
        if ((uint)pGVar4->max_length <= uVar5) {
code_?:
          FUN_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        *(int8_t *)((longlong)pGVar4->vector + (longlong)(int)uVar5) = 8;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
        List_1_System_SByte__AddWithResize
                  ((List_1_System_SByte_ *)pLVar1,8,pMVar2->klass->rgctx_data[0xe].method);
      }
      bVar6 = iRam_? != 0;
      (this->fields).statsToRemoveOnActorLeave = pLVar1;
      if (bVar6) {
        uVar5 = (uint)((ulonglong)&(this->fields).statsToRemoveOnActorLeave >> 0xc);
        lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar6 = uVar8 == *puVar9;
          if (bVar6) {
            *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      this_00 = (HashSet_1_System_Int32Enum_ *)
                FUN_?(
                             TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>
                             );
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
      HashSet_1_System_Int32Enum___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__HashSet__
                );
      bVar6 = iRam_? != 0;
      (this->fields).activeTeams = (HashSet_1_MV_WorldObject_MVTeam_ *)this_00;
      if (bVar6) {
        uVar5 = (uint)((ulonglong)&(this->fields).activeTeams >> 0xc);
        lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar6 = uVar8 == *puVar9;
          if (bVar6) {
            *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      pDVar11 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                *)FUN_?(
                               TypeInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>
                               );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
      RuntimeEvents::ExplosionEvent+ExplosionValues]::
      Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
                (pDVar11,
                 MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Dictionary__
                );
      bVar6 = iRam_? != 0;
      (this->fields).statTypeCounters = (Dictionary_2_GameStatCounterType_TeamsCounter_ *)pDVar11;
      if (bVar6) {
        uVar5 = (uint)((ulonglong)&(this->fields).statTypeCounters >> 0xc);
        lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar6 = uVar8 == *puVar9;
          if (bVar6) {
            *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      if ((this->fields).persistentStats == (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
        pDVar11 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                  *)FUN_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>
                                 );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
        RuntimeEvents::ExplosionEvent+ExplosionValues]::
        Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
                  (pDVar11,
                   MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Dictionary__
                  );
        bVar6 = iRam_? != 0;
        (this->fields).persistentStats = (Dictionary_2_GameStatCounterType_TeamsCounter_ *)pDVar11;
        if (bVar6) {
          uVar5 = (uint)((ulonglong)&(this->fields).persistentStats >> 0xc);
          lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar6 = uVar8 == *puVar9;
            if (bVar6) {
              *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void add_OnCounterTypeChanged(EventHandler`1[OnCounterTypeChangedArgs]) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_add_OnCounterTypeChanged
               (GameStatCounterManager *this,EventHandler_1_OnCounterTypeChangedArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnCounterTypeChanged;
  a = (this->fields).OnCounterTypeChanged;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_OnCounterTypeChangedArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_OnCounterTypeChangedArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
      if (pEVar4 == (EventHandler_1_OnCounterTypeChangedArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = a == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = a;
    }
    UNLOCK();
    pEVar4 = a;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != a;
    a = pEVar4;
  } while (bVar7);
  return;
}


/* HashSet`1[MV.WorldObject.MVTeam] get_ActiveTeams() */

HashSet_1_MV_WorldObject_MVTeam_ *
MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
          (GameStatCounterManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__HashSet_System__Collections__Generic__IEnumerable<MV::WorldObject::MVTeam>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  collection = (this->fields).activeTeams;
  this_00 = (HashSet_1_System_Int32Enum_ *)
            FUN_?(TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>);
  pMVar1 = 
  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__HashSet_System__Collections__Generic__IEnumerable<MV::WorldObject::MVTeam>_
  ;
  comparer = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Int32Enum]::
             EqualityComparer_1_System_Int32Enum__get_Default
                       (MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__HashSet_System__Collections__Generic__IEnumerable<MV::WorldObject::MVTeam>_
                        ->klass->rgctx_data->method);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
  HashSet_1_System_Int32Enum___ctor_4
            (this_00,(IEnumerable_1_System_Int32Enum_ *)collection,
             (IEqualityComparer_1_System_Int32Enum_ *)comparer,pMVar1->klass->rgctx_data[8].method);
  return (HashSet_1_MV_WorldObject_MVTeam_ *)this_00;
}


/* Void remove_OnCounterTypeChanged(EventHandler`1[OnCounterTypeChangedArgs]) */

void MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_remove_OnCounterTypeChanged
               (GameStatCounterManager *this,EventHandler_1_OnCounterTypeChangedArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnCounterTypeChanged;
  source = (this->fields).OnCounterTypeChanged;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_OnCounterTypeChangedArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_OnCounterTypeChangedArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
      if (pEVar4 == (EventHandler_1_OnCounterTypeChangedArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = source == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = source;
    }
    UNLOCK();
    pEVar4 = source;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != source;
    source = pEVar4;
  } while (bVar7);
  return;
}

