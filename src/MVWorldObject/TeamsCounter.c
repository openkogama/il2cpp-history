
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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).teamCounters;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)team,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__ContainsKey_MV__WorldObject__MVTeam_
                      );
    if (bVar1 != 0) {
      return;
    }
    this_01 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).teamCounters;
    value = (Object *)func_?();
    if (value != (Object *)0x0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Dictionary__
                       );
        func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>);
        cRam_? = '\x01';
      }
      this_02 = (Object__Class *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>
                               );
      if (this_02 != (Object__Class *)0x0) {
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Dictionary__
                  );
        value[1].klass = this_02;
        func_?(value + 1,this_02);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (value,ExceptionArgument__Enum_obj,in_stack_2);
        if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (this_01,(Object *)team,value,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Add_MV__WorldObject__MVTeam__TeamCounter_
                    );
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean ContainsTeamWithActor(MVTeam, Int32) */

bool MVWorldObject.dll::TeamsCounter::TeamsCounter_ContainsTeamWithActor
               (TeamsCounter *this,MVTeam__Enum team,int32_t actorNr,MethodInfo *method)

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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).teamCounters;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)team,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__ContainsKey_MV__WorldObject__MVTeam_
                      );
    if (bVar1 == 0) {
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
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (pOVar2[1].klass != (Object__Class *)0x0) {
          bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,GUILoginHandler+PlanetData]::
                  Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                            ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                             pOVar2[1].klass,
                             (Object *)
                             MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__ContainsKey_int_
                             ,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__ContainsKey_int_
                            );
          return bVar1;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).teamCounters;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)team,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__ContainsKey_MV__WorldObject__MVTeam_
                      );
    if (bVar1 == 0) {
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
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      if (pOVar2[1].klass != (Object__Class *)0x0) {
        bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)pOVar2[1].klass
                           ,(Object *)actorNumber,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__ContainsKey_int_
                          );
        if (bVar1 == 0) {
          return 0;
        }
        if ((pOVar2[1].klass != (Object__Class *)0x0) &&
           (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)pOVar2[1].klass,
                                actorNumber,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__get_Item_int_
                               ), pOVar2 != (Object *)0x0)) {
          return (int32_t)pOVar2[1].klass;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
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
  DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = 0;
  DStack_6._16_8_ = 0;
  *score = 0;
  pDVar7 = (this->fields).teamCounters;
  if (((pDVar7 != (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) &&
      (pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar7,team,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                          ), pOVar8 != (Object *)0x0)) && (pOVar8[1].klass != (Object__Class *)0x0))
  {
    method_00 = (MethodInfo *)auStack_9;
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                        method_00,(Dictionary_2_System_Object_System_Object_ *)pOVar8[1].klass,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__GetEnumerator__
                       );
    unaff_ESI = (Object *)(auStack_9 + 0x18);
    uStack_11 = 0;
    DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)pDVar10->_dictionary;
    DStack_6._version = pDVar10->_version;
    DStack_6._index = pDVar10->_index;
    DStack_6._current.key = (int32_t)(pDVar10->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar10->_current).value;
    uStack_1 = 1;
    pOStack_12 = unaff_ESI;
    while( true ) {
      do {
        bVar13 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object_ *)
                           (auStack_9 + 0x18),
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__MoveNext__
                          );
        if (bVar13 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    (unaff_ESI,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      } while (DStack_6._current.key == excludedActorNr);
      unaff_EDI = (char *)excludedActorNr;
      if (DStack_6._current.value == (Object *)0x0) break;
      iVar14 = *(int *)((int)DStack_6._current.value + 8);
      if (0 < iVar14) {
        switch(statType & 0xff) {
        case GameStatCounterType__Enum_Kill:
        case GameStatCounterType__Enum_Collectible:
        case GameStatCounterType__Enum_OculusKill:
          if (*score < iVar14) {
            *score = iVar14;
          }
          break;
        case GameStatCounterType__Enum_Flag:
        case GameStatCounterType__Enum_TimeAttackFlag:
          if (((*score < 0) || (iVar14 < *score)) || (*score == 0)) {
            *score = iVar14;
          }
        }
      }
    }
  }
  cVar15 = '\0';
  cRam_? = func_?();
  psadbw(in_MM4,*(undefined8 *)(extraout_EDX + -0x5d09e5f0));
  *unaff_EDI = *unaff_EDI + extraout_CL + cVar15;
  cRam_? = cRam_? * *(char *)(extraout_EDX + -0x5d0a2ef0);
  in((short)extraout_EDX);
  cRam_? = cRam_?;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__HighScores);
    cRam_? = '\x01';
  }
  pDVar7 = (this->fields).teamCounters;
  this_00 = (HighScores *)func_?(TypeInfo__HighScores,unaff_EDI,unaff_ESI);
  if (this_00 != (HighScores *)0x0) {
    HighScores::HighScores__ctor
              (this_00,(GameStatCounterType__Enum)score,pDVar7,(bool)team,statType,
               (bool)excludedActorNr,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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
  pHVar1 = (HighScores *)func_?(TypeInfo__HighScores);
  if (pHVar1 != (HighScores *)0x0) {
    HighScores::HighScores__ctor
              (pHVar1,gameStatCounterType,teamCounters,presentAsTeamScore,
               winningConditionPresentStyle,byAscending,(MethodInfo *)0x0);
    return pHVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pHVar1 = (HighScores *)(*pcVar2)();
  return pHVar1;
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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).teamCounters;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)team,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__ContainsKey_MV__WorldObject__MVTeam_
                      );
    if (bVar1 == 0) {
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
        return (int32_t)pOVar2[1].monitor;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
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
  method_00 = (MethodInfo *)this;
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
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)pOVar1[1].klass
                           ,(Object *)actorNumber,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__ContainsKey_int_
                          );
        if (bVar2 == 0) {
          pOVar3 = pOVar1[1].klass;
          value_00 = (Object *)func_?();
          if (value_00 == (Object *)0x0) goto code_?;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    (value_00,ExceptionArgument__Enum_obj,method_00);
          value_00[1].klass = (Object__Class *)0x0;
          if (pOVar3 == (Object__Class *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pOVar3,(Object *)actorNumber,
                     value_00,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Add_int__ActorCounter_
                    );
        }
        if (includeTeamScore != 0) {
          pOVar1[1].monitor = pOVar1[1].monitor + value;
        }
        if (pOVar1[1].klass != (Object__Class *)0x0) {
          pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)pOVar1[1].klass,
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
  DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = 0;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).teamCounters;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                        &stack0xffffffb0,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__GetEnumerator__
                       );
    uStack_8 = 0;
    DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)pDVar7->_dictionary;
    DStack_6._version = pDVar7->_version;
    DStack_6._index = pDVar7->_index;
    DStack_6._current.key = (int32_t)(pDVar7->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
    uStack_1 = 1;
    pDStack_9 = &DStack_6;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__MoveNext__
                        );
      if (bVar10 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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


/* Byte[] ToByteArray() */

Byte__Array *
MVWorldObject.dll::TeamsCounter::TeamsCounter_ToByteArray(TeamsCounter *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__BytePacker);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Count__
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
    cRam_? = '\x01';
  }
  this_02 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
  if (this_02 != (BytePacker *)0x0) {
    MV::WorldObject::BytePacker::BytePacker__ctor(this_02,(MethodInfo *)0x0);
    this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )(this->fields).teamCounters;
    if (this_00 !=
        (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0)
    {
      value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                        (this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Count__
                        );
      MV::WorldObject::BytePacker::BytePacker_Write_7(this_02,value,(MethodInfo *)0x0);
      this_01 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).teamCounters;
      if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                            &pDStack_5,this_01,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__GetEnumerator__
                           );
        method_00 = (MethodInfo *)(pDVar4->_current).key;
        uVar6 = *(undefined8 *)&(pDVar4->_current).value;
        uStack_1 = 1;
        while( true ) {
          this_03 = (TeamCounter *)uVar6;
          bVar7 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object_ *)
                             &stack0xffffffb8,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__MoveNext__
                            );
          if (bVar7 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&stack0xffffffb8,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__Dispose__
                       ,method_00);
            uStack_1 = 0xffffffff;
            pBVar8 = MV::WorldObject::BytePacker::BytePacker_ToArray(this_02,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return pBVar8;
          }
          MV::WorldObject::BytePacker::BytePacker_Write
                    (this_02,(uint8_t)method_00,(MethodInfo *)0x0);
          if (this_03 == (TeamCounter *)0x0) break;
          method_00 = (MethodInfo *)&UNK_?;
          pBVar8 = TeamCounter::TeamCounter_ToByteArray(this_03,(MethodInfo *)0x0);
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
  DStack_7._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key = 0;
  pSStack_8 = ::StringLiteral__;
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).teamCounters;
  DStack_7._current.value = (Object *)0x0;
  DStack_7._getEnumeratorRetType = 0;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                        &stack0xffffffa0,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__GetEnumerator__
                       );
    uStack_10 = 0;
    DStack_7._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)pDVar9->_dictionary;
    DStack_7._version = pDVar9->_version;
    DStack_7._index = pDVar9->_index;
    DStack_7._current.key = (int32_t)(pDVar9->_current).key;
    DStack_7._16_8_ = *(undefined8 *)&(pDVar9->_current).value;
    uStack_1 = 1;
    pDStack_11 = &DStack_7;
    while( true ) {
      bVar12 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
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
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
        func_?();
        cRam_? = '\x01';
      }
      if (includeTeamScore != 0) {
        pOVar1[1].monitor = (MonitorData *)value;
      }
      this_01 = pOVar1[1].klass;
      value_00 = (Object *)func_?();
      if (value_00 != (Object *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (value_00,ExceptionArgument__Enum_obj,in_stack_2);
        value_00[1].klass = (Object__Class *)value;
        if (this_01 != (Object__Class *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)actorNumber,
                     value_00,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__set_Item_int__ActorCounter_
                    );
          if (pOVar1[1].klass != (Object__Class *)0x0) {
            pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)pOVar1[1].klass,
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
  this_00 = (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>
                           );
  if (this_00 != (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Dictionary__
              );
    method_00 = (MethodInfo *)&this->fields;
    (this->fields).teamCounters = this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  puStack_4 = &stack0xffffff74;
  puVar5 = &stack0xffffff74;
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
    in_stack_6 =
         &
         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__Dispose__
    ;
    func_?();
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
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_7._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key = 0;
  DStack_7._current.value = (Object *)0x0;
  DStack_7._getEnumeratorRetType = 0;
  DStack_8._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
  DStack_8._version = 0;
  DStack_8._index = 0;
  DStack_8._current.key = 0;
  DStack_8._current.value = (Object *)0x0;
  DStack_8._getEnumeratorRetType = 0;
  this_01 = (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>
                           );
  if (this_01 != (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Dictionary__
              );
    (this->fields).teamCounters = this_01;
    func_?(&this->fields,this_01);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)in_stack_6);
    if ((teamCounterCopy != (TeamsCounter *)0x0) &&
       (this_00 = (Dictionary_2_System_Object_System_Object_ *)
                  (teamCounterCopy->fields).teamCounters,
       this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
      method_00 = (MethodInfo *)&stack0xffffff80;
      pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                          method_00,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__GetEnumerator__
                         );
      uStack_10 = 0;
      DStack_7._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)pDVar9->_dictionary;
      DStack_7._version = pDVar9->_version;
      DStack_7._index = pDVar9->_index;
      DStack_7._current.key = (int32_t)(pDVar9->_current).key;
      DStack_7._16_8_ = *(undefined8 *)&(pDVar9->_current).value;
      pDStack_11 = &DStack_7;
      uStack_1._0_1_ = 1;
      uStack_1._1_3_ = 0;
      while( true ) {
        bVar12 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                          (&DStack_7,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__MoveNext__
                          );
        team = DStack_7._current.key;
        if (bVar12 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)pDStack_11,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__Dispose__
                     ,in_stack_13);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        pOStack_14 = DStack_7._current.value;
        pOStack_15 = (Object *)DStack_7._current.key;
        pOStack_16 = DStack_7._current.value;
        if ((DStack_7._current.value == (Object *)0x0) ||
           (DStack_7._current.value[1].klass == (Object__Class *)0x0)) break;
        pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                            &stack0xffffff80,
                            (Dictionary_2_System_Object_System_Object_ *)
                            DStack_7._current.value[1].klass,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__GetEnumerator__
                           );
        uStack_17 = 0;
        DStack_8._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)pDVar9->_dictionary;
        DStack_8._version = pDVar9->_version;
        DStack_8._index = pDVar9->_index;
        DStack_8._current.key = (int32_t)(pDVar9->_current).key;
        DStack_8._16_8_ = *(undefined8 *)&(pDVar9->_current).value;
        uStack_1._0_1_ = 3;
        pDStack_18 = &DStack_8;
        while( true ) {
          bVar12 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                            (&DStack_8,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__MoveNext__
                            );
          if (bVar12 == 0) break;
          if (DStack_8._current.value == (Object *)0x0) goto code_?;
          TeamsCounter_Update(this,team,DStack_8._current.key,
                              (int32_t)DStack_8._current.value[1].klass,0,(MethodInfo *)0x0);
        }
        uStack_1._0_1_ = 1;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&DStack_8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__Dispose__
                   ,method_00);
        uStack_1._0_1_ = 1;
        if (pOStack_14 == (Object *)0x0) break;
        method_00 = (MethodInfo *)pOStack_14[1].monitor;
        TeamsCounter_UpdateTeam(this,team,(int32_t)method_00,(MethodInfo *)0x0);
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
  this_01 = (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>
                           );
  if (this_01 != (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Dictionary__
              );
    (this->fields).teamCounters = this_01;
    func_?(&this->fields,this_01);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,in_stack_1);
    if (bp != (BytePacker *)0x0) {
      iVar2 = MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      iStack_3 = 0;
      if (0 < iVar2) {
        do {
          uVar4 = MV::WorldObject::BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
          pTVar5 = TypeInfo__TeamCounter;
          value = (Object *)func_?();
          if (value == (Object *)0x0) goto code_?;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__ActorCounter);
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Add_int__ActorCounter_
                           );
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Dictionary__
                           );
            func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>);
            cRam_? = '\x01';
          }
          pOVar6 = (Object__Class *)
                   func_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>
                                  );
          if (pOVar6 == (Object__Class *)0x0) goto code_?;
          Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
          ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                    ((ParameterOverride_1_System_Object_ *)pOVar6,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Dictionary__
                    );
          value[1].klass = pOVar6;
          func_?(value + 1,pOVar6);
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    (value,ExceptionArgument__Enum_obj,in_stack_7);
          pMVar8 = (MonitorData *)
                   MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
          value[1].monitor = pMVar8;
          iVar2 = MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
          iVar9 = 0;
          if (0 < iVar2) {
            do {
              key = (Object *)
                    MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
              value_00 = (Object *)func_?(TypeInfo__ActorCounter);
              if (value_00 == (Object *)0x0) goto code_?;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        (value_00,ExceptionArgument__Enum_obj,(MethodInfo *)in_stack_10);
              in_stack_7 = (MethodInfo *)bp;
              pOVar6 = (Object__Class *)
                       MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
              value_00[1].klass = pOVar6;
              in_stack_10 = value[1].klass;
              if (in_stack_10 == (Object__Class *)0x0) goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)in_stack_10,key,value_00
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Add_int__ActorCounter_
                        );
              iVar9 = iVar9 + 1;
            } while (iVar9 < iVar2);
          }
          this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).teamCounters;
          if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (this_00,(Object *)(uint)uVar4,value,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__Add_MV__WorldObject__MVTeam__TeamCounter_
                    );
          iStack_3 = iStack_3 + 1;
        } while (iStack_3 < (int)pTVar5);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

