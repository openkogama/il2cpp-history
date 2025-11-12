
/* Void AddIfNotPresent(MVTeam) */

void MVWorldObject.dll::TeamsCounter::TeamsCounter_AddIfNotPresent
               (TeamsCounter *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Add_MV__WorldObject__MVTeam__TeamCounter_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__ContainsKey_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TeamCounter);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)(this->fields).teamCounters;
  if (this_00 == (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
          Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                    (this_00,team,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__ContainsKey_MV__WorldObject__MVTeam_
                     ->klass->rgctx_data[0x21].method);
  if (iVar2 < 0) {
    this_01 = (this->fields).teamCounters;
    value = (Object *)FUN_?(TypeInfo__TeamCounter);
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_02 = (Object__Class *)
              FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::
    Text::TextResourceManager+FontAssetRef]::
    Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
              ((Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
                *)this_02,
               MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Dictionary__
              );
    bVar3 = iRam_? != 0;
    value[1].klass = this_02;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)(value + 1) >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    if (this_01 == (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0)
    goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,team,value,
               CONCAT31((int3)((uint)in_R9D >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Add_MV__WorldObject__MVTeam__TeamCounter_
               ->klass->rgctx_data[0x22].method);
  }
  return;
}


/* Int32 GetActorCount(MVTeam, Int32) */

int32_t MVWorldObject.dll::TeamsCounter::TeamsCounter_GetActorCount
                  (TeamsCounter *this,MVTeam__Enum team,int32_t actorNumber,MethodInfo *method)

{
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
  this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)(this->fields).teamCounters;
  if (this_00 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
            Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                      (this_00,team,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__ContainsKey_MV__WorldObject__MVTeam_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      return 0;
    }
    this_01 = (this->fields).teamCounters;
    if ((this_01 != (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) &&
       (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,team,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                           ), pOVar2 != (Object *)0x0)) {
      if (cRam_? == '\0') {
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
      if (pOVar2[1].klass != (Object__Class *)0x0) {
        iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                          ((Dictionary_2_System_Int32_UnityEngine_Vector3_ *)pOVar2[1].klass,
                           actorNumber,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__ContainsKey_int_
                           ->klass->rgctx_data[0x21].method);
        if (iVar1 < 0) {
          return 0;
        }
        if ((pOVar2[1].klass != (Object__Class *)0x0) &&
           (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Object]::Dictionary_2_System_Int32_System_Object__get_Item
                               ((Dictionary_2_System_Int32_System_Object_ *)pOVar2[1].klass,
                                actorNumber,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__get_Item_int_
                               ), pOVar2 != (Object *)0x0)) {
          return *(int32_t *)&pOVar2[1].klass;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar1 = (*pcVar3)();
  return iVar1;
}


/* Void GetActorWithBestScore(Int32 ByRef, MVTeam, GameStatCounterType, Int32) */

void MVWorldObject.dll::TeamsCounter::TeamsCounter_GetActorWithBestScore
               (TeamsCounter *this,int32_t *score,MVTeam__Enum team,
               GameStatCounterType__Enum statType,int32_t excludedActorNr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_ActorCounter>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_ActorCounter>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  *score = 0;
  this_00 = (this->fields).teamCounters;
  if (((this_00 != (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) &&
      (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,team,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                          ), pOVar1 != (Object *)0x0)) &&
     (pOStack_2 = pOVar1[1].klass, pOStack_2 != (Object__Class *)0x0)) {
    uStack_3 = 0;
    uStack_4 = 0;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&pOStack_2 >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
    uStack_9 = (ulonglong)*(uint *)&(pOStack_2->_0).byval_arg.field_0xc;
    uStack_10 = 2;
    DStack_11._version = (undefined4)uStack_9;
    DStack_11._index = uStack_9._4_4_;
    DStack_11._current.key = 0;
    DStack_11._current._4_4_ = 0;
    DStack_11._current.value = (Object *)0x0;
    DStack_11._getEnumeratorRetType = 2;
    DStack_11._36_4_ = 0;
    DStack_11._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pOStack_2;
    while( true ) {
      do {
        bVar12 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (&DStack_11,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__MoveNext__
                          );
        if (bVar12 == 0) {
          return;
        }
      } while (DStack_11._current.key == excludedActorNr);
      if (DStack_11._current.value == (Object *)0x0) break;
      iVar13 = *(int *)&DStack_11._current.value[1].klass;
      if (0 < iVar13) {
        switch(statType & 0xff) {
        case GameStatCounterType__Enum_Flag:
        case GameStatCounterType__Enum_Time_1:
        case GameStatCounterType__Enum_GameCoin:
          if (*score < iVar13) {
            *score = iVar13;
          }
          break;
        case GameStatCounterType__Enum_Collectible:
        case GameStatCounterType__Enum_TimeAttackFlag|GameStatCounterType__Enum_Kill:
                    /* WARNING: This code block may not be properly labeled as switch case */
          if (((*score < 0) || (iVar13 < *score)) || (*score == 0)) {
            *score = iVar13;
          }
        }
      }
    }
    FUN_?();
    FUN_?();
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
    FUN_?(&TypeInfo__HighScores);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  teamCounters = (this->fields).teamCounters;
  this_00 = (HighScores *)FUN_?(TypeInfo__HighScores);
  HighScores::HighScores__ctor
            (this_00,gameStatCounterType & 0xff,teamCounters,presentAsTeamScore,
             CONCAT31((int3)((uint)in_stack_1 >> 8),
                      (char)winningConditionPresentStyle),byAscending,(MethodInfo *)0x0);
  return this_00;
}


/* Int32 GetTeamCount(MVTeam) */

int32_t MVWorldObject.dll::TeamsCounter::TeamsCounter_GetTeamCount
                  (TeamsCounter *this,MVTeam__Enum team,MethodInfo *method)

{
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
  this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)(this->fields).teamCounters;
  if (this_00 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
            Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                      (this_00,team,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__ContainsKey_MV__WorldObject__MVTeam_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      return 0;
    }
    this_01 = (this->fields).teamCounters;
    if (this_01 != (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,team,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                         );
      if (pOVar2 != (Object *)0x0) {
        return *(int32_t *)&pOVar2[1].monitor;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar1 = (*pcVar3)();
  return iVar1;
}


/* Int32 Increment(MVTeam, Int32, Int32, Boolean) */

int32_t MVWorldObject.dll::TeamsCounter::TeamsCounter_Increment
                  (TeamsCounter *this,MVTeam__Enum team,int32_t actorNumber,int32_t value,
                  bool includeTeamScore,MethodInfo *method)

{
  iVar1 = value;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TeamsCounter_AddIfNotPresent(this,team,(MethodInfo *)0x0);
  this_00 = (this->fields).teamCounters;
  if (this_00 != (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,team,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                       );
    if (pOVar2 != (Object *)0x0) {
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
      if (pOVar2[1].klass != (Object__Class *)0x0) {
        iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                          ((Dictionary_2_System_Int32_UnityEngine_Vector3_ *)pOVar2[1].klass,
                           actorNumber,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__ContainsKey_int_
                           ->klass->rgctx_data[0x21].method);
        if (iVar3 < 0) {
          this_01 = pOVar2[1].klass;
          value_00 = (Object *)FUN_?(TypeInfo__ActorCounter);
          *(undefined4 *)&value_00[1].klass = 0;
          if (this_01 == (Object__Class *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__TryInsert
                    ((Dictionary_2_System_Int32_System_Object_ *)this_01,actorNumber,value_00,
                     CONCAT31((int3)((uint)iVar1 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Add_int__ActorCounter_
                     ->klass->rgctx_data[0x22].method);
        }
        if (includeTeamScore != 0) {
          *(int *)&pOVar2[1].monitor = *(int *)&pOVar2[1].monitor + value;
        }
        if (pOVar2[1].klass != (Object__Class *)0x0) {
          pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)pOVar2[1].klass,
                              actorNumber,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__get_Item_int_
                             );
          if (pOVar2 != (Object *)0x0) {
            iVar4 = *(int *)&pOVar2[1].klass + value;
            *(int *)&pOVar2[1].klass = iVar4;
            return iVar4;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  iVar1 = (*pcVar5)();
  return iVar1;
}


/* Void RemoveStatsFromActor(Int32) */

void MVWorldObject.dll::TeamsCounter::TeamsCounter_RemoveStatsFromActor
               (TeamsCounter *this,int32_t actorNumber,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_TeamCounter>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_1 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).teamCounters;
  if (pDStack_1 == (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&pDStack_1 >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  uStack_7 = (ulonglong)(uint)(pDStack_1->fields)._version;
  uStack_8 = 2;
  uStack_9 = 0;
  uStack_10 = 0;
  DStack_11._version = (undefined4)uStack_7;
  DStack_11._index = uStack_7._4_4_;
  DStack_11._current.key = 0;
  DStack_11._current._4_4_ = 0;
  DStack_11._current.value = (Object *)0x0;
  DStack_11._getEnumeratorRetType = 2;
  DStack_11._36_4_ = 0;
  DStack_11._dictionary = pDStack_1;
  while( true ) {
    bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::UInt32,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                      (&DStack_11,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__MoveNext__
                      );
    pOVar13 = DStack_11._current.value;
    if (bVar12 == 0) {
      return;
    }
    if (DStack_11._current.value == (Object *)0x0) break;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Remove_int_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pOVar13[1].klass == (Object__Class *)0x0) {
      FUN_?();
      break;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Remove
              ((Dictionary_2_System_Int32_System_Object_ *)pOVar13[1].klass,actorNumber,
               MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Remove_int_)
    ;
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RemoveTeam(MVTeam) */

void MVWorldObject.dll::TeamsCounter::TeamsCounter_RemoveTeam
               (TeamsCounter *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Remove_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Remove_MV__WorldObject__MVTeam_
  ;
  pDVar2 = (this->fields).teamCounters;
  if (pDVar2 == (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar4 = (ulonglong)team;
  if ((pDVar2->fields)._buckets != (Int32__Array *)0x0) {
    pIVar5 = (pDVar2->fields)._comparer;
    if (pIVar5 != (IEqualityComparer_1_MV_WorldObject_MVTeam_ *)0x0) {
      pvVar6 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Remove_MV__WorldObject__MVTeam_
                ->klass->rgctx_data[1].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar6 + 0x135) & 1) == 0) {
        pvVar6 = (void *)FUN_?(pvVar6);
      }
      team = FUN_?(1,pvVar6,pIVar5,uVar4);
    }
    pIVar7 = (pDVar2->fields)._buckets;
    if (pIVar7 == (Int32__Array *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar8 = (int)(team & 0x7fffffff) % (int)pIVar7->max_length;
    if ((uint)pIVar7->max_length <= uVar8) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar9 = pIVar7->vector[(int)uVar8] - 1;
    uVar10 = 0xffffffff;
    while (uVar11 = uVar9, -1 < (int)uVar11) {
      pDVar12 = (pDVar2->fields)._entries;
      if (pDVar12 == (Dictionary_2_TKey_TValue_Entry_MV_WorldObject_MVTeam_TeamCounter___Array *)0x0)
      goto code_?;
      if ((uint)pDVar12->max_length <= uVar11) goto code_?;
      if (pDVar12->vector[(int)uVar11].hashCode == (team & 0x7fffffff)) {
        pIVar13 = pMVar1->klass->rgctx_data;
        if ((pDVar2->fields)._comparer == (IEqualityComparer_1_MV_WorldObject_MVTeam_ *)0x0) {
          pEVar14 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::
                    Int32Enum]::EqualityComparer_1_System_Int32Enum__get_Default(pIVar13[3].method);
          if (pEVar14 == (EqualityComparer_1_System_Int32Enum_ *)0x0) goto code_?;
          cVar15 = (*(pEVar14->klass->vtable).__unknown.methodPtr)
                             (pEVar14,(ulonglong)(uint)pDVar12->vector[(int)uVar11].key,uVar4,
                              (pEVar14->klass->vtable).__unknown.method);
        }
        else {
          pvVar6 = pIVar13[1].rgctxDataDummy;
          if ((*(byte *)((longlong)pvVar6 + 0x135) & 1) == 0) {
            FUN_?(pvVar6);
          }
          cVar15 = FUN_?();
        }
        if (cVar15 != '\0') {
          if ((int)uVar10 < 0) {
            pIVar7 = (pDVar2->fields)._buckets;
            if (pIVar7 == (Int32__Array *)0x0) goto code_?;
            if ((uint)pIVar7->max_length <= uVar8) goto code_?;
            pIVar7->vector[(int)uVar8] = pDVar12->vector[(int)uVar11].next + 1;
          }
          else {
            pDVar16 = (pDVar2->fields)._entries;
            if (pDVar16 == (Dictionary_2_TKey_TValue_Entry_MV_WorldObject_MVTeam_TeamCounter___Array
                           *)0x0) goto code_?;
            if ((uint)pDVar16->max_length <= uVar10) goto code_?;
            pDVar16->vector[(int)uVar10].next = pDVar12->vector[(int)uVar11].next;
          }
          pDVar12->vector[(int)uVar11].hashCode = -1;
          pDVar12->vector[(int)uVar11].next = (pDVar2->fields)._freeList;
          pDVar12->vector[(int)uVar11].value = (TeamCounter *)0x0;
          piVar17 = &(pDVar2->fields)._freeCount;
          *piVar17 = *piVar17 + 1;
          piVar17 = &(pDVar2->fields)._version;
          *piVar17 = *piVar17 + 1;
          (pDVar2->fields)._freeList = uVar11;
          return;
        }
      }
      uVar10 = uVar11;
      uVar9 = pDVar12->vector[(int)uVar11].next;
    }
  }
  return;
}


/* String ToString() */

String * MVWorldObject.dll::TeamsCounter::TeamsCounter_ToString
                   (TeamsCounter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_TeamCounter>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_TeamCounter>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MVTeam);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000ATeam___0___TeamCounter___1_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = ::StringLiteral__;
  PStack_2._arg0 = (Object *)(this->fields).teamCounters;
  if ((Dictionary_2_System_UInt32_System_Object_ *)PStack_2._arg0 ==
      (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    pSVar1 = (String *)(*pcVar3)();
    return pSVar1;
  }
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&PStack_2 >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  PStack_2._arg1 =
       (Object *)
       (ulonglong)
       (uint)(((Dictionary_2_System_UInt32_System_Object_ *)PStack_2._arg0)->fields)._version;
  uStack_8 = 2;
  auStack_9._8_8_ = PStack_2._arg1;
  KStack_10.key = 0;
  KStack_10._4_4_ = 0;
  KStack_10.value = (Object *)0x0;
  uStack_11._0_4_ = 2;
  uStack_11._4_4_ = 0;
  uStack_12 = 0;
  puStack_13 = auStack_9;
  auStack_9._0_8_ = PStack_2._arg0;
  while (bVar14 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                 Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                           ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                            auStack_9,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__MoveNext__
                           ), arg1 = KStack_10.value, bVar14 != 0) {
    auStackX_8[0] = KStack_10.key;
    arg0 = (Object *)FUN_?(TypeInfo__MV__WorldObject__MVTeam,auStackX_8);
    pSVar15 = StringLiteral_u000ATeam___0___TeamCounter___1_u000A;
    PStack_16._arg0 = (Object *)0x0;
    PStack_16._arg1 = (Object *)0x0;
    PStack_16._arg2 = (Object *)0x0;
    PStack_16._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1(&PStack_16,arg0,arg1,(MethodInfo *)0x0);
    PStack_2._arg0 = PStack_16._arg0;
    PStack_2._arg1 = PStack_16._arg1;
    PStack_2._arg2 = PStack_16._arg2;
    PStack_2._args = PStack_16._args;
    pSVar15 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar15,&PStack_2,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_4(pSVar1,pSVar15,(MethodInfo *)0x0);
  }
  return pSVar1;
}


/* Int32 Update(MVTeam, Int32, Int32, Boolean) */

int32_t MVWorldObject.dll::TeamsCounter::TeamsCounter_Update
                  (TeamsCounter *this,MVTeam__Enum team,int32_t actorNumber,int32_t value,
                  bool includeTeamScore,MethodInfo *method)

{
  iVar1 = value;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TeamsCounter_AddIfNotPresent(this,team,(MethodInfo *)0x0);
  this_00 = (this->fields).teamCounters;
  if (this_00 != (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,team,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                       );
    if (pOVar2 != (Object *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__ActorCounter);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__set_Item_int__ActorCounter_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (includeTeamScore != 0) {
        *(int32_t *)&pOVar2[1].monitor = value;
      }
      this_01 = pOVar2[1].klass;
      value_00 = (Object *)FUN_?(TypeInfo__ActorCounter);
      *(int32_t *)&value_00[1].klass = value;
      if (this_01 != (Object__Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryInsert
                  ((Dictionary_2_System_Int32_System_Object_ *)this_01,actorNumber,value_00,
                   CONCAT31((int3)((uint)iVar1 >> 8),1),
                   MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__set_Item_int__ActorCounter_
                   ->klass->rgctx_data[0x22].method);
        if (pOVar2[1].klass != (Object__Class *)0x0) {
          pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)pOVar2[1].klass,
                              actorNumber,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__get_Item_int_
                             );
          if (pOVar2 != (Object *)0x0) {
            return *(int32_t *)&pOVar2[1].klass;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar1 = (*pcVar3)();
  return iVar1;
}


/* Int32 UpdateTeam(MVTeam, Int32) */

int32_t MVWorldObject.dll::TeamsCounter::TeamsCounter_UpdateTeam
                  (TeamsCounter *this,MVTeam__Enum team,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TeamsCounter_AddIfNotPresent(this,team,(MethodInfo *)0x0);
  this_00 = (this->fields).teamCounters;
  if (this_00 != (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,team,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                       );
    if (pOVar1 != (Object *)0x0) {
      *(int32_t *)&pOVar1[1].monitor = value;
      return value;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* TeamsCounter() */

void MVWorldObject.dll::TeamsCounter::TeamsCounter__ctor(TeamsCounter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).teamCounters = (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}


/* TeamsCounter(TeamsCounter) */

void MVWorldObject.dll::TeamsCounter::TeamsCounter__ctor_1
               (TeamsCounter *this,TeamsCounter *teamCounterCopy,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_TeamCounter>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_ActorCounter>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_TeamCounter>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_ActorCounter>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  DStack_1._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_1._version = 0;
  DStack_1._index = 0;
  DStack_1._current.key = 0;
  DStack_1._current._4_4_ = 0;
  DStack_1._current.value = (Object *)0x0;
  DStack_1._getEnumeratorRetType = 0;
  DStack_1._36_4_ = 0;
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Dictionary__
            );
  (this->fields).teamCounters = (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)this_00;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  if ((teamCounterCopy == (TeamsCounter *)0x0) ||
     (pOStack_7 = (Object__Class *)(teamCounterCopy->fields).teamCounters,
     pOStack_7 == (Object__Class *)0x0)) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&pOStack_7 >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  uStack_9 = (ulonglong)*(uint *)&(pOStack_7->_0).byval_arg.field_0xc;
  uStack_10 = 2;
  uStack_11 = 0;
  uStack_12 = 0;
  DStack_13._version = (undefined4)uStack_9;
  DStack_13._index = uStack_9._4_4_;
  DStack_13._current.key = 0;
  DStack_13._current._4_4_ = 0;
  DStack_13._current.value = (Object *)0x0;
  DStack_13._getEnumeratorRetType = 2;
  DStack_13._36_4_ = 0;
  uStack_14 = 0;
  pDStack_15 = &DStack_13;
  DStack_13._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pOStack_7;
  while( true ) {
    bVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::UInt32,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                      (&DStack_13,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__MoveNext__
                      );
    if (bVar16 == 0) {
      return;
    }
    KStack_17.key = DStack_13._current.key;
    KStack_17._4_4_ = DStack_13._current._4_4_;
    uVar18 = KStack_17._0_8_;
    KStack_17.value = DStack_13._current.value;
    if (DStack_13._current.value == (Object *)0x0) goto code_?;
    pOVar19 = DStack_13._current.value[1].klass;
    if (pOVar19 == (Object__Class *)0x0) break;
    uStack_11 = 0;
    uStack_12 = 0;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&pOStack_7 >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    uStack_9 = (ulonglong)*(uint *)&(pOVar19->_0).byval_arg.field_0xc;
    uStack_10 = 2;
    DStack_1._version = (undefined4)uStack_9;
    DStack_1._index = uStack_9._4_4_;
    DStack_1._current.key = 0;
    DStack_1._current._4_4_ = 0;
    DStack_1._current.value = (Object *)0x0;
    DStack_1._getEnumeratorRetType = 2;
    DStack_1._36_4_ = 0;
    uStack_20 = 0;
    pDStack_21 = &DStack_1;
    KStack_17.key = DStack_13._current.key;
    team = KStack_17.key;
    pOStack_7 = pOVar19;
    KStack_17._0_8_ = uVar18;
    DStack_1._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pOVar19;
    while (bVar16 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                             (&DStack_1,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__MoveNext__
                             ), bVar16 != 0) {
      if (DStack_1._current.value == (Object *)0x0) {
        FUN_?();
        FUN_?();
        goto code_?;
      }
      TeamsCounter_Update(this,team,DStack_1._current.key,
                          *(int32_t *)&DStack_1._current.value[1].klass,0,(MethodInfo *)0x0);
    }
    if (KStack_17.value == (Object *)0x0) {
code_?:
      FUN_?();
      break;
    }
    TeamsCounter_UpdateTeam(this,team,*(int32_t *)&KStack_17.value[1].monitor,(MethodInfo *)0x0);
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* TeamsCounter(BytePacker) */

void MVWorldObject.dll::TeamsCounter::TeamsCounter__ctor_2
               (TeamsCounter *this,BytePacker *bp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Add_MV__WorldObject__MVTeam__TeamCounter_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TeamCounter);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).teamCounters = (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (bp == (BytePacker *)0x0) {
code_?:
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar7 = MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
  iVar8 = 0;
  if (0 < iVar7) {
    do {
      uVar9 = MV::WorldObject::BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
      value = (Object *)FUN_?(TypeInfo__TeamCounter);
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
                      MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Dictionary__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_02 = (Object__Class *)
                FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>)
      ;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::
      Text::TextResourceManager+FontAssetRef]::
      Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
                ((Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
                  *)this_02,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Dictionary__
                );
      bVar1 = iRam_? != 0;
      value[1].klass = this_02;
      if (bVar1) {
        uVar2 = (uint)((ulonglong)(value + 1) >> 0xc);
        uVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar5 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar1 = uVar10 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar10 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      iVar11 = MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      *(int32_t *)&value[1].monitor = iVar11;
      iVar11 = MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      iVar12 = 0;
      if (0 < iVar11) {
        do {
          key = MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
          value_00 = (Object *)FUN_?(TypeInfo__ActorCounter);
          iVar13 = MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
          *(int32_t *)&value_00[1].klass = iVar13;
          if (value[1].klass == (Object__Class *)0x0) goto code_?;
          in_R9D = CONCAT31((int3)(in_R9D >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__TryInsert
                    ((Dictionary_2_System_Int32_System_Object_ *)value[1].klass,key,value_00,in_R9D,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Add_int__ActorCounter_
                     ->klass->rgctx_data[0x22].method);
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar11);
      }
      this_00 = (this->fields).teamCounters;
      if (this_00 == (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0)
      goto code_?;
      in_R9D = CONCAT31((int3)(in_R9D >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,(uint)uVar9,value,in_R9D,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Add_MV__WorldObject__MVTeam__TeamCounter_
                 ->klass->rgctx_data[0x22].method);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar7);
  }
  return;
}

