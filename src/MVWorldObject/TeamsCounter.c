
/* Void AddIfNotPresent(MVTeam) */

void MVWorldObject.dll::TeamsCounter::TeamsCounter_AddIfNotPresent
               (TeamsCounter *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Add_MV__WorldObject__MVTeam__TeamCounter_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__ContainsKey_MV__WorldObject__MVTeam_
                   );
    func_?(&TypeInfo__TeamCounter);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).teamCounters;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar1,team,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__ContainsKey_MV__WorldObject__MVTeam_
                      );
    if (bVar2 == 0) {
      pDVar1 = (this->fields).teamCounters;
      value = (Object *)func_?(TypeInfo__TeamCounter);
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Dictionary__
                       );
        func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>);
        cRam_? = '\x01';
      }
      this_00 = (Object__Class *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>
                               );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::
      Text::TextResourceManager+FontAssetRef]::
      Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
                ((Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
                  *)this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Dictionary__
                );
      value[1].klass = this_00;
      func_?(value + 1,this_00);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (value,ExceptionArgument__Enum_obj,in_stack_3);
      if (pDVar1 == (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__Add
                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,team,value,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Add_MV__WorldObject__MVTeam__TeamCounter_
                );
    }
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Int32 GetActorCount(MVTeam, Int32) */

int32_t MVWorldObject.dll::TeamsCounter::TeamsCounter_GetActorCount
                  (TeamsCounter *this,MVTeam__Enum team,int32_t actorNumber,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__ContainsKey_MV__WorldObject__MVTeam_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).teamCounters;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar1,team,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__ContainsKey_MV__WorldObject__MVTeam_
                      );
    if (bVar2 == 0) {
      return 0;
    }
    pDVar1 = (this->fields).teamCounters;
    if ((pDVar1 != (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) &&
       (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,team,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                           ), pOVar3 != (Object *)0x0)) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      if (pOVar3[1].klass != (Object__Class *)0x0) {
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                          ((Dictionary_2_System_Int32_System_Single_ *)pOVar3[1].klass,actorNumber,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__ContainsKey_int_
                          );
        if (bVar2 == 0) {
          return 0;
        }
        if ((pOVar3[1].klass != (Object__Class *)0x0) &&
           (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Object]::Dictionary_2_System_Int32_System_Object__get_Item
                               ((Dictionary_2_System_Int32_System_Object_ *)pOVar3[1].klass,
                                actorNumber,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__get_Item_int_
                               ), pOVar3 != (Object *)0x0)) {
          return (int32_t)pOVar3[1].klass;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
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
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_ActorCounter>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_ActorCounter>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = 0;
  DStack_6._16_8_ = 0;
  *score = 0;
  this_00 = (this->fields).teamCounters;
  if (((this_00 != (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) &&
      (pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,team,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                          ), pOVar7 != (Object *)0x0)) && (pOVar7[1].klass != (Object__Class *)0x0))
  {
    method_00 = (MethodInfo *)auStack_8;
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        method_00,(Dictionary_2_System_UInt32_System_Object_ *)pOVar7[1].klass,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__GetEnumerator__
                       );
    uStack_10 = 0;
    DStack_6._dictionary = pDVar9->_dictionary;
    DStack_6._version = pDVar9->_version;
    DStack_6._index = pDVar9->_index;
    DStack_6._current.key = (pDVar9->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar9->_current).value;
    uStack_1 = 1;
    pOStack_11 = (Object *)(auStack_8 + 0x18);
    while( true ) {
      do {
        bVar12 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                           (auStack_8 + 0x18),
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__MoveNext__
                          );
        if (bVar12 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)(auStack_8 + 0x18),
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      } while (DStack_6._current.key == excludedActorNr);
      unaff_EDI = (char *)excludedActorNr;
      if (DStack_6._current.value == (Object *)0x0) break;
      iVar13 = *(int *)((int)DStack_6._current.value + 8);
      if (0 < iVar13) {
        switch(statType & 0xff) {
        case GameStatCounterType__Enum_Kill:
        case GameStatCounterType__Enum_Collectible:
        case GameStatCounterType__Enum_OculusKill:
          if (*score < iVar13) {
            *score = iVar13;
          }
          break;
        case GameStatCounterType__Enum_Flag:
        case GameStatCounterType__Enum_TimeAttackFlag:
          if (((*score < 0) || (iVar13 < *score)) || (*score == 0)) {
            *score = iVar13;
          }
        }
      }
    }
  }
  bVar14 = 0;
  bVar15 = func_?();
  bVar14 = 0x99 < bVar15 | bVar14;
  bVar15 = *extraout_EDX;
  bVar16 = (byte)((uint)unaff_EBX >> 8);
  bVar17 = *extraout_EDX + bVar16;
  *extraout_EDX = bVar17 + bVar14;
  *unaff_EDI = *unaff_EDI + extraout_CH + (CARRY1(bVar15,bVar16) || CARRY1(bVar17,bVar14));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* HighScores GetHighScores(GameStatCounterType, Boolean, WinningConditionPresentStyle, Boolean) */

