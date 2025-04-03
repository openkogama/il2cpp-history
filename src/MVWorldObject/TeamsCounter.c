
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
  *score = 0;
  this_00 = (this->fields).teamCounters;
  if (((this_00 != (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) &&
      (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,team,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                           ), pOVar6 != (Object *)0x0)) &&
     (pOVar6[1].klass != (Object__Class *)0x0)) {
    method_00 = (MethodInfo *)auStack_7;
    pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
              Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                        ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                         method_00,(Dictionary_2_System_UInt32_System_Object_ *)pOVar6[1].klass,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__GetEnumerator__
                        );
    uStack_9 = 0;
    DStack_10._dictionary = pDVar8->_dictionary;
    DStack_10._version = pDVar8->_version;
    DStack_10._index = pDVar8->_index;
    DStack_10._current.key = (pDVar8->_current).key;
    DStack_10._16_8_ = *(undefined8 *)&(pDVar8->_current).value;
    uStack_1 = 1;
    pOStack_11 = (Object *)(auStack_7 + 0x18);
    while( true ) {
      do {
        bVar12 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                           (auStack_7 + 0x18),
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__MoveNext__
                          );
        if (bVar12 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)(auStack_7 + 0x18),
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      } while (DStack_10._current.key == excludedActorNr);
      if (DStack_10._current.value == (Object *)0x0) break;
      iVar13 = *(int *)((int)DStack_10._current.value + 8);
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
  cVar14 = '\0';
  uVar15 = func_?();
  puVar16 = (uint *)(extraout_EDX + -0x7524ef12);
  bVar17 = (byte)extraout_ECX & 0x1f;
  *puVar16 = *puVar16 >> bVar17 | *puVar16 << 0x20 - bVar17;
  bVar18 = (extraout_ECX & 0x1f) == 0;
  bVar19 = bVar18 * cVar14 | !bVar18 * ((int)*puVar16 < 0);
  out((short)extraout_EDX,uVar15);
  bVar20 = (byte)extraout_EDX;
  bVar18 = CARRY1(unaff_BL,bVar20) || CARRY1(unaff_BL + bVar20,bVar19);
  bVar19 = unaff_BL + bVar20 + bVar19;
  pbVar21 = (byte *)(extraout_EDX + -0x6def1176);
  bVar17 = *pbVar21;
  bVar22 = *pbVar21;
  *pbVar21 = bVar22 + bVar20 + bVar18;
  *(char *)(extraout_EDX + -0x24ef1176) =
       *(char *)(extraout_EDX + -0x24ef1176) + bVar20 +
       (CARRY1(bVar19,bVar20) ||
       CARRY1(bVar19 + bVar20,CARRY1(bVar17,bVar20) || CARRY1(bVar22 + bVar20,bVar18)));
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
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
          this_01 = pOVar1[1].klass;
          value_00 = (Object *)func_?();
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    (value_00,ExceptionArgument__Enum_obj,method_00);
          value_00[1].klass = (Object__Class *)0x0;
          if (this_01 == (Object__Class *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Add
                    ((Dictionary_2_System_Int32_System_Object_ *)this_01,actorNumber,value_00,
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
            pOVar1[1].klass = (Object__Class *)((int)&((pOVar1[1].klass)->_0).image + value);
            return (int32_t)pOVar1[1].klass;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
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
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).teamCounters;
  if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffffb0,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__GetEnumerator__
                       );
    uStack_7 = 0;
    DStack_8._dictionary = pDVar6->_dictionary;
    DStack_8._version = pDVar6->_version;
    DStack_8._index = pDVar6->_index;
    DStack_8._current.key = (pDVar6->_current).key;
    DStack_8._16_8_ = *(undefined8 *)&(pDVar6->_current).value;
    uStack_1 = 1;
    pDStack_9 = &DStack_8;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        (&DStack_8,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__MoveNext__
                        );
      if (bVar10 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&DStack_8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__Dispose__
                   ,in_stack_11);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pOVar12 = DStack_8._current.value;
      if (DStack_8._current.value == (Object *)0x0) break;
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
  pSStack_7 = ::StringLiteral__;
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).teamCounters;
  if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffffa0,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__GetEnumerator__
                       );
    uStack_9 = 0;
    DStack_10._dictionary = pDVar8->_dictionary;
    DStack_10._version = pDVar8->_version;
    DStack_10._index = pDVar8->_index;
    DStack_10._current.key = (pDVar8->_current).key;
    DStack_10._16_8_ = *(undefined8 *)&(pDVar8->_current).value;
    uStack_1 = 1;
    pDStack_11 = &DStack_10;
    while( true ) {
      bVar12 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        (&DStack_10,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__MoveNext__
                        );
      if (bVar12 == 0) break;
      pOStack_13 = DStack_10._current.value;
      arg0 = (Object *)func_?();
      str1 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral_u000ATeam___0___TeamCounter___1_u000A,arg0,pOStack_13,
                        (MethodInfo *)0x0);
      pSVar6 = mscorlib.dll::System::String::String_Concat_3(pSVar6,str1,(MethodInfo *)0x0);
      pSStack_7 = pSVar6;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&DStack_10,
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
  ((TeamsCounter__Fields *)method_00)->teamCounters =
       (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)this_00;
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
  ((TeamsCounter__Fields *)pMVar4)->teamCounters =
       (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)this_01;
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
    method_00 = (Object__Class *)pDVar5->_dictionary;
    lVar6 = *(longlong *)&(pDVar5->_current).value;
    uStack_1._0_1_ = 1;
    uStack_1._1_3_ = 0;
    team = (TeamsCounter *)(pDVar5->_current).key;
    while( true ) {
      bVar7 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                         &stack0xffffff9c,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__MoveNext__
                        );
      if (bVar7 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffff9c,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__Dispose__
                   ,(MethodInfo *)method_00);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pOVar8 = (Object *)lVar6;
      if ((pOVar8 == (Object *)0x0) || (pOVar8[1].klass == (Object__Class *)0x0)) break;
      pDVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                          &stack0xffffff84,
                          (Dictionary_2_System_UInt32_System_Object_ *)pOVar8[1].klass,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__GetEnumerator__
                         );
      actorNumber = (pDVar5->_current).key;
      uVar9 = *(undefined8 *)&(pDVar5->_current).value;
      uStack_1._0_1_ = 3;
      while( true ) {
        pMVar4 = (MethodInfo *)((ulonglong)lVar6 >> 0x20);
        method_00 = (Object__Class *)&UNK_?;
        bVar7 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                           &stack0xffffffb4,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__MoveNext__
                          );
        if (bVar7 == 0) break;
        pOStack_10 = (Object *)uVar9;
        if (pOStack_10 == (Object *)0x0) goto code_?;
        lVar6 = ZEXT48(pMVar4) << 0x20;
        TeamsCounter_Update(this,(MVTeam__Enum)team,actorNumber,(int32_t)pOStack_10[1].klass,0,
                            (MethodInfo *)0x0);
      }
      uStack_1._0_1_ = 1;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&stack0xffffffb4,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__Dispose__
                 ,pMVar4);
      uStack_1._0_1_ = 1;
      if (pOVar8 == (Object *)0x0) break;
      lVar6 = CONCAT44(pOVar8[1].monitor,team);
      pTVar11 = this;
      TeamsCounter_UpdateTeam(this,(MVTeam__Enum)team,(int32_t)pOVar8[1].monitor,(MethodInfo *)0x0);
      team = pTVar11;
    }
  }
