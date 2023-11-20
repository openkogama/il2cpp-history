
/* Int32 GetActorCount(Int32) */

int32_t MVWorldObject.dll::TeamCounter::TeamCounter_GetActorCount
                  (TeamCounter *this,int32_t actorNumber,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).actorCounters;
  if (pDVar1 != (Dictionary_2_System_Int32_ActorCounter_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,actorNumber,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      return 0;
    }
    pDVar1 = (this->fields).actorCounters;
    if (pDVar1 != (Dictionary_2_System_Int32_ActorCounter_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,actorNumber,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__get_Item_int_
                         );
      if (pOVar3 != (Object *)0x0) {
        return (int32_t)pOVar3[1].klass;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Int32 Increment(Int32, Int32, Boolean) */

int32_t MVWorldObject.dll::TeamCounter::TeamCounter_Increment
                  (TeamCounter *this,int32_t actorNumber,int32_t value,bool includeTeamScore,
                  MethodInfo *method)

{
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
  pDVar1 = (this->fields).actorCounters;
  if (pDVar1 != (Dictionary_2_System_Int32_ActorCounter_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,actorNumber,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      pDVar1 = (this->fields).actorCounters;
      pOVar3 = (Object *)func_?(TypeInfo__ActorCounter);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                (pOVar3,ExceptionArgument__Enum_obj,unaff_EDI);
      pOVar3[1].klass = (Object__Class *)0x0;
      if (pDVar1 == (Dictionary_2_System_Int32_ActorCounter_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Add
                ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,actorNumber,pOVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Add_int__ActorCounter_
                );
    }
    if (includeTeamScore != 0) {
      piVar4 = &(this->fields).teamCount;
      *piVar4 = *piVar4 + value;
    }
    pDVar1 = (this->fields).actorCounters;
    if (pDVar1 != (Dictionary_2_System_Int32_ActorCounter_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,actorNumber,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__get_Item_int_
                         );
      if (pOVar3 != (Object *)0x0) {
        pOVar5 = (Object__Class *)((int)&((pOVar3[1].klass)->_0).image + value);
        pOVar3[1].klass = pOVar5;
        return (int32_t)pOVar5;
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  iVar7 = (*pcVar6)();
  return iVar7;
}


/* Void RemoveStatsFromActor(Int32) */

void MVWorldObject.dll::TeamCounter::TeamCounter_RemoveStatsFromActor
               (TeamCounter *this,int32_t actorNumber,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).actorCounters;
  if (this_00 != (Dictionary_2_System_Int32_ActorCounter_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Remove
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,actorNumber,
               MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Remove_int_)
    ;
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* String ToString() */

String * MVWorldObject.dll::TeamCounter::TeamCounter_ToString(TeamCounter *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff94;
  puVar5 = &stack0xffffff94;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__GetEnumerator__
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
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_ActorCounter>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_ActorCounter>__get_Value__
                   );
    func_?(&StringLiteral_Actor_number___0___Count___1_);
    func_?(&StringLiteral__0_u000A);
    func_?(&StringLiteral_Team_count___0__u000A);
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
  iStack_7 = (this->fields).teamCount;
  pOVar8 = (Object *)func_?(TypeInfo__System__Int32,&iStack_7);
  pSVar9 = mscorlib.dll::System::String::String_Format
                     (StringLiteral_Team_count___0__u000A,pOVar8,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).actorCounters;
  if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &pDStack_11,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__GetEnumerator__
                       );
    uStack_12 = 0;
    DStack_6._dictionary = pDVar10->_dictionary;
    DStack_6._version = pDVar10->_version;
    DStack_6._index = pDVar10->_index;
    DStack_6._current.key = (pDVar10->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar10->_current).value;
    uStack_1 = 1;
    pDStack_13 = &DStack_6;
    while( true ) {
      bVar14 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__MoveNext__
                        );
      if (bVar14 == 0) break;
      uStack_15 = DStack_6._current.key;
      uStack_16 = DStack_6._current.key;
      pOStack_17 = DStack_6._current.value;
      pOVar8 = (Object *)func_?();
      pSVar18 = mscorlib.dll::System::String::String_Format_1
                         (StringLiteral_Actor_number___0___Count___1_,pOVar8,pOStack_17,
                          (MethodInfo *)0x0);
      pSVar18 = mscorlib.dll::System::String::String_Format
                         (StringLiteral__0_u000A,(Object *)pSVar18,(MethodInfo *)0x0);
      pSVar9 = mscorlib.dll::System::String::String_Concat_3(pSVar9,pSVar18,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&DStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__Dispose__
               ,in_stack_19);
    *unaff_FS_OFFSET = uStack_3;
    return pSVar9;
  }
  func_?();
  func_?();
  pcVar20 = (code *)swi(3);
  pSVar9 = (String *)(*pcVar20)();
  return pSVar9;
}


/* Int32 Update(Int32, Int32, Boolean) */

int32_t MVWorldObject.dll::TeamCounter::TeamCounter_Update
                  (TeamCounter *this,int32_t actorNumber,int32_t value,bool includeTeamScore,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ActorCounter);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__set_Item_int__ActorCounter_
                   );
    cRam_? = '\x01';
  }
  if (includeTeamScore != 0) {
    (this->fields).teamCount = value;
  }
  pDVar1 = (this->fields).actorCounters;
  method_00 = TypeInfo__ActorCounter;
  pOVar2 = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (pOVar2,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  pOVar2[1].klass = (Object__Class *)value;
  if (pDVar1 != (Dictionary_2_System_Int32_ActorCounter_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__set_Item
              ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,actorNumber,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__set_Item_int__ActorCounter_
              );
    pDVar1 = (this->fields).actorCounters;
    if (pDVar1 != (Dictionary_2_System_Int32_ActorCounter_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,actorNumber,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__get_Item_int_
                         );
      if (pOVar2 != (Object *)0x0) {
        return (int32_t)pOVar2[1].klass;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Int32 UpdateTeam(Int32) */

int32_t MVWorldObject.dll::TeamCounter::TeamCounter_UpdateTeam
                  (TeamCounter *this,int32_t value,MethodInfo *method)

{
  (this->fields).teamCount = value;
  return value;
}


/* TeamCounter() */

void MVWorldObject.dll::TeamCounter::TeamCounter__ctor(TeamCounter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Dictionary__);
  method_00 = (MethodInfo *)&this->fields;
  (this->fields).actorCounters = (Dictionary_2_System_Int32_ActorCounter_ *)this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* TeamCounter(BytePacker) */

void MVWorldObject.dll::TeamCounter::TeamCounter__ctor_1
               (TeamCounter *this,BytePacker *bp,MethodInfo *method)

{
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
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Dictionary__);
  method_00 = (MethodInfo *)&this->fields;
  (this->fields).actorCounters = (Dictionary_2_System_Int32_ActorCounter_ *)this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  if (bp != (BytePacker *)0x0) {
    iVar1 = MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    (this->fields).teamCount = iVar1;
    iVar1 = MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
        value = (Object *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  (value,ExceptionArgument__Enum_obj,method_00);
        pOVar3 = (Object__Class *)
                 MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
        value[1].klass = pOVar3;
        if (_UNK_? == (Dictionary_2_System_Int32_System_Object_ *)0x0) goto code_?;
        pMVar4 = 
        MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Add_int__ActorCounter_
        ;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  (_UNK_?,iVar1,value,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Add_int__ActorCounter_
                  );
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)pMVar4);
    }
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* HighScore get_HighScore() */

HighScore *
MVWorldObject.dll::TeamCounter::TeamCounter_get_HighScore(TeamCounter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__HighScore);
    cRam_? = '\x01';
  }
  teamScore = (this->fields).teamCount;
  actorCounters = (this->fields).actorCounters;
  this_00 = (HighScore *)func_?(TypeInfo__HighScore);
  HighScore::HighScore__ctor(this_00,teamScore,actorCounters,(MethodInfo *)0x0);
  return this_00;
}