HighScores *
MVWorldObject.dll::TeamsCounter::TeamsCounter_GetHighScores
          (TeamsCounter *this,GameStatCounterType__Enum gameStatCounterType,bool presentAsTeamScore,
          WinningConditionPresentStyle__Enum winningConditionPresentStyle,bool byAscending,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__HighScores);
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__ContainsKey_MV__WorldObject__MVTeam_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).teamCounters;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar1,team,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__ContainsKey_MV__WorldObject__MVTeam_
                      );
    if (bVar2 == 0) {
      return 0;
    }
    pDVar1 = (this->fields).teamCounters;
    if (pDVar1 != (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,team,
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                   );
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)&UNK_?;
  TeamsCounter_AddIfNotPresent(this,team,(MethodInfo *)0x0);
  this_00 = (this->fields).teamCounters;
  if (this_00 != (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,team,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                       );
    if (pOVar1 != (Object *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__ContainsKey_int_
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__get_Item_int_
                       );
        cRam_? = '\x01';
      }
      if (pOVar1[1].klass != (Object__Class *)0x0) {
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                          ((Dictionary_2_System_Int32_System_Single_ *)pOVar1[1].klass,actorNumber,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__ContainsKey_int_
                          );
        if (bVar2 == 0) {
          pOVar3 = pOVar1[1].klass;
          value_00 = (Object *)func_?();
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    (value_00,ExceptionArgument__Enum_obj,method_00);
          value_00[1].klass = (Object__Class *)0x0;
          if (pOVar3 == (Object__Class *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Add
                    ((Dictionary_2_System_Int32_System_Object_ *)pOVar3,actorNumber,value_00,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Add_int__ActorCounter_
                    );
        }
        if (includeTeamScore != 0) {
          pOVar1[1].monitor = pOVar1[1].monitor + value;
        }
        if (pOVar1[1].klass != (Object__Class *)0x0) {
          pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)pOVar1[1].klass,
                              actorNumber,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__get_Item_int_
                             );
          if (pOVar1 != (Object *)0x0) {
            pOVar3 = (Object__Class *)((int)&((pOVar1[1].klass)->_0).image + value);
            pOVar1[1].klass = pOVar3;
            return (int32_t)pOVar3;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Void RemoveStatsFromActor(Int32) */

void MVWorldObject.dll::TeamsCounter::TeamsCounter_RemoveStatsFromActor
               (TeamsCounter *this,int32_t actorNumber,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_TeamCounter>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = 0;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).teamCounters;
  if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffffb0,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__GetEnumerator__
                       );
    uStack_8 = 0;
    DStack_6._dictionary = pDVar7->_dictionary;
    DStack_6._version = pDVar7->_version;
    DStack_6._index = pDVar7->_index;
    DStack_6._current.key = (pDVar7->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
    uStack_1 = 1;
    pDStack_9 = &DStack_6;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__MoveNext__
                        );
      if (bVar10 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&DStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__Dispose__
                   ,in_stack_11);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pOVar12 = DStack_6._current.value;
      if (DStack_6._current.value == (Object *)0x0) break;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (pOVar12[1].klass == (Object__Class *)0x0) break;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Remove
                ((Dictionary_2_System_Int32_System_Object_ *)pOVar12[1].klass,actorNumber,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Remove_int_
                );
    }
  }
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
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).teamCounters;
  if (this_00 != (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Remove
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,team,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Remove_MV__WorldObject__MVTeam_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* String ToString() */

String * MVWorldObject.dll::TeamsCounter::TeamsCounter_ToString
                   (TeamsCounter *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff94;
  puVar5 = &stack0xffffff94;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_TeamCounter>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_TeamCounter>__get_Value__
                   );
    func_?(&TypeInfo__MV__WorldObject__MVTeam);
    func_?(&StringLiteral_u000ATeam___0___TeamCounter___1_u000A);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pSVar6 = ::StringLiteral__;
  DStack_7._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key = 0;
  pSStack_8 = ::StringLiteral__;
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).teamCounters;
  DStack_7._current.value = (Object *)0x0;
  DStack_7._getEnumeratorRetType = 0;
  if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffffa0,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__GetEnumerator__
                       );
    uStack_10 = 0;
    DStack_7._dictionary = pDVar9->_dictionary;
    DStack_7._version = pDVar9->_version;
    DStack_7._index = pDVar9->_index;
    DStack_7._current.key = (pDVar9->_current).key;
    DStack_7._16_8_ = *(undefined8 *)&(pDVar9->_current).value;
    uStack_1 = 1;
    pDStack_11 = &DStack_7;
    while( true ) {
      bVar12 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        (&DStack_7,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__MoveNext__
                        );
      if (bVar12 == 0) break;
      pOStack_13 = DStack_7._current.value;
      arg0 = (Object *)func_?();
      str1 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral_u000ATeam___0___TeamCounter___1_u000A,arg0,pOStack_13,
                        (MethodInfo *)0x0);
      pSVar6 = mscorlib.dll::System::String::String_Concat_3(pSVar6,str1,(MethodInfo *)0x0);
      pSStack_8 = pSVar6;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&DStack_7,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__Dispose__
               ,in_stack_14);
    *unaff_FS_OFFSET = uStack_3;
    return pSVar6;
  }
  uVar15 = func_?();
  func_?(uVar15);
  pcVar16 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar16)();
  return pSVar6;
}