code_?:
  func_?();
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* TeamsCounter(BytePacker) */

void MVWorldObject.dll::TeamsCounter::TeamsCounter__ctor_2
               (TeamsCounter *this,BytePacker *bp,MethodInfo *method)

{
  this_00 = bp;
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
  method_00 = (MethodInfo *)&this->fields;
  ((TeamsCounter__Fields *)method_00)->teamCounters =
       (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)this_01;
  func_?(method_00,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  if (bp == (BytePacker *)0x0) {
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
  bp = (BytePacker *)0x0;
  if (0 < iVar2) {
    do {
      puVar3 = &UNK_?;
      MV::WorldObject::BytePacker::BytePacker_ReadByte(this_00,(MethodInfo *)0x0);
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
      pOVar4 = (Object__Class *)
               func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>
                              );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::
      Text::TextResourceManager+FontAssetRef]::
      Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
                ((Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
                  *)pOVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Dictionary__
                );
      pOVar5 = value + 1;
      pOVar5->klass = pOVar4;
      key_00 = &UNK_?;
      func_?(pOVar5,pOVar4);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (value,ExceptionArgument__Enum_obj,in_stack_6);
      pMVar7 = (MonitorData *)
               MV::WorldObject::BytePacker::BytePacker_ReadInt32(this_00,(MethodInfo *)0x0);
      value[1].monitor = pMVar7;
      iVar2 = MV::WorldObject::BytePacker::BytePacker_ReadInt32(this_00,(MethodInfo *)0x0);
      iVar8 = 0;
      if (0 < iVar2) {
        do {
          key = MV::WorldObject::BytePacker::BytePacker_ReadInt32(this_00,(MethodInfo *)0x0);
          value_00 = (Object *)func_?(TypeInfo__ActorCounter);
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    (value_00,ExceptionArgument__Enum_obj,(MethodInfo *)this);
          pOVar4 = (Object__Class *)
                   MV::WorldObject::BytePacker::BytePacker_ReadInt32(this_00,(MethodInfo *)0x0);
          value_00[1].klass = pOVar4;
          if (value[1].klass == (Object__Class *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Add
                    ((Dictionary_2_System_Int32_System_Object_ *)value[1].klass,key,value_00,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Add_int__ActorCounter_
                    );
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar2);
      }
      if (pOVar5->klass == (Object__Class *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__Add
                ((Dictionary_2_System_Int32Enum_System_Object_ *)pOVar5->klass,
                 (Int32Enum__Enum)key_00,value,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Add_MV__WorldObject__MVTeam__TeamCounter_
                );
      bp = (BytePacker *)((int)&bp->klass + 1);
    } while ((int)bp < (int)puVar3);
  }
  return;
}

