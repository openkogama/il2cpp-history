
/* Int32 GetActorCount(Int32) */

int32_t MVWorldObject.dll::TeamCounter::TeamCounter_GetActorCount
                  (TeamCounter *this,int32_t actorNumber,MethodInfo *method)

{
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
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).actorCounters;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,actorNumber,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      return 0;
    }
    this_01 = (this->fields).actorCounters;
    if (this_01 != (Dictionary_2_System_Int32_ActorCounter_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)this_01,actorNumber,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__get_Item_int_
                         );
      if (pOVar2 != (Object *)0x0) {
        return *(int32_t *)&pOVar2[1].klass;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar1 = (*pcVar3)();
  return iVar1;
}


/* Int32 Increment(Int32, Int32, Boolean) */

int32_t MVWorldObject.dll::TeamCounter::TeamCounter_Increment
                  (TeamCounter *this,int32_t actorNumber,int32_t value,bool includeTeamScore,
                  MethodInfo *method)

{
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
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).actorCounters;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,actorNumber,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      pDVar2 = (this->fields).actorCounters;
      pOVar3 = (Object *)FUN_?(TypeInfo__ActorCounter);
      *(undefined4 *)&pOVar3[1].klass = 0;
      if (pDVar2 == (Dictionary_2_System_Int32_ActorCounter_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryInsert
                ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,actorNumber,pOVar3,
                 CONCAT31(in_register_00000089,2),
                 MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Add_int__ActorCounter_
                 ->klass->rgctx_data[0x22].method);
    }
    if (includeTeamScore != 0) {
      piVar4 = &(this->fields).teamCount;
      *piVar4 = *piVar4 + value;
    }
    pDVar2 = (this->fields).actorCounters;
    if (pDVar2 != (Dictionary_2_System_Int32_ActorCounter_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,actorNumber,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__get_Item_int_
                         );
      if (pOVar3 != (Object *)0x0) {
        iVar5 = *(int *)&pOVar3[1].klass + value;
        *(int *)&pOVar3[1].klass = iVar5;
        return iVar5;
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  iVar1 = (*pcVar6)();
  return iVar1;
}


/* Void RemoveStatsFromActor(Int32) */

void MVWorldObject.dll::TeamCounter::TeamCounter_RemoveStatsFromActor
               (TeamCounter *this,int32_t actorNumber,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Remove_int_;
  pDVar2 = (this->fields).actorCounters;
  if (pDVar2 == (Dictionary_2_System_Int32_ActorCounter_ *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar4 = (ulonglong)(uint)actorNumber;
  if ((pDVar2->fields)._buckets != (Int32__Array *)0x0) {
    pIVar5 = (pDVar2->fields)._comparer;
    if (pIVar5 != (IEqualityComparer_1_System_Int32_ *)0x0) {
      pvVar6 = MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Remove_int_
                ->klass->rgctx_data[1].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar6 + 0x135) & 1) == 0) {
        pvVar6 = (void *)FUN_?(pvVar6);
      }
      actorNumber = FUN_?(1,pvVar6,pIVar5,uVar4);
    }
    pIVar7 = (pDVar2->fields)._buckets;
    if (pIVar7 == (Int32__Array *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar8 = (int)(actorNumber & 0x7fffffffU) % (int)pIVar7->max_length;
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
      if (pDVar12 == (Dictionary_2_TKey_TValue_Entry_System_Int32_ActorCounter___Array *)0x0)
      goto code_?;
      if ((uint)pDVar12->max_length <= uVar11) goto code_?;
      if (pDVar12->vector[(int)uVar11].hashCode == (actorNumber & 0x7fffffffU)) {
        pIVar13 = pMVar1->klass->rgctx_data;
        if ((pDVar2->fields)._comparer == (IEqualityComparer_1_System_Int32_ *)0x0) {
          pEVar14 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Int32]::
                    EqualityComparer_1_System_Int32__get_Default(pIVar13[3].method);
          if (pEVar14 == (EqualityComparer_1_System_Int32_ *)0x0) goto code_?;
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
            if (pDVar16 == (Dictionary_2_TKey_TValue_Entry_System_Int32_ActorCounter___Array *)0x0)
            goto code_?;
            if ((uint)pDVar16->max_length <= uVar10) goto code_?;
            pDVar16->vector[(int)uVar10].next = pDVar12->vector[(int)uVar11].next;
          }
          pDVar12->vector[(int)uVar11].hashCode = -1;
          pDVar12->vector[(int)uVar11].next = (pDVar2->fields)._freeList;
          pDVar12->vector[(int)uVar11].value = (ActorCounter *)0x0;
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

String * MVWorldObject.dll::TeamCounter::TeamCounter_ToString(TeamCounter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__GetEnumerator__
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
    FUN_?(&StringLiteral_Actor_number___0___Count___1_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Team_count___0__u000A);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStackX_8[0] = (this->fields).teamCount;
  pOVar1 = (Object *)FUN_?(uRam_?,auStackX_8);
  pSVar2 = StringLiteral_Team_count___0__u000A;
  PStack_3._arg0 = (Object *)0x0;
  PStack_3._arg1 = (Object *)0x0;
  PStack_3._arg2 = (Object *)0x0;
  PStack_3._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_3,pOVar1,(MethodInfo *)0x0);
  PStack_4._arg0 = PStack_3._arg0;
  PStack_4._arg1 = PStack_3._arg1;
  PStack_4._arg2 = PStack_3._arg2;
  PStack_4._args = PStack_3._args;
  pSVar2 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar2,&PStack_4,(MethodInfo *)0x0);
  PStack_5._arg0 = (Object *)(this->fields).actorCounters;
  if ((Dictionary_2_System_UInt32_System_Object_ *)PStack_5._arg0 ==
      (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar6)();
    return pSVar2;
  }
  PStack_5._arg2 = (Object *)0x0;
  PStack_5._args = (Object__Array *)0x0;
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&PStack_5 >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar9 = *puVar8;
      LOCK();
      uVar10 = *puVar8;
      if (uVar9 == uVar10) {
        *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (uVar9 != uVar10);
  }
  PStack_5._arg1 =
       (Object *)
       (ulonglong)
       (uint)(((Dictionary_2_System_UInt32_System_Object_ *)PStack_5._arg0)->fields)._version;
  uStack_11 = 2;
  auStack_12._8_8_ = PStack_5._arg1;
  KStack_13.key = 0;
  KStack_13._4_4_ = 0;
  KStack_13.value = (Object *)0x0;
  uStack_14._0_4_ = 2;
  uStack_14._4_4_ = 0;
  uStack_15 = 0;
  puStack_16 = auStack_12;
  auStack_12._0_8_ = PStack_5._arg0;
  while (bVar17 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                 Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                           ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                            auStack_12,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__MoveNext__
                           ), pOVar1 = KStack_13.value, bVar17 != 0) {
    auStackX_8[0] = KStack_13.key;
    arg0 = (Object *)FUN_?(uRam_?,auStackX_8);
    pSVar18 = StringLiteral_Actor_number___0___Count___1_;
    PStack_19._arg0 = (Object *)0x0;
    PStack_19._arg1 = (Object *)0x0;
    PStack_19._arg2 = (Object *)0x0;
    PStack_19._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1(&PStack_19,arg0,pOVar1,(MethodInfo *)0x0)
    ;
    PStack_4._arg0 = PStack_19._arg0;
    PStack_4._arg1 = PStack_19._arg1;
    PStack_4._arg2 = PStack_19._arg2;
    PStack_4._args = PStack_19._args;
    arg0_00 = mscorlib.dll::System::String::String_FormatHelper
                        ((IFormatProvider *)0x0,pSVar18,&PStack_4,(MethodInfo *)0x0);
    pSVar18 = StringLiteral__0_u000A;
    PStack_4._arg0 = (Object *)0x0;
    PStack_4._arg1 = (Object *)0x0;
    PStack_4._arg2 = (Object *)0x0;
    PStack_4._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor
              (&PStack_4,(Object *)arg0_00,(MethodInfo *)0x0);
    PStack_5._arg0 = PStack_4._arg0;
    PStack_5._arg1 = PStack_4._arg1;
    PStack_5._arg2 = PStack_4._arg2;
    PStack_5._args = PStack_4._args;
    pSVar18 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar18,&PStack_5,(MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_4(pSVar2,pSVar18,(MethodInfo *)0x0);
  }
  return pSVar2;
}


/* Int32 Update(Int32, Int32, Boolean) */

int32_t MVWorldObject.dll::TeamCounter::TeamCounter_Update
                  (TeamCounter *this,int32_t actorNumber,int32_t value,bool includeTeamScore,
                  MethodInfo *method)

{
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
    (this->fields).teamCount = value;
  }
  pDVar1 = (this->fields).actorCounters;
  pOVar2 = (Object *)FUN_?(TypeInfo__ActorCounter);
  *(int32_t *)&pOVar2[1].klass = value;
  if (pDVar1 != (Dictionary_2_System_Int32_ActorCounter_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryInsert
              ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,actorNumber,pOVar2,
               CONCAT31(in_register_00000089,1),
               MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__set_Item_int__ActorCounter_
               ->klass->rgctx_data[0x22].method);
    pDVar1 = (this->fields).actorCounters;
    if (pDVar1 != (Dictionary_2_System_Int32_ActorCounter_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,actorNumber,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__get_Item_int_
                         );
      if (pOVar2 != (Object *)0x0) {
        return *(int32_t *)&pOVar2[1].klass;
      }
    }
  }
  FUN_?();
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
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Dictionary__);
  bVar1 = iRam_? != 0;
  (this->fields).actorCounters = (Dictionary_2_System_Int32_ActorCounter_ *)this_00;
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


/* TeamCounter(BytePacker) */

void MVWorldObject.dll::TeamCounter::TeamCounter__ctor_1
               (TeamCounter *this,BytePacker *bp,MethodInfo *method)

{
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
  this_01 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Dictionary__);
  bVar1 = iRam_? != 0;
  (this->fields).actorCounters = (Dictionary_2_System_Int32_ActorCounter_ *)this_01;
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
  if (bp == (BytePacker *)0x0) {
code_?:
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar7 = MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
  (this->fields).teamCount = iVar7;
  iVar7 = MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
  iVar8 = 0;
  if (0 < iVar7) {
    do {
      key = MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      value = (Object *)FUN_?(TypeInfo__ActorCounter);
      iVar9 = MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      *(int32_t *)&value[1].klass = iVar9;
      this_00 = (this->fields).actorCounters;
      if (this_00 == (Dictionary_2_System_Int32_ActorCounter_ *)0x0) goto code_?;
      in_R9D = CONCAT31((int3)(in_R9D >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryInsert
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,value,in_R9D,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Add_int__ActorCounter_
                 ->klass->rgctx_data[0x22].method);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar7);
  }
  return;
}


/* HighScore get_HighScore() */

HighScore *
MVWorldObject.dll::TeamCounter::TeamCounter_get_HighScore(TeamCounter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HighScore);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  teamScore = (this->fields).teamCount;
  actorCounters = (this->fields).actorCounters;
  this_00 = (HighScore *)FUN_?(TypeInfo__HighScore);
  HighScore::HighScore__ctor(this_00,teamScore,actorCounters,(MethodInfo *)0x0);
  return this_00;
}