/* Int32 Update(MVTeam, Int32, Int32, Boolean) */

int32_t MVWorldObject.dll::TeamsCounter::TeamsCounter_Update
                  (TeamsCounter *this,MVTeam__Enum team,int32_t actorNumber,int32_t value,
                  bool includeTeamScore,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                   );
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
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__set_Item_int__ActorCounter_
                       );
        cRam_? = '\x01';
      }
      if (includeTeamScore != 0) {
        pOVar1[1].monitor = (MonitorData *)value;
      }
      this_01 = pOVar1[1].klass;
      value_00 = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (value_00,ExceptionArgument__Enum_obj,in_stack_2);
      value_00[1].klass = (Object__Class *)value;
      if (this_01 != (Object__Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__set_Item
                  ((Dictionary_2_System_Int32_System_Object_ *)this_01,actorNumber,value_00,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__set_Item_int__ActorCounter_
                  );
        if (pOVar1[1].klass != (Object__Class *)0x0) {
          pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)pOVar1[1].klass,
                              actorNumber,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__get_Item_int_
                             );
          if (pOVar1 != (Object *)0x0) {
            return (int32_t)pOVar1[1].klass;
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Int32 UpdateTeam(MVTeam, Int32) */

int32_t MVWorldObject.dll::TeamsCounter::TeamsCounter_UpdateTeam
                  (TeamsCounter *this,MVTeam__Enum team,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                   );
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Dictionary__
            );
  method_00 = (MethodInfo *)&this->fields;
  (this->fields).teamCounters = (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* TeamsCounter(TeamsCounter) */

void MVWorldObject.dll::TeamsCounter::TeamsCounter__ctor_1
               (TeamsCounter *this,TeamsCounter *teamCounterCopy,MethodInfo *method)

{
  uStack_1._0_1_ = 0xff;
  uStack_1._1_3_ = 0xffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_TeamCounter>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_ActorCounter>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_TeamCounter>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_ActorCounter>__get_Value__
                   );
    cRam_? = '\x01';
  }
  method_00 = (Object__Class *)0x0;
  this_01 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Dictionary__
            );
  pMVar4 = (MethodInfo *)&this->fields;
  (this->fields).teamCounters = (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)this_01;
  func_?(pMVar4,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,pMVar4);
  if ((teamCounterCopy != (TeamsCounter *)0x0) &&
     (this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(teamCounterCopy->fields).teamCounters,
     this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0)) {
    pDVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffff84,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__GetEnumerator__
                       );
    team = (pDVar5->_current).key;
    uVar6 = *(undefined8 *)&(pDVar5->_current).value;
    uStack_1._0_1_ = 1;
    uStack_1._1_3_ = 0;
    while( true ) {
      bVar7 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                         &stack0xffffffb4,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__MoveNext__
                        );
      if (bVar7 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffb4,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__Dispose__
                   ,(MethodInfo *)method_00);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pOStack_8 = (Object *)uVar6;
      if ((pOStack_8 == (Object *)0x0) || (pOStack_8[1].klass == (Object__Class *)0x0)) break;
      pDVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                          &stack0xffffff84,
                          (Dictionary_2_System_UInt32_System_Object_ *)pOStack_8[1].klass,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__GetEnumerator__
                         );
      lVar9 = *(longlong *)&(pDVar5->_current).value;
      uStack_1._0_1_ = 3;
      while( true ) {
        method_00 = (Object__Class *)&UNK_?;
        bVar7 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                           &stack0xffffff9c,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__MoveNext__
                          );
        pMVar4 = (MethodInfo *)((ulonglong)lVar9 >> 0x20);
        if (bVar7 == 0) break;
        pOVar10 = (Object *)lVar9;
        if (pOVar10 == (Object *)0x0) goto code_?;
        lVar9 = ZEXT48(pMVar4) << 0x20;
        TeamsCounter_Update(this,team,0,(int32_t)pOVar10[1].klass,0,(MethodInfo *)0x0);
      }
      uStack_1._0_1_ = 1;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&stack0xffffff9c,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__Dispose__
                 ,pMVar4);
      uStack_1._0_1_ = 1;
      if (pOStack_8 == (Object *)0x0) break;
      TeamsCounter_UpdateTeam(this,team,(int32_t)pOStack_8[1].monitor,(MethodInfo *)0x0);
    }
  }
