
/* Void Sort() */

void MVWorldObject.dll::HighScore::HighScore_Sort(HighScore *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Linq__IOrderedEnumerable<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__OrderBy<ScoreActorEntry,_int>_System__Collections__Generic__IEnumerable<ScoreActorEntry>__System__Func<ScoreActorEntry,_int>_
                   );
    func_?(&
                    System__Collections__Generic__List<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__ToList<ScoreActorEntry>_System__Collections__Generic__IEnumerable<ScoreActorEntry>_
                   );
    func_?(&TypeInfo__System__Func<ScoreActorEntry,_int>);
    func_?(&MethodInfo__HighScore___Sort_b__0_ScoreActorEntry_);
    func_?(&TypeInfo__HighScore);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).highScoreEntries;
  if (TypeInfo__HighScore->static_fields->CS___9__CachedAnonymousMethodDelegate1 ==
      (Func_2_ScoreActorEntry_Int32_ *)0x0) {
    this_00 = (RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)
              func_?(TypeInfo__System__Func<ScoreActorEntry,_int>);
    if (this_00 == (RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    mscorlib.dll::System::Reflection::RuntimePropertyInfo+Getter`2[System::Object,System::Object]::
    RuntimePropertyInfo_Getter_2_System_Object_System_Object___ctor
              (this_00,(Object *)0x0,MethodInfo__HighScore___Sort_b__0_ScoreActorEntry_,
               (MethodInfo *)0x0);
    TypeInfo__HighScore->static_fields->CS___9__CachedAnonymousMethodDelegate1 =
         (Func_2_ScoreActorEntry_Int32_ *)this_00;
    func_?(TypeInfo__HighScore->static_fields,this_00);
  }
  source = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_3
                     ((IEnumerable_1_System_Object_ *)pLVar1,
                      (Func_2_Object_Single_ *)
                      TypeInfo__HighScore->static_fields->CS___9__CachedAnonymousMethodDelegate1,
                      System__Linq__IOrderedEnumerable<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__OrderBy<ScoreActorEntry,_int>_System__Collections__Generic__IEnumerable<ScoreActorEntry>__System__Func<ScoreActorEntry,_int>_
                     );
  pLVar1 = (List_1_ScoreActorEntry_ *)
           System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_5
                     ((IEnumerable_1_System_Object_ *)source,
                      System__Collections__Generic__List<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__ToList<ScoreActorEntry>_System__Collections__Generic__IEnumerable<ScoreActorEntry>_
                     );
  (this->fields).highScoreEntries = pLVar1;
  func_?(&this->fields,pLVar1);
  return;
}


/* Void SortDescending() */

void MVWorldObject.dll::HighScore::HighScore_SortDescending(HighScore *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Linq__IOrderedEnumerable<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__OrderByDescending<ScoreActorEntry,_int>_System__Collections__Generic__IEnumerable<ScoreActorEntry>__System__Func<ScoreActorEntry,_int>_
                   );
    func_?(&
                    System__Collections__Generic__List<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__ToList<ScoreActorEntry>_System__Collections__Generic__IEnumerable<ScoreActorEntry>_
                   );
    func_?(&TypeInfo__System__Func<ScoreActorEntry,_int>);
    func_?(&MethodInfo__HighScore___SortDescending_b__2_ScoreActorEntry_);
    func_?(&TypeInfo__HighScore);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).highScoreEntries;
  if (TypeInfo__HighScore->static_fields->CS___9__CachedAnonymousMethodDelegate3 ==
      (Func_2_ScoreActorEntry_Int32_ *)0x0) {
    this_00 = (RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)
              func_?(TypeInfo__System__Func<ScoreActorEntry,_int>);
    if (this_00 == (RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    mscorlib.dll::System::Reflection::RuntimePropertyInfo+Getter`2[System::Object,System::Object]::
    RuntimePropertyInfo_Getter_2_System_Object_System_Object___ctor
              (this_00,(Object *)0x0,MethodInfo__HighScore___SortDescending_b__2_ScoreActorEntry_,
               (MethodInfo *)0x0);
    TypeInfo__HighScore->static_fields->CS___9__CachedAnonymousMethodDelegate3 =
         (Func_2_ScoreActorEntry_Int32_ *)this_00;
    func_?(&TypeInfo__HighScore->static_fields->CS___9__CachedAnonymousMethodDelegate3,
                    this_00);
  }
  source = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderByDescending_2
                     ((IEnumerable_1_System_Object_ *)pLVar1,
                      (Func_2_Object_Object_ *)
                      TypeInfo__HighScore->static_fields->CS___9__CachedAnonymousMethodDelegate3,
                      System__Linq__IOrderedEnumerable<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__OrderByDescending<ScoreActorEntry,_int>_System__Collections__Generic__IEnumerable<ScoreActorEntry>__System__Func<ScoreActorEntry,_int>_
                     );
  pLVar1 = (List_1_ScoreActorEntry_ *)
           System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_5
                     ((IEnumerable_1_System_Object_ *)source,
                      System__Collections__Generic__List<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__ToList<ScoreActorEntry>_System__Collections__Generic__IEnumerable<ScoreActorEntry>_
                     );
  (this->fields).highScoreEntries = pLVar1;
  func_?(&this->fields,pLVar1);
  return;
}


/* String ToString() */

String * MVWorldObject.dll::HighScore::HighScore_ToString(HighScore *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScoreActorEntry>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScoreActorEntry>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScoreActorEntry>__get_Current__
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__GetEnumerator__
                   );
    func_?(&StringLiteral__0_u000A);
    func_?(&StringLiteral_TeamScore___0__u000A);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pOStack_6 = (Object__Class *)0x0;
  iStack_7 = (this->fields).teamScore;
  arg0 = (Object *)func_?(TypeInfo__System__Int32,&iStack_7);
  str0 = (MethodInfo *)
         mscorlib.dll::System::String::String_Format
                   (StringLiteral_TeamScore___0__u000A,arg0,(MethodInfo *)0x0);
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).highScoreEntries;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffffd4,this_00,
                        MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__GetEnumerator__
                       );
    arg0_00 = pLVar8->_current;
    uStack_1 = 1;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&pOStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScoreActorEntry>__MoveNext__
                        );
      if (bVar9 == 0) break;
      pSVar10 = mscorlib.dll::System::String::String_Format
                         (StringLiteral__0_u000A,(Object *)arg0_00,(MethodInfo *)0x0);
      in_stack_11 = str0;
      str0 = (MethodInfo *)
             mscorlib.dll::System::String::String_Concat_3((String *)str0,pSVar10,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&pOStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScoreActorEntry>__Dispose__
               ,in_stack_11);
    *unaff_FS_OFFSET = uStack_3;
    return (String *)str0;
  }
  func_?();
  func_?();
  pcVar12 = (code *)swi(3);
  pSVar10 = (String *)(*pcVar12)();
  return pSVar10;
}


