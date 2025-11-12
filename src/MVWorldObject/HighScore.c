
/* Void SortDescending() */

void MVWorldObject.dll::HighScore::HighScore_SortDescending(HighScore *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  System__Linq__IOrderedEnumerable<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__OrderByDescending<ScoreActorEntry,_int>_System__Collections__Generic__IEnumerable<ScoreActorEntry>__System__Func<ScoreActorEntry,_int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__List<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__ToList<ScoreActorEntry>_System__Collections__Generic__IEnumerable<ScoreActorEntry>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<ScoreActorEntry,_int>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__HighScore____c___SortDescending_b__4_0_ScoreActorEntry_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__HighScore____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).highScoreEntries;
  if (*(int *)&(TypeInfo__HighScore____c->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = TypeInfo__HighScore____c->static_fields->__9__4_0;
  if (this_00 == (Func_2_ScoreActorEntry_Int32_ *)0x0) {
    if (*(int *)&(TypeInfo__HighScore____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    object = TypeInfo__HighScore____c->static_fields->__9;
    this_00 = (Func_2_ScoreActorEntry_Int32_ *)
              FUN_?(TypeInfo__System__Func<ScoreActorEntry,_int>);
    mscorlib.dll::System::Func`2[Object,Int32Enum]::Func_2_Object_Int32Enum___ctor
              ((Func_2_Object_Int32Enum_ *)this_00,(Object *)object,
               MethodInfo__HighScore____c___SortDescending_b__4_0_ScoreActorEntry_,(MethodInfo *)0x0
              );
    TypeInfo__HighScore____c->static_fields->__9__4_0 = this_00;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__HighScore____c->static_fields->__9__4_0 >> 0xc);
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
  }
  collection = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderByDescending_1
                         ((IEnumerable_1_System_Object_ *)pLVar1,(Func_2_Object_Int32_ *)this_00,
                          System__Linq__IOrderedEnumerable<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__OrderByDescending<ScoreActorEntry,_int>_System__Collections__Generic__IEnumerable<ScoreActorEntry>__System__Func<ScoreActorEntry,_int>_
                         );
  pMVar7 = 
  System__Collections__Generic__List<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__ToList<ScoreActorEntry>_System__Collections__Generic__IEnumerable<ScoreActorEntry>_
  ;
  if ((
      System__Collections__Generic__List<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__ToList<ScoreActorEntry>_System__Collections__Generic__IEnumerable<ScoreActorEntry>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(
                 System__Collections__Generic__List<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__ToList<ScoreActorEntry>_System__Collections__Generic__IEnumerable<ScoreActorEntry>_
                 );
  }
  if (collection == (IOrderedEnumerable_1_System_Object_ *)0x0) {
    s = (String *)func_?(&StringLiteral_source);
    pEVar8 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull(s,(MethodInfo *)0x0);
    FUN_?(pEVar8,pMVar7);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pvVar10 = (pMVar7->field7_0x38).rgctx_data[1].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar10 + 0x135) & 1) == 0) {
    pvVar10 = (void *)FUN_?(pvVar10);
  }
  pLVar1 = (List_1_ScoreActorEntry_ *)FUN_?(pvVar10);
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object___ctor_1
            ((List_1_System_Object_ *)pLVar1,(IEnumerable_1_System_Object_ *)collection,
             (pMVar7->field7_0x38).rgctx_data[2].method);
  bVar6 = iRam_? != 0;
  (this->fields).highScoreEntries = pLVar1;
  if (bVar6) {
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
  return;
}


/* String ToString() */

String * MVWorldObject.dll::HighScore::HighScore_ToString(HighScore *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScoreActorEntry>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScoreActorEntry>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScoreActorEntry>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__GetEnumerator__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TeamScore___0__u000A);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSStackX_8 = (String *)CONCAT44(pSStackX_8._4_4_,(this->fields).teamScore);
  arg0 = (Object *)FUN_?(uRam_?,&pSStackX_8);
  pSVar1 = StringLiteral_TeamScore___0__u000A;
  PStack_2._arg0 = (Object *)0x0;
  PStack_2._arg1 = (Object *)0x0;
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_2,arg0,(MethodInfo *)0x0);
  PStack_3._arg0 = PStack_2._arg0;
  PStack_3._arg1 = PStack_2._arg1;
  PStack_3._arg2 = PStack_2._arg2;
  PStack_3._args = PStack_2._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
  LStack_4._list = (List_1_System_Object_ *)(this->fields).highScoreEntries;
  if ((List_1_ScoreActorEntry_ *)LStack_4._list == (List_1_ScoreActorEntry_ *)0x0) {
    pSStackX_8 = pSVar1;
    FUN_?();
    pcVar5 = (code *)swi(3);
    pSVar1 = (String *)(*pcVar5)();
    return pSVar1;
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&uStack_7 >> 0xc);
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
  pLStack_11 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)(uint)(((List_1_ScoreActorEntry_ *)LStack_4._list)->fields)._version <<
               0x20);
  uStack_12 = 0;
  LStack_4._8_8_ = pLStack_11;
  LStack_4._current = (Object *)0x0;
  uStack_7 = 0;
  pLStack_11 = &LStack_4;
  while (pSStackX_8 = pSVar1,
        bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_4,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScoreActorEntry>__MoveNext__
                          ), pSVar14 = StringLiteral__0_u000A, bVar13 != 0) {
    PStack_3._arg0 = (Object *)0x0;
    PStack_3._arg1 = (Object *)0x0;
    PStack_3._arg2 = (Object *)0x0;
    PStack_3._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor
              (&PStack_3,LStack_4._current,(MethodInfo *)0x0);
    PStack_15._arg0 = PStack_3._arg0;
    PStack_15._arg1 = PStack_3._arg1;
    PStack_15._arg2 = PStack_3._arg2;
    PStack_15._args = PStack_3._args;
    pSVar14 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar14,&PStack_15,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_4(pSVar1,pSVar14,(MethodInfo *)0x0);
  }
  return pSVar1;
}


/* HighScore(Int32, Dictionary`2[System.Int32,ActorCounter]) */

void MVWorldObject.dll::HighScore::HighScore__ctor
               (HighScore *this,int32_t teamScore,
               Dictionary_2_System_Int32_ActorCounter_ *actorCounters,MethodInfo *method)

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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__Add_ScoreActorEntry_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<ScoreActorEntry>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ScoreActorEntry);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_ScoreActorEntry_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<ScoreActorEntry>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__List__);
  (this->fields).highScoreEntries = pLVar1;
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
  iVar7 = iRam_?;
  (this->fields).teamScore = teamScore;
  if (actorCounters == (Dictionary_2_System_Int32_ActorCounter_ *)0x0) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    uStack_8 = 0;
    uStack_9 = 0;
    if (iVar7 != 0) {
      uVar2 = (uint)((ulonglong)&pDStack_10 >> 0xc);
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
    uStack_11 = (ulonglong)(uint)(actorCounters->fields)._version;
    uStack_12 = 2;
    DStack_13._version = (undefined4)uStack_11;
    DStack_13._index = uStack_11._4_4_;
    DStack_13._current.key = 0;
    DStack_13._current._4_4_ = 0;
    DStack_13._current.value = (Object *)0x0;
    DStack_13._getEnumeratorRetType = 2;
    DStack_13._36_4_ = 0;
    pDStack_10 = actorCounters;
    DStack_13._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)actorCounters;
    while( true ) {
      bVar14 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
               Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                         (&DStack_13,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__MoveNext__
                         );
      if (bVar14 == 0) {
        HighScore_SortDescending(this,(MethodInfo *)0x0);
        return;
      }
      uVar15 = DStack_13._current.key;
      pLVar1 = (this->fields).highScoreEntries;
      if (DStack_13._current.value == (Object *)0x0) break;
      uVar16 = *(undefined4 *)&DStack_13._current.value[1].klass;
      item = (Object *)FUN_?(TypeInfo__ScoreActorEntry);
      *(uint32_t *)&item[1].klass = uVar15;
      *(undefined4 *)((longlong)&item[1].klass + 4) = uVar16;
      pMVar17 = MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__Add_ScoreActorEntry_
      ;
      if (pLVar1 == (List_1_ScoreActorEntry_ *)0x0) goto code_?;
      piVar18 = &(pLVar1->fields)._version;
      *piVar18 = *piVar18 + 1;
      pSVar19 = (pLVar1->fields)._items;
      uVar2 = (pLVar1->fields)._size;
      if (pSVar19 == (ScoreActorEntry__Array *)0x0) goto code_?;
      if (uVar2 < (uint)pSVar19->max_length) {
        (pLVar1->fields)._size = uVar2 + 1;
        FUN_?(pSVar19,(longlong)(int)uVar2,item);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)pLVar1,item,pMVar17->klass->rgctx_data[0xe].method);
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}

