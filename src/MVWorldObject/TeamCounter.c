
/* Boolean ContainsActor(Int32) */

bool MVWorldObject.dll::TeamCounter::TeamCounter_ContainsActor
               (TeamCounter *this,int32_t actorNumber,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).actorCounters;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)actorNumber,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__ContainsKey_int_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).actorCounters;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)actorNumber,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      return 0;
    }
    this_01 = (this->fields).actorCounters;
    if (this_01 != (Dictionary_2_System_Int32_ActorCounter_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,actorNumber,
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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).actorCounters;
  if (this_00 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
  goto code_?;
  bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          Object,GUILoginHandler+PlanetData]::
          Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                    (this_00,(Object *)actorNumber,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__ContainsKey_int_
                    );
  if (bVar1 == 0) {
    this_01 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).actorCounters;
    method_00 = (MethodInfo *)&UNK_?;
    pOVar2 = (Object *)func_?(TypeInfo__ActorCounter);
    if (pOVar2 == (Object *)0x0) goto code_?;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (pOVar2,ExceptionArgument__Enum_obj,method_00);
    pOVar2[1].klass = (Object__Class *)0x0;
    if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_01,(Object *)actorNumber,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Add_int__ActorCounter_
              );
  }
  if (includeTeamScore != 0) {
    piVar3 = &(this->fields).teamCount;
    *piVar3 = *piVar3 + value;
  }
  this_02 = (this->fields).actorCounters;
  if (this_02 != (Dictionary_2_System_Int32_ActorCounter_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,actorNumber,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__get_Item_int_
                       );
    if (pOVar2 != (Object *)0x0) {
      pOVar4 = (Object__Class *)((int)&((pOVar2[1].klass)->_0).image + value);
      pOVar2[1].klass = pOVar4;
      return (int32_t)pOVar4;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
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


/* Byte[] ToByteArray() */

Byte__Array *
MVWorldObject.dll::TeamCounter::TeamCounter_ToByteArray(TeamCounter *this,MethodInfo *method)

{
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__BytePacker);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__get_Count__
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
  }
  this_02 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
  if (this_02 != (BytePacker *)0x0) {
    MV::WorldObject::BytePacker::BytePacker__ctor(this_02,(MethodInfo *)0x0);
    MV::WorldObject::BytePacker::BytePacker_Write_7
              (this_02,(this->fields).teamCount,(MethodInfo *)0x0);
    this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )(this->fields).actorCounters;
    if (this_00 !=
        (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0)
    {
      value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                        (this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__get_Count__
                        );
      MV::WorldObject::BytePacker::BytePacker_Write_7(this_02,value,(MethodInfo *)0x0);
      this_01 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).actorCounters;
      if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                            &stack0xffffff9c,this_01,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__GetEnumerator__
                           );
        uVar3 = *(ulonglong *)&(pDVar2->_current).value;
        while( true ) {
          pOVar4 = (Object *)uVar3;
          value_00 = 
          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__MoveNext__
          ;
          bVar5 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object_ *)
                             &stack0xffffffb4,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__MoveNext__
                            );
          if (bVar5 == 0) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&stack0xffffffb4,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__Dispose__
                       ,in_stack_6);
            pBVar7 = MV::WorldObject::BytePacker::BytePacker_ToArray(this_02,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uVar1;
            return pBVar7;
          }
          uVar3 = ZEXT48(value_00);
          MV::WorldObject::BytePacker::BytePacker_Write_7
                    (this_02,(int32_t)value_00,(MethodInfo *)0x0);
          if (pOVar4 == (Object *)0x0) break;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          this_02 = (BytePacker *)func_?();
          if (this_02 == (BytePacker *)0x0) break;
          in_stack_6 = (MethodInfo *)&UNK_?;
          MV::WorldObject::BytePacker::BytePacker__ctor(this_02,(MethodInfo *)0x0);
          MV::WorldObject::BytePacker::BytePacker_Write_7
                    (this_02,(int32_t)pOVar4[1].klass,(MethodInfo *)0x0);
          pBVar7 = MV::WorldObject::BytePacker::BytePacker_ToArray(this_02,(MethodInfo *)0x0);
          uVar1 = 0;
          MV::WorldObject::BytePacker::BytePacker_Write_1(this_02,pBVar7,(MethodInfo *)0x0);
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  pBVar7 = (Byte__Array *)(*pcVar8)();
  return pBVar7;
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
  DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = 0;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  iStack_7 = (this->fields).teamCount;
  pOVar8 = (Object *)func_?(TypeInfo__System__Int32,&iStack_7);
  pSVar9 = mscorlib.dll::System::String::String_Format
                     (StringLiteral_Team_count___0__u000A,pOVar8,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).actorCounters;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                        &pDStack_11,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__GetEnumerator__
                       );
    uStack_12 = 0;
    DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)pDVar10->_dictionary;
    DStack_6._version = pDVar10->_version;
    DStack_6._index = pDVar10->_index;
    DStack_6._current.key = (int32_t)(pDVar10->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar10->_current).value;
    uStack_1 = 1;
    pDStack_13 = &DStack_6;
    while( true ) {
      bVar14 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__MoveNext__
                        );
      if (bVar14 == 0) break;
      pOStack_15 = (Object *)DStack_6._current.key;
      pOStack_16 = (Object *)DStack_6._current.key;
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
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).actorCounters;
  pOVar1 = (Object *)func_?(TypeInfo__ActorCounter);
  if (pOVar1 != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
    pOVar1[1].klass = (Object__Class *)value;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (this_00,(Object *)actorNumber,pOVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__set_Item_int__ActorCounter_
                );
      this_01 = (this->fields).actorCounters;
      if (this_01 != (Dictionary_2_System_Int32_ActorCounter_ *)0x0) {
        pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,actorNumber,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__get_Item_int_
                           );
        if (pOVar1 != (Object *)0x0) {
          return (int32_t)pOVar1[1].klass;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
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
  this_00 = (Dictionary_2_System_Int32_ActorCounter_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>);
  if (this_00 != (Dictionary_2_System_Int32_ActorCounter_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Dictionary__
              );
    method_00 = (MethodInfo *)&this->fields;
    (this->fields).actorCounters = this_00;
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
  this_00 = (Dictionary_2_System_Int32_ActorCounter_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>);
  if (this_00 != (Dictionary_2_System_Int32_ActorCounter_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Dictionary__
              );
    (this->fields).actorCounters = this_00;
    func_?(&this->fields,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,in_stack_1);
    if (bp != (BytePacker *)0x0) {
      iVar2 = MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      (this->fields).teamCount = iVar2;
      iVar2 = MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      iVar3 = 0;
      if (0 < iVar2) {
        do {
          key = (Object *)MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
          pAVar4 = TypeInfo__ActorCounter;
          value = (Object *)func_?();
          if (value == (Object *)0x0) goto code_?;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    (value,ExceptionArgument__Enum_obj,in_stack_5);
          pOVar6 = (Object__Class *)
                   MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
          value[1].klass = pOVar6;
          in_stack_5 = (MethodInfo *)(this->fields).actorCounters;
          if (in_stack_5 == (MethodInfo *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)in_stack_5,key,value,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Add_int__ActorCounter_
                    );
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)pAVar4);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  pHVar1 = (HighScore *)func_?(TypeInfo__HighScore);
  if (pHVar1 != (HighScore *)0x0) {
    HighScore::HighScore__ctor(pHVar1,teamScore,actorCounters,(MethodInfo *)0x0);
    return pHVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pHVar1 = (HighScore *)(*pcVar2)();
  return pHVar1;
}

