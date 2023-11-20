
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
    this_00 = (ObjectConstructor_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
              func_?(TypeInfo__System__Func<ScoreActorEntry,_int>);
    Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::ObjectConstructor`1[Unity::IL2CPP::
    Metadata::__Il2CppFullySharedGenericType]::
    ObjectConstructor_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_00,(Object *)0x0,MethodInfo__HighScore___SortDescending_b__2_ScoreActorEntry_,
               (MethodInfo *)0x0);
    TypeInfo__HighScore->static_fields->CS___9__CachedAnonymousMethodDelegate3 =
         (Func_2_ScoreActorEntry_Int32_ *)this_00;
    func_?(TypeInfo__HighScore->static_fields,this_00);
  }
  source = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderByDescending_1
                     ((IEnumerable_1_System_Object_ *)pLVar1,
                      (Func_2_Object_Int32_ *)
                      TypeInfo__HighScore->static_fields->CS___9__CachedAnonymousMethodDelegate3,
                      System__Linq__IOrderedEnumerable<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__OrderByDescending<ScoreActorEntry,_int>_System__Collections__Generic__IEnumerable<ScoreActorEntry>__System__Func<ScoreActorEntry,_int>_
                     );
  pLVar1 = (List_1_ScoreActorEntry_ *)
           System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_8
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
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_ActorCounter>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__Add_ScoreActorEntry_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<ScoreActorEntry>);
    func_?(&TypeInfo__ScoreActorEntry);
    cRam_? = '\x01';
  }
  pLVar4 = (List_1_ScoreActorEntry_ *)
           func_?(TypeInfo__System__Collections__Generic__List<ScoreActorEntry>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar4,
             MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__List__);
  pMVar5 = (MethodInfo *)&this->fields;
  (this->fields).highScoreEntries = pLVar4;
  func_?(pMVar5,pLVar4);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,pMVar5);
  (this->fields).teamScore = teamScore;
  if (actorCounters != (Dictionary_2_System_Int32_ActorCounter_ *)0x0) {
    pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffffa8,(Dictionary_2_System_UInt32_System_Object_ *)actorCounters,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__GetEnumerator__
                       );
    method_00 = (Object__Class *)pDVar6->_dictionary;
    pOVar7 = (Object__Class *)(pDVar6->_current).key;
    uVar8 = *(undefined8 *)&(pDVar6->_current).value;
    uStack_1 = 1;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                         &stack0xffffffc0,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&stack0xffffffc0,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__Dispose__
                   ,(MethodInfo *)method_00);
        uStack_1 = 0xffffffff;
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        pLVar4 = (this->fields).highScoreEntries;
        if (TypeInfo__HighScore->static_fields->CS___9__CachedAnonymousMethodDelegate3 ==
            (Func_2_ScoreActorEntry_Int32_ *)0x0) {
          this_00 = (ObjectConstructor_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                    func_?();
          Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::ObjectConstructor`1[Unity::IL2CPP::
          Metadata::__Il2CppFullySharedGenericType]::
          ObjectConstructor_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                    (this_00,(Object *)0x0,
                     MethodInfo__HighScore___SortDescending_b__2_ScoreActorEntry_,(MethodInfo *)0x0)
          ;
          TypeInfo__HighScore->static_fields->CS___9__CachedAnonymousMethodDelegate3 =
               (Func_2_ScoreActorEntry_Int32_ *)this_00;
          func_?();
        }
        source = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderByDescending_1
                           ((IEnumerable_1_System_Object_ *)pLVar4,
                            (Func_2_Object_Int32_ *)
                            TypeInfo__HighScore->static_fields->
                            CS___9__CachedAnonymousMethodDelegate3,
                            System__Linq__IOrderedEnumerable<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__OrderByDescending<ScoreActorEntry,_int>_System__Collections__Generic__IEnumerable<ScoreActorEntry>__System__Func<ScoreActorEntry,_int>_
                           );
        pLVar4 = (List_1_ScoreActorEntry_ *)
                 System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_8
                           ((IEnumerable_1_System_Object_ *)source,
                            System__Collections__Generic__List<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__ToList<ScoreActorEntry>_System__Collections__Generic__IEnumerable<ScoreActorEntry>_
                           );
        (this->fields).highScoreEntries = pLVar4;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pLVar4 = (this->fields).highScoreEntries;
      pOStack_10 = (Object *)uVar8;
      if (pOStack_10 == (Object *)0x0) break;
      pOVar11 = pOStack_10[1].klass;
      pMVar5 = (MethodInfo *)&UNK_?;
      value = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                (value,ExceptionArgument__Enum_obj,pMVar5);
      value[1].klass = pOVar7;
      value[1].monitor = (MonitorData *)pOVar11;
      if (pLVar4 == (List_1_ScoreActorEntry_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)pLVar4,value,
                 MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__Add_ScoreActorEntry_
                );
    }
  }
  func_?();
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