code_?:
  func_?();
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* TeamsCounter(BytePacker) */

void MVWorldObject.dll::TeamsCounter::TeamsCounter__ctor_2
               (TeamsCounter *this,BytePacker *bp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Add_MV__WorldObject__MVTeam__TeamCounter_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>
                   );
    func_?(&TypeInfo__TeamCounter);
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Dictionary__
            );
  method_01 = (MethodInfo *)&this->fields;
  (this->fields).teamCounters = (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)this_01;
  func_?(method_01,this_01);
  method_00 = (MethodInfo *)&UNK_?;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_01);
  if (bp == (BytePacker *)0x0) {
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
  if (0 < iVar2) {
    do {
      puVar3 = &UNK_?;
      MV::WorldObject::BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
      value = (Object *)func_?(TypeInfo__TeamCounter);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__ActorCounter);
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Add_int__ActorCounter_
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Dictionary__
                       );
        puVar3 = &UNK_?;
        func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>);
        cRam_? = '\x01';
      }
      pDVar4 = TypeInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>;
      pOVar5 = (Object__Class *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::
      Text::TextResourceManager+FontAssetRef]::
      Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
                ((Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
                  *)pOVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Dictionary__
                );
      value[1].klass = pOVar5;
      key_00 = &UNK_?;
      func_?(value + 1,pOVar5);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (value,ExceptionArgument__Enum_obj,in_stack_6);
      pMVar7 = (MonitorData *)
               MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      value[1].monitor = pMVar7;
      iVar2 = MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      iVar8 = 0;
      if (0 < iVar2) {
        do {
          key = MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
          value_00 = (Object *)func_?(TypeInfo__ActorCounter);
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    (value_00,ExceptionArgument__Enum_obj,method_00);
          pOVar5 = (Object__Class *)
                   MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
          value_00[1].klass = pOVar5;
          if (value[1].klass == (Object__Class *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Add
                    ((Dictionary_2_System_Int32_System_Object_ *)value[1].klass,key,value_00,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Add_int__ActorCounter_
                    );
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar2);
      }
      this_00 = (this->fields).teamCounters;
      if (this_00 == (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__Add
                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,(Int32Enum__Enum)key_00,
                 value,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Add_MV__WorldObject__MVTeam__TeamCounter_
                );
    } while ((int)((int)&(pDVar4->_0).image + 1) < (int)puVar3);
  }
  return;
}