/* HighScore(Int32, Dictionary`2[System.Int32,ActorCounter]) */

void MVWorldObject.dll::HighScore::HighScore__ctor
               (HighScore *this,int32_t teamScore,
               Dictionary_2_System_Int32_ActorCounter_ *actorCounters,MethodInfo *method)

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
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_ActorCounter>__get_Key__
                   );
    in_stack_6 =
         &MethodInfo__System__Collections__Generic__KeyValuePair<int,_ActorCounter>__get_Value__;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__Add_ScoreActorEntry_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<ScoreActorEntry>);
    func_?(&TypeInfo__ScoreActorEntry);
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
  pLVar8 = (List_1_ScoreActorEntry_ *)
           func_?(TypeInfo__System__Collections__Generic__List<ScoreActorEntry>);
  if (pLVar8 != (List_1_ScoreActorEntry_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)pLVar8,
               MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__List__);
    (this->fields).highScoreEntries = pLVar8;
    func_?(&this->fields,pLVar8);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)in_stack_6);
    (this->fields).teamScore = teamScore;
    if (actorCounters != (Dictionary_2_System_Int32_ActorCounter_ *)0x0) {
      pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                          &stack0xffffffa0,
                          (Dictionary_2_System_Object_System_Object_ *)actorCounters,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__GetEnumerator__
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
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__MoveNext__
                          );
        if (bVar12 == 0) break;
        pLStack_13 = (this->fields).highScoreEntries;
        pIStack_14 = (Int32__Array *)DStack_7._current.key;
        if (DStack_7._current.value == (Object *)0x0) goto code_?;
        pDStack_15 = (Dictionary_2_TKey_TValue_Entry_System_Int32_ActorCounter___Array *)
                     DStack_7._current.value[1].klass;
        value = (MethodInfo *)func_?();
        if (value == (MethodInfo *)0x0) goto code_?;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)actorCounters);
        ((Dictionary_2_System_Int32_ActorCounter___Fields *)&value->invoker_method)->_buckets =
             pIStack_14;
        value->name = (char *)pDStack_15;
        if (pLStack_13 == (List_1_ScoreActorEntry_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)pLStack_13,(Object *)value,
                   MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__Add_ScoreActorEntry_
                  );
        actorCounters = (Dictionary_2_System_Int32_ActorCounter_ *)value;
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&DStack_7,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__Dispose__
                 ,in_stack_16);
      uStack_1 = 0xffffffff;
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pLStack_13 = (this->fields).highScoreEntries;
      if (TypeInfo__HighScore->static_fields->CS___9__CachedAnonymousMethodDelegate3 ==
          (Func_2_ScoreActorEntry_Int32_ *)0x0) {
        this_00 = (RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)func_?();
        if (this_00 == (RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Reflection::RuntimePropertyInfo+Getter`2[System::Object,System::
        Object]::RuntimePropertyInfo_Getter_2_System_Object_System_Object___ctor
                  (this_00,(Object *)0x0,
                   MethodInfo__HighScore___SortDescending_b__2_ScoreActorEntry_,(MethodInfo *)0x0);
        TypeInfo__HighScore->static_fields->CS___9__CachedAnonymousMethodDelegate3 =
             (Func_2_ScoreActorEntry_Int32_ *)this_00;
        func_?(&TypeInfo__HighScore->static_fields->CS___9__CachedAnonymousMethodDelegate3,
                        this_00);
      }
      source = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderByDescending_2
                         ((IEnumerable_1_System_Object_ *)pLStack_13,
                          (Func_2_Object_Object_ *)
                          TypeInfo__HighScore->static_fields->CS___9__CachedAnonymousMethodDelegate3
                          ,
                          System__Linq__IOrderedEnumerable<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__OrderByDescending<ScoreActorEntry,_int>_System__Collections__Generic__IEnumerable<ScoreActorEntry>__System__Func<ScoreActorEntry,_int>_
                         );
      pLVar8 = (List_1_ScoreActorEntry_ *)
               System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_5
                         ((IEnumerable_1_System_Object_ *)source,
                          System__Collections__Generic__List<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__ToList<ScoreActorEntry>_System__Collections__Generic__IEnumerable<ScoreActorEntry>_
                         );
      (this->fields).highScoreEntries = pLVar8;
      func_?();
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  uVar17 = func_?();
  func_?(uVar17);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}

